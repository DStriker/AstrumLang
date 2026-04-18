#pragma once
#if defined __clang__
#define CLANG
#elif defined __GNUC__
#define GCC
#elif defined _MSC_VER
#define MSVC
#endif

#define NODISCARD [[nodiscard]]
#ifdef MSVC
#pragma warning(error : 4172 26815 26816)
#pragma warning(disable : 4514 5045)
#pragma warning(push)
#pragma warning(disable : 4987 4820 4987 4820)
#endif

#if defined(GCC) || defined(CLANG)
#define NORETURN __attribute__((noreturn))
#define STDCALL
#define CPPADVANCE_DLLEXPORT __attribute__((__visibility__("default")))
#define WEAK __attribute__((weak))
#else
#define NORETURN __declspec(noreturn)
#define STDCALL __stdcall
#ifdef LIBASTRUMSTD_DLL_BUILD
#define CPPADVANCE_DLLEXPORT __declspec(dllexport)
#else
#define CPPADVANCE_DLLEXPORT __declspec(dllimport)
#endif
#define WEAK
#endif

#ifndef __has_cpp_attribute
#define LIFETIMEBOUND
#elif __has_cpp_attribute(msvc::lifetimebound)
#define LIFETIMEBOUND [[msvc::lifetimebound]]
#elif __has_cpp_attribute(clang::lifetimebound)
#define LIFETIMEBOUND [[clang::lifetimebound]]
#elif __has_cpp_attribute(lifetimebound)
#define LIFETIMEBOUND [[lifetimebound]]
#else
#define LIFETIMEBOUND
#endif

#define FORCE_INLINE_LAMBDA_CLANG /* empty */
#if defined(_MSC_VER) && !defined(__clang_major__)
#define FORCE_INLINE __forceinline
#define NOINLINE __declspec(noinline)
#define FORCE_INLINE_LAMBDA [[msvc::forceinline]]
#define LAMBDA_NO_DISCARD
#else
#define FORCE_INLINE __attribute__((always_inline))
#define NOINLINE __attribute__((noinline))
#if defined(__clang__)
#define FORCE_INLINE_LAMBDA
#undef FORCE_INLINE_LAMBDA_CLANG
#define FORCE_INLINE_LAMBDA_CLANG __attribute__((always_inline))
#else
#define FORCE_INLINE_LAMBDA __attribute__((always_inline))
#endif

#if defined(__clang_major__)
#if __cplusplus >= 202302L &&                                                                      \
    (__clang_major__ > 13 || (__clang_major__ == 13 && __clang_minor__ >= 2))
#define LAMBDA_NO_DISCARD [[nodiscard]]
#else
#define LAMBDA_NO_DISCARD
#endif
#elif defined(__GNUC__)
#if __GNUC__ >= 9
#define LAMBDA_NO_DISCARD [[nodiscard]]
#else
#define LAMBDA_NO_DISCARD
#endif
#if ((__GNUC__ * 100) + __GNUC_MINOR__) < 1003
#undef FORCE_INLINE_LAMBDA
#define FORCE_INLINE_LAMBDA
#endif
#else
#define LAMBDA_NO_DISCARD
#endif
#endif

#define LIKELY [[likely]]
#define UNLIKELY [[unlikely]]

#if defined(CLANG)
#define ASSUME(...)                                                                                \
	do { __builtin_assume(__VA_ARGS__); } while (0)
#elif defined(MSVC)
#define ASSUME(...)                                                                                \
	do { __assume(__VA_ARGS__); } while (0)
#elif defined(GCC)
#if __GNUC__ >= 13
#define ASSUME(...) __attribute__((__assume__(__VA_ARGS__)))
#endif
#else
#define ASSUME(...)
#endif

#ifndef __has_declspec_attribute
#define __has_declspec_attribute(x) 0
#endif

#if defined(MSVC) || (defined(CLANG) && __has_declspec_attribute(novtable))
#define ADV_NOVTABLE __declspec(novtable)
#else
#define ADV_NOVTABLE
#endif

#if defined(MSVC)
#define ADV_ABSTRACT abstract
#define ADV_VIRTUAL_FIELD [[msvc::no_unique_address]]
#else
#define ADV_ABSTRACT
#define ADV_VIRTUAL_FIELD [[no_unique_address]]
#endif

#if defined(MSVC)
#define ADV_WARNING_DISABLE(IntCode, TextCode)                                                     \
	__pragma(warning(push)) __pragma(warning(disable : IntCode))
#elif defined(GCC) || defined(CLANG)
#define ADV_WARNING_DISABLE(IntCode, TextCode) _Pragma("GCC diagnostic push")\
_Pragma("GCC diagnostic ignored \"" #TextCode "\")
#endif

#if defined(MSVC)
#define ADV_WARNING_POP __pragma(warning(pop))
#elif defined(GCC) || defined(CLANG)
#define ADV_WARNING_POP _Pragma("GCC diagnostic pop")
#endif