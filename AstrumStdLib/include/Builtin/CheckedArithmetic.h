#pragma once

#include <cmath>
#include <cstddef>
#include <cstdint>
#include <limits>
#include <type_traits>

#include "CompilerUtils.h"
#include "Exceptions.h"

#ifdef MSVC
#if defined _M_AMD64 && !defined _M_ARM64EC
#include "intrin.h"
#define USE_INTRINSICS 1
#else
#define USE_INTRINSICS 0
#endif
#else
#if defined(GCC) || defined(CLANG)
#define USE_INTRINSICS 1
#if defined(__x86_64__) || defined(__i386__) || defined(_M_X64) || defined(_M_IX86)
#include "immintrin.h"
#endif
#else
#define USE_INTRINSICS 0
#endif
#endif

#if USE_INTRINSICS && defined(MSVC)
#define CONSTEXPR_MULTIPLY
#else
#define CONSTEXPR_MULTIPLY constexpr
#endif

// assert, maybe change to custom assert function
#include <assert.h>

#include <stdexcept>
#define ASSERT(x) assert(x)

#ifdef MSVC
#pragma warning(pop)
#endif

static_assert(-1 == static_cast<int>(0xffffffff), "Two's complement signed numbers are required");

namespace Builtin {
	enum SafeIntErrorCode { SafeInt_NoError = 0, SafeInt_Overflow, SafeInt_DivisionByZero };
	enum SaturatingStatus { Saturating_NoOverflow = 0, Saturating_Overflow, Saturating_Underflow };

	namespace __details {
		template <typename T>
		class NumericType;

		template <>
		class NumericType<bool> {
		   public:
			enum { isBool = true, isInt = false, isEnum = false };
		};
		template <typename T>
		class NumericType {
		   public:
			enum {
				isBool = false,
				isInt  = std::is_integral<T>::value || std::is_enum<T>::value,
				isEnum = std::is_enum<T>::value
			};
		};

		template <class T>
		class IntTraits {
		   public:
			static_assert(NumericType<T>::isInt, "Integer type required");

			enum {
				is64Bit   = (sizeof(T) == 8),
				is32Bit   = (sizeof(T) == 4),
				is16Bit   = (sizeof(T) == 2),
				is8Bit    = (sizeof(T) == 1),
				isLT32Bit = (sizeof(T) < 4),
				isLT64Bit = (sizeof(T) < 8),
				isInt8    = (sizeof(T) == 1 && std::numeric_limits<T>::is_signed),
				isUint8   = (sizeof(T) == 1 && !std::numeric_limits<T>::is_signed),
				isInt16   = (sizeof(T) == 2 && std::numeric_limits<T>::is_signed),
				isUint16  = (sizeof(T) == 2 && !std::numeric_limits<T>::is_signed),
				isInt32   = (sizeof(T) == 4 && std::numeric_limits<T>::is_signed),
				isUint32  = (sizeof(T) == 4 && !std::numeric_limits<T>::is_signed),
				isInt64   = (sizeof(T) == 8 && std::numeric_limits<T>::is_signed),
				isUint64  = (sizeof(T) == 8 && !std::numeric_limits<T>::is_signed),
				bitCount  = (sizeof(T) * 8),
				isBool    = ((T) 2 == (T) 1)
			};
		};

		template <typename T, typename U>
		class TypeCompare {
		   public:
			enum {
				isBothSigned =
				    (std::numeric_limits<T>::is_signed && std::numeric_limits<U>::is_signed),
				isBothUnsigned =
				    (!std::numeric_limits<T>::is_signed && !std::numeric_limits<U>::is_signed),
				isLikeSigned  = ((bool) (std::numeric_limits<T>::is_signed) ==
                                (bool) (std::numeric_limits<U>::is_signed)),
				isCastOK      = ((isLikeSigned && sizeof(T) >= sizeof(U)) ||
                            (std::numeric_limits<T>::is_signed && sizeof(T) > sizeof(U))),
				isBothLT32Bit = (IntTraits<T>::isLT32Bit && IntTraits<U>::isLT32Bit),
				isBothLT64Bit = (IntTraits<T>::isLT64Bit && IntTraits<U>::isLT64Bit)
			};
		};
	}  // namespace __details

	template <class T, class U>
	class IntRegion {
	   public:
		enum {
			// unsigned-unsigned zone
			IntZone_UintLT32_UintLT32 = __details::TypeCompare<T, U>::isBothUnsigned &&
			                            __details::TypeCompare<T, U>::isBothLT32Bit,
			IntZone_Uint32_UintLT64 = __details::TypeCompare<T, U>::isBothUnsigned &&
			                          __details::IntTraits<T>::is32Bit &&
			                          __details::IntTraits<U>::isLT64Bit,
			IntZone_UintLT32_Uint32 = __details::TypeCompare<T, U>::isBothUnsigned &&
			                          __details::IntTraits<T>::isLT32Bit &&
			                          __details::IntTraits<U>::is32Bit,
			IntZone_Uint64_Uint =
			    __details::TypeCompare<T, U>::isBothUnsigned && __details::IntTraits<T>::is64Bit,
			IntZone_UintLT64_Uint64 = __details::TypeCompare<T, U>::isBothUnsigned &&
			                          __details::IntTraits<T>::isLT64Bit &&
			                          __details::IntTraits<U>::is64Bit,
			// unsigned-signed
			IntZone_UintLT32_IntLT32 = !std::numeric_limits<T>::is_signed &&
			                           std::numeric_limits<U>::is_signed &&
			                           __details::TypeCompare<T, U>::isBothLT32Bit,
			IntZone_Uint32_IntLT64 = __details::IntTraits<T>::isUint32 &&
			                         std::numeric_limits<U>::is_signed &&
			                         __details::IntTraits<U>::isLT64Bit,
			IntZone_UintLT32_Int32 = !std::numeric_limits<T>::is_signed &&
			                         __details::IntTraits<T>::isLT32Bit &&
			                         __details::IntTraits<U>::isInt32,
			IntZone_Uint64_Int = __details::IntTraits<T>::isUint64 &&
			                     std::numeric_limits<U>::is_signed &&
			                     __details::IntTraits<U>::isLT64Bit,
			IntZone_UintLT64_Int64 = !std::numeric_limits<T>::is_signed &&
			                         __details::IntTraits<T>::isLT64Bit &&
			                         __details::IntTraits<U>::isInt64,
			IntZone_Uint64_Int64 =
			    __details::IntTraits<T>::isUint64 && __details::IntTraits<U>::isInt64,
			// signed-signed
			IntZone_IntLT32_IntLT32 = __details::TypeCompare<T, U>::isBothSigned &&
			                          __details::TypeCompare<T, U>::isBothLT32Bit,
			IntZone_Int32_IntLT64 = __details::TypeCompare<T, U>::isBothSigned &&
			                        __details::IntTraits<T>::is32Bit &&
			                        __details::IntTraits<U>::isLT64Bit,
			IntZone_IntLT32_Int32 = __details::TypeCompare<T, U>::isBothSigned &&
			                        __details::IntTraits<T>::isLT32Bit &&
			                        __details::IntTraits<U>::is32Bit,
			IntZone_Int64_Int64 = __details::TypeCompare<T, U>::isBothSigned &&
			                      __details::IntTraits<T>::isInt64 &&
			                      __details::IntTraits<U>::isInt64,
			IntZone_Int64_Int = __details::TypeCompare<T, U>::isBothSigned &&
			                    __details::IntTraits<T>::is64Bit &&
			                    __details::IntTraits<U>::isLT64Bit,
			IntZone_IntLT64_Int64 = __details::TypeCompare<T, U>::isBothSigned &&
			                        __details::IntTraits<T>::isLT64Bit &&
			                        __details::IntTraits<U>::is64Bit,
			// signed-unsigned
			IntZone_IntLT32_UintLT32 = std::numeric_limits<T>::is_signed &&
			                           !std::numeric_limits<U>::is_signed &&
			                           __details::TypeCompare<T, U>::isBothLT32Bit,
			IntZone_Int32_UintLT32 = __details::IntTraits<T>::isInt32 &&
			                         !std::numeric_limits<U>::is_signed &&
			                         __details::IntTraits<U>::isLT32Bit,
			IntZone_IntLT64_Uint32 = std::numeric_limits<T>::is_signed &&
			                         __details::IntTraits<T>::isLT64Bit &&
			                         __details::IntTraits<U>::isUint32,
			IntZone_Int64_UintLT64 = __details::IntTraits<T>::isInt64 &&
			                         !std::numeric_limits<U>::is_signed &&
			                         __details::IntTraits<U>::isLT64Bit,
			IntZone_Int_Uint64 = std::numeric_limits<T>::is_signed &&
			                     __details::IntTraits<U>::isUint64 &&
			                     __details::IntTraits<T>::isLT64Bit,
			IntZone_Int64_Uint64 =
			    __details::IntTraits<T>::isInt64 && __details::IntTraits<U>::isUint64
		};
	};

	enum AbsMethod { AbsMethodInt, AbsMethodLong, AbsMethodNoop };

	template <class T>
	class AbsMethodHelper {
	   public:
		enum {
			method = __details::IntTraits<T>::isLT64Bit && std::numeric_limits<T>::is_signed
			             ? AbsMethodInt
			         : __details::IntTraits<T>::isInt64 ? AbsMethodLong
			                                            : AbsMethodNoop
		};
	};

	template <class T, int>
	class AbsValueHelper;

	template <class T>
	class AbsValueHelper<T, AbsMethodInt> {
	   public:
		NODISCARD constexpr static uint32_t Abs(T t) noexcept {
			ASSERT(t < 0);
			return ~(uint32_t) t + 1;
		}
	};

	template <class T>
	class AbsValueHelper<T, AbsMethodLong> {
	   public:
		NODISCARD constexpr static uint64_t Abs(T t) noexcept {
			ASSERT(t < 0);
			return ~(uint64_t) t + 1;
		}
	};

	template <class T>
	class AbsValueHelper<T, AbsMethodNoop> {
	   public:
		NODISCARD constexpr static T Abs(T t) noexcept {
			ASSERT(false);
			return t;
		}
	};

	template <class T>
	class SignedNegation;

	template <>
	class SignedNegation<int32_t> {
	   public:
		constexpr static int32_t Value(uint64_t in) noexcept {
			return (int32_t) (~(uint32_t) in + 1);
		}

		constexpr static int32_t Value(uint32_t in) noexcept { return (int32_t) (~in + 1); }
	};

	template <>
	class SignedNegation<int64_t> {
	   public:
		constexpr static int64_t Value(uint64_t in) noexcept { return (int64_t) (~in + 1); }
	};

	template <class T, bool>
	class NegationHelper;

	template <class T>
	class NegationHelper<T, true> {
	   public:
		NODISCARD constexpr static T NegativeThrow(T t) {
			if (t != std::numeric_limits<T>::min()) {
				return -t;
			}
			throw IntegerOverflowException();
		}

		NODISCARD constexpr static bool Negative(T t, T& out) {
			out = -t;
			if (t != std::numeric_limits<T>::min()) {
				return true;
			}
			return false;
		}
	};

	template <class T>
	class NegationHelper<T, false> {
	   public:
		NODISCARD constexpr static T NegativeThrow(T t) {
			return (T) SignedNegation<int64_t>::Value(t);
		}

		NODISCARD constexpr static bool Negative(T t, T& out) {
			out = -t;
			return false;
		}
	};

	enum CastMethod {
		CastOK = 0,
		CastCheckLTZero,
		CastCheckGTMax,
		CastCheckSafeIntMinMaxUnsigned,
		CastCheckSafeIntMinMaxSigned,
		CastToFloat,
		CastFromFloat,
		CastToBool,
		CastFromBool,
		CastFromEnum
	};

	template <class To, class From>
	class CastMethodHelper {
	   public:
		enum {
			method =
			    (__details::NumericType<From>::isEnum) ? CastFromEnum
			    : (__details::IntTraits<From>::isBool && !__details::IntTraits<To>::isBool)
			        ? CastFromBool
			    :

			    (!__details::IntTraits<From>::isBool && __details::IntTraits<To>::isBool)
			        ? CastToBool
			    :

			    (__details::TypeCompare<To, From>::isCastOK) ? CastOK
			    :

			    ((std::numeric_limits<To>::is_signed && !std::numeric_limits<From>::is_signed &&
			      sizeof(From) >= sizeof(To)) ||
			     (__details::TypeCompare<To, From>::isBothUnsigned && sizeof(From) > sizeof(To)))
			        ? CastCheckGTMax
			    :

			    (!std::numeric_limits<To>::is_signed && std::numeric_limits<From>::is_signed &&
			     sizeof(To) >= sizeof(From))
			        ? CastCheckLTZero
			    :

			    (!std::numeric_limits<To>::is_signed) ? CastCheckSafeIntMinMaxUnsigned
			                                          : CastCheckSafeIntMinMaxSigned
		};
	};

	template <class From>
	class CastMethodHelper<float, From> {
	   public:
		enum { method = CastOK };
	};

	template <class From>
	class CastMethodHelper<double, From> {
	   public:
		enum { method = CastOK };
	};

	template <class From>
	class CastMethodHelper<long double, From> {
	   public:
		enum { method = CastOK };
	};

	template <class To>
	class CastMethodHelper<To, float> {
	   public:
		enum { method = CastFromFloat };
	};

	template <class To>
	class CastMethodHelper<To, double> {
	   public:
		enum { method = CastFromFloat };
	};

	template <class To>
	class CastMethodHelper<To, long double> {
	   public:
		enum { method = CastFromFloat };
	};

	template <class T, class U, int>
	class SafeCastHelper;

	template <class T, class U>
	class SafeCastHelper<T, U, CastOK> {
	   public:
		NODISCARD constexpr static bool Cast(U u, T& t) noexcept {
			t = (T) u;
			return true;
		}

		constexpr static void CastThrow(U u, T& t) { t = (T) u; }
	};

	template <class T, bool>
	class FloatCastHelper;

	template <class T>
	class FloatCastHelper<T, true> {
	   public:
		NODISCARD constexpr static bool Test(double d) {
			const uint64_t signifDouble      = 0x1fffffffffffff;
			const uint64_t maxUnsignedDouble = signifDouble << 11;
			if (d < 0 || d > static_cast<double>(maxUnsignedDouble)) {
				return false;
			}

			if (static_cast<uint64_t>(d) > std::numeric_limits<T>::max()) {
				return false;
			}

			return true;
		}
	};

	template <class T>
	class FloatCastHelper<T, false> {
	   public:
		NODISCARD constexpr static bool Test(double d) {
			const uint64_t signifDouble      = 0x1fffffffffffff;
			const uint64_t maxUnsignedDouble = signifDouble << 10;
			const uint64_t minUnsignedDouble = static_cast<int64_t>(0x8000000000000000);
			if (d < static_cast<double>(minUnsignedDouble) ||
			    d > static_cast<double>(maxUnsignedDouble)) {
				return false;
			}

			int64_t test = static_cast<int64_t>(d);
			if ((int64_t) test < (int64_t) std::numeric_limits<T>::min() ||
			    (int64_t) test > (int64_t) std::numeric_limits<T>::max()) {
				return false;
			}

			return true;
		}
	};

	template <class T, class U>
	class SafeCastHelper<T, U, CastFromFloat> {
	   public:
		NODISCARD static bool CheckFloatingCast(double d) {
			bool valid = false;
			switch (std::fpclassify(d)) {
				case FP_NORMAL:
				case FP_SUBNORMAL:
				case FP_ZERO:
					valid = true;
					break;
				case FP_NAN:
				case FP_INFINITE:
				default:
					valid = false;
					break;
			}

			if (!valid)
				return false;
			return FloatCastHelper<T, !std::numeric_limits<T>::is_signed>::Test(d);
		}

		static bool Cast(U u, T& t) noexcept {
			if (CheckFloatingCast(u)) {
				t = (T) u;
				return true;
			}
			return false;
		}

		static void CastThrow(U u, T& t) {
			if (CheckFloatingCast(u)) {
				t = (T) u;
				return;
			}
			throw IntegerOverflowException();
		}
	};

	template <class T, class U>
	class SafeCastHelper<T, U, CastFromEnum> {
	   public:
		NODISCARD constexpr static bool Cast(U u, T& t) noexcept {
			return SafeCastHelper<T, int, CastMethodHelper<T, int>::method>::Cast(
			    static_cast<int>(u), t);
		}

		constexpr static void CastThrow(U u, T& t) {
			SafeCastHelper<T, int, CastMethodHelper<T, int>::method>::CastThrow(static_cast<int>(u),
			                                                                    t);
		}
	};

	template <class T>
	class SafeCastHelper<T, bool, CastFromBool> {
	   public:
		NODISCARD constexpr static bool Cast(bool b, T& t) noexcept {
			t = (T) (b ? 1 : 0);
			return true;
		}

		constexpr static void CastThrow(bool b, T& t) { t = (T) (b ? 1 : 0); }
	};

	template <class T>
	class SafeCastHelper<bool, T, CastToBool> {
	   public:
		NODISCARD constexpr static bool Cast(T t, bool& b) noexcept {
			b = !!t;
			return true;
		}
	};

	template <class T, class U>
	class SafeCastHelper<T, U, CastCheckLTZero> {
	   public:
		NODISCARD constexpr static bool Cast(U u, T& t) noexcept {
			if (u < 0)
				return false;

			t = (T) u;
			return true;
		}

		constexpr static void CastThrow(U u, T& t) {
			if (u < 0)
				throw IntegerOverflowException();
			t = (T) u;
		}
	};

	template <class T, class U>
	class SafeCastHelper<T, U, CastCheckGTMax> {
	   public:
		NODISCARD constexpr static bool Cast(U u, T& t) noexcept {
			if (u > (U) std::numeric_limits<T>::max())
				return false;

			t = (T) u;
			return true;
		}

		constexpr static void CastThrow(U u, T& t) {
			if (u > (U) std::numeric_limits<T>::max())
				throw IntegerOverflowException();
			t = (T) u;
		}
	};

	template <class T, class U>
	class SafeCastHelper<T, U, CastCheckSafeIntMinMaxUnsigned> {
	   public:
		NODISCARD constexpr static bool Cast(U u, T& t) noexcept {
			if (u > std::numeric_limits<T>::max() || u < 0)
				return false;

			t = (T) u;
			return true;
		}

		constexpr static void CastThrow(U u, T& t) {
			if (u > std::numeric_limits<T>::max() || u < 0)
				throw IntegerOverflowException();
			t = (T) u;
		}
	};

	template <class T, class U>
	class SafeCastHelper<T, U, CastCheckSafeIntMinMaxSigned> {
	   public:
		NODISCARD constexpr static bool Cast(U u, T& t) noexcept {
			if (u > std::numeric_limits<T>::max() || u < std::numeric_limits<T>::min())
				return false;

			t = (T) u;
			return true;
		}

		constexpr static void CastThrow(U u, T& t) {
			if (u > std::numeric_limits<T>::max() || u < std::numeric_limits<T>::min())
				throw IntegerOverflowException();
			t = (T) u;
		}
	};

	enum ComparisonMethod {
		ComparisonMethod_Ok = 0,
		ComparisonMethod_CastInt,
		ComparisonMethod_CastInt64,
		ComparisonMethod_UnsignedT,
		ComparisonMethod_UnsignedU
	};

	template <class T, class U>
	class ValidComparison {
	   public:
		enum {
			method = ((__details::TypeCompare<T, U>::isLikeSigned) ? ComparisonMethod_Ok
			          : ((std::numeric_limits<T>::is_signed && sizeof(T) < 8 && sizeof(U) < 4) ||
			             (std::numeric_limits<U>::is_signed && sizeof(T) < 4 && sizeof(U) < 8))
			              ? ComparisonMethod_CastInt
			          : ((std::numeric_limits<T>::is_signed && sizeof(U) < 8) ||
			             (std::numeric_limits<U>::is_signed && sizeof(T) < 8))
			              ? ComparisonMethod_CastInt64
			          : (!std::numeric_limits<T>::is_signed) ? ComparisonMethod_UnsignedT
			                                                 : ComparisonMethod_UnsignedU)
		};
	};

	template <class T, class U, int state>
	class EqualityTest;

	template <class T, class U>
	class EqualityTest<T, U, ComparisonMethod_Ok> {
	   public:
		NODISCARD constexpr static bool IsEquals(const T t, const U u) noexcept { return (t == u); }
	};

	template <class T, class U>
	class EqualityTest<T, U, ComparisonMethod_CastInt> {
	   public:
		NODISCARD constexpr static bool IsEquals(const T t, const U u) noexcept {
			return ((int) t == (int) u);
		}
	};

	template <class T, class U>
	class EqualityTest<T, U, ComparisonMethod_CastInt64> {
	   public:
		NODISCARD constexpr static bool IsEquals(const T t, const U u) noexcept {
			return ((int64_t) t == (int64_t) u);
		}
	};

	template <class T, class U>
	class EqualityTest<T, U, ComparisonMethod_UnsignedT> {
	   public:
		NODISCARD constexpr static bool IsEquals(const T t, const U u) noexcept {
			if (u < 0)
				return false;
			return (t == (T) u);
		}
	};

	template <class T, class U>
	class EqualityTest<T, U, ComparisonMethod_UnsignedU> {
	   public:
		NODISCARD constexpr static bool IsEquals(const T t, const U u) noexcept {
			if (t < 0)
				return false;
			return ((U) t == u);
		}
	};

	template <class T, class U, int state>
	class GreaterThanTest;

	template <class T, class U>
	class GreaterThanTest<T, U, ComparisonMethod_Ok> {
	   public:
		NODISCARD constexpr static bool GreaterThan(const T t, const U u) noexcept {
			return (t > u);
		}
	};

	template <class T, class U>
	class GreaterThanTest<T, U, ComparisonMethod_CastInt> {
	   public:
		NODISCARD constexpr static bool GreaterThan(const T t, const U u) noexcept {
			return ((int) t > (int) u);
		}
	};

	template <class T, class U>
	class GreaterThanTest<T, U, ComparisonMethod_CastInt64> {
	   public:
		NODISCARD constexpr static bool GreaterThan(const T t, const U u) noexcept {
			return ((int64_t) t > (int64_t) u);
		}
	};

	template <class T, class U>
	class GreaterThanTest<T, U, ComparisonMethod_UnsignedT> {
	   public:
		NODISCARD constexpr static bool GreaterThan(const T t, const U u) noexcept {
			if (u < 0)
				return true;
			return (t > (T) u);
		}
	};

	template <class T, class U>
	class GreaterThanTest<T, U, ComparisonMethod_UnsignedU> {
	   public:
		NODISCARD constexpr static bool GreaterThan(const T t, const U u) noexcept {
			if (t < 0)
				return false;
			return ((U) t > u);
		}
	};

	template <class T, class U, int method>
	class ModulusHelper;

	template <class U, bool>
	class ModCornerCase;

	template <class U>
	class ModCornerCase<U, true> {
	   public:
		NODISCARD constexpr static bool isUndefined(U u) { return (u == -1); }
	};

	template <class U>
	class ModCornerCase<U, false> {
	   public:
		NODISCARD constexpr static bool isUndefined(U) { return false; }
	};

	template <class T, class U>
	class ModulusHelper<T, U, ComparisonMethod_Ok> {
	   public:
		constexpr static SafeIntErrorCode Modulus(const T& t, const U& u,
		                                                    T& result) noexcept {
			if (u == 0)
				return SafeInt_DivisionByZero;

			if (ModCornerCase<U, std::numeric_limits<U>::is_signed>::isUndefined(u)) {
				result = 0;
				return SafeInt_NoError;
			}

			result = (T) (t % u);
			return SafeInt_NoError;
		}

		constexpr static void ModulusThrow(const T& t, const U& u, T& result) {
			if (u == 0)
				throw DivisionByZeroException();

			if (ModCornerCase<U, std::numeric_limits<U>::is_signed>::isUndefined(u)) {
				result = 0;
				return;
			}

			result = (T) (t % u);
		}
	};

	template <class T, class U>
	class ModulusHelper<T, U, ComparisonMethod_CastInt> {
	   public:
		constexpr static SafeIntErrorCode Modulus(const T& t, const U& u,
		                                                    T& result) noexcept {
			if (u == 0)
				return SafeInt_DivisionByZero;

			if (ModCornerCase<U, std::numeric_limits<U>::is_signed>::isUndefined(u)) {
				result = 0;
				return SafeInt_NoError;
			}

			result = (T) (t % u);
			return SafeInt_NoError;
		}

		constexpr static void ModulusThrow(const T& t, const U& u, T& result) {
			if (u == 0)
				throw DivisionByZeroException();

			if (ModCornerCase<U, std::numeric_limits<U>::is_signed>::isUndefined(u)) {
				result = 0;
				return;
			}

			result = (T) (t % u);
		}
	};

	template <class T, class U>
	class ModulusHelper<T, U, ComparisonMethod_CastInt64> {
	   public:
		constexpr static SafeIntErrorCode Modulus(const T& t, const U& u,
		                                                    T& result) noexcept {
			if (u == 0)
				return SafeInt_DivisionByZero;

			if (ModCornerCase<U, std::numeric_limits<U>::is_signed>::isUndefined(u)) {
				result = 0;
				return SafeInt_NoError;
			}

			result = (T) ((int64_t) t % (int64_t) u);
			return SafeInt_NoError;
		}

		constexpr static void ModulusThrow(const T& t, const U& u, T& result) {
			if (u == 0)
				throw DivisionByZeroException();

			if (ModCornerCase<U, std::numeric_limits<U>::is_signed>::isUndefined(u)) {
				result = 0;
				return;
			}

			result = (T) ((int64_t) t % (int64_t) u);
		}
	};

	template <class T, class U>
	class ModulusHelper<T, U, ComparisonMethod_UnsignedT> {
	   public:
		constexpr static SafeIntErrorCode Modulus(const T& t, const U& u,
		                                                    T& result) noexcept {
			if (u == 0)
				return SafeInt_DivisionByZero;

			if (u < 0) {
				result = (T) (t % AbsValueHelper<U, AbsMethodHelper<U>::method>::Abs(u));
			} else {
				result = (T) (t % u);
			}

			return SafeInt_NoError;
		}

		constexpr static void ModulusThrow(const T& t, const U& u, T& result) {
			if (u == 0)
				throw DivisionByZeroException();

			if (u < 0) {
				result = (T) (t % AbsValueHelper<U, AbsMethodHelper<U>::method>::Abs(u));
			} else {
				result = (T) (t % u);
			}
		}
	};

	template <class T, class U>
	class ModulusHelper<T, U, ComparisonMethod_UnsignedU> {
	   public:
		constexpr static SafeIntErrorCode Modulus(const T& t, const U& u,
		                                                    T& result) noexcept {
			if (u == 0)
				return SafeInt_DivisionByZero;

			if (t < 0) {
				result = (T) (~(AbsValueHelper<T, AbsMethodHelper<T>::method>::Abs(t) % u) + 1);
			} else {
				result = (T) ((T) t % u);
			}

			return SafeInt_NoError;
		}

		constexpr static void ModulusThrow(const T& t, const U& u, T& result) {
			if (u == 0)
				throw DivisionByZeroException();

			if (t < 0) {
				result = (T) (~(AbsValueHelper<T, AbsMethodHelper<T>::method>::Abs(t) % u) + 1);
			} else {
				result = (T) ((T) t % u);
			}
		}
	};

	enum MultiplicationState {
		MultiplicationState_CastInt = 0,   // One or both signed, smaller than 32-bit
		MultiplicationState_CastInt64,     // One or both signed, smaller than 64-bit
		MultiplicationState_CastUint,      // Both are unsigned, smaller than 32-bit
		MultiplicationState_CastUint64,    // Both are unsigned, both 32-bit or smaller
		MultiplicationState_Uint64Uint,    // Both are unsigned, lhs 64-bit, rhs 32-bit or smaller
		MultiplicationState_Uint64Uint64,  // Both are unsigned int64
		MultiplicationState_Uint64Int,     // lhs is unsigned int64, rhs int32
		MultiplicationState_Uint64Int64,   // lhs is unsigned int64, rhs signed int64
		MultiplicationState_UintUint64,    // Both are unsigned, lhs 32-bit or smaller, rhs 64-bit
		MultiplicationState_UintInt64,     // lhs unsigned 32-bit or less, rhs int64
		MultiplicationState_Int64Uint,     // lhs int64, rhs unsigned int32
		MultiplicationState_Int64Int64,    // lhs int64, rhs int64
		MultiplicationState_Int64Int,      // lhs int64, rhs int32
		MultiplicationState_IntUint64,     // lhs int, rhs unsigned int64
		MultiplicationState_IntInt64,      // lhs int, rhs int64
		MultiplicationState_Int64Uint64,   // lhs int64, rhs uint64
		MultiplicationState_Error
	};

	template <typename T, typename U>
	class MultiplicationMethod {
	   public:
		enum {
			// unsigned-unsigned
			method = (IntRegion<T, U>::IntZone_UintLT32_UintLT32 ? MultiplicationState_CastUint
			          : (IntRegion<T, U>::IntZone_Uint32_UintLT64 ||
			             IntRegion<T, U>::IntZone_UintLT32_Uint32)
			              ? MultiplicationState_CastUint64
			          : __details::TypeCompare<T, U>::isBothUnsigned &&
			                  __details::IntTraits<T>::isUint64 && __details::IntTraits<U>::isUint64
			              ? MultiplicationState_Uint64Uint64
			          : (IntRegion<T, U>::IntZone_Uint64_Uint)     ? MultiplicationState_Uint64Uint
			          : (IntRegion<T, U>::IntZone_UintLT64_Uint64) ? MultiplicationState_UintUint64
			                                                       :
			                                                       // unsigned-signed
			              (IntRegion<T, U>::IntZone_UintLT32_IntLT32) ? MultiplicationState_CastInt
			          : (IntRegion<T, U>::IntZone_Uint32_IntLT64 ||
			             IntRegion<T, U>::IntZone_UintLT32_Int32)
			              ? MultiplicationState_CastInt64
			          : (IntRegion<T, U>::IntZone_Uint64_Int)     ? MultiplicationState_Uint64Int
			          : (IntRegion<T, U>::IntZone_UintLT64_Int64) ? MultiplicationState_UintInt64
			          : (IntRegion<T, U>::IntZone_Uint64_Int64)   ? MultiplicationState_Uint64Int64
			                                                      :
			                                                    // signed-signed
			              (IntRegion<T, U>::IntZone_IntLT32_IntLT32) ? MultiplicationState_CastInt
			          : (IntRegion<T, U>::IntZone_Int32_IntLT64 ||
			             IntRegion<T, U>::IntZone_IntLT32_Int32)
			              ? MultiplicationState_CastInt64
			          : (IntRegion<T, U>::IntZone_Int64_Int64)   ? MultiplicationState_Int64Int64
			          : (IntRegion<T, U>::IntZone_Int64_Int)     ? MultiplicationState_Int64Int
			          : (IntRegion<T, U>::IntZone_IntLT64_Int64) ? MultiplicationState_IntInt64
			                                                     :
			                                                     // signed-unsigned
			              (IntRegion<T, U>::IntZone_IntLT32_UintLT32) ? MultiplicationState_CastInt
			          : (IntRegion<T, U>::IntZone_Int32_UintLT32 ||
			             IntRegion<T, U>::IntZone_IntLT64_Uint32)
			              ? MultiplicationState_CastInt64
			          : (IntRegion<T, U>::IntZone_Int64_UintLT64) ? MultiplicationState_Int64Uint
			          : (IntRegion<T, U>::IntZone_Int_Uint64)
			              ? MultiplicationState_IntUint64
			              : (IntRegion<T, U>::IntZone_Int64_Uint64 ? MultiplicationState_Int64Uint64
			                                                       : MultiplicationState_Error))
		};
	};

	template <class T, class U, int state>
	class MultiplicationHelper;

	template <class T, class U>
	class MultiplicationHelper<T, U, MultiplicationState_CastInt> {
	   public:
		NODISCARD constexpr static bool Multiply(const T& t, const U& u, T& ret) noexcept {
			int tmp = t * u;
			ret     = (T) tmp;

			if (tmp > std::numeric_limits<T>::max() || tmp < std::numeric_limits<T>::min())
				return false;
			return true;
		}

		NODISCARD constexpr static SaturatingStatus MultiplySat(const T& t, const U& u,
		                                                        T& ret) noexcept {
			int tmp = t * u;

			if (tmp > std::numeric_limits<T>::max())
				return Saturating_Overflow;
			if (tmp < std::numeric_limits<T>::min())
				return Saturating_Underflow;
			ret = (T) tmp;
			return Saturating_NoOverflow;
		}

		constexpr static void MultiplyThrow(const T& t, const U& u, T& ret) {
			int tmp = t * u;

			if (tmp > std::numeric_limits<T>::max() || tmp < std::numeric_limits<T>::min())
				throw IntegerOverflowException();
			ret = (T) tmp;
		}
	};

	template <class T, class U>
	class MultiplicationHelper<T, U, MultiplicationState_CastUint> {
	   public:
		NODISCARD constexpr static bool Multiply(const T& t, const U& u, T& ret) noexcept {
			unsigned tmp = (unsigned) t * (unsigned) u;
			ret          = (T) tmp;

			if (tmp > std::numeric_limits<T>::max())
				return false;
			return true;
		}

		NODISCARD constexpr static SaturatingStatus MultiplySat(const T& t, const U& u,
		                                                        T& ret) noexcept {
			unsigned tmp = (unsigned) t * (unsigned) u;

			if (tmp > std::numeric_limits<T>::max())
				return Saturating_Overflow;
			ret = (T) tmp;
			return Saturating_NoOverflow;
		}

		constexpr static void MultiplyThrow(const T& t, const U& u, T& ret) {
			unsigned tmp = (unsigned) t * (unsigned) u;

			if (tmp > std::numeric_limits<T>::max())
				throw IntegerOverflowException();
			ret = (T) tmp;
		}
	};

	template <class T, class U>
	class MultiplicationHelper<T, U, MultiplicationState_CastInt64> {
	   public:
		NODISCARD constexpr static bool Multiply(const T& t, const U& u, T& ret) noexcept {
			int64_t tmp = (int64_t) t * (int64_t) u;
			ret         = (T) tmp;

			if (tmp > (int64_t) std::numeric_limits<T>::max() ||
			    tmp < (int64_t) std::numeric_limits<T>::min())
				return false;
			return true;
		}

		NODISCARD constexpr static SaturatingStatus MultiplySat(const T& t, const U& u,
		                                                        T& ret) noexcept {
			int64_t tmp = (int64_t) t * (int64_t) u;

			if (tmp > (int64_t) std::numeric_limits<T>::max())
				return Saturating_Overflow;
			if (tmp < (int64_t) std::numeric_limits<T>::min())
				return Saturating_Underflow;
			ret = (T) tmp;
			return Saturating_NoOverflow;
		}

		constexpr static void MultiplyThrow(const T& t, const U& u, T& ret) {
			int64_t tmp = (int64_t) t * (int64_t) u;

			if (tmp > (int64_t) std::numeric_limits<T>::max() ||
			    tmp < (int64_t) std::numeric_limits<T>::min())
				throw IntegerOverflowException();
			ret = (T) tmp;
		}
	};

	template <class T, class U>
	class MultiplicationHelper<T, U, MultiplicationState_CastUint64> {
	   public:
		NODISCARD constexpr static bool Multiply(const T& t, const U& u, T& ret) noexcept {
			uint64_t tmp = (uint64_t) t * (uint64_t) u;
			ret          = (T) tmp;

			if (tmp > (uint64_t) std::numeric_limits<T>::max())
				return false;
			return true;
		}

		NODISCARD constexpr static SaturatingStatus MultiplySat(const T& t, const U& u,
		                                                        T& ret) noexcept {
			uint64_t tmp = (uint64_t) t * (uint64_t) u;

			if (tmp > (uint64_t) std::numeric_limits<T>::max())
				return Saturating_Overflow;
			ret = (T) tmp;
			return Saturating_NoOverflow;
		}

		constexpr static void MultiplyThrow(const T& t, const U& u, T& ret) {
			uint64_t tmp = (uint64_t) t * (uint64_t) u;

			if (tmp > (uint64_t) std::numeric_limits<T>::max())
				throw IntegerOverflowException();
			ret = (T) tmp;
		}
	};

	template <class T, class U>
	class LargeIntRegMultiply;

#if USE_INTRINSICS
#ifdef MSVC
	inline bool MultiplyUint64(uint64_t a, uint64_t b, uint64_t* ret) noexcept {
		uint64_t ulhigh = 0;
		*ret            = _umul128(a, b, &ulhigh);
		return ulhigh == 0;
	}

	inline bool MultiplyInt64(int64_t a, int64_t b, int64_t* ret) noexcept {
		int64_t llhigh = 0;
		*ret           = _mul128(a, b, &llhigh);

		if ((a ^ b) < 0) {
			if (llhigh == -1 && *ret < 0 || llhigh == 0 && *ret == 0) {
				return true;
			}
		} else {
			if (llhigh == 0 &&
			    (std::uint64_t) *ret <= (std::uint64_t) std::numeric_limits<std::int64_t>::max())
				return true;
		}

		return false;
	}

	inline SaturatingStatus MultiplyInt64Sat(int64_t a, int64_t b, int64_t* ret) noexcept {
		int64_t llhigh = 0;
		*ret           = _mul128(a, b, &llhigh);

		if ((a ^ b) < 0) {
			if (llhigh == -1 && *ret < 0 || llhigh == 0 && *ret == 0) {
				return Saturating_NoOverflow;
			}
			return Saturating_Underflow;
		} else {
			if (llhigh == 0 &&
			    (std::uint64_t) *ret <= (std::uint64_t) std::numeric_limits<std::int64_t>::max())
				return Saturating_NoOverflow;
			return Saturating_Overflow;
		}
	}
#elif defined(GCC) || defined(CLANG)
	inline bool MultiplyUint64(uint64_t a, uint64_t b, uint64_t* ret) noexcept {
		return !__builtin_umulll_overflow(a, b, (unsigned long long*) ret);
	}

	inline bool MultiplyInt64(int64_t a, int64_t b, int64_t* ret) noexcept {
		return !__builtin_smulll_overflow(a, b, (unsigned long long*) ret);
	}

	inline SaturatingStatus MultiplyInt64Sat(int64_t a, int64_t b, int64_t* ret) noexcept {
		unsigned __int128 product = (unsigned __int128) a * b;
		uint64_t llhigh           = product >> 64;
		*ret                      = (int64_t)product;
		if ((a ^ b) < 0) {
			if (llhigh == -1 && *ret < 0 || llhigh == 0 && *ret == 0) {
				return Saturating_NoOverflow;
			}
			return Saturating_Underflow;
		} else {
			if (llhigh == 0 &&
			    (std::uint64_t) *ret <= (std::uint64_t) std::numeric_limits<std::int64_t>::max())
				return Saturating_NoOverflow;
			return Saturating_Overflow;
		}
	}
#endif
#endif

	template <>
	class LargeIntRegMultiply<uint64_t, uint64_t> {
	   public:
		NODISCARD CONSTEXPR_MULTIPLY static bool RegMultiply(const uint64_t& a, const uint64_t& b,
		                                                     uint64_t* ret) noexcept {
#if USE_INTRINSICS
			return MultiplyUint64(a, b, ret);
#else
			std::uint32_t aHigh = 0, aLow = 0, bHigh = 0, bLow = 0;

			aHigh = (std::uint32_t) (a >> 32);
			aLow  = (std::uint32_t) a;
			bHigh = (std::uint32_t) (b >> 32);
			bLow  = (std::uint32_t) b;
			*ret  = a * b;

			if (aHigh == 0) {
				if (bHigh != 0) {
					*ret = (std::uint64_t) aLow * (std::uint64_t) bHigh;
				}
			} else if (bHigh == 0) {
				if (aHigh != 0) {
					*ret = (std::uint64_t) aHigh * (std::uint64_t) bLow;
				}
			} else {
				return false;
			}

			if (*ret != 0) {
				std::uint64_t tmp = 0;

				if ((std::uint32_t) (*ret >> 32) != 0)
					return false;

				*ret <<= 32;
				tmp = (std::uint64_t) aLow * (std::uint64_t) bLow;
				*ret += tmp;

				if (*ret < tmp)
					return false;

				return true;
			}

			*ret = (std::uint64_t) aLow * (std::uint64_t) bLow;
			return true;
#endif
		}

		NODISCARD CONSTEXPR_MULTIPLY static SaturatingStatus RegMultiplySat(
		    const uint64_t& a, const uint64_t& b, uint64_t* ret) noexcept {
#if USE_INTRINSICS
			if (MultiplyUint64(a, b, ret))
				return Saturating_NoOverflow;
			return Saturating_Overflow;
#else
			std::uint32_t aHigh = 0, aLow = 0, bHigh = 0, bLow = 0;

			aHigh = (std::uint32_t) (a >> 32);
			aLow  = (std::uint32_t) a;
			bHigh = (std::uint32_t) (b >> 32);
			bLow  = (std::uint32_t) b;
			*ret  = 0;

			if (aHigh == 0) {
				if (bHigh != 0) {
					*ret = (std::uint64_t) aLow * (std::uint64_t) bHigh;
				}
			} else if (bHigh == 0) {
				if (aHigh != 0) {
					*ret = (std::uint64_t) aHigh * (std::uint64_t) bLow;
				}
			} else {
				return Saturating_Overflow;
			}

			if (*ret != 0) {
				std::uint64_t tmp = 0;

				if ((std::uint32_t) (*ret >> 32) != 0)
					return Saturating_Overflow;

				*ret <<= 32;
				tmp = (std::uint64_t) aLow * (std::uint64_t) bLow;
				*ret += tmp;

				if (*ret < tmp)
					return Saturating_Overflow;

				return Saturating_NoOverflow;
			}

			*ret = (std::uint64_t) aLow * (std::uint64_t) bLow;
			return Saturating_NoOverflow;
#endif
		}

		CONSTEXPR_MULTIPLY static void RegMultiplyThrow(const uint64_t& a, const uint64_t& b,
		                                                uint64_t* ret) {
#if USE_INTRINSICS
			if (!MultiplyUint64(a, b, ret))
				throw IntegerOverflowException();
#else
			std::uint32_t aHigh = 0, aLow = 0, bHigh = 0, bLow = 0;

			aHigh = (std::uint32_t) (a >> 32);
			aLow  = (std::uint32_t) a;
			bHigh = (std::uint32_t) (b >> 32);
			bLow  = (std::uint32_t) b;
			*ret  = 0;

			if (aHigh == 0) {
				if (bHigh != 0) {
					*ret = (std::uint64_t) aLow * (std::uint64_t) bHigh;
				}
			} else if (bHigh == 0) {
				if (aHigh != 0) {
					*ret = (std::uint64_t) aHigh * (std::uint64_t) bLow;
				}
			} else {
				throw IntegerOverflowException();
			}

			if (*ret != 0) {
				std::uint64_t tmp = 0;

				if ((std::uint32_t) (*ret >> 32) != 0)
					throw IntegerOverflowException();

				*ret <<= 32;
				tmp = (std::uint64_t) aLow * (std::uint64_t) bLow;
				*ret += tmp;

				if (*ret < tmp)
					throw IntegerOverflowException();

				return;
			}

			*ret                = (std::uint64_t) aLow * (std::uint64_t) bLow;
#endif
		}
	};

	template <>
	class LargeIntRegMultiply<uint64_t, uint32_t> {
	   public:
		NODISCARD CONSTEXPR_MULTIPLY static bool RegMultiply(const uint64_t& a, uint32_t b,
		                                                     uint64_t* ret) noexcept {
#if USE_INTRINSICS
			return MultiplyUint64(a, (uint64_t) b, ret);
#else
			std::uint32_t aHigh = 0, aLow = 0;

			aHigh = (std::uint32_t) (a >> 32);
			aLow  = (std::uint32_t) a;
			*ret  = 0;

			if (aHigh != 0) {
				*ret              = (std::uint64_t) aHigh * (std::uint64_t) b;
				std::uint64_t tmp = 0;

				if ((std::uint32_t) (*ret >> 32) != 0)
					return false;

				*ret <<= 32;
				tmp = (std::uint64_t) aLow * (std::uint64_t) b;
				*ret += tmp;

				if (*ret < tmp)
					return false;

				return true;
			}

			*ret = (std::uint64_t) aLow * (std::uint64_t) b;
			return true;
#endif
		}

		NODISCARD CONSTEXPR_MULTIPLY static SaturatingStatus RegMultiplySat(
		    const uint64_t& a, uint32_t b, uint64_t* ret) noexcept {
#if USE_INTRINSICS
			if (MultiplyUint64(a, (uint64_t) b, ret))
				return Saturating_NoOverflow;
			return Saturating_Overflow;
#else
			std::uint32_t aHigh = 0, aLow = 0;

			aHigh = (std::uint32_t) (a >> 32);
			aLow  = (std::uint32_t) a;
			*ret  = 0;

			if (aHigh != 0) {
				*ret              = (std::uint64_t) aHigh * (std::uint64_t) b;
				std::uint64_t tmp = 0;

				if ((std::uint32_t) (*ret >> 32) != 0)
					return Saturating_Overflow;

				*ret <<= 32;
				tmp = (std::uint64_t) aLow * (std::uint64_t) b;
				*ret += tmp;

				if (*ret < tmp)
					return Saturating_Overflow;

				return Saturating_NoOverflow;
			}

			*ret = (std::uint64_t) aLow * (std::uint64_t) b;
			return Saturating_NoOverflow;
#endif
		}

		CONSTEXPR_MULTIPLY static void RegMultiplyThrow(const uint64_t& a, uint32_t b,
		                                                uint64_t* ret) {
#if USE_INTRINSICS
			if (!MultiplyUint64(a, (uint64_t) b, ret))
				throw IntegerOverflowException();
#else
			std::uint32_t aHigh = 0, aLow = 0;

			aHigh = (std::uint32_t) (a >> 32);
			aLow  = (std::uint32_t) a;
			*ret  = 0;

			if (aHigh != 0) {
				*ret              = (std::uint64_t) aHigh * (std::uint64_t) b;
				std::uint64_t tmp = 0;

				if ((std::uint32_t) (*ret >> 32) != 0)
					throw IntegerOverflowException();

				*ret <<= 32;
				tmp = (std::uint64_t) aLow * (std::uint64_t) b;
				*ret += tmp;

				if (*ret < tmp)
					throw IntegerOverflowException();

				return;
			}

			*ret = (std::uint64_t) aLow * (std::uint64_t) b;
#endif
		}
	};

	template <>
	class LargeIntRegMultiply<uint64_t, int32_t> {
	   public:
		NODISCARD CONSTEXPR_MULTIPLY static bool RegMultiply(const uint64_t& a, int32_t b,
		                                                     uint64_t* ret) noexcept {
			if (b < 0 && a != 0) {
				*ret = a * b;
				return false;
			}

#if USE_INTRINSICS
			return MultiplyUint64(a, (uint64_t) b, ret);
#else
			return LargeIntRegMultiply<uint64_t, uint32_t>::RegMultiply(a, (uint32_t) b, ret);
#endif
		}

		NODISCARD CONSTEXPR_MULTIPLY static SaturatingStatus RegMultiplySat(
		    const uint64_t& a, int32_t b, uint64_t* ret) noexcept {
			if (b < 0 && a != 0)
				return Saturating_Underflow;

#if USE_INTRINSICS
			if (MultiplyUint64(a, (uint64_t) b, ret))
				return Saturating_NoOverflow;
			return Saturating_Overflow;
#else
			return LargeIntRegMultiply<uint64_t, uint32_t>::RegMultiplySat(a, (uint32_t) b, ret);
#endif
		}

		CONSTEXPR_MULTIPLY static void RegMultiplyThrow(const uint64_t& a, int32_t b,
		                                                uint64_t* ret) {
			if (b < 0 && a != 0)
				throw IntegerOverflowException();

#if USE_INTRINSICS
			if (!MultiplyUint64(a, (uint64_t) b, ret))
				throw IntegerOverflowException();
#else
			LargeIntRegMultiply<uint64_t, uint32_t>::RegMultiplyThrow(a, (uint32_t) b, ret);
#endif
		}
	};

	template <>
	class LargeIntRegMultiply<uint64_t, int64_t> {
	   public:
		NODISCARD CONSTEXPR_MULTIPLY static bool RegMultiply(const uint64_t& a, int64_t b,
		                                                     uint64_t* ret) noexcept {
			if (b < 0 && a != 0) {
				*ret = a * b;
				return false;
			}

#if USE_INTRINSICS
			return MultiplyUint64(a, (uint64_t) b, ret);
#else
			return LargeIntRegMultiply<uint64_t, uint32_t>::RegMultiply(a, (uint64_t) b, ret);
#endif
		}

		NODISCARD CONSTEXPR_MULTIPLY static SaturatingStatus RegMultiplySat(
		    const uint64_t& a, int64_t b, uint64_t* ret) noexcept {
			if (b < 0 && a != 0)
				return Saturating_Underflow;

#if USE_INTRINSICS
			if (MultiplyUint64(a, (uint64_t) b, ret))
				return Saturating_NoOverflow;
			return Saturating_Overflow;
#else
			return LargeIntRegMultiply<uint64_t, uint32_t>::RegMultiplySat(a, (uint64_t) b, ret);
#endif
		}

		CONSTEXPR_MULTIPLY static void RegMultiplyThrow(const uint64_t& a, int64_t b,
		                                                uint64_t* ret) {
			if (b < 0 && a != 0)
				throw IntegerOverflowException();

#if USE_INTRINSICS
			if (!MultiplyUint64(a, (uint64_t) b, ret))
				throw IntegerOverflowException();
#else
			LargeIntRegMultiply<uint64_t, uint32_t>::RegMultiplyThrow(a, (uint64_t) b, ret);
#endif
		}
	};

	template <>
	class LargeIntRegMultiply<int32_t, uint64_t> {
	   public:
		NODISCARD constexpr static bool RegMultiply(int32_t a, const uint64_t& b,
		                                            int32_t* ret) noexcept {
			std::uint32_t bHigh = 0, bLow = 0;
			bool fIsNegative = false;

			bHigh = (std::uint32_t) (b >> 32);
			bLow  = (std::uint32_t) b;
			*ret  = 0;

			if (bHigh != 0 && a != 0) {
				*ret = a * b;
				return false;
			}

			if (a < 0) {
				a = (std::int32_t)
				    AbsValueHelper<std::int32_t, AbsMethodHelper<std::int32_t>::method>::Abs(a);
				fIsNegative = true;
			}

			std::uint64_t tmp = (std::uint32_t) a * (std::uint64_t) bLow;

			if (!fIsNegative) {
				*ret = (std::int32_t) tmp;
				if (tmp <= (std::uint64_t) std::numeric_limits<std::int32_t>::max()) {
					return true;
				}
			} else {
				*ret = SignedNegation<std::int32_t>::Value(tmp);
				if (tmp <= (std::uint64_t) std::numeric_limits<std::int32_t>::max() + 1) {
					return true;
				}
			}

			return false;
		}

		NODISCARD constexpr static SaturatingStatus RegMultiplySat(int32_t a, const uint64_t& b,
		                                                           int32_t* ret) noexcept {
			std::uint32_t bHigh = 0, bLow = 0;
			bool fIsNegative = false;

			bHigh = (std::uint32_t) (b >> 32);
			bLow  = (std::uint32_t) b;
			*ret  = 0;

			if (bHigh != 0) {
				if (a < 0)
					return Saturating_Underflow;
				if (a > 0)
					return Saturating_Overflow;
			}

			if (a < 0) {
				a = (std::int32_t)
				    AbsValueHelper<std::int32_t, AbsMethodHelper<std::int32_t>::method>::Abs(a);
				fIsNegative = true;
			}

			std::uint64_t tmp = (std::uint32_t) a * (std::uint64_t) bLow;

			if (!fIsNegative) {
				if (tmp <= (std::uint64_t) std::numeric_limits<std::int32_t>::max()) {
					*ret = (std::int32_t) tmp;
					return Saturating_NoOverflow;
				}
				return Saturating_Overflow;
			} else {
				if (tmp <= (std::uint64_t) std::numeric_limits<std::int32_t>::max() + 1) {
					*ret = SignedNegation<std::int32_t>::Value(tmp);
					return Saturating_NoOverflow;
				}
				return Saturating_Underflow;
			}
		}

		constexpr static void RegMultiplyThrow(int32_t a, const uint64_t& b, int32_t* ret) {
			std::uint32_t bHigh = 0, bLow = 0;
			bool fIsNegative = false;

			bHigh = (std::uint32_t) (b >> 32);
			bLow  = (std::uint32_t) b;
			*ret  = 0;

			if (bHigh != 0 && a != 0)
				throw IntegerOverflowException();

			if (a < 0) {
				a = (std::int32_t)
				    AbsValueHelper<std::int32_t, AbsMethodHelper<std::int32_t>::method>::Abs(a);
				fIsNegative = true;
			}

			std::uint64_t tmp = (std::uint32_t) a * (std::uint64_t) bLow;

			if (!fIsNegative) {
				if (tmp <= (std::uint64_t) std::numeric_limits<std::int32_t>::max()) {
					*ret = (std::int32_t) tmp;
					return;
				}
			} else {
				if (tmp <= (std::uint64_t) std::numeric_limits<std::int32_t>::max() + 1) {
					*ret = SignedNegation<std::int32_t>::Value(tmp);
					return;
				}
			}

			throw IntegerOverflowException();
		}
	};

	template <>
	class LargeIntRegMultiply<uint32_t, uint64_t> {
	   public:
		NODISCARD constexpr static bool RegMultiply(uint32_t a, const uint64_t& b,
		                                            uint32_t* ret) noexcept {
			if ((std::uint32_t) (b >> 32) != 0 && a != 0) {
				*ret = a * b;
				return false;
			}

			std::uint64_t tmp = b * (std::uint64_t) a;
			*ret              = (std::uint32_t) tmp;

			if ((std::uint32_t) (tmp >> 32) != 0)
				return false;

			return true;
		}

		NODISCARD constexpr static SaturatingStatus RegMultiplySat(uint32_t a, const uint64_t& b,
		                                                           uint32_t* ret) noexcept {
			if ((std::uint32_t) (b >> 32) != 0 && a != 0)
				return Saturating_Overflow;

			std::uint64_t tmp = b * (std::uint64_t) a;

			if ((std::uint32_t) (tmp >> 32) != 0)
				return Saturating_Overflow;

			*ret = (std::uint32_t) tmp;
			return Saturating_NoOverflow;
		}

		constexpr static void RegMultiplyThrow(uint32_t a, const uint64_t& b, uint32_t* ret) {
			if ((std::uint32_t) (b >> 32) != 0 && a != 0)
				throw IntegerOverflowException();

			std::uint64_t tmp = b * (std::uint64_t) a;

			if ((std::uint32_t) (tmp >> 32) != 0)
				throw IntegerOverflowException();

			*ret = (std::uint32_t) tmp;
		}
	};

	template <>
	class LargeIntRegMultiply<uint32_t, int64_t> {
	   public:
		NODISCARD constexpr static bool RegMultiply(uint32_t a, const int64_t& b,
		                                            uint32_t* ret) noexcept {
			if (b < 0 && a != 0) {
				*ret = a * b;
				return false;
			}
			return LargeIntRegMultiply<uint32_t, uint64_t>::RegMultiply(a, (uint64_t) b, ret);
		}

		NODISCARD constexpr static SaturatingStatus RegMultiplySat(uint32_t a, const int64_t& b,
		                                                           uint32_t* ret) noexcept {
			if (b < 0 && a != 0)
				return Saturating_Underflow;
			return LargeIntRegMultiply<uint32_t, uint64_t>::RegMultiplySat(a, (uint64_t) b, ret);
		}

		constexpr static void RegMultiplyThrow(uint32_t a, const int64_t& b, uint32_t* ret) {
			if (b < 0 && a != 0)
				throw IntegerOverflowException();
			LargeIntRegMultiply<uint32_t, uint64_t>::RegMultiplyThrow(a, (uint64_t) b, ret);
		}
	};

	template <>
	class LargeIntRegMultiply<int64_t, int64_t> {
	   public:
		NODISCARD CONSTEXPR_MULTIPLY static bool RegMultiply(const int64_t& a, const int64_t& b,
		                                                     int64_t* ret) noexcept {
#if USE_INTRINSICS
			return MultiplyInt64(a, b, ret);
#else
			bool aNegative    = false;
			bool bNegative    = false;
			std::uint64_t tmp = 0;
			std::int64_t a1   = a;
			std::int64_t b1   = b;

			if (a1 < 0) {
				aNegative = true;
				a1        = (std::int64_t)
				    AbsValueHelper<std::int64_t, AbsMethodHelper<std::int64_t>::method>::Abs(a1);
			}

			if (b1 < 0) {
				bNegative = true;
				b1        = (std::int64_t)
				    AbsValueHelper<std::int64_t, AbsMethodHelper<std::int64_t>::method>::Abs(b1);
			}

			if (LargeIntRegMultiply<std::uint64_t, std::uint64_t>::RegMultiply(
			        (std::uint64_t) a1, (std::uint64_t) b1, &tmp)) {
				if (aNegative ^ bNegative) {
					*ret = SignedNegation<std::int64_t>::Value(tmp);
					if (tmp <= (std::uint64_t) std::numeric_limits<std::int64_t>::min()) {
						return true;
					}
				} else {
					*ret = (std::int64_t) tmp;
					if (tmp <= (std::uint64_t) std::numeric_limits<std::int64_t>::max()) {
						return true;
					}
				}
			}

			return false;
#endif
		}

		NODISCARD CONSTEXPR_MULTIPLY static SaturatingStatus RegMultiplySat(const int64_t& a,
		                                                                    const int64_t& b,
		                                                                    int64_t* ret) noexcept {
#if USE_INTRINSICS
			return MultiplyInt64Sat(a, b, ret);
#else
			bool aNegative    = false;
			bool bNegative    = false;
			std::uint64_t tmp = 0;
			std::int64_t a1   = a;
			std::int64_t b1   = b;

			if (a1 < 0) {
				aNegative = true;
				a1        = (std::int64_t)
				    AbsValueHelper<std::int64_t, AbsMethodHelper<std::int64_t>::method>::Abs(a1);
			}

			if (b1 < 0) {
				bNegative = true;
				b1        = (std::int64_t)
				    AbsValueHelper<std::int64_t, AbsMethodHelper<std::int64_t>::method>::Abs(b1);
			}

			auto status = LargeIntRegMultiply<std::uint64_t, std::uint64_t>::RegMultiplySat(
			    (std::uint64_t) a1, (std::uint64_t) b1, &tmp);
			if (status == Saturating_NoOverflow) {
				if (aNegative ^ bNegative) {
					if (tmp <= (std::uint64_t) std::numeric_limits<std::int64_t>::min()) {
						*ret = SignedNegation<std::int64_t>::Value(tmp);
						return Saturating_NoOverflow;
					}
					return Saturating_Underflow;
				} else {
					if (tmp <= (std::uint64_t) std::numeric_limits<std::int64_t>::max()) {
						*ret = (std::int64_t) tmp;
						return Saturating_NoOverflow;
					}
					return Saturating_Overflow;
				}
			}

			return (aNegative ^ bNegative) : Saturating_Underflow : Saturating_Overflow;
#endif
		}

		CONSTEXPR_MULTIPLY static void RegMultiplyThrow(const int64_t& a, const int64_t& b,
		                                                int64_t* ret) {
#if USE_INTRINSICS
			if (!MultiplyInt64(a, b, ret))
				throw IntegerOverflowException();
#else
			bool aNegative    = false;
			bool bNegative    = false;
			std::uint64_t tmp = 0;
			std::int64_t a1   = a;
			std::int64_t b1   = b;

			if (a1 < 0) {
				aNegative = true;
				a1        = (std::int64_t)
				    AbsValueHelper<std::int64_t, AbsMethodHelper<std::int64_t>::method>::Abs(a1);
			}

			if (b1 < 0) {
				bNegative = true;
				b1        = (std::int64_t)
				    AbsValueHelper<std::int64_t, AbsMethodHelper<std::int64_t>::method>::Abs(b1);
			}

			if (LargeIntRegMultiply<std::uint64_t, std::uint64_t>::RegMultiply(
			        (std::uint64_t) a1, (std::uint64_t) b1, &tmp)) {
				if (aNegative ^ bNegative) {
					if (tmp <= (std::uint64_t) std::numeric_limits<std::int64_t>::min()) {
						*ret = SignedNegation<std::int64_t>::Value(tmp);
						return;
					}
				} else {
					if (tmp <= (std::uint64_t) std::numeric_limits<std::int64_t>::max()) {
						*ret = (std::int64_t) tmp;
						return;
					}
				}
			}

			throw IntegerOverflowException();
#endif
		}
	};

	template <>
	class LargeIntRegMultiply<int64_t, uint32_t> {
	   public:
		NODISCARD CONSTEXPR_MULTIPLY static bool RegMultiply(const int64_t& a, uint32_t b,
		                                                     int64_t* ret) noexcept {
#if USE_INTRINSICS
			return MultiplyInt64(a, (int64_t) b, ret);
#else
			bool aNegative    = false;
			std::uint64_t tmp = 0;
			std::int64_t a1   = a;

			if (a1 < 0) {
				aNegative = true;
				a1        = (std::int64_t)
				    AbsValueHelper<std::int64_t, AbsMethodHelper<std::int64_t>::method>::Abs(a1);
			}

			if (LargeIntRegMultiply<std::uint64_t, std::uint32_t>::RegMultiply((std::uint64_t) a1,
			                                                                   b, &tmp)) {
				if (aNegative) {
					*ret = SignedNegation<std::int64_t>::Value(tmp);
					if (tmp <= (std::uint64_t) std::numeric_limits<std::int64_t>::min()) {
						return true;
					}
				} else {
					*ret = (std::int64_t) tmp;
					if (tmp <= (std::uint64_t) std::numeric_limits<std::int64_t>::max()) {
						return true;
					}
				}
			}
			else {
				*ret = a * b;
			}

			return false;
#endif
		}

		NODISCARD CONSTEXPR_MULTIPLY static SaturatingStatus RegMultiplySat(const int64_t& a,
		                                                                    uint32_t b,
		                                                                    int64_t* ret) noexcept {
#if USE_INTRINSICS
			return MultiplyInt64Sat(a, (int64_t) b, ret);
#else
			bool aNegative    = false;
			std::uint64_t tmp = 0;
			std::int64_t a1   = a;

			if (a1 < 0) {
				aNegative = true;
				a1        = (std::int64_t)
				    AbsValueHelper<std::int64_t, AbsMethodHelper<std::int64_t>::method>::Abs(a1);
			}

			auto status = LargeIntRegMultiply<std::uint64_t, std::uint32_t>::RegMultiplySat(
			    (std::uint64_t) a1, b, &tmp);
			if (status == Saturating_NoOverflow) {
				if (aNegative) {
					if (tmp <= (std::uint64_t) std::numeric_limits<std::int64_t>::min()) {
						*ret = SignedNegation<std::int64_t>::Value(tmp);
						return Saturating_NoOverflow;
					}
					return Saturating_Underflow;
				} else {
					if (tmp <= (std::uint64_t) std::numeric_limits<std::int64_t>::max()) {
						*ret = (std::int64_t) tmp;
						return Saturating_NoOverflow;
					}
					return Saturating_Overflow;
				}
			}

			return a < 0 : Saturating_Underflow : Saturating_Overflow;
#endif
		}

		CONSTEXPR_MULTIPLY static void RegMultiplyThrow(const int64_t& a, uint32_t b,
		                                                int64_t* ret) {
#if USE_INTRINSICS
			if (!MultiplyInt64(a, (int64_t) b, ret))
				throw IntegerOverflowException();
#else
			bool aNegative    = false;
			std::uint64_t tmp = 0;
			std::int64_t a1   = a;

			if (a1 < 0) {
				aNegative = true;
				a1        = (std::int64_t)
				    AbsValueHelper<std::int64_t, AbsMethodHelper<std::int64_t>::method>::Abs(a1);
			}

			if (LargeIntRegMultiply<std::uint64_t, std::uint32_t>::RegMultiply((std::uint64_t) a1,
			                                                                   b, &tmp)) {
				if (aNegative) {
					if (tmp <= (std::uint64_t) std::numeric_limits<std::int64_t>::min()) {
						*ret = SignedNegation<std::int64_t>::Value(tmp);
						return;
					}
				} else {
					if (tmp <= (std::uint64_t) std::numeric_limits<std::int64_t>::max()) {
						*ret = (std::int64_t) tmp;
						return;
					}
				}
			}

			throw IntegerOverflowException();
#endif
		}
	};

	template <>
	class LargeIntRegMultiply<int64_t, int32_t> {
	   public:
		NODISCARD CONSTEXPR_MULTIPLY static bool RegMultiply(const int64_t& a, int32_t b,
		                                                     int64_t* ret) noexcept {
#if USE_INTRINSICS
			return MultiplyInt64(a, (int64_t) b, ret);
#else
			bool aNegative    = false;
			bool bNegative    = false;
			std::uint64_t tmp = 0;
			std::int64_t a1   = a;
			std::int64_t b1   = b;

			if (a1 < 0) {
				aNegative = true;
				a1        = (std::int64_t)
				    AbsValueHelper<std::int64_t, AbsMethodHelper<std::int64_t>::method>::Abs(a1);
			}

			if (b1 < 0) {
				bNegative = true;
				b1        = (std::int64_t)
				    AbsValueHelper<std::int64_t, AbsMethodHelper<std::int64_t>::method>::Abs(b1);
			}

			if (LargeIntRegMultiply<std::uint64_t, std::uint32_t>::RegMultiply(
			        (std::uint64_t) a1, (std::uint32_t) b1, &tmp)) {
				if (aNegative ^ bNegative) {
					*ret = SignedNegation<std::int64_t>::Value(tmp);
					if (tmp <= (std::uint64_t) std::numeric_limits<std::int64_t>::min()) {
						return true;
					}
				} else {
					*ret = (std::int64_t) tmp;
					if (tmp <= (std::uint64_t) std::numeric_limits<std::int64_t>::max()) {
						return true;
					}
				}
			} else {
				*ret = a * b;
			}

			return false;
#endif
		}

		NODISCARD CONSTEXPR_MULTIPLY static SaturatingStatus RegMultiplySat(const int64_t& a,
		                                                                    int32_t b,
		                                                                    int64_t* ret) noexcept {
#if USE_INTRINSICS
			return MultiplyInt64Sat(a, (int64_t) b, ret);
#else
			bool aNegative    = false;
			bool bNegative    = false;
			std::uint64_t tmp = 0;
			std::int64_t a1   = a;
			std::int64_t b1   = b;

			if (a1 < 0) {
				aNegative = true;
				a1        = (std::int64_t)
				    AbsValueHelper<std::int64_t, AbsMethodHelper<std::int64_t>::method>::Abs(a1);
			}

			if (b1 < 0) {
				bNegative = true;
				b1        = (std::int64_t)
				    AbsValueHelper<std::int64_t, AbsMethodHelper<std::int64_t>::method>::Abs(b1);
			}

			auto status = LargeIntRegMultiply<std::uint64_t, std::uint32_t>::RegMultiplySat(
			    (std::uint64_t) a1, (std::uint32_t) b1, &tmp);
			if (status == Saturating_NoOverflow) {
				if (aNegative ^ bNegative) {
					if (tmp <= (std::uint64_t) std::numeric_limits<std::int64_t>::min()) {
						*ret = SignedNegation<std::int64_t>::Value(tmp);
						return Saturating_NoOverflow;
					}
					return Saturating_Underflow;
				} else {
					if (tmp <= (std::uint64_t) std::numeric_limits<std::int64_t>::max()) {
						*ret = (std::int64_t) tmp;
						return Saturating_NoOverflow;
					}
					return Saturating_Overflow;
				}
			}

			return (aNegative ^ bNegative) ? Saturating_Underflow : Saturating_Overflow;
#endif
		}

		CONSTEXPR_MULTIPLY static void RegMultiplyThrow(const int64_t& a, int32_t b, int64_t* ret) {
#if USE_INTRINSICS
			if (!MultiplyInt64(a, (int64_t) b, ret))
				throw IntegerOverflowException();
#else
			bool aNegative    = false;
			bool bNegative    = false;
			std::uint64_t tmp = 0;
			std::int64_t a1   = a;
			std::int64_t b1   = b;

			if (a1 < 0) {
				aNegative = true;
				a1        = (std::int64_t)
				    AbsValueHelper<std::int64_t, AbsMethodHelper<std::int64_t>::method>::Abs(a1);
			}

			if (b1 < 0) {
				bNegative = true;
				b1        = (std::int64_t)
				    AbsValueHelper<std::int64_t, AbsMethodHelper<std::int64_t>::method>::Abs(b1);
			}

			if (LargeIntRegMultiply<std::uint64_t, std::uint32_t>::RegMultiply(
			        (std::uint64_t) a1, (std::uint32_t) b1, &tmp)) {
				if (aNegative ^ bNegative) {
					if (tmp <= (std::uint64_t) std::numeric_limits<std::int64_t>::min()) {
						*ret = SignedNegation<std::int64_t>::Value(tmp);
						return;
					}
				} else {
					if (tmp <= (std::uint64_t) std::numeric_limits<std::int64_t>::max()) {
						*ret = (std::int64_t) tmp;
						return;
					}
				}
			}

			throw IntegerOverflowException();
#endif
		}
	};

	template <>
	class LargeIntRegMultiply<int32_t, int64_t> {
	   public:
		NODISCARD CONSTEXPR_MULTIPLY static bool RegMultiply(int32_t a, const int64_t& b,
		                                                     int32_t* ret) noexcept {
#if USE_INTRINSICS
			int64_t tmp = 0;
			auto result = MultiplyInt64(a, b, &tmp);
			*ret        = (std::int32_t) tmp;

			if (result) {
				if (tmp > std::numeric_limits<std::int32_t>::max() ||
				    tmp < std::numeric_limits<std::int32_t>::min()) {
					return false;
				}

				return true;
			}
			return false;
#else
			bool aNegative    = false;
			bool bNegative    = false;
			std::uint32_t tmp = 0;
			std::int64_t b1   = b;

			if (a < 0) {
				aNegative = true;
				a         = (std::int32_t)
				    AbsValueHelper<std::int32_t, AbsMethodHelper<std::int32_t>::method>::Abs(a);
			}

			if (b1 < 0) {
				bNegative = true;
				b1        = (std::int64_t)
				    AbsValueHelper<std::int64_t, AbsMethodHelper<std::int64_t>::method>::Abs(b1);
			}

			if (LargeIntRegMultiply<std::uint32_t, std::uint64_t>::RegMultiply(
			        (std::uint32_t) a, (std::uint64_t) b1, &tmp)) {
				if (aNegative ^ bNegative) {
					*ret = SignedNegation<std::int32_t>::Value(tmp);
					if (tmp <= (std::uint32_t) std::numeric_limits<std::int32_t>::min()) {
						return true;
					}
				} else {
					*ret = (std::int32_t) tmp;
					if (tmp <= (std::uint32_t) std::numeric_limits<std::int32_t>::max()) {
						return true;
					}
				}
			}
			else {
				*ret = a * b;
			}

			return false;
#endif
		}

		NODISCARD CONSTEXPR_MULTIPLY static SaturatingStatus RegMultiplySat(int32_t a,
		                                                                    const int64_t& b,
		                                                                    int32_t* ret) noexcept {
#if USE_INTRINSICS
			int64_t tmp = 0;

			auto status = MultiplyInt64Sat(a, b, &tmp);
			if (status == Saturating_NoOverflow) {
				if (tmp > std::numeric_limits<std::int32_t>::max()) {
					return Saturating_Overflow;
				}
				if (tmp < std::numeric_limits<std::int32_t>::min()) {
					return Saturating_Underflow;
				}

				*ret = (std::int32_t) tmp;
				return Saturating_NoOverflow;
			}
			return ((int64_t) a ^ b) < 0 ? Saturating_Underflow : Saturating_Overflow;
#else
			bool aNegative    = false;
			bool bNegative    = false;
			std::uint32_t tmp = 0;
			std::int64_t b1   = b;

			if (a < 0) {
				aNegative = true;
				a         = (std::int32_t)
				    AbsValueHelper<std::int32_t, AbsMethodHelper<std::int32_t>::method>::Abs(a);
			}

			if (b1 < 0) {
				bNegative = true;
				b1        = (std::int64_t)
				    AbsValueHelper<std::int64_t, AbsMethodHelper<std::int64_t>::method>::Abs(b1);
			}

			auto status = LargeIntRegMultiply<std::uint32_t, std::uint64_t>::RegMultiplySat(
			    (std::uint32_t) a, (std::uint64_t) b1, &tmp);
			if (status == Saturating_NoOverflow) {
				if (aNegative ^ bNegative) {
					if (tmp <= (std::uint32_t) std::numeric_limits<std::int32_t>::min()) {
						*ret = SignedNegation<std::int32_t>::Value(tmp);
						return Saturating_NoOverflow;
					}
					return Saturating_Underflow;
				} else {
					if (tmp <= (std::uint32_t) std::numeric_limits<std::int32_t>::max()) {
						*ret = (std::int32_t) tmp;
						return Saturating_NoOverflow;
					}
					return Saturating_Overflow;
				}
			}

			return (aNegative ^ bNegative) ? Saturating_Underflow : Saturating_Overflow;
#endif
		}

		CONSTEXPR_MULTIPLY static void RegMultiplyThrow(int32_t a, const int64_t& b, int32_t* ret) {
#if USE_INTRINSICS
			int64_t tmp = 0;

			if (MultiplyInt64(a, b, &tmp)) {
				if (tmp > std::numeric_limits<std::int32_t>::max() ||
				    tmp < std::numeric_limits<std::int32_t>::min()) {
					throw IntegerOverflowException();
				}

				*ret = (std::int32_t) tmp;
				return;
			}
			throw IntegerOverflowException();
#else
			bool aNegative    = false;
			bool bNegative    = false;
			std::uint32_t tmp = 0;
			std::int64_t b1   = b;

			if (a < 0) {
				aNegative = true;
				a         = (std::int32_t)
				    AbsValueHelper<std::int32_t, AbsMethodHelper<std::int32_t>::method>::Abs(a);
			}

			if (b1 < 0) {
				bNegative = true;
				b1        = (std::int64_t)
				    AbsValueHelper<std::int64_t, AbsMethodHelper<std::int64_t>::method>::Abs(b1);
			}

			if (LargeIntRegMultiply<std::uint32_t, std::uint64_t>::RegMultiply(
			        (std::uint32_t) a, (std::uint64_t) b1, &tmp)) {
				if (aNegative ^ bNegative) {
					if (tmp <= (std::uint32_t) std::numeric_limits<std::int32_t>::min()) {
						*ret = SignedNegation<std::int32_t>::Value(tmp);
						return;
					}
				} else {
					if (tmp <= (std::uint32_t) std::numeric_limits<std::int32_t>::max()) {
						*ret = (std::int32_t) tmp;
						return;
					}
				}
			}

			throw IntegerOverflowException();
#endif
		}
	};

	template <>
	class LargeIntRegMultiply<int64_t, uint64_t> {
	   public:
		NODISCARD CONSTEXPR_MULTIPLY static bool RegMultiply(const int64_t& a, const uint64_t& b,
		                                                     int64_t* ret) noexcept {
			bool aNegative    = false;
			std::uint64_t tmp = 0;
			std::int64_t a1   = a;

			if (a1 < 0) {
				aNegative = true;
				a1        = (std::int64_t)
				    AbsValueHelper<std::int64_t, AbsMethodHelper<std::int64_t>::method>::Abs(a1);
			}

			if (LargeIntRegMultiply<std::uint64_t, std::uint64_t>::RegMultiply(
			        (std::uint64_t) a1, (std::uint64_t) b, &tmp)) {
				if (aNegative) {
					*ret = SignedNegation<std::int64_t>::Value(tmp);
					if (tmp <= (std::uint64_t) std::numeric_limits<std::int64_t>::min()) {
						return true;
					}
				} else {
					*ret = (std::int64_t) tmp;
					if (tmp <= (std::uint64_t) std::numeric_limits<std::int64_t>::max()) {
						return true;
					}
				}
			} else {
				*ret = a * b;
			}

			return false;
		}

		NODISCARD CONSTEXPR_MULTIPLY static SaturatingStatus RegMultiplySat(const int64_t& a,
		                                                                    const uint64_t& b,
		                                                                    int64_t* ret) noexcept {
			bool aNegative    = false;
			std::uint64_t tmp = 0;
			std::int64_t a1   = a;

			if (a1 < 0) {
				aNegative = true;
				a1        = (std::int64_t)
				    AbsValueHelper<std::int64_t, AbsMethodHelper<std::int64_t>::method>::Abs(a1);
			}

			auto status = LargeIntRegMultiply<std::uint64_t, std::uint64_t>::RegMultiplySat(
			    (std::uint64_t) a1, (std::uint64_t) b, &tmp);
			if (status == Saturating_NoOverflow) {
				if (aNegative) {
					if (tmp <= (std::uint64_t) std::numeric_limits<std::int64_t>::min()) {
						*ret = SignedNegation<std::int64_t>::Value(tmp);
						return Saturating_NoOverflow;
					}
					return Saturating_Underflow;
				} else {
					if (tmp <= (std::uint64_t) std::numeric_limits<std::int64_t>::max()) {
						*ret = (std::int64_t) tmp;
						return Saturating_NoOverflow;
					}
					return Saturating_Overflow;
				}
			}
			return aNegative ? Saturating_Underflow : Saturating_Overflow;
		}

		CONSTEXPR_MULTIPLY static void RegMultiplyThrow(const int64_t& a, const uint64_t& b,
		                                                int64_t* ret) {
			bool aNegative    = false;
			std::uint64_t tmp = 0;
			std::int64_t a1   = a;

			if (a1 < 0) {
				aNegative = true;
				a1        = (std::int64_t)
				    AbsValueHelper<std::int64_t, AbsMethodHelper<std::int64_t>::method>::Abs(a1);
			}

			if (LargeIntRegMultiply<std::uint64_t, std::uint64_t>::RegMultiply(
			        (std::uint64_t) a1, (std::uint64_t) b, &tmp)) {
				if (aNegative) {
					if (tmp <= (std::uint64_t) std::numeric_limits<std::int64_t>::min()) {
						*ret = SignedNegation<std::int64_t>::Value(tmp);
						return;
					}
				} else {
					if (tmp <= (std::uint64_t) std::numeric_limits<std::int64_t>::max()) {
						*ret = (std::int64_t) tmp;
						return;
					}
				}
			}

			throw IntegerOverflowException();
		}
	};

	template <class T, class U>
	class MultiplicationHelper<T, U, MultiplicationState_Uint64Uint64> {
	   public:
		NODISCARD CONSTEXPR_MULTIPLY static bool Multiply(const T& t, const U& u, T& ret) noexcept {
			static_assert(__details::IntTraits<T>::isUint64 && __details::IntTraits<U>::isUint64,
			              "T, U must be Uint64");
			uint64_t t1  = t;
			uint64_t u1  = u;
			uint64_t tmp = 0;
			bool f       = LargeIntRegMultiply<uint64_t, uint64_t>::RegMultiply(t1, u1, &tmp);
			ret          = tmp;
			return f;
		}

		NODISCARD CONSTEXPR_MULTIPLY static SaturatingStatus MultiplySat(const T& t, const U& u,
		                                                                 T& ret) noexcept {
			static_assert(__details::IntTraits<T>::isUint64 && __details::IntTraits<U>::isUint64,
			              "T, U must be Uint64");
			uint64_t t1  = t;
			uint64_t u1  = u;
			uint64_t tmp = 0;
			auto s       = LargeIntRegMultiply<uint64_t, uint64_t>::RegMultiplySat(t1, u1, &tmp);
			ret          = tmp;
			return s;
		}

		CONSTEXPR_MULTIPLY static void MultiplyThrow(const T& t, const U& u, T& ret) {
			static_assert(__details::IntTraits<T>::isUint64 && __details::IntTraits<U>::isUint64,
			              "T, U must be Uint64");
			uint64_t t1  = t;
			uint64_t u1  = u;
			uint64_t tmp = 0;
			LargeIntRegMultiply<uint64_t, uint64_t>::RegMultiplyThrow(t1, u1, &tmp);
			ret = tmp;
		}
	};

	template <class T, class U>
	class MultiplicationHelper<T, U, MultiplicationState_Uint64Uint> {
	   public:
		NODISCARD CONSTEXPR_MULTIPLY static bool Multiply(const T& t, U u, T& ret) noexcept {
			static_assert(__details::IntTraits<T>::isUint64, "T must be Uint64");
			uint64_t t1  = t;
			uint64_t tmp = 0;
			bool f = LargeIntRegMultiply<uint64_t, uint32_t>::RegMultiply(t1, (uint32_t) u, &tmp);
			ret    = tmp;
			return f;
		}

		NODISCARD CONSTEXPR_MULTIPLY static SaturatingStatus MultiplySat(const T& t, U u,
		                                                                 T& ret) noexcept {
			static_assert(__details::IntTraits<T>::isUint64, "T must be Uint64");
			uint64_t t1  = t;
			uint64_t tmp = 0;
			auto s =
			    LargeIntRegMultiply<uint64_t, uint32_t>::RegMultiplySat(t1, (uint32_t) u, &tmp);
			ret = tmp;
			return s;
		}

		CONSTEXPR_MULTIPLY static void MultiplyThrow(const T& t, U u, T& ret) {
			static_assert(__details::IntTraits<T>::isUint64, "T must be Uint64");
			uint64_t t1  = t;
			uint64_t tmp = 0;
			LargeIntRegMultiply<uint64_t, uint32_t>::RegMultiplyThrow(t1, (uint32_t) u, &tmp);
			ret = tmp;
		}
	};

	template <class T, class U>
	class MultiplicationHelper<T, U, MultiplicationState_UintUint64> {
	   public:
		NODISCARD constexpr static bool Multiply(T t, const U& u, T& ret) noexcept {
			static_assert(__details::IntTraits<U>::isUint64, "U must be Uint64");
			uint64_t u1  = u;
			uint32_t tmp = 0;
			auto status  = LargeIntRegMultiply<uint32_t, uint64_t>::RegMultiply(t, u1, &tmp);
			ret          = tmp;
			if (status &&
			    SafeCastHelper<T, uint32_t, CastMethodHelper<T, uint32_t>::method>::Cast(tmp, ret))
				return true;
			return false;
		}

		NODISCARD constexpr static SaturatingStatus MultiplySat(T t, const U& u, T& ret) noexcept {
			static_assert(__details::IntTraits<U>::isUint64, "U must be Uint64");
			uint64_t u1  = u;
			uint32_t tmp = 0;
			auto s       = LargeIntRegMultiply<uint32_t, uint64_t>::RegMultiplySat(t, u1, &tmp);
			if (s == Saturating_NoOverflow) {
				if (tmp < (uint32_t) std::numeric_limits<T>::min())
					return Saturating_Underflow;
				if (tmp > (uint32_t) std::numeric_limits<T>::max())
					return Saturating_Overflow;
				ret = (T) tmp;
			}
			return s;
		}

		constexpr static void MultiplyThrow(T t, const U& u, T& ret) {
			static_assert(__details::IntTraits<U>::isUint64, "U must be Uint64");
			uint64_t u1  = u;
			uint32_t tmp = 0;
			LargeIntRegMultiply<uint32_t, uint64_t>::RegMultiplyThrow(t, u1, &tmp);
			SafeCastHelper<T, uint32_t, CastMethodHelper<T, uint32_t>::method>::CastThrow(tmp, ret);
		}
	};

	template <class T, class U>
	class MultiplicationHelper<T, U, MultiplicationState_Uint64Int> {
	   public:
		NODISCARD CONSTEXPR_MULTIPLY static bool Multiply(const T& t, U u, T& ret) noexcept {
			static_assert(__details::IntTraits<T>::isUint64, "T must be Uint64");
			uint64_t t1  = t;
			uint64_t tmp = 0;
			bool f = LargeIntRegMultiply<uint64_t, int32_t>::RegMultiply(t1, (int32_t) u, &tmp);
			ret    = tmp;
			return f;
		}

		NODISCARD CONSTEXPR_MULTIPLY static SaturatingStatus MultiplySat(const T& t, U u,
		                                                                 T& ret) noexcept {
			static_assert(__details::IntTraits<T>::isUint64, "T must be Uint64");
			uint64_t t1  = t;
			uint64_t tmp = 0;
			auto s = LargeIntRegMultiply<uint64_t, int32_t>::RegMultiplySat(t1, (int32_t) u, &tmp);
			ret    = tmp;
			return s;
		}

		CONSTEXPR_MULTIPLY static void MultiplyThrow(const T& t, U u, T& ret) {
			static_assert(__details::IntTraits<T>::isUint64, "T must be Uint64");
			uint64_t t1  = t;
			uint64_t tmp = 0;
			LargeIntRegMultiply<uint64_t, int32_t>::RegMultiplyThrow(t1, (int32_t) u, &tmp);
			ret = tmp;
		}
	};

	template <class T, class U>
	class MultiplicationHelper<T, U, MultiplicationState_Uint64Int64> {
	   public:
		NODISCARD CONSTEXPR_MULTIPLY static bool Multiply(const T& t, const U& u, T& ret) noexcept {
			static_assert(__details::IntTraits<T>::isUint64 && __details::IntTraits<U>::isInt64,
			              "T must be Uint64, U Int64");
			uint64_t t1  = t;
			int64_t u1   = u;
			uint64_t tmp = 0;
			bool f       = LargeIntRegMultiply<uint64_t, int64_t>::RegMultiply(t1, u1, &tmp);
			ret          = tmp;
			return f;
		}

		NODISCARD CONSTEXPR_MULTIPLY static SaturatingStatus MultiplySat(const T& t, const U& u,
		                                                                 T& ret) noexcept {
			static_assert(__details::IntTraits<T>::isUint64 && __details::IntTraits<U>::isInt64,
			              "T must be Uint64, U Int64");
			uint64_t t1  = t;
			int64_t u1   = u;
			uint64_t tmp = 0;
			auto s       = LargeIntRegMultiply<uint64_t, int64_t>::RegMultiplySat(t1, u1, &tmp);
			ret          = tmp;
			return s;
		}

		CONSTEXPR_MULTIPLY static void MultiplyThrow(const T& t, const U& u, T& ret) {
			static_assert(__details::IntTraits<T>::isUint64 && __details::IntTraits<U>::isInt64,
			              "T must be Uint64, U Int64");
			uint64_t t1  = t;
			int64_t u1   = u;
			uint64_t tmp = 0;
			LargeIntRegMultiply<uint64_t, int64_t>::RegMultiplyThrow(t1, u1, &tmp);
			ret = tmp;
		}
	};

	template <class T, class U>
	class MultiplicationHelper<T, U, MultiplicationState_UintInt64> {
	   public:
		NODISCARD constexpr static bool Multiply(T t, const U& u, T& ret) noexcept {
			static_assert(__details::IntTraits<U>::isInt64, "U must be Int64");
			int64_t u1   = u;
			uint32_t tmp = 0;
			auto status =
			    LargeIntRegMultiply<uint32_t, int64_t>::RegMultiply((uint32_t) t, u1, &tmp);
			ret = tmp;
			if (status &&
			    SafeCastHelper<T, uint32_t, CastMethodHelper<T, uint32_t>::method>::Cast(tmp, ret))
				return true;
			return false;
		}

		NODISCARD constexpr static SaturatingStatus MultiplySat(T t, const U& u, T& ret) noexcept {
			static_assert(__details::IntTraits<U>::isInt64, "U must be Int64");
			int64_t u1   = u;
			uint32_t tmp = 0;
			auto s = LargeIntRegMultiply<uint32_t, int64_t>::RegMultiplySat((uint32_t) t, u1, &tmp);
			if (s == Saturating_NoOverflow) {
				if (tmp > std::numeric_limits<T>::max())
					return Saturating_Overflow;
				ret = tmp;
			}
			return s;
		}

		constexpr static void MultiplyThrow(T t, const U& u, T& ret) {
			static_assert(__details::IntTraits<U>::isInt64, "U must be Int64");
			int64_t u1   = u;
			uint32_t tmp = 0;
			LargeIntRegMultiply<uint32_t, int64_t>::RegMultiplyThrow((uint32_t) t, u1, &tmp);
			SafeCastHelper<T, uint32_t, CastMethodHelper<T, uint32_t>::method>::CastThrow(tmp, ret);
		}
	};

	template <class T, class U>
	class MultiplicationHelper<T, U, MultiplicationState_Int64Uint> {
	   public:
		NODISCARD CONSTEXPR_MULTIPLY static bool Multiply(const T& t, U u, T& ret) noexcept {
			static_assert(__details::IntTraits<T>::isInt64, "T must be Int64");
			int64_t t1  = t;
			int64_t tmp = 0;
			bool f = LargeIntRegMultiply<int64_t, uint32_t>::RegMultiply(t1, (uint32_t) u, &tmp);
			ret    = tmp;
			return f;
		}

		NODISCARD CONSTEXPR_MULTIPLY static SaturatingStatus MultiplySat(const T& t, U u,
		                                                                 T& ret) noexcept {
			static_assert(__details::IntTraits<T>::isInt64, "T must be Int64");
			int64_t t1  = t;
			int64_t tmp = 0;
			auto s = LargeIntRegMultiply<int64_t, uint32_t>::RegMultiplySat(t1, (uint32_t) u, &tmp);
			ret    = tmp;
			return s;
		}

		CONSTEXPR_MULTIPLY static void MultiplyThrow(const T& t, U u, T& ret) {
			static_assert(__details::IntTraits<T>::isInt64, "T must be Int64");
			int64_t t1  = t;
			int64_t tmp = 0;
			LargeIntRegMultiply<int64_t, uint32_t>::RegMultiplyThrow(t1, (uint32_t) u, &tmp);
			ret = tmp;
		}
	};

	template <class T, class U>
	class MultiplicationHelper<T, U, MultiplicationState_Int64Int64> {
	   public:
		NODISCARD CONSTEXPR_MULTIPLY static bool Multiply(const T& t, const U& u, T& ret) noexcept {
			static_assert(__details::IntTraits<T>::isInt64 && __details::IntTraits<U>::isInt64,
			              "T, U must be Int64");
			int64_t t1  = t;
			int64_t u1  = u;
			int64_t tmp = 0;
			bool f      = LargeIntRegMultiply<int64_t, int64_t>::RegMultiply(t1, u1, &tmp);
			ret         = tmp;
			return f;
		}

		NODISCARD CONSTEXPR_MULTIPLY static SaturatingStatus MultiplySat(const T& t, const U& u,
		                                                                 T& ret) noexcept {
			static_assert(__details::IntTraits<T>::isInt64 && __details::IntTraits<U>::isInt64,
			              "T, U must be Int64");
			int64_t t1  = t;
			int64_t u1  = u;
			int64_t tmp = 0;
			auto s      = LargeIntRegMultiply<int64_t, int64_t>::RegMultiplySat(t1, u1, &tmp);
			ret         = tmp;
			return s;
		}

		CONSTEXPR_MULTIPLY static void MultiplyThrow(const T& t, const U& u, T& ret) {
			static_assert(__details::IntTraits<T>::isInt64 && __details::IntTraits<U>::isInt64,
			              "T, U must be Int64");
			int64_t t1  = t;
			int64_t u1  = u;
			int64_t tmp = 0;
			LargeIntRegMultiply<int64_t, int64_t>::RegMultiplyThrow(t1, u1, &tmp);
			ret = tmp;
		}
	};

	template <class T, class U>
	class MultiplicationHelper<T, U, MultiplicationState_Int64Int> {
	   public:
		NODISCARD CONSTEXPR_MULTIPLY static bool Multiply(const T& t, U u, T& ret) noexcept {
			static_assert(__details::IntTraits<T>::isInt64, "T must be Int64");
			int64_t t1  = t;
			int64_t tmp = 0;
			bool f      = LargeIntRegMultiply<int64_t, int32_t>::RegMultiply(t1, (int32_t) u, &tmp);
			ret         = tmp;
			return f;
		}

		NODISCARD CONSTEXPR_MULTIPLY static SaturatingStatus MultiplySat(const T& t, U u,
		                                                                 T& ret) noexcept {
			static_assert(__details::IntTraits<T>::isInt64, "T must be Int64");
			int64_t t1  = t;
			int64_t tmp = 0;
			auto s = LargeIntRegMultiply<int64_t, int32_t>::RegMultiplySat(t1, (int32_t) u, &tmp);
			ret    = tmp;
			return s;
		}

		CONSTEXPR_MULTIPLY static void MultiplyThrow(const int64_t& t, U u, T& ret) {
			static_assert(__details::IntTraits<T>::isInt64, "T must be Int64");
			int64_t t1  = t;
			int64_t tmp = 0;
			LargeIntRegMultiply<int64_t, int32_t>::RegMultiplyThrow(t1, (int32_t) u, &tmp);
			ret = tmp;
		}
	};

	template <class T, class U>
	class MultiplicationHelper<T, U, MultiplicationState_IntUint64> {
	   public:
		NODISCARD constexpr static bool Multiply(T t, const U& u, T& ret) noexcept {
			static_assert(__details::IntTraits<U>::isUint64, "U must be Uint64");
			uint64_t u1 = u;
			int32_t tmp = 0;
			auto status =
			    LargeIntRegMultiply<int32_t, uint64_t>::RegMultiply((int32_t) t, u1, &tmp);
			ret = tmp;
			if (status &&
			    SafeCastHelper<T, int32_t, CastMethodHelper<T, int32_t>::method>::Cast(tmp, ret))
				return true;
			return false;
		}

		NODISCARD constexpr static SaturatingStatus MultiplySat(T t, const U& u, T& ret) noexcept {
			static_assert(__details::IntTraits<U>::isUint64, "U must be Uint64");
			uint64_t u1 = u;
			int32_t tmp = 0;
			auto s = LargeIntRegMultiply<int32_t, uint64_t>::RegMultiplySat((int32_t) t, u1, &tmp);
			if (s == Saturating_NoOverflow) {
				if (tmp < std::numeric_limits<T>::min())
					return Saturating_Underflow;
				if (tmp > std::numeric_limits<T>::max())
					return Saturating_Overflow;
				ret = tmp;
			}
			return s;
		}

		constexpr static void MultiplyThrow(T t, const U& u, T& ret) {
			static_assert(__details::IntTraits<U>::isUint64, "U must be Uint64");
			uint64_t u1 = u;
			int32_t tmp = 0;
			LargeIntRegMultiply<int32_t, uint64_t>::RegMultiplyThrow((int32_t) t, u1, &tmp);
			SafeCastHelper<T, int32_t, CastMethodHelper<T, int32_t>::method>::CastThrow(tmp, ret);
		}
	};

	template <class T, class U>
	class MultiplicationHelper<T, U, MultiplicationState_Int64Uint64> {
	   public:
		NODISCARD CONSTEXPR_MULTIPLY static bool Multiply(const T& t, const U& u, T& ret) noexcept {
			static_assert(__details::IntTraits<T>::isUint64 && __details::IntTraits<U>::isUint64,
			              "T, U must be Int64, Uint64");
			int64_t t1  = t;
			uint64_t u1 = u;
			int64_t tmp = 0;
			bool f      = LargeIntRegMultiply<int64_t, uint64_t>::RegMultiply(t1, u1, &tmp);
			ret         = tmp;
			return f;
		}

		NODISCARD CONSTEXPR_MULTIPLY static SaturatingStatus MultiplySat(const T& t, const U& u,
		                                                                 T& ret) noexcept {
			static_assert(__details::IntTraits<T>::isUint64 && __details::IntTraits<U>::isUint64,
			              "T, U must be Int64, Uint64");
			int64_t t1  = t;
			uint64_t u1 = u;
			int64_t tmp = 0;
			auto s      = LargeIntRegMultiply<int64_t, uint64_t>::RegMultiplySat(t1, u1, &tmp);
			ret         = tmp;
			return s;
		}

		CONSTEXPR_MULTIPLY static void MultiplyThrow(const int64_t& t, const uint64_t& u, T& ret) {
			static_assert(__details::IntTraits<T>::isUint64 && __details::IntTraits<U>::isUint64,
			              "T, U must be Int64, Uint64");
			int64_t t1  = t;
			uint64_t u1 = u;
			int64_t tmp = 0;
			LargeIntRegMultiply<int64_t, uint64_t>::RegMultiplyThrow(t1, u1, &tmp);
			ret = tmp;
		}
	};

	template <class T, class U>
	class MultiplicationHelper<T, U, MultiplicationState_IntInt64> {
	   public:
		NODISCARD constexpr static bool Multiply(T t, const U& u, T& ret) noexcept {
			static_assert(__details::IntTraits<U>::isInt64, "U must be Int64");
			int64_t u1  = u;
			int32_t tmp = 0;
			auto status = LargeIntRegMultiply<int32_t, int64_t>::RegMultiply(
			    (int32_t) t, u1,
			    &tmp);
			ret         = tmp;
			if (status &&
			    SafeCastHelper<T, int32_t, CastMethodHelper<T, int32_t>::method>::Cast(tmp, ret))
				return true;
			return false;
		}

		NODISCARD constexpr static SaturatingStatus MultiplySat(T t, const U& u, T& ret) noexcept {
			static_assert(__details::IntTraits<U>::isInt64, "U must be Int64");
			int64_t u1  = u;
			int32_t tmp = 0;
			auto s = LargeIntRegMultiply<int32_t, int64_t>::RegMultiplySat((int32_t) t, u1, &tmp);
			if (s == Saturating_NoOverflow) {
				if (tmp < std::numeric_limits<T>::min())
					return Saturating_Underflow;
				if (tmp > std::numeric_limits<T>::max())
					return Saturating_Overflow;
				ret = tmp;
			}
			return s;
		}

		constexpr static void MultiplyThrow(T t, const U& u, T& ret) {
			static_assert(__details::IntTraits<U>::isInt64, "U must be Int64");
			int64_t u1  = u;
			int32_t tmp = 0;
			LargeIntRegMultiply<int32_t, int64_t>::RegMultiplyThrow((int32_t) t, u1, &tmp);
			SafeCastHelper<T, int32_t, CastMethodHelper<T, int32_t>::method>::CastThrow(tmp, ret);
		}
	};

	enum DivisionState {
		DivisionState_OK,
		DivisionState_UnsignedSigned,
		DivisionState_SignedUnsigned32,
		DivisionState_SignedUnsigned64,
		DivisionState_SignedUnsigned,
		DivisionState_SignedSigned
	};

	template <typename T, typename U>
	class DivisionMethod {
	   public:
		enum {
			method = (__details::TypeCompare<T, U>::isBothUnsigned ? DivisionState_OK
			          : (!std::numeric_limits<T>::is_signed && std::numeric_limits<U>::is_signed)
			              ? DivisionState_UnsignedSigned
			          : (std::numeric_limits<T>::is_signed && __details::IntTraits<U>::isUint32 &&
			             __details::IntTraits<T>::isLT64Bit)
			              ? DivisionState_SignedUnsigned32
			          : (std::numeric_limits<T>::is_signed && __details::IntTraits<U>::isUint64)
			              ? DivisionState_SignedUnsigned64
			          : (std::numeric_limits<T>::is_signed && !std::numeric_limits<U>::is_signed)
			              ? DivisionState_SignedUnsigned
			              : DivisionState_SignedSigned)
		};
	};

	template <class T, class U, int state>
	class DivisionHelper;

	template <class T, class U>
	class DivisionHelper<T, U, DivisionState_OK> {
	   public:
		constexpr static SafeIntErrorCode Divide(const T& t, const U& u,
		                                                   T& result) noexcept {
			if (u == 0)
				return SafeInt_DivisionByZero;

			if (t == 0) {
				result = 0;
				return SafeInt_NoError;
			}

			result = (T) (t / u);
			return SafeInt_NoError;
		}

		constexpr static void DivideThrow(const T& t, const U& u, T& result) {
			if (u == 0)
				throw DivisionByZeroException();

			if (t == 0) {
				result = 0;
				return;
			}

			result = (T) (t / u);
		}
	};

	template <class T, class U>
	class DivisionHelper<T, U, DivisionState_UnsignedSigned> {
	   public:
		constexpr static SafeIntErrorCode Divide(const T& t, const U& u,
		                                                   T& result) noexcept {
			if (u == 0)
				return SafeInt_DivisionByZero;

			if (t == 0) {
				result = 0;
				return SafeInt_NoError;
			}

			if (u > 0) {
				result = (T) (t / u);
				return SafeInt_NoError;
			}

			result = 0;
			if (AbsValueHelper<U, AbsMethodHelper<U>::method>::Abs(u) > t) {
				return SafeInt_NoError;
			}

			return SafeInt_Overflow;
		}

		constexpr static void DivideThrow(const T& t, const U& u, T& result) {
			if (u == 0)
				throw DivisionByZeroException();

			if (t == 0) {
				result = 0;
				return;
			}

			if (u > 0) {
				result = (T) (t / u);
				return;
			}

			if (AbsValueHelper<U, AbsMethodHelper<U>::method>::Abs(u) > t) {
				result = 0;
				return;
			}

			throw IntegerOverflowException();
		}
	};

	template <class T, class U>
	class DivisionHelper<T, U, DivisionState_SignedUnsigned32> {
	   public:
		constexpr static SafeIntErrorCode Divide(const T& t, const U& u,
		                                                   T& result) noexcept {
			if (u == 0)
				return SafeInt_DivisionByZero;

			if (t == 0) {
				result = 0;
				return SafeInt_NoError;
			}

			if (t > 0) {
				result = (T) (t / u);
			} else {
				result = (T) ((int64_t) t / (int64_t) u);
			}

			return SafeInt_NoError;
		}

		constexpr static void DivideThrow(const T& t, const U& u, T& result) {
			if (u == 0)
				throw DivisionByZeroException();

			if (t == 0) {
				result = 0;
				return;
			}

			if (t > 0) {
				result = (T) (t / u);
			} else {
				result = (T) ((int64_t) t / (int64_t) u);
			}
		}
	};

	template <class T, class U, bool>
	class DivSignedUint64;

	template <class T, class U>
	class DivSignedUint64<T, U, true> {
	   public:
		NODISCARD constexpr static T Divide(T t, U u) { return (T) ((int32_t) t / (int32_t) u); }
	};

	template <class T, class U>
	class DivSignedUint64<T, U, false> {
	   public:
		NODISCARD constexpr static T Divide(T t, U u) { return (T) ((int64_t) t / (int64_t) u); }
	};

	template <class T, class U>
	class DivisionHelper<T, U, DivisionState_SignedUnsigned64> {
	   public:
		constexpr static SafeIntErrorCode Divide(const T& t, const U& u,
		                                                   T& result) noexcept {
			static_assert(__details::IntTraits<U>::isUint64, "U must be Uint64");
			if (u == 0)
				return SafeInt_DivisionByZero;

			if (t == 0) {
				result = 0;
				return SafeInt_NoError;
			}

			if (u <= (uint64_t) std::numeric_limits<T>::max()) {
				result = DivSignedUint64<T, U, (sizeof(T) < sizeof(int64_t))>::Divide(t, u);
			} else if (t == std::numeric_limits<T>::min() &&
			           u == (uint64_t) std::numeric_limits<T>::min()) {
				result = -1;
			} else {
				result = 0;
			}

			return SafeInt_NoError;
		}

		constexpr static void DivideThrow(const T& t, const U& u, T& result) {
			static_assert(__details::IntTraits<U>::isUint64, "U must be Uint64");
			if (u == 0)
				throw DivisionByZeroException();

			if (t == 0) {
				result = 0;
				return;
			}

			if (u <= (uint64_t) std::numeric_limits<T>::max()) {
				result = DivSignedUint64<T, U, (sizeof(T) < sizeof(int64_t))>::Divide(t, u);
			} else if (t == std::numeric_limits<T>::min() &&
			           u == (uint64_t) std::numeric_limits<T>::min()) {
				result = -1;
			} else {
				result = 0;
			}
		}
	};

	template <class T, class U>
	class DivisionHelper<T, U, DivisionState_SignedUnsigned> {
	   public:
		constexpr static SafeIntErrorCode Divide(const T& t, const U& u,
		                                                   T& result) noexcept {
			if (u == 0)
				return SafeInt_DivisionByZero;

			if (t == 0) {
				result = 0;
				return SafeInt_NoError;
			}

			result = (T) (t / u);
			return SafeInt_NoError;
		}

		constexpr static void DivideThrow(const T& t, const U& u, T& result) {
			if (u == 0)
				throw DivisionByZeroException();

			if (t == 0) {
				result = 0;
				return;
			}

			result = (T) (t / u);
		}
	};

	template <class T, class U>
	class DivisionHelper<T, U, DivisionState_SignedSigned> {
	   public:
		constexpr static SafeIntErrorCode Divide(const T& t, const U& u,
		                                                   T& result) noexcept {
			if (u == 0)
				return SafeInt_DivisionByZero;

			if (t == 0) {
				result = 0;
				return SafeInt_NoError;
			}

			if (t == std::numeric_limits<T>::min() && u == (U) -1) {
				result = t;
				return SafeInt_Overflow;
			}
			result = (T) (t / u);
			return SafeInt_NoError;
		}

		constexpr static void DivideThrow(const T& t, const U& u, T& result) {
			if (u == 0)
				throw DivisionByZeroException();

			if (t == 0) {
				result = 0;
				return;
			}

			if (t == std::numeric_limits<T>::min() && u == (U) -1)
				throw IntegerOverflowException();
			result = (T) (t / u);
		}
	};

	enum AdditionState {
		AdditionState_CastIntCheckMax,
		AdditionState_CastUintCheckOverflow,
		AdditionState_CastUintCheckOverflowMax,
		AdditionState_CastUint64CheckOverflow,
		AdditionState_CastUint64CheckOverflowMax,
		AdditionState_CastIntCheckSafeIntMinMax,
		AdditionState_CastInt64CheckSafeIntMinMax,
		AdditionState_CastInt64CheckMax,
		AdditionState_CastUint64CheckSafeIntMinMax,
		AdditionState_CastUint64CheckSafeIntMinMax2,
		AdditionState_CastInt64CheckOverflow,
		AdditionState_CastInt64CheckOverflowSafeIntMinMax,
		AdditionState_CastInt64CheckOverflowMax,
		AdditionState_ManualCheckInt64Uint64,
		AdditionState_ManualCheck,
		AdditionState_Error
	};

	template <typename T, typename U>
	class AdditionMethod {
	   public:
		enum {
			// unsigned-unsigned
			method =
			    (IntRegion<T, U>::IntZone_UintLT32_UintLT32   ? AdditionState_CastIntCheckMax
			     : (IntRegion<T, U>::IntZone_Uint32_UintLT64) ? AdditionState_CastUintCheckOverflow
			     : (IntRegion<T, U>::IntZone_UintLT32_Uint32)
			         ? AdditionState_CastUintCheckOverflowMax
			     : (IntRegion<T, U>::IntZone_Uint64_Uint) ? AdditionState_CastUint64CheckOverflow
			     : (IntRegion<T, U>::IntZone_UintLT64_Uint64)
			         ? AdditionState_CastUint64CheckOverflowMax
			         :
			         // unsigned-signed
			         (IntRegion<T, U>::IntZone_UintLT32_IntLT32)
			         ? AdditionState_CastIntCheckSafeIntMinMax
			     : (IntRegion<T, U>::IntZone_Uint32_IntLT64 ||
			        IntRegion<T, U>::IntZone_UintLT32_Int32)
			         ? AdditionState_CastInt64CheckSafeIntMinMax
			     : (IntRegion<T, U>::IntZone_Uint64_Int || IntRegion<T, U>::IntZone_Uint64_Int64)
			         ? AdditionState_CastUint64CheckSafeIntMinMax
			     : (IntRegion<T, U>::IntZone_UintLT64_Int64)
			         ? AdditionState_CastUint64CheckSafeIntMinMax2
			         :
			         // signed-signed
			         (IntRegion<T, U>::IntZone_IntLT32_IntLT32)
			         ? AdditionState_CastIntCheckSafeIntMinMax
			     : (IntRegion<T, U>::IntZone_Int32_IntLT64 ||
			        IntRegion<T, U>::IntZone_IntLT32_Int32)
			         ? AdditionState_CastInt64CheckSafeIntMinMax
			     : (IntRegion<T, U>::IntZone_Int64_Int || IntRegion<T, U>::IntZone_Int64_Int64)
			         ? AdditionState_CastInt64CheckOverflow
			     : (IntRegion<T, U>::IntZone_IntLT64_Int64)
			         ? AdditionState_CastInt64CheckOverflowSafeIntMinMax
			         :
			         // signed-unsigned
			         (IntRegion<T, U>::IntZone_IntLT32_UintLT32) ? AdditionState_CastIntCheckMax
			     : (IntRegion<T, U>::IntZone_Int32_UintLT32 ||
			        IntRegion<T, U>::IntZone_IntLT64_Uint32)
			         ? AdditionState_CastInt64CheckMax
			     : (IntRegion<T, U>::IntZone_Int64_UintLT64)
			         ? AdditionState_CastInt64CheckOverflowMax
			     : (IntRegion<T, U>::IntZone_Int64_Uint64) ? AdditionState_ManualCheckInt64Uint64
			     : (IntRegion<T, U>::IntZone_Int_Uint64)   ? AdditionState_ManualCheck
			                                               : AdditionState_Error)
		};
	};

	template <class T, class U, int method>
	class AdditionHelper;

	template <class T, class U>
	class AdditionHelper<T, U, AdditionState_CastIntCheckMax> {
	   public:
		NODISCARD constexpr static bool Addition(const T& t, const U& u, T& result) noexcept {
			int32_t tmp = t + u;
			result      = (T) tmp;
			if (tmp <= (int32_t) std::numeric_limits<T>::max()) {
				return true;
			}
			return false;
		}

		NODISCARD constexpr static SaturatingStatus AdditionSat(const T& t, const U& u,
		                                                        T& result) noexcept {
			int32_t tmp = t + u;
			if (tmp <= (int32_t) std::numeric_limits<T>::max()) {
				result = (T) tmp;
				return Saturating_NoOverflow;
			}
			return Saturating_Overflow;
		}

		constexpr static void AdditionThrow(const T& t, const U& u, T& result) {
			int32_t tmp = t + u;
			if (tmp <= (int32_t) std::numeric_limits<T>::max()) {
				result = (T) tmp;
				return;
			}
			throw IntegerOverflowException();
		}
	};

	template <class T, class U>
	class AdditionHelper<T, U, AdditionState_CastUintCheckOverflow> {
	   public:
		NODISCARD constexpr static bool Addition(const T& t, const U& u, T& result) noexcept {
			uint32_t tmp = (uint32_t) t + (uint32_t) u;
			result = (T) tmp;
			return tmp >= t;
		}

		NODISCARD constexpr static SaturatingStatus AdditionSat(const T& t, const U& u,
		                                                        T& result) noexcept {
			uint32_t tmp = (uint32_t) t + (uint32_t) u;
			if (tmp >= t) {
				result = (T) tmp;
				return Saturating_NoOverflow;
			}
			return Saturating_Overflow;
		}

		constexpr static void AdditionThrow(const T& t, const U& u, T& result) {
			uint32_t tmp = (uint32_t) t + (uint32_t) u;
			if (tmp >= t) {
				result = (T) tmp;
				return;
			}
			throw IntegerOverflowException();
		}
	};

	template <class T, class U>
	class AdditionHelper<T, U, AdditionState_CastUintCheckOverflowMax> {
	   public:
		NODISCARD constexpr static bool Addition(const T& t, const U& u, T& result) noexcept {
			uint32_t tmp = (uint32_t) t + (uint32_t) u;
			result = (T) tmp;
			return tmp >= t && tmp <= std::numeric_limits<T>::max();
		}

		constexpr static SaturatingStatus AdditionSat(const T& t, const U& u, T& result) noexcept {
			uint32_t tmp = (uint32_t) t + (uint32_t) u;
			if (tmp >= t && tmp <= std::numeric_limits<T>::max()) {
				result = (T) tmp;
				return Saturating_NoOverflow;
			}
			return Saturating_Overflow;
		}

		constexpr static void AdditionThrow(const T& t, const U& u, T& result) {
			uint32_t tmp = (uint32_t) t + (uint32_t) u;
			if (tmp >= t && tmp <= std::numeric_limits<T>::max()) {
				result = (T) tmp;
				return;
			}
			throw IntegerOverflowException();
		}
	};

	template <class T, class U>
	class AdditionHelper<T, U, AdditionState_CastUint64CheckOverflow> {
	   public:
		NODISCARD constexpr static bool Addition(const T& t, const U& u, T& result) noexcept {
			uint64_t tmp = (uint64_t) t + (uint64_t) u;
			result       = (T) tmp;
			return tmp >= t;
		}

		NODISCARD constexpr static SaturatingStatus AdditionSat(const T& t, const U& u,
		                                                        T& result) noexcept {
			uint64_t tmp = (uint64_t) t + (uint64_t) u;
			if (tmp >= t) {
				result = (T) tmp;
				return Saturating_NoOverflow;
			}
			return Saturating_Overflow;
		}

		constexpr static void AdditionThrow(const T& t, const U& u, T& result) {
			uint64_t tmp = (uint64_t) t + (uint64_t) u;
			if (tmp >= t) {
				result = (T) tmp;
				return;
			}
			throw IntegerOverflowException();
		}
	};

	template <class T, class U>
	class AdditionHelper<T, U, AdditionState_CastUint64CheckOverflowMax> {
	   public:
		NODISCARD constexpr static bool Addition(const T& t, const U& u, T& result) noexcept {
			uint64_t tmp = (uint64_t) t + (uint64_t) u;
			result = (T) tmp;
			return tmp >= t && tmp <= std::numeric_limits<T>::max();
		}

		NODISCARD constexpr static SaturatingStatus AdditionSat(const T& t, const U& u,
		                                                        T& result) noexcept {
			uint64_t tmp = (uint64_t) t + (uint64_t) u;
			if (tmp >= t && tmp <= std::numeric_limits<T>::max()) {
				result = (T) tmp;
				return Saturating_NoOverflow;
			}
			return Saturating_Overflow;
		}

		constexpr static void AdditionThrow(const T& t, const U& u, T& result) {
			uint64_t tmp = (uint64_t) t + (uint64_t) u;
			if (tmp >= t && tmp <= std::numeric_limits<T>::max()) {
				result = (T) tmp;
				return;
			}
			throw IntegerOverflowException();
		}
	};

	template <class T, class U>
	class AdditionHelper<T, U, AdditionState_CastIntCheckSafeIntMinMax> {
	   public:
		NODISCARD constexpr static bool Addition(const T& t, const U& u, T& result) noexcept {
			int32_t tmp = t + u;
			result      = (T) tmp;
			return tmp <= (int32_t) std::numeric_limits<T>::max() &&
			       tmp >= (int32_t) std::numeric_limits<T>::min();
		}

		NODISCARD constexpr static SaturatingStatus AdditionSat(const T& t, const U& u,
		                                                        T& result) noexcept {
			int32_t tmp = t + u;
			if (tmp > (int32_t) std::numeric_limits<T>::max())
				return Saturating_Overflow;
			if (tmp < (int32_t) std::numeric_limits<T>::min())
				return Saturating_Underflow;
			result = (T) tmp;
			return Saturating_NoOverflow;
		}

		constexpr static void AdditionThrow(const T& t, const U& u, T& result) {
			int32_t tmp = t + u;
			if (tmp <= (int32_t) std::numeric_limits<T>::max() &&
			    tmp >= (int32_t) std::numeric_limits<T>::min()) {
				result = (T) tmp;
				return;
			}
			throw IntegerOverflowException();
		}
	};

	template <class T, class U>
	class AdditionHelper<T, U, AdditionState_CastInt64CheckSafeIntMinMax> {
	   public:
		NODISCARD constexpr static bool Addition(const T& t, const U& u, T& result) noexcept {
			int64_t tmp = (int64_t) t + (int64_t) u;
			result      = (T) tmp;
			return tmp <= (int64_t) std::numeric_limits<T>::max() &&
			       tmp >= (int64_t) std::numeric_limits<T>::min();
		}

		NODISCARD constexpr static SaturatingStatus AdditionSat(const T& t, const U& u,
		                                                        T& result) noexcept {
			int64_t tmp = (int64_t) t + (int64_t) u;
			if (tmp > (int64_t) std::numeric_limits<T>::max())
				return Saturating_Overflow;
			if (tmp < (int64_t) std::numeric_limits<T>::min())
				return Saturating_Underflow;
			result = (T) tmp;
			return Saturating_NoOverflow;
		}

		constexpr static void AdditionThrow(const T& t, const U& u, T& result) {
			int64_t tmp = (int64_t) t + (int64_t) u;
			if (tmp <= (int64_t) std::numeric_limits<T>::max() &&
			    tmp >= (int64_t) std::numeric_limits<T>::min()) {
				result = (T) tmp;
				return;
			}
			throw IntegerOverflowException();
		}
	};

	template <class T, class U>
	class AdditionHelper<T, U, AdditionState_CastInt64CheckMax> {
	   public:
		NODISCARD constexpr static bool Addition(const T& t, const U& u, T& result) noexcept {
			int64_t tmp = (int64_t) t + (int64_t) u;
			result      = (T) tmp;
			return tmp <= std::numeric_limits<T>::max();
		}

		NODISCARD constexpr static SaturatingStatus AdditionSat(const T& t, const U& u,
		                                                        T& result) noexcept {
			int64_t tmp = (int64_t) t + (int64_t) u;
			if (tmp <= std::numeric_limits<T>::max()) {
				result = (T) tmp;
				return Saturating_NoOverflow;
			}
			return Saturating_Overflow;
		}

		constexpr static void AdditionThrow(const T& t, const U& u, T& result) {
			int64_t tmp = (int64_t) t + (int64_t) u;
			if (tmp <= std::numeric_limits<T>::max()) {
				result = (T) tmp;
				return;
			}
			throw IntegerOverflowException();
		}
	};

	template <class T, class U>
	class AdditionHelper<T, U, AdditionState_CastUint64CheckSafeIntMinMax> {
	   public:
		NODISCARD constexpr static bool Addition(const T& t, const U& u, T& result) noexcept {
			uint64_t tmp = 0;
			if (u < 0) {
				tmp    = AbsValueHelper<U, AbsMethodHelper<U>::method>::Abs(u);
				result = t - tmp;
				return tmp <= t;
			} else {
				tmp    = (uint64_t) t + (uint64_t) u;
				result = (T) tmp;
				return tmp >= t;
			}
		}

		NODISCARD constexpr static SaturatingStatus AdditionSat(const T& t, const U& u,
		                                                        T& result) noexcept {
			uint64_t tmp = 0;
			if (u < 0) {
				tmp = AbsValueHelper<U, AbsMethodHelper<U>::method>::Abs(u);
				if (tmp <= t) {
					result = t - tmp;
					return Saturating_NoOverflow;
				}
				return Saturating_Underflow;
			} else {
				tmp = (uint64_t) t + (uint64_t) u;
				if (tmp >= t) {
					result = (T) tmp;
					return Saturating_NoOverflow;
				}
			}
			return Saturating_Overflow;
		}

		constexpr static void AdditionThrow(const T& t, const U& u, T& result) {
			uint64_t tmp = 0;
			if (u < 0) {
				tmp = AbsValueHelper<U, AbsMethodHelper<U>::method>::Abs(u);
				if (tmp <= t) {
					result = t - tmp;
					return;
				}
			} else {
				tmp = (uint64_t) t + (uint64_t) u;
				if (tmp >= t) {
					result = (T) tmp;
					return;
				}
			}
			throw IntegerOverflowException();
		}
	};

	template <class T, class U>
	class AdditionHelper<T, U, AdditionState_CastUint64CheckSafeIntMinMax2> {
	   public:
		NODISCARD constexpr static bool Addition(const T& t, const U& u, T& result) noexcept {
			if (u < 0) {
				result = (T) (t + u);
				return t >= ~(uint64_t) (u) + 1;
			} else {
				uint64_t tmp = (uint64_t) t + (uint64_t) u;
				result       = (T) tmp;
				return tmp <= std::numeric_limits<T>::max();
			}
		}

		NODISCARD constexpr static SaturatingStatus AdditionSat(const T& t, const U& u,
		                                                        T& result) noexcept {
			if (u < 0) {
				if (t >= ~(uint64_t) (u) + 1) {
					result = (T) (t + u);
					return Saturating_NoOverflow;
				}
				return Saturating_Underflow;
			} else {
				uint64_t tmp = (uint64_t) t + (uint64_t) u;
				if (tmp <= std::numeric_limits<T>::max()) {
					result = (T) tmp;
					return Saturating_NoOverflow;
				}
			}
			return Saturating_Overflow;
		}

		constexpr static void AdditionThrow(const T& t, const U& u, T& result) {
			if (u < 0) {
				if (t >= ~(uint64_t) (u) + 1) {
					result = (T) (t + u);
					return;
				}
			} else {
				uint64_t tmp = (uint64_t) t + (uint64_t) u;
				if (tmp <= std::numeric_limits<T>::max()) {
					result = (T) tmp;
					return;
				}
			}
			throw IntegerOverflowException();
		}
	};

	template <class T, class U>
	class AdditionHelper<T, U, AdditionState_CastInt64CheckOverflow> {
	   public:
		NODISCARD constexpr static bool Addition(const T& t, const U& u, T& result) noexcept {
			int64_t tmp = (int64_t) ((uint64_t) t + (uint64_t) u);
			result      = (T) tmp;
			if (t >= 0) {
				if (u >= 0 && tmp < t)
					return false;
			} else {
				if (u < 0 && tmp > t)
					return false;
			}

			return true;
		}

		NODISCARD constexpr static SaturatingStatus AdditionSat(const T& t, const U& u,
		                                                        T& result) noexcept {
			int64_t tmp = (int64_t) ((uint64_t) t + (uint64_t) u);
			if (t >= 0) {
				if (u >= 0 && tmp < t)
					return Saturating_Overflow;
			} else {
				if (u < 0 && tmp > t)
					return Saturating_Underflow;
			}

			result = (T) tmp;
			return Saturating_NoOverflow;
		}

		constexpr static void AdditionThrow(const T& t, const U& u, T& result) {
			int64_t tmp = (int64_t) ((uint64_t) t + (uint64_t) u);
			if (t >= 0) {
				if (u >= 0 && tmp < t)
					throw IntegerOverflowException();
			} else {
				if (u < 0 && tmp > t)
					throw IntegerOverflowException();
			}

			result = (T) tmp;
		}
	};

	template <class T, class U>
	class AdditionHelper<T, U, AdditionState_CastInt64CheckOverflowSafeIntMinMax> {
	   public:
		NODISCARD constexpr static bool Addition(const T& t, const U& u, T& result) noexcept {
			int64_t tmp = 0;
			bool safe =
			    AdditionHelper<int64_t, int64_t, AdditionState_CastInt64CheckOverflow>::Addition(
			        (int64_t) t, (int64_t) u, tmp);
			result = (T) tmp;
			if (safe &&
			    tmp <= std::numeric_limits<T>::max() && tmp >= std::numeric_limits<T>::min()) {
				return true;
			}

			return false;
		}

		NODISCARD constexpr static SaturatingStatus AdditionSat(const T& t, const U& u,
		                                                        T& result) noexcept {
			int64_t tmp = 0;
			auto status =
			    AdditionHelper<int64_t, int64_t, AdditionState_CastInt64CheckOverflow>::Addition(
			        (int64_t) t, (int64_t) u, tmp);
			if (status != Saturating_NoOverflow)
				return status;
			if (tmp > std::numeric_limits<T>::max())
				return Saturating_Overflow;
			if (tmp < std::numeric_limits<T>::min())
				return Saturating_Underflow;
			result = (T) tmp;
			return Saturating_NoOverflow;
		}

		constexpr static void AdditionThrow(const T& t, const U& u, T& result) {
			int64_t tmp = 0;
			AdditionHelper<int64_t, int64_t, AdditionState_CastInt64CheckOverflow>::AdditionThrow(
			    (int64_t) t, (int64_t) u, tmp);
			if (tmp <= std::numeric_limits<T>::max() && tmp >= std::numeric_limits<T>::min()) {
				result = (T) tmp;
				return;
			}

			throw IntegerOverflowException();
		}
	};

	template <class T, class U>
	class AdditionHelper<T, U, AdditionState_CastInt64CheckOverflowMax> {
	   public:
		NODISCARD constexpr static bool Addition(const T& t, const U& u, T& result) noexcept {
			uint64_t tmp = (uint64_t) t + (uint64_t) u;
			result       = (T) (int64_t) tmp;
			if ((int64_t) tmp >= t) {
				return true;
			}

			return false;
		}

		NODISCARD constexpr static SaturatingStatus AdditionSat(const T& t, const U& u,
		                                                        T& result) noexcept {
			uint64_t tmp = (uint64_t) t + (uint64_t) u;
			if ((int64_t) tmp >= t) {
				result = (T) (int64_t) tmp;
				return Saturating_NoOverflow;
			}

			return Saturating_Overflow;
		}

		constexpr static void AdditionThrow(const T& t, const U& u, T& result) {
			uint64_t tmp = (uint64_t) t + (uint64_t) u;
			if ((int64_t) tmp >= t) {
				result = (T) (int64_t) tmp;
				return;
			}

			throw IntegerOverflowException();
		}
	};

	template <class T, class U>
	class AdditionHelper<T, U, AdditionState_ManualCheckInt64Uint64> {
	   public:
		NODISCARD constexpr static bool Addition(const T& t, const U& u, T& result) noexcept {
			static_assert(__details::IntTraits<T>::isInt64 && __details::IntTraits<T>::isUint64,
			              "T must be Int64, U Uint64");
			uint64_t tmp = (uint64_t) t + u;
			result       = (int64_t) tmp;
			if ((int64_t) tmp >= t) {
				return true;
			}

			//result = 0;
			return false;
		}

		NODISCARD constexpr static SaturatingStatus AdditionSat(const T& t, const U& u,
		                                                     T& result) noexcept {
			static_assert(__details::IntTraits<T>::isInt64 && __details::IntTraits<T>::isUint64,
			              "T must be Int64, U Uint64");
			uint64_t tmp = (uint64_t) t + u;
			if ((int64_t) tmp >= t) {
				result = (int64_t) tmp;
				return Saturating_NoOverflow;
			}

			result = 0;
			return Saturating_Overflow;
		}

		constexpr static void AdditionThrow(const T& t, const U& u, T& result) {
			static_assert(__details::IntTraits<T>::isInt64 && __details::IntTraits<T>::isUint64,
			              "T must be Int64, U Uint64");
			uint64_t tmp = (uint64_t) t + u;
			if ((int64_t) tmp >= t) {
				result = (int64_t) tmp;
				return;
			}

			throw IntegerOverflowException();
		}
	};

	template <class T, class U>
	class AdditionHelper<T, U, AdditionState_ManualCheck> {
	   public:
		NODISCARD constexpr static bool Addition(const T& t, const U& u, T& result) noexcept {
			uint32_t tmp = (uint32_t) t + (uint32_t) u;
			if ((uint32_t) (u >> 32) == 0) {
				if ((int32_t) tmp >= t &&
				    SafeCastHelper<T, int32_t, CastMethodHelper<T, int32_t>::method>::Cast(
				        (int32_t) tmp, result))
					return true;
			}

			return false;
		}

		NODISCARD constexpr static SaturatingStatus AdditionSat(const T& t, const U& u,
		                                                        T& result) noexcept {
			if ((uint32_t) (u >> 32) == 0) {
				uint32_t tmp = (uint32_t) t + (uint32_t) u;
				if ((int32_t) tmp >= t &&
				    SafeCastHelper<T, int32_t, CastMethodHelper<T, int32_t>::method>::Cast(
				        (int32_t) tmp, result))
					return Saturating_NoOverflow;
			}

			return Saturating_Overflow;
		}

		constexpr static void AdditionThrow(const T& t, const U& u, T& result) {
			if ((uint32_t) (u >> 32) == 0) {
				uint32_t tmp = (uint32_t) t + (uint32_t) u;
				if ((int32_t) tmp >= t) {
					SafeCastHelper<T, int32_t, CastMethodHelper<T, int32_t>::method>::CastThrow(
					    (int32_t) tmp, result);
					return;
				}
			}

			throw IntegerOverflowException();
		}
	};

	enum SubtractionState {
		SubtractionState_BothUnsigned,
		SubtractionState_CastIntCheckSafeIntMinMax,
		SubtractionState_CastIntCheckMin,
		SubtractionState_CastInt64CheckSafeIntMinMax,
		SubtractionState_CastInt64CheckMin,
		SubtractionState_Uint64Int,
		SubtractionState_UintInt64,
		SubtractionState_Int64Int,
		SubtractionState_IntInt64,
		SubtractionState_Int64Uint,
		SubtractionState_IntUint64,
		SubtractionState_Int64Uint64,
		// states for SubtractionMethod2
		SubtractionState_BothUnsigned2,
		SubtractionState_CastIntCheckSafeIntMinMax2,
		SubtractionState_CastInt64CheckSafeIntMinMax2,
		SubtractionState_Uint64Int2,
		SubtractionState_UintInt642,
		SubtractionState_Int64Int2,
		SubtractionState_IntInt642,
		SubtractionState_Int64Uint2,
		SubtractionState_IntUint642,
		SubtractionState_Int64Uint642,
		SubtractionState_Error
	};

	template <typename T, typename U>
	class SubtractionMethod {
	   public:
		enum {
			// unsigned-unsigned
			method =
			    ((IntRegion<T, U>::IntZone_UintLT32_UintLT32 ||
			      (IntRegion<T, U>::IntZone_Uint32_UintLT64) ||
			      (IntRegion<T, U>::IntZone_UintLT32_Uint32) ||
			      (IntRegion<T, U>::IntZone_Uint64_Uint) ||
			      (IntRegion<T, U>::IntZone_UintLT64_Uint64))
			         ? SubtractionState_BothUnsigned
			         :
			         // unsigned-signed
			         (IntRegion<T, U>::IntZone_UintLT32_IntLT32)
			         ? SubtractionState_CastIntCheckSafeIntMinMax
			     : (IntRegion<T, U>::IntZone_Uint32_IntLT64 ||
			        IntRegion<T, U>::IntZone_UintLT32_Int32)
			         ? SubtractionState_CastInt64CheckSafeIntMinMax
			     : (IntRegion<T, U>::IntZone_Uint64_Int || IntRegion<T, U>::IntZone_Uint64_Int64)
			         ? SubtractionState_Uint64Int
			     : (IntRegion<T, U>::IntZone_UintLT64_Int64) ? SubtractionState_UintInt64
			                                                 :
			                                                 // signed-signed
			         (IntRegion<T, U>::IntZone_IntLT32_IntLT32)
			         ? SubtractionState_CastIntCheckSafeIntMinMax
			     : (IntRegion<T, U>::IntZone_Int32_IntLT64 ||
			        IntRegion<T, U>::IntZone_IntLT32_Int32)
			         ? SubtractionState_CastInt64CheckSafeIntMinMax
			     : (IntRegion<T, U>::IntZone_Int64_Int || IntRegion<T, U>::IntZone_Int64_Int64)
			         ? SubtractionState_Int64Int
			     : (IntRegion<T, U>::IntZone_IntLT64_Int64) ? SubtractionState_IntInt64
			     : (IntRegion<T, U>::IntZone_IntLT64_Int64) ? SubtractionState_IntInt64
			                                                :
			                                                // signed-unsigned
			         (IntRegion<T, U>::IntZone_IntLT32_UintLT32) ? SubtractionState_CastIntCheckMin
			     : (IntRegion<T, U>::IntZone_Int32_UintLT32 ||
			        IntRegion<T, U>::IntZone_IntLT64_Uint32)
			         ? SubtractionState_CastInt64CheckMin
			     : (IntRegion<T, U>::IntZone_Int64_UintLT64) ? SubtractionState_Int64Uint
			     : (IntRegion<T, U>::IntZone_Int_Uint64)     ? SubtractionState_IntUint64
			     : (IntRegion<T, U>::IntZone_Int64_Uint64)   ? SubtractionState_Int64Uint64
			                                                 : SubtractionState_Error)
		};
	};

	// this is for the case of U - SafeInt< T, E >
	template <typename T, typename U>
	class SubtractionMethod2 {
	   public:
		enum {
			// unsigned-unsigned
			method =
			    ((IntRegion<T, U>::IntZone_UintLT32_UintLT32 ||
			      (IntRegion<T, U>::IntZone_Uint32_UintLT64) ||
			      (IntRegion<T, U>::IntZone_UintLT32_Uint32) ||
			      (IntRegion<T, U>::IntZone_Uint64_Uint) ||
			      (IntRegion<T, U>::IntZone_UintLT64_Uint64))
			         ? SubtractionState_BothUnsigned2
			         :
			         // unsigned-signed
			         (IntRegion<T, U>::IntZone_UintLT32_IntLT32)
			         ? SubtractionState_CastIntCheckSafeIntMinMax2
			     : (IntRegion<T, U>::IntZone_Uint32_IntLT64 ||
			        IntRegion<T, U>::IntZone_UintLT32_Int32)
			         ? SubtractionState_CastInt64CheckSafeIntMinMax2
			     : (IntRegion<T, U>::IntZone_Uint64_Int || IntRegion<T, U>::IntZone_Uint64_Int64)
			         ? SubtractionState_Uint64Int2
			     : (IntRegion<T, U>::IntZone_UintLT64_Int64) ? SubtractionState_UintInt642
			                                                 :
			                                                 // signed-signed
			         (IntRegion<T, U>::IntZone_IntLT32_IntLT32)
			         ? SubtractionState_CastIntCheckSafeIntMinMax2
			     : (IntRegion<T, U>::IntZone_Int32_IntLT64 ||
			        IntRegion<T, U>::IntZone_IntLT32_Int32)
			         ? SubtractionState_CastInt64CheckSafeIntMinMax2
			     : (IntRegion<T, U>::IntZone_Int64_Int || IntRegion<T, U>::IntZone_Int64_Int64)
			         ? SubtractionState_Int64Int2
			     : (IntRegion<T, U>::IntZone_IntLT64_Int64) ? SubtractionState_IntInt642
			                                                :
			                                                // signed-unsigned
			         (IntRegion<T, U>::IntZone_IntLT32_UintLT32)
			         ? SubtractionState_CastIntCheckSafeIntMinMax2
			     : (IntRegion<T, U>::IntZone_Int32_UintLT32 ||
			        IntRegion<T, U>::IntZone_IntLT64_Uint32)
			         ? SubtractionState_CastInt64CheckSafeIntMinMax2
			     : (IntRegion<T, U>::IntZone_Int64_UintLT64) ? SubtractionState_Int64Uint2
			     : (IntRegion<T, U>::IntZone_Int_Uint64)     ? SubtractionState_IntUint642
			     : (IntRegion<T, U>::IntZone_Int64_Uint64)   ? SubtractionState_Int64Uint642
			                                                 : SubtractionState_Error)
		};
	};

	template <class T, class U, int method>
	class SubtractionHelper;

	template <class T, class U>
	class SubtractionHelper<T, U, SubtractionState_BothUnsigned> {
	   public:
		NODISCARD constexpr static bool Subtract(const T& t, const U& u, T& result) noexcept {
			result = (T) (t - u);
			if (u <= t) {
				return true;
			}
			return false;
		}

		NODISCARD constexpr static SaturatingStatus SubtractSat(const T& t, const U& u,
		                                                        T& result) noexcept {
			if (u <= t) {
				result = (T) (t - u);
				return Saturating_NoOverflow;
			}
			return Saturating_Underflow;
		}

		constexpr static void SubtractThrow(const T& t, const U& u, T& result) {
			if (u <= t) {
				result = (T) (t - u);
				return;
			}
			throw IntegerOverflowException();
		}
	};

	template <class T, class U>
	class SubtractionHelper<T, U, SubtractionState_BothUnsigned2> {
	   public:
		NODISCARD constexpr static bool Subtract(const T& t, const U& u, U& result) noexcept {
			if (u <= t) {
				T tmp = (T) (t - u);
				return SafeCastHelper<U, T, CastMethodHelper<U, T>::method>::Cast(tmp, result);
			}
			return false;
		}

		NODISCARD constexpr static SaturatingStatus SubtractSat(const T& t, const U& u,
		                                                        U& result) noexcept {
			if (u <= t) {
				T tmp = (T) (t - u);
				if (SafeCastHelper<U, T, CastMethodHelper<U, T>::method>::Cast(tmp, result))
					return Saturating_NoOverflow;
				return Saturating_Overflow;
			}
			return Saturating_Underflow;
		}

		constexpr static void SubtractThrow(const T& t, const U& u, U& result) {
			if (u <= t) {
				T tmp = (T) (t - u);
				SafeCastHelper<U, T, CastMethodHelper<U, T>::method>::CastThrow(tmp, result);
				return;
			}
			throw IntegerOverflowException();
		}
	};

	template <class T, class U>
	class SubtractionHelper<T, U, SubtractionState_CastIntCheckSafeIntMinMax> {
	   public:
		NODISCARD constexpr static bool Subtract(const T& t, const U& u, T& result) noexcept {
			int32_t tmp = t - u;
			result      = (T) tmp;
			if (SafeCastHelper<T, int32_t, CastMethodHelper<T, int32_t>::method>::Cast(tmp,
			                                                                           result)) {
				return true;
			}
			return false;
		}

		NODISCARD constexpr static SaturatingStatus SubtractSat(const T& t, const U& u,
		                                                        T& result) noexcept {
			int32_t tmp = t - u;
			if (SafeCastHelper<T, int32_t, CastMethodHelper<T, int32_t>::method>::Cast(tmp,
			                                                                           result)) {
				result = (T) tmp;
				return Saturating_NoOverflow;
			}
			if (tmp > std::numeric_limits<T>::max())
				return Saturating_Overflow;
			return Saturating_Underflow;
		}

		constexpr static void SubtractThrow(const T& t, const U& u, T& result) {
			int32_t tmp = t - u;
			SafeCastHelper<T, int32_t, CastMethodHelper<T, int32_t>::method>::CastThrow(tmp,
			                                                                            result);
		}
	};

	template <class T, class U>
	class SubtractionHelper<T, U, SubtractionState_CastIntCheckSafeIntMinMax2> {
	   public:
		NODISCARD constexpr static bool Subtract(const U& t, const T& u, T& result) noexcept {
			int32_t tmp = t - u;
			return SafeCastHelper<T, int32_t, CastMethodHelper<T, int32_t>::method>::Cast(tmp,
			                                                                              result);
		}

		NODISCARD constexpr static SaturatingStatus Subtract(const U& t, const T& u,
		                                                     T& result) noexcept {
			int32_t tmp = t - u;
			if (SafeCastHelper<T, int32_t, CastMethodHelper<T, int32_t>::method>::Cast(tmp,
			                                                                           result)) {
				return Saturating_NoOverflow;
			}
			if (tmp > std::numeric_limits<T>::max())
				return Saturating_Overflow;
			return Saturating_Underflow;
		}

		constexpr static void SubtractThrow(const U& t, const T& u, T& result) {
			int32_t tmp = t - u;
			SafeCastHelper<T, int32_t, CastMethodHelper<T, int32_t>::method>::CastThrow(tmp,
			                                                                            result);
		}
	};

	template <class T, class U>
	class SubtractionHelper<T, U, SubtractionState_CastIntCheckMin> {
	   public:
		NODISCARD constexpr static bool Subtract(const T& t, const U& u, T& result) noexcept {
			int32_t tmp = t - u;
			result      = (T) tmp;
			if (tmp >= (int32_t) std::numeric_limits<T>::min()) {
				return true;
			}
			return false;
		}

		NODISCARD constexpr static SaturatingStatus SubtractSat(const T& t, const U& u,
		                                                        T& result) noexcept {
			int32_t tmp = t - u;
			if (tmp >= (int32_t) std::numeric_limits<T>::min()) {
				result = (T) tmp;
				return Saturating_NoOverflow;
			}
			return Saturating_Underflow;
		}

		constexpr static void SubtractThrow(const T& t, const U& u, T& result) {
			int32_t tmp = t - u;
			if (tmp >= (int32_t) std::numeric_limits<T>::min()) {
				result = (T) tmp;
				return;
			}
			throw IntegerOverflowException();
		}
	};

	template <class T, class U>
	class SubtractionHelper<T, U, SubtractionState_CastInt64CheckSafeIntMinMax> {
	   public:
		NODISCARD constexpr static bool Subtract(const T& t, const U& u, T& result) noexcept {
			int64_t tmp = (int64_t) t - (int64_t) u;
			result      = (T) tmp;
			return SafeCastHelper<T, int64_t, CastMethodHelper<T, int64_t>::method>::Cast(tmp,
			                                                                              result);
		}

		NODISCARD constexpr static SaturatingStatus SubtractSat(const T& t, const U& u,
		                                                        T& result) noexcept {
			int64_t tmp = (int64_t) t - (int64_t) u;
			result      = (T) tmp;
			if (SafeCastHelper<T, int64_t, CastMethodHelper<T, int64_t>::method>::Cast(tmp, result))
				return Saturating_NoOverflow;
			if (tmp > std::numeric_limits<T>::max())
				return Saturating_Overflow;
			return Saturating_Underflow;
		}

		constexpr static void SubtractThrow(const T& t, const U& u, T& result) {
			int64_t tmp = (int64_t) t - (int64_t) u;
			SafeCastHelper<T, int64_t, CastMethodHelper<T, int64_t>::method>::CastThrow(tmp,
			                                                                            result);
		}
	};

	template <class T, class U>
	class SubtractionHelper<T, U, SubtractionState_CastInt64CheckSafeIntMinMax2> {
	   public:
		NODISCARD constexpr static bool Subtract(const U& t, const T& u, T& result) noexcept {
			int64_t tmp = (int64_t) t - (int64_t) u;
			return SafeCastHelper<T, int64_t, CastMethodHelper<T, int64_t>::method>::Cast(tmp,
			                                                                              result);
		}

		NODISCARD constexpr static SaturatingStatus SubtractSat(const T& t, const U& u,
		                                                        T& result) noexcept {
			int64_t tmp = (int64_t) t - (int64_t) u;
			if (SafeCastHelper<T, int64_t, CastMethodHelper<T, int64_t>::method>::Cast(tmp, result))
				return Saturating_NoOverflow;
			if (tmp > std::numeric_limits<T>::max())
				return Saturating_Overflow;
			return Saturating_Underflow;
		}

		constexpr static void SubtractThrow(const U& t, const T& u, T& result) {
			int64_t tmp = (int64_t) t - (int64_t) u;
			SafeCastHelper<T, int64_t, CastMethodHelper<T, int64_t>::method>::CastThrow(tmp,
			                                                                            result);
		}
	};

	template <class T, class U>
	class SubtractionHelper<T, U, SubtractionState_CastInt64CheckMin> {
	   public:
		NODISCARD constexpr static bool Subtract(const T& t, const U& u, T& result) noexcept {
			int64_t tmp = (int64_t) t - (int64_t) u;
			result      = (T) tmp;
			if (tmp >= (int64_t) std::numeric_limits<T>::min()) {
				return true;
			}
			return false;
		}

		NODISCARD constexpr static SaturatingStatus SubtractSat(const T& t, const U& u,
		                                                        T& result) noexcept {
			int64_t tmp = (int64_t) t - (int64_t) u;
			if (tmp >= (int64_t) std::numeric_limits<T>::min()) {
				result = (T) tmp;
				return Saturating_NoOverflow;
			}
			return Saturating_Underflow;
		}

		constexpr static void SubtractThrow(const T& t, const U& u, T& result) {
			int64_t tmp = (int64_t) t - (int64_t) u;
			if (tmp >= (int64_t) std::numeric_limits<T>::min()) {
				result = (T) tmp;
				return;
			}
			throw IntegerOverflowException();
		}
	};

	template <class T, class U>
	class SubtractionHelper<T, U, SubtractionState_Uint64Int> {
	   public:
		NODISCARD constexpr static bool Subtract(const T& t, const U& u, T& result) noexcept {
			if (u >= 0) {
				result = (T) (t - (uint64_t) u);
				if ((uint64_t) u <= t) {
					return true;
				}
			} else {
				T tmp  = t;
				result = t + AbsValueHelper<U, AbsMethodHelper<U>::method>::Abs(u);
				if (result >= tmp)
					return true;
			}
			return false;
		}

		NODISCARD constexpr static SaturatingStatus SubtractSat(const T& t, const U& u,
		                                                        T& result) noexcept {
			if (u >= 0) {
				if ((uint64_t) u <= t) {
					result = (T) (t - (uint64_t) u);
					return Saturating_NoOverflow;
				}
				return Saturating_Underflow;
			} else {
				T tmp  = t;
				result = t + AbsValueHelper<U, AbsMethodHelper<U>::method>::Abs(u);
				if (result >= tmp)
					return Saturating_NoOverflow;
			}
			return Saturating_Overflow;
		}

		constexpr static void SubtractThrow(const T& t, const U& u, T& result) {
			if (u >= 0) {
				if ((uint64_t) u <= t) {
					result = (T) (t - (uint64_t) u);
					return;
				}
			} else {
				T tmp  = t;
				result = t + AbsValueHelper<U, AbsMethodHelper<U>::method>::Abs(u);
				if (result >= tmp)
					return;
			}
			throw IntegerOverflowException();
		}
	};

	template <class T, class U>
	class SubtractionHelper<T, U, SubtractionState_Uint64Int2> {
	   public:
		NODISCARD constexpr static bool Subtract(const U& t, const T& u, T& result) noexcept {
			if (u < 0) {
				uint64_t tmp = 0;
				tmp          = t + (uint64_t) AbsValueHelper<T, AbsMethodHelper<T>::method>::Abs(u);
				if (tmp >= t && tmp <= std::numeric_limits<T>::max()) {
					result = (T) tmp;
					return true;
				}
			} else if ((uint64_t) u > t) {
				result = (T) t - (T) u;
				return true;
			} else {
				uint64_t tmp = (uint64_t) t - (uint64_t) u;
				if (tmp <= std::numeric_limits<T>::max()) {
					result = (T) tmp;
					return true;
				}
			}
			return false;
		}

		NODISCARD constexpr static SaturatingStatus SubtractSat(const U& t, const T& u,
		                                                        T& result) noexcept {
			if (u < 0) {
				uint64_t tmp = 0;
				tmp          = t + (uint64_t) AbsValueHelper<T, AbsMethodHelper<T>::method>::Abs(u);
				if (tmp >= t && tmp <= std::numeric_limits<T>::max()) {
					result = (T) tmp;
					return Saturating_NoOverflow;
				}
				return Saturating_Overflow;
			} else if ((uint64_t) u > t) {
				result = (T) t - (T) u;
				return Saturating_NoOverflow;
			} else {
				uint64_t tmp = (uint64_t) t - (uint64_t) u;
				if (tmp <= std::numeric_limits<T>::max()) {
					result = (T) tmp;
					return Saturating_NoOverflow;
				}
				return Saturating_Overflow;
			}
		}

		constexpr static void SubtractThrow(const U& t, const T& u, T& result) {
			if (u < 0) {
				uint64_t tmp = 0;
				tmp          = t + (uint64_t) AbsValueHelper<T, AbsMethodHelper<T>::method>::Abs(u);
				if (tmp >= t && tmp <= std::numeric_limits<T>::max()) {
					result = (T) tmp;
					return;
				}
			} else if ((uint64_t) u > t) {
				result = (T) t - (T) u;
				return;
			} else {
				uint64_t tmp = (uint64_t) t - (uint64_t) u;
				if (tmp <= std::numeric_limits<T>::max()) {
					result = (T) tmp;
					return;
				}
			}
			throw IntegerOverflowException();
		}
	};

	template <class T, class U>
	class SubtractionHelper<T, U, SubtractionState_UintInt64> {
	   public:
		NODISCARD constexpr static bool Subtract(const T& t, const U& u, T& result) noexcept {
			if (u >= 0) {
				result = (T) (t - (T) u);
				if ((uint64_t) u <= t) {
					return true;
				}
			} else {
				uint64_t tmp = t + ~(uint64_t) (u) + 1;
				result       = (T) tmp;
				if (tmp <= std::numeric_limits<T>::max()) {
					return true;
				}
			}
			return false;
		}

		NODISCARD constexpr static SaturatingStatus SubtractSat(const T& t, const U& u,
		                                                        T& result) noexcept {
			if (u >= 0) {
				if ((uint64_t) u <= t) {
					result = (T) (t - (T) u);
					return Saturating_NoOverflow;
				}
				return Saturating_Underflow;
			} else {
				uint64_t tmp = t + ~(uint64_t) (u) + 1;
				if (tmp <= std::numeric_limits<T>::max()) {
					result = (T) tmp;
					return Saturating_NoOverflow;
				}
			}
			return Saturating_Overflow;
		}

		constexpr static void SubtractThrow(const T& t, const U& u, T& result) {
			if (u >= 0) {
				if ((uint64_t) u <= t) {
					result = (T) (t - (T) u);
					return;
				}
			} else {
				uint64_t tmp = t + ~(uint64_t) (u) + 1;
				if (tmp <= std::numeric_limits<T>::max()) {
					result = (T) tmp;
					return;
				}
			}
			throw IntegerOverflowException();
		}
	};

	template <class T, class U>
	class SubtractionHelper<T, U, SubtractionState_UintInt642> {
	   public:
		NODISCARD constexpr static bool Subtract(const U& t, const T& u, T& result) noexcept {
			if (u >= 0) {
				result = (T) ((int64_t) t - u);
				return true;
			} else {
				uint64_t tmp = (uint64_t) t + (uint64_t) (-u);
				if (tmp <= (uint64_t) std::numeric_limits<T>::max()) {
					result = (T) tmp;
					return true;
				}
			}
			return false;
		}

		NODISCARD constexpr static SaturatingStatus SubtractSat(const U& t, const T& u,
		                                                        T& result) noexcept {
			if (u >= 0) {
				result = (T) ((int64_t) t - u);
				return Saturating_NoOverflow;
			} else {
				uint64_t tmp = (uint64_t) t + (uint64_t) (-u);
				if (tmp <= (uint64_t) std::numeric_limits<T>::max()) {
					result = (T) tmp;
					return Saturating_NoOverflow;
				}
			}
			return Saturating_Overflow;
		}

		constexpr static void SubtractThrow(const U& t, const T& u, T& result) {
			if (u >= 0) {
				result = (T) ((int64_t) t - u);
				return;
			} else {
				uint64_t tmp = (uint64_t) t + (uint64_t) (-u);
				if (tmp <= (uint64_t) std::numeric_limits<T>::max()) {
					result = (T) tmp;
					return;
				}
			}
			throw IntegerOverflowException();
		}
	};

	template <class T, class U>
	class SubtractionHelper<T, U, SubtractionState_Int64Int> {
	   public:
		NODISCARD constexpr static bool Subtract(const T& t, const U& u, T& result) noexcept {
			int64_t tmp = (int64_t) ((uint64_t) t - (uint64_t) u);
			result      = (T) tmp;
			if ((t >= 0 && u <= 0 && tmp < t) || (u >= 0 && tmp > t)) {
				return false;
			}
			return true;
		}

		NODISCARD constexpr static SaturatingStatus SubtractSat(const T& t, const U& u,
		                                                        T& result) noexcept {
			int64_t tmp = (int64_t) ((uint64_t) t - (uint64_t) u);
			if (t >= 0 && u <= 0 && tmp < t) {
				return Saturating_Overflow;
			}
			if (u >= 0 && tmp > t)
				return Saturating_Underflow;
			result = (T) tmp;
			return Saturating_NoOverflow;
		}

		constexpr static void SubtractThrow(const T& t, const U& u, T& result) {
			int64_t tmp = (int64_t) ((uint64_t) t - (uint64_t) u);
			if ((t >= 0 && u <= 0 && tmp < t) || (u >= 0 && tmp > t)) {
				throw IntegerOverflowException();
			}
			result = (T) tmp;
		}
	};

	template <class T, class U, bool>
	class SubtractCornerCaseMax;

	template <class T, class U>
	class SubtractCornerCaseMax<T, U, true> {
	   public:
		NODISCARD constexpr static bool isOverflowPositive(const T& t, const U& u,
		                                                   int64_t tmp) noexcept {
			return (tmp > std::numeric_limits<T>::max() || (u < 0 && tmp < t));
		}

		NODISCARD constexpr static bool isOverflowNegative(const T& t, const U& u,
		                                                   int64_t tmp) noexcept {
			return (tmp < std::numeric_limits<T>::min() || (u >= 0 && tmp > t));
		}
	};

	template <class T, class U>
	class SubtractCornerCaseMax<T, U, false> {
	   public:
		NODISCARD constexpr static bool isOverflowPositive(const T& t, const U& u,
		                                                   int64_t tmp) noexcept {
			return (u < 0 && tmp < t);
		}

		NODISCARD constexpr static bool isOverflowNegative(const T& t, const U& u,
		                                                   int64_t tmp) noexcept {
			return (u >= 0 && tmp > t);
		}
	};

	template <class T, class U>
	class SubtractionHelper<T, U, SubtractionState_Int64Int2> {
	   public:
		NODISCARD constexpr static bool Subtract(const U& t, const T& u, T& result) noexcept {
			int64_t tmp = t - u;
			if (t >= 0) {
				if (SubtractCornerCaseMax<
				        T, U, __details::IntTraits<T>::isLT64Bit>::isOverflowPositive(u, t, tmp))
					return false;
			} else {
				if (SubtractCornerCaseMax<
				        T, U, __details::IntTraits<T>::isLT64Bit>::isOverflowNegative(u, t, tmp))
					return false;
			}
			result = (T) tmp;
			return true;
		}

		NODISCARD constexpr static SaturatingStatus SubtractSat(const U& t, const T& u,
		                                                        T& result) noexcept {
			int64_t tmp = t - u;
			if (t >= 0) {
				if (SubtractCornerCaseMax<
				        T, U, __details::IntTraits<T>::isLT64Bit>::isOverflowPositive(u, t, tmp))
					return Saturating_Overflow;
			} else {
				if (SubtractCornerCaseMax<
				        T, U, __details::IntTraits<T>::isLT64Bit>::isOverflowNegative(u, t, tmp))
					return Saturating_Underflow;
			}
			result = (T) tmp;
			return Saturating_NoOverflow;
		}

		constexpr static void SubtractThrow(const U& t, const T& u, T& result) {
			int64_t tmp = t - u;
			if (t >= 0) {
				if (SubtractCornerCaseMax<
				        T, U, __details::IntTraits<T>::isLT64Bit>::isOverflowPositive(u, t, tmp))
					throw IntegerOverflowException();
			} else {
				if (SubtractCornerCaseMax<
				        T, U, __details::IntTraits<T>::isLT64Bit>::isOverflowNegative(u, t, tmp))
					throw IntegerOverflowException();
			}
			result = (T) tmp;
		}
	};

	template <class T, class U>
	class SubtractionHelper<T, U, SubtractionState_IntInt64> {
	   public:
		NODISCARD constexpr static bool Subtract(const T& t, const U& u, T& result) noexcept {
			int64_t tmp = (int64_t) ((uint64_t) t - (uint64_t) u);
			result      = (T) tmp;
			if (t >= 0) {
				if (u >= 0) {
					if (tmp >= std::numeric_limits<T>::min()) {
						return true;
					}
				} else {
					if (tmp >= t && tmp <= std::numeric_limits<T>::max()) {
						return true;
					}
				}
			} else {
				if (u >= 0) {
					if (tmp <= t && tmp >= std::numeric_limits<T>::min()) {
						return true;
					}
				} else {
					if (tmp <= std::numeric_limits<T>::max()) {
						return true;
					}
				}
			}
			return false;
		}

		NODISCARD constexpr static SaturatingStatus SubtractSat(const T& t, const U& u,
		                                                        T& result) noexcept {
			int64_t tmp = (int64_t) ((uint64_t) t - (uint64_t) u);
			if (t >= 0) {
				if (u >= 0) {
					if (tmp >= std::numeric_limits<T>::min()) {
						result = (T) tmp;
						return Saturating_NoOverflow;
					}
					return Saturating_Underflow;
				} else {
					if (tmp >= t && tmp <= std::numeric_limits<T>::max()) {
						result = (T) tmp;
						return Saturating_NoOverflow;
					}
					return Saturating_Overflow;
				}
			} else {
				if (u >= 0) {
					if (tmp <= t && tmp >= std::numeric_limits<T>::min()) {
						result = (T) tmp;
						return Saturating_NoOverflow;
					}
					return Saturating_Underflow;
				} else {
					if (tmp <= std::numeric_limits<T>::max()) {
						result = (T) tmp;
						return Saturating_NoOverflow;
					}
					return Saturating_Overflow;
				}
			}
		}

		constexpr static void SubtractThrow(const T& t, const U& u, T& result) {
			int64_t tmp = (int64_t) ((uint64_t) t - (uint64_t) u);
			if (t >= 0) {
				if (u >= 0) {
					if (tmp >= std::numeric_limits<T>::min()) {
						result = (T) tmp;
						return;
					}
				} else {
					if (tmp >= t && tmp <= std::numeric_limits<T>::max()) {
						result = (T) tmp;
						return;
					}
				}
			} else {
				if (u >= 0) {
					if (tmp <= t && tmp >= std::numeric_limits<T>::min()) {
						result = (T) tmp;
						return;
					}
				} else {
					if (tmp <= std::numeric_limits<T>::max()) {
						result = (T) tmp;
						return;
					}
				}
			}
			throw IntegerOverflowException();
		}
	};

	template <class T, class U>
	class SubtractionHelper<T, U, SubtractionState_IntInt642> {
	   public:
		NODISCARD constexpr static bool Subtract(const U& t, const T& u, T& result) noexcept {
			int64_t tmp = (int64_t) t - u;
			if ((t >= 0 && u < 0 && tmp < t) || (u > 0 && tmp > t)) {
				return false;
			}
			result = (T) tmp;
			return true;
		}

		NODISCARD constexpr static SaturatingStatus SubtractSat(const U& t, const T& u,
		                                                        T& result) noexcept {
			int64_t tmp = (int64_t) t - u;
			if (t >= 0 && u < 0 && tmp < t)
				return Saturating_Overflow;
			if (u > 0 && tmp > t)
				return Saturating_Underflow;
			result = (T) tmp;
			return Saturating_NoOverflow;
		}

		constexpr static void SubtractThrow(const U& t, const T& u, T& result) {
			int64_t tmp = (int64_t) t - u;
			if ((t >= 0 && u < 0 && tmp < t) || (u > 0 && tmp > t)) {
				throw IntegerOverflowException();
			}
			result = (T) tmp;
		}
	};

	template <class T, class U>
	class SubtractionHelper<T, U, SubtractionState_Int64Uint> {
	   public:
		NODISCARD constexpr static bool Subtract(const T& t, const U& u, T& result) noexcept {
			uint64_t tmp = (uint64_t) t - (uint64_t) u;
			result       = (T) (int64_t) tmp;
			if ((int64_t) tmp <= t) {
				return true;
			}
			return false;
		}

		NODISCARD constexpr static SaturatingStatus SubtractSat(const T& t, const U& u,
		                                                        T& result) noexcept {
			uint64_t tmp = (uint64_t) t - (uint64_t) u;
			if ((int64_t) tmp <= t) {
				result = (T) (int64_t) tmp;
				return Saturating_NoOverflow;
			}
			return Saturating_Underflow;
		}

		constexpr static void SubtractThrow(const T& t, const U& u, T& result) {
			uint64_t tmp = (uint64_t) t - (uint64_t) u;
			if ((int64_t) tmp <= t) {
				result = (T) (int64_t) tmp;
				return;
			}
			throw IntegerOverflowException();
		}
	};

	template <class T, class U>
	class SubtractionHelper<T, U, SubtractionState_Int64Uint2> {
	   public:
		NODISCARD constexpr static bool Subtract(const U& t, const T& u, T& result) noexcept {
			uint64_t tmp = (uint64_t) t - (uint64_t) u;
			if ((int64_t) tmp <= std::numeric_limits<T>::max() &&
			    (int64_t) tmp >= std::numeric_limits<T>::min()) {
				result = (T) (int64_t) tmp;
				return true;
			}
			return false;
		}

		NODISCARD constexpr static SaturatingStatus SubtractSat(const U& t, const T& u,
		                                                        T& result) noexcept {
			uint64_t tmp = (uint64_t) t - (uint64_t) u;
			if ((int64_t) tmp > std::numeric_limits<T>::max())
				return Saturating_Overflow;
			if ((int64_t) tmp < std::numeric_limits<T>::min())
				return Saturating_Underflow;

			result = (T) (int64_t) tmp;
			return Saturating_NoOverflow;
		}

		constexpr static void SubtractThrow(const U& t, const T& u, T& result) {
			uint64_t tmp = (uint64_t) t - (uint64_t) u;
			if ((int64_t) tmp <= std::numeric_limits<T>::max() &&
			    (int64_t) tmp >= std::numeric_limits<T>::min()) {
				result = (T) (int64_t) tmp;
				return;
			}
			throw IntegerOverflowException();
		}
	};

	template <class T, class U>
	class SubtractionHelper<T, U, SubtractionState_IntUint64> {
	   public:
		NODISCARD constexpr static bool Subtract(const T& t, const U& u, T& result) noexcept {
			const uint64_t absMinT = (uint64_t) std::numeric_limits<T>::max() + 1;
			result                 = (T) (t - u);
			if (t < 0) {
				if (u <= absMinT - AbsValueHelper<T, AbsMethodHelper<T>::method>::Abs(t)) {
					return true;
				}
			} else {
				if (u <= absMinT + (uint64_t) t) {
					return true;
				}
			}
			return false;
		}

		NODISCARD constexpr static SaturatingStatus SubtractSat(const T& t, const U& u,
		                                                        T& result) noexcept {
			const uint64_t absMinT = (uint64_t) std::numeric_limits<T>::max() + 1;
			if (t < 0) {
				if (u <= absMinT - AbsValueHelper<T, AbsMethodHelper<T>::method>::Abs(t)) {
					result = (T) (t - u);
					return Saturating_NoOverflow;
				}
			} else {
				if (u <= absMinT + (uint64_t) t) {
					result = (T) (t - u);
					return Saturating_NoOverflow;
				}
			}
			return Saturating_Underflow;
		}

		constexpr static void SubtractThrow(const T& t, const U& u, T& result) {
			const uint64_t absMinT = (uint64_t) std::numeric_limits<T>::max() + 1;
			if (t < 0) {
				if (u <= absMinT - AbsValueHelper<T, AbsMethodHelper<T>::method>::Abs(t)) {
					result = (T) (t - u);
					return;
				}
			} else {
				if (u <= absMinT + (uint64_t) t) {
					result = (T) (t - u);
					return;
				}
			}
			throw IntegerOverflowException();
		}
	};

	template <class T, class U>
	class SubtractionHelper<T, U, SubtractionState_IntUint642> {
	   public:
		NODISCARD constexpr static bool Subtract(const U& t, const T& u, T& result) noexcept {
			if (t >= 0 && (T) t >= u) {
				result = (T) ((U) t - (U) u);
				return true;
			}
			return false;
		}

		NODISCARD constexpr static SaturatingStatus SubtractSat(const U& t, const T& u,
		                                                        T& result) noexcept {
			if (t >= 0 && (T) t >= u) {
				result = (T) ((U) t - (U) u);
				return Saturating_NoOverflow;
			}
			return Saturating_Underflow;
		}

		constexpr static void SubtractThrow(const U& t, const T& u, T& result) {
			if (t >= 0 && (T) t >= u) {
				result = (T) ((U) t - (U) u);
				return;
			}
			throw IntegerOverflowException();
		}
	};

	template <class T, class U>
	class SubtractionHelper<T, U, SubtractionState_Int64Uint64> {
	   public:
		NODISCARD constexpr static bool Subtract(const T& t, const U& u, T& result) noexcept {
			static_assert(__details::IntTraits<T>::isInt64 && __details::IntTraits<U>::isUint64,
			              "T must be Int64, U Uint64");
			uint64_t tmp = (uint64_t) t - u;
			result       = (int64_t) tmp;
			if ((int64_t) tmp <= t) {
				return true;
			}
			return false;
		}

		NODISCARD constexpr static SaturatingStatus SubtractSat(const T& t, const U& u,
		                                                        T& result) noexcept {
			static_assert(__details::IntTraits<T>::isInt64 && __details::IntTraits<U>::isUint64,
			              "T must be Int64, U Uint64");
			uint64_t tmp = (uint64_t) t - u;
			if ((int64_t) tmp <= t) {
				result = (int64_t) tmp;
				return Saturating_NoOverflow;
			}
			return Saturating_Underflow;
		}

		constexpr static void SubtractThrow(const T& t, const U& u, T& result) {
			static_assert(__details::IntTraits<T>::isInt64 && __details::IntTraits<U>::isUint64,
			              "T must be Int64, U Uint64");
			uint64_t tmp = (uint64_t) t - u;
			if ((int64_t) tmp <= t) {
				result = (int64_t) tmp;
				return;
			}
			throw IntegerOverflowException();
		}
	};

	template <class T, class U>
	class SubtractionHelper<T, U, SubtractionState_Int64Uint642> {
	   public:
		NODISCARD constexpr static bool Subtract(const U& t, const T& u, T& result) noexcept {
			static_assert(__details::IntTraits<T>::isUint64 && __details::IntTraits<U>::isInt64,
			              "U must be Int64, T Uint64");
			if (t >= 0 && (uint64_t) t >= u) {
				result = (uint64_t) t - u;
				return true;
			}
			return false;
		}

		NODISCARD constexpr static SaturatingStatus SubtractSat(const U& t, const T& u,
		                                                        T& result) noexcept {
			static_assert(__details::IntTraits<T>::isUint64 && __details::IntTraits<U>::isInt64,
			              "U must be Int64, T Uint64");
			if (t >= 0 && (uint64_t) t >= u) {
				result = (uint64_t) t - u;
				return Saturating_NoOverflow;
			}
			return Saturating_Underflow;
		}

		constexpr static void SubtractThrow(const U& t, const T& u, T& result) {
			static_assert(__details::IntTraits<T>::isUint64 && __details::IntTraits<U>::isInt64,
			              "U must be Int64, T Uint64");
			if (t >= 0 && (uint64_t) t >= u) {
				result = (uint64_t) t - u;
				return;
			}
			throw IntegerOverflowException();
		}
	};

	enum BinaryState { BinaryState_OK, BinaryState_Int8, BinaryState_Int16, BinaryState_Int32 };

	template <class T, class U>
	class BinaryMethod {
	   public:
		enum {
			method = (sizeof(T) <= sizeof(U) || __details::TypeCompare<T, U>::isBothUnsigned ||
			          !std::numeric_limits<U>::is_signed)
			             ? BinaryState_OK
			         : __details::IntTraits<U>::isInt8  ? BinaryState_Int8
			         : __details::IntTraits<U>::isInt16 ? BinaryState_Int16
			                                            : BinaryState_Int32
		};
	};

	template <class T, class U, int method>
	class BinaryAndHelper;

	template <class T, class U>
	class BinaryAndHelper<T, U, BinaryState_OK> {
	   public:
		constexpr static T And(T lhs, U rhs) noexcept { return (T) (lhs & rhs); }
	};

	template <class T, class U>
	class BinaryAndHelper<T, U, BinaryState_Int8> {
	   public:
		NODISCARD constexpr static T And(T lhs, U rhs) noexcept {
			ASSERT((lhs & rhs) == (lhs & (uint8_t) rhs));
			return (T) (lhs & (uint8_t) rhs);
		}
	};

	template <class T, class U>
	class BinaryAndHelper<T, U, BinaryState_Int16> {
	   public:
		NODISCARD constexpr static T And(T lhs, U rhs) noexcept {
			ASSERT((lhs & rhs) == (lhs & (uint16_t) rhs));
			return (T) (lhs & (uint16_t) rhs);
		}
	};

	template <class T, class U>
	class BinaryAndHelper<T, U, BinaryState_Int32> {
	   public:
		NODISCARD constexpr static T And(T lhs, U rhs) noexcept {
			ASSERT((lhs & rhs) == (lhs & (uint32_t) rhs));
			return (T) (lhs & (uint32_t) rhs);
		}
	};

	template <class T, class U, int method>
	class BinaryOrHelper;

	template <class T, class U>
	class BinaryOrHelper<T, U, BinaryState_OK> {
	   public:
		constexpr static T Or(T lhs, U rhs) noexcept { return (T) (lhs | rhs); }
	};

	template <class T, class U>
	class BinaryOrHelper<T, U, BinaryState_Int8> {
	   public:
		NODISCARD constexpr static T Or(T lhs, U rhs) noexcept {
			ASSERT((lhs | rhs) == (lhs | (uint8_t) rhs));
			return (T) (lhs | (uint8_t) rhs);
		}
	};

	template <class T, class U>
	class BinaryOrHelper<T, U, BinaryState_Int16> {
	   public:
		NODISCARD constexpr static T Or(T lhs, U rhs) noexcept {
			ASSERT((lhs | rhs) == (lhs | (uint16_t) rhs));
			return (T) (lhs | (uint16_t) rhs);
		}
	};

	template <class T, class U>
	class BinaryOrHelper<T, U, BinaryState_Int32> {
	   public:
		NODISCARD constexpr static T Or(T lhs, U rhs) noexcept {
			ASSERT((lhs | rhs) == (lhs | (uint32_t) rhs));
			return (T) (lhs | (uint32_t) rhs);
		}
	};

	template <class T, class U, int method>
	class BinaryXorHelper;

	template <class T, class U>
	class BinaryXorHelper<T, U, BinaryState_OK> {
	   public:
		constexpr static T Xor(T lhs, U rhs) noexcept { return (T) (lhs ^ rhs); }
	};

	template <class T, class U>
	class BinaryXorHelper<T, U, BinaryState_Int8> {
	   public:
		NODISCARD constexpr static T Xor(T lhs, U rhs) noexcept {
			ASSERT((lhs ^ rhs) == (lhs ^ (uint8_t) rhs));
			return (T) (lhs ^ (uint8_t) rhs);
		}
	};

	template <class T, class U>
	class BinaryXorHelper<T, U, BinaryState_Int16> {
	   public:
		NODISCARD constexpr static T Xor(T lhs, U rhs) noexcept {
			ASSERT((lhs ^ rhs) == (lhs ^ (uint16_t) rhs));
			return (T) (lhs ^ (uint16_t) rhs);
		}
	};

	template <class T, class U>
	class BinaryXorHelper<T, U, BinaryState_Int32> {
	   public:
		NODISCARD constexpr static T Xor(T lhs, U rhs) noexcept {
			ASSERT((lhs ^ rhs) == (lhs ^ (uint32_t) rhs));
			return (T) (lhs ^ (uint32_t) rhs);
		}
	};

	template <class U, int signed>
	class BitsNotNegative;

	template <class U>
	class BitsNotNegative<U, true> {
	   public:
		NODISCARD constexpr static bool value(U bits) noexcept { return bits >= 0; }
	};

	template <class U>
	class BitsNotNegative<U, false> {
	   public:
		NODISCARD constexpr static bool value(U) noexcept { return true; }
	};

	template <class T, class U>
	NODISCARD constexpr bool ValidBitCount(U bits) {
		if (BitsNotNegative<U, std::numeric_limits<U>::is_signed>::value(bits)) {
			if (bits < (int) __details::IntTraits<T>::bitCount) {
				return true;
			}
		}
		return false;
	}

	template <class T, class U>
	NODISCARD constexpr inline bool SafeCast(const T from, U& to) noexcept {
		return SafeCastHelper<U, T, CastMethodHelper<U, T>::method>::Cast(from, to);
	}

	template <class T, class U>
	NODISCARD constexpr inline bool SafeEquals(const T t, const U u) noexcept {
		return EqualityTest<T, U, ValidComparison<T, U>::method>::IsEquals(t, u);
	}

	template <class T, class U>
	NODISCARD constexpr inline bool SafeNotEquals(const T t, const U u) noexcept {
		return !EqualityTest<T, U, ValidComparison<T, U>::method>::IsEquals(t, u);
	}

	template <class T, class U>
	NODISCARD constexpr inline bool SafeGreaterThan(const T t, const U u) noexcept {
		return GreaterThanTest<T, U, ValidComparison<T, U>::method>::GreaterThan(t, u);
	}

	template <class T, class U>
	NODISCARD constexpr inline bool SafeGreaterThanEquals(const T t, const U u) noexcept {
		return !GreaterThanTest<U, T, ValidComparison<U, T>::method>::GreaterThan(u, t);
	}

	template <class T, class U>
	NODISCARD constexpr inline bool SafeLessThan(const T t, const U u) noexcept {
		return GreaterThanTest<U, T, ValidComparison<U, T>::method>::GreaterThan(u, t);
	}

	template <class T, class U>
	NODISCARD constexpr inline bool SafeLessThanEquals(const T t, const U u) noexcept {
		return !GreaterThanTest<T, U, ValidComparison<T, U>::method>::GreaterThan(t, u);
	}

	template <class T, class U>
	NODISCARD constexpr inline bool SafeMultiply(T const& t, U const& u, T& result) noexcept {
		using TLeft                = std::decay_t<T>;
		using TRight               = std::decay_t<U>;
		constexpr bool isStdT      = requires { typename TLeft::__underlying; };
		constexpr bool isStdU      = requires { typename TRight::__underlying; };
		constexpr bool isIntegralT = std::is_integral_v<TLeft>;
		constexpr bool isIntegralU = std::is_integral_v<TRight>;
		static_assert(isStdT || isIntegralT);
		static_assert(isStdU || isIntegralU);
		using TLeftInt  = std::conditional_t<isStdT, typename TLeft::__underlying, TLeft>;
		using TRightInt = std::conditional_t<isStdU, typename TRight::__underlying, TRight>;

		return MultiplicationHelper<
		    TLeftInt, TRightInt,
		    MultiplicationMethod<TLeftInt, TRightInt>::method>::Multiply(t, u,
		                                                                 result.__builtin_ref());
	}

	template <class T, class U>
	constexpr inline void StrictMultiply(T const& t, U const& u, T& result) {
		using TLeft                = std::decay_t<T>;
		using TRight               = std::decay_t<U>;
		constexpr bool isStdT      = requires { typename TLeft::__underlying; };
		constexpr bool isStdU      = requires { typename TRight::__underlying; };
		constexpr bool isIntegralT = std::is_integral_v<TLeft>;
		constexpr bool isIntegralU = std::is_integral_v<TRight>;
		static_assert(isStdT || isIntegralT);
		static_assert(isStdU || isIntegralU);
		using TLeftInt  = std::conditional_t<isStdT, typename TLeft::__underlying, TLeft>;
		using TRightInt = std::conditional_t<isStdU, typename TRight::__underlying, TRight>;

		MultiplicationHelper<TLeftInt, TRightInt,
		                     MultiplicationMethod<TLeftInt, TRightInt>::method>::
		    MultiplyThrow(t, u, result.__builtin_ref());
	}

	template <class T, class U>
	constexpr inline void WrappingMultiply(T const& t, U const& u, T& result) noexcept {
		using TLeft                = std::decay_t<T>;
		using TRight               = std::decay_t<U>;
		constexpr bool isStdT      = requires { typename TLeft::__underlying; };
		constexpr bool isStdU      = requires { typename TRight::__underlying; };
		constexpr bool isIntegralT = std::is_integral_v<TLeft>;
		constexpr bool isIntegralU = std::is_integral_v<TRight>;
		static_assert(isStdT || isIntegralT);
		static_assert(isStdU || isIntegralU);
		using TLeftInt       = std::conditional_t<isStdT, typename TLeft::__underlying, TLeft>;
		using TRightInt      = std::conditional_t<isStdU, typename TRight::__underlying, TRight>;
		using TLeftUnsigned  = std::make_unsigned_t<TLeftInt>;
		using TRightUnsigned = std::make_unsigned_t<TRightInt>;

		result = TLeftInt(TLeftUnsigned((TLeftInt) t) * TRightUnsigned((TRightInt) u));
	}

	template <class T, class U>
	constexpr inline void SaturatingMultiply(T const& t, U const& u, T& result) noexcept {
		using TLeft                = std::decay_t<T>;
		using TRight               = std::decay_t<U>;
		constexpr bool isStdT      = requires { typename TLeft::__underlying; };
		constexpr bool isStdU      = requires { typename TRight::__underlying; };
		constexpr bool isIntegralT = std::is_integral_v<TLeft>;
		constexpr bool isIntegralU = std::is_integral_v<TRight>;
		static_assert(isStdT || isIntegralT);
		static_assert(isStdU || isIntegralU);
		using TLeftInt  = std::conditional_t<isStdT, typename TLeft::__underlying, TLeft>;
		using TRightInt = std::conditional_t<isStdU, typename TRight::__underlying, TRight>;

		auto status = MultiplicationHelper<
		    TLeftInt, TRightInt,
		    MultiplicationMethod<TLeftInt, TRightInt>::method>::MultiplySat(t, u,
		                                                                    result.__builtin_ref());
		if (status == Saturating_Underflow)
			result = std::numeric_limits<TLeftInt>::min();
		if (status == Saturating_Overflow)
			result = std::numeric_limits<TLeftInt>::max();
	}

	template <class T, class U>
	constexpr inline bool OverflowingMultiply(T const& t, U const& u, T& result) noexcept {
		if (!SafeMultiply(t, u, result)) {
			WrappingMultiply(t, u, result);
			return true;
		}

		return false;
	}

	template <class T, class U>
	NODISCARD constexpr inline bool SafeDivide(T t, U u, T& result) noexcept {
		using TLeft                = std::decay_t<T>;
		using TRight               = std::decay_t<U>;
		constexpr bool isStdT      = requires { typename TLeft::__underlying; };
		constexpr bool isStdU      = requires { typename TRight::__underlying; };
		constexpr bool isIntegralT = std::is_integral_v<TLeft>;
		constexpr bool isIntegralU = std::is_integral_v<TRight>;
		static_assert(isStdT || isIntegralT);
		static_assert(isStdU || isIntegralU);
		using TLeftInt  = std::conditional_t<isStdT, typename TLeft::__underlying, TLeft>;
		using TRightInt = std::conditional_t<isStdU, typename TRight::__underlying, TRight>;

		return DivisionHelper<TLeftInt, TRightInt, DivisionMethod<TLeftInt, TRightInt>::method>::
		           Divide(t, u, result.__builtin_ref()) == SafeInt_NoError;
	}

	template <class T, class U>
	NODISCARD constexpr inline void StrictDivide(T t, U u, T& result) {
		using TLeft                = std::decay_t<T>;
		using TRight               = std::decay_t<U>;
		constexpr bool isStdT      = requires { typename TLeft::__underlying; };
		constexpr bool isStdU      = requires { typename TRight::__underlying; };
		constexpr bool isIntegralT = std::is_integral_v<TLeft>;
		constexpr bool isIntegralU = std::is_integral_v<TRight>;
		static_assert(isStdT || isIntegralT);
		static_assert(isStdU || isIntegralU);
		using TLeftInt  = std::conditional_t<isStdT, typename TLeft::__underlying, TLeft>;
		using TRightInt = std::conditional_t<isStdU, typename TRight::__underlying, TRight>;

		DivisionHelper<TLeftInt, TRightInt, DivisionMethod<TLeftInt, TRightInt>::method>::
		    DivideThrow(t, u, result.__builtin_ref());
	}

	template <class T, class U>
	NODISCARD constexpr inline void WrappingDivide(T t, U u, T& result) {
		using TLeft                = std::decay_t<T>;
		using TRight               = std::decay_t<U>;
		constexpr bool isStdT      = requires { typename TLeft::__underlying; };
		constexpr bool isStdU      = requires { typename TRight::__underlying; };
		constexpr bool isIntegralT = std::is_integral_v<TLeft>;
		constexpr bool isIntegralU = std::is_integral_v<TRight>;
		static_assert(isStdT || isIntegralT);
		static_assert(isStdU || isIntegralU);
		using TLeftInt  = std::conditional_t<isStdT, typename TLeft::__underlying, TLeft>;
		using TRightInt = std::conditional_t<isStdU, typename TRight::__underlying, TRight>;

		auto status =
		    DivisionHelper<TLeftInt, TRightInt, DivisionMethod<TLeftInt, TRightInt>::method>::
		        Divide(t, u, result.__builtin_ref());
		if (status == SafeInt_NoError)
			return;
		if (status == SafeInt_DivisionByZero)
			throw DivisionByZeroException();
		if (status == SafeInt_Overflow)
			result = std::numeric_limits<TLeftInt>::min();
	}

	template <class T, class U>
	NODISCARD constexpr inline void SaturatingDivide(T t, U u, T& result) {
		using TLeft                = std::decay_t<T>;
		using TRight               = std::decay_t<U>;
		constexpr bool isStdT      = requires { typename TLeft::__underlying; };
		constexpr bool isStdU      = requires { typename TRight::__underlying; };
		constexpr bool isIntegralT = std::is_integral_v<TLeft>;
		constexpr bool isIntegralU = std::is_integral_v<TRight>;
		static_assert(isStdT || isIntegralT);
		static_assert(isStdU || isIntegralU);
		using TLeftInt  = std::conditional_t<isStdT, typename TLeft::__underlying, TLeft>;
		using TRightInt = std::conditional_t<isStdU, typename TRight::__underlying, TRight>;

		auto status =
		    DivisionHelper<TLeftInt, TRightInt, DivisionMethod<TLeftInt, TRightInt>::method>::
		        Divide(t, u, result.__builtin_ref());
		if (status == SafeInt_NoError)
			return;
		if (status == SafeInt_DivisionByZero)
			throw DivisionByZeroException();
		if (status == SafeInt_Overflow)
			result = std::numeric_limits<TLeftInt>::max();
	}

	template <class T, class U>
	constexpr inline bool OverflowingDivide(T const& t, U const& u, T& result) noexcept {
		if (!SafeDivide(t, u, result)) {
			WrappingDivide(t, u, result);
			return true;
		}

		return false;
	}

	template <class T, class U>
	NODISCARD constexpr inline bool SafeDivExact(T t, U u, T& result) noexcept {
		using TLeft                = std::decay_t<T>;
		using TRight               = std::decay_t<U>;
		constexpr bool isStdT      = requires { typename TLeft::__underlying; };
		constexpr bool isStdU      = requires { typename TRight::__underlying; };
		constexpr bool isIntegralT = std::is_integral_v<TLeft>;
		constexpr bool isIntegralU = std::is_integral_v<TRight>;
		static_assert(isStdT || isIntegralT);
		static_assert(isStdU || isIntegralU);
		using TLeftInt  = std::conditional_t<isStdT, typename TLeft::__underlying, TLeft>;
		using TRightInt = std::conditional_t<isStdU, typename TRight::__underlying, TRight>;

		auto status =
		    DivisionHelper<TLeftInt, TRightInt, DivisionMethod<TLeftInt, TRightInt>::method>::
		        Divide(t, u, result.__builtin_ref());
		return status == SafeInt_NoError && t % u == 0;
	}

	template <class T, class U>
	NODISCARD constexpr inline bool DivExact(T t, U u, T& result) {
		result = t.Div(u);
		return t % u == 0;
	}

	template <class T, class U>
	NODISCARD constexpr inline bool SafeModulus(T t, U u, T& result) noexcept {
		using TLeft                = std::decay_t<T>;
		using TRight               = std::decay_t<U>;
		constexpr bool isStdT      = requires { typename TLeft::__underlying; };
		constexpr bool isStdU      = requires { typename TRight::__underlying; };
		constexpr bool isIntegralT = std::is_integral_v<TLeft>;
		constexpr bool isIntegralU = std::is_integral_v<TRight>;
		static_assert(isStdT || isIntegralT);
		static_assert(isStdU || isIntegralU);
		using TLeftInt  = std::conditional_t<isStdT, typename TLeft::__underlying, TLeft>;
		using TRightInt = std::conditional_t<isStdU, typename TRight::__underlying, TRight>;
		if constexpr (!std::is_unsigned_v<TLeftInt> && !std::is_unsigned_v<TRightInt>) {
			if (t == std::numeric_limits<TLeftInt>::min() && u == -1)
				return false;
		}

		return ModulusHelper<TLeftInt, TRightInt, ValidComparison<TLeftInt, TRightInt>::method>::
		           Modulus(t, u, result.__builtin_ref()) == SafeInt_NoError;
	}

	template <class T, class U>
	NODISCARD constexpr inline void StrictModulus(T t, U u, T& result) {
		using TLeft                = std::decay_t<T>;
		using TRight               = std::decay_t<U>;
		constexpr bool isStdT      = requires { typename TLeft::__underlying; };
		constexpr bool isStdU      = requires { typename TRight::__underlying; };
		constexpr bool isIntegralT = std::is_integral_v<TLeft>;
		constexpr bool isIntegralU = std::is_integral_v<TRight>;
		static_assert(isStdT || isIntegralT);
		static_assert(isStdU || isIntegralU);
		using TLeftInt  = std::conditional_t<isStdT, typename TLeft::__underlying, TLeft>;
		using TRightInt = std::conditional_t<isStdU, typename TRight::__underlying, TRight>;

		using TLeftInt  = std::conditional_t<isStdT, typename TLeft::__underlying, TLeft>;
		using TRightInt = std::conditional_t<isStdU, typename TRight::__underlying, TRight>;
		if constexpr (!std::is_unsigned_v<TLeftInt> && !std::is_unsigned_v<TRightInt>) {
			if (t == std::numeric_limits<TLeftInt>::min() && u == -1)
				throw IntegerOverflowException();
		}

		ModulusHelper<TLeftInt, TRightInt, ValidComparison<TLeftInt, TRightInt>::method>::
		    ModulusThrow(t, u, result.__builtin_ref());
	}

	template <class T, class U>
	NODISCARD constexpr inline void WrappingModulus(T t, U u, T& result) {
		using TLeft                = std::decay_t<T>;
		using TRight               = std::decay_t<U>;
		constexpr bool isStdT      = requires { typename TLeft::__underlying; };
		constexpr bool isStdU      = requires { typename TRight::__underlying; };
		constexpr bool isIntegralT = std::is_integral_v<TLeft>;
		constexpr bool isIntegralU = std::is_integral_v<TRight>;
		static_assert(isStdT || isIntegralT);
		static_assert(isStdU || isIntegralU);
		using TLeftInt  = std::conditional_t<isStdT, typename TLeft::__underlying, TLeft>;
		using TRightInt = std::conditional_t<isStdU, typename TRight::__underlying, TRight>;

		auto status =
		    ModulusHelper<TLeftInt, TRightInt, ValidComparison<TLeftInt, TRightInt>::method>::
		        Modulus(t, u, result.__builtin_ref());
		if (status == SafeInt_NoError)
			return;
		if (status == SafeInt_DivisionByZero)
			throw DivisionByZeroException();
		if (status == SafeInt_Overflow)
			result = std::numeric_limits<TLeftInt>::min();
	}

	template <class T, class U>
	constexpr inline bool OverflowingModulus(T const& t, U const& u, T& result) noexcept {
		if (!SafeModulus(t, u, result)) {
			WrappingModulus(t, u, result);
			return true;
		}

		return false;
	}

	template <class T, class U>
	NODISCARD constexpr inline bool SafeAdd(T const& t, U const& u, T& result) noexcept {
		using TLeft                = std::decay_t<T>;
		using TRight               = std::decay_t<U>;
		constexpr bool isStdT      = requires { typename TLeft::__underlying; };
		constexpr bool isStdU      = requires { typename TRight::__underlying; };
		constexpr bool isIntegralT = std::is_integral_v<TLeft>;
		constexpr bool isIntegralU = std::is_integral_v<TRight>;
		static_assert(isStdT || isIntegralT);
		static_assert(isStdU || isIntegralU);
		using TLeftInt  = std::conditional_t<isStdT, typename TLeft::__underlying, TLeft>;
		using TRightInt = std::conditional_t<isStdU, typename TRight::__underlying, TRight>;

		return AdditionHelper<TLeftInt, TRightInt, AdditionMethod<TLeftInt, TRightInt>::method>::
		    Addition(t, u, result.__builtin_ref());
	}

	template <class T, class U>
	constexpr inline void StrictAdd(T const& t, U const& u, T& result) {
		using TLeft                = std::decay_t<T>;
		using TRight               = std::decay_t<U>;
		constexpr bool isStdT      = requires { typename TLeft::__underlying; };
		constexpr bool isStdU      = requires { typename TRight::__underlying; };
		constexpr bool isIntegralT = std::is_integral_v<TLeft>;
		constexpr bool isIntegralU = std::is_integral_v<TRight>;
		static_assert(isStdT || isIntegralT);
		static_assert(isStdU || isIntegralU);
		using TLeftInt  = std::conditional_t<isStdT, typename TLeft::__underlying, TLeft>;
		using TRightInt = std::conditional_t<isStdU, typename TRight::__underlying, TRight>;

		AdditionHelper<TLeftInt, TRightInt, AdditionMethod<TLeftInt, TRightInt>::method>::
		    AdditionThrow(t, u, result.__builtin_ref());
	}

	template <class T, class U>
	constexpr inline void WrappingAdd(T const& t, U const& u, T& result) noexcept {
		using TLeft                = std::decay_t<T>;
		using TRight               = std::decay_t<U>;
		constexpr bool isStdT      = requires { typename TLeft::__underlying; };
		constexpr bool isStdU      = requires { typename TRight::__underlying; };
		constexpr bool isIntegralT = std::is_integral_v<TLeft>;
		constexpr bool isIntegralU = std::is_integral_v<TRight>;
		static_assert(isStdT || isIntegralT);
		static_assert(isStdU || isIntegralU);
		using TLeftInt       = std::conditional_t<isStdT, typename TLeft::__underlying, TLeft>;
		using TRightInt      = std::conditional_t<isStdU, typename TRight::__underlying, TRight>;
		using TLeftUnsigned  = std::make_unsigned_t<TLeftInt>;
		using TRightUnsigned = std::make_unsigned_t<TRightInt>;

		result = TLeftInt(TLeftUnsigned((TLeftInt) t) + TRightUnsigned((TRightInt) u));
	}

	template <class T, class U>
	constexpr inline void SaturatingAdd(T const& t, U const& u, T& result) noexcept {
		using TLeft                = std::decay_t<T>;
		using TRight               = std::decay_t<U>;
		constexpr bool isStdT      = requires { typename TLeft::__underlying; };
		constexpr bool isStdU      = requires { typename TRight::__underlying; };
		constexpr bool isIntegralT = std::is_integral_v<TLeft>;
		constexpr bool isIntegralU = std::is_integral_v<TRight>;
		static_assert(isStdT || isIntegralT);
		static_assert(isStdU || isIntegralU);
		using TLeftInt  = std::conditional_t<isStdT, typename TLeft::__underlying, TLeft>;
		using TRightInt = std::conditional_t<isStdU, typename TRight::__underlying, TRight>;

		auto status =
		    AdditionHelper<TLeftInt, TRightInt, AdditionMethod<TLeftInt, TRightInt>::method>::
		        AdditionSat(t, u, result.__builtin_ref());
		if (status == Saturating_Underflow)
			result = std::numeric_limits<TLeftInt>::min();
		if (status == Saturating_Overflow)
			result = std::numeric_limits<TLeftInt>::max();
	}

	template <class T, class U>
	constexpr inline bool OverflowingAdd(T const& t, U const& u, T& result) noexcept {
		if (!SafeAdd(t, u, result)) {
			WrappingAdd(t, u, result);
			return true;
		}

		return false;
	}

	template <class T, class U>
	NODISCARD constexpr inline bool SafeSubtract(T const& t, U const& u, T& result) noexcept {
		using TLeft                = std::decay_t<T>;
		using TRight               = std::decay_t<U>;
		constexpr bool isStdT      = requires { typename TLeft::__underlying; };
		constexpr bool isStdU      = requires { typename TRight::__underlying; };
		constexpr bool isIntegralT = std::is_integral_v<TLeft>;
		constexpr bool isIntegralU = std::is_integral_v<TRight>;
		static_assert(isStdT || isIntegralT);
		static_assert(isStdU || isIntegralU);
		using TLeftInt  = std::conditional_t<isStdT, typename TLeft::__underlying, TLeft>;
		using TRightInt = std::conditional_t<isStdU, typename TRight::__underlying, TRight>;

		return SubtractionHelper<
		    TLeftInt, TRightInt,
		    SubtractionMethod<TLeftInt, TRightInt>::method>::Subtract(t, u, result.__builtin_ref());
	}

	template <class T, class U>
	constexpr inline void StrictSubtract(T const& t, U const& u, T& result) {
		using TLeft                = std::decay_t<T>;
		using TRight               = std::decay_t<U>;
		constexpr bool isStdT      = requires { typename TLeft::__underlying; };
		constexpr bool isStdU      = requires { typename TRight::__underlying; };
		constexpr bool isIntegralT = std::is_integral_v<TLeft>;
		constexpr bool isIntegralU = std::is_integral_v<TRight>;
		static_assert(isStdT || isIntegralT);
		static_assert(isStdU || isIntegralU);
		using TLeftInt  = std::conditional_t<isStdT, typename TLeft::__underlying, TLeft>;
		using TRightInt = std::conditional_t<isStdU, typename TRight::__underlying, TRight>;

		SubtractionHelper<TLeftInt, TRightInt, SubtractionMethod<TLeftInt, TRightInt>::method>::
		    SubtractThrow(t, u, result.__builtin_ref());
	}

	template <class T, class U>
	constexpr inline void WrappingSubtract(T const& t, U const& u, T& result) noexcept {
		using TLeft                = std::decay_t<T>;
		using TRight               = std::decay_t<U>;
		constexpr bool isStdT      = requires { typename TLeft::__underlying; };
		constexpr bool isStdU      = requires { typename TRight::__underlying; };
		constexpr bool isIntegralT = std::is_integral_v<TLeft>;
		constexpr bool isIntegralU = std::is_integral_v<TRight>;
		static_assert(isStdT || isIntegralT);
		static_assert(isStdU || isIntegralU);
		using TLeftInt       = std::conditional_t<isStdT, typename TLeft::__underlying, TLeft>;
		using TRightInt      = std::conditional_t<isStdU, typename TRight::__underlying, TRight>;
		using TLeftUnsigned  = std::make_unsigned_t<TLeftInt>;
		using TRightUnsigned = std::make_unsigned_t<TRightInt>;

		result = TLeftInt(TLeftUnsigned((TLeftInt) t) - TRightUnsigned((TRightInt) u));
	}

	template <class T, class U>
	constexpr inline void SaturatingSubtract(T const& t, U const& u, T& result) noexcept {
		using TLeft                = std::decay_t<T>;
		using TRight               = std::decay_t<U>;
		constexpr bool isStdT      = requires { typename TLeft::__underlying; };
		constexpr bool isStdU      = requires { typename TRight::__underlying; };
		constexpr bool isIntegralT = std::is_integral_v<TLeft>;
		constexpr bool isIntegralU = std::is_integral_v<TRight>;
		static_assert(isStdT || isIntegralT);
		static_assert(isStdU || isIntegralU);
		using TLeftInt  = std::conditional_t<isStdT, typename TLeft::__underlying, TLeft>;
		using TRightInt = std::conditional_t<isStdU, typename TRight::__underlying, TRight>;

		auto status =
		    SubtractionHelper<TLeftInt, TRightInt, SubtractionMethod<TLeftInt, TRightInt>::method>::
		        SubtractSat(t, u, result.__builtin_ref());
		if (status == Saturating_Underflow)
			result = std::numeric_limits<TLeftInt>::min();
		if (status == Saturating_Overflow)
			result = std::numeric_limits<TLeftInt>::max();
	}

	template <class T, class U>
	constexpr inline bool OverflowingSubtract(T const& t, U const& u, T& result) noexcept {
		if (!SafeSubtract(t, u, result)) {
			WrappingSubtract(t, u, result);
			return true;
		}

		return false;
	}

	template <class T>
	NODISCARD constexpr inline bool SafeNegate(T t, T& result) noexcept {
		using TDecayed            = std::decay_t<T>;
		constexpr bool isStd      = requires { typename TDecayed::__underlying; };
		constexpr bool isIntegral = std::is_integral_v<TDecayed>;
		static_assert(isStd || isIntegral);
		using TInt = std::conditional_t<isStd, typename TDecayed::__underlying, TDecayed>;
		return NegationHelper<TInt, std::numeric_limits<TInt>::is_signed>::Negative(
		    t, result.__builtin_ref());
	}

	template <class T>
	NODISCARD constexpr inline void StrictNegate(T t, T& result) noexcept {
		using TDecayed            = std::decay_t<T>;
		constexpr bool isStd      = requires { typename TDecayed::__underlying; };
		constexpr bool isIntegral = std::is_integral_v<TDecayed>;
		static_assert(isStd || isIntegral);
		using TInt = std::conditional_t<isStd, typename TDecayed::__underlying, TDecayed>;
		result.__builtin_ref() =
		    NegationHelper<TInt, std::numeric_limits<TInt>::is_signed>::NegativeThrow(t);
	}

	template <class T>
	NODISCARD constexpr inline void WrappingNegate(T t, T& result) noexcept {
		constexpr bool isStd = requires { typename std::decay_t<T>::__underlying; };
		using TInt =
		    std::conditional_t<isStd, typename std::decay_t<T>::__underlying, std::decay_t<T>>;
		result.__builtin_ref() = -TInt(t);
	}

	template <class T>
	NODISCARD constexpr inline void SaturatingNegate(T t, T& result) noexcept {
		using TDecayed            = std::decay_t<T>;
		constexpr bool isStd      = requires { typename TDecayed::__underlying; };
		constexpr bool isIntegral = std::is_integral_v<TDecayed>;
		static_assert(isStd || isIntegral);
		using TInt = std::conditional_t<isStd, typename TDecayed::__underlying, TDecayed>;

		static_assert(!std::is_unsigned_v<TInt>,
		              "SaturatingNegate does not supported for unsigned types");

		if (!NegationHelper<TInt, std::numeric_limits<TInt>::is_signed>::Negative(
		        t, result.__builtin_ref()))
			result.__builtin_ref() = std::numeric_limits<TInt>::max();
	}

	template <class T>
	constexpr inline bool OverflowingNegate(T const& t, T& result) noexcept {
		if (!SafeNegate(t, result)) {
			WrappingNegate(t, result);
			return true;
		}

		return false;
	}

	template<class T>
	inline constexpr T UncheckedShiftLeft(T t, int amount) noexcept {
		using TDecayed            = std::decay_t<T>;
		constexpr bool isStd      = requires { typename TDecayed::__underlying; };
		constexpr bool isIntegral = std::is_integral_v<TDecayed>;
		static_assert(isStd || isIntegral);
		using TInt = std::conditional_t<isStd, typename TDecayed::__underlying, TDecayed>;
        return T((TInt)t << amount);
	}

	template <class T>
	inline constexpr T UncheckedShiftRight(T t, int amount) noexcept {
		using TDecayed            = std::decay_t<T>;
		constexpr bool isStd      = requires { typename TDecayed::__underlying; };
		constexpr bool isIntegral = std::is_integral_v<TDecayed>;
		static_assert(isStd || isIntegral);
		using TInt = std::conditional_t<isStd, typename TDecayed::__underlying, TDecayed>;
		return T((TInt) t >> amount);
	}

	template <class T, class U, int method>
	class ModulusSimpleCaseHelper;

	template <class T, int method>
	class ModulusSignedCaseHelper;

	template <class T>
	class ModulusSignedCaseHelper<T, true> {
	   public:
		NODISCARD constexpr static bool SignedCase(T rhs, T& result) noexcept {
			if ((T) rhs == (T) -1) {
				result = 0;
				return true;
			}
			return false;
		}
	};

	template <class T>
	class ModulusSignedCaseHelper<T, false> {
	   public:
		NODISCARD constexpr static bool SignedCase(T, T&) noexcept { return false; }
	};

	template <class T, class U>
	class ModulusSimpleCaseHelper<T, U, true> {
	   public:
		NODISCARD constexpr static bool ModulusSimpleCase(U lhs, T rhs, T& result) {
			if (rhs != 0) {
				if (ModulusSignedCaseHelper<T, std::numeric_limits<T>::is_signed>::SignedCase(
				        rhs, result))
					return true;

				result = (T) (lhs % (T) rhs);
				return true;
			}
			throw DivisionByZeroException();
		}
	};

	template <class T, class U>
	class ModulusSimpleCaseHelper<T, U, false> {
	   public:
		NODISCARD constexpr static bool ModulusSimpleCase(U, T, T&) { return false; }
	};

	template <class T, class U, int method>
	class DivisionNegativeCornerCaseHelper;

	template <class T, class U, bool>
	class DivisionNegativeNegateU;

	template <class T, class U>
	class DivisionNegativeNegateU<T, U, true> {
	   public:
		NODISCARD constexpr static U div(T rhs, U lhs) {
			return lhs / (U) (~(uint32_t) (T) rhs + 1);
		}
	};

	template <class T, class U>
	class DivisionNegativeNegateU<T, U, false> {
	   public:
		NODISCARD constexpr static U div(T rhs, U lhs) {
			return lhs / (U) (~(uint64_t) (T) rhs + 1);
		}
	};

	template <class T, class U>
	class DivisionNegativeCornerCaseHelper<T, U, true> {
	   public:
		NODISCARD static bool NegativeCornerCase(U lhs, T rhs, T& result) {
			U tmp = DivisionNegativeNegateU<T, U, sizeof(T) == 4>::div(rhs, lhs);
			if (tmp <= (U) std::numeric_limits<T>::max()) {
				result = T((T) (~(uint64_t) tmp + 1));
				return true;
			}

			T maxt = std::numeric_limits<T>::max();
			if (tmp == (U) maxt + 1) {
				T mint = std::numeric_limits<T>::min();
				result = T(mint);
				return true;
			}

			throw IntegerOverflowException();
		}
	};

	template <class T, class U>
	class DivisionNegativeCornerCaseHelper<T, U, false> {
	   public:
		NODISCARD static bool NegativeCornerCase(U, T, T&) { return false; }
	};

	template <class T, class U, int method>
	class DivisionCornerCaseHelper;

	template <class T, class U>
	class DivisionCornerCaseHelper<T, U, true> {
	   public:
		NODISCARD static bool DivisionCornerCase1(U lhs, T rhs, T& result) {
			if ((T) rhs > 0) {
				result = T(lhs / (T) rhs);
				return true;
			}

			if ((T) rhs != 0) {
				if (DivisionNegativeCornerCaseHelper < T, U,
				    sizeof(U) >= 4 &&
				        sizeof(T) <= sizeof(U) > ::NegativeCornerCase(lhs, rhs, result))
					return true;

				result = T(lhs / (T) rhs);
				return true;
			}

			throw DivisionByZeroException();
		}
	};

	template <class T, class U>
	class DivisionCornerCaseHelper<T, U, false> {
	   public:
		NODISCARD static bool DivisionCornerCase1(U, T, T&) { return false; }
	};

	template <class T, class U, int method>
	class DivisionCornerCaseHelper2;

	template <class T, class U, bool>
	class DivNegateMin;

	template <class T, class U>
	class DivNegateMin<T, U, true> {
	   public:
		NODISCARD constexpr static bool value(T& result) {
			result = (T) (-(T) std::numeric_limits<U>::min());
			return true;
		}
	};

	template <class T, class U>
	class DivNegateMin<T, U, false> {
	   public:
		NODISCARD constexpr static bool value(T&) { return false; }
	};

	template <class T, class U>
	class DivisionCornerCaseHelper2<T, U, true> {
	   public:
		NODISCARD constexpr static bool DivisionCornerCase2(U lhs, T rhs, T& result) {
			if (lhs == std::numeric_limits<U>::min() && (T) rhs == -1) {
				T tmp = 0;
				if (DivNegateMin<T, U, sizeof(U) < sizeof(T)>::value(tmp))
					result = tmp;
				else
					throw IntegerOverflowException();

				return true;
			}
			return false;
		}
	};

	template <class T, class U>
	class DivisionCornerCaseHelper2<T, U, false> {
	   public:
		NODISCARD constexpr static bool DivisionCornerCase2(U, T, T&) { return false; }
	};


	template <class T>
	inline constexpr bool CarryingAdd(T left, T right, bool carry, T& res) noexcept {
		using TInt              = typename T::__underlying;
		using TUnsigned         = std::make_unsigned_t<TInt>;
		TInt leftValue  = (TInt) left;
		TInt rightValue = (TInt) right;
		if constexpr (std::numeric_limits<TInt>::is_signed) {
			auto sum = leftValue + rightValue;
			bool overflowed1 = rightValue < 0 && sum > leftValue || rightValue > 0 && sum < leftValue;
			res = TInt(sum + carry);
			bool overflowed2 = res < sum;
			return overflowed1 || overflowed2;
		} else
#if USE_INTRINSICS
		    if constexpr (sizeof(T) == 1) {
#ifdef MSVC
			TUnsigned sum;
			bool overflowed = _addcarry_u8(carry, leftValue, rightValue, &sum);
			res             = (TInt) sum;
			return overflowed;
#elif defined(CLANG)
			TUnsigned overflowed;
			res = (TInt) __builtin_addcb(leftValue, rightValue, carry, &overflowed);
			return overflowed != 0;
#else
			TUnsigned sum = carry + leftValue + rightValue;
			TUnsigned carryVector =
			    (leftValue & rightValue) ^ ((leftValue ^ rightValue) & ~sum);
			res = (TInt) sum;
			return carryVector >> 7;
#endif  // CLANG
		} else if constexpr (sizeof(T) == 2) {
#ifdef MSVC
			TUnsigned sum;
			bool overflowed = _addcarry_u16(carry, leftValue, rightValue, &sum);
			res             = (TInt) sum;
			return overflowed;
#elif defined(CLANG)
			TUnsigned overflowed;
			res = (TInt) __builtin_addcs(leftValue, rightValue, carry, &overflowed);
			return overflowed != 0;
#else
			TUnsigned sum = carry + leftValue + rightValue;
			TUnsigned carryVector =
			    (leftValue & rightValue) ^ ((leftValue ^ rightValue) & ~sum);
			res = (TInt) sum;
			return carryVector >> 15;
#endif  // CLANG
		} else if constexpr (sizeof(T) == 4) {
#ifdef MSVC
			TUnsigned sum;
			bool overflowed = _addcarry_u32(carry, leftValue, rightValue, &sum);
			res             = (TInt) sum;
			return overflowed;
#else
			TUnsigned overflowed;
			res = (TInt) __builtin_addc(leftValue, rightValue, carry, &overflowed);
			return overflowed != 0;
#endif
		} else {
#ifdef MSVC
			TUnsigned sum;
			bool overflowed = _addcarry_u64(carry, leftValue, rightValue, &sum);
			res             = (TInt) sum;
			return overflowed;
#else
			TUnsigned overflowed;
			res = (TInt) __builtin_addcll(leftValue, rightValue, carry, &overflowed);
			return overflowed != 0;
#endif
		}
#else
		{
			TUnsigned sum = carry + leftValue + rightValue;
			TUnsigned carryVector =
			    (leftValue & rightValue) ^ ((leftValue ^ rightValue) & ~sum);
			res = (TInt) sum;
			return carryVector >> ((sizeof(T) * 8) - 1);
		}
#endif
	}

	template <class T>
	inline constexpr bool BorrowingSub(T left, T right, bool borrow, T& res) noexcept {
		using TInt              = typename T::__underlying;
		using TUnsigned         = std::make_unsigned_t<TInt>;
		auto leftValue  = (TInt) left;
		auto rightValue = (TInt) right;
		if constexpr (std::numeric_limits<TInt>::is_signed) {
			auto diff = leftValue - rightValue;
			bool overflowed1 =
			    rightValue < 0 && diff < leftValue || rightValue > 0 && diff > leftValue;
			res              = TInt(diff - borrow);
			bool overflowed2 = res > diff;
			return overflowed1 || overflowed2;
		} else
#if USE_INTRINSICS
		    if constexpr (sizeof(T) == 1) {
#ifdef MSVC
			TUnsigned diff;
			bool overflowed = _subborrow_u8(borrow, leftValue, rightValue, &diff);
			res             = (TInt) diff;
			return overflowed;
#elif defined(CLANG)
			TUnsigned overflowed;
			res = (TInt) __builtin_subcb(leftValue, rightValue, borrow, &overflowed);
			return overflowed != 0;
#else
			TUnsigned diff = leftValue - rightValue - borrow;
			TUnsigned carryVector =
			    (diff & rightValue) ^ ((diff ^ rightValue) & ~leftValue);
			res = (TInt) diff;
			return carryVector >> 7;
#endif  // CLANG
		} else if constexpr (sizeof(T) == 2) {
#ifdef MSVC
			TUnsigned diff;
			bool overflowed = _subborrow_u16(borrow, leftValue, rightValue, &diff);
			res             = (TInt) diff;
			return overflowed;
#elif defined(CLANG)
			TUnsigned overflowed;
			res = (TInt) __builtin_subcs(leftValue, rightValue, borrow, &overflowed);
			return overflowed != 0;
#else
			TUnsigned diff = leftValue - rightValue - borrow;
			TUnsigned carryVector =
			    (diff & rightValue) ^ ((diff ^ rightValue) & ~leftValue);
			res = (TInt) diff;
			return carryVector >> 15;
#endif  // CLANG
		} else if constexpr (sizeof(T) == 4) {
#ifdef MSVC
			TUnsigned diff;
			bool overflowed = _subborrow_u32(borrow, leftValue, rightValue, &diff);
			res             = (TInt) diff;
			return overflowed;
#else
			TUnsigned overflowed;
			res = (TInt) __builtin_subc(leftValue, rightValue, borrow, &overflowed);
			return overflowed != 0;
#endif
		} else {
#ifdef MSVC
			TUnsigned diff;
			bool overflowed = _subborrow_u64(borrow, leftValue, rightValue, &diff);
			res             = (TInt) diff;
			return overflowed;
#else
			TUnsigned overflowed;
			res = (TInt) __builtin_subcll(leftValue, rightValue, borrow, &overflowed);
			return overflowed != 0;
#endif
		}
#else
		{
			TUnsigned diff = leftValue - rightValue - borrow;
			TUnsigned carryVector = (diff & rightValue) ^ ((diff ^ rightValue) & ~leftValue);
			res = (TInt) diff;
			return carryVector >> ((sizeof(T) * 8) - 1);
		}
#endif
	}

	inline constexpr std::tuple<uint8_t, int8_t> WideningMul8(const int8_t& lhs,
	                                                          const int8_t& rhs) noexcept {
		uint16_t product = (int16_t) lhs * rhs;
		return std::make_tuple(product & 0xFF, product >> 8);
	}

	inline constexpr std::tuple<uint8_t, uint8_t> WideningMul8u(const uint8_t& lhs,
	                                                            const uint8_t& rhs) noexcept {
		uint16_t product = (uint16_t) lhs * rhs;
		return std::make_tuple(product & 0xFF, product >> 8);
	}

	inline constexpr std::tuple<uint16_t, int16_t> WideningMul16(const int16_t& lhs,
	                                                             const int16_t& rhs) noexcept {
		uint32_t product = (int32_t) lhs * rhs;
		return std::make_tuple(product & 0xFFFF, product >> 16);
	}

	inline constexpr std::tuple<uint16_t, uint16_t> WideningMul16u(const uint16_t& lhs,
	                                                               const uint16_t& rhs) noexcept {
		uint32_t product = (uint32_t) lhs * rhs;
		return std::make_tuple(product & 0xFFFF, product >> 16);
	}

	inline constexpr std::tuple<uint32_t, int32_t> WideningMul32(const int32_t& lhs,
	                                                             const int32_t& rhs) noexcept {
		uint64_t product = (int64_t) lhs * rhs;
		return std::make_tuple(uint32_t(product & 0xFFFFFFFF), int32_t(product >> 32));
	}

	inline constexpr std::tuple<uint32_t, uint32_t> WideningMul32u(const uint32_t& lhs,
	                                                               const uint32_t& rhs) noexcept {
		uint64_t product = (uint64_t) lhs * rhs;
		return std::make_tuple(uint32_t(product & 0xFFFFFFFF), uint32_t(product >> 32));
	}

	inline CONSTEXPR_MULTIPLY std::tuple<uint64_t, int64_t> WideningMul64(
	    const int64_t& lhs, const int64_t& rhs) noexcept {
#if USE_INTRINSICS
#ifdef MSVC
		int64_t high;
		int64_t low = _mul128(lhs, rhs, &high);
		return std::make_tuple(low, high);
#else
		unsigned __int128 result = (unsigned __int128) lhs * rhs;
		return std::make_tuple(uint64_t(product & 0xFFFFFFFFFFFFFFFF), int64_t(product >> 64));
#endif
#else
		uint64_t a_low = (uint32_t) lhs;
		uint64_t a_high = lhs >> 32;
		uint64_t b_low = (uint32_t) rhs;
		uint64_t b_high = rhs >> 32;

		uint64_t res_low = a_low * b_low;
		uint64_t res_mid1 = a_low * b_high;
		uint64_t res_mid2 = a_high * b_low;
		uint64_t res_high = a_high * b_high;

		uint64_t carry = ((res_low >> 32) + (uint32_t) res_mid1 + (uint32_t) res_mid2) >> 32;

		uint64_t low = (res_mid1 << 32) + (res_mid2 << 32) + res_low;
		uint64_t high = res_high + (res_mid1 >> 32) + (res_mid2 >> 32) + carry;
		return std::make_tuple(low, (int64_t) high);
#endif
	}

	inline CONSTEXPR_MULTIPLY std::tuple<uint64_t, uint64_t> WideningMul64u(
	    const uint64_t& lhs, const uint64_t& rhs) noexcept {
#if USE_INTRINSICS
#ifdef MSVC
		uint64_t high;
		uint64_t low = _umul128(lhs, rhs, &high);
		return std::make_tuple(low, high);
#else
		unsigned __int128 result = (unsigned __int128) lhs * rhs;
		return std::make_tuple(uint64_t(product & 0xFFFFFFFFFFFFFFFF), uint64_t(product >> 64));
#endif
#else
		uint64_t a_low = (uint32_t) lhs;
		uint64_t a_high = lhs >> 32;
		uint64_t b_low = (uint32_t) rhs;
		uint64_t b_high = rhs >> 32;

		uint64_t res_low = a_low * b_low;
		uint64_t res_mid1 = a_low * b_high;
		uint64_t res_mid2 = a_high * b_low;
		uint64_t res_high = a_high * b_high;

		uint64_t carry = ((res_low >> 32) + (uint32_t) res_mid1 + (uint32_t) res_mid2) >> 32;

		uint64_t low = (res_mid1 << 32) + (res_mid2 << 32) + res_low;
		uint64_t high = res_high + (res_mid1 >> 32) + (res_mid2 >> 32) + carry;
		return std::make_tuple(low, high);
#endif
	}

	inline constexpr std::tuple<uint8_t, int8_t> CarryingMul8(const int8_t& lhs, const int8_t& rhs,
	                                                          const int8_t& carry) noexcept {
		uint16_t product = (int16_t) lhs * rhs;
		product += carry;
		return std::make_tuple(product & 0xFF, product >> 8);
	}

	inline constexpr std::tuple<uint8_t, uint8_t> CarryingMul8u(const uint8_t& lhs,
	                                                            const uint8_t& rhs,
	                                                            const uint8_t& carry) noexcept {
		uint16_t product = (uint16_t) lhs * rhs;
		product += carry;
		return std::make_tuple(product & 0xFF, product >> 8);
	}

	inline constexpr std::tuple<uint16_t, int16_t> CarryingMul16(const int16_t& lhs,
	                                                             const int16_t& rhs,
	                                                             const int16_t& carry) noexcept {
		uint32_t product = (int32_t) lhs * rhs;
		product += carry;
		return std::make_tuple(product & 0xFFFF, product >> 16);
	}

	inline constexpr std::tuple<uint16_t, uint16_t> CarryingMul16u(const uint16_t& lhs,
	                                                               const uint16_t& rhs,
	                                                               const uint16_t& carry) noexcept {
		uint32_t product = (uint32_t) lhs * rhs;
		product += carry;
		return std::make_tuple(product & 0xFFFF, product >> 16);
	}

	inline constexpr std::tuple<uint32_t, int32_t> CarryingMul32(const int32_t& lhs,
	                                                             const int32_t& rhs,
	                                                             const int32_t& carry) noexcept {
		uint64_t product = (int64_t) lhs * rhs;
		product += carry;
		return std::make_tuple(uint32_t(product & 0xFFFFFFFF), int32_t(product >> 32));
	}

	inline constexpr std::tuple<uint32_t, uint32_t> CarryingMul32u(const uint32_t& lhs,
	                                                               const uint32_t& rhs,
	                                                               const uint32_t& carry) noexcept {
		uint64_t product = (uint64_t) lhs * rhs;
		product += carry;
		return std::make_tuple(uint32_t(product & 0xFFFFFFFF), uint32_t(product >> 32));
	}

	inline CONSTEXPR_MULTIPLY std::tuple<uint64_t, int64_t> CarryingMul64(
	    const int64_t& lhs, const int64_t& rhs, const int64_t& carry) noexcept {
#if USE_INTRINSICS
#ifdef MSVC
		uint64_t high;
		uint64_t low = _mul128(lhs, rhs, (int64_t*) &high);
		auto cached  = low;
		low += carry;
		if (carry > 0 && low < cached)
			high++;
		if (carry < 0 && low > cached)
			high--;
		return std::make_tuple(int64_t(low), int64_t(high));
#else
		unsigned __int128 result = (unsigned __int128) lhs * rhs;
		result += carry;
		return std::make_tuple(uint64_t(product & 0xFFFFFFFFFFFFFFFF), int64_t(product >> 64));
#endif
#else
		uint64_t a_low = (uint32_t) lhs;
		uint64_t a_high = lhs >> 32;
		uint64_t b_low = (uint32_t) rhs;
		uint64_t b_high = rhs >> 32;

		uint64_t res_low = a_low * b_low;
		uint64_t res_mid1 = a_low * b_high;
		uint64_t res_mid2 = a_high * b_low;
		uint64_t res_high = a_high * b_high;

		uint64_t res_carry = ((res_low >> 32) + (uint32_t) res_mid1 + (uint32_t) res_mid2) >> 32;

		uint64_t low = (res_mid1 << 32) + (res_mid2 << 32) + res_low;
		uint64_t high = res_high + (res_mid1 >> 32) + (res_mid2 >> 32) + res_carry;
		auto sum = low + carry;
		if (carry > 0 && sum < low)
			high++;
		if (carry < 0 && sum > low)
			high--;
		return std::make_tuple(low, (int64_t) high);
#endif
	}

	inline CONSTEXPR_MULTIPLY std::tuple<uint64_t, uint64_t> CarryingMul64u(
	    const uint64_t& lhs, const uint64_t& rhs, const uint64_t& carry) noexcept {
#if USE_INTRINSICS
#ifdef MSVC
		uint64_t high;
		uint64_t low = _umul128(lhs, rhs, &high);
		auto cached  = low;
		low += carry;
		if (carry > 0 && low < cached)
			high++;
		return std::make_tuple(low, high);
#else
		unsigned __int128 result = (unsigned __int128) lhs * rhs;
		result += carry;
		return std::make_tuple(uint64_t(product & 0xFFFFFFFFFFFFFFFF), uint64_t(product >> 64));
#endif
#else
		uint64_t a_low = (uint32_t) lhs;
		uint64_t a_high = lhs >> 32;
		uint64_t b_low = (uint32_t) rhs;
		uint64_t b_high = rhs >> 32;

		uint64_t res_low = a_low * b_low;
		uint64_t res_mid1 = a_low * b_high;
		uint64_t res_mid2 = a_high * b_low;
		uint64_t res_high = a_high * b_high;

		uint64_t res_carry = ((res_low >> 32) + (uint32_t) res_mid1 + (uint32_t) res_mid2) >> 32;

		uint64_t low = (res_mid1 << 32) + (res_mid2 << 32) + res_low;
		uint64_t high = res_high + (res_mid1 >> 32) + (res_mid2 >> 32) + res_carry;
		auto sum = low + carry;
		if (carry > 0 && sum < low)
			high++;
		return std::make_tuple(low, high);
#endif
	}

	template <class T>
	inline constexpr T RotateLeft(T input, int shift) noexcept {
		using TInt      = typename T::__underlying;
		using TUnsigned = std::make_unsigned_t<TInt>;
		return (TInt) std::rotl(TUnsigned((TInt) input), shift);
	}

	template <class T>
	inline constexpr T RotateRight(T input, int shift) noexcept {
		using TInt      = typename T::__underlying;
		using TUnsigned = std::make_unsigned_t<TInt>;
		return (TInt) std::rotr(TUnsigned((TInt) input), shift);
	}

	template <class T>
	inline constexpr unsigned LeadingZeroCount(T input) noexcept {
		using TInt      = typename T::__underlying;
		using TUnsigned = std::make_unsigned_t<TInt>;
		return std::countl_zero(TUnsigned((TInt) input));
	}

	template <class T>
	inline constexpr unsigned TrailingZeroCount(T input) noexcept {
		using TInt      = typename T::__underlying;
		using TUnsigned = std::make_unsigned_t<TInt>;
		return std::countr_zero(TUnsigned((TInt) input));
	}

	template <class T>
	inline constexpr unsigned PopCount(T input) noexcept {
		using TInt      = typename T::__underlying;
		using TUnsigned = std::make_unsigned_t<TInt>;
		return std::popcount(TUnsigned((TInt) input));
	}

	template <std::integral T, std::integral U>
	inline constexpr T Div(T lhs, U rhs) {
		return lhs / rhs;
	}

	inline constexpr const uint8_t BitReverseLookup[256] = {
	    0x00, 0x80, 0x40, 0xC0, 0x20, 0xA0, 0x60, 0xE0, 0x10, 0x90, 0x50, 0xD0, 0x30, 0xB0, 0x70,
	    0xF0, 0x08, 0x88, 0x48, 0xC8, 0x28, 0xA8, 0x68, 0xE8, 0x18, 0x98, 0x58, 0xD8, 0x38, 0xB8,
	    0x78, 0xF8, 0x04, 0x84, 0x44, 0xC4, 0x24, 0xA4, 0x64, 0xE4, 0x14, 0x94, 0x54, 0xD4, 0x34,
	    0xB4, 0x74, 0xF4, 0x0C, 0x8C, 0x4C, 0xCC, 0x2C, 0xAC, 0x6C, 0xEC, 0x1C, 0x9C, 0x5C, 0xDC,
	    0x3C, 0xBC, 0x7C, 0xFC, 0x02, 0x82, 0x42, 0xC2, 0x22, 0xA2, 0x62, 0xE2, 0x12, 0x92, 0x52,
	    0xD2, 0x32, 0xB2, 0x72, 0xF2, 0x0A, 0x8A, 0x4A, 0xCA, 0x2A, 0xAA, 0x6A, 0xEA, 0x1A, 0x9A,
	    0x5A, 0xDA, 0x3A, 0xBA, 0x7A, 0xFA, 0x06, 0x86, 0x46, 0xC6, 0x26, 0xA6, 0x66, 0xE6, 0x16,
	    0x96, 0x56, 0xD6, 0x36, 0xB6, 0x76, 0xF6, 0x0E, 0x8E, 0x4E, 0xCE, 0x2E, 0xAE, 0x6E, 0xEE,
	    0x1E, 0x9E, 0x5E, 0xDE, 0x3E, 0xBE, 0x7E, 0xFE, 0x01, 0x81, 0x41, 0xC1, 0x21, 0xA1, 0x61,
	    0xE1, 0x11, 0x91, 0x51, 0xD1, 0x31, 0xB1, 0x71, 0xF1, 0x09, 0x89, 0x49, 0xC9, 0x29, 0xA9,
	    0x69, 0xE9, 0x19, 0x99, 0x59, 0xD9, 0x39, 0xB9, 0x79, 0xF9, 0x05, 0x85, 0x45, 0xC5, 0x25,
	    0xA5, 0x65, 0xE5, 0x15, 0x95, 0x55, 0xD5, 0x35, 0xB5, 0x75, 0xF5, 0x0D, 0x8D, 0x4D, 0xCD,
	    0x2D, 0xAD, 0x6D, 0xED, 0x1D, 0x9D, 0x5D, 0xDD, 0x3D, 0xBD, 0x7D, 0xFD, 0x03, 0x83, 0x43,
	    0xC3, 0x23, 0xA3, 0x63, 0xE3, 0x13, 0x93, 0x53, 0xD3, 0x33, 0xB3, 0x73, 0xF3, 0x0B, 0x8B,
	    0x4B, 0xCB, 0x2B, 0xAB, 0x6B, 0xEB, 0x1B, 0x9B, 0x5B, 0xDB, 0x3B, 0xBB, 0x7B, 0xFB, 0x07,
	    0x87, 0x47, 0xC7, 0x27, 0xA7, 0x67, 0xE7, 0x17, 0x97, 0x57, 0xD7, 0x37, 0xB7, 0x77, 0xF7,
	    0x0F, 0x8F, 0x4F, 0xCF, 0x2F, 0xAF, 0x6F, 0xEF, 0x1F, 0x9F, 0x5F, 0xDF, 0x3F, 0xBF, 0x7F,
	    0xFF,
	};

	inline constexpr uint8_t ReverseBits8u(uint8_t n) { return BitReverseLookup[n]; }

	inline constexpr int8_t ReverseBits8(int8_t n) { return (int8_t) ReverseBits8u(n); }

	inline constexpr uint16_t ReverseBits16u(uint16_t n) {
		return (BitReverseLookup[n & 0xFF] << 8) | (BitReverseLookup[(n >> 8) & 0xFF]);
	}

	inline constexpr int16_t ReverseBits16(int16_t n) { return (int16_t) ReverseBits16u(n); }

	inline constexpr uint32_t ReverseBits32u(uint32_t n) {
		return (BitReverseLookup[n & 0xFF] << 24) | (BitReverseLookup[(n >> 8) & 0xFF] << 16) |
		       (BitReverseLookup[(n >> 16) & 0xFF] << 8) | BitReverseLookup[(n >> 24) & 0xFF];
	}

	inline constexpr int32_t ReverseBits32(int32_t n) { return (int32_t) ReverseBits32u(n); }

	inline constexpr uint64_t ReverseBits64u(uint64_t n) {
		return (uint64_t(BitReverseLookup[n & 0xFF]) << 56) |
		       (uint64_t(BitReverseLookup[(n >> 8) & 0xFF]) << 48) |
		       (uint64_t(BitReverseLookup[(n >> 16) & 0xFF]) << 40) |
		       (uint64_t(BitReverseLookup[(n >> 24) & 0xFF]) << 32) |
		       (uint64_t(BitReverseLookup[(n >> 32) & 0xFF]) << 24) |
		       (uint64_t(BitReverseLookup[(n >> 40) & 0xFF]) << 16) |
		       (uint64_t(BitReverseLookup[(n >> 48) & 0xFF]) << 8) |
		       uint64_t(BitReverseLookup[(n >> 56) & 0xFF]);
	}

	inline constexpr int64_t ReverseBits64(int64_t n) { return (int64_t) ReverseBits64u(n); }

	template<class T>
	inline T ByteSwap16(T src) noexcept
	{
#if USE_INTRINSICS
#ifdef MSVC
		return (typename T::__underlying)_byteswap_ushort(src);
#else
		return (typename T::__underlying) __builtin_bswap16(src);
#endif
#else
		return (typename T::__underlying) ((src << 8) | (src >> 8));
#endif
	}

	template <class T>
	inline T ByteSwap32(T src) noexcept {
#if USE_INTRINSICS
#ifdef MSVC
		return (typename T::__underlying) _byteswap_ulong(src);
#else
		return (typename T::__underlying) __builtin_bswap32(src);
#endif
#else
		return (typename T::__underlying) (((src << 24) | (src >> 24)) | ((src << 8) & 0x00FF0000) |
		       ((src >> 8) & 0x0000FF00));
#endif
	}

	template <class T>
	inline T ByteSwap64(T src) noexcept {
#if USE_INTRINSICS
#ifdef MSVC
		return (typename T::__underlying) _byteswap_uint64(src);
#else
		return (typename T::__underlying) __builtin_bswap64(src);
#endif
#else
		return (typename T::__underlying) (((src << 56) | (src >> 56)) 
			| ((src << 40) & 0x00FF000000000000) 
			| ((src >> 40) & 0x000000FF00000000) 
			| ((src << 24) & 0x0000FF0000000000) 
			| ((src >> 24) & 0x00000000FF000000) 
			| ((src << 8) & 0x00000000FF000000) 
			| ((src >> 8) & 0x0000000000FF0000));
#endif
	}

	inline constexpr bool IsLittleEndian() noexcept {
		return std::endian::native == std::endian::little;
	}

	inline constexpr bool IsBigEndian() noexcept {
		return std::endian::native == std::endian::big;
	}

	struct Struct {};
}  // namespace Builtin