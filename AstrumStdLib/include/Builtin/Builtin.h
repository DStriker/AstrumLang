#pragma once
#include <map>
#include <vector>

#include "Char.h"
#include "DebugPrint.h"
#include "Decimal.h"
#include "Exceptions.h"
#include "Floating.h"
#include "FuncParameterMode.h"
#include "FunctionRef.h"
#include "Int128.h"
#include "LocalFunctions.h"
#include "RawPtr.h"
#include "Str.h"
#include "Tests.h"
#include "Types.h"
#include "Defer.h"
#include "UnsafeContext.h"

namespace CppAdvance {
	extern CPPADVANCE_DLLEXPORT int AstrumMainStartup(int argc, char** argv);
	extern CPPADVANCE_DLLEXPORT int TestMain(int argc, char** argv);
	using ADV_MAIN_FUNC_SIGNATURE = i32 (*)(/*Array<Str>*/);
	extern CPPADVANCE_DLLEXPORT ADV_MAIN_FUNC_SIGNATURE ApplicationMainPtr;
}  // namespace CppAdvance

#ifdef ADV_UNITTEST
#define ADV_ENTRY_POINT(Namespace)                                                                 \
	}                                                                                              \
	int main(int argc, char** argv) { return CppAdvance::TestMain(argc, argv); }                   \
	namespace Namespace {

#else
#define ADV_ENTRY_POINT(Namespace)                                                                 \
	}                                                                                              \
	int main(int argc, char** argv) {                                                              \
		CppAdvance::ApplicationMainPtr = &Namespace ::__Astrum_Main;                               \
		return CppAdvance::AstrumMainStartup(argc, argv);                                          \
	}                                                                                              \
	namespace Namespace {

#endif

#define ADV_LOOP_LABELS(Label)                                                                     \
	goto CONTINUE_##Label;                                                                         \
	CONTINUE_##Label : continue;                                                                   \
	goto BREAK_##Label;                                                                            \
	BREAK_##Label : break;

#define ADV_FORWARD(x) std::forward<decltype(x)>(x)

#define ASTRUM_NAMEOF(x) #x

#define ADV_EXPRESSION_BODY(...)                                                                   \
	if constexpr (!std::is_void_v<decltype(__VA_ARGS__)>)                                          \
		return __VA_ARGS__;                                                                        \
	else                                                                                           \
		__VA_ARGS__;

template <class T>
struct ___dependent_false : std::false_type {};

#define ADV_UFCS_EMPTY(...)
#define ADV_UFCS_IDENTITY(...) __VA_ARGS__
#define ADV_UFCS_REMPARENS(...) __VA_ARGS__

#define ADV_UFCS_IS_NOTHROW(MVFW, QUAL, TEMPKW, ...)                                               \
	requires {                                                                                     \
		requires requires {                                                                        \
			std::declval<Obj>().ADV_UFCS_REMPARENS QUAL TEMPKW __VA_ARGS__(                        \
			    std::declval<Args>()...);                                                          \
		};                                                                                         \
		requires noexcept(std::declval<Obj>().ADV_UFCS_REMPARENS QUAL TEMPKW __VA_ARGS__(          \
		    std::declval<Args>()...));                                                             \
	}                                                                                              \
	|| requires {                                                                                  \
		requires !requires {                                                                       \
			std::declval<Obj>().ADV_UFCS_REMPARENS QUAL TEMPKW __VA_ARGS__(                        \
			    std::declval<Args>()...);                                                          \
		};                                                                                         \
		requires noexcept(MVFW(ADV_UFCS_REMPARENS QUAL __VA_ARGS__)(std::declval<Obj>(),           \
		                                                            std::declval<Args>()...));     \
	}
#define ADV_UFCS_IS_NOTHROW_PARAM(...)
#define ADV_UFCS_IS_NOTHROW_ARG(MVFW, QUAL, TEMPKW, ...)                                           \
	ADV_UFCS_IS_NOTHROW(MVFW, QUAL, TEMPKW, __VA_ARGS__)
#if defined(__GNUC__) && !defined(__clang__)
#undef ADV_UFCS_IS_NOTHROW_PARAM
#undef ADV_UFCS_IS_NOTHROW_ARG
#define ADV_UFCS_IS_NOTHROW_PARAM(MVFWD, QUALID, TEMPKW, ...)                                      \
	, bool IsNothrow = ADV_UFCS_IS_NOTHROW(MVFWD, QUALID, TEMPKW, __VA_ARGS__)
#define ADV_UFCS_IS_NOTHROW_ARG(...) IsNothrow
#if __GNUC__ < 11
#undef ADV_UFCS_IS_NOTHROW_PARAM
#undef ADV_UFCS_IS_NOTHROW_ARG
#define ADV_UFCS_IS_NOTHROW_PARAM(...)
#define ADV_UFCS_IS_NOTHROW_ARG(...) false
#endif
#endif

#define ADV_UFCS_CONSTRAINT_PARAM(...) /*empty*/
#define ADV_UFCS_CONSTRAINT_ARG(MVFWD, QUALID, TEMPKW, ...)                                        \
	requires {                                                                                     \
		ADV_FORWARD(obj).ADV_UFCS_REMPARENS QUALID TEMPKW __VA_ARGS__(ADV_FORWARD(params)...);     \
	}                                                                                              \
	|| requires {                                                                                  \
		MVFWD(ADV_UFCS_REMPARENS QUALID __VA_ARGS__)(ADV_FORWARD(obj), ADV_FORWARD(params)...);    \
	}
#if defined(_MSC_VER)
#undef ADV_UFCS_CONSTRAINT_PARAM
#undef ADV_UFCS_CONSTRAINT_ARG
#define ADV_UFCS_CONSTRAINT_PARAM(MVFWD, QUALID, TEMPKW, ...)                                      \
	, bool IsViable = requires {                                                                   \
		std::declval<Obj>().ADV_UFCS_REMPARENS QUALID TEMPKW __VA_ARGS__(std::declval<Args>()...); \
	}                                                                                              \
	|| requires {                                                                                  \
		MVFWD(ADV_UFCS_REMPARENS QUALID __VA_ARGS__)                                               \
		(std::declval<Obj>(), std::declval<Args>()...);                                            \
	}
#define ADV_UFCS_CONSTRAINT_ARG(...) IsViable
#endif

#define ADV_UFCS_(CAPTURE, REQUIRES, MVFW, QUAL, TEMPKW, ...)                                      \
	[CAPTURE]<class Obj, class... Args ADV_UFCS_IS_NOTHROW_PARAM(MVFW, QUAL, TEMPKW, __VA_ARGS__)  \
	                         ADV_UFCS_CONSTRAINT_PARAM(MVFW, QUAL, TEMPKW, __VA_ARGS__)>           \
	LAMBDA_NO_DISCARD(Obj&& obj, Args&&... params) FORCE_INLINE_LAMBDA_CLANG noexcept(             \
	    ADV_UFCS_IS_NOTHROW_ARG(MVFW, QUAL, TEMPKW, __VA_ARGS__))                                  \
	    FORCE_INLINE_LAMBDA->decltype(auto)                                                        \
	    REQUIRES(requires ADV_UFCS_CONSTRAINT_ARG(MVFW, QUAL, TEMPKW, __VA_ARGS__)) {              \
		if constexpr (requires {                                                                   \
			              ADV_FORWARD(obj).ADV_UFCS_REMPARENS QUAL TEMPKW __VA_ARGS__(             \
			                  ADV_FORWARD(params)...);                                             \
		              }) {                                                                         \
			return ADV_FORWARD(obj).ADV_UFCS_REMPARENS QUAL TEMPKW __VA_ARGS__(                    \
			    ADV_FORWARD(params)...);                                                           \
		} else if constexpr (requires {                                                            \
			                     MVFW(ADV_UFCS_REMPARENS QUAL __VA_ARGS__)                         \
			                     (ADV_FORWARD(obj), ADV_FORWARD(params)...);                       \
		                     }) {                                                                  \
			return MVFW(ADV_UFCS_REMPARENS QUAL __VA_ARGS__)(ADV_FORWARD(obj),                     \
			                                                 ADV_FORWARD(params)...);              \
		} else if constexpr (requires {                                                            \
			                     obj.ADV_UFCS_REMPARENS QUAL TEMPKW __VA_ARGS__(                   \
			                         ADV_FORWARD(params)...);                                      \
		                     }) {                                                                  \
			static_assert(___dependent_false<Obj>::value,                                          \
			              "Implicit discard of an object's modified value is not allowed");        \
			ADV_FORWARD(obj).ADV_UFCS_REMPARENS QUAL TEMPKW __VA_ARGS__(ADV_FORWARD(params)...);   \
			MVFW(ADV_UFCS_REMPARENS QUAL __VA_ARGS__)(ADV_FORWARD(obj), ADV_FORWARD(params)...);   \
		} else if constexpr (requires {                                                            \
			                     MVFW(ADV_UFCS_REMPARENS QUAL __VA_ARGS__)                         \
			                     (obj, ADV_FORWARD(params)...);                                    \
		                     }) {                                                                  \
			static_assert(___dependent_false<Obj>::value,                                          \
			              "Implicit discard of an object's modified value is not allowed");        \
			ADV_FORWARD(obj).ADV_UFCS_REMPARENS QUAL TEMPKW __VA_ARGS__(ADV_FORWARD(params)...);   \
			MVFW(ADV_UFCS_REMPARENS QUAL __VA_ARGS__)(ADV_FORWARD(obj), ADV_FORWARD(params)...);   \
		} else {                                                                                   \
			static_assert(___dependent_false<Obj>::value,                                          \
			              "Method " #__VA_ARGS__ " not found by UFCS system for received object"); \
			ADV_FORWARD(obj).ADV_UFCS_REMPARENS QUAL TEMPKW __VA_ARGS__(ADV_FORWARD(params)...);   \
			MVFW(ADV_UFCS_REMPARENS QUAL __VA_ARGS__)(ADV_FORWARD(obj), ADV_FORWARD(params)...);   \
		}                                                                                          \
	}

#define ADV_UFCS(...) ADV_UFCS_(&, ADV_UFCS_EMPTY, ADV_UFCS_IDENTITY, (), , __VA_ARGS__)
#define ADV_UFCS_MOVE(...) ADV_UFCS_(&, ADV_UFCS_EMPTY, std::move, (), , __VA_ARGS__)
#define ADV_UFCS_FORWARD(...) ADV_UFCS_(&, ADV_UFCS_EMPTY, ADV_FORWARD, (), , __VA_ARGS__)
#define ADV_UFCS_TEMPLATE(...)                                                                     \
	ADV_UFCS_(&, ADV_UFCS_EMPTY, ADV_UFCS_IDENTITY, (), template, __VA_ARGS__)
#define ADV_UFCS_QUALIFIED_TEMPLATE(QUAL, ...)                                                     \
	ADV_UFCS_(&, ADV_UFCS_EMPTY, ADV_UFCS_IDENTITY, QUAL, template, __VA_ARGS__)
#define ADV_UFCS_NONLOCAL(...) ADV_UFCS_(, ADV_UFCS_IDENTITY, ADV_UFCS_IDENTITY, (), , __VA_ARGS__)
#define ADV_UFCS_TEMPLATE_NONLOCAL(...)                                                            \
	ADV_UFCS_(, ADV_UFCS_IDENTITY, ADV_UFCS_IDENTITY, (), template, __VA_ARGS__)
#define ADV_UFCS_QUALIFIED_TEMPLATE_NONLOCAL(QUAL, ...)                                            \
	ADV_UFCS_(, ADV_UFCS_IDENTITY, ADV_UFCS_IDENTITY, QUAL, template, __VA_ARGS__)

#define ADV_USFCS_IS_NOTHROW(TYPE, TEMPKW, ...)                                                    \
	requires {                                                                                     \
		requires requires {                                                                        \
			ADV_UFCS_REMPARENS TYPE ::TEMPKW __VA_ARGS__(std::declval<Args>()...);                 \
		};                                                                                         \
		requires noexcept(ADV_UFCS_REMPARENS TYPE ::TEMPKW __VA_ARGS__(std::declval<Args>()...));  \
	}                                                                                              \
	|| requires {                                                                                  \
		requires !requires {                                                                       \
			ADV_UFCS_REMPARENS TYPE ::TEMPKW __VA_ARGS__(std::declval<Args>()...);                 \
		};                                                                                         \
		requires noexcept(                                                                         \
		    __static_##__VA_ARGS__<ADV_UFCS_REMPARENS TYPE>(std::declval<Args>()...));             \
	}
#define ADV_USFCS_IS_NOTHROW_PARAM(...)
#define ADV_USFCS_IS_NOTHROW_ARG(TYPE, TEMPKW, ...) ADV_USFCS_IS_NOTHROW(TYPE, TEMPKW, __VA_ARGS__)
#if defined(__GNUC__) && !defined(__clang__)
#undef ADV_USFCS_IS_NOTHROW_PARAM
#undef ADV_USFCS_IS_NOTHROW_ARG
#define ADV_USFCS_IS_NOTHROW_PARAM(TYPE, TEMPKW, ...)                                              \
	, bool IsNothrow = ADV_USFCS_IS_NOTHROW(TYPE, TEMPKW, __VA_ARGS__)
#define ADV_USFCS_IS_NOTHROW_ARG(...) IsNothrow
#if __GNUC__ < 11
#undef ADV_USFCS_IS_NOTHROW_PARAM
#undef ADV_USFCS_IS_NOTHROW_ARG
#define ADV_USFCS_IS_NOTHROW_PARAM(...)
#define ADV_USFCS_IS_NOTHROW_ARG(...) false
#endif
#endif

#define ADV_USFCS_CONSTRAINT_PARAM(...) /*empty*/
#define ADV_USFCS_CONSTRAINT_ARG(TYPE, TEMPKW, ...)                                                \
	requires { ADV_UFCS_REMPARENS TYPE ::TEMPKW __VA_ARGS__(std::declval<Args>()...); }            \
	|| requires { __static_##__VA_ARGS__<ADV_UFCS_REMPARENS TYPE>(std::declval<Args>()...); }
#if defined(_MSC_VER)
#undef ADV_USFCS_CONSTRAINT_PARAM
#undef ADV_USFCS_CONSTRAINT_ARG
#define ADV_USFCS_CONSTRAINT_PARAM(TYPE, TEMPKW, ...)                                              \
	, bool IsViable = requires {                                                                   \
		ADV_UFCS_REMPARENS TYPE ::TEMPKW __VA_ARGS__(std::declval<Args>()...);                     \
	}                                                                                              \
	|| requires { __static_##__VA_ARGS__<ADV_UFCS_REMPARENS TYPE>(std::declval<Args>()...); }
#define ADV_USFCS_CONSTRAINT_ARG(...) IsViable
#endif

#define ADV_USFCS_(CAPTURE, REQUIRES, TYPE, TEMPKW, ...)                                           \
	[CAPTURE]<class... Args ADV_USFCS_IS_NOTHROW_PARAM(TYPE, TEMPKW, __VA_ARGS__)                  \
	              ADV_USFCS_CONSTRAINT_PARAM(TYPE, TEMPKW, __VA_ARGS__)>                           \
	LAMBDA_NO_DISCARD(Args&&... params)                                                            \
	    FORCE_INLINE_LAMBDA_CLANG noexcept(ADV_USFCS_IS_NOTHROW_ARG(TYPE, TEMPKW, __VA_ARGS__))    \
	        FORCE_INLINE_LAMBDA->decltype(auto)                                                    \
	        REQUIRES(requires ADV_USFCS_CONSTRAINT_ARG(TYPE, TEMPKW, __VA_ARGS__)) {               \
		if constexpr (requires {                                                                   \
			              ADV_UFCS_REMPARENS TYPE ::TEMPKW __VA_ARGS__(ADV_FORWARD(params)...);    \
		              }) {                                                                         \
			return ADV_UFCS_REMPARENS TYPE ::TEMPKW __VA_ARGS__(ADV_FORWARD(params)...);           \
		} else if constexpr (requires {                                                            \
			                     __static_##__VA_ARGS__<ADV_UFCS_REMPARENS TYPE>(                  \
			                         ADV_FORWARD(params)...);                                      \
		                     }) {                                                                  \
			return __static_##__VA_ARGS__<ADV_UFCS_REMPARENS TYPE>(ADV_FORWARD(params)...);        \
		} else {                                                                                   \
			static_assert(false,                                                                   \
			              "Method " #__VA_ARGS__ " not found by USFCS system for type " #TYPE);    \
			ADV_UFCS_REMPARENS TYPE ::TEMPKW __VA_ARGS__(ADV_FORWARD(params)...);                  \
			__static_##__VA_ARGS__<ADV_UFCS_REMPARENS TYPE>(ADV_FORWARD(params)...);               \
		}                                                                                          \
	}

#define ADV_USFCS(TYPE, ...) ADV_USFCS_(&, ADV_UFCS_EMPTY, TYPE, , __VA_ARGS__)
#define ADV_USFCS_TEMPLATE(TYPE, ...) ADV_USFCS_(&, ADV_UFCS_EMPTY, TYPE, template, __VA_ARGS__)
#define ADV_USFCS_NONLOCAL(TYPE, ...) ADV_USFCS_(, ADV_UFCS_IDENTITY, TYPE, , __VA_ARGS__)
#define ADV_USFCS_TEMPLATE_NONLOCAL(TYPE, ...)                                                     \
	ADV_USFCS_(, ADV_UFCS_IDENTITY, TYPE, template, __VA_ARGS__)

#define ADV_UPCS_IS_NOTHROW_PARAM(PROPERTY)
#define ADV_UPCS_IS_NOTHROW(PROPERTY)                                                              \
	requires {                                                                                     \
		requires requires { std::declval<Obj>().get##PROPERTY(); };                                \
		requires noexcept(std::declval<Obj>().get##PROPERTY());                                    \
	}                                                                                              \
	|| requires {                                                                                  \
		requires requires { get##PROPERTY(std::declval<Obj>()); };                                 \
		requires noexcept(get##PROPERTY(std::declval<Obj>()));                                     \
	}

#if defined(__GNUC__) && !defined(__clang__)
#undef ADV_UPCS_IS_NOTHROW_PARAM
#define ADV_UPCS_IS_NOTHROW_PARAM(...) , bool IsNothrow = ADV_UPCS_IS_NOTHROW(__VA_ARGS__)
#define ADV_UPCS_IS_NOTHROW(...) IsNothrow
#if __GNUC__ < 11
#undef ADV_UPCS_IS_NOTHROW_PARAM
#define ADV_UPCS_IS_NOTHROW_PARAM(...)
#define ADV_UPCS_IS_NOTHROW(...) false
#endif
#endif

#define ADV_UPCS_CONSTRAINT_PARAM(...) /*empty*/
#define ADV_UPCS_CONSTRAINT_ARG(PROPERTY)                                                          \
	requires { ADV_FORWARD(std::declval<Obj>()).##PROPERTY; }                                      \
	|| requires { _get_property_##PROPERTY(ADV_FORWARD(std::declval<Obj>())); }                    \
	|| requires { get##PROPERTY(ADV_FORWARD(std::declval<Obj>())); }
#if defined(_MSC_VER)
#undef ADV_UPCS_CONSTRAINT_PARAM
#undef ADV_UPCS_CONSTRAINT_ARG
#define ADV_UPCS_CONSTRAINT_PARAM(PROPERTY)                                                        \
	, bool IsViable = (                                                                            \
	      requires { ADV_FORWARD(std::declval<Obj>()).##PROPERTY; } ||                             \
	      requires { _get_property_##PROPERTY(ADV_FORWARD(std::declval<Obj>())); } ||              \
	      requires { get##PROPERTY(ADV_FORWARD(std::declval<Obj>())); })
#define ADV_UPCS_CONSTRAINT_ARG(...) IsViable
#endif

#define ADV_UPCS_(CAPTURE, PROPERTY)                                                               \
	[CAPTURE]<class Obj ADV_UPCS_IS_NOTHROW_PARAM(PROPERTY) ADV_UPCS_CONSTRAINT_PARAM(PROPERTY)>   \
	LAMBDA_NO_DISCARD(Obj&& obj) FORCE_INLINE_LAMBDA_CLANG noexcept(ADV_UPCS_IS_NOTHROW(PROPERTY)) \
	    FORCE_INLINE_LAMBDA -> decltype(auto) requires ADV_UPCS_CONSTRAINT_ARG(PROPERTY) {         \
		if constexpr (requires { ADV_FORWARD(obj).##PROPERTY; }) {                                 \
			return std::add_lvalue_reference_t<decltype(obj.##PROPERTY)>(obj.##PROPERTY);          \
		} else if constexpr (requires { _get_property_##PROPERTY(ADV_FORWARD(obj)); }) {           \
			return _get_property_##PROPERTY(ADV_FORWARD(obj));                                     \
		} else if constexpr (requires { get##PROPERTY(ADV_FORWARD(obj)); }) {                      \
			return get##PROPERTY(ADV_FORWARD(obj));                                                \
		} else if constexpr (requires { obj.##PROPERTY; }) {                                       \
			static_assert(___dependent_false<Obj>::value,                                          \
			              "Implicit discard of an object's modified value is not allowed");        \
			ADV_FORWARD(obj).##PROPERTY;                                                           \
			_get_property_##PROPERTY(ADV_FORWARD(obj));                                            \
			get##PROPERTY(ADV_FORWARD(obj));                                                       \
		} else if constexpr (requires { _get_property_##PROPERTY(obj); }) {                        \
			static_assert(___dependent_false<Obj>::value,                                          \
			              "Implicit discard of an object's modified value is not allowed");        \
			ADV_FORWARD(obj).##PROPERTY;                                                           \
			_get_property_##PROPERTY(ADV_FORWARD(obj));                                            \
			get##PROPERTY(ADV_FORWARD(obj));                                                       \
		} else if constexpr (requires { get##PROPERTY(obj); }) {                                   \
			static_assert(___dependent_false<Obj>::value,                                          \
			              "Implicit discard of an object's modified value is not allowed");        \
			ADV_FORWARD(obj).##PROPERTY;                                                           \
			_get_property_##PROPERTY(ADV_FORWARD(obj));                                            \
			get##PROPERTY(ADV_FORWARD(obj));                                                       \
		} else {                                                                                   \
			static_assert(___dependent_false<Obj>::value,                                          \
			              "Property " #PROPERTY " not found for received object");                 \
			ADV_FORWARD(obj).##PROPERTY;                                                           \
			_get_property_##PROPERTY(ADV_FORWARD(obj));                                            \
			get##PROPERTY(ADV_FORWARD(obj));                                                       \
		}                                                                                          \
	}

#define ADV_UPCS(PROPERTY) ADV_UPCS_(&, PROPERTY)
#define ADV_UPCS_NONLOCAL(PROPERTY) ADV_UPCS_(, PROPERTY)

#define ADV_USPCS_IS_NOTHROW_PARAM(PROPERTY, ...)
#define ADV_USPCS_IS_NOTHROW(PROPERTY, ...)                                                        \
	requires {                                                                                     \
		requires requires { __VA_ARGS__ ::get##PROPERTY(); };                                      \
		requires noexcept(__VA_ARGS__ ::get##PROPERTY());                                          \
	}                                                                                              \
	|| requires {                                                                                  \
		requires requires { __static_get##PROPERTY<__VA_ARGS__>(); };                              \
		requires noexcept(__static_get##PROPERTY<__VA_ARGS__>());                                  \
	}

#if defined(__GNUC__) && !defined(__clang__)
#undef ADV_USPCS_IS_NOTHROW_PARAM
#define ADV_USPCS_IS_NOTHROW_PARAM(PROPERTY, ...)                                                  \
	, bool IsNothrow = ADV_USPCS_IS_NOTHROW(PROPERTY, __VA_ARGS__)
#define ADV_USPCS_IS_NOTHROW(PROPERTY, ...) IsNothrow
#if __GNUC__ < 11
#undef ADV_USPCS_IS_NOTHROW_PARAM
#define ADV_USPCS_IS_NOTHROW_PARAM(PROPERTY, ...)
#define ADV_USPCS_IS_NOTHROW(PROPERTY, ...) false
#endif
#endif

#define ADV_USPCS_CONSTRAINT_PARAM(PROPERTY, ...) /*empty*/
#define ADV_USPCS_CONSTRAINT_ARG(PROPERTY, ...)                                                    \
	requires { __VA_ARGS__ ::##PROPERTY; }                                                         \
	|| requires { __static_get##PROPERTY<__VA_ARGS__>(); }
#if defined(_MSC_VER)
#undef ADV_USPCS_CONSTRAINT_PARAM
#undef ADV_USPCS_CONSTRAINT_ARG
#define ADV_USPCS_CONSTRAINT_PARAM(PROPERTY, ...)                                                  \
	, bool IsViable = (                                                                            \
	      requires { __VA_ARGS__ ::##PROPERTY; } ||                                                \
	      requires { __static_get##PROPERTY<__VA_ARGS__>(); })
#define ADV_USPCS_CONSTRAINT_ARG(PROPERTY, ...) IsViable
#endif

#define ADV_USPCS_(PROPERTY, ...)                                                                  \
	[]<class T = void ADV_USPCS_IS_NOTHROW_PARAM(PROPERTY, __VA_ARGS__)                            \
	       ADV_USPCS_CONSTRAINT_PARAM(PROPERTY, __VA_ARGS__)>                                      \
	LAMBDA_NO_DISCARD()                                                                            \
	    FORCE_INLINE_LAMBDA_CLANG noexcept(ADV_USPCS_IS_NOTHROW(PROPERTY, __VA_ARGS__))            \
	        FORCE_INLINE_LAMBDA->decltype(auto) requires ADV_USPCS_CONSTRAINT_ARG(PROPERTY,        \
	                                                                              __VA_ARGS__) {   \
		if constexpr (requires { __VA_ARGS__ ::##PROPERTY; }) {                                    \
			return std::add_lvalue_reference_t<decltype(__VA_ARGS__ ::##PROPERTY)>(                \
			    __VA_ARGS__ ::##PROPERTY);                                                         \
		} else if constexpr (requires { __static_get##PROPERTY<__VA_ARGS__>(); }) {                \
			return __static_get##PROPERTY<__VA_ARGS__>();                                          \
		} else {                                                                                   \
			static_assert(false, "Property " #PROPERTY " not found for this type " #__VA_ARGS__);  \
			__VA_ARGS__ ::##PROPERTY;                                                              \
			__static_get##PROPERTY<__VA_ARGS__>();                                                 \
		}                                                                                          \
	}

#define ADV_USPCS(PROPERTY, ...) ADV_USPCS_(PROPERTY, __VA_ARGS__)

#define ADV_METHOD_BINDING_STRONG(MethodName, ...)                                                 \
	[&]<class Obj>(Obj&& obj) {                                                                    \
		using T = std::decay_t<Obj>::__self;                                                       \
		if constexpr (requires { &T::MethodName; }) {                                              \
			return CppAdvance::InstanceMethod(T(std::forward<Obj>(obj)), &T::MethodName);          \
		} else if constexpr (requires {                                                            \
			                     typename T::__class;                                              \
			                     &T::__class::MethodName;                                          \
		                     }) {                                                                  \
			return CppAdvance::InstanceMethod(T(std::forward<Obj>(obj)), &T::__class::MethodName); \
		} else if constexpr (                                                                      \
		    requires { MethodName(T(std::forward<Obj>(obj))); } ||                                 \
		    requires { MethodName(T(std::forward<Obj>(obj)), CppAdvance::TypeDummy {}); } ||       \
		    requires {                                                                             \
			    MethodName(T(std::forward<Obj>(obj)), CppAdvance::TypeDummy {},                    \
			               CppAdvance::TypeDummy {});                                              \
		    } ||                                                                                   \
		    requires {                                                                             \
			    MethodName(T(std::forward<Obj>(obj)), CppAdvance::TypeDummy {},                    \
			               CppAdvance::TypeDummy {}, CppAdvance::TypeDummy {});                    \
		    } ||                                                                                   \
		    requires {                                                                             \
			    MethodName(T(std::forward<Obj>(obj)), CppAdvance::TypeDummy {},                    \
			               CppAdvance::TypeDummy {}, CppAdvance::TypeDummy {},                     \
			               CppAdvance::TypeDummy {});                                              \
		    } ||                                                                                   \
		    requires {                                                                             \
			    MethodName(T(std::forward<Obj>(obj)), CppAdvance::TypeDummy {},                    \
			               CppAdvance::TypeDummy {}, CppAdvance::TypeDummy {},                     \
			               CppAdvance::TypeDummy {}, CppAdvance::TypeDummy {});                    \
		    } ||                                                                                   \
		    requires {                                                                             \
			    MethodName(T(std::forward<Obj>(obj)), CppAdvance::TypeDummy {},                    \
			               CppAdvance::TypeDummy {}, CppAdvance::TypeDummy {},                     \
			               CppAdvance::TypeDummy {}, CppAdvance::TypeDummy {},                     \
			               CppAdvance::TypeDummy {});                                              \
		    } ||                                                                                   \
		    requires {                                                                             \
			    MethodName(T(std::forward<Obj>(obj)), CppAdvance::TypeDummy {},                    \
			               CppAdvance::TypeDummy {}, CppAdvance::TypeDummy {},                     \
			               CppAdvance::TypeDummy {}, CppAdvance::TypeDummy {},                     \
			               CppAdvance::TypeDummy {}, CppAdvance::TypeDummy {});                    \
		    } ||                                                                                   \
		    requires {                                                                             \
			    MethodName(                                                                        \
			        T(std::forward<Obj>(obj)), CppAdvance::TypeDummy {}, CppAdvance::TypeDummy {}, \
			        CppAdvance::TypeDummy {}, CppAdvance::TypeDummy {}, CppAdvance::TypeDummy {},  \
			        CppAdvance::TypeDummy {}, CppAdvance::TypeDummy {}, CppAdvance::TypeDummy {}); \
		    }) {                                                                                   \
			return CppAdvance::ExtensionMethod(T(std::forward<Obj>(obj)), MethodName);             \
		} else {                                                                                   \
			static_assert(false,                                                                   \
			              "Cannot to deduce method " #MethodName " for object " #__VA_ARGS__);     \
			&T::MethodName;                                                                        \
			&T::__class::MethodName;                                                               \
			CppAdvance::ExtensionMethod(T(std::forward<Obj>(obj)), MethodName);                    \
		}                                                                                          \
	}(__VA_ARGS__)

#define ADV_METHOD_BINDING_UNOWNED(MethodName, ...)                                                \
	[&]<class Obj>(Obj&& obj) {                                                                    \
		using T = std::decay_t<Obj>::__self;                                                       \
		using U = typename T::__unowned_ref;                                                       \
		if constexpr (requires { &T::MethodName; }) {                                              \
			return CppAdvance::InstanceMethod(U(std::forward<Obj>(obj)), &T::MethodName);          \
		} else if constexpr (requires {                                                            \
			                     typename T::__class;                                              \
			                     &T::__class::MethodName;                                          \
		                     }) {                                                                  \
			return CppAdvance::InstanceMethod(U(std::forward<Obj>(obj)), &T::__class::MethodName); \
		} else if constexpr (                                                                      \
		    requires { MethodName(T(std::forward<Obj>(obj))); } ||                                 \
		    requires { MethodName(T(std::forward<Obj>(obj)), CppAdvance::TypeDummy {}); } ||       \
		    requires {                                                                             \
			    MethodName(T(std::forward<Obj>(obj)), CppAdvance::TypeDummy {},                    \
			               CppAdvance::TypeDummy {});                                              \
		    } ||                                                                                   \
		    requires {                                                                             \
			    MethodName(T(std::forward<Obj>(obj)), CppAdvance::TypeDummy {},                    \
			               CppAdvance::TypeDummy {}, CppAdvance::TypeDummy {});                    \
		    } ||                                                                                   \
		    requires {                                                                             \
			    MethodName(T(std::forward<Obj>(obj)), CppAdvance::TypeDummy {},                    \
			               CppAdvance::TypeDummy {}, CppAdvance::TypeDummy {},                     \
			               CppAdvance::TypeDummy {});                                              \
		    } ||                                                                                   \
		    requires {                                                                             \
			    MethodName(T(std::forward<Obj>(obj)), CppAdvance::TypeDummy {},                    \
			               CppAdvance::TypeDummy {}, CppAdvance::TypeDummy {},                     \
			               CppAdvance::TypeDummy {}, CppAdvance::TypeDummy {});                    \
		    } ||                                                                                   \
		    requires {                                                                             \
			    MethodName(T(std::forward<Obj>(obj)), CppAdvance::TypeDummy {},                    \
			               CppAdvance::TypeDummy {}, CppAdvance::TypeDummy {},                     \
			               CppAdvance::TypeDummy {}, CppAdvance::TypeDummy {},                     \
			               CppAdvance::TypeDummy {});                                              \
		    } ||                                                                                   \
		    requires {                                                                             \
			    MethodName(T(std::forward<Obj>(obj)), CppAdvance::TypeDummy {},                    \
			               CppAdvance::TypeDummy {}, CppAdvance::TypeDummy {},                     \
			               CppAdvance::TypeDummy {}, CppAdvance::TypeDummy {},                     \
			               CppAdvance::TypeDummy {}, CppAdvance::TypeDummy {});                    \
		    } ||                                                                                   \
		    requires {                                                                             \
			    MethodName(                                                                        \
			        T(std::forward<Obj>(obj)), CppAdvance::TypeDummy {}, CppAdvance::TypeDummy {}, \
			        CppAdvance::TypeDummy {}, CppAdvance::TypeDummy {}, CppAdvance::TypeDummy {},  \
			        CppAdvance::TypeDummy {}, CppAdvance::TypeDummy {}, CppAdvance::TypeDummy {}); \
		    }) {                                                                                   \
			return CppAdvance::ExtensionMethod(U(std::forward<Obj>(obj)), MethodName);             \
		} else {                                                                                   \
			static_assert(false,                                                                   \
			              "Cannot to deduce method " #MethodName " for object " #__VA_ARGS__);     \
			&T::MethodName;                                                                        \
			&T::__class::MethodName;                                                               \
			CppAdvance::ExtensionMethod(U(std::forward<Obj>(obj)), MethodName);                    \
		}                                                                                          \
	}(__VA_ARGS__)

#define ADV_METHOD_BINDING_WEAK(MethodName, ...)                                                   \
	[&]<class Obj>(Obj&& obj) {                                                                    \
		using T = std::decay_t<Obj>::__self;                                                       \
		using W = typename T::__weak_ref;                                                          \
		if constexpr (requires { &T::MethodName; }) {                                              \
			return CppAdvance::InstanceMethod(W(std::forward<Obj>(obj)), &T::MethodName);          \
		} else if constexpr (requires {                                                            \
			                     typename T::__class;                                              \
			                     &T::__class::MethodName;                                          \
		                     }) {                                                                  \
			return CppAdvance::InstanceMethod(W(std::forward<Obj>(obj)), &T::__class::MethodName); \
		} else if constexpr (                                                                      \
		    requires { MethodName(T(std::forward<Obj>(obj))); } ||                                 \
		    requires { MethodName(T(std::forward<Obj>(obj)), CppAdvance::TypeDummy {}); } ||       \
		    requires {                                                                             \
			    MethodName(T(std::forward<Obj>(obj)), CppAdvance::TypeDummy {},                    \
			               CppAdvance::TypeDummy {});                                              \
		    } ||                                                                                   \
		    requires {                                                                             \
			    MethodName(T(std::forward<Obj>(obj)), CppAdvance::TypeDummy {},                    \
			               CppAdvance::TypeDummy {}, CppAdvance::TypeDummy {});                    \
		    } ||                                                                                   \
		    requires {                                                                             \
			    MethodName(T(std::forward<Obj>(obj)), CppAdvance::TypeDummy {},                    \
			               CppAdvance::TypeDummy {}, CppAdvance::TypeDummy {},                     \
			               CppAdvance::TypeDummy {});                                              \
		    } ||                                                                                   \
		    requires {                                                                             \
			    MethodName(T(std::forward<Obj>(obj)), CppAdvance::TypeDummy {},                    \
			               CppAdvance::TypeDummy {}, CppAdvance::TypeDummy {},                     \
			               CppAdvance::TypeDummy {}, CppAdvance::TypeDummy {});                    \
		    } ||                                                                                   \
		    requires {                                                                             \
			    MethodName(T(std::forward<Obj>(obj)), CppAdvance::TypeDummy {},                    \
			               CppAdvance::TypeDummy {}, CppAdvance::TypeDummy {},                     \
			               CppAdvance::TypeDummy {}, CppAdvance::TypeDummy {},                     \
			               CppAdvance::TypeDummy {});                                              \
		    } ||                                                                                   \
		    requires {                                                                             \
			    MethodName(T(std::forward<Obj>(obj)), CppAdvance::TypeDummy {},                    \
			               CppAdvance::TypeDummy {}, CppAdvance::TypeDummy {},                     \
			               CppAdvance::TypeDummy {}, CppAdvance::TypeDummy {},                     \
			               CppAdvance::TypeDummy {}, CppAdvance::TypeDummy {});                    \
		    } ||                                                                                   \
		    requires {                                                                             \
			    MethodName(                                                                        \
			        T(std::forward<Obj>(obj)), CppAdvance::TypeDummy {}, CppAdvance::TypeDummy {}, \
			        CppAdvance::TypeDummy {}, CppAdvance::TypeDummy {}, CppAdvance::TypeDummy {},  \
			        CppAdvance::TypeDummy {}, CppAdvance::TypeDummy {}, CppAdvance::TypeDummy {}); \
		    }) {                                                                                   \
			return CppAdvance::ExtensionMethod(W(std::forward<Obj>(obj)), MethodName);             \
		} else {                                                                                   \
			static_assert(false,                                                                   \
			              "Cannot to deduce method " #MethodName " for object " #__VA_ARGS__);     \
			&T::MethodName;                                                                        \
			&T::__class::MethodName;                                                               \
			CppAdvance::ExtensionMethod(W(std::forward<Obj>(obj)), MethodName);                    \
		}                                                                                          \
	}(__VA_ARGS__)

#if defined(MSVC) || (defined(CLANG) && __has_declspec_attribute(property))
#define ADV_USE_DECLSPEC_PROPERTY 0
#else
#define ADV_USE_DECLSPEC_PROPERTY 0
#endif

#define ADV_PROPERTY_SELF __self

#if ADV_USE_DECLSPEC_PROPERTY

#define ADV_PROPERTY_GETTER(accessSpecifier, propertyName, getterFunc, ...)                        \
	accessSpecifier:                                                                               \
	__declspec(property(get = getterFunc)) __VA_ARGS__ propertyName
#define ADV_PROPERTY_SETTER(accessSpecifier, propertyName, setterFunc, ...)                        \
	accessSpecifier:                                                                               \
	__declspec(property(put = setterFunc)) __VA_ARGS__ propertyName
#define ADV_PROPERTY_GETTER_SETTER(accessSpecifier, propertyName, getterAccess, getterFunc,        \
                                   setterAccess, setterFunc, ...)                                  \
	accessSpecifier:                                                                               \
	__declspec(property(get = getterFunc, put = setterFunc)) __VA_ARGS__ propertyName

#else  // !ADV_USE_DECLSPEC_PROPERTY

#define ADV_PROPERTY_GET_PARENT_POINTER(propertyName)                                              \
	char* thisAsBytePointer       = const_cast<char*>(reinterpret_cast<char const*>(this));        \
	ADV_PROPERTY_SELF* nullParent = nullptr;                                                       \
	std::ptrdiff_t selfOffset     = reinterpret_cast<std::ptrdiff_t>(&nullParent->propertyName);   \
	ADV_PROPERTY_SELF* parent =                                                                    \
	    reinterpret_cast<ADV_PROPERTY_SELF*>(thisAsBytePointer - selfOffset);

#define ADV_PROPERTY_GETTER(accessSpecifier, propertyName, getterFunc, ...)                        \
                                                                                                   \
   private:                                                                                        \
	template <class _PropertyType = __VA_ARGS__>                                                   \
	struct __Property_##propertyName {                                                             \
		FORCE_INLINE __VA_ARGS__ get() const {                                                     \
			ADV_PROPERTY_GET_PARENT_POINTER(propertyName);                                         \
			return parent->getterFunc();                                                           \
		}                                                                                          \
		FORCE_INLINE operator __VA_ARGS__() const { return get(); }                                \
		FORCE_INLINE decltype(auto) __ref() const { return get(); }                                \
                                                                                                   \
		FORCE_INLINE decltype(auto) operator+() const requires requires(_PropertyType t) {         \
			t = +t;                                                                                \
		}                                                                                          \
		{ return +get(); }                                                                         \
		FORCE_INLINE decltype(auto) operator-() const requires requires(_PropertyType t) {         \
			t = -t;                                                                                \
		}                                                                                          \
		{ return -get(); }                                                                         \
		FORCE_INLINE decltype(auto) operator~() const requires requires(_PropertyType t) {         \
			t = ~t;                                                                                \
		}                                                                                          \
		{ return ~get(); }                                                                         \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator+(_ElemRight&& other) const {                          \
			return get() + static_cast<_PropertyType>(other);                                      \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator+(_ElemRight&& other, const __Property_##propertyName<>& _this) {                  \
			return _this.get() + static_cast<__VA_ARGS__>(other);                                  \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator-(_ElemRight&& other) const {                          \
			return get() - static_cast<_PropertyType>(other);                                      \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator-(_ElemRight&& other, const __Property_##propertyName<>& _this) {                  \
			return static_cast<__VA_ARGS__>(other) - _this.get();                                  \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator*(_ElemRight&& other) const {                          \
			return get() * static_cast<_PropertyType>(other);                                      \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator*(_ElemRight&& other, const __Property_##propertyName<>& _this) {                  \
			return _this.get() * static_cast<__VA_ARGS__>(other);                                  \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator/(_ElemRight&& other) const {                          \
			return get() / static_cast<_PropertyType>(other);                                      \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator/(_ElemRight&& other, const __Property_##propertyName<>& _this) {                  \
			return static_cast<__VA_ARGS__>(other) / _this.get();                                  \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator%(_ElemRight&& other) const {                          \
			return get() % static_cast<_PropertyType>(other);                                      \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator%(_ElemRight&& other, const __Property_##propertyName<>& _this) {                  \
			return static_cast<__VA_ARGS__>(other) % _this.get();                                  \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator&(_ElemRight&& other) const {                          \
			return get() & static_cast<_PropertyType>(other);                                      \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator&(_ElemRight&& other, const __Property_##propertyName<>& _this) {                  \
			return static_cast<__VA_ARGS__>(other) & _this.get();                                  \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator|(_ElemRight&& other) const {                          \
			return get() | static_cast<_PropertyType>(other);                                      \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator|(_ElemRight&& other, const __Property_##propertyName<>& _this) {                  \
			return _this.get() | static_cast<__VA_ARGS__>(other);                                  \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator^(_ElemRight&& other) const {                          \
			return get() ^ static_cast<_PropertyType>(other);                                      \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator^(_ElemRight&& other, const __Property_##propertyName<>& _this) {                  \
			return static_cast<__VA_ARGS__>(other) ^ _this.get();                                  \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator<<(_ElemRight&& other) const {                         \
			return get() << static_cast<_PropertyType>(other);                                     \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator<<(_ElemRight&& other, const __Property_##propertyName<>& _this) {                 \
			return static_cast<__VA_ARGS__>(other) << _this.get();                                 \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator>>(_ElemRight&& other) const {                         \
			return get() >> static_cast<_PropertyType>(other);                                     \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator>>(_ElemRight&& other, const __Property_##propertyName<>& _this) {                 \
			return static_cast<__VA_ARGS__>(other) >> _this.get();                                 \
		}                                                                                          \
		template <class... _ElemRight>                                                             \
		FORCE_INLINE decltype(auto) _operator_subscript(_ElemRight&&... other) {                   \
			return get().__ref()._operator_subscript(std::forward<_ElemRight>(other)...);          \
		}                                                                                          \
		template <class... _ElemRight>                                                             \
		FORCE_INLINE decltype(auto) _operator_subscript(_ElemRight&&... other) const {             \
			return get().__ref()._operator_subscript(std::forward<_ElemRight>(other)...);          \
		}                                                                                          \
		template <class... Args>                                                                   \
		FORCE_INLINE decltype(auto) operator()(Args&&... other) {                                  \
			return get()(std::forward<Args>(other)...);                                            \
		}                                                                                          \
		template <class... Args>                                                                   \
		FORCE_INLINE decltype(auto) operator()(Args&&... other) const {                            \
			return get()(std::forward<Args>(other)...);                                            \
		}                                                                                          \
		template <class Ch>                                                                        \
		friend FORCE_INLINE decltype(auto) operator<<(                                             \
		    std::basic_ostream<Ch>& stream,                                                        \
		    const __Property_##propertyName<_PropertyType>& elem) {                                \
			return stream << elem.get();                                                           \
		}                                                                                          \
		FORCE_INLINE decltype(auto) operator*() requires requires(_PropertyType t) { *t; }         \
		{ return *get(); }                                                                         \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator==(_ElemRight&& other) const {                         \
			return get() == static_cast<_PropertyType>(other);                                     \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator==(_ElemRight&& other, const __Property_##propertyName<>& _this) {                 \
			return _this.get() == static_cast<__VA_ARGS__>(other);                                 \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator!=(_ElemRight&& other) const {                         \
			return get() != static_cast<_PropertyType>(other);                                     \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator!=(_ElemRight&& other, const __Property_##propertyName<>& _this) {                 \
			return _this.get() != static_cast<__VA_ARGS__>(other);                                 \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator<(_ElemRight&& other) const {                          \
			return get() < static_cast<_PropertyType>(other);                                      \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator<(_ElemRight&& other, const __Property_##propertyName<>& _this) {                  \
			return _this.get() > static_cast<__VA_ARGS__>(other);                                  \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator<=(_ElemRight&& other) const {                         \
			return get() <= static_cast<_PropertyType>(other);                                     \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator<=(_ElemRight&& other, const __Property_##propertyName<>& _this) {                 \
			return _this.get() >= static_cast<__VA_ARGS__>(other);                                 \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator>(_ElemRight&& other) const {                          \
			return get() > static_cast<_PropertyType>(other);                                      \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator>(_ElemRight&& other, const __Property_##propertyName<>& _this) {                  \
			return _this.get() < static_cast<__VA_ARGS__>(other);                                  \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator>=(_ElemRight&& other) const {                         \
			return get() >= static_cast<_PropertyType>(other);                                     \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator>=(_ElemRight&& other, const __Property_##propertyName<>& _this) {                 \
			return _this.get() <= static_cast<__VA_ARGS__>(other);                                 \
		}                                                                                          \
		FORCE_INLINE explicit operator bool() const                                                \
		    requires(!std::is_same_v<_PropertyType, bool>) {                                       \
			return static_cast<bool>(get());                                                       \
		}                                                                                          \
	};                                                                                             \
	accessSpecifier:                                                                               \
	ADV_VIRTUAL_FIELD __Property_##propertyName<> propertyName;

#define ADV_PROPERTY_SETTER(accessSpecifier, propertyName, setterFunc, ...)                        \
                                                                                                   \
   private:                                                                                        \
	template <class _PropertyType = __VA_ARGS__>                                                   \
	struct __Property_##propertyName {                                                             \
		FORCE_INLINE void operator=(const __VA_ARGS__& value) {                                    \
			ADV_PROPERTY_GET_PARENT_POINTER(propertyName);                                         \
			parent->setterFunc(value);                                                             \
		}                                                                                          \
	};                                                                                             \
	accessSpecifier:                                                                               \
	ADV_VIRTUAL_FIELD __Property_##propertyName<> propertyName;

#define ADV_PROPERTY_GETTER_SETTER(accessSpecifier, propertyName, getterAccess, getterFunc,        \
                                   setterAccess, setterFunc, ...)                                  \
                                                                                                   \
   private:                                                                                        \
	template <class _PropertyType = __VA_ARGS__>                                                   \
	struct __Property_##propertyName {                                                             \
		friend struct __self;                                                                      \
		getterAccess : FORCE_INLINE __VA_ARGS__ get() const {                                      \
			ADV_PROPERTY_GET_PARENT_POINTER(propertyName);                                         \
			return parent->getterFunc();                                                           \
		}                                                                                          \
		FORCE_INLINE operator __VA_ARGS__() const { return get(); }                                \
		FORCE_INLINE decltype(auto) __ref() const { return get(); }                                \
                                                                                                   \
		FORCE_INLINE decltype(auto) operator+() const requires requires(_PropertyType t) {         \
			t = +t;                                                                                \
		}                                                                                          \
		{ return +get(); }                                                                         \
		FORCE_INLINE decltype(auto) operator-() const requires requires(_PropertyType t) {         \
			t = -t;                                                                                \
		}                                                                                          \
		{ return -get(); }                                                                         \
		FORCE_INLINE decltype(auto) operator~() const requires requires(_PropertyType t) {         \
			t = ~t;                                                                                \
		}                                                                                          \
		{ return ~get(); }                                                                         \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator+(_ElemRight&& other) const {                          \
			return get() + static_cast<_PropertyType>(other);                                      \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator+(_ElemRight&& other, const __Property_##propertyName<>& _this) {                  \
			return _this.get() + static_cast<__VA_ARGS__>(other);                                  \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator-(_ElemRight&& other) const {                          \
			return get() - static_cast<_PropertyType>(other);                                      \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator-(_ElemRight&& other, const __Property_##propertyName<>& _this) {                  \
			return static_cast<__VA_ARGS__>(other) - _this.get();                                  \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator*(_ElemRight&& other) const {                          \
			return get() * static_cast<_PropertyType>(other);                                      \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator*(_ElemRight&& other, const __Property_##propertyName<>& _this) {                  \
			return _this.get() * static_cast<__VA_ARGS__>(other);                                  \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator/(_ElemRight&& other) const {                          \
			return get() / static_cast<_PropertyType>(other);                                      \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator/(_ElemRight&& other, const __Property_##propertyName<>& _this) {                  \
			return static_cast<__VA_ARGS__>(other) / _this.get();                                  \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator%(_ElemRight&& other) const {                          \
			return get() % static_cast<_PropertyType>(other);                                      \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator%(_ElemRight&& other, const __Property_##propertyName<>& _this) {                  \
			return static_cast<__VA_ARGS__>(other) % _this.get();                                  \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator&(_ElemRight&& other) const {                          \
			return get() & static_cast<_PropertyType>(other);                                      \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator&(_ElemRight&& other, const __Property_##propertyName<>& _this) {                  \
			return static_cast<__VA_ARGS__>(other) & _this.get();                                  \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator|(_ElemRight&& other) const {                          \
			return get() | static_cast<_PropertyType>(other);                                      \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator|(_ElemRight&& other, const __Property_##propertyName<>& _this) {                  \
			return _this.get() | static_cast<__VA_ARGS__>(other);                                  \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator^(_ElemRight&& other) const {                          \
			return get() ^ static_cast<_PropertyType>(other);                                      \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator^(_ElemRight&& other, const __Property_##propertyName<>& _this) {                  \
			return static_cast<__VA_ARGS__>(other) ^ _this.get();                                  \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator<<(_ElemRight&& other) const {                         \
			return get() << static_cast<_PropertyType>(other);                                     \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator<<(_ElemRight&& other, const __Property_##propertyName<>& _this) {                 \
			return static_cast<__VA_ARGS__>(other) << _this.get();                                 \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator>>(_ElemRight&& other) const {                         \
			return get() >> static_cast<_PropertyType>(other);                                     \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator>>(_ElemRight&& other, const __Property_##propertyName<>& _this) {                 \
			return static_cast<__VA_ARGS__>(other) >> _this.get();                                 \
		}                                                                                          \
		template <class... _ElemRight>                                                             \
		FORCE_INLINE decltype(auto) _operator_subscript(_ElemRight&&... other) {                   \
			return get().__ref()._operator_subscript(std::forward<_ElemRight>(other)...);          \
		}                                                                                          \
		template <class... _ElemRight>                                                             \
		FORCE_INLINE decltype(auto) _operator_subscript(_ElemRight&&... other) const {             \
			return get().__ref()._operator_subscript(std::forward<_ElemRight>(other)...);          \
		}                                                                                          \
		template <class... Args>                                                                   \
		FORCE_INLINE decltype(auto) operator()(Args&&... other) {                                  \
			return get()(std::forward<Args>(other)...);                                            \
		}                                                                                          \
		template <class... Args>                                                                   \
		FORCE_INLINE decltype(auto) operator()(Args&&... other) const {                            \
			return get()(std::forward<Args>(other)...);                                            \
		}                                                                                          \
		template <class Ch>                                                                        \
		friend FORCE_INLINE decltype(auto) operator<<(                                             \
		    std::basic_ostream<Ch>& stream,                                                        \
		    const __Property_##propertyName<_PropertyType>& elem) {                                \
			return stream << elem.get();                                                           \
		}                                                                                          \
		FORCE_INLINE decltype(auto) operator*() requires requires(_PropertyType t) { *t; }         \
		{ return *get(); }                                                                         \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator==(_ElemRight&& other) const {                         \
			return get() == static_cast<_PropertyType>(other);                                     \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator==(_ElemRight&& other, const __Property_##propertyName<>& _this) {                 \
			return _this.get() == static_cast<__VA_ARGS__>(other);                                 \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator!=(_ElemRight&& other) const {                         \
			return get() != static_cast<_PropertyType>(other);                                     \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator!=(_ElemRight&& other, const __Property_##propertyName<>& _this) {                 \
			return _this.get() != static_cast<__VA_ARGS__>(other);                                 \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator<(_ElemRight&& other) const {                          \
			return get() < static_cast<_PropertyType>(other);                                      \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator<(_ElemRight&& other, const __Property_##propertyName<>& _this) {                  \
			return _this.get() > static_cast<__VA_ARGS__>(other);                                  \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator<=(_ElemRight&& other) const {                         \
			return get() <= static_cast<_PropertyType>(other);                                     \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator<=(_ElemRight&& other, const __Property_##propertyName<>& _this) {                 \
			return _this.get() >= static_cast<__VA_ARGS__>(other);                                 \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator>(_ElemRight&& other) const {                          \
			return get() > static_cast<_PropertyType>(other);                                      \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator>(_ElemRight&& other, const __Property_##propertyName<>& _this) {                  \
			return _this.get() < static_cast<__VA_ARGS__>(other);                                  \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator>=(_ElemRight&& other) const {                         \
			return get() >= static_cast<_PropertyType>(other);                                     \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator>=(_ElemRight&& other, const __Property_##propertyName<>& _this) {                 \
			return _this.get() <= static_cast<__VA_ARGS__>(other);                                 \
		}                                                                                          \
		FORCE_INLINE explicit operator bool() const                                                \
		    requires(!std::is_same_v<_PropertyType, bool>) {                                       \
			return static_cast<bool>(get());                                                       \
		}                                                                                          \
                                                                                                   \
		setterAccess : FORCE_INLINE void operator=(const __VA_ARGS__& value) {                     \
			ADV_PROPERTY_GET_PARENT_POINTER(propertyName);                                         \
			parent->setterFunc(value);                                                             \
		}                                                                                          \
                                                                                                   \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator+=(                                                    \
		    _ElemRight&&                                                                           \
		        other) /*requires requires(_PropertyType t, _ElemRight u) { t = t += u; }*/ {      \
			return *this = get() += static_cast<__VA_ARGS__>(other);                               \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator-=(                                                    \
		    _ElemRight&&                                                                           \
		        other) /*requires requires(_PropertyType t, _ElemRight u) { t = t -= u; }*/ {      \
			return *this = get() -= static_cast<__VA_ARGS__>(other);                               \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator*=(                                                    \
		    _ElemRight&&                                                                           \
		        other) /*requires requires(_PropertyType t, _ElemRight u) { t = t *= u; }*/ {      \
			return *this = get() *= static_cast<__VA_ARGS__>(other);                               \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator/=(                                                    \
		    _ElemRight&&                                                                           \
		        other) /*requires requires(_PropertyType t, _ElemRight u) { t = t /= u; }*/ {      \
			return *this = get() /= static_cast<__VA_ARGS__>(other);                               \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator%=(                                                    \
		    _ElemRight&&                                                                           \
		        other) /*requires requires(_PropertyType t, _ElemRight u) { t = t %= u; }*/ {      \
			return *this = get() %= static_cast<__VA_ARGS__>(other);                               \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator&=(                                                    \
		    _ElemRight&&                                                                           \
		        other) /*requires requires(_PropertyType t, _ElemRight u) { t = t &= u; }*/ {      \
			return *this = get() &= static_cast<__VA_ARGS__>(other);                               \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator|=(                                                    \
		    _ElemRight&&                                                                           \
		        other) /*requires requires(_PropertyType t, _ElemRight u) { t = t |= u; }*/ {      \
			return *this = get() |= static_cast<__VA_ARGS__>(other);                               \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator^=(                                                    \
		    _ElemRight&&                                                                           \
		        other) /*requires requires(_PropertyType t, _ElemRight u) { t = t ^= u; }*/ {      \
			return *this = get() ^= static_cast<__VA_ARGS__>(other);                               \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator<<=(                                                   \
		    _ElemRight&&                                                                           \
		        other) /*requires requires(_PropertyType t, _ElemRight u) { t = t <<= u; }*/ {     \
			return *this = get() <<= static_cast<__VA_ARGS__>(other);                              \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator>>=(                                                   \
		    _ElemRight&&                                                                           \
		        other) /*requires requires(_PropertyType t, _ElemRight u) { t = t >>= u; }*/ {     \
			return *this = get() >>= static_cast<__VA_ARGS__>(other);                              \
		}                                                                                          \
		FORCE_INLINE decltype(auto) operator++() requires requires(_PropertyType t) { ++t; }       \
		{ return *this = ++get(); }                                                                \
		FORCE_INLINE decltype(auto) operator++(int) requires requires(_PropertyType t) { t++; }    \
		{                                                                                          \
			auto copy = get();                                                                     \
			*this     = ++get();                                                                   \
			return copy;                                                                           \
		}                                                                                          \
		FORCE_INLINE decltype(auto) operator--() requires requires(_PropertyType t) { --t; }       \
		{ return *this = --get(); }                                                                \
		FORCE_INLINE decltype(auto) operator--(int) requires requires(_PropertyType t) { t--; }    \
		{                                                                                          \
			auto copy = get();                                                                     \
			*this     = --get();                                                                   \
			return copy;                                                                           \
		}                                                                                          \
	};                                                                                             \
	accessSpecifier:                                                                               \
	ADV_VIRTUAL_FIELD __Property_##propertyName<> propertyName;

#endif  // if ADV_USE_DECLSPEC_PROPERTY

#define ADV_PROPERTY_GETTER_STATIC(accessSpecifier, dllAccessSpecifier, propertyName, getterFunc,  \
                                   ...)                                                            \
                                                                                                   \
   private:                                                                                        \
	template <class _PropertyType = __VA_ARGS__>                                                   \
	struct __Property_##propertyName {                                                             \
		FORCE_INLINE __VA_ARGS__ get() const { return ADV_PROPERTY_SELF::getterFunc(); }           \
		FORCE_INLINE operator __VA_ARGS__() const { return get(); }                                \
		FORCE_INLINE decltype(auto) __ref() const { return get(); }                                \
                                                                                                   \
		FORCE_INLINE decltype(auto) operator+() const requires requires(_PropertyType t) {         \
			t = +t;                                                                                \
		}                                                                                          \
		{ return +get(); }                                                                         \
		FORCE_INLINE decltype(auto) operator-() const requires requires(_PropertyType t) {         \
			t = -t;                                                                                \
		}                                                                                          \
		{ return -get(); }                                                                         \
		FORCE_INLINE decltype(auto) operator~() const requires requires(_PropertyType t) {         \
			t = ~t;                                                                                \
		}                                                                                          \
		{ return ~get(); }                                                                         \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator+(_ElemRight&& other) const {                          \
			return get() + static_cast<_PropertyType>(other);                                      \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator+(_ElemRight&& other, const __Property_##propertyName<>& _this) {                  \
			return _this.get() + static_cast<__VA_ARGS__>(other);                                  \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator-(_ElemRight&& other) const {                          \
			return get() - static_cast<_PropertyType>(other);                                      \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator-(_ElemRight&& other, const __Property_##propertyName<>& _this) {                  \
			return static_cast<__VA_ARGS__>(other) - _this.get();                                  \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator*(_ElemRight&& other) const {                          \
			return get() * static_cast<_PropertyType>(other);                                      \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator*(_ElemRight&& other, const __Property_##propertyName<>& _this) {                  \
			return _this.get() * static_cast<__VA_ARGS__>(other);                                  \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator/(_ElemRight&& other) const {                          \
			return get() / static_cast<_PropertyType>(other);                                      \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator/(_ElemRight&& other, const __Property_##propertyName<>& _this) {                  \
			return static_cast<__VA_ARGS__>(other) / _this.get();                                  \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator%(_ElemRight&& other) const {                          \
			return get() % static_cast<_PropertyType>(other);                                      \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator%(_ElemRight&& other, const __Property_##propertyName<>& _this) {                  \
			return static_cast<__VA_ARGS__>(other) % _this.get();                                  \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator&(_ElemRight&& other) const {                          \
			return get() & static_cast<_PropertyType>(other);                                      \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator&(_ElemRight&& other, const __Property_##propertyName<>& _this) {                  \
			return static_cast<__VA_ARGS__>(other) & _this.get();                                  \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator|(_ElemRight&& other) const {                          \
			return get() | static_cast<_PropertyType>(other);                                      \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator|(_ElemRight&& other, const __Property_##propertyName<>& _this) {                  \
			return _this.get() | static_cast<__VA_ARGS__>(other);                                  \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator^(_ElemRight&& other) const {                          \
			return get() ^ static_cast<_PropertyType>(other);                                      \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator^(_ElemRight&& other, const __Property_##propertyName<>& _this) {                  \
			return static_cast<__VA_ARGS__>(other) ^ _this.get();                                  \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator<<(_ElemRight&& other) const {                         \
			return get() << static_cast<_PropertyType>(other);                                     \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator<<(_ElemRight&& other, const __Property_##propertyName<>& _this) {                 \
			return static_cast<__VA_ARGS__>(other) << _this.get();                                 \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator>>(_ElemRight&& other) const {                         \
			return get() >> static_cast<_PropertyType>(other);                                     \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator>>(_ElemRight&& other, const __Property_##propertyName<>& _this) {                 \
			return static_cast<__VA_ARGS__>(other) >> _this.get();                                 \
		}                                                                                          \
		template <class... _ElemRight>                                                             \
		FORCE_INLINE decltype(auto) _operator_subscript(_ElemRight&&... other) {                   \
			return get().__ref()._operator_subscript(std::forward<_ElemRight>(other)...);          \
		}                                                                                          \
		template <class... _ElemRight>                                                             \
		FORCE_INLINE decltype(auto) _operator_subscript(_ElemRight&&... other) const {             \
			return get().__ref()._operator_subscript(std::forward<_ElemRight>(other)...);          \
		}                                                                                          \
		template <class... Args>                                                                   \
		FORCE_INLINE decltype(auto) operator()(Args&&... other) {                                  \
			return get()(std::forward<Args>(other)...);                                            \
		}                                                                                          \
		template <class... Args>                                                                   \
		FORCE_INLINE decltype(auto) operator()(Args&&... other) const {                            \
			return get()(std::forward<Args>(other)...);                                            \
		}                                                                                          \
		template <class Ch>                                                                        \
		friend FORCE_INLINE decltype(auto) operator<<(                                             \
		    std::basic_ostream<Ch>& stream,                                                        \
		    const __Property_##propertyName<_PropertyType>& elem) {                                \
			return stream << elem.get();                                                           \
		}                                                                                          \
		FORCE_INLINE decltype(auto) operator*() requires requires(_PropertyType t) { *t; }         \
		{ return *get(); }                                                                         \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator==(_ElemRight&& other) const {                         \
			return get() == static_cast<_PropertyType>(other);                                     \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator==(_ElemRight&& other, const __Property_##propertyName<>& _this) {                 \
			return _this.get() == static_cast<__VA_ARGS__>(other);                                 \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator!=(_ElemRight&& other) const {                         \
			return get() != static_cast<_PropertyType>(other);                                     \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator!=(_ElemRight&& other, const __Property_##propertyName<>& _this) {                 \
			return _this.get() != static_cast<__VA_ARGS__>(other);                                 \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator<(_ElemRight&& other) const {                          \
			return get() < static_cast<_PropertyType>(other);                                      \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator<(_ElemRight&& other, const __Property_##propertyName<>& _this) {                  \
			return _this.get() > static_cast<__VA_ARGS__>(other);                                  \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator<=(_ElemRight&& other) const {                         \
			return get() <= static_cast<_PropertyType>(other);                                     \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator<=(_ElemRight&& other, const __Property_##propertyName<>& _this) {                 \
			return _this.get() >= static_cast<__VA_ARGS__>(other);                                 \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator>(_ElemRight&& other) const {                          \
			return get() > static_cast<_PropertyType>(other);                                      \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator>(_ElemRight&& other, const __Property_##propertyName<>& _this) {                  \
			return _this.get() < static_cast<__VA_ARGS__>(other);                                  \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator>=(_ElemRight&& other) const {                         \
			return get() >= static_cast<_PropertyType>(other);                                     \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator>=(_ElemRight&& other, const __Property_##propertyName<>& _this) {                 \
			return _this.get() <= static_cast<__VA_ARGS__>(other);                                 \
		}                                                                                          \
		FORCE_INLINE explicit operator bool() const                                                \
		    requires(!std::is_same_v<_PropertyType, bool>) {                                       \
			return static_cast<bool>(get());                                                       \
		}                                                                                          \
	};                                                                                             \
	accessSpecifier:                                                                               \
	static dllAccessSpecifier __Property_##propertyName<> propertyName;

#define ADV_PROPERTY_SETTER_STATIC(accessSpecifier, dllAccessSpecifier, propertyName, setterFunc,  \
                                   ...)                                                            \
                                                                                                   \
   private:                                                                                        \
	template <class _PropertyType = __VA_ARGS__>                                                   \
	struct __Property_##propertyName {                                                             \
		FORCE_INLINE void operator=(const __VA_ARGS__& value) {                                    \
			ADV_PROPERTY_SELF::setterFunc(value);                                                  \
		}                                                                                          \
	};                                                                                             \
	accessSpecifier:                                                                               \
	static dllAccessSpecifier __Property_##propertyName<> propertyName;

#define ADV_PROPERTY_GETTER_SETTER_STATIC(accessSpecifier, dllAccessSpecifier, propertyName,       \
                                          getterAccess, getterFunc, setterAccess, setterFunc, ...) \
                                                                                                   \
   private:                                                                                        \
	template <class _PropertyType = __VA_ARGS__>                                                   \
	struct __Property_##propertyName {                                                             \
		friend struct ADV_PROPERTY_SELF;                                                           \
		getterAccess : FORCE_INLINE __VA_ARGS__ get() const {                                      \
			return ADV_PROPERTY_SELF::getterFunc();                                                \
		}                                                                                          \
		FORCE_INLINE operator __VA_ARGS__() const { return get(); }                                \
		FORCE_INLINE decltype(auto) __ref() const { return get(); }                                \
                                                                                                   \
		FORCE_INLINE decltype(auto) operator+() const requires requires(_PropertyType t) {         \
			t = +t;                                                                                \
		}                                                                                          \
		{ return +get(); }                                                                         \
		FORCE_INLINE decltype(auto) operator-() const requires requires(_PropertyType t) {         \
			t = -t;                                                                                \
		}                                                                                          \
		{ return -get(); }                                                                         \
		FORCE_INLINE decltype(auto) operator~() const requires requires(_PropertyType t) {         \
			t = ~t;                                                                                \
		}                                                                                          \
		{ return ~get(); }                                                                         \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator+(_ElemRight&& other) const {                          \
			return get() + static_cast<_PropertyType>(other);                                      \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator+(_ElemRight&& other, const __Property_##propertyName<>& _this) {                  \
			return _this.get() + static_cast<__VA_ARGS__>(other);                                  \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator-(_ElemRight&& other) const {                          \
			return get() - static_cast<_PropertyType>(other);                                      \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator-(_ElemRight&& other, const __Property_##propertyName<>& _this) {                  \
			return static_cast<__VA_ARGS__>(other) - _this.get();                                  \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator*(_ElemRight&& other) const {                          \
			return get() * static_cast<_PropertyType>(other);                                      \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator*(_ElemRight&& other, const __Property_##propertyName<>& _this) {                  \
			return _this.get() * static_cast<__VA_ARGS__>(other);                                  \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator/(_ElemRight&& other) const {                          \
			return get() / static_cast<_PropertyType>(other);                                      \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator/(_ElemRight&& other, const __Property_##propertyName<>& _this) {                  \
			return static_cast<__VA_ARGS__>(other) / _this.get();                                  \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator%(_ElemRight&& other) const {                          \
			return get() % static_cast<_PropertyType>(other);                                      \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator%(_ElemRight&& other, const __Property_##propertyName<>& _this) {                  \
			return static_cast<__VA_ARGS__>(other) % _this.get();                                  \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator&(_ElemRight&& other) const {                          \
			return get() & static_cast<_PropertyType>(other);                                      \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator&(_ElemRight&& other, const __Property_##propertyName<>& _this) {                  \
			return static_cast<__VA_ARGS__>(other) & _this.get();                                  \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator|(_ElemRight&& other) const {                          \
			return get() | static_cast<_PropertyType>(other);                                      \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator|(_ElemRight&& other, const __Property_##propertyName<>& _this) {                  \
			return _this.get() | static_cast<__VA_ARGS__>(other);                                  \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator^(_ElemRight&& other) const {                          \
			return get() ^ static_cast<_PropertyType>(other);                                      \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator^(_ElemRight&& other, const __Property_##propertyName<>& _this) {                  \
			return static_cast<__VA_ARGS__>(other) ^ _this.get();                                  \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator<<(_ElemRight&& other) const {                         \
			return get() << static_cast<_PropertyType>(other);                                     \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator<<(_ElemRight&& other, const __Property_##propertyName<>& _this) {                 \
			return static_cast<__VA_ARGS__>(other) << _this.get();                                 \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator>>(_ElemRight&& other) const {                         \
			return get() >> static_cast<_PropertyType>(other);                                     \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator>>(_ElemRight&& other, const __Property_##propertyName<>& _this) {                 \
			return static_cast<__VA_ARGS__>(other) >> _this.get();                                 \
		}                                                                                          \
		template <class... _ElemRight>                                                             \
		FORCE_INLINE decltype(auto) _operator_subscript(_ElemRight&&... other) {                   \
			return get().__ref()._operator_subscript(std::forward<_ElemRight>(other)...);          \
		}                                                                                          \
		template <class... _ElemRight>                                                             \
		FORCE_INLINE decltype(auto) _operator_subscript(_ElemRight&&... other) const {             \
			return get().__ref()._operator_subscript(std::forward<_ElemRight>(other)...);          \
		}                                                                                          \
		template <class... Args>                                                                   \
		FORCE_INLINE decltype(auto) operator()(Args&&... other) {                                  \
			return get()(std::forward<Args>(other)...);                                            \
		}                                                                                          \
		template <class... Args>                                                                   \
		FORCE_INLINE decltype(auto) operator()(Args&&... other) const {                            \
			return get()(std::forward<Args>(other)...);                                            \
		}                                                                                          \
		template <class Ch>                                                                        \
		friend FORCE_INLINE decltype(auto) operator<<(                                             \
		    std::basic_ostream<Ch>& stream,                                                        \
		    const __Property_##propertyName<_PropertyType>& elem) {                                \
			return stream << elem.get();                                                           \
		}                                                                                          \
		FORCE_INLINE decltype(auto) operator*() requires requires(_PropertyType t) { *t; }         \
		{ return *get(); }                                                                         \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator==(_ElemRight&& other) const {                         \
			return get() == static_cast<_PropertyType>(other);                                     \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator==(_ElemRight&& other, const __Property_##propertyName<>& _this) {                 \
			return _this.get() == static_cast<__VA_ARGS__>(other);                                 \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator!=(_ElemRight&& other) const {                         \
			return get() != static_cast<_PropertyType>(other);                                     \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator!=(_ElemRight&& other, const __Property_##propertyName<>& _this) {                 \
			return _this.get() != static_cast<__VA_ARGS__>(other);                                 \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator<(_ElemRight&& other) const {                          \
			return get() < static_cast<_PropertyType>(other);                                      \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator<(_ElemRight&& other, const __Property_##propertyName<>& _this) {                  \
			return _this.get() > static_cast<__VA_ARGS__>(other);                                  \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator<=(_ElemRight&& other) const {                         \
			return get() <= static_cast<_PropertyType>(other);                                     \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator<=(_ElemRight&& other, const __Property_##propertyName<>& _this) {                 \
			return _this.get() >= static_cast<__VA_ARGS__>(other);                                 \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator>(_ElemRight&& other) const {                          \
			return get() > static_cast<_PropertyType>(other);                                      \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator>(_ElemRight&& other, const __Property_##propertyName<>& _this) {                  \
			return _this.get() < static_cast<__VA_ARGS__>(other);                                  \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator>=(_ElemRight&& other) const {                         \
			return get() >= static_cast<_PropertyType>(other);                                     \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		requires !std::same_as<std::decay_t<_ElemRight>,                                           \
		                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto)     \
		operator>=(_ElemRight&& other, const __Property_##propertyName<>& _this) {                 \
			return _this.get() <= static_cast<__VA_ARGS__>(other);                                 \
		}                                                                                          \
		FORCE_INLINE explicit operator bool() const                                                \
		    requires(!std::is_same_v<_PropertyType, bool>) {                                       \
			return static_cast<bool>(get());                                                       \
		}                                                                                          \
                                                                                                   \
		setterAccess : FORCE_INLINE void operator=(const __VA_ARGS__& value) {                     \
			ADV_PROPERTY_SELF::setterFunc(value);                                                  \
		}                                                                                          \
                                                                                                   \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator+=(                                                    \
		    _ElemRight&&                                                                           \
		        other) /*requires requires(_PropertyType t, _ElemRight u) { t = t += u; }*/ {      \
			return *this = get() += static_cast<__VA_ARGS__>(other);                               \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator-=(                                                    \
		    _ElemRight&&                                                                           \
		        other) /*requires requires(_PropertyType t, _ElemRight u) { t = t -= u; }*/ {      \
			return *this = get() -= static_cast<__VA_ARGS__>(other);                               \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator*=(                                                    \
		    _ElemRight&&                                                                           \
		        other) /*requires requires(_PropertyType t, _ElemRight u) { t = t *= u; }*/ {      \
			return *this = get() *= static_cast<__VA_ARGS__>(other);                               \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator/=(                                                    \
		    _ElemRight&&                                                                           \
		        other) /*requires requires(_PropertyType t, _ElemRight u) { t = t /= u; }*/ {      \
			return *this = get() /= static_cast<__VA_ARGS__>(other);                               \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator%=(                                                    \
		    _ElemRight&&                                                                           \
		        other) /*requires requires(_PropertyType t, _ElemRight u) { t = t %= u; }*/ {      \
			return *this = get() %= static_cast<__VA_ARGS__>(other);                               \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator&=(                                                    \
		    _ElemRight&&                                                                           \
		        other) /*requires requires(_PropertyType t, _ElemRight u) { t = t &= u; }*/ {      \
			return *this = get() &= static_cast<__VA_ARGS__>(other);                               \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator|=(                                                    \
		    _ElemRight&&                                                                           \
		        other) /*requires requires(_PropertyType t, _ElemRight u) { t = t |= u; }*/ {      \
			return *this = get() |= static_cast<__VA_ARGS__>(other);                               \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator^=(                                                    \
		    _ElemRight&&                                                                           \
		        other) /*requires requires(_PropertyType t, _ElemRight u) { t = t ^= u; }*/ {      \
			return *this = get() ^= static_cast<__VA_ARGS__>(other);                               \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator<<=(                                                   \
		    _ElemRight&&                                                                           \
		        other) /*requires requires(_PropertyType t, _ElemRight u) { t = t <<= u; }*/ {     \
			return *this = get() <<= static_cast<__VA_ARGS__>(other);                              \
		}                                                                                          \
		template <class _ElemRight>                                                                \
		FORCE_INLINE decltype(auto) operator>>=(                                                   \
		    _ElemRight&&                                                                           \
		        other) /*requires requires(_PropertyType t, _ElemRight u) { t = t >>= u; }*/ {     \
			return *this = get() >>= static_cast<__VA_ARGS__>(other);                              \
		}                                                                                          \
		FORCE_INLINE decltype(auto) operator++() requires requires(_PropertyType t) { ++t; }       \
		{ return *this = ++get(); }                                                                \
		FORCE_INLINE decltype(auto) operator++(int) requires requires(_PropertyType t) { t++; }    \
		{                                                                                          \
			auto copy = get();                                                                     \
			*this     = ++get();                                                                   \
			return copy;                                                                           \
		}                                                                                          \
		FORCE_INLINE decltype(auto) operator--() requires requires(_PropertyType t) { --t; }       \
		{ return *this = --get(); }                                                                \
		FORCE_INLINE decltype(auto) operator--(int) requires requires(_PropertyType t) { t--; }    \
		{                                                                                          \
			auto copy = get();                                                                     \
			*this     = --get();                                                                   \
			return copy;                                                                           \
		}                                                                                          \
	};                                                                                             \
	accessSpecifier:                                                                               \
	static dllAccessSpecifier __Property_##propertyName<> propertyName;

#define ADV_EXTENSION_PROPERTY_GETTER_SETTER(propertyName, getterFunc, setterFunc, ...)            \
	namespace __properties {                                                                       \
		template <class _ParentType, class _PropertyType = __VA_ARGS__>                            \
		struct __Property_##propertyName {                                                         \
			_ParentType parent;                                                                    \
			FORCE_INLINE __VA_ARGS__ get() const { return getterFunc(parent); }                    \
			FORCE_INLINE operator __VA_ARGS__() const { return get(); }                            \
			FORCE_INLINE decltype(auto) __ref() const { return get(); }                            \
                                                                                                   \
			FORCE_INLINE decltype(auto) operator+() const requires requires(_PropertyType t) {     \
				t = +t;                                                                            \
			}                                                                                      \
			{ return +get(); }                                                                     \
			FORCE_INLINE decltype(auto) operator-() const requires requires(_PropertyType t) {     \
				t = -t;                                                                            \
			}                                                                                      \
			{ return -get(); }                                                                     \
			FORCE_INLINE decltype(auto) operator~() const requires requires(_PropertyType t) {     \
				t = ~t;                                                                            \
			}                                                                                      \
			{ return ~get(); }                                                                     \
			template <class _ElemRight>                                                            \
			FORCE_INLINE decltype(auto) operator+(_ElemRight&& other) const {                      \
				return get() + static_cast<_PropertyType>(other);                                  \
			}                                                                                      \
			template <class _ElemRight>                                                            \
			requires !std::same_as<std::decay_t<_ElemRight>,                                       \
			                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto) \
			operator+(_ElemRight&& other, const __Property_##propertyName<>& _this) {              \
				return _this.get() + static_cast<__VA_ARGS__>(other);                              \
			}                                                                                      \
			template <class _ElemRight>                                                            \
			FORCE_INLINE decltype(auto) operator-(_ElemRight&& other) const {                      \
				return get() - static_cast<_PropertyType>(other);                                  \
			}                                                                                      \
			template <class _ElemRight>                                                            \
			requires !std::same_as<std::decay_t<_ElemRight>,                                       \
			                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto) \
			operator-(_ElemRight&& other, const __Property_##propertyName<>& _this) {              \
				return static_cast<__VA_ARGS__>(other) - _this.get();                              \
			}                                                                                      \
			template <class _ElemRight>                                                            \
			FORCE_INLINE decltype(auto) operator*(_ElemRight&& other) const {                      \
				return get() * static_cast<_PropertyType>(other);                                  \
			}                                                                                      \
			template <class _ElemRight>                                                            \
			requires !std::same_as<std::decay_t<_ElemRight>,                                       \
			                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto) \
			operator*(_ElemRight&& other, const __Property_##propertyName<>& _this) {              \
				return _this.get() * static_cast<__VA_ARGS__>(other);                              \
			}                                                                                      \
			template <class _ElemRight>                                                            \
			FORCE_INLINE decltype(auto) operator/(_ElemRight&& other) const {                      \
				return get() / static_cast<_PropertyType>(other);                                  \
			}                                                                                      \
			template <class _ElemRight>                                                            \
			requires !std::same_as<std::decay_t<_ElemRight>,                                       \
			                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto) \
			operator/(_ElemRight&& other, const __Property_##propertyName<>& _this) {              \
				return static_cast<__VA_ARGS__>(other) / _this.get();                              \
			}                                                                                      \
			template <class _ElemRight>                                                            \
			FORCE_INLINE decltype(auto) operator%(_ElemRight&& other) const {                      \
				return get() % static_cast<_PropertyType>(other);                                  \
			}                                                                                      \
			template <class _ElemRight>                                                            \
			requires !std::same_as<std::decay_t<_ElemRight>,                                       \
			                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto) \
			operator%(_ElemRight&& other, const __Property_##propertyName<>& _this) {              \
				return static_cast<__VA_ARGS__>(other) % _this.get();                              \
			}                                                                                      \
			template <class _ElemRight>                                                            \
			FORCE_INLINE decltype(auto) operator&(_ElemRight&& other) const {                      \
				return get() & static_cast<_PropertyType>(other);                                  \
			}                                                                                      \
			template <class _ElemRight>                                                            \
			requires !std::same_as<std::decay_t<_ElemRight>,                                       \
			                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto) \
			operator&(_ElemRight&& other, const __Property_##propertyName<>& _this) {              \
				return static_cast<__VA_ARGS__>(other) & _this.get();                              \
			}                                                                                      \
			template <class _ElemRight>                                                            \
			FORCE_INLINE decltype(auto) operator|(_ElemRight&& other) const {                      \
				return get() | static_cast<_PropertyType>(other);                                  \
			}                                                                                      \
			template <class _ElemRight>                                                            \
			requires !std::same_as<std::decay_t<_ElemRight>,                                       \
			                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto) \
			operator|(_ElemRight&& other, const __Property_##propertyName<>& _this) {              \
				return _this.get() | static_cast<__VA_ARGS__>(other);                              \
			}                                                                                      \
			template <class _ElemRight>                                                            \
			FORCE_INLINE decltype(auto) operator^(_ElemRight&& other) const {                      \
				return get() ^ static_cast<_PropertyType>(other);                                  \
			}                                                                                      \
			template <class _ElemRight>                                                            \
			requires !std::same_as<std::decay_t<_ElemRight>,                                       \
			                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto) \
			operator^(_ElemRight&& other, const __Property_##propertyName<>& _this) {              \
				return static_cast<__VA_ARGS__>(other) ^ _this.get();                              \
			}                                                                                      \
			template <class _ElemRight>                                                            \
			FORCE_INLINE decltype(auto) operator<<(_ElemRight&& other) const {                     \
				return get() << static_cast<_PropertyType>(other);                                 \
			}                                                                                      \
			template <class _ElemRight>                                                            \
			requires !std::same_as<std::decay_t<_ElemRight>,                                       \
			                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto) \
			operator<<(_ElemRight&& other, const __Property_##propertyName<>& _this) {             \
				return static_cast<__VA_ARGS__>(other) << _this.get();                             \
			}                                                                                      \
			template <class _ElemRight>                                                            \
			FORCE_INLINE decltype(auto) operator>>(_ElemRight&& other) const {                     \
				return get() >> static_cast<_PropertyType>(other);                                 \
			}                                                                                      \
			template <class _ElemRight>                                                            \
			requires !std::same_as<std::decay_t<_ElemRight>,                                       \
			                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto) \
			operator>>(_ElemRight&& other, const __Property_##propertyName<>& _this) {             \
				return static_cast<__VA_ARGS__>(other) >> _this.get();                             \
			}                                                                                      \
			template <class... _ElemRight>                                                         \
			FORCE_INLINE decltype(auto) _operator_subscript(_ElemRight&&... other) {               \
				return get().__ref()._operator_subscript(std::forward<_ElemRight>(other)...);      \
			}                                                                                      \
			template <class... _ElemRight>                                                         \
			FORCE_INLINE decltype(auto) _operator_subscript(_ElemRight&&... other) const {         \
				return get().__ref()._operator_subscript(std::forward<_ElemRight>(other)...);      \
			}                                                                                      \
			template <class... Args>                                                               \
			FORCE_INLINE decltype(auto) operator()(Args&&... other) {                              \
				return get()(std::forward<Args>(other)...);                                        \
			}                                                                                      \
			template <class... Args>                                                               \
			FORCE_INLINE decltype(auto) operator()(Args&&... other) const {                        \
				return get()(std::forward<Args>(other)...);                                        \
			}                                                                                      \
			template <class Ch>                                                                    \
			friend FORCE_INLINE decltype(auto) operator<<(                                         \
			    std::basic_ostream<Ch>& stream,                                                    \
			    const __Property_##propertyName<_PropertyType>& elem) {                            \
				return stream << elem.get();                                                       \
			}                                                                                      \
			FORCE_INLINE decltype(auto) operator*() requires requires(_PropertyType t) { *t; }     \
			{ return *get(); }                                                                     \
			template <class _ElemRight>                                                            \
			FORCE_INLINE decltype(auto) operator==(_ElemRight&& other) const {                     \
				return get() == static_cast<_PropertyType>(other);                                 \
			}                                                                                      \
			template <class _ElemRight>                                                            \
			requires !std::same_as<std::decay_t<_ElemRight>,                                       \
			                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto) \
			operator==(_ElemRight&& other, const __Property_##propertyName<>& _this) {             \
				return _this.get() == static_cast<__VA_ARGS__>(other);                             \
			}                                                                                      \
			template <class _ElemRight>                                                            \
			FORCE_INLINE decltype(auto) operator!=(_ElemRight&& other) const {                     \
				return get() != static_cast<_PropertyType>(other);                                 \
			}                                                                                      \
			template <class _ElemRight>                                                            \
			requires !std::same_as<std::decay_t<_ElemRight>,                                       \
			                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto) \
			operator!=(_ElemRight&& other, const __Property_##propertyName<>& _this) {             \
				return _this.get() != static_cast<__VA_ARGS__>(other);                             \
			}                                                                                      \
			template <class _ElemRight>                                                            \
			FORCE_INLINE decltype(auto) operator<(_ElemRight&& other) const {                      \
				return get() < static_cast<_PropertyType>(other);                                  \
			}                                                                                      \
			template <class _ElemRight>                                                            \
			requires !std::same_as<std::decay_t<_ElemRight>,                                       \
			                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto) \
			operator<(_ElemRight&& other, const __Property_##propertyName<>& _this) {              \
				return _this.get() > static_cast<__VA_ARGS__>(other);                              \
			}                                                                                      \
			template <class _ElemRight>                                                            \
			FORCE_INLINE decltype(auto) operator<=(_ElemRight&& other) const {                     \
				return get() <= static_cast<_PropertyType>(other);                                 \
			}                                                                                      \
			template <class _ElemRight>                                                            \
			requires !std::same_as<std::decay_t<_ElemRight>,                                       \
			                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto) \
			operator<=(_ElemRight&& other, const __Property_##propertyName<>& _this) {             \
				return _this.get() >= static_cast<__VA_ARGS__>(other);                             \
			}                                                                                      \
			template <class _ElemRight>                                                            \
			FORCE_INLINE decltype(auto) operator>(_ElemRight&& other) const {                      \
				return get() > static_cast<_PropertyType>(other);                                  \
			}                                                                                      \
			template <class _ElemRight>                                                            \
			requires !std::same_as<std::decay_t<_ElemRight>,                                       \
			                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto) \
			operator>(_ElemRight&& other, const __Property_##propertyName<>& _this) {              \
				return _this.get() < static_cast<__VA_ARGS__>(other);                              \
			}                                                                                      \
			template <class _ElemRight>                                                            \
			FORCE_INLINE decltype(auto) operator>=(_ElemRight&& other) const {                     \
				return get() >= static_cast<_PropertyType>(other);                                 \
			}                                                                                      \
			template <class _ElemRight>                                                            \
			requires !std::same_as<std::decay_t<_ElemRight>,                                       \
			                       __Property_##propertyName<>> friend FORCE_INLINE decltype(auto) \
			operator>=(_ElemRight&& other, const __Property_##propertyName<>& _this) {             \
				return _this.get() <= static_cast<__VA_ARGS__>(other);                             \
			}                                                                                      \
			FORCE_INLINE explicit operator bool() const                                            \
			    requires(!std::is_same_v<_PropertyType, bool>) {                                   \
				return static_cast<bool>(get());                                                   \
			}                                                                                      \
                                                                                                   \
			FORCE_INLINE void operator=(const _PropertyType& value) { setterFunc(parent, value); } \
                                                                                                   \
			template <class _ElemRight>                                                            \
			FORCE_INLINE decltype(auto) operator+=(                                                \
			    _ElemRight&&                                                                       \
			        other) /*requires requires(_PropertyType t, _ElemRight u) { t = t += u; }*/ {  \
				return *this = get() += static_cast<__VA_ARGS__>(other);                           \
			}                                                                                      \
			template <class _ElemRight>                                                            \
			FORCE_INLINE decltype(auto) operator-=(                                                \
			    _ElemRight&&                                                                       \
			        other) /*requires requires(_PropertyType t, _ElemRight u) { t = t -= u; }*/ {  \
				return *this = get() -= static_cast<__VA_ARGS__>(other);                           \
			}                                                                                      \
			template <class _ElemRight>                                                            \
			FORCE_INLINE decltype(auto) operator*=(                                                \
			    _ElemRight&&                                                                       \
			        other) /*requires requires(_PropertyType t, _ElemRight u) { t = t *= u; }*/ {  \
				return *this = get() *= static_cast<__VA_ARGS__>(other);                           \
			}                                                                                      \
			template <class _ElemRight>                                                            \
			FORCE_INLINE decltype(auto) operator/=(                                                \
			    _ElemRight&&                                                                       \
			        other) /*requires requires(_PropertyType t, _ElemRight u) { t = t /= u; }*/ {  \
				return *this = get() /= static_cast<__VA_ARGS__>(other);                           \
			}                                                                                      \
			template <class _ElemRight>                                                            \
			FORCE_INLINE decltype(auto) operator%=(                                                \
			    _ElemRight&&                                                                       \
			        other) /*requires requires(_PropertyType t, _ElemRight u) { t = t %= u; }*/ {  \
				return *this = get() %= static_cast<__VA_ARGS__>(other);                           \
			}                                                                                      \
			template <class _ElemRight>                                                            \
			FORCE_INLINE decltype(auto) operator&=(                                                \
			    _ElemRight&&                                                                       \
			        other) /*requires requires(_PropertyType t, _ElemRight u) { t = t &= u; }*/ {  \
				return *this = get() &= static_cast<__VA_ARGS__>(other);                           \
			}                                                                                      \
			template <class _ElemRight>                                                            \
			FORCE_INLINE decltype(auto) operator|=(                                                \
			    _ElemRight&&                                                                       \
			        other) /*requires requires(_PropertyType t, _ElemRight u) { t = t |= u; }*/ {  \
				return *this = get() |= static_cast<__VA_ARGS__>(other);                           \
			}                                                                                      \
			template <class _ElemRight>                                                            \
			FORCE_INLINE decltype(auto) operator^=(                                                \
			    _ElemRight&&                                                                       \
			        other) /*requires requires(_PropertyType t, _ElemRight u) { t = t ^= u; }*/ {  \
				return *this = get() ^= static_cast<__VA_ARGS__>(other);                           \
			}                                                                                      \
			template <class _ElemRight>                                                            \
			FORCE_INLINE decltype(auto) operator<<=(                                               \
			    _ElemRight&&                                                                       \
			        other) /*requires requires(_PropertyType t, _ElemRight u) { t = t <<= u; }*/ { \
				return *this = get() <<= static_cast<__VA_ARGS__>(other);                          \
			}                                                                                      \
			template <class _ElemRight>                                                            \
			FORCE_INLINE decltype(auto) operator>>=(                                               \
			    _ElemRight&&                                                                       \
			        other) /*requires requires(_PropertyType t, _ElemRight u) { t = t >>= u; }*/ { \
				return *this = get() >>= static_cast<__VA_ARGS__>(other);                          \
			}                                                                                      \
			FORCE_INLINE decltype(auto) operator++() requires requires(_PropertyType t) { ++t; }   \
			{ return *this = ++get(); }                                                            \
			FORCE_INLINE decltype(auto) operator++(int) requires requires(_PropertyType t) {       \
				t++;                                                                               \
			}                                                                                      \
			{                                                                                      \
				auto copy = get();                                                                 \
				*this     = ++get();                                                               \
				return copy;                                                                       \
			}                                                                                      \
			FORCE_INLINE decltype(auto) operator--() requires requires(_PropertyType t) { --t; }   \
			{ return *this = --get(); }                                                            \
			FORCE_INLINE decltype(auto) operator--(int) requires requires(_PropertyType t) {       \
				t--;                                                                               \
			}                                                                                      \
			{                                                                                      \
				auto copy = get();                                                                 \
				*this     = --get();                                                               \
				return copy;                                                                       \
			}                                                                                      \
		};                                                                                         \
	}

#define ADV_CHECK_REF_STRUCT(Type, ...)                                                            \
	static_assert(!std::is_base_of_v<CppAdvance::RefStruct, ##__VA_ARGS__>,                        \
	              "Cannot to declare field of the type " #Type " outside the ref struct");
#define ADV_CHECK_INTERFACE(Type, ...)                                                             \
	static_assert(CppAdvance::IsInterface<##__VA_ARGS__>,                                          \
	              "Type " #Type                                                                    \
	              " cannot be inherited. A class can inherit only one superclass and multiple "    \
	              "interfaces. Structs and interfaces can implement multiple interfaces.");
#define ADV_CHECK_FOR_CONCRETE(Type)                                                               \
	static_assert(!std::is_abstract_v<__Class_##Type>,                                             \
	              "Type " #Type " does not implement all of its abstract bases");
#define ADV_CHECK_FOR_ABSTRACT(Type)                                                               \
	static_assert(std::is_abstract_v<__Class_##Type>,                                              \
	              "Abstract type " #Type " does not have abstract members");
#define ADV_CHECK_STATIC_CLASS(Type, ...)                                                          \
	static_assert(std::is_base_of_v<CppAdvance::StaticClass, ##__VA_ARGS__>,                       \
	              "The type " #Type " cannot be inherited by static class");
#define ADV_CHECK_INTERFACE_IMPLEMENTATION(Type, Interface, ...)                                   \
	static_assert(CppAdvance::ImplementsInterface<##__VA_ARGS__>(),                                \
	              "The type " #Type " does not implement interface " #Interface);

#define ADV_CLASS_DEFAULT_CTOR(...)                                                                \
	__VA_ARGS__() : ___super(new (::operator new(sizeof(__class))) __class) {}

#define ADV_CLASS_FROM_PTR(...)                                                                    \
                                                                                                   \
   protected:                                                                                      \
	##__VA_ARGS__(CppAdvance::Object* obj) : ___super(obj) {}
#define ADV_CLASS_WEAK_FROM_PTR(...)                                                               \
                                                                                                   \
   protected:                                                                                      \
	##__VA_ARGS__(CppAdvance::ObjectSideTable* obj) : ___super(obj) {}

#define ADV_CLASS_INIT(...)                                                                        \
                                                                                                   \
   public:                                                                                         \
	##__VA_ARGS__(__class* obj, InitTag) : ___super(reinterpret_cast<CppAdvance::Object*>(obj)) {}

#define ADV_CLASS_STRONG_COMMON_CTORS(...)                                                         \
                                                                                                   \
   public:                                                                                         \
	##__VA_ARGS__(const __class& ref);                                                             \
	##__VA_ARGS__(##__VA_ARGS__ const& copy) : ___super {copy._obj} { CppAdvance::Retain(_obj); }  \
	##__VA_ARGS__(##__VA_ARGS__&& moved) noexcept : ___super {moved._obj} {                        \
		moved._obj = nullptr;                                                                      \
	}                                                                                              \
	##__VA_ARGS__& operator=(__class const& ref);                                                  \
	##__VA_ARGS__& operator=(##__VA_ARGS__ const& copy) {                                          \
		if (copy._obj != _obj) {                                                                   \
			CppAdvance::Release(_obj);                                                             \
			_obj = copy._obj;                                                                      \
			CppAdvance::Retain(_obj);                                                              \
		}                                                                                          \
		return *this;                                                                              \
	}                                                                                              \
	##__VA_ARGS__& operator=(##__VA_ARGS__&& moved) {                                              \
		if (moved._obj != _obj) {                                                                  \
			CppAdvance::Release(_obj);                                                             \
			_obj = moved._obj;                                                                     \
		}                                                                                          \
		moved._obj = nullptr;                                                                      \
		return *this;                                                                              \
	}                                                                                              \
                                                                                                   \
   protected:                                                                                      \
	##__VA_ARGS__(decltype(nullptr)) noexcept : ___super {nullptr} {}                              \
	##__VA_ARGS__& operator=(decltype(nullptr)) {                                                  \
		if (_obj)                                                                                  \
			CppAdvance::Release(_obj);                                                             \
		_obj = nullptr;                                                                            \
		return *this;                                                                              \
	}                                                                                              \
	template <class __OptionalRef>                                                                 \
	friend class CppAdvance::OptionalStrongRef;                                                    \
	template <class __OptionalRef>                                                                 \
	friend class CppAdvance::OptionalUnownedRef;

#define ADV_CLASS_STRONG_CTOR_REF(...)                                                             \
	__VA_ARGS__(const __class& ref) : ___super {ref} {}

#define ADV_CLASS_STRONG_ASSIGN_REF(...)                                                           \
	operator=(const __class& ref) {                                                                \
		if (&ref != _obj) {                                                                        \
			CppAdvance::Release(_obj);                                                             \
			_obj = (CppAdvance::Object*) &ref;                                                     \
			CppAdvance::Retain(_obj);                                                              \
		}                                                                                          \
		return *this;                                                                              \
	}

#define ADV_CLASS_UNOWNED_COMMON_CTORS(...)                                                        \
                                                                                                   \
   public:                                                                                         \
	##__VA_ARGS__(const __class& ref);                                                             \
	##__VA_ARGS__(##__VA_ARGS__ const& copy) : ___super {copy._obj} {                              \
		CppAdvance::UnownedRetain(_obj);                                                           \
	}                                                                                              \
	##__VA_ARGS__(__strong_ref const& copy) : ___super {copy._obj} {                               \
		CppAdvance::UnownedRetain(_obj);                                                           \
	}                                                                                              \
	##__VA_ARGS__(##__VA_ARGS__&& moved) noexcept : ___super {moved._obj} {                        \
		moved._obj = nullptr;                                                                      \
	}                                                                                              \
	##__VA_ARGS__& operator=(const __class& ref);                                                  \
	##__VA_ARGS__& operator=(##__VA_ARGS__ const& copy) {                                          \
		if (copy._obj != _obj) {                                                                   \
			CppAdvance::UnownedRelease(_obj);                                                      \
			_obj = copy._obj;                                                                      \
			CppAdvance::UnownedRetain(_obj);                                                       \
		}                                                                                          \
		return *this;                                                                              \
	}                                                                                              \
	##__VA_ARGS__& operator=(__strong_ref const& copy) {                                           \
		if (copy._obj != _obj) {                                                                   \
			CppAdvance::UnownedRelease(_obj);                                                      \
			_obj = copy._obj;                                                                      \
			CppAdvance::UnownedRetain(_obj);                                                       \
		}                                                                                          \
		return *this;                                                                              \
	}                                                                                              \
	##__VA_ARGS__& operator=(##__VA_ARGS__&& moved) {                                              \
		if (moved._obj != _obj) {                                                                  \
			CppAdvance::UnownedRelease(_obj);                                                      \
			_obj = moved._obj;                                                                     \
		}                                                                                          \
		moved._obj = nullptr;                                                                      \
		return *this;                                                                              \
	}                                                                                              \
	FORCE_INLINE operator __strong_ref() const { return __ref(); }                                 \
                                                                                                   \
   protected:                                                                                      \
	##__VA_ARGS__(decltype(nullptr)) noexcept : ___super {nullptr} {}                              \
	##__VA_ARGS__& operator=(decltype(nullptr)) {                                                  \
		if (_obj)                                                                                  \
			CppAdvance::UnownedRelease(_obj);                                                      \
		_obj = nullptr;                                                                            \
		return *this;                                                                              \
	}                                                                                              \
	template <class __OptionalRef>                                                                 \
	friend class CppAdvance::OptionalStrongRef;                                                    \
	template <class __OptionalRef>                                                                 \
	friend class CppAdvance::OptionalUnownedRef;

#define ADV_CLASS_UNOWNED_CTOR_REF(...)                                                            \
	__VA_ARGS__(const __class& ref) : ___super {ref} {}

#define ADV_CLASS_UNOWNED_ASSIGN_REF(...)                                                          \
	operator=(const __class& ref) {                                                                \
		if (&ref != _obj) {                                                                        \
			CppAdvance::UnownedRelease(_obj);                                                      \
			_obj = (CppAdvance::Object*) &ref;                                                     \
			CppAdvance::UnownedRetain(_obj);                                                       \
		}                                                                                          \
		return *this;                                                                              \
	}

#define ADV_CLASS_WEAK_COMMON_CTORS(...)                                                           \
                                                                                                   \
   public:                                                                                         \
	##__VA_ARGS__(const __class& ref);                                                             \
	##__VA_ARGS__() : ___super {nullptr} {}                                                        \
	##__VA_ARGS__(##__VA_ARGS__ const& copy) : ___super {copy._obj} {                              \
		if (_obj)                                                                                  \
			_obj->incrementWeak();                                                                 \
	}                                                                                              \
	##__VA_ARGS__(##__VA_ARGS__&& moved) noexcept : ___super {moved._obj} {                        \
		moved._obj = nullptr;                                                                      \
	}                                                                                              \
	##__VA_ARGS__(__strong_ref const& strong) : ___super {formWeakRef(strong._obj)} {}             \
	##__VA_ARGS__(decltype(nullptr)) : ___super {nullptr} {}                                       \
	##__VA_ARGS__& operator=(const __class& ref);                                                  \
	##__VA_ARGS__& operator=(##__VA_ARGS__ const& copy) {                                          \
		if (copy._obj != _obj) {                                                                   \
			if (_obj)                                                                              \
				_obj->decrementWeak();                                                             \
			_obj = copy._obj;                                                                      \
			if (_obj)                                                                              \
				_obj->incrementWeak();                                                             \
		}                                                                                          \
		return *this;                                                                              \
	}                                                                                              \
	##__VA_ARGS__& operator=(__strong_ref const& strong) {                                         \
		if (!_obj || strong._obj != _obj->unsafeGetObject()) {                                     \
			if (_obj)                                                                              \
				_obj->decrementWeak();                                                             \
			_obj = formWeakRef(strong._obj);                                                       \
		}                                                                                          \
		return *this;                                                                              \
	}                                                                                              \
	##__VA_ARGS__& operator=(##__VA_ARGS__&& moved) {                                              \
		if (moved._obj != _obj) {                                                                  \
			if (_obj)                                                                              \
				_obj->decrementWeak();                                                             \
			_obj = moved._obj;                                                                     \
		}                                                                                          \
		moved._obj = nullptr;                                                                      \
		return *this;                                                                              \
	}                                                                                              \
	FORCE_INLINE CppAdvance::OptionalStrongRef<__strong_ref> pin() const {                         \
		if (_obj) {                                                                                \
			auto ptr = _obj->tryRetain();                                                          \
			if (ptr) {                                                                             \
				return __strong_ref(ptr);                                                          \
			}                                                                                      \
			return nullptr;                                                                        \
		}                                                                                          \
		return nullptr;                                                                            \
	}                                                                                              \
	FORCE_INLINE __strong_ref operator*() const { return *pin(); }                                 \
	##__VA_ARGS__& operator=(decltype(nullptr)) {                                                  \
		if (_obj) {                                                                                \
			_obj->decrementWeak();                                                                 \
		}                                                                                          \
		_obj = nullptr;                                                                            \
		return *this;                                                                              \
	}                                                                                              \
	FORCE_INLINE bool operator==(##__VA_ARGS__ const& other) const noexcept {                      \
		return _obj == other._obj;                                                                 \
	}                                                                                              \
	FORCE_INLINE bool operator!=(##__VA_ARGS__ const& other) const noexcept {                      \
		return _obj != other._obj;                                                                 \
	}                                                                                              \
	FORCE_INLINE bool operator==(decltype(nullptr)) const noexcept { return _obj == nullptr; }     \
	FORCE_INLINE bool operator!=(decltype(nullptr)) const noexcept { return _obj != nullptr; }     \
	FORCE_INLINE explicit operator bool() const noexcept { return isValid(); }                     \
	template <class __OptionalFunc>                                                                \
	auto andThen(__OptionalFunc&& func) const {                                                    \
		using return_type = std::invoke_result_t<__OptionalFunc, __strong_ref const&>;             \
		auto strong       = pin();                                                                 \
		if constexpr (std::is_void_v<return_type>) {                                               \
			if (strong.isValid())                                                                  \
				std::invoke(std::forward<__OptionalFunc>(func), *strong);                          \
		} else {                                                                                   \
			using wrapped_type = CppAdvance::Nullable<return_type>;                                \
			if (!strong.isValid())                                                                 \
				return wrapped_type(nullptr);                                                      \
			return wrapped_type(std::invoke(std::forward<__OptionalFunc>(func), *strong));         \
		}                                                                                          \
	}                                                                                              \
	template <class __OptionalValueOr>                                                             \
	__strong_ref valueOr(__OptionalValueOr&& func) const {                                         \
		using return_type = std::invoke_result_t<__OptionalValueOr>;                               \
		static_assert(std::is_convertible_v<return_type, __strong_ref>,                            \
		              "Default value must be convertible to left side of the expression");         \
		auto strong = pin();                                                                       \
		if (strong.isValid())                                                                      \
			return *strong;                                                                        \
		return std::invoke(std::forward<__OptionalValueOr>(func));                                 \
	}                                                                                              \
	template <class F>                                                                             \
	__weak_ref& assignIfNull(F&& func) {                                                           \
		using return_type = std::invoke_result_t<F>;                                               \
		static_assert(std::is_assignable_v<__weak_ref, return_type>,                               \
		              "Default value must be convertible to left side of the expression");         \
		if (!isValid())                                                                            \
			*this = std::invoke(std::forward<F>(func));                                            \
		return *this;                                                                              \
	}

#define ADV_CLASS_WEAK_CTOR_REF(...)                                                               \
	__VA_ARGS__(const __class& ref) : ___super {formWeakRef((CppAdvance::Object*) &ref)} {}

#define ADV_CLASS_WEAK_ASSIGN_REF(...)                                                             \
	operator=(const __class& ref) {                                                                \
		if (!_obj || (CppAdvance::Object*) &ref != _obj->unsafeGetObject()) {                      \
			if (_obj)                                                                              \
				_obj->decrementWeak();                                                             \
			_obj = formWeakRef((CppAdvance::Object*) &ref);                                        \
		}                                                                                          \
		return *this;                                                                              \
	}

#define ADV_INTERFACE_STRONG_COMMON_CTORS(...)                                                     \
                                                                                                   \
   public:                                                                                         \
	##__VA_ARGS__() = delete;                                                                      \
	##__VA_ARGS__(CppAdvance::Object* obj, __vtable const* vtable)                                 \
	    : ___super {obj}, _vtable {vtable} {}                                                      \
	##__VA_ARGS__(##__VA_ARGS__ const& copy) : ___super {copy._obj}, _vtable {copy._vtable} {      \
		CppAdvance::Retain(_obj);                                                                  \
	}                                                                                              \
	##__VA_ARGS__(##__VA_ARGS__&& moved) noexcept                                                  \
	    : ___super {moved._obj}, _vtable {moved._vtable} {                                         \
		moved._obj    = nullptr;                                                                   \
		moved._vtable = nullptr;                                                                   \
	}                                                                                              \
	##__VA_ARGS__& operator=(##__VA_ARGS__ const& copy) {                                          \
		if (copy._obj != _obj) {                                                                   \
			CppAdvance::Release(_obj);                                                             \
			_obj    = copy._obj;                                                                   \
			_vtable = copy._vtable;                                                                \
			CppAdvance::Retain(_obj);                                                              \
		}                                                                                          \
		return *this;                                                                              \
	}                                                                                              \
	##__VA_ARGS__& operator=(##__VA_ARGS__&& moved) {                                              \
		if (moved._obj != _obj) {                                                                  \
			CppAdvance::Release(_obj);                                                             \
			_obj    = moved._obj;                                                                  \
			_vtable = moved._vtable;                                                               \
		}                                                                                          \
		moved._obj    = nullptr;                                                                   \
		moved._vtable = nullptr;                                                                   \
		return *this;                                                                              \
	}                                                                                              \
                                                                                                   \
   protected:                                                                                      \
	##__VA_ARGS__(decltype(nullptr)) noexcept : ___super {nullptr}, _vtable {nullptr} {}           \
	##__VA_ARGS__& operator=(decltype(nullptr)) {                                                  \
		if (_obj)                                                                                  \
			CppAdvance::Release(_obj);                                                             \
		_obj    = nullptr;                                                                         \
		_vtable = nullptr;                                                                         \
		return *this;                                                                              \
	}                                                                                              \
	template <class __OptionalRef>                                                                 \
	friend class CppAdvance::OptionalStrongRef;                                                    \
	template <class __OptionalRef>                                                                 \
	friend class CppAdvance::OptionalUnownedRef;                                                   \
	template <class __IT>                                                                          \
	friend decltype(auto) CppAdvance::GetVTableFromInterface(__IT* iface);

#define ADV_INTERFACE_UNOWNED_COMMON_CTORS(...)                                                    \
                                                                                                   \
   public:                                                                                         \
	##__VA_ARGS__() = delete;                                                                      \
	##__VA_ARGS__(##__VA_ARGS__ const& copy) : ___super {copy._obj}, _vtable {copy._vtable} {      \
		CppAdvance::UnownedRetain(_obj);                                                           \
	}                                                                                              \
	##__VA_ARGS__(##__VA_ARGS__&& moved) noexcept                                                  \
	    : ___super {moved._obj}, _vtable {moved._vtable} {                                         \
		moved._obj    = nullptr;                                                                   \
		moved._vtable = nullptr;                                                                   \
	}                                                                                              \
	##__VA_ARGS__(__strong_ref const& copy) : ___super {copy._obj}, _vtable {copy._vtable} {       \
		CppAdvance::UnownedRetain(_obj);                                                           \
	}                                                                                              \
	##__VA_ARGS__& operator=(##__VA_ARGS__ const& copy) {                                          \
		if (copy._obj != _obj) {                                                                   \
			CppAdvance::UnownedRelease(_obj);                                                      \
			_obj    = copy._obj;                                                                   \
			_vtable = copy._vtable;                                                                \
			CppAdvance::UnownedRetain(_obj);                                                       \
		}                                                                                          \
		return *this;                                                                              \
	}                                                                                              \
	##__VA_ARGS__& operator=(##__VA_ARGS__&& moved) {                                              \
		if (moved._obj != _obj) {                                                                  \
			CppAdvance::UnownedRelease(_obj);                                                      \
			_obj    = moved._obj;                                                                  \
			_vtable = moved._vtable;                                                               \
		}                                                                                          \
		moved._obj    = nullptr;                                                                   \
		moved._vtable = nullptr;                                                                   \
		return *this;                                                                              \
	}                                                                                              \
	##__VA_ARGS__& operator=(__strong_ref const& copy) {                                           \
		if (copy._obj != _obj) {                                                                   \
			CppAdvance::UnownedRelease(_obj);                                                      \
			_obj    = copy._obj;                                                                   \
			_vtable = copy._vtable;                                                                \
			CppAdvance::UnownedRetain(_obj);                                                       \
		}                                                                                          \
		return *this;                                                                              \
	}                                                                                              \
	FORCE_INLINE operator __strong_ref() const {                                                   \
		UnownedCheck(_obj);                                                                        \
		return __strong_ref(_obj, _vtable);                                                        \
	}                                                                                              \
                                                                                                   \
   protected:                                                                                      \
	##__VA_ARGS__(decltype(nullptr)) noexcept : ___super {nullptr}, _vtable {nullptr} {}           \
	##__VA_ARGS__& operator=(decltype(nullptr)) {                                                  \
		if (_obj)                                                                                  \
			CppAdvance::UnownedRelease(_obj);                                                      \
		_obj    = nullptr;                                                                         \
		_vtable = nullptr;                                                                         \
		return *this;                                                                              \
	}                                                                                              \
	template <class __OptionalRef>                                                                 \
	friend class CppAdvance::OptionalStrongRef;                                                    \
	template <class __OptionalRef>                                                                 \
	friend class CppAdvance::OptionalUnownedRef;                                                   \
	template <class __IT>                                                                          \
	friend decltype(auto) CppAdvance::GetVTableFromInterface(__IT* iface);

#define ADV_INTERFACE_WEAK_COMMON_CTORS(...)                                                       \
                                                                                                   \
   public:                                                                                         \
	##__VA_ARGS__() : ___super {nullptr}, _vtable {nullptr} {}                                     \
	##__VA_ARGS__(##__VA_ARGS__ const& copy) : ___super {copy._obj}, _vtable {copy._vtable} {      \
		if (_obj)                                                                                  \
			_obj->incrementWeak();                                                                 \
	}                                                                                              \
	##__VA_ARGS__(##__VA_ARGS__&& moved) noexcept                                                  \
	    : ___super {moved._obj}, _vtable {moved._vtable} {                                         \
		moved._obj    = nullptr;                                                                   \
		moved._vtable = nullptr;                                                                   \
	}                                                                                              \
	##__VA_ARGS__(__strong_ref const& strong)                                                      \
	    : ___super {formWeakRef(strong._obj)}, _vtable {strong._vtable} {}                         \
	##__VA_ARGS__(decltype(nullptr)) : ___super {nullptr}, _vtable {nullptr} {}                    \
	##__VA_ARGS__& operator=(##__VA_ARGS__ const& copy) {                                          \
		if (copy._obj != _obj) {                                                                   \
			if (_obj)                                                                              \
				_obj->decrementWeak();                                                             \
			_obj    = copy._obj;                                                                   \
			_vtable = copy._vtable;                                                                \
			if (_obj)                                                                              \
				_obj->incrementWeak();                                                             \
		}                                                                                          \
		return *this;                                                                              \
	}                                                                                              \
	##__VA_ARGS__& operator=(__strong_ref const& strong) {                                         \
		if (!_obj || strong._obj != _obj->unsafeGetObject()) {                                     \
			if (_obj)                                                                              \
				_obj->decrementWeak();                                                             \
			_obj    = formWeakRef(strong._obj);                                                    \
			_vtable = strong._vtable;                                                              \
		}                                                                                          \
		return *this;                                                                              \
	}                                                                                              \
	##__VA_ARGS__& operator=(##__VA_ARGS__&& moved) {                                              \
		if (moved._obj != _obj) {                                                                  \
			if (_obj)                                                                              \
				_obj->decrementWeak();                                                             \
			_obj    = moved._obj;                                                                  \
			_vtable = moved._vtable;                                                               \
		}                                                                                          \
		moved._obj    = nullptr;                                                                   \
		moved._vtable = nullptr;                                                                   \
		return *this;                                                                              \
	}                                                                                              \
	FORCE_INLINE CppAdvance::OptionalStrongRef<__strong_ref> pin() const {                         \
		if (_obj) {                                                                                \
			auto ptr = _obj->tryRetain();                                                          \
			if (ptr) {                                                                             \
				return __strong_ref(ptr, _vtable);                                                 \
			}                                                                                      \
			return nullptr;                                                                        \
		}                                                                                          \
		return nullptr;                                                                            \
	}                                                                                              \
	FORCE_INLINE __strong_ref operator*() const { return *pin(); }                                 \
	##__VA_ARGS__& operator=(decltype(nullptr)) {                                                  \
		if (_obj) {                                                                                \
			_obj->decrementWeak();                                                                 \
		}                                                                                          \
		_obj    = nullptr;                                                                         \
		_vtable = nullptr;                                                                         \
		return *this;                                                                              \
	}                                                                                              \
	FORCE_INLINE bool operator==(##__VA_ARGS__ const& other) const noexcept {                      \
		return _obj == other._obj;                                                                 \
	}                                                                                              \
	FORCE_INLINE bool operator!=(##__VA_ARGS__ const& other) const noexcept {                      \
		return _obj != other._obj;                                                                 \
	}                                                                                              \
	FORCE_INLINE bool operator==(decltype(nullptr)) const noexcept { return _obj == nullptr; }     \
	FORCE_INLINE bool operator!=(decltype(nullptr)) const noexcept { return _obj != nullptr; }     \
	FORCE_INLINE explicit operator bool() const noexcept { return isValid(); }                     \
	template <class __OptionalFunc>                                                                \
	auto andThen(__OptionalFunc&& func) const {                                                    \
		using return_type = std::invoke_result_t<__OptionalFunc, __strong_ref const&>;             \
		auto strong       = pin();                                                                 \
		if constexpr (std::is_void_v<return_type>) {                                               \
			if (strong.isValid())                                                                  \
				std::invoke(std::forward<__OptionalFunc>(func), *strong);                          \
		} else {                                                                                   \
			using wrapped_type = CppAdvance::Nullable<return_type>;                                \
			if (!strong.isValid())                                                                 \
				return wrapped_type(nullptr);                                                      \
			return wrapped_type(std::invoke(std::forward<__OptionalFunc>(func), *strong));         \
		}                                                                                          \
	}                                                                                              \
	template <class __OptionalValueOr>                                                             \
	__strong_ref valueOr(__OptionalValueOr&& func) const {                                         \
		using return_type = std::invoke_result_t<__OptionalValueOr>;                               \
		static_assert(std::is_convertible_v<return_type, __strong_ref>,                            \
		              "Default value must be convertible to left side of the expression");         \
		auto strong = pin();                                                                       \
		if (strong.isValid())                                                                      \
			return *strong;                                                                        \
		return std::invoke(std::forward<__OptionalValueOr>(func));                                 \
	}                                                                                              \
	template <class F>                                                                             \
	__weak_ref& assignIfNull(F&& func) {                                                           \
		using return_type = std::invoke_result_t<F>;                                               \
		static_assert(std::is_assignable_v<__weak_ref, return_type>,                               \
		              "Default value must be convertible to left side of the expression");         \
		if (!isValid())                                                                            \
			*this = std::invoke(std::forward<F>(func));                                            \
		return *this;                                                                              \
	}

namespace Test1::Test2 {
	struct Class2 {
		CppAdvance::i32 x;
		CppAdvance::i32 px;

		Class2(CppAdvance::i32 _x, CppAdvance::i32 _px) : x {_x}, px {_px} {}

		[[clang::annotate("varargs:1")]] void printArgs(
		    CppAdvance::i32 i, std::initializer_list<CppAdvance::Str> str) {
			print(i);
			for (auto s : str) { print(s); }
		}

		std::string_view getPx() [[msvc::lifetimebound]] {
			std::string s = "12345";
			s += "34";
			return s;
		}

	   public:
		inline decltype(auto) __ref() noexcept { return *this; }
		inline decltype(auto) __ref() const noexcept { return *this; }
	};

	// Class2 GClass2;

	class TestClass {
	   public:
		Class2 x;
		float f;

		static Class2 getClass2(int a, int b) { return {a, b}; }

		static std::string_view dangleRef(std::string_view in) noexcept { return in.substr(4, 3); }

		static TestClass makeTestClass(int _x, float _f) noexcept {
			return TestClass {Class2 {_x, 6}, _f};
		}

		Test1::Test2::Class2 getClassExt(CppAdvance::i32 a, CppAdvance::i32 b,
		                                 CppAdvance::i32 c = 3, CppAdvance::i32 d = 8,
		                                 bool b1 = true, bool b2 = false, bool b3 = false) const {
			return {a, b};
		}

	   public:
		inline decltype(auto) __ref() noexcept { return *this; }
		inline decltype(auto) __ref() const noexcept { return *this; }
	};

}  // namespace Test1::Test2

// using namespace Test1::Test2;
struct NullRefT {
	template <class T>
	inline constexpr operator T&() noexcept {
		return reinterpret_cast<T&>(*this);
	}

	template <class T>
	inline constexpr operator const T&() const noexcept {
		return reinterpret_cast<T&>(*this);
	}
};

extern CPPADVANCE_DLLEXPORT NullRefT NullRef;