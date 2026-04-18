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

namespace CppAdvance {
	enum SafeIntErrorCode { SafeInt_NoError = 0, SafeInt_Overflow, SafeInt_DivisionByZero };

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
			if (t != std::numeric_limits<T>::min()) {
				out = -t;
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

		NODISCARD constexpr static bool Negative(T t, T& out) { return false; }
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
		NODISCARD constexpr static SafeIntErrorCode Modulus(const T& t, const U& u,
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
		NODISCARD constexpr static SafeIntErrorCode Modulus(const T& t, const U& u,
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
		NODISCARD constexpr static SafeIntErrorCode Modulus(const T& t, const U& u,
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
		NODISCARD constexpr static SafeIntErrorCode Modulus(const T& t, const U& u,
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
		NODISCARD constexpr static SafeIntErrorCode Modulus(const T& t, const U& u,
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

			if (tmp > std::numeric_limits<T>::max() || tmp < std::numeric_limits<T>::min())
				return false;
			ret = (T) tmp;
			return true;
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

			if (tmp > std::numeric_limits<T>::max())
				return false;
			ret = (T) tmp;
			return true;
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

			if (tmp > (int64_t) std::numeric_limits<T>::max() ||
			    tmp < (int64_t) std::numeric_limits<T>::min())
				return false;
			ret = (T) tmp;
			return true;
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

			if (tmp > (uint64_t) std::numeric_limits<T>::max())
				return false;
			ret = (T) tmp;
			return true;
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
#elif defined(GCC) || defined(CLANG)
	inline bool MultiplyUint64(uint64_t a, uint64_t b, uint64_t* ret) noexcept {
		return !__builtin_umulll_overflow(a, b, (unsigned long long*) ret);
	}

	inline bool MultiplyInt64(int64_t a, int64_t b, int64_t* ret) noexcept {
		return !__builtin_smulll_overflow(a, b, (unsigned long long*) ret);
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
			if (b < 0 && a != 0)
				return false;

#if USE_INTRINSICS
			return MultiplyUint64(a, (uint64_t) b, ret);
#else
			return LargeIntRegMultiply<uint64_t, uint32_t>::RegMultiply(a, (uint32_t) b, ret);
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
			if (b < 0 && a != 0)
				return false;

#if USE_INTRINSICS
			return MultiplyUint64(a, (uint64_t) b, ret);
#else
			return LargeIntRegMultiply<uint64_t, uint32_t>::RegMultiply(a, (uint64_t) b, ret);
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

			if (bHigh != 0 && a != 0)
				return false;

			if (a < 0) {
				a = (std::int32_t)
				    AbsValueHelper<std::int32_t, AbsMethodHelper<std::int32_t>::method>::Abs(a);
				fIsNegative = true;
			}

			std::uint64_t tmp = (std::uint32_t) a * (std::uint64_t) bLow;

			if (!fIsNegative) {
				if (tmp <= (std::uint64_t) std::numeric_limits<std::int32_t>::max()) {
					*ret = (std::int32_t) tmp;
					return true;
				}
			} else {
				if (tmp <= (std::uint64_t) std::numeric_limits<std::int32_t>::max() + 1) {
					*ret = SignedNegation<std::int32_t>::Value(tmp);
					return true;
				}
			}

			return false;
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
			if ((std::uint32_t) (b >> 32) != 0 && a != 0)
				return false;

			std::uint64_t tmp = b * (std::uint64_t) a;

			if ((std::uint32_t) (tmp >> 32) != 0)
				return false;

			*ret = (std::uint32_t) tmp;
			return true;
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
			if (b < 0 && a != 0)
				return false;
			return LargeIntRegMultiply<uint32_t, uint64_t>::RegMultiply(a, (uint64_t) b, ret);
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
					if (tmp <= (std::uint64_t) std::numeric_limits<std::int64_t>::min()) {
						*ret = SignedNegation<std::int64_t>::Value(tmp);
						return true;
					}
				} else {
					if (tmp <= (std::uint64_t) std::numeric_limits<std::int64_t>::max()) {
						*ret = (std::int64_t) tmp;
						return true;
					}
				}
			}

			return false;
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
					if (tmp <= (std::uint64_t) std::numeric_limits<std::int64_t>::min()) {
						*ret = SignedNegation<std::int64_t>::Value(tmp);
						return true;
					}
				} else {
					if (tmp <= (std::uint64_t) std::numeric_limits<std::int64_t>::max()) {
						*ret = (std::int64_t) tmp;
						return true;
					}
				}
			}

			return false;
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
					if (tmp <= (std::uint64_t) std::numeric_limits<std::int64_t>::min()) {
						*ret = SignedNegation<std::int64_t>::Value(tmp);
						return true;
					}
				} else {
					if (tmp <= (std::uint64_t) std::numeric_limits<std::int64_t>::max()) {
						*ret = (std::int64_t) tmp;
						return true;
					}
				}
			}

			return false;
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

			if (MultiplyInt64(a, b, &tmp)) {
				if (tmp > std::numeric_limits<std::int32_t>::max() ||
				    tmp < std::numeric_limits<std::int32_t>::min()) {
					return false;
				}

				*ret = (std::int32_t) tmp;
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
					if (tmp <= (std::uint32_t) std::numeric_limits<std::int32_t>::min()) {
						*ret = SignedNegation<std::int32_t>::Value(tmp);
						return true;
					}
				} else {
					if (tmp <= (std::uint32_t) std::numeric_limits<std::int32_t>::max()) {
						*ret = (std::int32_t) tmp;
						return true;
					}
				}
			}

			return false;
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
					if (tmp <= (std::uint64_t) std::numeric_limits<std::int64_t>::min()) {
						*ret = SignedNegation<std::int64_t>::Value(tmp);
						return true;
					}
				} else {
					if (tmp <= (std::uint64_t) std::numeric_limits<std::int64_t>::max()) {
						*ret = (std::int64_t) tmp;
						return true;
					}
				}
			}

			return false;
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
			if (LargeIntRegMultiply<uint32_t, uint64_t>::RegMultiply(t, u1, &tmp) &&
			    SafeCastHelper<T, uint32_t, CastMethodHelper<T, uint32_t>::method>::Cast(tmp, ret))
				return true;
			return false;
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
			if (LargeIntRegMultiply<uint32_t, int64_t>::RegMultiply((uint32_t) t, u1, &tmp) &&
			    SafeCastHelper<T, uint32_t, CastMethodHelper<T, uint32_t>::method>::Cast(tmp, ret))
				return true;
			return false;
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
			if (LargeIntRegMultiply<int32_t, uint64_t>::RegMultiply((int32_t) t, u1, &tmp) &&
			    SafeCastHelper<T, int32_t, CastMethodHelper<T, int32_t>::method>::Cast(tmp, ret))
				return true;
			return false;
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
			if (LargeIntRegMultiply<int32_t, int64_t>::RegMultiply((int32_t) t, u1, &tmp) &&
			    SafeCastHelper<T, int32_t, CastMethodHelper<T, int32_t>::method>::Cast(tmp, ret))
				return true;
			return false;
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
		NODISCARD constexpr static SafeIntErrorCode Divide(const T& t, const U& u,
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
		NODISCARD constexpr static SafeIntErrorCode Divide(const T& t, const U& u,
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

			if (AbsValueHelper<U, AbsMethodHelper<U>::method>::Abs(u) > t) {
				result = 0;
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
		NODISCARD constexpr static SafeIntErrorCode Divide(const T& t, const U& u,
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
		NODISCARD constexpr static SafeIntErrorCode Divide(const T& t, const U& u,
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
		NODISCARD constexpr static SafeIntErrorCode Divide(const T& t, const U& u,
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
		NODISCARD constexpr static SafeIntErrorCode Divide(const T& t, const U& u,
		                                                   T& result) noexcept {
			if (u == 0)
				return SafeInt_DivisionByZero;

			if (t == 0) {
				result = 0;
				return SafeInt_NoError;
			}

			if (t == std::numeric_limits<T>::min() && u == (U) -1)
				return SafeInt_Overflow;
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
			if (tmp <= (int32_t) std::numeric_limits<T>::max()) {
				result = (T) tmp;
				return true;
			}
			return false;
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
			if (tmp >= t) {
				result = (T) tmp;
				return true;
			}
			return false;
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
			if (tmp >= t && tmp <= std::numeric_limits<T>::max()) {
				result = (T) tmp;
				return true;
			}
			return false;
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
			if (tmp >= t) {
				result = (T) tmp;
				return true;
			}
			return false;
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
			if (tmp >= t && tmp <= std::numeric_limits<T>::max()) {
				result = (T) tmp;
				return true;
			}
			return false;
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
			if (tmp <= (int32_t) std::numeric_limits<T>::max() &&
			    tmp >= (int32_t) std::numeric_limits<T>::min()) {
				result = (T) tmp;
				return true;
			}
			return false;
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
			if (tmp <= (int64_t) std::numeric_limits<T>::max() &&
			    tmp >= (int64_t) std::numeric_limits<T>::min()) {
				result = (T) tmp;
				return true;
			}
			return false;
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
			if (tmp <= std::numeric_limits<T>::max()) {
				result = (T) tmp;
				return true;
			}
			return false;
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
				tmp = AbsValueHelper<U, AbsMethodHelper<U>::method>::Abs(u);
				if (tmp <= t) {
					result = t - tmp;
					return true;
				}
			} else {
				tmp = (uint64_t) t + (uint64_t) u;
				if (tmp >= t) {
					result = (T) tmp;
					return true;
				}
			}
			return false;
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
				if (t >= ~(uint64_t) (u) + 1) {
					result = (T) (t + u);
					return true;
				}
			} else {
				uint64_t tmp = (uint64_t) t + (uint64_t) u;
				if (tmp <= std::numeric_limits<T>::max()) {
					result = (T) tmp;
					return true;
				}
			}
			return false;
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
			if (t >= 0) {
				if (u >= 0 && tmp < t)
					return false;
			} else {
				if (u < 0 && tmp > t)
					return false;
			}

			result = (T) tmp;
			return true;
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
			if (AdditionHelper<int64_t, int64_t, AdditionState_CastInt64CheckOverflow>::Addition(
			        (int64_t) t, (int64_t) u, tmp) &&
			    tmp <= std::numeric_limits<T>::max() && tmp >= std::numeric_limits<T>::min()) {
				result = (T) tmp;
				return true;
			}

			return false;
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
			if ((int64_t) tmp >= t) {
				result = (T) (int64_t) tmp;
				return true;
			}

			return false;
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
			if ((int64_t) tmp >= t) {
				result = (int64_t) tmp;
				return true;
			}

			result = 0;
			return false;
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
			if ((uint32_t) (u >> 32) == 0) {
				uint32_t tmp = (uint32_t) t + (uint32_t) u;
				if ((int32_t) tmp >= t &&
				    SafeCastHelper<T, int32_t, CastMethodHelper<T, int32_t>::method>::Cast(
				        (int32_t) tmp, result))
					return true;
			}

			return false;
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
			if (u <= t) {
				result = (T) (t - u);
				return true;
			}
			return false;
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
			if (SafeCastHelper<T, int32_t, CastMethodHelper<T, int32_t>::method>::Cast(tmp,
			                                                                           result)) {
				result = (T) tmp;
				return true;
			}
			return false;
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
			if (tmp >= (int32_t) std::numeric_limits<T>::min()) {
				result = (T) tmp;
				return true;
			}
			return false;
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
			return SafeCastHelper<T, int64_t, CastMethodHelper<T, int64_t>::method>::Cast(tmp,
			                                                                              result);
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
			if (tmp >= (int64_t) std::numeric_limits<T>::min()) {
				result = (T) tmp;
				return true;
			}
			return false;
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
				if ((uint64_t) u <= t) {
					result = (T) (t - (uint64_t) u);
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
				if ((uint64_t) u <= t) {
					result = (T) (t - (T) u);
					return true;
				}
			} else {
				uint64_t tmp = t + ~(uint64_t) (u) + 1;
				if (tmp <= std::numeric_limits<T>::max()) {
					result = (T) tmp;
					return true;
				}
			}
			return false;
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
			if ((t >= 0 && u <= 0 && tmp < t) || (u >= 0 && tmp > t)) {
				return false;
			}
			result = (T) tmp;
			return true;
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
			if (t >= 0) {
				if (u >= 0) {
					if (tmp >= std::numeric_limits<T>::min()) {
						result = (T) tmp;
						return true;
					}
				} else {
					if (tmp >= t && tmp <= std::numeric_limits<T>::max()) {
						result = (T) tmp;
						return true;
					}
				}
			} else {
				if (u >= 0) {
					if (tmp <= t && tmp >= std::numeric_limits<T>::min()) {
						result = (T) tmp;
						return true;
					}
				} else {
					if (tmp <= std::numeric_limits<T>::max()) {
						result = (T) tmp;
						return true;
					}
				}
			}
			return false;
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
			if ((int64_t) tmp <= t) {
				result = (T) (int64_t) tmp;
				return true;
			}
			return false;
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
			if (t < 0) {
				if (u <= absMinT - AbsValueHelper<T, AbsMethodHelper<T>::method>::Abs(t)) {
					result = (T) (t - u);
					return true;
				}
			} else {
				if (u <= absMinT + (uint64_t) t) {
					result = (T) (t - u);
					return true;
				}
			}
			return false;
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
			if ((int64_t) tmp <= t) {
				result = (int64_t) tmp;
				return true;
			}
			return false;
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
	NODISCARD constexpr inline bool SafeModulus(T t, U u, T& result) noexcept {
		return ModulusHelper<T, U, ValidComparison<T, U>::method>::Modulus(t, u, result) ==
		       SafeInt_NoError;
	}

	template <class T, class U>
	NODISCARD constexpr inline bool SafeMultiply(T t, U u, T& result) noexcept {
		return MultiplicationHelper<T, U, MultiplicationMethod<T, U>::method>::Multiply(t, u,
		                                                                                result);
	}

	template <class T, class U>
	NODISCARD constexpr inline bool SafeDivide(T t, U u, T& result) noexcept {
		return DivisionHelper<T, U, DivisionMethod<T, U>::method>::Divide(t, u, result) ==
		       SafeInt_NoError;
	}

	template <class T, class U>
	NODISCARD constexpr inline bool SafeAdd(T t, U u, T& result) noexcept {
		return AdditionHelper<T, U, AdditionMethod<T, U>::method>::Addition(t, u, result);
	}

	template <class T, class U>
	NODISCARD constexpr inline bool SafeSubtract(T t, U u, T& result) noexcept {
		return SubtractionHelper<T, U, SubtractionMethod<T, U>::method>::Subtract(t, u, result);
	}

	template <class T>
	NODISCARD constexpr inline bool SafeNegate(T t, T& result) noexcept {
		return NegationHelper<T, std::numeric_limits<T>::is_signed>::Negative(t, result);
	}

	template <class T>
	struct SafeInt {
		static_assert(__details::NumericType<T>::isInt, "T must be integer");
		template <class U>
		friend struct SafeInt;
		constexpr SafeInt() noexcept = default;

		constexpr decltype(auto) __ref() const noexcept { return *this; }
		/*constexpr SafeInt(const T& i) noexcept : value(i) {
		    static_assert(__details::NumericType<T>::isInt, "T must be integer");
		}*/

		/*constexpr explicit SafeInt(bool b) noexcept : value(T(b ? 1 : 0)) {
		    static_assert(__details::NumericType<T>::isInt, "T must be integer");
		}*/

		template <class U>
		constexpr explicit(sizeof(U) > sizeof(T) ||
		                   (sizeof(U) == sizeof(T) && (std::numeric_limits<T>::is_signed !=
		                                               std::numeric_limits<U>::is_signed)) ||
		                   (!std::numeric_limits<T>::is_signed &&
		                    std::numeric_limits<U>::is_signed)) SafeInt(const SafeInt<U>& u)
		    : value(0) {
			static_assert(__details::NumericType<T>::isInt, "T must be integer");
			value = (T) SafeInt<T>((U) u);
		}

		template <class U>
		constexpr explicit(sizeof(U) > sizeof(T) ||
		                   (sizeof(U) == sizeof(T) && (std::numeric_limits<T>::is_signed !=
		                                               std::numeric_limits<U>::is_signed)) ||
		                   (!std::numeric_limits<T>::is_signed &&
		                    std::numeric_limits<U>::is_signed))
		    SafeInt(const U& i) requires(std::is_integral_v<U>)
		    : value(0) {
			static_assert(__details::NumericType<T>::isInt, "T must be integer");
			if constexpr (std::is_same_v<T, U>) {
				value = i;
			} else if constexpr (std::is_same_v<U, bool>) {
				value = T(i ? 1 : 0);
			} else {
				SafeCastHelper<T, U, CastMethodHelper<T, U>::method>::CastThrow(i, value);
			}
		}

		template <class U>
		constexpr SafeInt<T>& operator=(const U& rhs) requires(
		    std::is_integral_v<U> &&
		    (sizeof(U) < sizeof(T) ||
		     (sizeof(U) == sizeof(T) &&
		      (std::numeric_limits<T>::is_signed == std::numeric_limits<U>::is_signed)))) {
			if constexpr (!std::numeric_limits<T>::is_signed && std::numeric_limits<U>::is_signed) {
				static_assert(false, "Cannot assign signed value to unsigned type");
			}
			value = SafeInt<T>(rhs);
			return *this;
		}

		template <class U>
		constexpr SafeInt<T>& operator=(const SafeInt<U>& rhs) requires(
		    sizeof(U) < sizeof(T) ||
		    (sizeof(U) == sizeof(T) &&
		     (std::numeric_limits<T>::is_signed == std::numeric_limits<U>::is_signed))) {
			if constexpr (!std::numeric_limits<T>::is_signed && std::numeric_limits<U>::is_signed) {
				static_assert(false, "Cannot assign signed value to unsigned type");
			}
			SafeCastHelper<T, U, CastMethodHelper<T, U>::method>::CastThrow(rhs.ref(), value);
			return *this;
		}

		constexpr explicit operator bool() const noexcept { return !!value; }

		constexpr explicit(sizeof(T) > 1 || (std::numeric_limits<T>::is_signed !=
		                                     std::numeric_limits<char>::is_signed))
		operator char() const {
			char v = 0;
			SafeCastHelper<char, T, CastMethodHelper<char, T>::method>::CastThrow(value, v);
			return v;
		}

		constexpr explicit(sizeof(T) > 1 || (std::numeric_limits<T>::is_signed !=
		                                     std::numeric_limits<signed char>::is_signed))
		operator signed char() const {
			signed char v = 0;
			SafeCastHelper<signed char, T, CastMethodHelper<signed char, T>::method>::CastThrow(
			    value, v);
			return v;
		}

		constexpr explicit(sizeof(T) > 1 || (std::numeric_limits<T>::is_signed !=
		                                     std::numeric_limits<unsigned char>::is_signed))
		operator unsigned char() const {
			unsigned char v = 0;
			SafeCastHelper<unsigned char, T, CastMethodHelper<unsigned char, T>::method>::CastThrow(
			    value, v);
			return v;
		}

		constexpr explicit(sizeof(T) > 2 ||
		                   (sizeof(T) == 2 && std::numeric_limits<T>::is_signed !=
		                                          std::numeric_limits<signed char>::is_signed))
		operator short() const {
			short v = 0;
			SafeCastHelper<short, T, CastMethodHelper<short, T>::method>::CastThrow(value, v);
			return v;
		}

		constexpr explicit(sizeof(T) > 2 ||
		                   (sizeof(T) == 2 && std::numeric_limits<T>::is_signed !=
		                                          std::numeric_limits<unsigned char>::is_signed))
		operator unsigned short() const {
			unsigned short v = 0;
			SafeCastHelper<unsigned short, T,
			               CastMethodHelper<unsigned short, T>::method>::CastThrow(value, v);
			return v;
		}

		constexpr explicit(sizeof(T) > 4 ||
		                   (sizeof(T) == 4 && std::numeric_limits<T>::is_signed !=
		                                          std::numeric_limits<int>::is_signed))
		operator int() const {
			int v = 0;
			SafeCastHelper<int, T, CastMethodHelper<int, T>::method>::CastThrow(value, v);
			return v;
		}

		constexpr explicit(sizeof(T) > 4 ||
		                   (sizeof(T) == 4 && std::numeric_limits<T>::is_signed !=
		                                          std::numeric_limits<unsigned int>::is_signed))
		operator unsigned int() const {
			unsigned int v = 0;
			SafeCastHelper<unsigned int, T, CastMethodHelper<unsigned int, T>::method>::CastThrow(
			    value, v);
			return v;
		}

		constexpr explicit(sizeof(T) > sizeof(long) ||
		                   (sizeof(T) == sizeof(long) && std::numeric_limits<T>::is_signed !=
		                                                     std::numeric_limits<long>::is_signed))
		operator long() const {
			long v = 0;
			SafeCastHelper<long, T, CastMethodHelper<long, T>::method>::CastThrow(value, v);
			return v;
		}

		constexpr explicit(sizeof(T) > sizeof(long) ||
		                   (sizeof(T) == sizeof(long) &&
		                    std::numeric_limits<T>::is_signed !=
		                        std::numeric_limits<unsigned long>::is_signed))
		operator unsigned long() const {
			unsigned long v = 0;
			SafeCastHelper<unsigned long, T, CastMethodHelper<unsigned long, T>::method>::CastThrow(
			    value, v);
			return v;
		}

		constexpr explicit(sizeof(T) == 8 && std::numeric_limits<T>::is_signed !=
		                                         std::numeric_limits<long long>::is_signed)
		operator long long() const {
			long long v = 0;
			SafeCastHelper<long long, T, CastMethodHelper<long long, T>::method>::CastThrow(value,
			                                                                                v);
			return v;
		}

		constexpr explicit(sizeof(T) == 8 && std::numeric_limits<T>::is_signed !=
		                                         std::numeric_limits<unsigned long long>::is_signed)
		operator unsigned long long() const {
			unsigned long long v = 0;
			SafeCastHelper<unsigned long long, T,
			               CastMethodHelper<unsigned long long, T>::method>::CastThrow(value, v);
			return v;
		}

		constexpr explicit(sizeof(T) > sizeof(wchar_t) ||
		                   (sizeof(T) == sizeof(wchar_t) &&
		                    std::numeric_limits<T>::is_signed !=
		                        std::numeric_limits<wchar_t>::is_signed))
		operator wchar_t() const {
			wchar_t v = 0;
			SafeCastHelper<wchar_t, T, CastMethodHelper<wchar_t, T>::method>::CastThrow(value, v);
			return v;
		}

		constexpr explicit(sizeof(T) > sizeof(char8_t) ||
		                   (sizeof(T) == sizeof(char8_t) &&
		                    std::numeric_limits<T>::is_signed !=
		                        std::numeric_limits<char8_t>::is_signed))
		operator char8_t() const {
			uint8_t v = 0;
			SafeCastHelper<uint8_t, T, CastMethodHelper<uint8_t, T>::method>::CastThrow(value, v);
			return (char8_t) v;
		}

		constexpr explicit(sizeof(T) > sizeof(char16_t) ||
		                   (sizeof(T) == sizeof(char16_t) &&
		                    std::numeric_limits<T>::is_signed !=
		                        std::numeric_limits<char8_t>::is_signed))
		operator char16_t() const {
			uint16_t v = 0;
			SafeCastHelper<uint16_t, T, CastMethodHelper<uint16_t, T>::method>::CastThrow(value, v);
			return (char16_t) v;
		}

		constexpr explicit(sizeof(T) > sizeof(char32_t) ||
		                   (sizeof(T) == sizeof(char32_t) &&
		                    std::numeric_limits<T>::is_signed !=
		                        std::numeric_limits<char8_t>::is_signed))
		operator char32_t() const {
			uint32_t v = 0;
			SafeCastHelper<uint32_t, T, CastMethodHelper<uint32_t, T>::method>::CastThrow(value, v);
			return (char32_t) v;
		}

		constexpr operator float() const noexcept { return value; }

		constexpr operator double() const noexcept { return value; }

		constexpr operator long double() const noexcept { return value; }

		T* ptr() noexcept { return &value; }

		const T* ptr() const noexcept { return &value; }

		constexpr const T& ref() const noexcept { return value; }

		/*T* operator&()  noexcept {
		    return &value;
		}

		const T* operator&() const noexcept {
		    return &value;
		}*/

		constexpr const SafeInt<T>& operator+() const noexcept { return *this; }

		constexpr SafeInt<T> operator-() const {
			static_assert(std::numeric_limits<T>::is_signed,
			              "Cannot to negate the unsigned number");
			return SafeInt<T>(
			    NegationHelper<T, std::numeric_limits<T>::is_signed>::NegativeThrow(value));
		}

		constexpr SafeInt<T>& operator++() {
			if (value != std::numeric_limits<T>::max()) {
				++value;
				return *this;
			}
			throw IntegerOverflowException();
		}

		constexpr SafeInt<T>& operator--() {
			if (value != std::numeric_limits<T>::min()) {
				--value;
				return *this;
			}
			throw IntegerOverflowException();
		}

		constexpr SafeInt<T> operator++(int) {
			if (value != std::numeric_limits<T>::max()) {
				SafeInt<T> tmp(value);
				++value;
				return tmp;
			}
			throw IntegerOverflowException();
		}

		constexpr SafeInt<T> operator--(int) {
			if (value != std::numeric_limits<T>::min()) {
				SafeInt<T> tmp(value);
				--value;
				return tmp;
			}
			throw IntegerOverflowException();
		}

		constexpr SafeInt<T> operator~() const noexcept { return SafeInt<T>((T) ~value); }

		template <class U>
		constexpr SafeInt<T> operator%(U rhs) const {
			T result = 0;
			ModulusHelper<T, U, ValidComparison<T, U>::method>::ModulusThrow(value, rhs, result);
			return SafeInt<T>(result);
		}

		template <class U>
		constexpr SafeInt<T> operator%(SafeInt<U> rhs) const {
			T result = 0;
			ModulusHelper<T, U, ValidComparison<T, U>::method>::ModulusThrow(value, (U) rhs,
			                                                                 result);
			return SafeInt<T>(result);
		}

		template <class U>
		constexpr SafeInt<T>& operator%=(U rhs) {
			ModulusHelper<T, U, ValidComparison<T, U>::method>::ModulusThrow(value, rhs, value);
			return *this;
		}

		template <class U>
		constexpr SafeInt<T>& operator%=(SafeInt<U> rhs) {
			ModulusHelper<T, U, ValidComparison<T, U>::method>::ModulusThrow(value, (U) rhs, value);
			return *this;
		}

		template <class U>
		constexpr SafeInt<T> operator*(U rhs) const {
			T result = 0;
			MultiplicationHelper<T, U, MultiplicationMethod<T, U>::method>::MultiplyThrow(
			    value, rhs, result);
			return SafeInt<T>(result);
		}

		template <class U>
		constexpr SafeInt<T> operator*(SafeInt<U> rhs) const {
			T result = 0;
			MultiplicationHelper<T, U, MultiplicationMethod<T, U>::method>::MultiplyThrow(
			    value, (U) rhs, result);
			return SafeInt<T>(result);
		}

		template <class U>
		constexpr SafeInt<T>& operator*=(U rhs) {
			MultiplicationHelper<T, U, MultiplicationMethod<T, U>::method>::MultiplyThrow(
			    value, rhs, value);
			return *this;
		}

		template <class U>
		constexpr SafeInt<T>& operator*=(SafeInt<U> rhs) {
			MultiplicationHelper<T, U, MultiplicationMethod<T, U>::method>::MultiplyThrow(
			    value, (U) rhs, value);
			return *this;
		}

		template <class U>
		constexpr SafeInt<T> operator/(U rhs) const {
			T result = 0;
			DivisionHelper<T, U, DivisionMethod<T, U>::method>::DivideThrow(value, rhs, result);
			return SafeInt<T>(result);
		}

		template <class U>
		constexpr SafeInt<T> operator/(SafeInt<U> rhs) const {
			T result = 0;
			DivisionHelper<T, U, DivisionMethod<T, U>::method>::DivideThrow(value, (U) rhs, result);
			return SafeInt<T>(result);
		}

		template <class U>
		constexpr SafeInt<T>& operator/=(U rhs) {
			DivisionHelper<T, U, DivisionMethod<T, U>::method>::DivideThrow(value, rhs, value);
			return *this;
		}

		template <class U>
		constexpr SafeInt<T>& operator/=(SafeInt<U> rhs) {
			DivisionHelper<T, U, DivisionMethod<T, U>::method>::DivideThrow(value, (U) rhs, value);
			return *this;
		}

		template <class U>
		constexpr SafeInt<T> operator+(U rhs) const {
			T result = 0;
			AdditionHelper<T, U, AdditionMethod<T, U>::method>::AdditionThrow(value, rhs, result);
			return SafeInt<T>(result);
		}

		template <class U>
		constexpr SafeInt<T> operator+(SafeInt<U> rhs) const {
			T result = 0;
			AdditionHelper<T, U, AdditionMethod<T, U>::method>::AdditionThrow(value, (U) rhs,
			                                                                  result);
			return SafeInt<T>(result);
		}

		template <class U>
		constexpr SafeInt<T>& operator+=(U rhs) {
			AdditionHelper<T, U, AdditionMethod<T, U>::method>::AdditionThrow(value, rhs, value);
			return *this;
		}

		template <class U>
		constexpr SafeInt<T>& operator+=(SafeInt<U> rhs) {
			AdditionHelper<T, U, AdditionMethod<T, U>::method>::AdditionThrow(value, (U) rhs,
			                                                                  value);
			return *this;
		}

		template <class U>
		constexpr SafeInt<T> operator-(U rhs) const {
			T result = 0;
			SubtractionHelper<T, U, SubtractionMethod<T, U>::method>::SubtractThrow(value, rhs,
			                                                                        result);
			return SafeInt<T>(result);
		}

		template <class U>
		constexpr SafeInt<T> operator-(SafeInt<U> rhs) const {
			T result = 0;
			SubtractionHelper<T, U, SubtractionMethod<T, U>::method>::SubtractThrow(value, (U) rhs,
			                                                                        result);
			return SafeInt<T>(result);
		}

		template <class U>
		constexpr SafeInt<T>& operator-=(U rhs) {
			SubtractionHelper<T, U, SubtractionMethod<T, U>::method>::SubtractThrow(value, rhs,
			                                                                        value);
			return *this;
		}

		template <class U>
		constexpr SafeInt<T>& operator-=(SafeInt<U> rhs) {
			SubtractionHelper<T, U, SubtractionMethod<T, U>::method>::SubtractThrow(value, (U) rhs,
			                                                                        value);
			return *this;
		}

		template <class U>
		constexpr SafeInt<T> operator<<(U bits) const {
			if (ValidBitCount<T, U>(bits)) {
				return SafeInt<T>((T) (value << bits));
			}
			throw IntegerOverflowException();
		}

		template <class U>
		constexpr SafeInt<T> operator<<(SafeInt<U> bits) const {
			if (ValidBitCount<T, U>(bits)) {
				return SafeInt<T>((T) (value << bits));
			}
			throw IntegerOverflowException();
		}

		template <class U>
		constexpr SafeInt<T>& operator<<=(U bits) {
			if (ValidBitCount<T, U>(bits)) {
				value <<= bits;
				return *this;
			}
			throw IntegerOverflowException();
		}

		template <class U>
		constexpr SafeInt<T>& operator<<=(SafeInt<U> bits) {
			if (ValidBitCount<T, U>(bits)) {
				value <<= (U) bits;
				return *this;
			}
			throw IntegerOverflowException();
		}

		template <class U>
		constexpr SafeInt<T> operator>>(U bits) const {
			if (ValidBitCount<T, U>(bits)) {
				return SafeInt<T>((T) (value >> bits));
			}
			throw IntegerOverflowException();
		}

		template <class U>
		constexpr SafeInt<T> operator>>(SafeInt<U> bits) const {
			if (ValidBitCount<T, U>(bits)) {
				return SafeInt<T>((T) (value >> bits));
			}
			throw IntegerOverflowException();
		}

		template <class U>
		constexpr SafeInt<T>& operator>>=(U bits) {
			if (ValidBitCount<T, U>(bits)) {
				value >>= bits;
				return *this;
			}
			throw IntegerOverflowException();
		}

		template <class U>
		constexpr SafeInt<T>& operator>>=(SafeInt<U> bits) {
			if (ValidBitCount<T, U>(bits)) {
				value >>= (U) bits;
				return *this;
			}
			throw IntegerOverflowException();
		}

		constexpr SafeInt<T> operator&(SafeInt<T> rhs) const noexcept {
			return SafeInt<T>(value & (T) rhs);
		}

		template <class U>
		constexpr SafeInt<T> operator&(U rhs) const noexcept {
			return SafeInt<T>(BinaryAndHelper<T, U, BinaryMethod<T, U>::method>::And(value, rhs));
		}

		constexpr SafeInt<T>& operator&=(SafeInt<T> rhs) noexcept {
			value &= (T) rhs;
			return *this;
		}

		template <class U>
		constexpr SafeInt<T>& operator&=(U rhs) noexcept {
			value = BinaryAndHelper<T, U, BinaryMethod<T, U>::method>::And(value, rhs);
			return *this;
		}

		template <class U>
		constexpr SafeInt<T>& operator&=(SafeInt<U> rhs) noexcept {
			value = BinaryAndHelper<T, U, BinaryMethod<T, U>::method>::And(value, (U) rhs);
			return *this;
		}

		constexpr SafeInt<T> operator|(SafeInt<T> rhs) const noexcept {
			return SafeInt<T>(value | (T) rhs);
		}

		template <class U>
		constexpr SafeInt<T> operator|(U rhs) const noexcept {
			return SafeInt<T>(BinaryOrHelper<T, U, BinaryMethod<T, U>::method>::Or(value, rhs));
		}

		constexpr SafeInt<T>& operator|=(SafeInt<T> rhs) noexcept {
			value |= (T) rhs;
			return *this;
		}

		template <class U>
		constexpr SafeInt<T>& operator|=(U rhs) noexcept {
			value = BinaryOrHelper<T, U, BinaryMethod<T, U>::method>::Or(value, rhs);
			return *this;
		}

		template <class U>
		constexpr SafeInt<T>& operator|=(SafeInt<U> rhs) noexcept {
			value = BinaryOrHelper<T, U, BinaryMethod<T, U>::method>::Or(value, (U) rhs);
			return *this;
		}

		constexpr SafeInt<T> operator^(SafeInt<T> rhs) const noexcept {
			return SafeInt<T>(value ^ (T) rhs);
		}

		template <class U>
		constexpr SafeInt<T> operator^(U rhs) const noexcept {
			return SafeInt<T>(BinaryXorHelper<T, U, BinaryMethod<T, U>::method>::Xor(value, rhs));
		}

		constexpr SafeInt<T>& operator^=(SafeInt<T> rhs) noexcept {
			value ^= (T) rhs;
			return *this;
		}

		template <class U>
		constexpr SafeInt<T>& operator^=(U rhs) noexcept {
			value = BinaryXorHelper<T, U, BinaryMethod<T, U>::method>::Xor(value, rhs);
			return *this;
		}

		template <class U>
		constexpr SafeInt<T>& operator^=(SafeInt<U> rhs) noexcept {
			value = BinaryXorHelper<T, U, BinaryMethod<T, U>::method>::Xor(value, (U) rhs);
			return *this;
		}

	   private:
		T value {};
	};

	template <class T, class U>
	constexpr auto operator<=>(U lhs, SafeInt<T> rhs) noexcept {
		if (GreaterThanTest<T, U, ValidComparison<T, U>::method>::GreaterThan((T) rhs, lhs)) {
			return std::strong_ordering::less;
		}
		if (GreaterThanTest<U, T, ValidComparison<U, T>::method>::GreaterThan(lhs, (T) rhs)) {
			return std::strong_ordering::greater;
		}
		return std::strong_ordering::equal;
	}

	template <class T, class U>
	constexpr auto operator<=>(SafeInt<T> lhs, U rhs) noexcept {
		if (GreaterThanTest<U, T, ValidComparison<U, T>::method>::GreaterThan(rhs, (T) lhs)) {
			return std::strong_ordering::less;
		}
		if (GreaterThanTest<T, U, ValidComparison<T, U>::method>::GreaterThan((T) lhs, rhs)) {
			return std::strong_ordering::greater;
		}
		return std::strong_ordering::equal;
	}

	template <class T, class U>
	constexpr auto operator<=>(SafeInt<U> lhs, SafeInt<T> rhs) noexcept {
		if (GreaterThanTest<T, U, ValidComparison<T, U>::method>::GreaterThan((T) rhs, (U) lhs)) {
			return std::strong_ordering::less;
		}
		if (GreaterThanTest<T, U, ValidComparison<T, U>::method>::GreaterThan((T) lhs, (U) rhs)) {
			return std::strong_ordering::greater;
		}
		return std::strong_ordering::equal;
	}

	// template<class T, class U>
	// constexpr bool operator<(U lhs, SafeInt<T> rhs) noexcept {
	//	return GreaterThanTest<T, U, ValidComparison<T, U>::method>::GreaterThan((T)rhs, lhs);
	//}

	// template<class T, class U>
	// constexpr bool operator<(SafeInt<T> lhs, U rhs) noexcept {
	//	return GreaterThanTest<U, T, ValidComparison<U, T>::method>::GreaterThan(rhs, (T)lhs);
	//}

	// template<class T, class U>
	// constexpr bool operator<(SafeInt<U> lhs, SafeInt<T> rhs) noexcept {
	//	return GreaterThanTest<T, U, ValidComparison<T, U>::method>::GreaterThan((T)rhs, (U)lhs);
	//}

	// template<class T, class U>
	// constexpr bool operator>(U lhs, SafeInt<T> rhs) noexcept {
	//	return GreaterThanTest<U, T, ValidComparison<U, T>::method>::GreaterThan(lhs, (T)rhs);
	//}

	// template<class T, class U>
	// constexpr bool operator>(SafeInt<T> lhs, U rhs) noexcept {
	//	return GreaterThanTest<T, U, ValidComparison<T, U>::method>::GreaterThan((T)lhs, rhs);
	//}

	// template<class T, class U>
	// constexpr bool operator>(SafeInt<T> lhs, SafeInt<U> rhs) noexcept {
	//	return GreaterThanTest<T, U, ValidComparison<T, U>::method>::GreaterThan((T)lhs, (U)rhs);
	//}

	// template<class T, class U>
	// constexpr bool operator>=(U lhs, SafeInt<T> rhs) noexcept {
	//	return !GreaterThanTest<T, U, ValidComparison<T, U>::method>::GreaterThan((T)rhs, lhs);
	//}

	// template<class T, class U>
	// constexpr bool operator>=(SafeInt<T> lhs, U rhs) noexcept {
	//	return !GreaterThanTest<U, T, ValidComparison<U, T>::method>::GreaterThan(rhs, (T)lhs);
	//}

	// template<class T, class U>
	// constexpr bool operator>=(SafeInt<T> lhs, SafeInt<U> rhs) noexcept {
	//	return !GreaterThanTest<U, T, ValidComparison<U, T>::method>::GreaterThan((U)rhs, (T)lhs);
	//}

	// template<class T, class U>
	// constexpr bool operator<=(U lhs, SafeInt<T> rhs) noexcept {
	//	return !GreaterThanTest<U, T, ValidComparison<U, T>::method>::GreaterThan(lhs, (T)rhs);
	//}

	// template<class T, class U>
	// constexpr bool operator<=(SafeInt<T> lhs, U rhs) noexcept {
	//	return !GreaterThanTest<T, U, ValidComparison<T, U>::method>::GreaterThan((T)lhs, rhs);
	//}

	// template<class T, class U>
	// constexpr bool operator<=(SafeInt<T> lhs, SafeInt<U> rhs) noexcept {
	//	return !GreaterThanTest<T, U, ValidComparison<T, U>::method>::GreaterThan((T)lhs, (U)rhs);
	//}

	template <class T, class U>
	constexpr bool operator==(SafeInt<T> lhs, SafeInt<U> rhs) noexcept {
		return EqualityTest<T, U, ValidComparison<T, U>::method>::IsEquals((T) lhs, (U) rhs);
	}

	template <class T, class U>
	constexpr bool operator==(U lhs, SafeInt<T> rhs) noexcept {
		return EqualityTest<T, U, ValidComparison<T, U>::method>::IsEquals((T) rhs, lhs);
	}

	template <class T, class U>
	constexpr bool operator==(SafeInt<T> lhs, U rhs) noexcept {
		return EqualityTest<T, U, ValidComparison<T, U>::method>::IsEquals((T) lhs, rhs);
	}

	template <class T>
	constexpr bool operator==(bool lhs, SafeInt<T> rhs) noexcept {
		return lhs == ((T) rhs == 0 ? false : true);
	}

	template <class T>
	constexpr bool operator==(SafeInt<T> lhs, bool rhs) noexcept {
		return rhs == ((T) lhs == 0 ? false : true);
	}

	template <class T, class U>
	constexpr bool operator!=(SafeInt<T> lhs, SafeInt<U> rhs) noexcept {
		return !EqualityTest<T, U, ValidComparison<T, U>::method>::IsEquals((T) lhs, (U) rhs);
	}

	template <class T, class U>
	constexpr bool operator!=(U lhs, SafeInt<T> rhs) noexcept {
		return !EqualityTest<T, U, ValidComparison<T, U>::method>::IsEquals((T) rhs, lhs);
	}

	template <class T, class U>
	constexpr bool operator!=(SafeInt<T> lhs, U rhs) noexcept {
		return !EqualityTest<T, U, ValidComparison<T, U>::method>::IsEquals((T) lhs, rhs);
	}

	template <class T>
	constexpr bool operator!=(bool lhs, SafeInt<T> rhs) noexcept {
		return ((T) rhs == 0 ? false : true) != lhs;
	}

	template <class T>
	constexpr bool operator!=(SafeInt<T> lhs, bool rhs) noexcept {
		return ((T) lhs == 0 ? false : true) != rhs;
	}

	template <class T, class U, int method>
	class ModulusSimpleCaseHelper;

	template <class T, int method>
	class ModulusSignedCaseHelper;

	template <class T>
	class ModulusSignedCaseHelper<T, true> {
	   public:
		NODISCARD constexpr static bool SignedCase(SafeInt<T> rhs, SafeInt<T>& result) noexcept {
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
		NODISCARD constexpr static bool SignedCase(SafeInt<T>, SafeInt<T>&) noexcept {
			return false;
		}
	};

	template <class T, class U>
	class ModulusSimpleCaseHelper<T, U, true> {
	   public:
		NODISCARD constexpr static bool ModulusSimpleCase(U lhs, SafeInt<T> rhs,
		                                                  SafeInt<T>& result) {
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
		NODISCARD constexpr static bool ModulusSimpleCase(U, SafeInt<T>, SafeInt<T>&) {
			return false;
		}
	};

	template <class T, class U>
	constexpr SafeInt<T> operator%(U lhs, SafeInt<T> rhs) {
		SafeInt<T> result;
		if (ModulusSimpleCaseHelper < T, U,
		    (sizeof(T) == sizeof(U)) &&
		        ((bool) std::numeric_limits<T>::is_signed ==
		         (bool) std::numeric_limits<U>::is_signed) > ::ModulusSimpleCase(lhs, rhs, result))
			return result;

		result = (SafeInt<U>(lhs) % (T) rhs);
		return result;
	}

	template <class T, class U>
	CONSTEXPR_MULTIPLY SafeInt<T> operator*(U lhs, SafeInt<T> rhs) {
		T result = 0;
		MultiplicationHelper<T, U, MultiplicationMethod<T, U>::method>::MultiplyThrow((T) rhs, lhs,
		                                                                              result);
		return SafeInt<T>(result);
	}

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
		NODISCARD static bool NegativeCornerCase(U lhs, SafeInt<T> rhs, SafeInt<T>& result) {
			U tmp = DivisionNegativeNegateU<T, U, sizeof(T) == 4>::div(rhs, lhs);
			if (tmp <= (U) std::numeric_limits<T>::max()) {
				result = SafeInt<T>((T) (~(uint64_t) tmp + 1));
				return true;
			}

			T maxt = std::numeric_limits<T>::max();
			if (tmp == (U) maxt + 1) {
				T mint = std::numeric_limits<T>::min();
				result = SafeInt<T>(mint);
				return true;
			}

			throw IntegerOverflowException();
		}
	};

	template <class T, class U>
	class DivisionNegativeCornerCaseHelper<T, U, false> {
	   public:
		NODISCARD static bool NegativeCornerCase(U, SafeInt<T>, SafeInt<T>&) { return false; }
	};

	template <class T, class U, int method>
	class DivisionCornerCaseHelper;

	template <class T, class U>
	class DivisionCornerCaseHelper<T, U, true> {
	   public:
		NODISCARD static bool DivisionCornerCase1(U lhs, SafeInt<T> rhs, SafeInt<T>& result) {
			if ((T) rhs > 0) {
				result = SafeInt<T>(lhs / (T) rhs);
				return true;
			}

			if ((T) rhs != 0) {
				if (DivisionNegativeCornerCaseHelper < T, U,
				    sizeof(U) >= 4 &&
				        sizeof(T) <= sizeof(U) > ::NegativeCornerCase(lhs, rhs, result))
					return true;

				result = SafeInt<T>(lhs / (T) rhs);
				return true;
			}

			throw DivisionByZeroException();
		}
	};

	template <class T, class U>
	class DivisionCornerCaseHelper<T, U, false> {
	   public:
		NODISCARD static bool DivisionCornerCase1(U, SafeInt<T>, SafeInt<T>&) { return false; }
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
		NODISCARD constexpr static bool DivisionCornerCase2(U lhs, SafeInt<T> rhs,
		                                                    SafeInt<T>& result) {
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
		NODISCARD constexpr static bool DivisionCornerCase2(U, SafeInt<T>, SafeInt<T>&) {
			return false;
		}
	};

	template <class T, class U>
	constexpr SafeInt<T> operator/(U lhs, SafeInt<T> rhs) {
		SafeInt<T> result;
		if (DivisionCornerCaseHelper<
		        T, U, (int) DivisionMethod<U, T>::method == (int) DivisionState_UnsignedSigned>::
		        DivisionCornerCase1(lhs, rhs, result))
			return result;
		if (DivisionCornerCaseHelper2<
		        T, U, __details::TypeCompare<T, U>::isBothSigned>::DivisionCornerCase2(lhs, rhs,
		                                                                               result))
			return result;

		U ret = 0;
		DivisionHelper<U, T, DivisionMethod<U, T>::method>::DivideThrow(lhs, (T) rhs, ret);
		return SafeInt<T>(ret);
	}

	template <class T, class U>
	constexpr SafeInt<T> operator+(U lhs, SafeInt<T> rhs) {
		T result {0};
		AdditionHelper<T, U, AdditionMethod<T, U>::method>::AdditionThrow((T) rhs, lhs, result);
		return SafeInt<T>(result);
	}

	template <class T, class U>
	constexpr SafeInt<T> operator-(U lhs, SafeInt<T> rhs) {
		T result {0};
		SubtractionHelper<U, T, SubtractionMethod2<U, T>::method>::SubtractThrow(lhs, rhs.ref(),
		                                                                         result);
		return SafeInt<T>(result);
	}

	template <class T, class U>
	constexpr T& operator+=(T& lhs, SafeInt<U> rhs) requires(std::is_integral_v<T>) {
		T result {0};
		AdditionHelper<T, U, AdditionMethod<T, U>::method>::AdditionThrow(lhs, (U) rhs, result);
		lhs = result;
		return lhs;
	}

	template <class T, class U>
	constexpr T& operator-=(T& lhs, SafeInt<U> rhs) requires(std::is_integral_v<T>) {
		T result {0};
		SubtractionHelper<T, U, SubtractionMethod<T, U>::method>::SubtractThrow(lhs, (U) rhs,
		                                                                        result);
		lhs = result;
		return lhs;
	}

	template <class T, class U>
	constexpr T& operator*=(T& lhs, SafeInt<U> rhs) requires(std::is_integral_v<T>) {
		T result {0};
		MultiplicationHelper<T, U, MultiplicationMethod<T, U>::method>::MultiplyThrow(lhs, (U) rhs,
		                                                                              result);
		lhs = result;
		return lhs;
	}

	template <class T, class U>
	constexpr T& operator/=(T& lhs, SafeInt<U> rhs) requires(std::is_integral_v<T>) {
		T result {0};
		DivisionHelper<T, U, DivisionMethod<T, U>::method>::DivideThrow(lhs, (U) rhs, result);
		lhs = result;
		return lhs;
	}

	template <class T, class U>
	constexpr T& operator%=(T& lhs, SafeInt<U> rhs) requires(std::is_integral_v<T>) {
		T result {0};
		ModulusHelper<T, U, ValidComparison<T, U>::method>::ModulusThrow(lhs, (U) rhs, result);
		lhs = result;
		return lhs;
	}

	template <class T, class U>
	constexpr T& operator&=(T& lhs, SafeInt<U> rhs) noexcept requires(std::is_integral_v<T>) {
		lhs = BinaryAndHelper<T, U, BinaryMethod<T, U>::method>::And(lhs, (U) rhs);
		return lhs;
	}

	template <class T, class U>
	constexpr T& operator|=(T& lhs, SafeInt<U> rhs) noexcept requires(std::is_integral_v<T>) {
		lhs = BinaryOrHelper<T, U, BinaryMethod<T, U>::method>::Or(lhs, (U) rhs);
		return lhs;
	}

	template <class T, class U>
	constexpr T& operator^=(T& lhs, SafeInt<U> rhs) noexcept requires(std::is_integral_v<T>) {
		lhs = BinaryXorHelper<T, U, BinaryMethod<T, U>::method>::Xor(lhs, (U) rhs);
		return lhs;
	}

	template <class T, class U>
	constexpr T& operator<<=(T& lhs, SafeInt<U> rhs) noexcept requires(std::is_integral_v<T>) {
		lhs = (T) (SafeInt<T>(lhs) << (U) rhs);
		return lhs;
	}

	template <class T, class U>
	constexpr T& operator>>=(T& lhs, SafeInt<U> rhs) noexcept requires(std::is_integral_v<T>) {
		lhs = (T) (SafeInt<T>(lhs) >> (U) rhs);
		return lhs;
	}

	template <class T, class U>
	constexpr static SafeInt<U> operator<<(U lhs, SafeInt<T> bits) {
		if (ValidBitCount<T, U>(bits)) {
			return SafeInt<U>((U) (lhs << (T) bits));
		}
		throw IntegerOverflowException();
	}

	template <class T, class U>
	constexpr static SafeInt<U> operator>>(U lhs, SafeInt<T> bits) {
		if (ValidBitCount<T, U>(bits)) {
			return SafeInt<U>((U) (lhs >> (T) bits));
		}
		throw IntegerOverflowException();
	}

	template <class T, class U>
	constexpr SafeInt<T> operator&(U lhs, SafeInt<T> rhs) noexcept {
		return SafeInt<T>(BinaryAndHelper<T, U, BinaryMethod<T, U>::method>::And((T) rhs, lhs));
	}

	template <class T, class U>
	constexpr SafeInt<T> operator|(U lhs, SafeInt<T> rhs) noexcept {
		return SafeInt<T>(BinaryOrHelper<T, U, BinaryMethod<T, U>::method>::Or((T) rhs, lhs));
	}

	template <class T, class U>
	constexpr SafeInt<T> operator^(U lhs, SafeInt<T> rhs) noexcept {
		return SafeInt<T>(BinaryXorHelper<T, U, BinaryMethod<T, U>::method>::Xor((T) rhs, lhs));
	}
}  // namespace CppAdvance