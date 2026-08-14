#pragma once
#if defined __clang__
#define CLANG
#define ADV_VERSION_CLANG 1
#define ADV_VERSION_GCC 0
#define ADV_VERSION_MSVC 0
#elif defined __GNUC__
#define GCC
#define ADV_VERSION_CLANG 0
#define ADV_VERSION_GCC 1
#define ADV_VERSION_MSVC 0
#elif defined _MSC_VER
#define MSVC
#define ADV_VERSION_CLANG 0
#define ADV_VERSION_GCC 0
#define ADV_VERSION_MSVC 1
#endif

#ifdef _WIN32
#define ADV_VERSION_WINDOWS 1
#else
#define ADV_VERSION_WINDOWS 0
#endif

#ifdef _WIN64
#define ADV_VERSION_WINDOWS64 1
#else
#define ADV_VERSION_WINDOWS64 0
#endif

#ifdef __APPLE__
#define ADV_VERSION_MACOS 1
#else
#define ADV_VERSION_MACOS 0
#endif

#ifdef __linux__
#define ADV_VERSION_LINUX 1
#else
#define ADV_VERSION_LINUX 0
#endif

#ifdef __FreeBSD__
#define ADV_VERSION_FREEBSD 1
#else
#define ADV_VERSION_FREEBSD 0
#endif

#ifdef __ANDROID__
#define ADV_VERSION_ANDROID 1
#else
#define ADV_VERSION_ANDROID 0
#endif

#ifdef __MINGW32__
#define ADV_VERSION_MINGW32 1
#else
#define ADV_VERSION_MINGW32 0
#endif

#ifdef __MINGW64__
#define ADV_VERSION_MINGW64 1
#else
#define ADV_VERSION_MINGW64 0
#endif

#define NODISCARD [[nodiscard]]
#ifdef MSVC
#pragma warning(error : 4172 26815 26816)
#pragma warning(disable : 4514 5045)
#pragma warning(push)
#pragma warning(disable : 4987 4820 4987 4820 4552 4834)
#endif

#if defined(GCC) || defined(CLANG)
#define NORETURN __attribute__((noreturn))
#define STDCALL
#define ASTRUMSTD_API __attribute__((__visibility__("default")))
#define WEAK __attribute__((weak))
#else
#define NORETURN __declspec(noreturn)
#define STDCALL __stdcall
#ifdef ASTRUMSTD_EXPORTS
#define ASTRUMSTD_API __declspec(dllexport)
#else
#define ASTRUMSTD_API __declspec(dllimport)
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

#ifdef _DEBUG
#define RELEASE_NOEXCEPT
#else
#define RELEASE_NOEXCEPT noexcept
#endif

//////////////// ASTRUM BUILTIN VERSIONS

// Byte order on the current platform: big-endian or little-endian
#if defined(_WIN32) || defined(__BYTE_ORDER__) && (__BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__)
#define ADV_VERSION_BIG_ENDIAN 0
#define ADV_VERSION_LITTLE_ENDIAN 1
#else
#define ADV_VERSION_BIG_ENDIAN 1
#define ADV_VERSION_LITTLE_ENDIAN 0
#endif

// X86 Architecture
#if defined(__x86_64__) || defined(__i386__) || defined(_M_AMD64) || defined(_M_IX86)
#define ADV_VERSION_X86 1
#else
#define ADV_VERSION_X86 0
#endif

// ARM64 Architecture
#if defined(__aarch64__) || defined(_M_ARM64)
#define ADV_VERSION_ARM64 1
#else
#define ADV_VERSION_ARM64 0
#endif

// ARM Architecture
#if defined(__arm__) || defined(_M_ARM) || ADV_VERSION_ARM64
#define ADV_VERSION_ARM 1
#else
#define ADV_VERSION_ARM 0
#endif

// RISC-V Architecture
#ifdef __riscv
#define ADV_VERSION_RISCV 1
#else
#define ADV_VERSION_RISCV 0
#endif

// POWERPC Architecture
#if defined(__powerpc__) || defined(__powerpc64__) || defined(_ARCH_PPC) || defined(_ARCH_PPC64)
#define ADV_VERSION_PPC 1
#else
#define ADV_VERSION_PPC 0
#endif

// WASM Architecture
#ifdef __EMSCRIPTEN__
#define ADV_VERSION_WASM 1
#else
#define ADV_VERSION_WASM 0
#endif

#ifdef __SSE2__
#define ADV_VERSION_SSE2 1
#else
#define ADV_VERSION_SSE2 0
#endif

#ifdef __SSE3__
#define ADV_VERSION_SSE3 1
#else
#define ADV_VERSION_SSE3 0
#endif

#ifdef __SSSE3__
#define ADV_VERSION_SSSE3 1
#else
#define ADV_VERSION_SSSE3 0
#endif

#ifdef __SSE4_1__
#define ADV_VERSION_SSE4_1 1
#else
#define ADV_VERSION_SSE4_1 0
#endif

#ifdef __SSE4_2__
#define ADV_VERSION_SSE4_2 1
#else
#define ADV_VERSION_SSE4_2 0
#endif

#ifdef __AVX__
#define ADV_VERSION_AVX 1
#else
#define ADV_VERSION_AVX 0
#endif

#ifdef __AVX2__
#define ADV_VERSION_AVX2 1
#else
#define ADV_VERSION_AVX2 0
#endif

#ifdef __AVXVNNI__
#define ADV_VERSION_AVXVNNI 1
#else
#define ADV_VERSION_AVXVNNI 0
#endif

#ifdef __FMA__

#if defined(__SSE__)
#ifndef ADV_VERSION_FMA3_SSE
#define ADV_VERSION_FMA3_SSE 1
#endif
#else

#if ADV_VERSION_FMA3_SSE
#error "Manually set ADV_VERSION_FMA3_SSE is incompatible with current compiler flags"
#endif

#define ADV_VERSION_FMA3_SSE 0
#endif
#else

#if ADV_VERSION_FMA3_SSE
#error "Manually set ADV_VERSION_FMA3_SSE is incompatible with current compiler flags"
#endif

#define ADV_VERSION_FMA3_SSE 0
#endif

#ifdef __FMA__

#if defined(__AVX__)
#ifndef ADV_VERSION_FMA3_AVX
#define ADV_VERSION_FMA3_AVX 1
#endif
#else

#if ADV_VERSION_FMA3_AVX
#error "Manually set ADV_VERSION_FMA3_AVX is incompatible with current compiler flags"
#endif

#define ADV_VERSION_FMA3_AVX 0
#endif

#if defined(__AVX2__)
#ifndef ADV_VERSION_FMA3_AVX2
#define ADV_VERSION_FMA3_AVX2 1
#endif
#else

#if ADV_VERSION_FMA3_AVX2
#error "Manually set ADV_VERSION_FMA3_AVX2 is incompatible with current compiler flags"
#endif

#define ADV_VERSION_FMA3_AVX2 0
#endif

#else

#if ADV_VERSION_FMA3_AVX
#error "Manually set ADV_VERSION_FMA3_AVX is incompatible with current compiler flags"
#endif

#if ADV_VERSION_FMA3_AVX2
#error "Manually set ADV_VERSION_FMA3_AVX2 is incompatible with current compiler flags"
#endif

#define ADV_VERSION_FMA3_AVX 0
#define ADV_VERSION_FMA3_AVX2 0

#endif

#ifdef __FMA4__
#define ADV_VERSION_FMA4 1
#else
#define ADV_VERSION_FMA4 0
#endif

#ifdef __AVX512F__
// AVX512 instructions are supported starting with gcc 6
// see https://www.gnu.org/software/gcc/gcc-6/changes.html
// check clang first, newer clang always defines __GNUC__ = 4
#if defined(__clang__) && __clang_major__ >= 6
#define ADV_VERSION_AVX512F 1
#elif defined(__GNUC__) && __GNUC__ < 6
#define ADV_VERSION_AVX512F 0
#else
#define ADV_VERSION_AVX512F 1
#if __GNUC__ == 6
#define ADV_VERSION_AVX512_SHIFT_INTRINSICS_IMM_ONLY 1
#endif
#endif
#else
#define ADV_VERSION_AVX512F 0
#endif

#ifdef __AVX512CD__
// Avoids repeating the GCC workaround over and over
#define ADV_VERSION_AVX512CD ADV_VERSION_AVX512F
#else
#define ADV_VERSION_AVX512CD 0
#endif

#ifdef __AVX512VL__
// Avoids repeating the GCC workaround over and over
#define ADV_VERSION_AVX512VL ADV_VERSION_AVX512CD
#else
#define ADV_VERSION_AVX512VL 0
#endif

#ifdef __AVX512DQ__
// Avoids repeating the GCC workaround over and over
#define ADV_VERSION_AVX512DQ ADV_VERSION_AVX512F
#else
#define ADV_VERSION_AVX512DQ 0
#endif

#ifdef __AVX512BW__
// Avoids repeating the GCC workaround over and over
#define ADV_VERSION_AVX512BW ADV_VERSION_AVX512F
#else
#define ADV_VERSION_AVX512BW 0
#endif

#ifdef __AVX512ER__
// Avoids repeating the GCC workaround over and over
#define ADV_VERSION_AVX512ER ADV_VERSION_AVX512F
#else
#define ADV_VERSION_AVX512ER 0
#endif

#ifdef __AVX512PF__
// Avoids repeating the GCC workaround over and over
#define ADV_VERSION_AVX512PF ADV_VERSION_AVX512F
#else
#define ADV_VERSION_AVX512PF 0
#endif

#ifdef __AVX512IFMA__
// Avoids repeating the GCC workaround over and over
#define ADV_VERSION_AVX512IFMA ADV_VERSION_AVX512F
#else
#define ADV_VERSION_AVX512IFMA 0
#endif

#ifdef __AVX512VBMI__
// Avoids repeating the GCC workaround over and over
#define ADV_VERSION_AVX512VBMI ADV_VERSION_AVX512F
#else
#define ADV_VERSION_AVX512VBMI 0
#endif

#ifdef __AVX512VBMI2__
// Avoids repeating the GCC workaround over and over
#define ADV_VERSION_AVX512VBMI2 ADV_VERSION_AVX512F
#else
#define ADV_VERSION_AVX512VBMI2 0
#endif

#ifdef __AVX512VNNI__

#if ADV_VERSION_AVX512VBMI2
#define ADV_VERSION_AVX512VNNI_AVX512VBMI2 ADV_VERSION_AVX512F
#define ADV_VERSION_AVX512VNNI_AVX512BW ADV_VERSION_AVX512F
#else
#define ADV_VERSION_AVX512VNNI_AVX512VBMI2 0
#define ADV_VERSION_AVX512VNNI_AVX512BW ADV_VERSION_AVX512F
#endif

#else

#define ADV_VERSION_AVX512VNNI_AVX512VBMI2 0
#define ADV_VERSION_AVX512VNNI_AVX512BW 0

#endif

#if (defined(__ARM_NEON) && (__ARM_ARCH >= 7)) || ADV_VERSION_ARM64
#define ADV_VERSION_NEON 1
#else
#define ADV_VERSION_NEON 0
#endif

#if ADV_VERSION_ARM64
#define ADV_VERSION_NEON64 1
#else
#define ADV_VERSION_NEON64 0
#endif

#if defined(__ARM_FEATURE_MATMUL_INT8)
#define ADV_VERSION_I8MM_NEON64 1
#else
#define ADV_VERSION_I8MM_NEON64 0
#endif

#if defined(__ARM_FEATURE_SVE) && defined(__ARM_FEATURE_SVE_BITS) && __ARM_FEATURE_SVE_BITS > 0
#define ADV_VERSION_SVE 1
#define ADV_VERSION_SVE_BITS __ARM_FEATURE_SVE_BITS
#else
#define ADV_VERSION_SVE 0
#define ADV_VERSION_SVE_BITS 0
#endif

#ifdef __ARM_FEATURE_FMA
#define ADV_VERSION_ARM_FMA 1
#else
#define ADV_VERSION_ARM_FMA 0
#endif

#if defined(__riscv_vector) && defined(__riscv_v_fixed_vlen) && __riscv_v_fixed_vlen > 0
#define ADV_VERSION_RVV 1
#define ADV_VERSION_RVV_BITS __riscv_v_fixed_vlen
#else
#define ADV_VERSION_RVV 0
#define ADV_VERSION_RVV_BITS 0
#endif

#ifdef _MSC_VER

#if ADV_VERSION_AVX512

#undef ADV_VERSION_AVX2
#define ADV_VERSION_AVX2 1

#endif

#if ADV_VERSION_AVX2

#undef ADV_VERSION_AVX
#define ADV_VERSION_AVX 1

#undef ADV_VERSION_FMA3_AVX
#define ADV_VERSION_FMA3_AVX 1

#undef ADV_VERSION_FMA3_AVX2
#define ADV_VERSION_FMA3_AVX2 1

#endif

#if ADV_VERSION_AVX

#undef ADV_VERSION_SSE4_2
#define ADV_VERSION_SSE4_2 1

#endif

#if ADV_VERSION_SSE4_2

#undef ADV_VERSION_SSE4_1
#define ADV_VERSION_SSE4_1 1

#endif

#if ADV_VERSION_SSE4_1

#undef ADV_VERSION_SSSE3
#define ADV_VERSION_SSSE3 1

#endif

#if ADV_VERSION_SSSE3

#undef ADV_VERSION_SSE3
#define ADV_VERSION_SSE3 1

#endif

#if ADV_VERSION_SSE3 || ((defined(_M_AMD64) || defined(_M_X64)) && !defined(_M_ARM64EC)) ||        \
    (defined(_M_IX86_FP) && _M_IX86_FP >= 2)
#undef ADV_VERSION_SSE2
#define ADV_VERSION_SSE2 1
#endif

#endif

#if !ADV_VERSION_SSE2 && !ADV_VERSION_SSE3 && !ADV_VERSION_SSSE3 && !ADV_VERSION_SSE4_1 &&         \
    !ADV_VERSION_SSE4_2 && !ADV_VERSION_AVX && !ADV_VERSION_AVX2 && !ADV_VERSION_AVXVNNI &&        \
    !ADV_VERSION_FMA3_SSE && !ADV_VERSION_FMA4 && !ADV_VERSION_FMA3_AVX &&                         \
    !ADV_VERSION_FMA3_AVX2 && !ADV_VERSION_AVX512F && !ADV_VERSION_AVX512CD &&                     \
    !ADV_VERSION_AVX512VL && !ADV_VERSION_AVX512DQ && !ADV_VERSION_AVX512BW &&                     \
    !ADV_VERSION_AVX512ER && !ADV_VERSION_AVX512PF && !ADV_VERSION_AVX512IFMA &&                   \
    !ADV_VERSION_AVX512VBMI && !ADV_VERSION_AVX512VBMI2 && !ADV_VERSION_NEON &&                    \
    !ADV_VERSION_NEON64 && !ADV_VERSION_SVE && !ADV_VERSION_RVV && !ADV_VERSION_WASM
#define ADV_VERSION_NO_SIMD
#endif

#if ADV_VERSION_SSE2
#include <emmintrin.h>
#include <xmmintrin.h>
#endif

#if ADV_VERSION_SSE3
#include <pmmintrin.h>
#endif

#if ADV_VERSION_SSSE3
#include <tmmintrin.h>
#endif

#if ADV_VERSION_SSE4_1
#include <smmintrin.h>
#endif

#if ADV_VERSION_SSE4_2
#include <nmmintrin.h>
#endif

#if ADV_VERSION_AVX
#include <immintrin.h>
#endif

#if ADV_VERSION_FMA4
#include <ammintrin.h>
#include <x86intrin.h>
#endif

#if ADV_VERSION_NEON
#if defined(_MSC_VER) && !defined(__clang__) && ADV_VERSION_NEON
#include <arm64_neon.h>
#else
#include <arm_neon.h>
#endif
#endif

#if ADV_VERSION_SVE
#include <arm_sve.h>
#endif

// SVML intrinsics for Windows (missing for clang-cl)
#if ADV_VERSION_MSVC && ADV_VERSION_CLANG
#include "SvmlIntrin.h"
#endif
