#pragma once
#include "Integer.h"
#include "StringUtils.h"
#define INT128_MIN Builtin::Int128(INT64_MIN, 0u)
#define INT128_MAX Builtin::Int128(INT64_MAX, UINT64_MAX)
#define UINT128_MAX Builtin::UInt128(UINT64_MAX, UINT64_MAX)

#ifdef MSVC
#if defined(_M_X64) && !defined(_M_ARM64EC)
#include "intrin.h"
#pragma intrinsic(_umul128)
#endif
#endif
#include <cassert>
#include <ios>
#include <stdexcept>

template <class T>
inline constexpr T UnsafeCast(Builtin::Int128 value) noexcept;
template <class T>
inline constexpr T UnsafeCast(Builtin::UInt128 value) noexcept;

#ifdef Builtin_OVERFLOW_CHECKS
template <class T, class U>
inline constexpr T UnsafeCast(Builtin::SafeInt<U> value) noexcept;
#else
template <class T, class U>
inline constexpr T UnsafeCast(Builtin::FastInt<U> value) noexcept;
#endif

#if defined(_WIN32) || defined(__BYTE_ORDER__) && (__BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__)
#define ADV_VERSION_BIG_ENDIAN 0
#else
#define ADV_VERSION_BIG_ENDIAN 1
#endif

namespace Builtin {
	class Int128;
	class __Class_Int128;
	class __Class_UInt128;
	constexpr uint64_t Int128Low64(Int128 v) noexcept;
	constexpr i64 Int128High64(Int128 v) noexcept;

	template <size_t m, size_t n>
	constexpr void Knuth_4_3_1_M(const uint32_t (&u)[m], const uint32_t (&v)[n],
	                             uint32_t (&w)[n + m]) noexcept {
		for (auto& elem : w) { elem = 0; }

		for (int j = 0; j < static_cast<int>(n); ++j) {
			uint64_t tmp = 0;
			for (int i = 0; i < static_cast<int>(m); ++i) {
				tmp += static_cast<uint64_t>(u[i]) * v[j] + w[i + j];
				w[i + j] = static_cast<uint32_t>(tmp);
				tmp >>= 32;
			}
			w[j + m] = static_cast<uint32_t>(tmp);
		}
	}

	inline constexpr void Knuth_4_3_1_D(uint32_t* const u, const size_t u_size,
	                                    const uint32_t* const v, const size_t v_size,
	                                    uint32_t* const q) noexcept {
		const auto n = static_cast<int>(v_size);
		const auto m = static_cast<int>(u_size - v_size - 1);

		for (auto j = static_cast<int>(m); j >= 0; --j) {
			const auto two_digits = (static_cast<uint64_t>(u[j + n]) << 32) | u[j + n - 1];
			auto qhat             = two_digits / v[n - 1];
			auto rhat             = two_digits % v[n - 1];

			while ((qhat >> 32) != 0 ||
			       static_cast<uint32_t>(qhat) * static_cast<uint64_t>(v[n - 2]) >
			           ((rhat << 32) | u[j + n - 2])) {
				--qhat;
				rhat += v[n - 1];
				if ((rhat >> 32) != 0) {
					break;
				}
			}

			int64_t k = 0;
			int64_t tmp;
			for (int i = 0; i < static_cast<int>(n); ++i) {
				const auto product = static_cast<uint32_t>(qhat) * static_cast<uint64_t>(v[i]);
				tmp                = u[i + j] - k - static_cast<uint32_t>(product);
				u[i + j]           = static_cast<uint32_t>(tmp);
				k                  = static_cast<int64_t>(product >> 32) - (tmp >> 32);
			}
			tmp      = u[j + n] - k;
			u[j + n] = static_cast<uint32_t>(tmp);

			q[j] = static_cast<uint32_t>(qhat);
			if (tmp < 0) {
				--q[j];
				k = 0;
				for (int i = 0; i < static_cast<int>(n); ++i) {
					tmp      = u[i + j] + k + v[i];
					u[i + j] = static_cast<uint32_t>(tmp);
					k        = tmp >> 32;
				}
				u[j + n] += static_cast<int32_t>(k);
			}
		}
	}

	inline constexpr uint64_t UDiv128(uint64_t high, uint64_t low, uint64_t div,
	                                  uint64_t& remainder) noexcept {
#if USE_INTRINSICS && defined(MSVC)
		if (!std::is_constant_evaluated()) {
			return _udiv128(high, low, div, &remainder);
		}
#endif

		const auto divZeros = std::countl_zero(static_cast<uint32_t>(div >> 32));
		if (divZeros >= 32) {  // div < 2^32
			auto rem    = (high << 32) | (low >> 32);
			auto result = rem / static_cast<uint32_t>(div);
			rem         = ((rem % static_cast<uint32_t>(div)) << 32) | static_cast<uint32_t>(low);
			result      = (result << 32) | (rem / static_cast<uint32_t>(div));
			remainder   = rem % static_cast<uint32_t>(div);
			return result;
		}

		uint32_t u[5] = {
		    static_cast<uint32_t>(low << divZeros),
		    static_cast<uint32_t>(low >> (32 - divZeros)),
		    static_cast<uint32_t>(high << divZeros),
		    static_cast<uint32_t>(high >> (32 - divZeros)),
		    0,
		};
		if (divZeros != 0) {
			u[2] |= static_cast<uint32_t>(low >> (64 - divZeros));
			u[4] |= static_cast<uint32_t>(high >> (64 - divZeros));
		}

		uint32_t v[2] = {
		    static_cast<uint32_t>(div << divZeros),
		    static_cast<uint32_t>(div >> (32 - divZeros)),
		};
		uint32_t q[3];

		Knuth_4_3_1_D(u, 5, v, 2, q);
		remainder = (static_cast<uint64_t>(u[1]) << (32 - divZeros)) | (u[0] >> divZeros);

		return (static_cast<uint64_t>(q[1]) << 32) | q[0];
	}

	class alignas(16) UInt128 : public Struct {
	   public:
		using __self       = UInt128;
		using __underlying = UInt128;
		using __class      = __Class_UInt128;
		using Unsigned                = UInt128;
		using DivisibleArithmeticType = double;

		constexpr decltype(auto) __ref() noexcept { return *this; }
		constexpr decltype(auto) __ref() const noexcept { return *this; }

		constexpr UInt128() noexcept : _low(0), _high(0) {}
		constexpr UInt128(u64 high, u64 low) noexcept : _low(low), _high(high) {}
		constexpr explicit UInt128(int value) RELEASE_NOEXCEPT : _low(static_cast<u64>(value)),
		                                                         _high(0u) {}
		constexpr explicit UInt128(long value) RELEASE_NOEXCEPT : _low(static_cast<u64>(value)),
		                                                          _high(0u) {}
		constexpr explicit UInt128(int64_t value) RELEASE_NOEXCEPT : _low(static_cast<u64>(value)),
		                                                             _high(0u) {}
		constexpr UInt128(unsigned value) noexcept : _low(value), _high(0) {}
		constexpr UInt128(unsigned long value) noexcept : _low(value), _high(0) {}
		constexpr UInt128(uint64_t value) noexcept : _low(value), _high(0) {}

		constexpr explicit UInt128(i8 value) RELEASE_NOEXCEPT : _low(static_cast<u64>(value)),
		                                                        _high(0u) {}
		constexpr explicit UInt128(i16 value) RELEASE_NOEXCEPT : _low(static_cast<u64>(value)),
		                                                         _high(0u) {}
		constexpr explicit UInt128(i32 value) RELEASE_NOEXCEPT : _low(static_cast<u64>(value)),
		                                                         _high(0u) {}
		constexpr explicit UInt128(i64 value) RELEASE_NOEXCEPT : _low(static_cast<u64>(value)),
		                                                         _high(0u) {}
		constexpr UInt128(u8 value) noexcept : _low(value), _high(0) {}
		constexpr UInt128(u16 value) noexcept : _low(value), _high(0) {}
		constexpr UInt128(u32 value) noexcept : _low(value), _high(0) {}
		constexpr UInt128(u64 value) noexcept : _low(value), _high(0) {}

#if defined(CLANG) || defined(GCC)
		constexpr UInt128(unsigned __int128 value) noexcept { *(unsigned __int128*) this = value; }
		constexpr UInt128& operator=(unsigned __int128 value) noexcept {
			*(unsigned __int128*) this = value;
			return *this;
		}
		constexpr operator unsigned __int128() const noexcept {
			return *((unsigned __int128*) this);
		}
#endif

		constexpr explicit UInt128(Int128 value) RELEASE_NOEXCEPT;

		// API explicit UInt128(float value);
		// API explicit UInt128(double value);
		// explicit UInt128(Float32 value) : UInt128((float)value) {}
		// explicit UInt128(Float64 value) : UInt128((double)value) {}

		// constexpr UInt128& operator=(int value) /**/noexcept {
		//	return *this = UInt128(value);
		//}

		// constexpr UInt128& operator=(long value)  {
		//	return *this = UInt128(value);
		//}

		// constexpr UInt128& operator=(int64_t value)  {
		//	return *this = UInt128(value);
		//}

		// constexpr UInt128& operator=(Int32 value)  {
		//	return *this = UInt128(value);
		//}

		// constexpr UInt128& operator=(Int64 value)  {
		//	return *this = UInt128(value);
		//}

		//constexpr UInt128(const UInt128& value) noexcept = default;
		//constexpr UInt128& operator=(const UInt128& value) noexcept = default;

		constexpr UInt128& operator=(unsigned value) noexcept { return *this = UInt128(value); }

		constexpr UInt128& operator=(unsigned long value) noexcept {
			return *this = UInt128(value);
		}

		constexpr UInt128& operator=(uint64_t value) noexcept { return *this = UInt128(value); }

		constexpr UInt128& operator=(u8 value) noexcept { return *this = UInt128(value); }

		constexpr UInt128& operator=(u16 value) noexcept { return *this = UInt128(value); }

		constexpr UInt128& operator=(u32 value) noexcept { return *this = UInt128(value); }

		constexpr UInt128& operator=(u64 value) noexcept { return *this = UInt128(value); }

		template <std::floating_point F>
		constexpr explicit UInt128(F value) {
#ifdef Builtin_OVERFLOW_CHECKS
			if (value < 0 || value > 340282366920938463463374607431768211455.0 || std::isnan(value))
				throw IntegerOverflowException();
#endif
			constexpr F two_32 {static_cast<F>(1ull << 32)};
			constexpr F two_64 {two_32 * two_32};

			if (!(value >= F {0})) {
				_high = 0u;
				_low  = 0u;
			}

			const F scaled = value / two_64;
			if (scaled >= two_64) {
				_high = UINT64_MAX;
				_low  = UINT64_MAX;
			}

			std::uint64_t h {static_cast<std::uint64_t>(scaled)};
			const F remainder {value - static_cast<F>(h) * two_64};
			std::uint64_t l {static_cast<std::uint64_t>(remainder)};

			_high = h;
			_low  = l;
		}

		template <class F>
		static constexpr UInt128 NarrowFromFloat(F value) {
			constexpr F two_32 {static_cast<F>(1ull << 32)};
			constexpr F two_64 {two_32 * two_32};
			uint64_t _high;
			uint64_t _low;

			if (!(value >= F {0})) {
				_high = 0u;
				_low  = 0u;
			}

			const F scaled = value / two_64;
			if (scaled >= two_64) {
				_high = UINT64_MAX;
				_low  = UINT64_MAX;
			}

			std::uint64_t h {static_cast<std::uint64_t>(scaled)};
			const F remainder {value - static_cast<F>(h) * two_64};
			std::uint64_t l {static_cast<std::uint64_t>(remainder)};

			_high = h;
			_low  = l;
			return UInt128(_high, _low);
		}

		// constexpr UInt128& operator=(Int128 value) ;

		constexpr u64 Low64() const noexcept { return _low; }

		constexpr u64 High64() const noexcept { return _high; }

		constexpr explicit operator bool() const noexcept { return _low || _high; }

		constexpr explicit operator char() const RELEASE_NOEXCEPT {
#ifdef Builtin_OVERFLOW_CHECKS
			if (_high > 0)
				throw IntegerOverflowException();
#endif
			return static_cast<char>(_low);
		}
		constexpr explicit operator signed char() const RELEASE_NOEXCEPT {
#ifdef Builtin_OVERFLOW_CHECKS
			if (_high > 0)
				throw IntegerOverflowException();
#endif
			return static_cast<signed char>(_low);
		}
		constexpr explicit operator unsigned char() const RELEASE_NOEXCEPT {
#ifdef Builtin_OVERFLOW_CHECKS
			if (_high > 0)
				throw IntegerOverflowException();
#endif
			return static_cast<unsigned char>(_low);
		}
		constexpr explicit operator wchar_t() const RELEASE_NOEXCEPT {
#ifdef Builtin_OVERFLOW_CHECKS
			if (_high > 0)
				throw IntegerOverflowException();
#endif
			return static_cast<wchar_t>(_low);
		}
		constexpr explicit operator short() const RELEASE_NOEXCEPT {
#ifdef Builtin_OVERFLOW_CHECKS
			if (_high > 0)
				throw IntegerOverflowException();
#endif
			return static_cast<short>(_low);
		}
		constexpr explicit operator unsigned short() const RELEASE_NOEXCEPT {
#ifdef Builtin_OVERFLOW_CHECKS
			if (_high > 0)
				throw IntegerOverflowException();
#endif
			return static_cast<unsigned short>(_low);
		}
		constexpr explicit operator int() const RELEASE_NOEXCEPT {
#ifdef Builtin_OVERFLOW_CHECKS
			if (_high > 0)
				throw IntegerOverflowException();
#endif
			return static_cast<int>(_low);
		}
		constexpr explicit operator unsigned() const RELEASE_NOEXCEPT {
#ifdef Builtin_OVERFLOW_CHECKS
			if (_high > 0)
				throw IntegerOverflowException();
#endif
			return static_cast<unsigned>(_low);
		}
		constexpr explicit operator long() const RELEASE_NOEXCEPT {
#ifdef Builtin_OVERFLOW_CHECKS
			if (_high > 0)
				throw IntegerOverflowException();
#endif
			return static_cast<long>(_low);
		}
		constexpr explicit operator unsigned long() const RELEASE_NOEXCEPT {
#ifdef Builtin_OVERFLOW_CHECKS
			if (_high > 0)
				throw IntegerOverflowException();
#endif
			return static_cast<unsigned long>(_low);
		}
		constexpr explicit operator int64_t() const RELEASE_NOEXCEPT {
#ifdef Builtin_OVERFLOW_CHECKS
			if (_high > 0)
				throw IntegerOverflowException();
#endif
			return static_cast<int64_t>(_low);
		}
		constexpr explicit operator uint64_t() const RELEASE_NOEXCEPT {
#ifdef Builtin_OVERFLOW_CHECKS
			if (_high > 0)
				throw IntegerOverflowException();
#endif
			return _low;
		}

		constexpr explicit operator i8() const RELEASE_NOEXCEPT {
#ifdef Builtin_OVERFLOW_CHECKS
			if (_high > 0)
				throw IntegerOverflowException();
#endif
			return static_cast<i8>(_low);
		}
		constexpr explicit operator u8() const RELEASE_NOEXCEPT {
#ifdef Builtin_OVERFLOW_CHECKS
			if (_high > 0)
				throw IntegerOverflowException();
#endif
			return static_cast<u8>(_low);
		}
		constexpr explicit operator i16() const RELEASE_NOEXCEPT {
#ifdef Builtin_OVERFLOW_CHECKS
			if (_high > 0)
				throw IntegerOverflowException();
#endif
			return static_cast<i16>(_low);
		}
		constexpr explicit operator u16() const RELEASE_NOEXCEPT {
#ifdef Builtin_OVERFLOW_CHECKS
			if (_high > 0)
				throw IntegerOverflowException();
#endif
			return static_cast<u16>(_low);
		}
		constexpr explicit operator i32() const RELEASE_NOEXCEPT {
#ifdef Builtin_OVERFLOW_CHECKS
			if (_high > 0)
				throw IntegerOverflowException();
#endif
			return static_cast<i32>(_low);
		}
		constexpr explicit operator u32() const RELEASE_NOEXCEPT {
#ifdef Builtin_OVERFLOW_CHECKS
			if (_high > 0)
				throw IntegerOverflowException();
#endif
			return static_cast<u32>(_low);
		}
		constexpr explicit operator i64() const RELEASE_NOEXCEPT {
#ifdef Builtin_OVERFLOW_CHECKS
			if (_high > 0)
				throw IntegerOverflowException();
#endif
			return static_cast<i64>(_low);
		}
		constexpr explicit operator u64() const RELEASE_NOEXCEPT {
#ifdef Builtin_OVERFLOW_CHECKS
			if (_high > 0)
				throw IntegerOverflowException();
#endif
			return _low;
		}
#ifdef __FLT16_MAX__
		constexpr explicit operator _Float16() const noexcept {
			return static_cast<float>(*this);
		}
#endif
		constexpr operator float() const noexcept {
			constexpr float pow_2_64 = 18446744073709551616.0f;
			return static_cast<float>((uint64_t) _low) +
			       static_cast<float>((uint64_t) _high) * pow_2_64;
		}
		constexpr operator double() const noexcept {
			constexpr double pow_2_64 = 18446744073709551616.0;
			return static_cast<double>((uint64_t) _low) +
			       static_cast<double>((uint64_t) _high) * pow_2_64;
		}
		constexpr operator long double() const noexcept {
			constexpr long double pow_2_64 = 18446744073709551616.0L;
			return static_cast<long double>((uint64_t) _low) +
			       static_cast<long double>((uint64_t) _high) * pow_2_64;
		}
#ifdef __SIZEOF_FLOAT128__
		constexpr operator __float128() const noexcept {
			constexpr __float128 pow_2_64 = 18446744073709551616.0L;
			return static_cast<__float128>((uint64_t) _low) +
			       static_cast<__float128>((uint64_t) _high) * pow_2_64;
		}
#endif
		constexpr UInt128& __builtin_ref() noexcept { return *this; }
		constexpr const UInt128& __builtin_ref() const noexcept { return *this; }

		template <class OtherT>
		constexpr UInt128 operator<<(OtherT amount) const RELEASE_NOEXCEPT
		    requires(std::is_integral_v<OtherT>) {
#ifdef Builtin_OVERFLOW_CHECKS
			if (amount < 0 || amount > 127)
				throw IntegerOverflowException();
#endif
			if (amount == 0)
				UNLIKELY { return *this; }

			if (amount >= 64) {
				return UInt128 {(_low << (amount % 64)), 0u};
			}

#if USE_INTRINSICS
#ifdef MSVC
			if (!std::is_constant_evaluated())
				return UInt128(__shiftleft128(_low, _high, (uint8_t) amount), (_low << amount));
			return UInt128 {(_high << amount) | (_low >> (64 - amount)), (_low << amount)};
#else
			return unsigned __int128(*this) << amount;
#endif
#else
			return UInt128 {(_high << amount) | (_low >> (64 - amount)), (_low << amount)};
#endif
		}

		constexpr UInt128 operator<<(i8 bits) const RELEASE_NOEXCEPT {
			return operator<<((unsigned) bits);
		}

		constexpr UInt128 operator<<(i16 bits) const RELEASE_NOEXCEPT {
			return operator<<((unsigned) bits);
		}

		constexpr UInt128 operator<<(i32 bits) const RELEASE_NOEXCEPT {
			return operator<<((unsigned) bits);
		}

		constexpr UInt128 operator<<(i64 bits) const RELEASE_NOEXCEPT {
			return operator<<((unsigned) bits);
		}

		constexpr UInt128 operator<<(u8 bits) const RELEASE_NOEXCEPT {
			return operator<<((unsigned) bits);
		}

		constexpr UInt128 operator<<(u16 bits) const RELEASE_NOEXCEPT {
			return operator<<((unsigned) bits);
		}

		constexpr UInt128 operator<<(u32 bits) const RELEASE_NOEXCEPT {
			return operator<<((unsigned) bits);
		}

		constexpr UInt128 operator<<(u64 bits) const RELEASE_NOEXCEPT {
			return operator<<((unsigned) bits);
		}

		template <class OtherT>
		friend constexpr OtherT operator<<(OtherT lhs, UInt128 rhs) RELEASE_NOEXCEPT
		    requires(std::is_integral_v<OtherT>) {
			return lhs << (OtherT) rhs;
		}

		friend constexpr i8 operator<<(i8 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return lhs << (i8) rhs;
		}

		friend constexpr i16 operator<<(i16 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return lhs << (i16) rhs;
		}

		friend constexpr i32 operator<<(i32 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return lhs << (i32) rhs;
		}

		friend constexpr i64 operator<<(i64 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return lhs << (i64) rhs;
		}

		friend constexpr u8 operator<<(u8 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return lhs << (u8) rhs;
		}

		friend constexpr u16 operator<<(u16 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return lhs << (u16) rhs;
		}

		friend constexpr u32 operator<<(u32 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return lhs << (u32) rhs;
		}

		friend constexpr u64 operator<<(u64 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return lhs << (u64) rhs;
		}

		template <class OtherT>
		constexpr UInt128 operator>>(OtherT amount) const RELEASE_NOEXCEPT
		    requires(std::is_integral_v<OtherT>) {
#ifdef Builtin_OVERFLOW_CHECKS
			if (amount < 0 || amount > 127)
				throw IntegerOverflowException();
#endif
			if (amount == 0)
				UNLIKELY { return *this; }

			if (amount >= 64) {
				return UInt128 {0u, _high >> (amount - 64)};
			}

#if USE_INTRINSICS
#ifdef MSVC
			if (!std::is_constant_evaluated())
				return UInt128(_high >> amount, __shiftright128(_low, _high, (uint8_t) amount));
			return UInt128 {_high >> amount, (_low >> amount) | (_high << (64 - amount))};
#else
			return unsigned __int128(*this) >> amount;
#endif
#else
			return UInt128 {_high >> amount, (_low >> amount) | (_high << (64 - amount))};
#endif
		}

		constexpr UInt128 operator>>(i8 bits) const RELEASE_NOEXCEPT {
			return operator>>((unsigned) bits);
		}

		constexpr UInt128 operator>>(i16 bits) const RELEASE_NOEXCEPT {
			return operator>>((unsigned) bits);
		}

		constexpr UInt128 operator>>(i32 bits) const RELEASE_NOEXCEPT {
			return operator>>((unsigned) bits);
		}

		constexpr UInt128 operator>>(i64 bits) const RELEASE_NOEXCEPT {
			return operator>>((unsigned) bits);
		}

		constexpr UInt128 operator>>(u8 bits) const RELEASE_NOEXCEPT {
			return operator>>((unsigned) bits);
		}

		constexpr UInt128 operator>>(u16 bits) const RELEASE_NOEXCEPT {
			return operator>>((unsigned) bits);
		}

		constexpr UInt128 operator>>(u32 bits) const RELEASE_NOEXCEPT {
			return operator>>((unsigned) bits);
		}

		constexpr UInt128 operator>>(u64 bits) const RELEASE_NOEXCEPT {
			return operator>>((unsigned) bits);
		}

		template <class OtherT>
		friend constexpr OtherT operator>>(OtherT lhs, UInt128 rhs) RELEASE_NOEXCEPT
		    requires(std::is_integral_v<OtherT>) {
			return lhs >> (OtherT) rhs;
		}

		friend constexpr i8 operator>>(i8 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return lhs >> (i8) rhs;
		}

		friend constexpr i16 operator>>(i16 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return lhs >> (i16) rhs;
		}

		friend constexpr i32 operator>>(i32 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return lhs >> (i32) rhs;
		}

		friend constexpr i64 operator>>(i64 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return lhs >> (i64) rhs;
		}

		friend constexpr u8 operator>>(u8 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return lhs >> (u8) rhs;
		}

		friend constexpr u16 operator>>(u16 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return lhs >> (u16) rhs;
		}

		friend constexpr u32 operator>>(u32 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return lhs >> (u32) rhs;
		}

		friend constexpr u64 operator>>(u64 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return lhs >> (u64) rhs;
		}

		constexpr UInt128 operator+(UInt128 rhs) const RELEASE_NOEXCEPT {
#if USE_INTRINSICS
#ifdef MSVC
			if (!std::is_constant_evaluated()) {
				UInt128 result;
				auto carry = _addcarry_u64(0, _low, rhs._low, &result._low);
				carry      = _addcarry_u64(carry, _high, rhs._high, (uint64_t*) &result._high);
#ifdef Builtin_OVERFLOW_CHECKS
				if (carry)
					throw IntegerOverflowException();
#endif
				return result;
			}
			return UInt128::addResult(UInt128(_high + rhs._high, _low + rhs._low), *this);
#else
#ifdef Builtin_OVERFLOW_CHECKS
			UInt128 result;
			if (__builtin_add_overflow(unsigned __int128(*this), unsigned __int128(rhs),
			                           (unsigned __int128*) &result))
				throw IntegerOverflowException();
#else
			UInt128 result = unsigned __int128(*this) + unsigned __int128(rhs);
#endif
			return result;
#endif
#else
			return UInt128::addResult(UInt128(_high + rhs._high, _low + rhs._low), *this);
#endif
		}

		constexpr UInt128 operator+(i8 rhs) const RELEASE_NOEXCEPT {
			return rhs < 0 ? operator-(-(int64_t) rhs) : operator+(UInt128(rhs));
		}

		constexpr UInt128 operator+(i16 rhs) const RELEASE_NOEXCEPT {
			return rhs < 0 ? operator-(-(int64_t) rhs) : operator+(UInt128(rhs));
		}

		constexpr UInt128 operator+(i32 rhs) const RELEASE_NOEXCEPT {
			return rhs < 0 ? operator-(-(int64_t) rhs) : operator+(UInt128(rhs));
		}

		constexpr UInt128 operator+(i64 rhs) const RELEASE_NOEXCEPT {
			return rhs < 0 ? operator-(~static_cast<uint64_t>((int64_t) rhs) + 1) :
			               operator+(UInt128(rhs));
		}

		constexpr UInt128 operator+(u8 rhs) const RELEASE_NOEXCEPT {
			return operator+(UInt128(rhs));
		}

		constexpr UInt128 operator+(u16 rhs) const RELEASE_NOEXCEPT {
			return operator+(UInt128(rhs));
		}

		constexpr UInt128 operator+(u32 rhs) const RELEASE_NOEXCEPT {
			return operator+(UInt128(rhs));
		}

		constexpr UInt128 operator+(u64 rhs) const RELEASE_NOEXCEPT {
			return operator+(UInt128(rhs));
		}

		constexpr UInt128 operator+(Int128 rhs) const RELEASE_NOEXCEPT;
		constexpr UInt128 operator-(Int128 rhs) const RELEASE_NOEXCEPT;
		constexpr UInt128 operator*(Int128 rhs) const;
		constexpr UInt128 Div(Int128 rhs) const;
		constexpr UInt128 operator%(Int128 rhs) const;

		template <typename OtherT>
		constexpr UInt128 operator+(OtherT rhs) const RELEASE_NOEXCEPT
		    requires(std::is_integral_v<OtherT>) {
			if constexpr (std::numeric_limits<OtherT>::is_signed) {
				return checkedAdd(rhs);
			}
			return operator+(UInt128(rhs));
		}

		template <typename OtherT>
		friend constexpr UInt128 operator+(OtherT lhs, UInt128 rhs) RELEASE_NOEXCEPT
		    requires(std::is_integral_v<OtherT>) {
			return rhs + lhs;
		}

		friend constexpr UInt128 operator+(i8 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return rhs + lhs;
		}

		friend constexpr UInt128 operator+(i16 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return rhs + lhs;
		}

		friend constexpr UInt128 operator+(i32 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return rhs + lhs;
		}

		friend constexpr UInt128 operator+(i64 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return rhs + lhs;
		}

		friend constexpr UInt128 operator+(u8 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return rhs + lhs;
		}

		friend constexpr UInt128 operator+(u16 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return rhs + lhs;
		}

		friend constexpr UInt128 operator+(u32 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return rhs + lhs;
		}

		friend constexpr UInt128 operator+(u64 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return rhs + lhs;
		}

		constexpr UInt128 operator-(UInt128 rhs) const RELEASE_NOEXCEPT {
#if USE_INTRINSICS
#ifdef MSVC
			if (!std::is_constant_evaluated()) {
				UInt128 result;
				auto carry = _subborrow_u64(0, _low, rhs._low, &result._low);
				carry      = _subborrow_u64(carry, _high, rhs._high, (uint64_t*) &result._high);
#ifdef Builtin_OVERFLOW_CHECKS
				if (carry)
					throw IntegerOverflowException();
#endif
				return result;
			}
			return UInt128::substractResult(UInt128(_high - rhs._high, _low - rhs._low), *this,
			                                rhs);
#else
#ifdef Builtin_OVERFLOW_CHECKS
			UInt128 result;
			if (__builtin_sub_overflow(unsigned __int128(*this), unsigned __int128(rhs),
			                           (unsigned __int128*) &result))
				throw IntegerOverflowException();
#else
			UInt128 result = unsigned __int128(*this) - unsigned __int128(rhs);
#endif
			return result;
#endif
#else
			return UInt128::substractResult(UInt128(_high - rhs._high, _low - rhs._low), *this,
			                                rhs);
#endif
		}

		constexpr UInt128 operator-(i8 rhs) const RELEASE_NOEXCEPT { return checkedSub(rhs); }

		constexpr UInt128 operator-(i16 rhs) const RELEASE_NOEXCEPT { return checkedSub(rhs); }

		constexpr UInt128 operator-(i32 rhs) const RELEASE_NOEXCEPT { return checkedSub(rhs); }

		constexpr UInt128 operator-(i64 rhs) const RELEASE_NOEXCEPT { return checkedSub(rhs); }

		constexpr UInt128 operator-(u8 rhs) const RELEASE_NOEXCEPT {
			return operator-(UInt128(rhs));
		}

		constexpr UInt128 operator-(u16 rhs) const RELEASE_NOEXCEPT {
			return operator-(UInt128(rhs));
		}

		constexpr UInt128 operator-(u32 rhs) const RELEASE_NOEXCEPT {
			return operator-(UInt128(rhs));
		}

		constexpr UInt128 operator-(u64 rhs) const RELEASE_NOEXCEPT {
			return operator-(UInt128(rhs));
		}

		template <typename OtherT>
		constexpr UInt128 operator-(OtherT rhs) const RELEASE_NOEXCEPT
		    requires(std::is_integral_v<OtherT>) {
			if constexpr (std::numeric_limits<OtherT>::is_signed) {
				return checkedSub(rhs);
			}
			return operator-(UInt128(rhs));
		}

		template <typename OtherT>
		friend constexpr OtherT operator-(OtherT lhs, UInt128 rhs) RELEASE_NOEXCEPT
		    requires(std::is_integral_v<OtherT>) {
			if (lhs < 0)
				return static_cast<OtherT>(i64(lhs) - i64(rhs));
			return static_cast<OtherT>(UInt128(lhs) - rhs);
		}

		friend constexpr i8 operator-(i8 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return lhs - (i8) rhs;
		}

		friend constexpr i16 operator-(i16 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return lhs - (i16) rhs;
		}

		friend constexpr i32 operator-(i32 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return lhs - (i32) rhs;
		}

		friend constexpr i64 operator-(i64 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return lhs - (i64) rhs;
		}

		friend constexpr u8 operator-(u8 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return lhs - (u8) rhs;
		}

		friend constexpr u16 operator-(u16 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return lhs - (u16) rhs;
		}

		friend constexpr u32 operator-(u32 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return lhs - (u32) rhs;
		}

		friend constexpr u64 operator-(u64 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return lhs - (u64) rhs;
		}

		/*template<typename OtherT> requires (!std::same_as<std::decay_t<OtherT>, UInt128>)
		    friend constexpr OtherT operator-(OtherT lhs, UInt128 rhs) {
		    if (lhs < 0) {
		        return lhs - (OtherT)rhs;
		    }
		    UInt128 _lhs(lhs);
		    return (OtherT)UInt128::substractResult(UInt128(_lhs._high - rhs._high, _lhs._low -
		rhs._low), _lhs, rhs);
		}*/
		inline constexpr UInt128 operator*(UInt128 rhs) const RELEASE_NOEXCEPT {
#if USE_INTRINSICS
#ifdef MSVC
#ifdef Builtin_OVERFLOW_CHECKS
			if (_high > 0 && rhs._high > 0)
				throw IntegerOverflowException();
#endif
			if (!std::is_constant_evaluated()) {
				uint64_t carry;
				const uint64_t low = _umul128(_low, rhs._low, &carry);
				return UInt128(_low * rhs._high + _high * rhs._low + carry, low);
			}
			uint64_t a32   = _low >> 32;
			uint64_t a00   = _low & 0xffffffff;
			uint64_t b32   = rhs._low >> 32;
			uint64_t b00   = rhs._low & 0xffffffff;
			UInt128 result = UInt128(_high * rhs._low + _low * rhs._high + a32 * b32, a00 * b00);
			result += UInt128(a32 * b00) << 32;
			result += UInt128(a00 * b32) << 32;
			return result;
#else
#ifdef Builtin_OVERFLOW_CHECKS
			UInt128 result;
			if (__builtin_mul_overflow(unsigned __int128(*this), unsigned __int128(rhs),
			                           (unsigned __int128*) &result))
				throw IntegerOverflowException();
#else
			UInt128 result = unsigned __int128(*this) * unsigned __int128(rhs);
#endif
			return result;
#endif
#else
#ifdef Builtin_OVERFLOW_CHECKS
			if (_high > 0 && rhs._high > 0)
				throw IntegerOverflowException();
#endif
			uint64_t a32   = _low >> 32;
			uint64_t a00   = _low & 0xffffffff;
			uint64_t b32   = rhs._low >> 32;
			uint64_t b00   = rhs._low & 0xffffffff;
			UInt128 result = UInt128(_high * rhs._low + _low * rhs._high + a32 * b32, a00 * b00);
			result += UInt128(a32 * b00) << 32;
			result += UInt128(a00 * b32) << 32;
			return result;
#endif
		}

		constexpr UInt128 operator*(i8 rhs) const RELEASE_NOEXCEPT {
			return operator*(UInt128(rhs));
		}

		constexpr UInt128 operator*(i16 rhs) const RELEASE_NOEXCEPT {
			return operator*(UInt128(rhs));
		}

		constexpr UInt128 operator*(i32 rhs) const RELEASE_NOEXCEPT {
			return operator*(UInt128(rhs));
		}

		constexpr UInt128 operator*(i64 rhs) const RELEASE_NOEXCEPT {
			return operator*(UInt128(rhs));
		}

		constexpr UInt128 operator*(u8 rhs) const RELEASE_NOEXCEPT {
			return operator*(UInt128(rhs));
		}

		constexpr UInt128 operator*(u16 rhs) const RELEASE_NOEXCEPT {
			return operator*(UInt128(rhs));
		}

		constexpr UInt128 operator*(u32 rhs) const RELEASE_NOEXCEPT {
			return operator*(UInt128(rhs));
		}

		constexpr UInt128 operator*(u64 rhs) const RELEASE_NOEXCEPT {
			return operator*(UInt128(rhs));
		}

		template <typename OtherT>
		constexpr UInt128 operator*(OtherT rhs) const RELEASE_NOEXCEPT
		    requires(std::is_integral_v<OtherT>) {
			return operator*(UInt128(rhs));
		}

		template <typename OtherT>
		friend inline constexpr UInt128 operator*(OtherT lhs, UInt128 rhs) RELEASE_NOEXCEPT
		    requires(std::is_integral_v<OtherT>) {
			return rhs * lhs;
		}

		friend inline constexpr UInt128 operator*(i8 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return rhs * lhs;
		}

		friend inline constexpr UInt128 operator*(i16 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return rhs * lhs;
		}

		friend inline constexpr UInt128 operator*(i32 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return rhs * lhs;
		}

		friend inline constexpr UInt128 operator*(i64 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return rhs * lhs;
		}

		friend inline constexpr UInt128 operator*(u8 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return rhs * lhs;
		}

		friend inline constexpr UInt128 operator*(u16 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return rhs * lhs;
		}

		friend inline constexpr UInt128 operator*(u32 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return rhs * lhs;
		}

		friend inline constexpr UInt128 operator*(u64 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return rhs * lhs;
		}

		constexpr UInt128 operator&(UInt128 rhs) const noexcept {
			return UInt128(_high & rhs._high, _low & rhs._low);
		}
		constexpr UInt128 operator&(Int128 rhs) const noexcept;

		constexpr UInt128 operator&(i8 rhs) const noexcept {
			return UInt128(_high & (rhs < 0 ? ~(0ull) : 0ull), _low & uint64_t((int64_t) rhs));
		}

		constexpr UInt128 operator&(i16 rhs) const noexcept {
			return UInt128(_high & (rhs < 0 ? ~(0ull) : 0ull), _low & uint64_t((int64_t) rhs));
		}

		constexpr UInt128 operator&(i32 rhs) const noexcept {
			return UInt128(_high & (rhs < 0 ? ~(0ull) : 0ull), _low & uint64_t((int64_t) rhs));
		}

		constexpr UInt128 operator&(i64 rhs) const noexcept {
			return UInt128(_high & (rhs < 0 ? ~(0ull) : 0ull), _low & uint64_t((int64_t) rhs));
		}

		constexpr UInt128 operator&(u8 rhs) const noexcept {
			return UInt128(0u, _low & uint64_t(rhs));
		}

		constexpr UInt128 operator&(u16 rhs) const noexcept {
			return UInt128(0u, _low & uint64_t(rhs));
		}

		constexpr UInt128 operator&(u32 rhs) const noexcept {
			return UInt128(0u, _low & uint64_t(rhs));
		}

		constexpr UInt128 operator&(u64 rhs) const noexcept {
			return UInt128(0u, _low & uint64_t(rhs));
		}

		template <typename OtherT>
		constexpr UInt128 operator&(OtherT rhs) const
		    noexcept(!std::numeric_limits<OtherT>::is_signed) requires(std::is_integral_v<OtherT>) {
			return operator&(UInt128(rhs));
		}

		template <typename OtherT>
		friend constexpr OtherT operator&(OtherT lhs, UInt128 rhs) RELEASE_NOEXCEPT
		    requires(std::is_integral_v<OtherT>) {
			return lhs & (OtherT) rhs;
		}

		friend constexpr i8 operator&(i8 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return lhs & (i8) rhs;
		}

		friend constexpr i16 operator&(i16 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return lhs & (i16) rhs;
		}

		friend constexpr i32 operator&(i32 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return lhs & (i32) rhs;
		}

		friend constexpr i64 operator&(i64 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return lhs & (i64) rhs;
		}

		friend constexpr u8 operator&(u8 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return lhs & (u8) rhs;
		}

		friend constexpr u16 operator&(u16 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return lhs & (u16) rhs;
		}

		friend constexpr u32 operator&(u32 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return lhs & (u32) rhs;
		}

		friend constexpr u64 operator&(u64 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return lhs & (u64) rhs;
		}

		constexpr UInt128 operator|(UInt128 rhs) const noexcept {
			return UInt128(_high | rhs._high, _low | rhs._low);
		}
		constexpr UInt128 operator|(Int128 rhs) const noexcept;

		constexpr UInt128 operator|(i8 rhs) const noexcept {
			return UInt128(_high | (rhs < 0 ? ~(0ull) : 0ull), _low | uint64_t((int64_t) rhs));
		}

		constexpr UInt128 operator|(i16 rhs) const noexcept {
			return UInt128(_high | (rhs < 0 ? ~(0ull) : 0ull), _low | uint64_t((int64_t) rhs));
		}

		constexpr UInt128 operator|(i32 rhs) const noexcept {
			return UInt128(_high | (rhs < 0 ? ~(0ull) : 0ull), _low | uint64_t((int64_t) rhs));
		}

		constexpr UInt128 operator|(i64 rhs) const noexcept {
			return UInt128(_high | (rhs < 0 ? ~(0ull) : 0ull), _low | uint64_t((int64_t) rhs));
		}

		constexpr UInt128 operator|(u8 rhs) const noexcept {
			return UInt128(_high, _low | uint64_t(rhs));
		}

		constexpr UInt128 operator|(u16 rhs) const noexcept {
			return UInt128(_high, _low | uint64_t(rhs));
		}

		constexpr UInt128 operator|(u32 rhs) const noexcept {
			return UInt128(_high, _low | uint64_t(rhs));
		}

		constexpr UInt128 operator|(u64 rhs) const noexcept {
			return UInt128(_high, _low | uint64_t(rhs));
		}

		template <typename OtherT>
		constexpr UInt128 operator|(OtherT rhs) const
		    noexcept(!std::numeric_limits<OtherT>::is_signed) requires(std::is_integral_v<OtherT>) {
			return operator|(UInt128(rhs));
		}

		template <typename OtherT>
		friend constexpr OtherT operator|(OtherT lhs, UInt128 rhs) RELEASE_NOEXCEPT
		    requires(std::is_integral_v<OtherT>) {
			return lhs | (OtherT) rhs;
		}

		friend constexpr i8 operator|(i8 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return lhs | (i8) rhs;
		}

		friend constexpr i16 operator|(i16 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return lhs | (i16) rhs;
		}

		friend constexpr i32 operator|(i32 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return lhs | (i32) rhs;
		}

		friend constexpr i64 operator|(i64 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return lhs | (i64) rhs;
		}

		friend constexpr u8 operator|(u8 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return lhs | (u8) rhs;
		}

		friend constexpr u16 operator|(u16 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return lhs | (u16) rhs;
		}

		friend constexpr u32 operator|(u32 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return lhs | (u32) rhs;
		}

		friend constexpr u64 operator|(u64 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return lhs | (u64) rhs;
		}

		constexpr UInt128 operator^(UInt128 rhs) const noexcept {
			return UInt128(_high ^ rhs._high, _low ^ rhs._low);
		}

		constexpr UInt128 operator^(Int128 rhs) const noexcept;

		constexpr UInt128 operator^(i8 rhs) const noexcept {
			return UInt128(_high ^ (rhs < 0 ? ~(0ull) : 0ull), _low ^ uint64_t((int64_t) rhs));
		}

		constexpr UInt128 operator^(i16 rhs) const noexcept {
			return UInt128(_high ^ (rhs < 0 ? ~(0ull) : 0ull), _low ^ uint64_t((int64_t) rhs));
		}

		constexpr UInt128 operator^(i32 rhs) const noexcept {
			return UInt128(_high ^ (rhs < 0 ? ~(0ull) : 0ull), _low ^ uint64_t((int64_t) rhs));
		}

		constexpr UInt128 operator^(i64 rhs) const noexcept {
			return UInt128(_high ^ (rhs < 0 ? ~(0ull) : 0ull), _low ^ uint64_t((int64_t) rhs));
		}

		constexpr UInt128 operator^(u8 rhs) const noexcept {
			return UInt128(_high, _low ^ uint64_t(rhs));
		}

		constexpr UInt128 operator^(u16 rhs) const noexcept {
			return UInt128(_high, _low ^ uint64_t(rhs));
		}

		constexpr UInt128 operator^(u32 rhs) const noexcept {
			return UInt128(_high, _low ^ uint64_t(rhs));
		}

		constexpr UInt128 operator^(u64 rhs) const noexcept {
			return UInt128(_high, _low ^ uint64_t(rhs));
		}

		template <typename OtherT>
		constexpr UInt128 operator^(OtherT rhs) const
		    noexcept(!std::numeric_limits<OtherT>::is_signed) requires(std::is_integral_v<OtherT>) {
			return operator^(UInt128(rhs));
		}

		template <typename OtherT>
		friend constexpr OtherT operator^(OtherT lhs, UInt128 rhs) RELEASE_NOEXCEPT
		    requires(std::is_integral_v<OtherT>) {
			return lhs ^ (OtherT) rhs;
		}

		friend constexpr i8 operator^(i8 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return lhs ^ (i8) rhs;
		}

		friend constexpr i16 operator^(i16 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return lhs ^ (i16) rhs;
		}

		friend constexpr i32 operator^(i32 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return lhs ^ (i32) rhs;
		}

		friend constexpr i64 operator^(i64 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return lhs ^ (i64) rhs;
		}

		friend constexpr u8 operator^(u8 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return lhs ^ (u8) rhs;
		}

		friend constexpr u16 operator^(u16 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return lhs ^ (u16) rhs;
		}

		friend constexpr u32 operator^(u32 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return lhs ^ (u32) rhs;
		}

		friend constexpr u64 operator^(u64 lhs, UInt128 rhs) RELEASE_NOEXCEPT {
			return lhs ^ (u64) rhs;
		}

		constexpr UInt128& operator<<=(int amount) RELEASE_NOEXCEPT {
			*this = *this << amount;
			return *this;
		}

		constexpr UInt128& operator>>=(int amount) RELEASE_NOEXCEPT {
			*this = *this >> amount;
			return *this;
		}

		template<class U>
		constexpr UInt128& operator+=(U other) RELEASE_NOEXCEPT {
			*this = *this + other;
			return *this;
		}

		template <class U>
		constexpr UInt128& operator-=(U other) RELEASE_NOEXCEPT {
			*this = *this - other;
			return *this;
		}

		template <class U>
		constexpr UInt128& operator*=(U other) RELEASE_NOEXCEPT {
			*this = *this * other;
			return *this;
		}

		template <class U>
		constexpr UInt128& operator/=(U rhs) {
			*this = (UInt128) std::round((double) *this / (double) rhs);
			return *this;
		}

		constexpr UInt128 Div(UInt128 rhs) const {
			if (rhs == 0) {
				throw DivisionByZeroException();
			}

#if USE_INTRINSICS && !defined(MSVC)
			unsigned __int128 result = unsigned __int128(*this) / unsigned __int128(rhs);
			return result;
#else
			if (rhs._high >= _high) {
				if (rhs._high > _high) {
					return 0u;
				}

				return _high == 0 ? _low / rhs._low : uint64_t(_low >= rhs._low);
			}

			if (rhs._high == 0) {
#if !USE_INTRINSICS
				if (rhs._low < (1ull << 32)) {
					return Div(static_cast<uint32_t>(rhs._low));
				} else
#endif
				{
					return Div(rhs._low);
				}
			}

#if USE_INTRINSICS
			if (!std::is_constant_evaluated()) {
				auto lhs            = *this;
				const auto divZeros = std::countl_zero((uint64_t) rhs._high);
				rhs <<= divZeros;
				auto highDigit = divZeros == 0 ? 0ull : uint64_t(_high) >> (64 - divZeros);
				lhs <<= divZeros;

				UInt128 qhat;
				qhat._high = highDigit >= rhs._high;
				uint64_t rhat;
				qhat._low =
				    UDiv128(highDigit >= rhs._high ? highDigit - (uint64_t) rhs._high : highDigit,
				            lhs._high, rhs._high, rhat);

				while (true) {
					if (qhat._high > 0) {
						--qhat;
					} else {
						UInt128 product;
						product._low = _umul128(qhat._low, rhs._low, (uint64_t*) &product._high);
						if (product <= UInt128(rhat, lhs._low)) {
							break;
						}
						--qhat._low;
					}

					const auto sum = rhat + (uint64_t) rhs._high;
					if (rhat > sum) {
						break;
					}
					rhat = sum;
				}

				uint64_t productHigh0;
				uint64_t productLow = _umul128(qhat._low, rhs._low, &productHigh0);
				auto borrow         = _subborrow_u64(0, lhs._low, productLow, &lhs._low);
				uint64_t productHigh1;
				productLow = _umul128(qhat._low, rhs._high, &productHigh1);
				productHigh1 += _addcarry_u64(0, productLow, productHigh0, &productLow);
				borrow = _subborrow_u64(borrow, lhs._high, productLow, (uint64_t*) &lhs._high);
				borrow = _subborrow_u64(borrow, highDigit, productHigh1, &highDigit);
				if (borrow) {
					--qhat._low;
				}
				return qhat;
			}
#endif
			auto divZeros           = std::countl_zero((uint64_t) rhs._high);
			const bool threeWordDiv = divZeros >= 32;
			divZeros &= 31;
			uint32_t u[5] {
			    static_cast<uint32_t>(_low << divZeros),
			    static_cast<uint32_t>(_low >> (32 - divZeros)),
			    static_cast<uint32_t>(_high << divZeros),
			    static_cast<uint32_t>(_high >> (32 - divZeros)),
			    0,
			};
			uint32_t v[4] = {
			    static_cast<uint32_t>(rhs._low << divZeros),
			    static_cast<uint32_t>(rhs._low >> (32 - divZeros)),
			    static_cast<uint32_t>(rhs._high << divZeros),
			    static_cast<uint32_t>(rhs._high >> (32 - divZeros)),
			};
			if (divZeros != 0) {
				u[2] |= _low >> (64 - divZeros);
				u[4] |= uint32_t(_high >> (64 - divZeros));
				v[2] |= rhs._low >> (64 - divZeros);
			}

			uint32_t q[2];
			if (threeWordDiv) {
				// 4-digit by 3-digit base 2^32 division
				Knuth_4_3_1_D(u, 5, v, 3, q);
			} else {
				// 4-digit by 4-digit base 2^32 division
				Knuth_4_3_1_D(u, 5, v, 4, q);
				q[1] = 0;
			}

			return (static_cast<uint64_t>(q[1]) << 32) | q[0];
#endif
		}

		template <typename OtherT>
		constexpr UInt128 Div(OtherT rhs) const requires(std::is_integral_v<OtherT>) {
			return Div(u64(rhs));
		}

		template <typename OtherT>
		friend constexpr OtherT Div(OtherT lhs,
		                            const UInt128& rhs) requires(std::is_integral_v<OtherT>) {
			return lhs / (OtherT) rhs;
		}

		constexpr UInt128 Div(i8 rhs) const { return Div(u32(rhs)); }

		constexpr UInt128 Div(i16 rhs) const { return Div(u32(rhs)); }

		constexpr UInt128 Div(i32 rhs) const { return Div(u32(rhs)); }

		constexpr UInt128 Div(i64 rhs) const { return Div(u64(rhs)); }

		constexpr UInt128 Div(u8 rhs) const { return Div(u32(rhs)); }

		constexpr UInt128 Div(u16 rhs) const { return Div(u32(rhs)); }

		constexpr UInt128 Div(u32 rhs) const {
#if USE_INTRINSICS
#ifdef MSVC
			return Div(u64(rhs));
#else
			if (rhs == 0)
				throw DivisionByZeroException();

			unsigned __int128 result = unsigned __int128(*this) / uint32_t(rhs);
			return result;
#endif
#else
			UInt128 result;
			result._high = _high.Div(rhs);
			uint64_t rem = ((_high % rhs) << 32) | (_low >> 32);
			result._low  = (rem / (uint32_t) rhs) << 32;
			rem          = ((rem % (uint32_t) rhs) << 32) | static_cast<uint32_t>(_low);
			result._low |= static_cast<uint32_t>(rem / (uint32_t) rhs);
			return result;
#endif
		}

		constexpr UInt128 Div(u64 rhs) const {
#if USE_INTRINSICS && !defined(MSVC)
			if (rhs == 0)
				throw DivisionByZeroException();

			unsigned __int128 result = unsigned __int128(*this) / uint64_t(rhs);
			return result;
#else
			UInt128 result;
			result._high = _high.Div(rhs);
			uint64_t rem = _high % rhs;
			result._low  = UDiv128(rem, _low, rhs, rem);
			return result;
#endif
		}

		friend inline constexpr i8 Div(i8 lhs, const UInt128& rhs) { return lhs.Div((i8) rhs); }

		friend inline constexpr i16 Div(i16 lhs, const UInt128& rhs) { return lhs.Div((i16) rhs); }

		friend inline constexpr i32 Div(i32 lhs, const UInt128& rhs) { return lhs.Div((i32) rhs); }

		friend inline constexpr i64 Div(i64 lhs, const UInt128& rhs) { return lhs.Div((i64) rhs); }

		friend inline constexpr u8 Div(u8 lhs, const UInt128& rhs) { return lhs.Div((u8) rhs); }

		friend inline constexpr u16 Div(u16 lhs, const UInt128& rhs) { return lhs.Div((u16) rhs); }

		friend inline constexpr u32 Div(u32 lhs, const UInt128& rhs) { return lhs.Div((u32) rhs); }

		friend inline constexpr u64 Div(u64 lhs, const UInt128& rhs) { return lhs.Div((u64) rhs); }

		template <class T>
		constexpr UInt128& DivAssign(T other) {
			*this = this->Div(other);
			return *this;
		}

		constexpr UInt128 operator%(UInt128 rhs) const {
			if (rhs == 0) {
				throw DivisionByZeroException();
			}

#if USE_INTRINSICS && !defined(MSVC)
			unsigned __int128 result = unsigned __int128(*this) % unsigned __int128(rhs);
			return result;
#else
			if (rhs._high >= _high) {
				if (rhs._high > _high) {
					return *this;
				}

				if (rhs._low <= _low) {
					return _high == 0 ? _low % rhs._low : _low - rhs._low;
				}
				return *this;
			}

			if (rhs._high == 0) {
#if !USE_INTRINSICS
				if (rhs._low < (1ull << 32)) {
					return operator%(static_cast<uint32_t>(rhs._low));
				} else
#endif
				{
					return operator%(rhs._low);
				}
			}

#if USE_INTRINSICS
			if (!std::is_constant_evaluated()) {
				auto lhs            = *this;
				const auto divZeros = std::countl_zero((uint64_t) rhs._high);
				rhs <<= divZeros;
				auto highDigit = divZeros == 0 ? 0ull : uint64_t(_high) >> (64 - divZeros);
				lhs <<= divZeros;

				uint64_t qhatHigh = highDigit >= rhs._high;
				uint64_t rhat;
				uint64_t qhat =
				    UDiv128(highDigit >= rhs._high ? highDigit - (uint64_t) rhs._high : highDigit,
				            lhs._high, rhs._high, rhat);

				while (true) {
					if (qhatHigh > 0) {
						if (qhat-- == 0) {
							--qhatHigh;
						}
					} else {
						UInt128 product;
						product._low = _umul128(qhat, rhs._low, (uint64_t*) &product._high);
						if (product <= UInt128(rhat, lhs._low)) {
							break;
						}
						--qhat;
					}

					const auto sum = rhat + (uint64_t) rhs._high;
					if (rhat > sum) {
						break;
					}
					rhat = sum;
				}

				uint64_t productHigh0;
				uint64_t productLow = _umul128(qhat, rhs._low, &productHigh0);
				auto borrow         = _subborrow_u64(0, lhs._low, productLow, &lhs._low);
				uint64_t productHigh1;
				productLow = _umul128(qhat, rhs._high, &productHigh1);
				productHigh1 += _addcarry_u64(0, productLow, productHigh0, &productLow);
				borrow = _subborrow_u64(borrow, lhs._high, productLow, (uint64_t*) &lhs._high);
				borrow = _subborrow_u64(borrow, highDigit, productHigh1, &highDigit);
				if (borrow) {
					auto carry = _addcarry_u64(0, lhs._low, rhs._low, &lhs._low);
					(void) _addcarry_u64(carry, lhs._high, rhs._high, (uint64_t*) &lhs._high);
				}

				lhs >>= divZeros;
				return lhs;
			}
#endif
			auto divZeros           = std::countl_zero((uint64_t) rhs._high);
			const bool threeWordDiv = divZeros >= 32;
			divZeros &= 31;
			uint32_t u[5] {
			    static_cast<uint32_t>(_low << divZeros),
			    static_cast<uint32_t>(_low >> (32 - divZeros)),
			    static_cast<uint32_t>(_high << divZeros),
			    static_cast<uint32_t>(_high >> (32 - divZeros)),
			    0,
			};
			uint32_t v[4] = {
			    static_cast<uint32_t>(rhs._low << divZeros),
			    static_cast<uint32_t>(rhs._low >> (32 - divZeros)),
			    static_cast<uint32_t>(rhs._high << divZeros),
			    static_cast<uint32_t>(rhs._high >> (32 - divZeros)),
			};
			if (divZeros != 0) {
				u[2] |= _low >> (64 - divZeros);
				u[4] |= uint32_t(_high >> (64 - divZeros));
				v[2] |= rhs._low >> (64 - divZeros);
			}

			uint32_t q[2];
			if (threeWordDiv) {
				// 4-digit by 3-digit base 2^32 division
				Knuth_4_3_1_D(u, 5, v, 3, q);
			} else {
				// 4-digit by 4-digit base 2^32 division
				Knuth_4_3_1_D(u, 5, v, 4, q);
			}

			auto lhs = UInt128((static_cast<uint64_t>(u[3]) << 32) | u[2],
			                   (static_cast<uint64_t>(u[1]) << 32) | u[0]);
			lhs >>= divZeros;
			return lhs;
#endif
		}

		constexpr UInt128 operator%(i8 rhs) const { return operator%(u32(rhs)); }

		constexpr UInt128 operator%(i16 rhs) const { return operator%(u32(rhs)); }

		constexpr UInt128 operator%(i32 rhs) const { return operator%(u32(rhs)); }

		constexpr UInt128 operator%(i64 rhs) const { return operator%(u64(rhs)); }

		constexpr UInt128 operator%(u8 rhs) const { return operator%(u32(rhs)); }

		constexpr UInt128 operator%(u16 rhs) const { return operator%(u32(rhs)); }

		constexpr UInt128 operator%(u32 rhs) const {
#if USE_INTRINSICS
#ifdef MSVC
			return operator%(u64(rhs));
#else
			if (rhs == 0)
				throw DivisionByZeroException();

			unsigned __int128 result = unsigned __int128(*this) % uint32_t(rhs);
			return result;
#endif
#else
			uint64_t rem = _high;
			rem          = ((rem % (uint32_t) rhs) << 32) | (_low >> 32);
			rem          = ((rem % (uint32_t) rhs) << 32) | static_cast<uint32_t>(_low);
			return rem % (uint32_t) rhs;
#endif
		}

		constexpr UInt128 operator%(u64 rhs) const {
#if USE_INTRINSICS && !defined(MSVC)
			if (rhs == 0)
				throw DivisionByZeroException();

			unsigned __int128 result = unsigned __int128(*this) % uint64_t(rhs);
			return result;
#else
			uint64_t rem;
			(void) UDiv128(_high % rhs, _low, rhs, rem);
			return rem;
#endif
		}

		template <typename OtherT>
		constexpr UInt128 operator%(OtherT rhs) const requires(std::is_integral_v<OtherT>) {
			return operator%(u64(rhs));
		}

		template <typename OtherT>
		friend constexpr OtherT operator%(OtherT lhs,
		                                  UInt128 rhs) requires(std::is_integral_v<OtherT>) {
			return lhs % (OtherT) rhs;
		}

		friend inline constexpr i8 operator%(i8 lhs, UInt128 rhs) { return lhs % (i8) rhs; }

		friend inline constexpr i16 operator%(i16 lhs, UInt128 rhs) { return lhs % (i16) rhs; }

		friend inline constexpr i32 operator%(i32 lhs, UInt128 rhs) { return lhs % (i32) rhs; }

		friend inline constexpr i64 operator%(i64 lhs, UInt128 rhs) { return lhs % (i64) rhs; }

		friend inline constexpr u8 operator%(u8 lhs, UInt128 rhs) { return lhs % (u8) rhs; }

		friend inline constexpr u16 operator%(u16 lhs, UInt128 rhs) { return lhs % (u16) rhs; }

		friend inline constexpr u32 operator%(u32 lhs, UInt128 rhs) { return lhs % (u32) rhs; }

		friend inline constexpr u64 operator%(u64 lhs, UInt128 rhs) { return lhs % (u64) rhs; }

		template <class T>
		constexpr UInt128& operator%=(T other) {
			*this = *this % other;
			return *this;
		}

		template <class U>
		constexpr UInt128& operator&=(U other) RELEASE_NOEXCEPT {
			*this = *this & other;
			return *this;
		}

		template <class U>
		constexpr UInt128& operator|=(U other) RELEASE_NOEXCEPT {
			*this = *this | other;
			return *this;
		}

		template <class U>
		constexpr UInt128& operator^=(U other) RELEASE_NOEXCEPT {
			*this = *this ^ other;
			return *this;
		}

		constexpr UInt128& operator++() RELEASE_NOEXCEPT {
			if (++_low == 0) {
				++_high;
			}
			return *this;
		}

		constexpr UInt128& operator--() RELEASE_NOEXCEPT {
			if (_low-- == 0) {
				--_high;
			}
			return *this;
		}

		constexpr UInt128 operator++(int) RELEASE_NOEXCEPT {
			UInt128 tmp(*this);
			++*this;
			return tmp;
		}

		constexpr UInt128 operator--(int) RELEASE_NOEXCEPT {
			UInt128 tmp(*this);
			--*this;
			return tmp;
		}

		constexpr UInt128 operator+() const noexcept { return *this; }

		UInt128 operator-() const {
			throw IntegerOverflowException();
			return *this;
		}

		constexpr UInt128 operator~() const noexcept { return UInt128(~_high, ~_low); }
		constexpr UInt128 _operator_not() const noexcept { return ~*this; }

		constexpr bool operator==(UInt128 rhs) const noexcept {
			return _low == rhs._low && _high == rhs._high;
		}

		constexpr bool operator!=(UInt128 rhs) const noexcept { return !(*this == rhs); }

		constexpr bool operator==(i8 rhs) const noexcept {
			if (_high != 0)
				return false;
			if (rhs < 0)
				return false;
			return _low == rhs;
		}

		constexpr bool operator==(i16 rhs) const noexcept {
			if (_high != 0)
				return false;
			if (rhs < 0)
				return false;
			return _low == rhs;
		}

		constexpr bool operator==(i32 rhs) const noexcept {
			if (_high != 0)
				return false;
			if (rhs < 0)
				return false;
			return _low == rhs;
		}

		constexpr bool operator==(i64 rhs) const noexcept {
			if (_high != 0)
				return false;
			if (rhs < 0)
				return false;
			return _low == rhs;
		}

		constexpr bool operator==(u8 rhs) const noexcept {
			if (_high != 0)
				return false;
			return _low == rhs;
		}

		constexpr bool operator==(u16 rhs) const noexcept {
			if (_high != 0)
				return false;
			return _low == rhs;
		}

		constexpr bool operator==(u32 rhs) const noexcept {
			if (_high != 0)
				return false;
			return _low == rhs;
		}

		constexpr bool operator==(u64 rhs) const noexcept {
			if (_high != 0)
				return false;
			return _low == rhs;
		}

		template <typename OtherT>
		constexpr bool operator==(OtherT rhs) const noexcept requires(std::is_integral_v<OtherT>) {
			if (_high != 0)
				return false;
			if constexpr (std::numeric_limits<OtherT>::is_signed) {
				if (rhs < 0)
					return false;
			}
			return _low == rhs;
		}

		template <typename OtherT>
		friend constexpr bool operator==(OtherT lhs, UInt128 rhs) noexcept
		    requires(std::is_integral_v<OtherT>) {
			if (rhs.High64() != 0)
				return false;
			if constexpr (std::numeric_limits<OtherT>::is_signed) {
				if (lhs < 0)
					return false;
			}
			return _low == lhs;
		}

		friend constexpr bool operator==(i8 lhs, UInt128 rhs) noexcept {
			if (rhs.High64() != 0)
				return false;
			if (lhs < 0)
				return false;
			return lhs == rhs.Low64();
		}

		friend constexpr bool operator==(i16 lhs, UInt128 rhs) noexcept {
			if (rhs.High64() != 0)
				return false;
			if (lhs < 0)
				return false;
			return lhs == rhs.Low64();
		}

		friend constexpr bool operator==(i32 lhs, UInt128 rhs) noexcept {
			if (rhs.High64() != 0)
				return false;
			if (lhs < 0)
				return false;
			return lhs == rhs.Low64();
		}

		friend constexpr bool operator==(i64 lhs, UInt128 rhs) noexcept {
			if (rhs.High64() != 0)
				return false;
			if (lhs < 0)
				return false;
			return lhs == rhs.Low64();
		}

		friend constexpr bool operator==(u8 lhs, UInt128 rhs) noexcept {
			if (rhs.High64() != 0)
				return false;
			return lhs == rhs.Low64();
		}

		friend constexpr bool operator==(u16 lhs, UInt128 rhs) noexcept {
			if (rhs.High64() != 0)
				return false;
			return lhs == rhs.Low64();
		}

		friend constexpr bool operator==(u32 lhs, UInt128 rhs) noexcept {
			if (rhs.High64() != 0)
				return false;
			return lhs == rhs.Low64();
		}

		friend constexpr bool operator==(u64 lhs, UInt128 rhs) noexcept {
			if (rhs.High64() != 0)
				return false;
			return lhs == rhs.Low64();
		}

		constexpr bool operator!=(i8 rhs) const noexcept {
			if (_high != 0)
				return true;
			if (rhs < 0)
				return true;
			return _low != rhs;
		}

		constexpr bool operator!=(i16 rhs) const noexcept {
			if (_high != 0)
				return true;
			if (rhs < 0)
				return true;
			return _low != rhs;
		}

		constexpr bool operator!=(i32 rhs) const noexcept {
			if (_high != 0)
				return true;
			if (rhs < 0)
				return true;
			return _low != rhs;
		}

		constexpr bool operator!=(i64 rhs) const noexcept {
			if (_high != 0)
				return true;
			if (rhs < 0)
				return true;
			return _low != rhs;
		}

		constexpr bool operator!=(u8 rhs) const noexcept {
			if (_high != 0)
				return true;
			return _low != rhs;
		}

		constexpr bool operator!=(u16 rhs) const noexcept {
			if (_high != 0)
				return true;
			return _low != rhs;
		}

		constexpr bool operator!=(u32 rhs) const noexcept {
			if (_high != 0)
				return true;
			return _low != rhs;
		}

		constexpr bool operator!=(u64 rhs) const noexcept {
			if (_high != 0)
				return true;
			return _low != rhs;
		}

		template <typename OtherT>
		constexpr bool operator!=(OtherT rhs) const noexcept requires(std::is_integral_v<OtherT>) {
			if (_high != 0)
				return true;
			if constexpr (std::numeric_limits<OtherT>::is_signed) {
				if (rhs < 0)
					return true;
			}
			return _low != rhs;
		}

		template <typename OtherT>
		friend constexpr bool operator!=(OtherT lhs, UInt128 rhs) noexcept
		    requires(std::is_integral_v<OtherT>) {
			if (rhs.High64() != 0)
				return true;
			if constexpr (std::numeric_limits<OtherT>::is_signed) {
				if (lhs < 0)
					return true;
			}
			return _low != lhs;
		}

		friend constexpr bool operator!=(i8 lhs, UInt128 rhs) noexcept {
			if (rhs.High64() != 0)
				return true;
			if (lhs < 0)
				return true;
			return lhs != rhs.Low64();
		}

		friend constexpr bool operator!=(i16 lhs, UInt128 rhs) noexcept {
			if (rhs.High64() != 0)
				return true;
			if (lhs < 0)
				return true;
			return lhs != rhs.Low64();
		}

		friend constexpr bool operator!=(i32 lhs, UInt128 rhs) noexcept {
			if (rhs.High64() != 0)
				return true;
			if (lhs < 0)
				return true;
			return lhs != rhs.Low64();
		}

		friend constexpr bool operator!=(i64 lhs, UInt128 rhs) noexcept {
			if (rhs.High64() != 0)
				return true;
			if (lhs < 0)
				return true;
			return lhs != rhs.Low64();
		}

		friend constexpr bool operator!=(u8 lhs, UInt128 rhs) noexcept {
			if (rhs.High64() != 0)
				return true;
			return lhs != rhs.Low64();
		}

		friend constexpr bool operator!=(u16 lhs, UInt128 rhs) noexcept {
			if (rhs.High64() != 0)
				return true;
			return lhs != rhs.Low64();
		}

		friend constexpr bool operator!=(u32 lhs, UInt128 rhs) noexcept {
			if (rhs.High64() != 0)
				return true;
			return lhs != rhs.Low64();
		}

		friend constexpr bool operator!=(u64 lhs, UInt128 rhs) noexcept {
			if (rhs.High64() != 0)
				return true;
			return lhs != rhs.Low64();
		}

		constexpr bool operator==(Int128 rhs) const noexcept;
		constexpr bool operator!=(Int128 rhs) const noexcept;

		constexpr int operator<=>(UInt128 rhs) const noexcept {
			if (const uint64_t lhsHigh = _high, rhsHigh = rhs._high; lhsHigh < rhsHigh) {
				return -1;
			} else if (lhsHigh > rhsHigh) {
				return 1;
			}

			if (const uint64_t lhsLow = _low, rhsLow = rhs._low; lhsLow < rhsLow) {
				return -1;
			} else if (lhsLow > rhsLow) {
				return 1;
			}
			return 0;
		}

		constexpr int operator<=>(i8 rhs) const noexcept {
			if (_high != 0)
				return 1;
			if (rhs < 0)
				return 1;
			return _low <=> rhs;
		}

		constexpr int operator<=>(i16 rhs) const noexcept {
			if (_high != 0)
				return 1;
			if (rhs < 0)
				return 1;
			return _low <=> rhs;
		}

		constexpr int operator<=>(i32 rhs) const noexcept {
			if (_high != 0)
				return 1;
			if (rhs < 0)
				return 1;
			return _low <=> rhs;
		}

		constexpr int operator<=>(i64 rhs) const noexcept {
			if (_high != 0)
				return 1;
			if (rhs < 0)
				return 1;
			return _low <=> rhs;
		}

		constexpr int operator<=>(u8 rhs) const noexcept {
			if (_high != 0)
				return 1;
			return _low <=> rhs;
		}

		constexpr int operator<=>(u16 rhs) const noexcept {
			if (_high != 0)
				return 1;
			return _low <=> rhs;
		}

		constexpr int operator<=>(u32 rhs) const noexcept {
			if (_high != 0)
				return 1;
			return _low <=> rhs;
		}

		constexpr int operator<=>(u64 rhs) const noexcept {
			if (_high != 0)
				return 1;
			return _low <=> rhs;
		}

		template <typename OtherT>
		constexpr int operator<=>(OtherT rhs) const noexcept requires(std::is_integral_v<OtherT>) {
			if (_high != 0)
				return 1;
			if constexpr (std::numeric_limits<OtherT>::is_signed) {
				if (rhs < 0)
					return 1;
			}
			return u64(_low) <=> rhs;
		}

		template <typename OtherT>
		friend constexpr int operator<=>(OtherT lhs, UInt128 rhs) noexcept
		    requires(std::is_integral_v<OtherT>) {
			if (rhs.High64() != 0)
				return -1;
			if constexpr (std::numeric_limits<OtherT>::is_signed) {
				if (lhs < 0)
					return -1;
			}
			return lhs <=> rhs.Low64();
		}

		friend constexpr int operator<=>(i8 lhs, UInt128 rhs) noexcept {
			if (rhs.High64() != 0)
				return -1;
			if (lhs < 0)
				return -1;
			return lhs <=> rhs.Low64();
		}

		friend constexpr int operator<=>(i16 lhs, UInt128 rhs) noexcept {
			if (rhs.High64() != 0)
				return -1;
			if (lhs < 0)
				return -1;
			return lhs <=> rhs.Low64();
		}

		friend constexpr int operator<=>(i32 lhs, UInt128 rhs) noexcept {
			if (rhs.High64() != 0)
				return -1;
			if (lhs < 0)
				return -1;
			return lhs <=> rhs.Low64();
		}

		friend constexpr int operator<=>(i64 lhs, UInt128 rhs) noexcept {
			if (rhs.High64() != 0)
				return -1;
			if (lhs < 0)
				return -1;
			return lhs <=> rhs.Low64();
		}

		friend constexpr int operator<=>(u8 lhs, UInt128 rhs) noexcept {
			if (rhs.High64() != 0)
				return -1;
			return lhs <=> rhs.Low64();
		}

		friend constexpr int operator<=>(u16 lhs, UInt128 rhs) noexcept {
			if (rhs.High64() != 0)
				return -1;
			return lhs <=> rhs.Low64();
		}

		friend constexpr int operator<=>(u32 lhs, UInt128 rhs) noexcept {
			if (rhs.High64() != 0)
				return -1;
			return lhs <=> rhs.Low64();
		}

		friend constexpr int operator<=>(u64 lhs, UInt128 rhs) noexcept {
			if (rhs.High64() != 0)
				return -1;
			return lhs <=> rhs.Low64();
		}

		constexpr int operator<=>(Int128 rhs) const noexcept;

		template <class U>
		inline constexpr U __builtin_UnsafeNarrow() const noexcept;

	   private:
		static constexpr UInt128 addResult(UInt128 result, UInt128 lhs) RELEASE_NOEXCEPT {
			return (result._low < lhs._low) ? UInt128(result._high + 1, result._low) : result;
		}

		static constexpr UInt128 substractResult(UInt128 result, UInt128 lhs,
		                                         UInt128 rhs) RELEASE_NOEXCEPT {
			return (lhs._low < rhs._low) ? UInt128(result._high - 1, result._low) : result;
		}
		template <typename OtherT>
		constexpr UInt128 checkedAdd(OtherT rhs) const RELEASE_NOEXCEPT {
			if (rhs < 0) {
				const auto rhs128 = UInt128(-rhs);
				return UInt128::substractResult(UInt128(_high - rhs128._high, _low - rhs128._low),
				                                *this, rhs128);
			}
			const auto rhs128 = UInt128(rhs);
			return UInt128::addResult(UInt128(_high + rhs128._high, _low + rhs128._low), *this);
		}
		template <typename OtherT>
		constexpr UInt128 checkedSub(OtherT rhs) const RELEASE_NOEXCEPT {
			if (rhs < 0) {
				const auto rhs128 = UInt128(-rhs);
				return UInt128::addResult(UInt128(_high + rhs128._high, _low + rhs128._low), *this);
			}
			const UInt128 _rhs(rhs);
			return UInt128::substractResult(UInt128(_high - _rhs._high, _low - _rhs._low), *this,
			                                _rhs);
		}
		static constexpr UInt128 minValue() noexcept { return UInt128(0); }

		static constexpr UInt128 maxValue() noexcept { return UInt128(UINT64_MAX, UINT64_MAX); }

#if defined(_WIN32) || defined(__BYTE_ORDER__) && (__BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__)
		uint64_t _low;
		u64 _high;
#else
		u64 _high;
		uint64_t _low;
#endif
	};

	inline constexpr UInt128 ParseUInt128(std::string_view input) RELEASE_NOEXCEPT {
		UInt128 tmp;
		auto inputEnd = input.data() + input.size();
		auto ret      = FromChars(input.data(), inputEnd, tmp);
#ifdef Builtin_OVERFLOW_CHECKS
		if (ret.ec == std::errc::result_out_of_range)
			throw IntegerOverflowException();
#endif
		return tmp;
	}

	ASTRUMSTD_API std::string U128ToFormattedString(UInt128 v, std::ios_base::fmtflags flags);

	inline std::string DebugPrintUInt128(UInt128 v) {
		return U128ToFormattedString(v, static_cast<std::ios_base::fmtflags>(0x0200));
	}

	inline constexpr uint64_t UInt128Low64(UInt128 v) noexcept { return v.Low64(); }
	inline constexpr u64 UInt128High64(UInt128 v) noexcept { return v.High64(); }

	namespace __Details {
		inline constexpr int64_t BitCastToSigned(uint64_t v) RELEASE_NOEXCEPT {
			return v & (uint64_t {1} << 63) ? ~static_cast<int64_t>(~v) : static_cast<int64_t>(v);
		}
	}  // namespace __Details

	class alignas(16) Int128 : public Struct {
	   public:
		using __self       = Int128;
		using __underlying = Int128;
		using __class      = __Class_Int128;
		using Unsigned                = UInt128;
		using DivisibleArithmeticType = double;

		constexpr decltype(auto) __ref() noexcept { return *this; }
		constexpr decltype(auto) __ref() const noexcept { return *this; }

		constexpr Int128() noexcept : _low(0), _high(0) {}
		constexpr Int128(i64 high, u64 low) noexcept : _low(low), _high(high) {}
		constexpr Int128(int value) noexcept
		    : _low(static_cast<uint64_t>(value)), _high(value < 0 ? ~int64_t(0) : 0) {}
		constexpr Int128(long value) noexcept
		    : _low(static_cast<uint64_t>(value)), _high(value < 0 ? ~int64_t(0) : 0) {}
		constexpr Int128(int64_t value) noexcept
		    : _low(static_cast<uint64_t>(value)), _high(value < 0 ? ~int64_t(0) : 0) {}
		constexpr Int128(unsigned value) noexcept : _low(value), _high(0) {}
		constexpr Int128(unsigned long value) noexcept : _low(value), _high(0) {}
		constexpr Int128(uint64_t value) noexcept : _low(value), _high(0) {}

		constexpr Int128(i8 value) noexcept
		    : _low(static_cast<uint64_t>((int8_t) value)), _high(value < 0 ? ~int64_t(0) : 0) {}
		constexpr Int128(i16 value) noexcept
		    : _low(static_cast<uint64_t>((int16_t) value)), _high(value < 0 ? ~int64_t(0) : 0) {}
		constexpr Int128(i32 value) noexcept
		    : _low(static_cast<uint64_t>((int) value)), _high(value < 0 ? ~int64_t(0) : 0) {}
		constexpr Int128(i64 value) noexcept
		    : _low(static_cast<uint64_t>((int64_t) value)), _high(value < 0 ? ~int64_t(0) : 0) {}
		constexpr Int128(u8 value) noexcept : _low(value), _high(0) {}
		constexpr Int128(u16 value) noexcept : _low(value), _high(0) {}
		constexpr Int128(u32 value) noexcept : _low(value), _high(0) {}
		constexpr Int128(u64 value) noexcept : _low(value), _high(0) {}

		constexpr explicit Int128(UInt128 value) RELEASE_NOEXCEPT
		    : _low(value.Low64()),
		      _high(static_cast<int64_t>((uint64_t) value.High64())) {
#ifdef Builtin_OVERFLOW_CHECKS
			if (value > UInt128(INT128_MAX))
				throw IntegerOverflowException();
#endif
		}

#if defined(CLANG) || defined(GCC)
		constexpr Int128(__int128 value) noexcept { *(__int128*) this = value; }
		constexpr Int128& operator=(__int128 value) noexcept {
			*(__int128*) this = value;
			return *this;
		}
		constexpr operator __int128() const noexcept { return *((__int128*) this); }
#endif

		// API explicit Int128(float value);
		// API explicit Int128(double value);
		// explicit Int128(Float32 value) : Int128((float)value) {}
		// explicit Int128(Float64 value) : Int128((double)value) {}

		//constexpr Int128(const Int128& value) noexcept = default;
		//constexpr Int128& operator=(const Int128& value) noexcept = default;

		constexpr Int128& operator=(int value) noexcept { return *this = Int128(value); }

		constexpr Int128& operator=(long value) noexcept { return *this = Int128(value); }

		constexpr Int128& operator=(int64_t value) noexcept { return *this = Int128(value); }

		constexpr Int128& operator=(i8 value) noexcept { return *this = Int128(value); }

		constexpr Int128& operator=(i16 value) noexcept { return *this = Int128(value); }

		constexpr Int128& operator=(i32 value) noexcept { return *this = Int128(value); }

		constexpr Int128& operator=(i64 value) noexcept { return *this = Int128(value); }

		constexpr Int128& operator=(unsigned value) noexcept { return *this = Int128(value); }

		constexpr Int128& operator=(unsigned long value) noexcept { return *this = Int128(value); }

		constexpr Int128& operator=(uint64_t value) noexcept { return *this = Int128(value); }

		constexpr Int128& operator=(u8 value) noexcept { return *this = Int128(value); }

		constexpr Int128& operator=(u16 value) noexcept { return *this = Int128(value); }

		constexpr Int128& operator=(u32 value) noexcept { return *this = Int128(value); }

		constexpr Int128& operator=(u64 value) noexcept { return *this = Int128(value); }

		// constexpr Int128& operator=(UInt128 value) { return *this = Int128(value); }

		template <std::floating_point F>
		constexpr explicit Int128(F value) {
#ifdef Builtin_OVERFLOW_CHECKS
			if (value < -170141183460469231731687303715884105728.0 ||
			    value > 170141183460469231731687303715884105727.0 || std::isnan(value))
				throw IntegerOverflowException();
#endif
			constexpr F two_32 {static_cast<F>(1ull << 32)};
			constexpr F two_64 {two_32 * two_32};
			constexpr F two_127 {two_64 * static_cast<F>(1ull << 63)};

			if (!(value >= F {0}) && !(value <= F {0})) {
				_high = 0;
				_low  = 0;
			}

			if (value >= two_127) {
				_high = INT64_MAX;
				_low  = UINT64_MAX;
			}

			if (value <= -two_127) {
				_high = INT64_MIN;
				_low  = 0;
			}

			const bool negative {value < F {0}};
			const F abs_f {negative ? -value : value};

			std::uint64_t h {static_cast<std::uint64_t>(abs_f / two_64)};
			const F remainder {abs_f - static_cast<F>(h) * two_64};
			std::uint64_t l {static_cast<std::uint64_t>(remainder)};

			if (negative) {
				// Two's complement negation of (h, l): new_l = -l (with wraparound),
				// new_h = ~h if a borrow occurred (l != 0), else ~h + 1.
				const bool low_was_zero {l == 0};
				l = 0ull - l;
				h = ~h + (low_was_zero ? 1ull : 0ull);
			}

			_high = static_cast<std::int64_t>(h);
			_low  = l;
		}

		template <class F>
		static constexpr Int128 NarrowFromFloat(F value) {
			constexpr F two_32 {static_cast<F>(1ull << 32)};
			constexpr F two_64 {two_32 * two_32};
			constexpr F two_127 {two_64 * static_cast<F>(1ull << 63)};
			int64_t _high;
			uint64_t _low;

			if (!(value >= F {0}) && !(value <= F {0})) {
				_high = 0;
				_low  = 0;
			}

			if (value >= two_127) {
				_high = INT64_MAX;
				_low  = UINT64_MAX;
			}

			if (value <= -two_127) {
				_high = INT64_MIN;
				_low  = 0;
			}

			const bool negative {value < F {0}};
			const F abs_f {negative ? -value : value};

			std::uint64_t h {static_cast<std::uint64_t>(abs_f / two_64)};
			const F remainder {abs_f - static_cast<F>(h) * two_64};
			std::uint64_t l {static_cast<std::uint64_t>(remainder)};

			if (negative) {
				// Two's complement negation of (h, l): new_l = -l (with wraparound),
				// new_h = ~h if a borrow occurred (l != 0), else ~h + 1.
				const bool low_was_zero {l == 0};
				l = 0ull - l;
				h = ~h + (low_was_zero ? 1ull : 0ull);
			}

			_high = static_cast<std::int64_t>(h);
			_low  = l;
			return Int128(_high, _low);
		}

		constexpr u64 Low64() const noexcept { return _low; }

		constexpr i64 High64() const noexcept { return _high; }

		constexpr explicit operator bool() const noexcept { return _low || _high; }

		constexpr explicit operator char() const RELEASE_NOEXCEPT {
			return static_cast<char>(static_cast<int64_t>(*this));
		}
		constexpr explicit operator signed char() const RELEASE_NOEXCEPT {
			return static_cast<signed char>(static_cast<int64_t>(*this));
		}
		constexpr explicit operator unsigned char() const RELEASE_NOEXCEPT {
#ifdef Builtin_OVERFLOW_CHECKS
			if (_high != 0)
				throw IntegerOverflowException();
#endif
			return static_cast<unsigned char>(_low);
		}
		constexpr explicit operator wchar_t() const RELEASE_NOEXCEPT {
			return static_cast<wchar_t>(static_cast<int64_t>(*this));
		}
		constexpr explicit operator short() const RELEASE_NOEXCEPT {
			return static_cast<short>(static_cast<int64_t>(*this));
		}
		constexpr explicit operator unsigned short() const RELEASE_NOEXCEPT {
#ifdef Builtin_OVERFLOW_CHECKS
			if (_high != 0)
				throw IntegerOverflowException();
#endif
			return static_cast<unsigned short>(_low);
		}
		constexpr explicit operator int() const RELEASE_NOEXCEPT {
			return static_cast<int>(static_cast<int64_t>(*this));
		}
		constexpr explicit operator unsigned() const RELEASE_NOEXCEPT {
#ifdef Builtin_OVERFLOW_CHECKS
			if (_high != 0)
				throw IntegerOverflowException();
#endif
			return static_cast<unsigned>(_low);
		}
		constexpr explicit operator long() const RELEASE_NOEXCEPT {
			return static_cast<long>(static_cast<int64_t>(*this));
		}
		constexpr explicit operator unsigned long() const RELEASE_NOEXCEPT {
#ifdef Builtin_OVERFLOW_CHECKS
			if (_high != 0)
				throw IntegerOverflowException();
#endif
			return static_cast<unsigned long>(_low);
		}
		constexpr explicit operator int64_t() const RELEASE_NOEXCEPT {
#ifdef Builtin_OVERFLOW_CHECKS
			if (*this < std::numeric_limits<int64_t>::min() ||
			    *this > std::numeric_limits<int64_t>::max())
				throw IntegerOverflowException();
#endif
			return __Details::BitCastToSigned(_low);
		}
		constexpr explicit operator uint64_t() const RELEASE_NOEXCEPT {
#ifdef Builtin_OVERFLOW_CHECKS
			if (_high != 0)
				throw IntegerOverflowException();
#endif
			return _low;
		}
		constexpr explicit operator i8() const RELEASE_NOEXCEPT {
			return static_cast<i8>(static_cast<int64_t>(*this));
		}
		constexpr explicit operator u8() const RELEASE_NOEXCEPT {
#ifdef Builtin_OVERFLOW_CHECKS
			if (_high != 0)
				throw IntegerOverflowException();
#endif
			return static_cast<u8>(_low);
		}
		constexpr explicit operator i16() const RELEASE_NOEXCEPT {
			return static_cast<i16>(static_cast<int64_t>(*this));
		}
		constexpr explicit operator u16() const RELEASE_NOEXCEPT {
#ifdef Builtin_OVERFLOW_CHECKS
			if (_high != 0)
				throw IntegerOverflowException();
#endif
			return static_cast<u16>(_low);
		}
		constexpr explicit operator i32() const RELEASE_NOEXCEPT {
			return static_cast<i32>(static_cast<int64_t>(*this));
		}
		constexpr explicit operator u32() const RELEASE_NOEXCEPT {
#ifdef Builtin_OVERFLOW_CHECKS
			if (_high != 0)
				throw IntegerOverflowException();
#endif
			return static_cast<u32>(_low);
		}
		constexpr explicit operator i64() const RELEASE_NOEXCEPT {
#ifdef Builtin_OVERFLOW_CHECKS
			if (*this < std::numeric_limits<int64_t>::min() ||
			    *this > std::numeric_limits<int64_t>::max())
				throw IntegerOverflowException();
#endif
			return __Details::BitCastToSigned(_low);
		}
		constexpr explicit operator u64() const RELEASE_NOEXCEPT {
#ifdef Builtin_OVERFLOW_CHECKS
			if (_high != 0)
				throw IntegerOverflowException();
#endif
			return _low;
		}

#ifdef __FLT16_MAX__
		constexpr explicit operator _Float16() const noexcept { return static_cast<float>(*this); }
#endif
		constexpr operator float() const noexcept {
			constexpr float pow_2_64 = 18446744073709551616.0f;
			return _high < 0 && *this != minValue()
			           ? -static_cast<float>(-*this)
			           : static_cast<float>((uint64_t) _low) +
			                 static_cast<float>((int64_t) _high) * pow_2_64;
		}
		constexpr operator double() const noexcept {
			constexpr double pow_2_64 = 18446744073709551616.0;
			return _high < 0 && *this != minValue()
			           ? -static_cast<double>(-*this)
			           : static_cast<double>((uint64_t) _low) +
			                 static_cast<double>((int64_t) _high) * pow_2_64;
		}
		constexpr operator long double() const noexcept {
			constexpr long double pow_2_64 = 18446744073709551616.0L;
			return _high < 0 && *this != minValue()
			           ? -static_cast<long double>(-*this)
			           : static_cast<long double>((uint64_t) _low) +
			                 static_cast<long double>((int64_t) _high) * pow_2_64;
		}

#ifdef __SIZEOF_FLOAT128__
		constexpr operator __float128() const noexcept {
			constexpr __float128 pow_2_64 = 18446744073709551616.0L;
			return static_cast<__float128>((uint64_t) _low) +
			       static_cast<__float128>((uint64_t) _high) * pow_2_64;
		}
#endif
		constexpr Int128& __builtin_ref() noexcept { return *this; }
		constexpr const Int128& __builtin_ref() const noexcept { return *this; }

		template <class OtherT>
		constexpr Int128 operator<<(OtherT amount) const RELEASE_NOEXCEPT
		    requires(std::is_integral_v<OtherT>) {
#ifdef Builtin_OVERFLOW_CHECKS
			if (amount < 0 || amount > 127)
				throw IntegerOverflowException();
#endif
			if (amount == 0)
				UNLIKELY { return *this; }

			if (amount >= 64) {
				return Int128 {static_cast<int64_t>(_low << (amount % 64)), 0u};
			}

#if USE_INTRINSICS
#ifdef MSVC
			if (!std::is_constant_evaluated())
				return Int128((int64_t) __shiftleft128(_low, (int64_t) _high, (uint8_t) amount),
				              (_low << amount));
			return Int128 {(_high << amount) | int64_t(_low >> (64 - amount)), (_low << amount)};
#else
			return __int128(*this) << amount;
#endif
#else
			return Int128 {(_high << amount) | int64_t(_low >> (64 - amount)), (_low << amount)};
#endif
		}

		constexpr Int128 operator<<(i8 bits) const RELEASE_NOEXCEPT {
			return operator<<((unsigned) bits);
		}

		constexpr Int128 operator<<(i16 bits) const RELEASE_NOEXCEPT {
			return operator<<((unsigned) bits);
		}

		constexpr Int128 operator<<(i32 bits) const RELEASE_NOEXCEPT {
			return operator<<((unsigned) bits);
		}

		constexpr Int128 operator<<(i64 bits) const RELEASE_NOEXCEPT {
			return operator<<((unsigned) bits);
		}

		constexpr Int128 operator<<(u8 bits) const RELEASE_NOEXCEPT {
			return operator<<((unsigned) bits);
		}

		constexpr Int128 operator<<(u16 bits) const RELEASE_NOEXCEPT {
			return operator<<((unsigned) bits);
		}

		constexpr Int128 operator<<(u32 bits) const RELEASE_NOEXCEPT {
			return operator<<((unsigned) bits);
		}

		constexpr Int128 operator<<(u64 bits) const RELEASE_NOEXCEPT {
			return operator<<((unsigned) bits);
		}

		template <class OtherT>
		friend constexpr OtherT operator<<(OtherT lhs, Int128 rhs) RELEASE_NOEXCEPT
		    requires(std::is_integral_v<OtherT>) {
			return lhs << (OtherT) rhs;
		}

		friend constexpr i8 operator<<(i8 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return lhs << (i8) rhs;
		}

		friend constexpr i16 operator<<(i16 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return lhs << (i16) rhs;
		}

		friend constexpr i32 operator<<(i32 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return lhs << (i32) rhs;
		}

		friend constexpr i64 operator<<(i64 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return lhs << (i64) rhs;
		}

		friend constexpr u8 operator<<(u8 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return lhs << (u8) rhs;
		}

		friend constexpr u16 operator<<(u16 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return lhs << (u16) rhs;
		}

		friend constexpr u32 operator<<(u32 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return lhs << (u32) rhs;
		}

		friend constexpr u64 operator<<(u64 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return lhs << (u64) rhs;
		}

		template <class OtherT>
		constexpr Int128 operator>>(OtherT amount) const RELEASE_NOEXCEPT
		    requires(std::is_integral_v<OtherT>) {
#ifdef Builtin_OVERFLOW_CHECKS
			if (amount < 0 || amount > 127)
				throw IntegerOverflowException();
#endif
			if (amount == 0)
				UNLIKELY { return *this; }

			if (amount >= 64) {
				return Int128 {(_high & (1ll << 63)) == 0 ? 0ll : ~0ll,
				               static_cast<uint64_t>(static_cast<int64_t>(_high) >> (amount % 64))};
			}

#if USE_INTRINSICS
#ifdef MSVC
			if (!std::is_constant_evaluated())
				return Int128(_high >> amount,
				              __shiftright128(_low, (int64_t) _high, (uint8_t) amount));
			return Int128 {(_high >> amount),
			               (_low >> amount) | (uint64_t((int64_t) _high) << (64 - amount))};
#else
			return __int128(*this) >> amount;
#endif
#else
			return Int128 {(_high >> amount),
			               (_low >> amount) | (uint64_t((int64_t) _high) << (64 - amount))};
#endif
		}

		constexpr Int128 operator>>(i8 bits) const RELEASE_NOEXCEPT {
			return operator>>((unsigned) bits);
		}

		constexpr Int128 operator>>(i16 bits) const RELEASE_NOEXCEPT {
			return operator>>((unsigned) bits);
		}

		constexpr Int128 operator>>(i32 bits) const RELEASE_NOEXCEPT {
			return operator>>((unsigned) bits);
		}

		constexpr Int128 operator>>(i64 bits) const RELEASE_NOEXCEPT {
			return operator>>((unsigned) bits);
		}

		constexpr Int128 operator>>(u8 bits) const RELEASE_NOEXCEPT {
			return operator>>((unsigned) bits);
		}

		constexpr Int128 operator>>(u16 bits) const RELEASE_NOEXCEPT {
			return operator>>((unsigned) bits);
		}

		constexpr Int128 operator>>(u32 bits) const RELEASE_NOEXCEPT {
			return operator>>((unsigned) bits);
		}

		constexpr Int128 operator>>(u64 bits) const RELEASE_NOEXCEPT {
			return operator>>((unsigned) bits);
		}

		template <class OtherT>
		friend constexpr OtherT operator>>(OtherT lhs, Int128 rhs) RELEASE_NOEXCEPT
		    requires(std::is_integral_v<OtherT>) {
			return lhs >> (OtherT) rhs;
		}

		friend constexpr i8 operator>>(i8 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return lhs >> (i8) rhs;
		}

		friend constexpr i16 operator>>(i16 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return lhs >> (i16) rhs;
		}

		friend constexpr i32 operator>>(i32 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return lhs >> (i32) rhs;
		}

		friend constexpr i64 operator>>(i64 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return lhs >> (i64) rhs;
		}

		friend constexpr u8 operator>>(u8 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return lhs >> (u8) rhs;
		}

		friend constexpr u16 operator>>(u16 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return lhs >> (u16) rhs;
		}

		friend constexpr u32 operator>>(u32 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return lhs >> (u32) rhs;
		}

		friend constexpr u64 operator>>(u64 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return lhs >> (u64) rhs;
		}

		constexpr Int128 operator+(Int128 rhs) const RELEASE_NOEXCEPT {
#if USE_INTRINSICS
#ifdef MSVC
			if (!std::is_constant_evaluated()) {
				Int128 result;
				const auto carry = _addcarry_u64(0, _low, rhs._low, &result._low);
				_addcarry_u64(carry, (int64_t) _high, (int64_t) rhs._high,
				              (uint64_t*) &result._high);
#ifdef Builtin_OVERFLOW_CHECKS
				if (rhs > 0 && result < *this || rhs < 0 && result > *this)
					throw IntegerOverflowException();
#endif
				return result;
			}
			return Int128::addResult(Int128(_high + rhs._high, _low + rhs._low), *this);
#else
#ifdef Builtin_OVERFLOW_CHECKS
			Int128 result;
			if (__builtin_add_overflow(__int128(*this), __int128(rhs), (__int128*) &result))
				throw IntegerOverflowException();
#else
			Int128 result  = __int128(*this) + __int128(rhs);
#endif
			return result;
#endif
#else
			return Int128::addResult(Int128(_high + rhs._high, _low + rhs._low), *this);
#endif
		}

		constexpr Int128 operator+(i8 rhs) const RELEASE_NOEXCEPT { return operator+(Int128(rhs)); }

		constexpr Int128 operator+(i16 rhs) const RELEASE_NOEXCEPT {
			return operator+(Int128(rhs));
		}

		constexpr Int128 operator+(i32 rhs) const RELEASE_NOEXCEPT {
			return operator+(Int128(rhs));
		}

		constexpr Int128 operator+(i64 rhs) const RELEASE_NOEXCEPT {
			return operator+(Int128(rhs));
		}

		constexpr Int128 operator+(u8 rhs) const RELEASE_NOEXCEPT { return operator+(Int128(rhs)); }

		constexpr Int128 operator+(u16 rhs) const RELEASE_NOEXCEPT {
			return operator+(Int128(rhs));
		}

		constexpr Int128 operator+(u32 rhs) const RELEASE_NOEXCEPT {
			return operator+(Int128(rhs));
		}

		constexpr Int128 operator+(u64 rhs) const RELEASE_NOEXCEPT {
			return operator+(Int128(rhs));
		}

		template <typename OtherT>
		constexpr Int128 operator+(OtherT rhs) const RELEASE_NOEXCEPT
		    requires(std::is_integral_v<OtherT>) {
			return operator+(Int128(rhs));
		}

		template <typename OtherT>
		friend constexpr Int128 operator+(OtherT lhs, Int128 rhs) RELEASE_NOEXCEPT
		    requires(std::is_integral_v<OtherT>) {
			return rhs + lhs;
		}

		friend constexpr Int128 operator+(i8 lhs, Int128 rhs) RELEASE_NOEXCEPT { return rhs + lhs; }

		friend constexpr Int128 operator+(i16 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return rhs + lhs;
		}

		friend constexpr Int128 operator+(i32 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return rhs + lhs;
		}

		friend constexpr Int128 operator+(i64 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return rhs + lhs;
		}

		friend constexpr Int128 operator+(u8 lhs, Int128 rhs) RELEASE_NOEXCEPT { return rhs + lhs; }

		friend constexpr Int128 operator+(u16 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return rhs + lhs;
		}

		friend constexpr Int128 operator+(u32 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return rhs + lhs;
		}

		friend constexpr Int128 operator+(u64 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return rhs + lhs;
		}
		constexpr Int128 operator+(UInt128 rhs) const RELEASE_NOEXCEPT {
			if (rhs > INT128_MAX) {
				return *this + Int128(rhs - UInt128(uint64_t(INT64_MAX), UINT64_MAX)) + INT128_MAX;
			}
			return *this + Int128(rhs);
		}
		constexpr Int128 operator-(UInt128 rhs) const RELEASE_NOEXCEPT {
			if (rhs > INT128_MAX) {
				return *this - Int128(rhs - UInt128(uint64_t(INT64_MAX), UINT64_MAX)) - INT128_MAX;
			}
			return *this - Int128(rhs);
		}
		constexpr Int128 operator*(UInt128 rhs) const {
			if (rhs > INT128_MAX) {
				if (*this == 0)
					return *this;
				throw IntegerOverflowException();
			}
			return *this * Int128(rhs);
		}
		constexpr Int128 Div(UInt128 rhs) const {
			if (rhs > INT128_MAX) {
				return *this;
			}
			return Div(Int128(rhs));
		}
		constexpr Int128 operator%(UInt128 rhs) const {
			if (rhs > INT128_MAX) {
				return *this;
			}
			return *this % Int128(rhs);
		}

		constexpr Int128 operator-(Int128 rhs) const RELEASE_NOEXCEPT {
#if USE_INTRINSICS
#ifdef MSVC
			if (!std::is_constant_evaluated()) {
				Int128 result;
				const auto carry = _subborrow_u64(0, _low, rhs._low, &result._low);
				_subborrow_u64(carry, (int64_t) _high, (int64_t) rhs._high,
				               (uint64_t*) &result._high);
#ifdef Builtin_OVERFLOW_CHECKS
				if (rhs > 0 && result > *this || rhs < 0 && result < *this)
					throw IntegerOverflowException();
#endif
				return result;
			}
			return Int128::substractResult(Int128(_high - rhs._high, _low - rhs._low), *this, rhs);
#else
#ifdef Builtin_OVERFLOW_CHECKS
			Int128 result;
			if (__builtin_sub_overflow(__int128(*this), __int128(rhs), (__int128*) &result))
				throw IntegerOverflowException();
#else
			Int128 result  = __int128(*this) - __int128(rhs);
#endif
			return result;
#endif
#else
			return Int128::substractResult(Int128(_high - rhs._high, _low - rhs._low), *this, rhs);
#endif
		}

		constexpr Int128 operator-(i8 rhs) const RELEASE_NOEXCEPT { return operator-(Int128(rhs)); }

		constexpr Int128 operator-(i16 rhs) const RELEASE_NOEXCEPT {
			return operator-(Int128(rhs));
		}

		constexpr Int128 operator-(i32 rhs) const RELEASE_NOEXCEPT {
			return operator-(Int128(rhs));
		}

		constexpr Int128 operator-(i64 rhs) const RELEASE_NOEXCEPT {
			return operator-(Int128(rhs));
		}

		constexpr Int128 operator-(u8 rhs) const RELEASE_NOEXCEPT { return operator-(Int128(rhs)); }

		constexpr Int128 operator-(u16 rhs) const RELEASE_NOEXCEPT {
			return operator-(Int128(rhs));
		}

		constexpr Int128 operator-(u32 rhs) const RELEASE_NOEXCEPT {
			return operator-(Int128(rhs));
		}

		constexpr Int128 operator-(u64 rhs) const RELEASE_NOEXCEPT {
			return operator-(Int128(rhs));
		}

		template <typename OtherT>
		constexpr Int128 operator-(OtherT rhs) const RELEASE_NOEXCEPT
		    requires(std::is_integral_v<OtherT>) {
			return operator-(Int128(rhs));
		}

		template <typename OtherT>
		friend constexpr OtherT operator-(OtherT lhs, Int128 rhs) RELEASE_NOEXCEPT
		    requires(std::is_integral_v<OtherT>) {
			return static_cast<OtherT>(Int128(lhs) - rhs);
		}

		friend constexpr i8 operator-(i8 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return lhs - (i8) rhs;
		}

		friend constexpr i16 operator-(i16 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return lhs - (i16) rhs;
		}

		friend constexpr i32 operator-(i32 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return lhs - (i32) rhs;
		}

		friend constexpr i64 operator-(i64 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return lhs - (i64) rhs;
		}

		friend constexpr u8 operator-(u8 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return lhs - (u8) rhs;
		}

		friend constexpr u16 operator-(u16 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return lhs - (u16) rhs;
		}

		friend constexpr u32 operator-(u32 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return lhs - (u32) rhs;
		}

		friend constexpr u64 operator-(u64 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return lhs - (u64) rhs;
		}

		inline constexpr Int128 operator*(Int128 rhs) const RELEASE_NOEXCEPT {
			constexpr UInt128 INT128MIN_TO_UINT128 = UInt128(uint64_t(INT64_MIN), 0u);
			constexpr UInt128 INT128MAX_TO_UINT128 = UInt128(uint64_t(INT64_MAX), UINT64_MAX);
#if USE_INTRINSICS
#ifdef MSVC
			if (!std::is_constant_evaluated()) {
				uint64_t carry;
				const uint64_t low  = _umul128(_low, rhs._low, &carry);
				const uint64_t high = _low * static_cast<uint64_t>((int64_t) rhs._high) +
				                      static_cast<uint64_t>((int64_t) _high) * rhs._low + carry;
				Int128 result = Int128(__Details::BitCastToSigned(high), low);
#ifdef Builtin_OVERFLOW_CHECKS
				UInt128 leftUnsigned   = *this < 0 ? UInt128(~*this) + 1 : UInt128(*this);
				UInt128 rightUnsigned  = rhs < 0 ? UInt128(~rhs) + 1 : UInt128(rhs);
				UInt128 unsignedResult = leftUnsigned * rightUnsigned;
				if ((*this < 0) ^ (rhs < 0)) {
					if (unsignedResult > INT128MIN_TO_UINT128)
						throw IntegerOverflowException();
				} else if (unsignedResult > INT128MAX_TO_UINT128)
					throw IntegerOverflowException();
#endif
				return result;
			}
			uint64_t a32 = _low >> 32;
			uint64_t a00 = _low & 0xffffffff;
			uint64_t b32 = rhs._low >> 32;
			uint64_t b00 = rhs._low & 0xffffffff;
			UInt128 unsignedResult =
			    UInt128(static_cast<uint64_t>((int64_t) _high) * rhs._low +
			                _low * static_cast<uint64_t>((int64_t) rhs._high) + a32 * b32,
			            a00 * b00);
			unsignedResult += UInt128(a32 * b00) << 32;
			unsignedResult += UInt128(a00 * b32) << 32;
			Int128 result(__Details::BitCastToSigned(unsignedResult.High64()),
			              unsignedResult.Low64());
#ifdef Builtin_OVERFLOW_CHECKS
			UInt128 leftUnsigned  = *this < 0 ? UInt128(~*this) + 1 : UInt128(*this);
			UInt128 rightUnsigned = rhs < 0 ? UInt128(~rhs) + 1 : UInt128(rhs);
			unsignedResult        = leftUnsigned * rightUnsigned;
			if ((*this < 0) ^ (rhs < 0)) {
				if (unsignedResult > INT128MIN_TO_UINT128)
					throw IntegerOverflowException();
			} else if (unsignedResult > INT128MAX_TO_UINT128)
				throw IntegerOverflowException();
#endif
			return result;
#else
#ifdef Builtin_OVERFLOW_CHECKS
			Int128 result;
			if (__builtin_mul_overflow(__int128(*this), __int128(rhs), (__int128*) &result))
				throw IntegerOverflowException();
#else
			Int128 result  = __int128(*this) * __int128(rhs);
#endif
			return result;
#endif
#else
			uint64_t a32 = _low >> 32;
			uint64_t a00 = _low & 0xffffffff;
			uint64_t b32 = rhs._low >> 32;
			uint64_t b00 = rhs._low & 0xffffffff;
			UInt128 unsignedResult =
			    UInt128(static_cast<uint64_t>((int64_t) _high) * rhs._low +
			                _low * static_cast<uint64_t>((int64_t) rhs._high) + a32 * b32,
			            a00 * b00);
			unsignedResult += UInt128(a32 * b00) << 32;
			unsignedResult += UInt128(a00 * b32) << 32;
			Int128 result(__Details::BitCastToSigned(unsignedResult.High64()),
			              unsignedResult.Low64());
#ifdef Builtin_OVERFLOW_CHECKS
			UInt128 leftUnsigned = *this < 0 ? UInt128(~*this) + 1 : UInt128(*this);
			UInt128 rightUnsigned = rhs < 0 ? UInt128(~rhs) + 1 : UInt128(rhs);
			unsignedResult = leftUnsigned * rightUnsigned;
			if ((*this < 0) ^ (rhs < 0)) {
				if (unsignedResult > INT128MIN_TO_UINT128)
					throw IntegerOverflowException();
			} else if (unsignedResult > INT128MAX_TO_UINT128)
				throw IntegerOverflowException();
#endif
			return result;
#endif
		}

		constexpr Int128 operator*(i8 rhs) const RELEASE_NOEXCEPT { return operator*(Int128(rhs)); }

		constexpr Int128 operator*(i16 rhs) const RELEASE_NOEXCEPT {
			return operator*(Int128(rhs));
		}

		constexpr Int128 operator*(i32 rhs) const RELEASE_NOEXCEPT {
			return operator*(Int128(rhs));
		}

		constexpr Int128 operator*(i64 rhs) const RELEASE_NOEXCEPT {
			return operator*(Int128(rhs));
		}

		constexpr Int128 operator*(u8 rhs) const RELEASE_NOEXCEPT { return operator*(Int128(rhs)); }

		constexpr Int128 operator*(u16 rhs) const RELEASE_NOEXCEPT {
			return operator*(Int128(rhs));
		}

		constexpr Int128 operator*(u32 rhs) const RELEASE_NOEXCEPT {
			return operator*(Int128(rhs));
		}

		constexpr Int128 operator*(u64 rhs) const RELEASE_NOEXCEPT {
			return operator*(Int128(rhs));
		}

		template <typename OtherT>
		constexpr Int128 operator*(OtherT rhs) const RELEASE_NOEXCEPT
		    requires(std::is_integral_v<OtherT>) {
			return operator*(Int128(rhs));
		}

		template <typename OtherT>
		friend inline constexpr Int128 operator*(OtherT lhs, Int128 rhs) RELEASE_NOEXCEPT
		    requires(std::is_integral_v<OtherT>) {
			return rhs * lhs;
		}

		friend inline constexpr Int128 operator*(i8 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return rhs * lhs;
		}

		friend inline constexpr Int128 operator*(i16 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return rhs * lhs;
		}

		friend inline constexpr Int128 operator*(i32 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return rhs * lhs;
		}

		friend inline constexpr Int128 operator*(i64 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return rhs * lhs;
		}

		friend inline constexpr Int128 operator*(u8 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return rhs * lhs;
		}

		friend inline constexpr Int128 operator*(u16 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return rhs * lhs;
		}

		friend inline constexpr Int128 operator*(u32 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return rhs * lhs;
		}

		friend inline constexpr Int128 operator*(u64 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return rhs * lhs;
		}

		constexpr Int128 operator&(Int128 rhs) const noexcept {
			return Int128(_high & rhs._high, _low & rhs._low);
		}

		constexpr Int128 operator&(UInt128 rhs) const noexcept {
			return Int128(_high & rhs.High64(), _low & rhs.Low64());
		}

		constexpr Int128 operator&(i8 rhs) const noexcept {
			return Int128(_high & (rhs < 0 ? -1 : 0), _low & uint64_t((int64_t) rhs));
		}

		constexpr Int128 operator&(i16 rhs) const noexcept {
			return Int128(_high & (rhs < 0 ? -1 : 0), _low & uint64_t((int64_t) rhs));
		}

		constexpr Int128 operator&(i32 rhs) const noexcept {
			return Int128(_high & (rhs < 0 ? -1 : 0), _low & uint64_t((int64_t) rhs));
		}

		constexpr Int128 operator&(i64 rhs) const noexcept {
			return Int128(_high & (rhs < 0 ? -1 : 0), _low & uint64_t((int64_t) rhs));
		}

		constexpr Int128 operator&(u8 rhs) const noexcept {
			return Int128(0, _low & uint64_t(rhs));
		}

		constexpr Int128 operator&(u16 rhs) const noexcept {
			return Int128(0, _low & uint64_t(rhs));
		}

		constexpr Int128 operator&(u32 rhs) const noexcept {
			return Int128(0, _low & uint64_t(rhs));
		}

		constexpr Int128 operator&(u64 rhs) const noexcept {
			return Int128(0, _low & uint64_t(rhs));
		}

		template <typename OtherT>
		constexpr Int128 operator&(OtherT rhs) const
		    noexcept(!std::numeric_limits<OtherT>::is_signed) requires(std::is_integral_v<OtherT>) {
			return operator&(Int128(rhs));
		}

		template <typename OtherT>
		friend constexpr OtherT operator&(OtherT lhs, Int128 rhs) RELEASE_NOEXCEPT
		    requires(std::is_integral_v<OtherT>) {
			return lhs & (OtherT) rhs;
		}

		friend constexpr i8 operator&(i8 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return lhs & (i8) rhs;
		}

		friend constexpr i16 operator&(i16 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return lhs & (i16) rhs;
		}

		friend constexpr i32 operator&(i32 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return lhs & (i32) rhs;
		}

		friend constexpr i64 operator&(i64 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return lhs & (i64) rhs;
		}

		friend constexpr u8 operator&(u8 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return lhs & (u8) rhs;
		}

		friend constexpr u16 operator&(u16 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return lhs & (u16) rhs;
		}

		friend constexpr u32 operator&(u32 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return lhs & (u32) rhs;
		}

		friend constexpr u64 operator&(u64 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return lhs & (u64) rhs;
		}

		constexpr Int128 operator|(Int128 rhs) const noexcept {
			return Int128(_high | rhs._high, _low | rhs._low);
		}
		constexpr Int128 operator|(UInt128 rhs) const noexcept {
			return Int128(_high | rhs.High64(), _low | rhs.Low64());
		}

		constexpr Int128 operator|(i8 rhs) const noexcept {
			return Int128(_high | (rhs < 0 ? -1 : 0), _low | uint64_t((int64_t) rhs));
		}

		constexpr Int128 operator|(i16 rhs) const noexcept {
			return Int128(_high | (rhs < 0 ? -1 : 0), _low | uint64_t((int64_t) rhs));
		}

		constexpr Int128 operator|(i32 rhs) const noexcept {
			return Int128(_high | (rhs < 0 ? -1 : 0), _low | uint64_t((int64_t) rhs));
		}

		constexpr Int128 operator|(i64 rhs) const noexcept {
			return Int128(_high | (rhs < 0 ? -1 : 0), _low | uint64_t((int64_t) rhs));
		}

		constexpr Int128 operator|(u8 rhs) const noexcept {
			return Int128(_high, _low | uint64_t(rhs));
		}

		constexpr Int128 operator|(u16 rhs) const noexcept {
			return Int128(_high, _low | uint64_t(rhs));
		}

		constexpr Int128 operator|(u32 rhs) const noexcept {
			return Int128(_high, _low | uint64_t(rhs));
		}

		constexpr Int128 operator|(u64 rhs) const noexcept {
			return Int128(_high, _low | uint64_t(rhs));
		}

		template <typename OtherT>
		constexpr Int128 operator|(OtherT rhs) const
		    noexcept(!std::numeric_limits<OtherT>::is_signed) requires(std::is_integral_v<OtherT>) {
			return operator|(Int128(rhs));
		}

		template <typename OtherT>
		friend constexpr OtherT operator|(OtherT lhs, Int128 rhs) RELEASE_NOEXCEPT
		    requires(std::is_integral_v<OtherT>) {
			return lhs | (OtherT) rhs;
		}

		friend constexpr i8 operator|(i8 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return lhs | (i8) rhs;
		}

		friend constexpr i16 operator|(i16 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return lhs | (i16) rhs;
		}

		friend constexpr i32 operator|(i32 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return lhs | (i32) rhs;
		}

		friend constexpr i64 operator|(i64 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return lhs | (i64) rhs;
		}

		friend constexpr u8 operator|(u8 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return lhs | (u8) rhs;
		}

		friend constexpr u16 operator|(u16 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return lhs | (u16) rhs;
		}

		friend constexpr u32 operator|(u32 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return lhs | (u32) rhs;
		}

		friend constexpr u64 operator|(u64 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return lhs | (u64) rhs;
		}

		constexpr Int128 operator^(Int128 rhs) const noexcept {
			return Int128(_high ^ rhs._high, _low ^ rhs._low);
		}
		constexpr Int128 operator^(UInt128 rhs) const noexcept {
			return Int128(_high ^ rhs.High64(), _low ^ rhs.Low64());
		}

		constexpr Int128 operator^(i8 rhs) const noexcept {
			return Int128(_high ^ (rhs < 0 ? -1ll : 0ll), _low ^ uint64_t((int64_t) rhs));
		}

		constexpr Int128 operator^(i16 rhs) const noexcept {
			return Int128(_high ^ (rhs < 0 ? -1ll : 0ll), _low ^ uint64_t((int64_t) rhs));
		}

		constexpr Int128 operator^(i32 rhs) const noexcept {
			return Int128(_high ^ (rhs < 0 ? -1ll : 0ll), _low ^ uint64_t((int64_t) rhs));
		}

		constexpr Int128 operator^(i64 rhs) const noexcept {
			return Int128(_high ^ (rhs < 0 ? -1ll : 0ll), _low ^ uint64_t((int64_t) rhs));
		}

		constexpr Int128 operator^(u8 rhs) const noexcept {
			return Int128(_high, _low ^ uint64_t(rhs));
		}

		constexpr Int128 operator^(u16 rhs) const noexcept {
			return Int128(_high, _low ^ uint64_t(rhs));
		}

		constexpr Int128 operator^(u32 rhs) const noexcept {
			return Int128(_high, _low ^ uint64_t(rhs));
		}

		constexpr Int128 operator^(u64 rhs) const noexcept {
			return Int128(_high, _low ^ uint64_t(rhs));
		}

		template <typename OtherT>
		constexpr Int128 operator^(OtherT rhs) const
		    noexcept(!std::numeric_limits<OtherT>::is_signed) requires(std::is_integral_v<OtherT>) {
			return operator^(Int128(rhs));
		}

		template <typename OtherT>
		friend constexpr OtherT operator^(OtherT lhs, Int128 rhs) RELEASE_NOEXCEPT
		    requires(std::is_integral_v<OtherT>) {
			return lhs ^ (OtherT) rhs;
		}

		friend constexpr i8 operator^(i8 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return lhs ^ (i8) rhs;
		}

		friend constexpr i16 operator^(i16 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return lhs ^ (i16) rhs;
		}

		friend constexpr i32 operator^(i32 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return lhs ^ (i32) rhs;
		}

		friend constexpr i64 operator^(i64 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return lhs ^ (i64) rhs;
		}

		friend constexpr u8 operator^(u8 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return lhs ^ (u8) rhs;
		}

		friend constexpr u16 operator^(u16 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return lhs ^ (u16) rhs;
		}

		friend constexpr u32 operator^(u32 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return lhs ^ (u32) rhs;
		}

		friend constexpr u64 operator^(u64 lhs, Int128 rhs) RELEASE_NOEXCEPT {
			return lhs ^ (u64) rhs;
		}

		constexpr Int128& operator<<=(int amount) RELEASE_NOEXCEPT {
			*this = *this << amount;
			return *this;
		}

		constexpr Int128& operator>>=(int amount) RELEASE_NOEXCEPT {
			*this = *this >> amount;
			return *this;
		}

		template <class U>
		constexpr Int128& operator+=(U other) RELEASE_NOEXCEPT {
			*this = *this + other;
			return *this;
		}

		template <class U>
		constexpr Int128& operator-=(U other) RELEASE_NOEXCEPT {
			*this = *this - other;
			return *this;
		}

		template <class U>
		constexpr Int128& operator*=(U other) RELEASE_NOEXCEPT {
			*this = *this * other;
			return *this;
		}

		template <class U>
		constexpr Int128& operator/=(U rhs) {
			*this = (Int128) std::round((double) *this / (double) rhs);
			return *this;
		}

		constexpr Int128 Div(Int128 rhs) const {
#ifdef Builtin_OVERFLOW_CHECKS
			if (rhs == -1 && *this == INT128_MIN)
				throw IntegerOverflowException();
#endif

#if USE_INTRINSICS && !defined(MSVC)
			if (rhs == 0)
				throw DivisionByZeroException();

			return __int128(*this) / rhs;
#else
			bool isNegative = false;
			auto lhs = *this;
			stripNegative(lhs, isNegative);
			stripNegative(rhs, isNegative);

			Int128 result(UInt128(lhs).Div(UInt128(rhs)));

			if (isNegative) {
				result = -result;
			}

			return result;
#endif
		}

		template <typename OtherT>
		constexpr Int128 Div(OtherT rhs) const requires(std::is_integral_v<OtherT>) {
#ifdef Builtin_OVERFLOW_CHECKS
			if constexpr (std::is_signed_v<OtherT>) {
				if (rhs == -1 && *this == INT128_MIN)
					throw IntegerOverflowException();
			}
#endif

#if USE_INTRINSICS && !defined(MSVC)
			if (rhs == 0)
				throw DivisionByZeroException();

			return __int128(*this) / rhs;
#else
			bool isNegative = false;
			auto lhs = *this;
			stripNegative(lhs, isNegative);
			if constexpr (std::is_signed_v<OtherT>) {
				if (rhs < 0) {
					rhs = -rhs;
					isNegative = !isNegative;
				}
			}

			Int128 result;
#if !USE_INTRINSICS
			if constexpr (sizeof(OtherT) <= 4) {
				result = Int128(UInt128(lhs).Div(u32(rhs)));
			} else
#endif
			{
				result = Int128(UInt128(lhs).Div(u64(rhs)));
			}

			if (isNegative) {
				result = -result;
			}

			return result;
#endif
		}

		template <typename OtherT>
		friend constexpr OtherT Div(OtherT lhs,
		                            const Int128& rhs) requires(std::is_integral_v<OtherT>) {
			return lhs / (OtherT) rhs;
		}

		constexpr Int128 Div(i8 rhs) const { return Div(int8_t(rhs)); }

		constexpr Int128 Div(i16 rhs) const { return Div(int16_t(rhs)); }

		constexpr Int128 Div(i32 rhs) const { return Div(int32_t(rhs)); }

		constexpr Int128 Div(i64 rhs) const { return Div(int64_t(rhs)); }

		constexpr Int128 Div(u8 rhs) const { return Div(uint8_t(rhs)); }

		constexpr Int128 Div(u16 rhs) const { return Div(uint16_t(rhs)); }

		constexpr Int128 Div(u32 rhs) const { return Div(uint32_t(rhs)); }

		constexpr Int128 Div(u64 rhs) const { return Div(uint64_t(rhs)); }

		friend inline constexpr i8 Div(i8 lhs, Int128 rhs) { return lhs.Div((i8) rhs); }

		friend inline constexpr i16 Div(i16 lhs, Int128 rhs) { return lhs.Div((i16) rhs); }

		friend inline constexpr i32 Div(i32 lhs, Int128 rhs) { return lhs.Div((i32) rhs); }

		friend inline constexpr i64 Div(i64 lhs, Int128 rhs) { return lhs.Div((i64) rhs); }

		friend inline constexpr u8 Div(u8 lhs, Int128 rhs) { return lhs.Div((u8) rhs); }

		friend inline constexpr u16 Div(u16 lhs, Int128 rhs) { return lhs.Div((u16) rhs); }

		friend inline constexpr u32 Div(u32 lhs, Int128 rhs) { return lhs.Div((u32) rhs); }

		friend inline constexpr u64 Div(u64 lhs, Int128 rhs) { return lhs.Div((u64) rhs); }

		template <class T>
		constexpr Int128& DivAssign(T other) {
			*this = this->Div(other);
			return *this;
		}

		constexpr Int128 operator%(Int128 rhs) const {
#ifdef Builtin_OVERFLOW_CHECKS
			if (rhs == -1 && *this == INT128_MIN)
				throw IntegerOverflowException();
#endif

#if USE_INTRINSICS && !defined(MSVC)
			if (rhs == 0)
				throw DivisionByZeroException();

			return __int128(*this) % __int128(rhs);
#else
			bool isNegative = false;
			auto lhs = *this;
			stripNegative(lhs, isNegative);
			if ((rhs._high & (1ull << 63)) != 0) {
				rhs = -rhs;
			}

			UInt128 result = UInt128(lhs) % UInt128(rhs);

			if (isNegative) {
				return (result.Low64() == 0)
				           ? Int128(static_cast<std::int64_t>(
				                        0ULL - static_cast<std::uint64_t>(result.High64())),
				                    0ULL)
				           : Int128 {static_cast<int64_t>(uint64_t(~result.High64())),
				                     (~result.Low64()) + 1};
			}

			return Int128(result);
#endif
		}

		constexpr Int128 operator%(i8 rhs) const { return operator%(Int128(rhs)); }

		constexpr Int128 operator%(i16 rhs) const { return operator%(Int128(rhs)); }

		constexpr Int128 operator%(i32 rhs) const { return operator%(Int128(rhs)); }

		constexpr Int128 operator%(i64 rhs) const { return operator%(Int128(rhs)); }

		constexpr Int128 operator%(u8 rhs) const { return operator%(Int128(rhs)); }

		constexpr Int128 operator%(u16 rhs) const { return operator%(Int128(rhs)); }

		constexpr Int128 operator%(u32 rhs) const { return operator%(Int128(rhs)); }

		constexpr Int128 operator%(u64 rhs) const { return operator%(Int128(rhs)); }

		template <typename OtherT>
		constexpr Int128 operator%(OtherT rhs) const requires(std::is_integral_v<OtherT>) {
			return operator%(Int128(rhs));
		}

		template <typename OtherT>
		friend constexpr OtherT operator%(OtherT lhs,
		                                  Int128 rhs) requires(std::is_integral_v<OtherT>) {
			return lhs % (OtherT) rhs;
		}

		friend inline constexpr i8 operator%(i8 lhs, Int128 rhs) { return lhs % (i8) rhs; }

		friend inline constexpr i16 operator%(i16 lhs, Int128 rhs) { return lhs % (i16) rhs; }

		friend inline constexpr i32 operator%(i32 lhs, Int128 rhs) { return lhs % (i32) rhs; }

		friend inline constexpr i64 operator%(i64 lhs, Int128 rhs) { return lhs % (i64) rhs; }

		friend inline constexpr u8 operator%(u8 lhs, Int128 rhs) { return lhs % (u8) rhs; }

		friend inline constexpr u16 operator%(u16 lhs, Int128 rhs) { return lhs % (u16) rhs; }

		friend inline constexpr u32 operator%(u32 lhs, Int128 rhs) { return lhs % (u32) rhs; }

		friend inline constexpr u64 operator%(u64 lhs, Int128 rhs) { return lhs % (u64) rhs; }

		template <class T>
		constexpr Int128& operator%=(T other) {
			*this = *this % other;
			return *this;
		}

		template <class U>
		constexpr Int128& operator&=(U other) RELEASE_NOEXCEPT {
			*this = *this & other;
			return *this;
		}

		template <class U>
		constexpr Int128& operator|=(U other) RELEASE_NOEXCEPT {
			*this = *this | other;
			return *this;
		}

		template <class U>
		constexpr Int128& operator^=(U other) RELEASE_NOEXCEPT {
			*this = *this ^ other;
			return *this;
		}

		constexpr Int128& operator++() RELEASE_NOEXCEPT {
			if (++_low == 0) {
				++_high;
			}
			return *this;
		}

		constexpr Int128& operator--() RELEASE_NOEXCEPT {
			if (_low-- == 0) {
				--_high;
			}
			return *this;
		}

		constexpr Int128 operator++(int) RELEASE_NOEXCEPT {
			Int128 tmp(*this);
			++*this;
			return tmp;
		}

		constexpr Int128 operator--(int) RELEASE_NOEXCEPT {
			Int128 tmp(*this);
			--*this;
			return tmp;
		}

		constexpr Int128 operator+() const noexcept { return *this; }

		constexpr Int128 operator-() const RELEASE_NOEXCEPT {
#ifdef Builtin_OVERFLOW_CHECKS
			if (*this == INT128_MIN) {
				throw IntegerOverflowException();
			}
#endif
			return (_low == 0)
			           ? Int128(static_cast<std::int64_t>(0ULL - static_cast<std::uint64_t>(_high)),
			                    0ULL)
			           : Int128 {int64_t(~_high), (~_low) + 1};
		}

		constexpr Int128 operator~() const noexcept { return Int128(~_high, ~_low); }
		constexpr Int128 _operator_not() const noexcept { return ~*this; }

		constexpr bool operator==(Int128 rhs) const noexcept {
			return _low == rhs._low && _high == rhs._high;
		}

		constexpr bool operator!=(Int128 rhs) const noexcept { return !(*this == rhs); }

		constexpr bool operator==(i8 rhs) const noexcept { return *this == Int128(rhs); }

		constexpr bool operator==(i16 rhs) const noexcept { return *this == Int128(rhs); }

		constexpr bool operator==(i32 rhs) const noexcept { return *this == Int128(rhs); }

		constexpr bool operator==(i64 rhs) const noexcept { return *this == Int128(rhs); }

		constexpr bool operator==(u8 rhs) const noexcept { return *this == Int128(rhs); }

		constexpr bool operator==(u16 rhs) const noexcept { return *this == Int128(rhs); }

		constexpr bool operator==(u32 rhs) const noexcept { return *this == Int128(rhs); }

		constexpr bool operator==(u64 rhs) const noexcept { return *this == Int128(rhs); }

		template <typename OtherT>
		constexpr bool operator==(OtherT rhs) const noexcept requires(std::is_integral_v<OtherT>) {
			return *this == Int128(rhs);
		}

		template <typename OtherT>
		friend constexpr bool operator==(OtherT lhs, Int128 rhs) noexcept
		    requires(std::is_integral_v<OtherT>) {
			return Int128(lhs) == rhs;
		}

		friend constexpr bool operator==(i8 lhs, Int128 rhs) noexcept { return Int128(lhs) == rhs; }

		friend constexpr bool operator==(i16 lhs, Int128 rhs) noexcept {
			return Int128(lhs) == rhs;
		}

		friend constexpr bool operator==(i32 lhs, Int128 rhs) noexcept {
			return Int128(lhs) == rhs;
		}

		friend constexpr bool operator==(i64 lhs, Int128 rhs) noexcept {
			return Int128(lhs) == rhs;
		}

		friend constexpr bool operator==(u8 lhs, Int128 rhs) noexcept { return Int128(lhs) == rhs; }

		friend constexpr bool operator==(u16 lhs, Int128 rhs) noexcept {
			return Int128(lhs) == rhs;
		}

		friend constexpr bool operator==(u32 lhs, Int128 rhs) noexcept {
			return Int128(lhs) == rhs;
		}

		friend constexpr bool operator==(u64 lhs, Int128 rhs) noexcept {
			return Int128(lhs) == rhs;
		}

		constexpr bool operator!=(i8 rhs) const noexcept { return *this != Int128(rhs); }

		constexpr bool operator!=(i16 rhs) const noexcept { return *this != Int128(rhs); }

		constexpr bool operator!=(i32 rhs) const noexcept { return *this != Int128(rhs); }

		constexpr bool operator!=(i64 rhs) const noexcept { return *this != Int128(rhs); }

		constexpr bool operator!=(u8 rhs) const noexcept { return *this != Int128(rhs); }

		constexpr bool operator!=(u16 rhs) const noexcept { return *this != Int128(rhs); }

		constexpr bool operator!=(u32 rhs) const noexcept { return *this != Int128(rhs); }

		constexpr bool operator!=(u64 rhs) const noexcept { return *this != Int128(rhs); }

		template <typename OtherT>
		constexpr bool operator!=(OtherT rhs) const noexcept requires(std::is_integral_v<OtherT>) {
			return *this != Int128(rhs);
		}

		template <typename OtherT>
		friend constexpr bool operator!=(OtherT lhs, Int128 rhs) noexcept
		    requires(std::is_integral_v<OtherT>) {
			return Int128(lhs) != rhs;
		}

		friend constexpr bool operator!=(i8 lhs, Int128 rhs) noexcept { return Int128(lhs) != rhs; }

		friend constexpr bool operator!=(i16 lhs, Int128 rhs) noexcept {
			return Int128(lhs) != rhs;
		}

		friend constexpr bool operator!=(i32 lhs, Int128 rhs) noexcept {
			return Int128(lhs) != rhs;
		}

		friend constexpr bool operator!=(i64 lhs, Int128 rhs) noexcept {
			return Int128(lhs) != rhs;
		}

		friend constexpr bool operator!=(u8 lhs, Int128 rhs) noexcept { return Int128(lhs) != rhs; }

		friend constexpr bool operator!=(u16 lhs, Int128 rhs) noexcept {
			return Int128(lhs) != rhs;
		}

		friend constexpr bool operator!=(u32 lhs, Int128 rhs) noexcept {
			return Int128(lhs) != rhs;
		}

		friend constexpr bool operator!=(u64 lhs, Int128 rhs) noexcept {
			return Int128(lhs) != rhs;
		}

		constexpr bool operator==(UInt128 rhs) const noexcept {
			return _low == rhs.Low64() && _high == rhs.High64();
		}

		constexpr bool operator!=(UInt128 rhs) const noexcept { return !(*this == rhs); }

		constexpr int operator<=>(Int128 rhs) const noexcept {
			if (const int64_t lhsHigh = _high, rhsHigh = rhs._high; lhsHigh < rhsHigh) {
				return -1;
			} else if (lhsHigh > rhsHigh) {
				return 1;
			}

			if (const uint64_t lhsLow = _low, rhsLow = rhs._low; lhsLow < rhsLow) {
				return -1;
			} else if (lhsLow > rhsLow) {
				return 1;
			}
			return 0;
		}

		constexpr int operator<=>(UInt128 rhs) const noexcept {
			if (_high < 0)
				return -1;

			return UInt128(*this) <=> rhs;
		}

		constexpr int operator<=>(i8 rhs) const noexcept { return *this <=> Int128(rhs); }

		constexpr int operator<=>(i16 rhs) const noexcept { return *this <=> Int128(rhs); }

		constexpr int operator<=>(i32 rhs) const noexcept { return *this <=> Int128(rhs); }

		constexpr int operator<=>(i64 rhs) const noexcept { return *this <=> Int128(rhs); }

		constexpr int operator<=>(u8 rhs) const noexcept { return *this <=> Int128(rhs); }

		constexpr int operator<=>(u16 rhs) const noexcept { return *this <=> Int128(rhs); }

		constexpr int operator<=>(u32 rhs) const noexcept { return *this <=> Int128(rhs); }

		constexpr int operator<=>(u64 rhs) const noexcept { return *this <=> Int128(rhs); }

		template <typename OtherT>
		constexpr int operator<=>(OtherT rhs) const noexcept requires(std::is_integral_v<OtherT>) {
			return *this <=> Int128(rhs);
		}

		template <typename OtherT>
		friend constexpr int operator<=>(OtherT lhs, Int128 rhs) noexcept
		    requires(std::is_integral_v<OtherT>) {
			return Int128(lhs) <=> rhs;
		}

		friend constexpr int operator<=>(i8 lhs, Int128 rhs) noexcept {
			return Int128(lhs) <=> rhs;
		}

		friend constexpr int operator<=>(i16 lhs, Int128 rhs) noexcept {
			return Int128(lhs) <=> rhs;
		}

		friend constexpr int operator<=>(i32 lhs, Int128 rhs) noexcept {
			return Int128(lhs) <=> rhs;
		}

		friend constexpr int operator<=>(i64 lhs, Int128 rhs) noexcept {
			return Int128(lhs) <=> rhs;
		}

		friend constexpr int operator<=>(u8 lhs, Int128 rhs) noexcept {
			return Int128(lhs) <=> rhs;
		}

		friend constexpr int operator<=>(u16 lhs, Int128 rhs) noexcept {
			return Int128(lhs) <=> rhs;
		}

		friend constexpr int operator<=>(u32 lhs, Int128 rhs) noexcept {
			return Int128(lhs) <=> rhs;
		}

		friend constexpr int operator<=>(u64 lhs, Int128 rhs) noexcept {
			return Int128(lhs) <=> rhs;
		}

		template <class U>
		inline constexpr U __builtin_UnsafeNarrow() const noexcept {
			if constexpr (std::is_same_v<U, Int128>) {
				return *this;
			} else if constexpr (std::is_same_v<U, UInt128>) {
				if (*this < 0)
					return UInt128(UnsafeCast<u64>(_high), _low);
				return UInt128(*this);
			} else {
				return UnsafeCast<U>((u64) _low);
			}
		}

	   private:
		static constexpr Int128 addResult(Int128 result, Int128 lhs) RELEASE_NOEXCEPT {
			return (result._low < lhs._low) ? Int128(result._high + 1, result._low) : result;
		}

		static constexpr Int128 substractResult(Int128 result, Int128 lhs,
		                                        Int128 rhs) RELEASE_NOEXCEPT {
			return (lhs._low < rhs._low) ? Int128(result._high - 1, result._low) : result;
		}
		static constexpr void stripNegative(Int128& num, bool& flip) noexcept {
			if ((num._high & (1ull << 63)) != 0) {
				num  = (num._low == 0) ? Int128(static_cast<std::int64_t>(
                                                   0ULL - static_cast<std::uint64_t>(num._high)),
                                               0ULL)
				                       : Int128 {int64_t(~num._high), (~num._low) + 1};
				flip = !flip;
			}
		}

		static constexpr Int128 minValue() noexcept { return Int128(INT64_MIN, 0u); }

		static constexpr Int128 maxValue() noexcept { return Int128(INT64_MAX, UINT64_MAX); }

#if defined(_WIN32) || defined(__BYTE_ORDER__) && (__BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__)
		uint64_t _low;
		i64 _high;
#else
		i64 _high;
		uint64_t _low;
#endif
	};

	template <class U>
	inline constexpr U UInt128::__builtin_UnsafeNarrow() const noexcept {
		if constexpr (std::is_same_v<U, Int128>) {
			return Int128(UnsafeCast<i64>(_high), _low);
		} else if constexpr (std::is_same_v<U, UInt128>) {
			return *this;
		} else {
			return UnsafeCast<U>((u64) _low);
		}
	}

	inline constexpr UInt128::UInt128(Int128 value) RELEASE_NOEXCEPT
	    : _low(Int128Low64(value)),
	      _high(static_cast<uint64_t>((int64_t)Int128High64(value))) {
#ifdef Builtin_OVERFLOW_CHECKS
		if (value < 0)
			throw IntegerOverflowException();
#endif
		// ASSERT(value >= 0, "IntegerOverflow((int64_t)value, 0, INT64_MAX))");
	}

	inline constexpr bool UInt128::operator==(Int128 rhs) const noexcept {
		return _low == rhs.Low64() && _high == rhs.High64();
	}

	inline constexpr bool UInt128::operator!=(Int128 rhs) const noexcept { return !(*this == rhs); }

	inline constexpr int UInt128::operator<=>(Int128 rhs) const noexcept {
		if (rhs < 0)
			return 1;

		return *this <=> UInt128(rhs);
	}

	inline constexpr UInt128 UInt128::operator&(Int128 rhs) const noexcept {
		return UInt128(_high & rhs.High64(), _low & rhs.Low64());
	}

	inline constexpr UInt128 UInt128::operator|(Int128 rhs) const noexcept {
		return UInt128(_high | rhs.High64(), _low | rhs.Low64());
	}

	inline constexpr UInt128 UInt128::operator^(Int128 rhs) const noexcept {
		return UInt128(_high ^ rhs.High64(), _low ^ rhs.Low64());
	}

	inline constexpr UInt128 UInt128::operator+(Int128 rhs) const RELEASE_NOEXCEPT {
		if (rhs < 0) {
			if (rhs == INT128_MIN)
				UNLIKELY
			return *this - UInt128(0x8000000000000000u, 0u);
			return *this - UInt128(-rhs);
		}
		return *this + UInt128(rhs);
	}

	inline constexpr UInt128 UInt128::operator-(Int128 rhs) const RELEASE_NOEXCEPT {
		if (rhs < 0) {
			if (rhs == INT128_MIN)
				UNLIKELY
			return *this + UInt128(0x8000000000000000u, 0u);
			return *this + UInt128(-rhs);
		}
		return *this - UInt128(rhs);
	}
	inline constexpr UInt128 UInt128::operator*(Int128 rhs) const {
		if (rhs < 0) {
			if (*this == 0)
				return *this;
			throw IntegerOverflowException();
		}
		return *this * UInt128(rhs);
	}
	inline constexpr UInt128 UInt128::Div(Int128 rhs) const {
		if (rhs < 0) {
			if (*this == 0)
				return *this;
			throw IntegerOverflowException();
		}
		return Div(UInt128(rhs));
	}
	inline constexpr UInt128 UInt128::operator%(Int128 rhs) const {
		if (rhs < 0) {
			if (*this == 0)
				return *this;
			throw IntegerOverflowException();
		}
		return *this % UInt128(rhs);
	}

	inline constexpr Int128 ParseInt128(std::string_view input) RELEASE_NOEXCEPT {
		Int128 tmp;
		auto inputEnd = input.data() + input.size();
		auto ret      = FromChars(input.data(), inputEnd, tmp);
#ifdef Builtin_OVERFLOW_CHECKS
		if (ret.ec == std::errc::result_out_of_range)
			throw IntegerOverflowException();
#endif
		return tmp;
	}

	ASTRUMSTD_API std::string DebugPrintInt128(Int128 v);

	inline constexpr uint64_t Int128Low64(Int128 v) noexcept { return v.Low64(); }
	inline constexpr i64 Int128High64(Int128 v) noexcept { return v.High64(); }

	namespace __details {
		inline constexpr void checkRhsForZero(const UInt128& divisor) {
#ifdef Builtin_OVERFLOW_CHECKS
			if (divisor == 0)
				throw DivisionByZeroException();
#endif
		}

		inline constexpr void checkIntCornerCase(const Int128& lhs, const Int128& rhs) {
#ifdef Builtin_OVERFLOW_CHECKS
			if (lhs == INT128_MIN && rhs == -1)
				throw IntegerOverflowException();
#endif
		}
	}  // namespace __details

	using i128 = Int128;
	using u128 = UInt128;

	template <std::integral U>
	inline constexpr i128 Div(i128 lhs, U rhs) {
		return lhs.Div(rhs);
	}

	template <std::integral U>
	inline constexpr u128 Div(u128 lhs, U rhs) {
		return lhs.Div(rhs);
	}

	namespace __details {
		template <>
		class NumericType<i128> {
		   public:
			enum { isBool = false, isInt = true, isEnum = false };
		};

		template <>
		class NumericType<u128> {
		   public:
			enum { isBool = false, isInt = true, isEnum = false };
		};
	}  // namespace __details

	template <class T>
	class AbsValueHelper<T, AbsMethodI128> {
	   public:
		NODISCARD constexpr static u128 Abs(T t) noexcept {
			ASSERT(t < 0);
			return UInt128(~t) + 1;
		}
	};

	template <>
	class SignedNegation<i128> {
	   public:
		constexpr static i128 Value(u128 in) noexcept { return UnsafeCast<i128>(~in + 1); }
	};

	template <>
	class NegationHelper<i128, true> {
	   public:
		NODISCARD constexpr static i128 NegativeThrow(i128 t) {
			if (t != INT128_MIN) {
				return -t;
			}
			throw IntegerOverflowException();
		}

		NODISCARD constexpr static bool Negative(i128 t, i128& out) {
			if (t == INT128_MIN) {
				out = INT128_MIN;
				return false;
			}
			out = (t.Low64() == 0)
			          ? Int128(static_cast<std::int64_t>(
			                       0ULL - static_cast<std::uint64_t>((int64_t) t.High64())),
			                   0ULL)
			          : Int128 {int64_t(~t.High64()), (~t.Low64()) + 1};
			return true;
		}
	};

	template <>
	class NegationHelper<u128, false> {
	   public:
		NODISCARD constexpr static u128 NegativeThrow(u128 t) {
			return ~t+1u;
		}

		NODISCARD constexpr static bool Negative(u128 t, u128& out) {
			out = ~t + 1u;
			return false;
		}
	};

	template <class T, class U>
	class ModulusHelper<T, U, ComparisonMethod_CastInt128> {
	   public:
		constexpr static SafeIntErrorCode Modulus(const T& t, const U& u, T& result) noexcept {
			if (u == 0)
				return SafeInt_DivisionByZero;

			if (ModCornerCase<U, std::numeric_limits<U>::is_signed>::isUndefined(u)) {
				result = 0;
				return SafeInt_NoError;
			}

			result = (T) ((Int128) t % (Int128) u);
			return SafeInt_NoError;
		}

		constexpr static void ModulusThrow(const T& t, const U& u, T& result) {
			if (u == 0)
				throw DivisionByZeroException();

			if (ModCornerCase<U, std::numeric_limits<U>::is_signed>::isUndefined(u)) {
				result = 0;
				return;
			}

			result = (T) ((Int128) t % (Int128) u);
		}
	};

	template <>
	class LargeIntRegMultiply<u128, u128> {
	   public:
		NODISCARD CONSTEXPR_MULTIPLY static bool RegMultiply(const u128& a, const u128& b,
		                                                     u128* ret) noexcept {
#if USE_INTRINSICS
#ifdef MSVC
			if (!std::is_constant_evaluated()) {
				u64 carry;
				const uint64_t low = _umul128(a.Low64(), b.Low64(), (uint64_t*)&carry);
				u64 high;
				u64 high2;
				bool overflowed = !SafeMultiply(a.Low64(), b.High64(), high);
				overflowed |= !SafeMultiply(a.High64(), b.Low64(), high2);
				overflowed |= !SafeAdd(high, high2, high);
				overflowed |= !SafeAdd(high, carry, high);
				*ret = UInt128(high, low);
				return !overflowed && !(a.High64() > 0 && b.High64() > 0);
			}
			uint64_t a32 = a.Low64() >> 32;
			uint64_t a00 = a.Low64() & 0xffffffff;
			uint64_t b32 = b.Low64() >> 32;
			uint64_t b00 = b.Low64() & 0xffffffff;
			u64 high;
			u64 high2;
			bool overflowed = !SafeMultiply(a.Low64(), b.High64(), high);
			overflowed |= !SafeMultiply(a.High64(), b.Low64(), high2);
			overflowed |= !SafeAdd(high, high2, high);
			overflowed |= !SafeAdd(high, u64(a32 * b32), high);
			UInt128 result = UInt128(high, a00 * b00);
			overflowed |= !SafeAdd(result, UInt128(a32 * b00) << 32, result);
			overflowed |= !SafeAdd(result, UInt128(a00 * b32) << 32, result);
			*ret = result;
			return !overflowed && !(a.High64() > 0 && b.High64() > 0);
#else
			return !__builtin_mul_overflow(unsigned __int128(a), unsigned __int128(b),
			                               (unsigned __int128*) ret);
#endif
#else
			uint64_t a32 = a.Low64() >> 32;
			uint64_t a00 = a.Low64() & 0xffffffff;
			uint64_t b32 = b.Low64() >> 32;
			uint64_t b00 = b.Low64() & 0xffffffff;
			u64 high;
			u64 high2;
			bool overflowed = !SafeMultiply(a.Low64(), b.High64(), high);
			overflowed |= !SafeMultiply(a.High64(), b.Low64(), high2);
			overflowed |= !SafeAdd(high, high2, high);
			overflowed |= !SafeAdd(high, u64(a32 * b32), high);
			UInt128 result = UInt128(high, a00 * b00);
			overflowed |= !SafeAdd(result, UInt128(a32 * b00) << 32, result);
			overflowed |= !SafeAdd(result, UInt128(a00 * b32) << 32, result);
			*ret = result;
			return !overflowed && !(a.High64() > 0 && b.High64() > 0);
#endif
		}

		NODISCARD CONSTEXPR_MULTIPLY static SaturatingStatus RegMultiplySat(const u128& a,
		                                                                    const u128& b,
		                                                                    u128* ret) noexcept {
#if USE_INTRINSICS
#ifdef MSVC
			if (!std::is_constant_evaluated()) {
				u64 carry;
				const uint64_t low = _umul128(a.Low64(), b.Low64(), (uint64_t*)&carry);
				u64 high;
				u64 high2;
				bool overflowed = !SafeMultiply(a.Low64(), b.High64(), high);
				overflowed |= !SafeMultiply(a.High64(), b.Low64(), high2);
				overflowed |= !SafeAdd(high, high2, high);
				overflowed |= !SafeAdd(high, carry, high);
				overflowed |= a.High64() > 0 && b.High64() > 0;
				*ret = UInt128(high, low);
				return overflowed ? Saturating_Overflow : Saturating_NoOverflow;
			}
			uint64_t a32 = a.Low64() >> 32;
			uint64_t a00 = a.Low64() & 0xffffffff;
			uint64_t b32 = b.Low64() >> 32;
			uint64_t b00 = b.Low64() & 0xffffffff;
			u64 high;
			u64 high2;
			bool overflowed = !SafeMultiply(a.Low64(), b.High64(), high);
			overflowed |= !SafeMultiply(a.High64(), b.Low64(), high2);
			overflowed |= !SafeAdd(high, high2, high);
			overflowed |= !SafeAdd(high, u64(a32 * b32), high);
			UInt128 result = UInt128(high, a00 * b00);
			overflowed |= !SafeAdd(result, UInt128(a32 * b00) << 32, result);
			overflowed |= !SafeAdd(result, UInt128(a00 * b32) << 32, result);
			overflowed |= a.High64() > 0 && b.High64() > 0;
			*ret = result;
			return overflowed ? Saturating_Overflow : Saturating_NoOverflow;
#else
			return __builtin_mul_overflow(unsigned __int128(a), unsigned __int128(b),
			                              (unsigned __int128*) ret)
			           ? Saturating_Overflow
			           : Saturating_NoOverflow;
#endif
#else
			uint64_t a32 = a.Low64() >> 32;
			uint64_t a00 = a.Low64() & 0xffffffff;
			uint64_t b32 = b.Low64() >> 32;
			uint64_t b00 = b.Low64() & 0xffffffff;
			u64 high;
			u64 high2;
			bool overflowed = !SafeMultiply(a.Low64(), b.High64(), high);
			overflowed |= !SafeMultiply(a.High64(), b.Low64(), high2);
			overflowed |= !SafeAdd(high, high2, high);
			overflowed |= !SafeAdd(high, u64(a32 * b32), high);
			UInt128 result = UInt128(high, a00 * b00);
			overflowed |= !SafeAdd(result, UInt128(a32 * b00) << 32, result);
			overflowed |= !SafeAdd(result, UInt128(a00 * b32) << 32, result);
			overflowed |= a.High64() > 0 && b.High64() > 0;
			*ret = result;
			return overflowed ? Saturating_Overflow : Saturating_NoOverflow;
#endif
		}

		CONSTEXPR_MULTIPLY static void RegMultiplyThrow(const u128& a, const u128& b, u128* ret) {
#if USE_INTRINSICS
#ifdef MSVC
			if (!std::is_constant_evaluated()) {
				u64 carry;
				const uint64_t low = _umul128(a.Low64(), b.Low64(), (uint64_t*)&carry);
				u64 high;
				u64 high2;
				bool overflowed = !SafeMultiply(a.Low64(), b.High64(), high);
				overflowed |= !SafeMultiply(a.High64(), b.Low64(), high2);
				overflowed |= !SafeAdd(high, high2, high);
				overflowed |= !SafeAdd(high, carry, high);
				*ret = UInt128(high, low);
				if (overflowed || a.High64() > 0 && b.High64() > 0)
					throw IntegerOverflowException();
				return;
			}
			uint64_t a32 = a.Low64() >> 32;
			uint64_t a00 = a.Low64() & 0xffffffff;
			uint64_t b32 = b.Low64() >> 32;
			uint64_t b00 = b.Low64() & 0xffffffff;
			u64 high;
			u64 high2;
			bool overflowed = !SafeMultiply(a.Low64(), b.High64(), high);
			overflowed |= !SafeMultiply(a.High64(), b.Low64(), high2);
			overflowed |= !SafeAdd(high, high2, high);
			overflowed |= !SafeAdd(high, u64(a32 * b32), high);
			UInt128 result = UInt128(high, a00 * b00);
			overflowed |= !SafeAdd(result, UInt128(a32 * b00) << 32, result);
			overflowed |= !SafeAdd(result, UInt128(a00 * b32) << 32, result);
			*ret = result;
			if (overflowed || a.High64() > 0 && b.High64() > 0)
				throw IntegerOverflowException();
#else
			if (__builtin_mul_overflow(unsigned __int128(a), unsigned __int128(b),
			                           (unsigned __int128*) ret))
				throw IntegerOverflowException();
#endif
#else
			uint64_t a32 = a.Low64() >> 32;
			uint64_t a00 = a.Low64() & 0xffffffff;
			uint64_t b32 = b.Low64() >> 32;
			uint64_t b00 = b.Low64() & 0xffffffff;
			u64 high;
			u64 high2;
			bool overflowed = !SafeMultiply(a.Low64(), b.High64(), high);
			overflowed |= !SafeMultiply(a.High64(), b.Low64(), high2);
			overflowed |= !SafeAdd(high, high2, high);
			overflowed |= !SafeAdd(high, u64(a32 * b32), high);
			UInt128 result = UInt128(high, a00 * b00);
			overflowed |= !SafeAdd(result, UInt128(a32 * b00) << 32, result);
			overflowed |= !SafeAdd(result, UInt128(a00 * b32) << 32, result);
			*ret = result;
			if (overflowed || a.High64() > 0 && b.High64() > 0)
				throw IntegerOverflowException();
#endif
		}
	};

	template <>
	class LargeIntRegMultiply<u128, uint64_t> {
	   public:
		NODISCARD CONSTEXPR_MULTIPLY static bool RegMultiply(const u128& a, uint64_t b,
		                                                     u128* ret) noexcept {
			return LargeIntRegMultiply<u128, u128>::RegMultiply(a, b, ret);
		}

		NODISCARD CONSTEXPR_MULTIPLY static SaturatingStatus RegMultiplySat(const u128& a,
		                                                                    uint64_t b,
		                                                                    u128* ret) noexcept {
			return LargeIntRegMultiply<u128, u128>::RegMultiplySat(a, b, ret);
		}

		CONSTEXPR_MULTIPLY static void RegMultiplyThrow(const u128& a, uint64_t b, u128* ret) {
			LargeIntRegMultiply<u128, u128>::RegMultiplyThrow(a, b, ret);
		}
	};

	template <>
	class LargeIntRegMultiply<u128, int64_t> {
	   public:
		NODISCARD CONSTEXPR_MULTIPLY static bool RegMultiply(const u128& a, int64_t b,
		                                                     u128* ret) noexcept {
			if (b < 0 && a != 0) {
				WrappingMultiply(a, i64(b), *ret);
				return false;
			}

			return LargeIntRegMultiply<u128, u128>::RegMultiply(a, (uint64_t) b, ret);
		}

		NODISCARD CONSTEXPR_MULTIPLY static SaturatingStatus RegMultiplySat(const u128& a,
		                                                                    int64_t b,
		                                                                    u128* ret) noexcept {
			if (b < 0 && a != 0)
				return Saturating_Underflow;

			return LargeIntRegMultiply<u128, u128>::RegMultiplySat(a, (uint64_t) b, ret);
		}

		CONSTEXPR_MULTIPLY static void RegMultiplyThrow(const u128& a, int64_t b, u128* ret) {
			if (b < 0 && a != 0)
				throw IntegerOverflowException();

			LargeIntRegMultiply<u128, u128>::RegMultiplyThrow(a, (uint64_t) b, ret);
		}
	};

	template <>
	class LargeIntRegMultiply<u128, i128> {
	   public:
		NODISCARD CONSTEXPR_MULTIPLY static bool RegMultiply(const u128& a, i128 b,
		                                                     u128* ret) noexcept {
			if (a == 0 || b == 0) {
				*ret = 0u;
				return true;
			}
			if (b < 0) {
				WrappingMultiply(a, b, *ret);
				return false;
			}

			return LargeIntRegMultiply<u128, u128>::RegMultiply(a, (u128) b, ret);
		}

		NODISCARD CONSTEXPR_MULTIPLY static SaturatingStatus RegMultiplySat(const u128& a, i128 b,
		                                                                    u128* ret) noexcept {
			if (a == 0 || b == 0) {
				*ret = 0u;
				return Saturating_NoOverflow;
			}
			if (b < 0) {
				WrappingMultiply(a, b, *ret);
				return Saturating_Underflow;
			}

			return LargeIntRegMultiply<u128, u128>::RegMultiplySat(a, (u128) b, ret);
		}

		CONSTEXPR_MULTIPLY static void RegMultiplyThrow(const u128& a, i128 b, u128* ret) {
			if (a == 0 || b == 0) {
				*ret = 0u;
				return;
			}
			if (b < 0) {
				WrappingMultiply(a, b, *ret);
				return;
			}

			LargeIntRegMultiply<u128, u128>::RegMultiplyThrow(a, (u128) b, ret);
		}
	};

	template <>
	class LargeIntRegMultiply<int64_t, u128> {
	   public:
		NODISCARD constexpr static bool RegMultiply(int64_t a, const u128& b,
		                                            int64_t* ret) noexcept {
			if (a == 0 || b == 0) {
				*ret = 0;
				return true;
			}
			if (b <= INT64_MAX) {
				return LargeIntRegMultiply<int64_t, int64_t>::RegMultiply(a, (int64_t) b, ret);
			}

			u128 result;
			WrappingMultiply(b, i64(a), result);
			*ret = UnsafeCast<i64>(result);
			return false;
		}

		NODISCARD constexpr static SaturatingStatus RegMultiplySat(int64_t a, const u128& b,
		                                                           int64_t* ret) noexcept {
			if (a == 0 || b == 0) {
				*ret = 0;
				return Saturating_NoOverflow;
			}
			if (b <= INT64_MAX) {
				return LargeIntRegMultiply<int64_t, int64_t>::RegMultiplySat(a, (int64_t) b, ret);
			}

			return a < 0 ? Saturating_Underflow : Saturating_Overflow;
		}

		constexpr static void RegMultiplyThrow(int64_t a, const u128& b, int64_t* ret) {
			if (a == 0 || b == 0) {
				*ret = 0;
				return;
			}
			if (b <= INT64_MAX) {
				LargeIntRegMultiply<int64_t, int64_t>::RegMultiplyThrow(a, (int64_t) b, ret);
			}

			throw IntegerOverflowException();
		}
	};

	template <>
	class LargeIntRegMultiply<uint64_t, u128> {
	   public:
		NODISCARD constexpr static bool RegMultiply(uint64_t a, const u128& b,
		                                            uint64_t* ret) noexcept {
			if (a == 0 || b == 0) {
				*ret = 0;
				return true;
			}
			if (b <= UINT64_MAX) {
				return LargeIntRegMultiply<uint64_t, uint64_t>::RegMultiply(a, (uint64_t) b, ret);
			}

			u128 result;
			WrappingMultiply(b, u64(a), result);
			*ret = UnsafeCast<u64>(result);
			return false;
		}

		NODISCARD constexpr static SaturatingStatus RegMultiplySat(uint64_t a, const u128& b,
		                                                           uint64_t* ret) noexcept {
			if (a == 0 || b == 0) {
				*ret = 0;
				return Saturating_NoOverflow;
			}
			if (b <= UINT64_MAX) {
				return LargeIntRegMultiply<uint64_t, uint64_t>::RegMultiplySat(a, (uint64_t) b,
				                                                               ret);
			}

			return Saturating_Overflow;
		}

		constexpr static void RegMultiplyThrow(uint64_t a, const u128& b, uint64_t* ret) {
			if (a == 0 || b == 0) {
				*ret = 0;
				return;
			}
			if (b <= UINT64_MAX) {
				LargeIntRegMultiply<uint64_t, uint64_t>::RegMultiplyThrow(a, (uint64_t) b, ret);
			}

			throw IntegerOverflowException();
		}
	};

	template <>
	class LargeIntRegMultiply<uint64_t, i128> {
	   public:
		NODISCARD constexpr static bool RegMultiply(uint64_t a, const i128& b,
		                                            uint64_t* ret) noexcept {
			if (a == 0 || b == 0) {
				*ret = 0;
				return true;
			}
			if (b > 0 && b <= UINT64_MAX) {
				return LargeIntRegMultiply<uint64_t, uint64_t>::RegMultiply(a, (uint64_t) b, ret);
			}

			i128 result;
			WrappingMultiply(b, u64(a), result);
			*ret = UnsafeCast<u64>(result);
			return false;
		}

		NODISCARD constexpr static SaturatingStatus RegMultiplySat(uint64_t a, const i128& b,
		                                                           uint64_t* ret) noexcept {
			if (a == 0 || b == 0) {
				*ret = 0;
				return Saturating_NoOverflow;
			}
			if (b > 0 && b <= UINT64_MAX) {
				return LargeIntRegMultiply<uint64_t, uint64_t>::RegMultiplySat(a, (uint64_t) b,
				                                                               ret);
			}

			return b < 0 ? Saturating_Underflow : Saturating_Overflow;
		}

		constexpr static void RegMultiplyThrow(uint64_t a, const i128& b, uint64_t* ret) {
			if (a == 0 || b == 0) {
				*ret = 0;
				return;
			}
			if (b > 0 && b <= UINT64_MAX) {
				LargeIntRegMultiply<uint64_t, uint64_t>::RegMultiplyThrow(a, (uint64_t) b, ret);
			}

			throw IntegerOverflowException();
		}
	};

	template <>
	class LargeIntRegMultiply<i128, i128> {
	   public:
		NODISCARD CONSTEXPR_MULTIPLY static bool RegMultiply(i128 a, i128 b,
		                                                     i128* ret) noexcept {
			constexpr UInt128 INT128MIN_TO_UINT128 = UInt128(uint64_t(INT64_MIN), 0u);
			constexpr UInt128 INT128MAX_TO_UINT128 = UInt128(uint64_t(INT64_MAX), UINT64_MAX);
#if USE_INTRINSICS
#ifdef MSVC
			if (!std::is_constant_evaluated()) {
				uint64_t carry;
				const uint64_t low = _umul128(a.Low64(), b.Low64(), &carry);
				const uint64_t high =
				    (uint64_t) a.Low64() * static_cast<uint64_t>((int64_t) b.High64()) +
				    static_cast<uint64_t>((int64_t) a.High64()) * (uint64_t) b.Low64() + carry;
				*ret                  = Int128(__Details::BitCastToSigned(high), low);
				UInt128 leftUnsigned  = a < 0 ? UInt128(~a) + 1 : UInt128(a);
				UInt128 rightUnsigned = b < 0 ? UInt128(~b) + 1 : UInt128(b);
				UInt128 unsignedResult;
				bool overflowed = !SafeMultiply(leftUnsigned, rightUnsigned, unsignedResult);
				if ((a < 0) ^ (b < 0)) {
					if (unsignedResult > INT128MIN_TO_UINT128)
						overflowed = true;
				} else if (unsignedResult > INT128MAX_TO_UINT128)
					overflowed = true;
				return !overflowed;
			}
			uint64_t a32 = a.Low64() >> 32;
			uint64_t a00 = a.Low64() & 0xffffffff;
			uint64_t b32 = b.Low64() >> 32;
			uint64_t b00 = b.Low64() & 0xffffffff;
			UInt128 unsignedResult =
			    UInt128(static_cast<uint64_t>((int64_t) a.High64()) * (uint64_t) b.Low64() +
			                (uint64_t) a.Low64() * static_cast<uint64_t>((int64_t) b.High64()) +
			                a32 * b32 + a32 * b00 + a00 * b32,
			            a00 * b00);
			*ret =
			    Int128(__Details::BitCastToSigned(unsignedResult.High64()), unsignedResult.Low64());
			UInt128 leftUnsigned  = a < 0 ? UInt128(~a) + 1 : UInt128(a);
			UInt128 rightUnsigned = b < 0 ? UInt128(~b) + 1 : UInt128(b);
			bool overflowed       = !SafeMultiply(leftUnsigned, rightUnsigned, unsignedResult);
			if ((a < 0) ^ (b < 0)) {
				if (unsignedResult > INT128MIN_TO_UINT128)
					overflowed = true;
			} else if (unsignedResult > INT128MAX_TO_UINT128)
				overflowed = true;
			return !overflowed;
#else
			return !__builtin_mul_overflow(__int128(a), __int128(b), (__int128*) ret);
#endif
#else
			uint64_t a32 = a.Low64() >> 32;
			uint64_t a00 = a.Low64() & 0xffffffff;
			uint64_t b32 = b.Low64() >> 32;
			uint64_t b00 = b.Low64() & 0xffffffff;
			UInt128 unsignedResult =
			    UInt128(static_cast<uint64_t>((int64_t) a.High64()) * (uint64_t) b.Low64() +
			                (uint64_t) a.Low64() * static_cast<uint64_t>((int64_t) b.High64()) +
			                a32 * b32 + a32 * b00 + a00 * b32,
			            a00 * b00);
			*ret =
			    Int128(__Details::BitCastToSigned(unsignedResult.High64()), unsignedResult.Low64());
			UInt128 leftUnsigned = a < 0 ? UInt128(~a) + 1 : UInt128(a);
			UInt128 rightUnsigned = b < 0 ? UInt128(~b) + 1 : UInt128(b);
			bool overflowed = !SafeMultiply(leftUnsigned, rightUnsigned, unsignedResult);
			if ((a < 0) ^ (b < 0)) {
				if (unsignedResult > INT128MIN_TO_UINT128)
					overflowed = true;
			} else if (unsignedResult > INT128MAX_TO_UINT128)
				overflowed = true;
			return !overflowed;
#endif
		}

		NODISCARD CONSTEXPR_MULTIPLY static SaturatingStatus RegMultiplySat(i128 a, i128 b,
		                                                                    i128* ret) noexcept {
			constexpr UInt128 INT128MIN_TO_UINT128 = UInt128(uint64_t(INT64_MIN), 0u);
			constexpr UInt128 INT128MAX_TO_UINT128 = UInt128(uint64_t(INT64_MAX), UINT64_MAX);
#if USE_INTRINSICS
#ifdef MSVC
			if (!std::is_constant_evaluated()) {
				uint64_t carry;
				const uint64_t low = _umul128(a.Low64(), b.Low64(), &carry);
				const uint64_t high =
				    (uint64_t) a.Low64() * static_cast<uint64_t>((int64_t) b.High64()) +
				    static_cast<uint64_t>((int64_t) a.High64()) * (uint64_t) b.Low64() + carry;
				*ret                  = Int128(__Details::BitCastToSigned(high), low);
				UInt128 leftUnsigned  = a < 0 ? UInt128(~a) + 1 : UInt128(a);
				UInt128 rightUnsigned = b < 0 ? UInt128(~b) + 1 : UInt128(b);
				UInt128 unsignedResult;
				bool overflowed = !SafeMultiply(leftUnsigned, rightUnsigned, unsignedResult);
				if ((a < 0) ^ (b < 0)) {
					if (unsignedResult > INT128MIN_TO_UINT128)
						overflowed = true;
				} else if (unsignedResult > INT128MAX_TO_UINT128)
					overflowed = true;
				return overflowed ? ((a < 0) ^ (b < 0) ? Saturating_Underflow : Saturating_Overflow)
				                  : Saturating_NoOverflow;
			}
			uint64_t a32 = a.Low64() >> 32;
			uint64_t a00 = a.Low64() & 0xffffffff;
			uint64_t b32 = b.Low64() >> 32;
			uint64_t b00 = b.Low64() & 0xffffffff;
			UInt128 unsignedResult =
			    UInt128(static_cast<uint64_t>((int64_t) a.High64()) * (uint64_t) b.Low64() +
			                (uint64_t) a.Low64() * static_cast<uint64_t>((int64_t) b.High64()) +
			                a32 * b32 + a32 * b00 + a00 * b32,
			            a00 * b00);
			*ret =
			    Int128(__Details::BitCastToSigned(unsignedResult.High64()), unsignedResult.Low64());
			UInt128 leftUnsigned  = a < 0 ? UInt128(~a) + 1 : UInt128(a);
			UInt128 rightUnsigned = b < 0 ? UInt128(~b) + 1 : UInt128(b);
			bool overflowed       = !SafeMultiply(leftUnsigned, rightUnsigned, unsignedResult);
			if ((a < 0) ^ (b < 0)) {
				if (unsignedResult > INT128MIN_TO_UINT128)
					overflowed = true;
			} else if (unsignedResult > INT128MAX_TO_UINT128)
				overflowed = true;
			return overflowed ? ((a < 0) ^ (b < 0) ? Saturating_Underflow : Saturating_Overflow)
			                  : Saturating_NoOverflow;
#else
			if (__builtin_mul_overflow(__int128(a), __int128(b), (__int128*) ret))
				return (a < 0) ^ (b < 0) ? Saturating_Underflow : Saturating_Overflow;
			return Saturating_NoOverflow;
#endif
#else
			uint64_t a32 = a.Low64() >> 32;
			uint64_t a00 = a.Low64() & 0xffffffff;
			uint64_t b32 = b.Low64() >> 32;
			uint64_t b00 = b.Low64() & 0xffffffff;
			UInt128 unsignedResult =
			    UInt128(static_cast<uint64_t>((int64_t) a.High64()) * (uint64_t) b.Low64() +
			                (uint64_t) a.Low64() * static_cast<uint64_t>((int64_t) b.High64()) +
			                a32 * b32 + a32 * b00 + a00 * b32,
			            a00 * b00);
			*ret =
			    Int128(__Details::BitCastToSigned(unsignedResult.High64()), unsignedResult.Low64());
			UInt128 leftUnsigned = a < 0 ? UInt128(~a) + 1 : UInt128(a);
			UInt128 rightUnsigned = b < 0 ? UInt128(~b) + 1 : UInt128(b);
			bool overflowed = !SafeMultiply(leftUnsigned, rightUnsigned, unsignedResult);
			if ((a < 0) ^ (b < 0)) {
				if (unsignedResult > INT128MIN_TO_UINT128)
					overflowed = true;
			} else if (unsignedResult > INT128MAX_TO_UINT128)
				overflowed = true;
			return overflowed ? ((a < 0) ^ (b < 0) ? Saturating_Underflow : Saturating_Overflow)
			                  : Saturating_NoOverflow;
#endif
		}

		CONSTEXPR_MULTIPLY static void RegMultiplyThrow(i128 a, i128 b, i128* ret) {
			constexpr UInt128 INT128MIN_TO_UINT128 = UInt128(uint64_t(INT64_MIN), 0u);
			constexpr UInt128 INT128MAX_TO_UINT128 = UInt128(uint64_t(INT64_MAX), UINT64_MAX);
#if USE_INTRINSICS
#ifdef MSVC
			if (!std::is_constant_evaluated()) {
				uint64_t carry;
				const uint64_t low = _umul128(a.Low64(), b.Low64(), &carry);
				const uint64_t high =
				    (uint64_t) a.Low64() * static_cast<uint64_t>((int64_t) b.High64()) +
				    static_cast<uint64_t>((int64_t) a.High64()) * (uint64_t) b.Low64() + carry;
				*ret                  = Int128(__Details::BitCastToSigned(high), low);
				UInt128 leftUnsigned  = a < 0 ? UInt128(~a) + 1 : UInt128(a);
				UInt128 rightUnsigned = b < 0 ? UInt128(~b) + 1 : UInt128(b);
				UInt128 unsignedResult;
				bool overflowed = !SafeMultiply(leftUnsigned, rightUnsigned, unsignedResult);
				if ((a < 0) ^ (b < 0)) {
					if (unsignedResult > INT128MIN_TO_UINT128)
						overflowed = true;
				} else if (unsignedResult > INT128MAX_TO_UINT128)
					overflowed = true;
				if (overflowed)
					throw IntegerOverflowException();
				return;
			}
			uint64_t a32 = a.Low64() >> 32;
			uint64_t a00 = a.Low64() & 0xffffffff;
			uint64_t b32 = b.Low64() >> 32;
			uint64_t b00 = b.Low64() & 0xffffffff;
			UInt128 unsignedResult =
			    UInt128(static_cast<uint64_t>((int64_t) a.High64()) * (uint64_t) b.Low64() +
			                (uint64_t) a.Low64() * static_cast<uint64_t>((int64_t) b.High64()) +
			                a32 * b32 + a32 * b00 + a00 * b32,
			            a00 * b00);
			*ret =
			    Int128(__Details::BitCastToSigned(unsignedResult.High64()), unsignedResult.Low64());
			UInt128 leftUnsigned  = a < 0 ? UInt128(~a) + 1 : UInt128(a);
			UInt128 rightUnsigned = b < 0 ? UInt128(~b) + 1 : UInt128(b);
			bool overflowed       = !SafeMultiply(leftUnsigned, rightUnsigned, unsignedResult);
			if ((a < 0) ^ (b < 0)) {
				if (unsignedResult > INT128MIN_TO_UINT128)
					overflowed = true;
			} else if (unsignedResult > INT128MAX_TO_UINT128)
				overflowed = true;
			if (overflowed)
				throw IntegerOverflowException();
#else
			if (__builtin_mul_overflow(__int128(a), __int128(b), (__int128*) ret))
				throw IntegerOverflowException();
#endif
#else
			uint64_t a32 = a.Low64() >> 32;
			uint64_t a00 = a.Low64() & 0xffffffff;
			uint64_t b32 = b.Low64() >> 32;
			uint64_t b00 = b.Low64() & 0xffffffff;
			UInt128 unsignedResult =
			    UInt128(static_cast<uint64_t>((int64_t) a.High64()) * (uint64_t) b.Low64() +
			                (uint64_t) a.Low64() * static_cast<uint64_t>((int64_t) b.High64()) +
			                a32 * b32 + a32 * b00 + a00 * b32,
			            a00 * b00);
			*ret =
			    Int128(__Details::BitCastToSigned(unsignedResult.High64()), unsignedResult.Low64());
			UInt128 leftUnsigned = a < 0 ? UInt128(~a) + 1 : UInt128(a);
			UInt128 rightUnsigned = b < 0 ? UInt128(~b) + 1 : UInt128(b);
			bool overflowed = !SafeMultiply(leftUnsigned, rightUnsigned, unsignedResult);
			if ((a < 0) ^ (b < 0)) {
				if (unsignedResult > INT128MIN_TO_UINT128)
					overflowed = true;
			} else if (unsignedResult > INT128MAX_TO_UINT128)
				overflowed = true;
			if (overflowed)
				throw IntegerOverflowException();
#endif
		}
	};

	template <>
	class LargeIntRegMultiply<i128, uint64_t> {
	   public:
		NODISCARD CONSTEXPR_MULTIPLY static bool RegMultiply(const i128& a, uint64_t b,
		                                                     i128* ret) noexcept {
			return LargeIntRegMultiply<i128, i128>::RegMultiply(a, b, ret);
		}

		NODISCARD CONSTEXPR_MULTIPLY static SaturatingStatus RegMultiplySat(const i128& a,
		                                                                    uint64_t b,
		                                                                    i128* ret) noexcept {
			return LargeIntRegMultiply<i128, i128>::RegMultiplySat(a, b, ret);
		}

		CONSTEXPR_MULTIPLY static void RegMultiplyThrow(const i128& a, uint64_t b, i128* ret) {
			LargeIntRegMultiply<i128, i128>::RegMultiplyThrow(a, b, ret);
		}
	};

	template <>
	class LargeIntRegMultiply<i128, int64_t> {
	   public:
		NODISCARD CONSTEXPR_MULTIPLY static bool RegMultiply(const i128& a, int64_t b,
		                                                     i128* ret) noexcept {
			return LargeIntRegMultiply<i128, i128>::RegMultiply(a, b, ret);
		}

		NODISCARD CONSTEXPR_MULTIPLY static SaturatingStatus RegMultiplySat(const i128& a,
		                                                                    int64_t b,
		                                                                    i128* ret) noexcept {
			return LargeIntRegMultiply<i128, i128>::RegMultiplySat(a, b, ret);
		}

		CONSTEXPR_MULTIPLY static void RegMultiplyThrow(const i128& a, int64_t b, i128* ret) {
			LargeIntRegMultiply<i128, i128>::RegMultiplyThrow(a, b, ret);
		}
	};

	template <>
	class LargeIntRegMultiply<int64_t, i128> {
	   public:
		NODISCARD CONSTEXPR_MULTIPLY static bool RegMultiply(int64_t a, const i128& b,
		                                                     int64_t* ret) noexcept {
			if (a == 0 || b == 0) {
				*ret = 0;
				return true;
			}

			if (b >= INT64_MIN && b <= INT64_MAX) {
				return LargeIntRegMultiply<int64_t, int64_t>::RegMultiply(a, (int64_t) b, ret);
			}

			i128 result;
			WrappingMultiply(b, i64(a), result);
			*ret = uint64_t(result.Low64());
			return false;
		}

		NODISCARD CONSTEXPR_MULTIPLY static SaturatingStatus RegMultiplySat(int64_t a,
		                                                                    const i128& b,
		                                                                    int64_t* ret) noexcept {
			if (a == 0 || b == 0) {
				*ret = 0;
				return Saturating_NoOverflow;
			}

			if (b >= INT64_MIN && b <= INT64_MAX) {
				return LargeIntRegMultiply<int64_t, int64_t>::RegMultiplySat(a, (int64_t) b, ret);
			}

			i128 result;
			WrappingMultiply(b, i64(a), result);
			*ret = uint64_t(result.Low64());
			return (a < 0) ^ (b < 0) ? Saturating_Underflow : Saturating_Overflow;
		}

		CONSTEXPR_MULTIPLY static void RegMultiplyThrow(int64_t a, const i128& b, int64_t* ret) {
			if (a == 0 || b == 0) {
				*ret = 0;
				return;
			}

			if (b >= INT64_MIN && b <= INT64_MAX) {
				LargeIntRegMultiply<int64_t, int64_t>::RegMultiplyThrow(a, (int64_t) b, ret);
			}

			throw IntegerOverflowException();
		}
	};

	template <>
	class LargeIntRegMultiply<i128, u128> {
	   public:
		NODISCARD CONSTEXPR_MULTIPLY static bool RegMultiply(const i128& a, const u128& b,
		                                                     i128* ret) noexcept {
			if (a == 0 || b == 0) {
				*ret = 0;
				return true;
			}

			if (b <= INT128_MAX) {
				return LargeIntRegMultiply<i128, i128>::RegMultiply(a, (i128) b, ret);
			}

			i128 result;
			WrappingMultiply(a, b, result);
			*ret = result;
			return false;
		}

		NODISCARD CONSTEXPR_MULTIPLY static SaturatingStatus RegMultiplySat(const i128& a,
		                                                                    const u128& b,
		                                                                    i128* ret) noexcept {
			if (a == 0 || b == 0) {
				*ret = 0;
				return Saturating_NoOverflow;
			}

			if (b <= INT128_MAX) {
				return LargeIntRegMultiply<i128, i128>::RegMultiplySat(a, (i128) b, ret);
			}

			i128 result;
			WrappingMultiply(a, b, result);
			*ret = result;
			return a < 0 ? Saturating_Underflow : Saturating_Overflow;
		}

		CONSTEXPR_MULTIPLY static void RegMultiplyThrow(const i128& a, const u128& b, i128* ret) {
			if (a == 0 || b == 0) {
				*ret = 0;
				return;
			}

			if (b <= INT128_MAX) {
				LargeIntRegMultiply<i128, i128>::RegMultiplyThrow(a, (i128) b, ret);
			}

			throw IntegerOverflowException();
		}
	};

	template <class T, class U>
	class MultiplicationHelper<T, U, MultiplicationState_Uint128Uint128> {
	   public:
		NODISCARD CONSTEXPR_MULTIPLY static bool Multiply(const T& t, const U& u, T& ret) noexcept {
			static_assert(__details::IntTraits<T>::isUint128 && __details::IntTraits<U>::isUint128,
			              "T, U must be Uint128");
			u128 t1  = t;
			u128 u1  = u;
			u128 tmp = 0u;
			bool f   = LargeIntRegMultiply<u128, u128>::RegMultiply(t1, u1, &tmp);
			ret      = tmp;
			return f;
		}

		NODISCARD CONSTEXPR_MULTIPLY static SaturatingStatus MultiplySat(const T& t, const U& u,
		                                                                 T& ret) noexcept {
			static_assert(__details::IntTraits<T>::isUint128 && __details::IntTraits<U>::isUint128,
			              "T, U must be Uint128");
			u128 t1  = t;
			u128 u1  = u;
			u128 tmp = 0u;
			auto s   = LargeIntRegMultiply<u128, u128>::RegMultiplySat(t1, u1, &tmp);
			ret      = tmp;
			return s;
		}

		CONSTEXPR_MULTIPLY static void MultiplyThrow(const T& t, const U& u, T& ret) {
			static_assert(__details::IntTraits<T>::isUint128 && __details::IntTraits<U>::isUint128,
			              "T, U must be Uint128");
			u128 t1  = t;
			u128 u1  = u;
			u128 tmp = 0u;
			LargeIntRegMultiply<u128, u128>::RegMultiplyThrow(t1, u1, &tmp);
			ret = tmp;
		}
	};

	template <class T, class U>
	class MultiplicationHelper<T, U, MultiplicationState_Uint128Uint> {
	   public:
		NODISCARD CONSTEXPR_MULTIPLY static bool Multiply(const T& t, U u, T& ret) noexcept {
			static_assert(__details::IntTraits<T>::isUint128, "T must be Uint128");
			u128 t1  = t;
			u128 tmp = 0u;
			bool f   = LargeIntRegMultiply<u128, uint64_t>::RegMultiply(t1, (uint64_t) u, &tmp);
			ret      = tmp;
			return f;
		}

		NODISCARD CONSTEXPR_MULTIPLY static SaturatingStatus MultiplySat(const T& t, U u,
		                                                                 T& ret) noexcept {
			static_assert(__details::IntTraits<T>::isUint128, "T must be Uint128");
			u128 t1  = t;
			u128 tmp = 0u;
			auto s   = LargeIntRegMultiply<u128, uint64_t>::RegMultiplySat(t1, (uint64_t) u, &tmp);
			ret      = tmp;
			return s;
		}

		CONSTEXPR_MULTIPLY static void MultiplyThrow(const T& t, U u, T& ret) {
			static_assert(__details::IntTraits<T>::isUint128, "T must be Uint128");
			u128 t1  = t;
			u128 tmp = 0u;
			LargeIntRegMultiply<u128, uint64_t>::RegMultiplyThrow(t1, (uint64_t) u, &tmp);
			ret = tmp;
		}
	};

	template <class T, class U>
	class MultiplicationHelper<T, U, MultiplicationState_UintUint128> {
	   public:
		NODISCARD constexpr static bool Multiply(T t, const U& u, T& ret) noexcept {
			static_assert(__details::IntTraits<U>::isUint128, "U must be Uint128");
			u128 u1      = u;
			uint64_t tmp = 0;
			auto status  = LargeIntRegMultiply<uint64_t, u128>::RegMultiply(t, u1, &tmp);
			ret          = tmp;
			if (status &&
			    SafeCastHelper<T, uint64_t, CastMethodHelper<T, uint64_t>::method>::Cast(tmp, ret))
				return true;
			return false;
		}

		NODISCARD constexpr static SaturatingStatus MultiplySat(T t, const U& u, T& ret) noexcept {
			static_assert(__details::IntTraits<U>::isUint128, "U must be Uint128");
			u128 u1      = u;
			uint64_t tmp = 0;
			auto s       = LargeIntRegMultiply<uint64_t, u128>::RegMultiplySat(t, u1, &tmp);
			if (s == Saturating_NoOverflow) {
				if (tmp < (uint64_t) std::numeric_limits<T>::min())
					return Saturating_Underflow;
				if (tmp > (uint64_t) std::numeric_limits<T>::max())
					return Saturating_Overflow;
				ret = (T) tmp;
			}
			return s;
		}

		constexpr static void MultiplyThrow(T t, const U& u, T& ret) {
			static_assert(__details::IntTraits<U>::isUint128, "U must be Uint128");
			u128 u1      = u;
			uint64_t tmp = 0;
			LargeIntRegMultiply<uint64_t, u128>::RegMultiplyThrow(t, u1, &tmp);
			SafeCastHelper<T, uint64_t, CastMethodHelper<T, uint64_t>::method>::CastThrow(tmp, ret);
		}
	};

	template <class T, class U>
	class MultiplicationHelper<T, U, MultiplicationState_Uint128Int> {
	   public:
		NODISCARD CONSTEXPR_MULTIPLY static bool Multiply(const T& t, U u, T& ret) noexcept {
			static_assert(__details::IntTraits<T>::isUint128, "T must be Uint128");
			u128 t1  = t;
			u128 tmp = 0u;
			bool f   = LargeIntRegMultiply<u128, int64_t>::RegMultiply(t1, (int64_t) u, &tmp);
			ret      = tmp;
			return f;
		}

		NODISCARD CONSTEXPR_MULTIPLY static SaturatingStatus MultiplySat(const T& t, U u,
		                                                                 T& ret) noexcept {
			static_assert(__details::IntTraits<T>::isUint128, "T must be Uint128");
			u128 t1  = t;
			u128 tmp = 0u;
			auto s   = LargeIntRegMultiply<u128, int64_t>::RegMultiplySat(t1, (int64_t) u, &tmp);
			ret      = tmp;
			return s;
		}

		CONSTEXPR_MULTIPLY static void MultiplyThrow(const T& t, U u, T& ret) {
			static_assert(__details::IntTraits<T>::isUint128, "T must be Uint128");
			u128 t1  = t;
			u128 tmp = 0u;
			LargeIntRegMultiply<u128, int64_t>::RegMultiplyThrow(t1, (int64_t) u, &tmp);
			ret = tmp;
		}
	};

	template <class T, class U>
	class MultiplicationHelper<T, U, MultiplicationState_Uint128Int128> {
	   public:
		NODISCARD CONSTEXPR_MULTIPLY static bool Multiply(const T& t, const U& u, T& ret) noexcept {
			static_assert(__details::IntTraits<T>::isUint128 && __details::IntTraits<U>::isInt128,
			              "T must be Uint128, U Int128");
			u128 t1  = t;
			i128 u1  = u;
			u128 tmp = 0u;
			bool f   = LargeIntRegMultiply<u128, i128>::RegMultiply(t1, u1, &tmp);
			ret      = tmp;
			return f;
		}

		NODISCARD CONSTEXPR_MULTIPLY static SaturatingStatus MultiplySat(const T& t, const U& u,
		                                                                 T& ret) noexcept {
			static_assert(__details::IntTraits<T>::isUint128 && __details::IntTraits<U>::isInt128,
			              "T must be Uint128, U Int128");
			u128 t1  = t;
			i128 u1  = u;
			u128 tmp = 0u;
			auto s   = LargeIntRegMultiply<u128, i128>::RegMultiplySat(t1, u1, &tmp);
			ret      = tmp;
			return s;
		}

		CONSTEXPR_MULTIPLY static void MultiplyThrow(const T& t, const U& u, T& ret) {
			static_assert(__details::IntTraits<T>::isUint128 && __details::IntTraits<U>::isInt128,
			              "T must be Uint128, U Int128");
			u128 t1  = t;
			i128 u1  = u;
			u128 tmp = 0u;
			LargeIntRegMultiply<u128, i128>::RegMultiplyThrow(t1, u1, &tmp);
			ret = tmp;
		}
	};

	template <class T, class U>
	class MultiplicationHelper<T, U, MultiplicationState_UintInt128> {
	   public:
		NODISCARD constexpr static bool Multiply(T t, const U& u, T& ret) noexcept {
			static_assert(__details::IntTraits<U>::isInt128, "U must be Int128");
			i128 u1      = u;
			uint64_t tmp = 0;
			auto status  = LargeIntRegMultiply<uint64_t, i128>::RegMultiply((uint64_t) t, u1, &tmp);
			ret          = tmp;
			if (status &&
			    SafeCastHelper<T, uint64_t, CastMethodHelper<T, uint64_t>::method>::Cast(tmp, ret))
				return true;
			return false;
		}

		NODISCARD constexpr static SaturatingStatus MultiplySat(T t, const U& u, T& ret) noexcept {
			static_assert(__details::IntTraits<U>::isInt128, "U must be Int128");
			i128 u1      = u;
			uint64_t tmp = 0;
			auto s = LargeIntRegMultiply<uint64_t, i128>::RegMultiplySat((uint64_t) t, u1, &tmp);
			if (s == Saturating_NoOverflow) {
				if (tmp > std::numeric_limits<T>::max())
					return Saturating_Overflow;
				ret = tmp;
			}
			return s;
		}

		constexpr static void MultiplyThrow(T t, const U& u, T& ret) {
			static_assert(__details::IntTraits<U>::isInt128, "U must be Int128");
			i128 u1      = u;
			uint64_t tmp = 0;
			LargeIntRegMultiply<uint64_t, i128>::RegMultiplyThrow((uint64_t) t, u1, &tmp);
			SafeCastHelper<T, uint64_t, CastMethodHelper<T, uint64_t>::method>::CastThrow(tmp, ret);
		}
	};

	template <class T, class U>
	class MultiplicationHelper<T, U, MultiplicationState_Int128Uint> {
	   public:
		NODISCARD CONSTEXPR_MULTIPLY static bool Multiply(const T& t, U u, T& ret) noexcept {
			static_assert(__details::IntTraits<T>::isInt128, "T must be Int128");
			i128 t1  = t;
			i128 tmp = 0;
			bool f   = LargeIntRegMultiply<i128, uint64_t>::RegMultiply(t1, (uint64_t) u, &tmp);
			ret      = tmp;
			return f;
		}

		NODISCARD CONSTEXPR_MULTIPLY static SaturatingStatus MultiplySat(const T& t, U u,
		                                                                 T& ret) noexcept {
			static_assert(__details::IntTraits<T>::isInt128, "T must be Int128");
			i128 t1  = t;
			i128 tmp = 0;
			auto s   = LargeIntRegMultiply<i128, uint64_t>::RegMultiplySat(t1, (uint64_t) u, &tmp);
			ret      = tmp;
			return s;
		}

		CONSTEXPR_MULTIPLY static void MultiplyThrow(const T& t, U u, T& ret) {
			static_assert(__details::IntTraits<T>::isInt128, "T must be Int128");
			i128 t1  = t;
			i128 tmp = 0;
			LargeIntRegMultiply<i128, uint64_t>::RegMultiplyThrow(t1, (uint64_t) u, &tmp);
			ret = tmp;
		}
	};

	template <class T, class U>
	class MultiplicationHelper<T, U, MultiplicationState_Int128Int128> {
	   public:
		NODISCARD CONSTEXPR_MULTIPLY static bool Multiply(const T& t, const U& u, T& ret) noexcept {
			static_assert(__details::IntTraits<T>::isInt128 && __details::IntTraits<U>::isInt128,
			              "T, U must be Int128");
			i128 t1  = t;
			i128 u1  = u;
			i128 tmp = 0;
			bool f   = LargeIntRegMultiply<i128, i128>::RegMultiply(t1, u1, &tmp);
			ret      = tmp;
			return f;
		}

		NODISCARD CONSTEXPR_MULTIPLY static SaturatingStatus MultiplySat(const T& t, const U& u,
		                                                                 T& ret) noexcept {
			static_assert(__details::IntTraits<T>::isInt128 && __details::IntTraits<U>::isInt128,
			              "T, U must be Int128");
			i128 t1  = t;
			i128 u1  = u;
			i128 tmp = 0;
			auto s   = LargeIntRegMultiply<i128, i128>::RegMultiplySat(t1, u1, &tmp);
			ret      = tmp;
			return s;
		}

		CONSTEXPR_MULTIPLY static void MultiplyThrow(const T& t, const U& u, T& ret) {
			static_assert(__details::IntTraits<T>::isInt128 && __details::IntTraits<U>::isInt128,
			              "T, U must be Int128");
			i128 t1  = t;
			i128 u1  = u;
			i128 tmp = 0;
			LargeIntRegMultiply<i128, i128>::RegMultiplyThrow(t1, u1, &tmp);
			ret = tmp;
		}
	};

	template <class T, class U>
	class MultiplicationHelper<T, U, MultiplicationState_Int128Int> {
	   public:
		NODISCARD CONSTEXPR_MULTIPLY static bool Multiply(const T& t, U u, T& ret) noexcept {
			static_assert(__details::IntTraits<T>::isInt128, "T must be Int128");
			i128 t1  = t;
			i128 tmp = 0;
			bool f   = LargeIntRegMultiply<i128, int64_t>::RegMultiply(t1, (int64_t) u, &tmp);
			ret      = tmp;
			return f;
		}

		NODISCARD CONSTEXPR_MULTIPLY static SaturatingStatus MultiplySat(const T& t, U u,
		                                                                 T& ret) noexcept {
			static_assert(__details::IntTraits<T>::isInt128, "T must be Int128");
			i128 t1  = t;
			i128 tmp = 0;
			auto s   = LargeIntRegMultiply<i128, int64_t>::RegMultiplySat(t1, (int64_t) u, &tmp);
			ret      = tmp;
			return s;
		}

		CONSTEXPR_MULTIPLY static void MultiplyThrow(const i128& t, U u, T& ret) {
			static_assert(__details::IntTraits<T>::isInt128, "T must be Int128");
			i128 t1  = t;
			i128 tmp = 0;
			LargeIntRegMultiply<i128, int64_t>::RegMultiplyThrow(t1, (int64_t) u, &tmp);
			ret = tmp;
		}
	};

	template <class T, class U>
	class MultiplicationHelper<T, U, MultiplicationState_IntUint128> {
	   public:
		NODISCARD constexpr static bool Multiply(T t, const U& u, T& ret) noexcept {
			static_assert(__details::IntTraits<U>::isUint128, "U must be Uint128");
			u128 u1     = u;
			int64_t tmp = 0;
			auto status = LargeIntRegMultiply<int64_t, u128>::RegMultiply((int64_t) t, u1, &tmp);
			ret         = tmp;
			if (status &&
			    SafeCastHelper<T, int64_t, CastMethodHelper<T, int64_t>::method>::Cast(tmp, ret))
				return true;
			return false;
		}

		NODISCARD constexpr static SaturatingStatus MultiplySat(T t, const U& u, T& ret) noexcept {
			static_assert(__details::IntTraits<U>::isUint128, "U must be Uint128");
			u128 u1     = u;
			int64_t tmp = 0;
			auto s      = LargeIntRegMultiply<int64_t, u128>::RegMultiplySat((int64_t) t, u1, &tmp);
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
			static_assert(__details::IntTraits<U>::isUint128, "U must be Uint128");
			u128 u1     = u;
			int64_t tmp = 0;
			LargeIntRegMultiply<int64_t, u128>::RegMultiplyThrow((int64_t) t, u1, &tmp);
			SafeCastHelper<T, int64_t, CastMethodHelper<T, int64_t>::method>::CastThrow(tmp, ret);
		}
	};

	template <class T, class U>
	class MultiplicationHelper<T, U, MultiplicationState_Int128Uint128> {
	   public:
		NODISCARD CONSTEXPR_MULTIPLY static bool Multiply(const T& t, const U& u, T& ret) noexcept {
			static_assert(__details::IntTraits<T>::isInt128 && __details::IntTraits<U>::isUint128,
			              "T, U must be Int128, Uint128");
			i128 t1  = t;
			u128 u1  = u;
			i128 tmp = 0;
			bool f   = LargeIntRegMultiply<i128, u128>::RegMultiply(t1, u1, &tmp);
			ret      = tmp;
			return f;
		}

		NODISCARD CONSTEXPR_MULTIPLY static SaturatingStatus MultiplySat(const T& t, const U& u,
		                                                                 T& ret) noexcept {
			static_assert(__details::IntTraits<T>::isInt128 && __details::IntTraits<U>::isUint128,
			              "T, U must be Int128, Uint128");
			i128 t1  = t;
			u128 u1  = u;
			i128 tmp = 0;
			auto s   = LargeIntRegMultiply<i128, u128>::RegMultiplySat(t1, u1, &tmp);
			ret      = tmp;
			return s;
		}

		CONSTEXPR_MULTIPLY static void MultiplyThrow(const i128& t, const u128& u, T& ret) {
			static_assert(__details::IntTraits<T>::isInt128 && __details::IntTraits<U>::isUint128,
			              "T, U must be Int128, Uint128");
			i128 t1  = t;
			u128 u1  = u;
			i128 tmp = 0;
			LargeIntRegMultiply<i128, u128>::RegMultiplyThrow(t1, u1, &tmp);
			ret = tmp;
		}
	};

	template <class T, class U>
	class MultiplicationHelper<T, U, MultiplicationState_IntInt128> {
	   public:
		NODISCARD constexpr static bool Multiply(T t, const U& u, T& ret) noexcept {
			static_assert(__details::IntTraits<U>::isInt128, "U must be Int128");
			i128 u1     = u;
			int64_t tmp = 0;
			auto status = LargeIntRegMultiply<int64_t, i128>::RegMultiply((int64_t) t, u1, &tmp);
			ret         = tmp;
			if (status &&
			    SafeCastHelper<T, int64_t, CastMethodHelper<T, int64_t>::method>::Cast(tmp, ret))
				return true;
			return false;
		}

		NODISCARD constexpr static SaturatingStatus MultiplySat(T t, const U& u, T& ret) noexcept {
			static_assert(__details::IntTraits<U>::isInt128, "U must be Int128");
			i128 u1     = u;
			int64_t tmp = 0;
			auto s      = LargeIntRegMultiply<int64_t, i128>::RegMultiplySat((int64_t) t, u1, &tmp);
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
			static_assert(__details::IntTraits<U>::isInt128, "U must be Int128");
			i128 u1     = u;
			int64_t tmp = 0;
			LargeIntRegMultiply<int64_t, i128>::RegMultiplyThrow((int64_t) t, u1, &tmp);
			SafeCastHelper<T, int64_t, CastMethodHelper<T, int64_t>::method>::CastThrow(tmp, ret);
		}
	};

	template <class T, class U>
	class AdditionHelper<T, U, AdditionState_CastUint128CheckOverflow> {
	   public:
		NODISCARD constexpr static bool Addition(T t, UInt128 u, T& result) noexcept {
#if USE_INTRINSICS
#ifdef MSVC
			if (!std::is_constant_evaluated()) {
				uint64_t low;
				uint64_t high;
				auto carry = _addcarry_u64(0, t.Low64(), u.Low64(), &low);
				carry      = _addcarry_u64(carry, t.High64(), u.High64(), &high);
				result     = UInt128(high, low);
				return carry == 0;
			}
			uint64_t aLow = (uint64_t) t.Low64();
			uint64_t bLow = (uint64_t) u.Low64();
			uint64_t low  = aLow + bLow;
			uint64_t high = (uint64_t) t.High64() + (uint64_t) u.High64();
			if (low < aLow)
				high++;
			result = UInt128(high, low);
			return result >= t;
#else
			return !__builtin_add_overflow(unsigned __int128(t), unsigned __int128(u),
			                               (unsigned __int128*) &result);
#endif
#else
			uint64_t aLow = (uint64_t) t.Low64();
			uint64_t bLow = (uint64_t) u.Low64();
			uint64_t low = aLow + bLow;
			uint64_t high = (uint64_t) t.High64() + (uint64_t) u.High64();
			if (low < aLow)
				high++;
			result = UInt128(high, low);
			return result >= t;
#endif
		}

		NODISCARD constexpr static SaturatingStatus AdditionSat(T t, UInt128 u,
		                                                        T& result) noexcept {
#if USE_INTRINSICS
#ifdef MSVC
			if (!std::is_constant_evaluated()) {
				uint64_t low;
				uint64_t high;
				auto carry = _addcarry_u64(0, t.Low64(), u.Low64(), &low);
				carry      = _addcarry_u64(carry, t.High64(), u.High64(), &high);
				result     = UInt128(high, low);
				return carry != 0 ? Saturating_Overflow : Saturating_NoOverflow;
			}
			uint64_t aLow = (uint64_t) t.Low64();
			uint64_t bLow = (uint64_t) u.Low64();
			uint64_t low  = aLow + bLow;
			uint64_t high = (uint64_t) t.High64() + (uint64_t) u.High64();
			if (low < aLow)
				high++;
			result = UInt128(high, low);
			return result < t ? Saturating_Overflow : Saturating_NoOverflow;
#else
			return __builtin_add_overflow(unsigned __int128(t), unsigned __int128(u),
			                              (unsigned __int128*) &result)
			           ? Saturating_Overflow
			           : Saturating_NoOverflow;
#endif
#else
			uint64_t aLow = (uint64_t) t.Low64();
			uint64_t bLow = (uint64_t) u.Low64();
			uint64_t low = aLow + bLow;
			uint64_t high = (uint64_t) t.High64() + (uint64_t) u.High64();
			if (low < aLow)
				high++;
			result = UInt128(high, low);
			return result < t ? Saturating_Overflow : Saturating_NoOverflow;
#endif
		}

		constexpr static void AdditionThrow(T t, UInt128 u, T& result) {
#if USE_INTRINSICS
#ifdef MSVC
			if (!std::is_constant_evaluated()) {
				uint64_t low;
				uint64_t high;
				auto carry = _addcarry_u64(0, t.Low64(), u.Low64(), &low);
				carry      = _addcarry_u64(carry, t.High64(), u.High64(), &high);
				result     = UInt128(high, low);
				if (carry)
					throw IntegerOverflowException();
				return;
			}
			uint64_t aLow = (uint64_t) t.Low64();
			uint64_t bLow = (uint64_t) u.Low64();
			uint64_t low  = aLow + bLow;
			uint64_t high = (uint64_t) t.High64() + (uint64_t) u.High64();
			if (low < aLow)
				high++;
			result = UInt128(high, low);
			if (result < t)
				throw IntegerOverflowException();
#else
			if (__builtin_add_overflow(unsigned __int128(t), unsigned __int128(u),
			                           (unsigned __int128*) &result))
				throw IntegerOverflowException();
#endif
#else
			uint64_t aLow = (uint64_t) t.Low64();
			uint64_t bLow = (uint64_t) u.Low64();
			uint64_t low = aLow + bLow;
			uint64_t high = (uint64_t) t.High64() + (uint64_t) u.High64();
			if (low < aLow)
				high++;
			result = UInt128(high, low);
			if (result < t)
				throw IntegerOverflowException();
#endif
		}
	};

	template <class T, class U>
	class AdditionHelper<T, U, AdditionState_CastUint128CheckOverflowMax> {
	   public:
		NODISCARD constexpr static bool Addition(const T& t, const U& u, T& result) noexcept {
			UInt128 tmp;
			bool safe =
			    AdditionHelper<u128, u128, AdditionState_CastUint128CheckOverflow>::Addition(t, u,
			                                                                                 tmp);
			result = (T) uint64_t(tmp.Low64());
			return safe && tmp <= std::numeric_limits<T>::max();
		}

		NODISCARD constexpr static SaturatingStatus AdditionSat(const T& t, const U& u,
		                                                        T& result) noexcept {
			UInt128 tmp;
			bool safe =
			    AdditionHelper<u128, u128, AdditionState_CastUint128CheckOverflow>::Addition(t, u,
			                                                                                 tmp);
			result = (T) uint64_t(tmp.Low64());
			return safe && tmp <= std::numeric_limits<T>::max() ? Saturating_NoOverflow
			                                                    : Saturating_Overflow;
		}

		constexpr static void AdditionThrow(const T& t, const U& u, T& result) {
			UInt128 tmp;
			bool safe =
			    AdditionHelper<u128, u128, AdditionState_CastUint128CheckOverflow>::Addition(t, u,
			                                                                                 tmp);
			result = (T) uint64_t(tmp.Low64());
			if (!safe || tmp <= std::numeric_limits<T>::max())
				throw IntegerOverflowException();
		}
	};

	template <class T, class U>
	class AdditionHelper<T, U, AdditionState_CastUint128CheckSafeIntMinMax> {
	   public:
		NODISCARD constexpr static bool Addition(const T& t, const U& u, T& result) noexcept {
			if (u < 0) {
				return SubtractionHelper<u128, u128, SubtractionMethod<u128, u128>::method>::
				    Subtract(t, AbsValueHelper<U, AbsMethodHelper<U>::method>::Abs(u), result);
			}
			return AdditionHelper<u128, u128, AdditionState_CastUint128CheckOverflow>::Addition(
			    t, u128(u), result);
		}

		NODISCARD constexpr static SaturatingStatus AdditionSat(const T& t, const U& u,
		                                                        T& result) noexcept {
			if (u < 0) {
				return SubtractionHelper<u128, u128, SubtractionMethod<u128, u128>::method>::
				    SubtractSat(t, AbsValueHelper<U, AbsMethodHelper<U>::method>::Abs(u), result);
			}
			return AdditionHelper<u128, u128, AdditionState_CastUint128CheckOverflow>::AdditionSat(
			    t, u128(u), result);
		}

		constexpr static void AdditionThrow(const T& t, const U& u, T& result) {
			if (u < 0) {
				SubtractionHelper<u128, u128, SubtractionMethod<u128, u128>::method>::SubtractThrow(
				    t, AbsValueHelper<U, AbsMethodHelper<U>::method>::Abs(u), result);
				return;
			}
			AdditionHelper<u128, u128, AdditionState_CastUint128CheckOverflow>::AdditionThrow(
			    t, u128(u), result);
		}
	};

	template <class T, class U>
	class AdditionHelper<T, U, AdditionState_CastUint128CheckSafeIntMinMax2> {
	   public:
		NODISCARD constexpr static bool Addition(T t, U u, T& result) noexcept {
			u128 tmp;
			bool safe = false;
			if (u < 0) {
				tmp = AbsValueHelper<U, AbsMethodHelper<U>::method>::Abs(u);
				SubtractionHelper<u128, u128, SubtractionMethod<u128, u128>::method>::Subtract(
				    t, tmp, tmp);
				result = (T) uint64_t(tmp.Low64());
				return t >= tmp;
			}
			safe = AdditionHelper<u128, u128, AdditionState_CastUint128CheckOverflow>::Addition(
			    t, u128(u), tmp);
			result = (T) uint64_t(tmp.Low64());
			return safe && tmp <= std::numeric_limits<T>::max();
		}

		NODISCARD constexpr static SaturatingStatus AdditionSat(T t, U u,
		                                                        T& result) noexcept {
			u128 tmp;
			if (u < 0) {
				tmp = AbsValueHelper<U, AbsMethodHelper<U>::method>::Abs(u);
				auto status =
				    SubtractionHelper<u128, u128,
				                      SubtractionMethod<u128, u128>::method>::SubtractSat(t, tmp,
				                                                                          tmp);
				result = (T) uint64_t(tmp.Low64());
				return status;
			}
			auto status =
			    AdditionHelper<u128, u128, AdditionState_CastUint128CheckOverflow>::AdditionSat(
			        t, u128(u), tmp);
			result = (T) uint64_t(tmp.Low64());
			return tmp > std::numeric_limits<T>::max() ? Saturating_Overflow : status;
		}

		constexpr static void AdditionThrow(T t, U u, T& result) {
			u128 tmp;
			bool safe = false;
			if (u < 0) {
				tmp = AbsValueHelper<U, AbsMethodHelper<U>::method>::Abs(u);
				SubtractionHelper<u128, u128, SubtractionMethod<u128, u128>::method>::SubtractThrow(
				    t, tmp, tmp);
				result = (T) uint64_t(tmp.Low64());
				return;
			}
			AdditionHelper<u128, u128, AdditionState_CastUint128CheckOverflow>::AdditionThrow(
			    t, u128(u), tmp);
			result = (T) uint64_t(tmp.Low64());
			if (tmp > std::numeric_limits<T>::max())
				throw IntegerOverflowException();
		}
	};

	template <class T, class U>
	class AdditionHelper<T, U, AdditionState_CastInt128CheckOverflow> {
	   public:
		NODISCARD constexpr static bool Addition(T t, Int128 u, T& result) noexcept {
#if USE_INTRINSICS
#ifdef MSVC
			if (!std::is_constant_evaluated()) {
				uint64_t low;
				uint64_t high;
				auto carry = _addcarry_u64(0, t.Low64(), u.Low64(), &low);
				_addcarry_u64(carry, (int64_t) t.High64(), (int64_t) u.High64(), &high);
				result = Int128((int64_t) high, low);
				return !(u > 0 && result < t || u < 0 && result > t);
			}
			uint64_t aLow = (uint64_t) t.Low64();
			uint64_t bLow = (uint64_t) u.Low64();
			uint64_t low  = aLow + bLow;
			int64_t high  = (int64_t) t.High64() + (int64_t) u.High64();
			if (low < aLow)
				high++;
			result = Int128(high, low);
			return !(u > 0 && result < t || u < 0 && result > t);
#else
			return !__builtin_add_overflow(__int128(t), __int128(u), (__int128*) &result);
#endif
#else
			uint64_t aLow = (uint64_t) t.Low64();
			uint64_t bLow = (uint64_t) u.Low64();
			uint64_t low = aLow + bLow;
			int64_t high = (int64_t) t.High64() + (int64_t) u.High64();
			if (low < aLow)
				high++;
			result = Int128(high, low);
			return !(u > 0 && result < t || u < 0 && result > t);
#endif
		}

		NODISCARD constexpr static SaturatingStatus AdditionSat(T t, Int128 u,
		                                                        T& result) noexcept {
#if USE_INTRINSICS
#ifdef MSVC
			if (!std::is_constant_evaluated()) {
				uint64_t low;
				uint64_t high;
				auto carry = _addcarry_u64(0, t.Low64(), u.Low64(), &low);
				_addcarry_u64(carry, (int64_t) t.High64(), (int64_t) u.High64(), &high);
				result = Int128((int64_t) high, low);
				if (u > 0 && result < t)
					return Saturating_Overflow;
				if (u < 0 && result > t)
					return Saturating_Underflow;
				return Saturating_NoOverflow;
			}
			uint64_t aLow = (uint64_t) t.Low64();
			uint64_t bLow = (uint64_t) u.Low64();
			uint64_t low  = aLow + bLow;
			int64_t high  = (int64_t) t.High64() + (int64_t) u.High64();
			if (low < aLow)
				high++;
			result = Int128(high, low);
#else
			__builtin_add_overflow(__int128(t), __int128(u), (__int128*) &result);
#endif
#else
			uint64_t aLow = (uint64_t) t.Low64();
			uint64_t bLow = (uint64_t) u.Low64();
			uint64_t low = aLow + bLow;
			int64_t high = (int64_t) t.High64() + (int64_t) u.High64();
			if (low < aLow)
				high++;
			result = Int128(high, low);
#endif
			if (u > 0 && result < t)
				return Saturating_Overflow;
			if (u < 0 && result > t)
				return Saturating_Underflow;
			return Saturating_NoOverflow;
		}

		constexpr static void AdditionThrow(T t, Int128 u, T& result) {
#if USE_INTRINSICS
#ifdef MSVC
			if (!std::is_constant_evaluated()) {
				uint64_t low;
				uint64_t high;
				auto carry = _addcarry_u64(0, t.Low64(), u.Low64(), &low);
				_addcarry_u64(carry, (int64_t) t.High64(), (int64_t) u.High64(), &high);
				result = Int128((int64_t) high, low);
				if (u > 0 && result < t || u < 0 && result > t)
					throw IntegerOverflowException();
				return;
			}
			uint64_t aLow = (uint64_t) t.Low64();
			uint64_t bLow = (uint64_t) u.Low64();
			uint64_t low  = aLow + bLow;
			int64_t high  = (int64_t) t.High64() + (int64_t) u.High64();
			if (low < aLow)
				high++;
			result = Int128(high, low);
#else
			__builtin_add_overflow(__int128(t), __int128(u), (__int128*) &result);
#endif
#else
			uint64_t aLow = (uint64_t) t.Low64();
			uint64_t bLow = (uint64_t) u.Low64();
			uint64_t low = aLow + bLow;
			int64_t high = (int64_t) t.High64() + (int64_t) u.High64();
			if (low < aLow)
				high++;
			result = Int128(high, low);
#endif
			if (u > 0 && result < t || u < 0 && result > t)
				throw IntegerOverflowException();
		}
	};

	template <class T, class U>
	class AdditionHelper<T, U, AdditionState_CastInt128CheckOverflowSafeIntMinMax> {
	   public:
		NODISCARD constexpr static bool Addition(const T& t, const U& u, T& result) noexcept {
			i128 tmp  = 0;
			bool safe = AdditionHelper<i128, i128, AdditionState_CastInt128CheckOverflow>::Addition(
			    (i128) t, (i128) u, tmp);
			result = (T) uint64_t(tmp.Low64());
			if (safe && tmp <= std::numeric_limits<T>::max() &&
			    tmp >= std::numeric_limits<T>::min()) {
				return true;
			}

			return false;
		}

		NODISCARD constexpr static SaturatingStatus AdditionSat(const T& t, const U& u,
		                                                        T& result) noexcept {
			i128 tmp = 0;
			auto status =
			    AdditionHelper<i128, i128, AdditionState_CastInt128CheckOverflow>::AdditionSat(
			        (i128) t, (i128) u, tmp);
			result = (T) uint64_t(tmp.Low64());
			if (status != Saturating_NoOverflow)
				return status;
			if (tmp > std::numeric_limits<T>::max()) {
				return Saturating_Overflow;
			}
			if (tmp < std::numeric_limits<T>::min()) {
				return Saturating_Underflow;
			}

			return Saturating_NoOverflow;
		}

		constexpr static void AdditionThrow(const T& t, const U& u, T& result) {
			i128 tmp = 0;
			AdditionHelper<i128, i128, AdditionState_CastInt128CheckOverflow>::AdditionThrow(
			    (i128) t, (i128) u, tmp);
			result = (T) uint64_t(tmp.Low64());
			if (tmp <= std::numeric_limits<T>::max() && tmp >= std::numeric_limits<T>::min()) {
				return;
			}

			throw IntegerOverflowException();
		}
	};

	template <class T, class U>
	class AdditionHelper<T, U, AdditionState_CastInt128CheckOverflowMax> {
	   public:
		NODISCARD constexpr static bool Addition(const T& t, const U& u, T& result) noexcept {
			return AdditionHelper<i128, i128, AdditionState_CastInt128CheckOverflow>::Addition(
			    (i128) t, (i128) u, result);
		}

		NODISCARD constexpr static SaturatingStatus AdditionSat(const T& t, const U& u,
		                                                        T& result) noexcept {
			return AdditionHelper<i128, i128, AdditionState_CastInt128CheckOverflow>::AdditionSat(
			    (i128) t, (i128) u, result);
		}

		constexpr static void AdditionThrow(const T& t, const U& u, T& result) {
			AdditionHelper<i128, i128, AdditionState_CastInt128CheckOverflow>::AdditionThrow(
			    (i128) t, (i128) u, result);
		}
	};

	template <class T, class U>
	class AdditionHelper<T, U, AdditionState_Int128Uint128> {
	   public:
		NODISCARD constexpr static bool Addition(const T& t, const U& u, T& result) noexcept {
			if (u > INT128_MAX) {
				bool safe1 =
				    AdditionHelper<i128, i128, AdditionState_CastInt128CheckOverflow>::Addition(
				        (i128) t, Int128(u - UInt128(uint64_t(INT64_MAX), UINT64_MAX)), result);
				bool safe2 =
				    AdditionHelper<i128, i128, AdditionState_CastInt128CheckOverflow>::Addition(
				        result, INT128_MAX, result);
				return safe1 && safe2;
			}
			return AdditionHelper<i128, i128, AdditionState_CastInt128CheckOverflow>::Addition(
			    (i128) t, (i128) u, result);
		}

		NODISCARD constexpr static SaturatingStatus AdditionSat(const T& t, const U& u,
		                                                        T& result) noexcept {
			if (u > INT128_MAX) {
				auto status =
				    AdditionHelper<i128, i128, AdditionState_CastInt128CheckOverflow>::AdditionSat(
				        (i128) t, Int128(u - UInt128(uint64_t(INT64_MAX), UINT64_MAX)), result);
				if (status != Saturating_NoOverflow) {
					return status;
				}
				return AdditionHelper<
				    i128, i128, AdditionState_CastInt128CheckOverflow>::AdditionSat(result,
				                                                                    INT128_MAX,
				                                                                    result);
			}
			return AdditionHelper<i128, i128, AdditionState_CastInt128CheckOverflow>::AdditionSat(
			    (i128) t, (i128) u, result);
		}

		constexpr static void AdditionThrow(const T& t, const U& u, T& result) {
			if (u > INT128_MAX) {
				AdditionHelper<i128, i128, AdditionState_CastInt128CheckOverflow>::AdditionThrow(
				    (i128) t, Int128(u - UInt128(uint64_t(INT64_MAX), UINT64_MAX)), result);
				AdditionHelper<i128, i128, AdditionState_CastInt128CheckOverflow>::AdditionThrow(
				    result, INT128_MAX, result);
				return;
			}
			AdditionHelper<i128, i128, AdditionState_CastInt128CheckOverflow>::AdditionThrow(
			    (i128) t, (i128) u, result);
		}
	};

	template <class T, class U>
	class AdditionHelper<T, U, AdditionState_IntUint128> {
	   public:
		NODISCARD constexpr static bool Addition(const T& t, const U& u, T& result) noexcept {
			i128 tmp;
			bool safe =
			    AdditionHelper<i128, u128, AdditionState_Int128Uint128>::Addition((i128) t, u, tmp);
			result = (T) uint64_t(tmp.Low64());
			return safe && tmp >= std::numeric_limits<T>::min() &&
			       tmp <= std::numeric_limits<T>::max();
		}

		NODISCARD constexpr static SaturatingStatus AdditionSat(const T& t, const U& u,
		                                                        T& result) noexcept {
			i128 tmp;
			auto status = AdditionHelper<i128, u128, AdditionState_Int128Uint128>::AdditionSat(
			    (i128) t, u, tmp);
			if (status != Saturating_NoOverflow)
				return status;
			result = (T) uint64_t(tmp.Low64());
			if (tmp < std::numeric_limits<T>::min())
				return Saturating_Underflow;
			if (tmp > std::numeric_limits<T>::max())
				return Saturating_Overflow;
			return Saturating_NoOverflow;
		}

		constexpr static void AdditionThrow(const T& t, const U& u, T& result) {
			i128 tmp;
			AdditionHelper<i128, u128, AdditionState_Int128Uint128>::AdditionThrow((i128) t, u,
			                                                                       tmp);
			result = (T) uint64_t(tmp.Low64());
			if (tmp < std::numeric_limits<T>::min() || tmp > std::numeric_limits<T>::max())
				throw IntegerOverflowException();
		}
	};

	template <class T, class U>
	class SubtractionHelper<T, U, SubtractionState_Uint128Uint> {
	   public:
		NODISCARD constexpr static bool Subtract(UInt128 t, UInt128 u,
		                                         UInt128& result) noexcept {
#if USE_INTRINSICS
#ifdef MSVC
			if (!std::is_constant_evaluated()) {
				uint64_t high;
				uint64_t low;
				auto carry = _subborrow_u64(0, t.Low64(), u.Low64(), &low);
				carry  = _subborrow_u64(carry, t.High64(), u.High64(), &high);
				result = UInt128(high, low);
				return carry == 0;
			}
			uint64_t high = (uint64_t) t.High64() - (uint64_t) u.High64();
			uint64_t low  = (uint64_t) t.Low64() - (uint64_t) u.Low64();
			if (t.Low64() < u.Low64())
				high--;
			result = UInt128(high, low);
			return u <= t;
#else
			return !__builtin_sub_overflow(unsigned __int128(t), unsigned __int128(u),
			                               (unsigned __int128*) &result);
#endif
#else
			uint64_t high = (uint64_t) t.High64() - (uint64_t) u.High64();
			uint64_t low = (uint64_t) t.Low64() - (uint64_t) u.Low64();
			if (t.Low64() < u.Low64())
				high--;
			result = UInt128(high, low);
			return u <= t;
#endif
		}

		NODISCARD constexpr static SaturatingStatus SubtractSat(UInt128 t, UInt128 u,
		                                                        UInt128& result) noexcept {
#if USE_INTRINSICS
#ifdef MSVC
			if (!std::is_constant_evaluated()) {
				uint64_t high;
				uint64_t low;
				auto carry = _subborrow_u64(0, t.Low64(), u.Low64(), &low);
				carry  = _subborrow_u64(carry, t.High64(), u.High64(), &high);
				result = UInt128(high, low);
				return carry ? Saturating_Underflow : Saturating_NoOverflow;
			}
			uint64_t high = (uint64_t) t.High64() - (uint64_t) u.High64();
			uint64_t low  = (uint64_t) t.Low64() - (uint64_t) u.Low64();
			if (t.Low64() < u.Low64())
				high--;
			result = UInt128(high, low);
			return u > t ? Saturating_Underflow : Saturating_NoOverflow;
#else
			return __builtin_sub_overflow(unsigned __int128(t), unsigned __int128(u),
			                              (unsigned __int128*) &result)
			           ? Saturating_Underflow
			           : Saturating_NoOverflow;
#endif
#else
			uint64_t high = (uint64_t) t.High64() - (uint64_t) u.High64();
			uint64_t low = (uint64_t) t.Low64() - (uint64_t) u.Low64();
			if (t.Low64() < u.Low64())
				high--;
			result = UInt128(high, low);
			return u > t ? Saturating_Underflow : Saturating_NoOverflow;
#endif
		}

		constexpr static void SubtractThrow(UInt128 t, UInt128 u, UInt128& result) {
#if USE_INTRINSICS
#ifdef MSVC
			if (!std::is_constant_evaluated()) {
				uint64_t high;
				uint64_t low;
				auto carry = _subborrow_u64(0, t.Low64(), u.Low64(), &low);
				carry  = _subborrow_u64(carry, t.High64(), u.High64(), &high);
				result = UInt128(high, low);
				if (carry)
					throw IntegerOverflowException();
				return;
			}
			uint64_t high = (uint64_t) t.High64() - (uint64_t) u.High64();
			uint64_t low  = (uint64_t) t.Low64() - (uint64_t) u.Low64();
			if (t.Low64() < u.Low64())
				high--;
			result = UInt128(high, low);
			if (u > t)
				throw IntegerOverflowException();
#else
			if (__builtin_sub_overflow(unsigned __int128(t), unsigned __int128(u),
			                           (unsigned __int128*) &result))
				throw IntegerOverflowException();
#endif
#else
			uint64_t high = (uint64_t) t.High64() - (uint64_t) u.High64();
			uint64_t low = (uint64_t) t.Low64() - (uint64_t) u.Low64();
			if (t.Low64() < u.Low64())
				high--;
			result = UInt128(high, low);
			if (u > t)
				throw IntegerOverflowException();
#endif
		}
	};

	template <class T, class U>
	class SubtractionHelper<T, U, SubtractionState_Int128Int> {
	   public:
		NODISCARD constexpr static bool Subtract(Int128 t, Int128 u,
		                                         Int128& result) noexcept {
#if USE_INTRINSICS
#ifdef MSVC
			if (!std::is_constant_evaluated()) {
				uint64_t high;
				uint64_t low;
				auto carry = _subborrow_u64(0, t.Low64(), u.Low64(), &low);
				_subborrow_u64(carry, (int64_t) t.High64(), (int64_t) u.High64(), &high);
				result = Int128((int64_t) high, low);
				return !(u > 0 && result > t || u < 0 && result < t);
			}
			int64_t high = (int64_t) t.High64() - (int64_t) u.High64();
			uint64_t low = (uint64_t) t.Low64() - (uint64_t) u.Low64();
			if (t.Low64() < u.Low64())
				high--;
			result = Int128(high, low);
			return !(u > 0 && result > t || u < 0 && result < t);
#else
			return !__builtin_sub_overflow(__int128(t), __int128(u), (__int128*) &result);
#endif
#else
			int64_t high = (int64_t) t.High64() - (int64_t) u.High64();
			uint64_t low = (uint64_t) t.Low64() - (uint64_t) u.Low64();
			if (t.Low64() < u.Low64())
				high--;
			result = Int128(high, low);
			return !(u > 0 && result > t || u < 0 && result < t);
#endif
		}

		NODISCARD constexpr static SaturatingStatus SubtractSat(Int128 t, Int128 u,
		                                                        Int128& result) noexcept {
#if USE_INTRINSICS
#ifdef MSVC
			if (!std::is_constant_evaluated()) {
				uint64_t high;
				uint64_t low;
				auto carry = _subborrow_u64(0, t.Low64(), u.Low64(), &low);
				_subborrow_u64(carry, (int64_t) t.High64(), (int64_t) u.High64(), &high);
				result = Int128((int64_t) high, low);
				if (u > 0 && result > t)
					return Saturating_Underflow;
				if (u < 0 && result < t)
					return Saturating_Overflow;
				return Saturating_NoOverflow;
			}
			int64_t high = (int64_t) t.High64() - (int64_t) u.High64();
			uint64_t low = (uint64_t) t.Low64() - (uint64_t) u.Low64();
			if (t.Low64() < u.Low64())
				high--;
			result = Int128(high, low);
#else
			__builtin_sub_overflow(__int128(t), __int128(u), (__int128*) &result);
#endif
#else
			int64_t high = (int64_t) t.High64() - (int64_t) u.High64();
			uint64_t low = (uint64_t) t.Low64() - (uint64_t) u.Low64();
			if (t.Low64() < u.Low64())
				high--;
			result = Int128(high, low);
#endif
			if (u > 0 && result > t)
				return Saturating_Underflow;
			if (u < 0 && result < t)
				return Saturating_Overflow;
			return Saturating_NoOverflow;
		}

		constexpr static void SubtractThrow(Int128 t, Int128 u, Int128& result) {
#if USE_INTRINSICS
#ifdef MSVC
			if (!std::is_constant_evaluated()) {
				uint64_t high;
				uint64_t low;
				auto carry = _subborrow_u64(0, t.Low64(), u.Low64(), &low);
				_subborrow_u64(carry, (int64_t) t.High64(), (int64_t) u.High64(), &high);
				result = Int128((int64_t) high, low);
				if (u > 0 && result > t || u < 0 && result < t)
					throw IntegerOverflowException();
				return;
			}
			int64_t high = (int64_t) t.High64() - (int64_t) u.High64();
			uint64_t low = (uint64_t) t.Low64() - (uint64_t) u.Low64();
			if (t.Low64() < u.Low64())
				high--;
			result = Int128(high, low);
			if (u > 0 && result > t || u < 0 && result < t)
				throw IntegerOverflowException();
#else
			if (__builtin_sub_overflow(__int128(t), __int128(u), (__int128*) &result))
				throw IntegerOverflowException();
#endif
#else
			int64_t high = (int64_t) t.High64() - (int64_t) u.High64();
			uint64_t low = (uint64_t) t.Low64() - (uint64_t) u.Low64();
			if (t.Low64() < u.Low64())
				high--;
			result = Int128(high, low);
			if (u > 0 && result > t || u < 0 && result < t)
				throw IntegerOverflowException();
#endif
		}
	};

	template <class T, class U>
	class SubtractionHelper<T, U, SubtractionState_UintUint128> {
	   public:
		NODISCARD constexpr static bool Subtract(const T& t, const U& u, T& result) noexcept {
			u128 tmp;
			bool safe =
			    SubtractionHelper<u128, u128, SubtractionState_Uint128Uint>::Subtract(t, u, tmp);
			result = (T) uint64_t(tmp.Low64());
			return safe;
		}

		NODISCARD constexpr static SaturatingStatus SubtractSat(const T& t, const U& u,
		                                                        T& result) noexcept {
			u128 tmp;
			auto status =
			    SubtractionHelper<u128, u128, SubtractionState_Uint128Uint>::SubtractSat(t, u, tmp);
			result = (T) uint64_t(tmp.Low64());
			return status;
		}

		constexpr static void SubtractThrow(const T& t, const U& u, T& result) {
			u128 tmp;
			SubtractionHelper<u128, u128, SubtractionState_Uint128Uint>::SubtractThrow(t, u, tmp);
			result = (T) uint64_t(tmp.Low64());
		}
	};

	template <class T, class U>
	class SubtractionHelper<T, U, SubtractionState_Uint128Int> {
	   public:
		NODISCARD constexpr static bool Subtract(const T& t, const U& u, T& result) noexcept {
			if (u < 0) {
				return AdditionHelper<u128, u128, AdditionMethod<u128, u128>::method>::Addition(
				    t, AbsValueHelper<T, AbsValueHelper<U, AbsMethodHelper<U>::method>>::Abs(u),
				    result);
			}

			return SubtractionHelper<u128, u128, SubtractionState_Uint128Uint>::Subtract(
			    t, (u128) u, result);
		}

		NODISCARD constexpr static SaturatingStatus SubtractSat(const T& t, const U& u,
		                                                        T& result) noexcept {
			if (u < 0) {
				return AdditionHelper<u128, u128, AdditionMethod<u128, u128>::method>::AdditionSat(
				    t, AbsValueHelper<T, AbsValueHelper<U, AbsMethodHelper<U>::method>>::Abs(u),
				    result);
			}

			return SubtractionHelper<u128, u128, SubtractionState_Uint128Uint>::SubtractSat(
			    t, (u128) u, result);
		}

		constexpr static void SubtractThrow(const T& t, const U& u, T& result) {
			if (u < 0) {
				AdditionHelper<u128, u128, AdditionMethod<u128, u128>::method>::AdditionThrow(
				    t, AbsValueHelper<T, AbsValueHelper<U, AbsMethodHelper<U>::method>>::Abs(u),
				    result);
				return;
			}

			SubtractionHelper<u128, u128, SubtractionState_Uint128Uint>::SubtractThrow(t, (u128) u,
			                                                                           result);
		}
	};

	template <class T, class U>
	class SubtractionHelper<T, U, SubtractionState_UintInt128> {
	   public:
		NODISCARD constexpr static bool Subtract(const T& t, const U& u, T& result) noexcept {
			u128 tmp;
			bool safe =
			    SubtractionHelper<u128, i128, SubtractionState_Uint128Int>::Subtract(t, u, tmp);
			result = (T) uint64_t(tmp.Low64());
			return safe && tmp <= std::numeric_limits<T>::max();
		}

		NODISCARD constexpr static SaturatingStatus SubtractSat(const T& t, const U& u,
		                                                        T& result) noexcept {
			u128 tmp;
			auto status =
			    SubtractionHelper<u128, i128, SubtractionState_Uint128Int>::SubtractSat(t, u, tmp);
			result = (T) uint64_t(tmp.Low64());
			if (status != Saturating_NoOverflow)
				return status;
			if (tmp > std::numeric_limits<T>::max())
				return Saturating_Overflow;
			return status;
		}

		constexpr static void SubtractThrow(const T& t, const U& u, T& result) {
			u128 tmp;
			SubtractionHelper<u128, i128, SubtractionState_Uint128Int>::SubtractThrow(t, u, tmp);
			result = (T) uint64_t(tmp.Low64());
			if (tmp > std::numeric_limits<T>::max())
				throw IntegerOverflowException();
		}
	};

	template <class T, class U>
	class SubtractionHelper<T, U, SubtractionState_IntInt128> {
	   public:
		NODISCARD constexpr static bool Subtract(const T& t, const U& u, T& result) noexcept {
			i128 tmp;
			bool safe =
			    SubtractionHelper<i128, i128, SubtractionState_Int128Int>::Subtract(t, u, tmp);
			result = (T) uint64_t(tmp.Low64());
			return safe && tmp <= std::numeric_limits<T>::max() &&
			       tmp >= std::numeric_limits<T>::min();
		}

		NODISCARD constexpr static SaturatingStatus SubtractSat(const T& t, const U& u,
		                                                        T& result) noexcept {
			i128 tmp;
			auto status =
			    SubtractionHelper<i128, i128, SubtractionState_Int128Int>::SubtractSat(t, u, tmp);
			result = (T) uint64_t(tmp.Low64());
			if (status != Saturating_NoOverflow)
				return status;
			if (tmp > std::numeric_limits<T>::max())
				return Saturating_Overflow;
			if (tmp < std::numeric_limits<T>::min())
				return Saturating_Underflow;
			return status;
		}

		constexpr static void SubtractThrow(const T& t, const U& u, T& result) {
			i128 tmp;
			SubtractionHelper<i128, i128, SubtractionState_Int128Int>::SubtractThrow(t, u, tmp);
			result = (T) uint64_t(tmp.Low64());
			if (tmp > std::numeric_limits<T>::max() || tmp < std::numeric_limits<T>::min())
				throw IntegerOverflowException();
		}
	};

	template <class T, class U>
	class SubtractionHelper<T, U, SubtractionState_Int128Uint> {
	   public:
		NODISCARD constexpr static bool Subtract(const T& t, const U& u, T& result) noexcept {
			return SubtractionHelper<i128, u128, SubtractionMethod<i128, u128>::method>::Subtract(
			    t, u, result);
		}

		NODISCARD constexpr static SaturatingStatus SubtractSat(const T& t, const U& u,
		                                                        T& result) noexcept {
			return SubtractionHelper<i128, u128,
			                         SubtractionMethod<i128, u128>::method>::SubtractSat(t, u,
			                                                                             result);
		}

		constexpr static void SubtractThrow(const T& t, const U& u, T& result) {
			SubtractionHelper<i128, u128, SubtractionMethod<i128, u128>::method>::SubtractThrow(
			    t, u, result);
		}
	};

	template <class T, class U>
	class SubtractionHelper<T, U, SubtractionState_IntUint128> {
	   public:
		NODISCARD constexpr static bool Subtract(const T& t, const U& u, T& result) noexcept {
			i128 tmp;
			bool safe =
			    SubtractionHelper<i128, u128, SubtractionMethod<i128, u128>::method>::Subtract(t, u,
			                                                                                   tmp);
			result = (T) uint64_t(tmp.Low64());
			return safe && tmp >= std::numeric_limits<T>::min();
		}

		NODISCARD constexpr static SaturatingStatus SubtractSat(const T& t, const U& u,
		                                                        T& result) noexcept {
			i128 tmp;
			auto status =
			    SubtractionHelper<i128, u128, SubtractionMethod<i128, u128>::method>::SubtractSat(
			        t, u, tmp);
			result = (T) uint64_t(tmp.Low64());
			if (status != Saturating_NoOverflow)
				return status;
			if (tmp < std::numeric_limits<T>::min())
				return Saturating_Underflow;
			return Saturating_NoOverflow;
		}

		constexpr static void SubtractThrow(const T& t, const U& u, T& result) {
			i128 tmp;
			SubtractionHelper<i128, u128, SubtractionMethod<i128, u128>::method>::SubtractThrow(
			    t, u, tmp);
			result = (T) uint64_t(tmp.Low64());
			if (tmp < std::numeric_limits<T>::min())
				throw IntegerOverflowException();
		}
	};

	template <class T, class U>
	class SubtractionHelper<T, U, SubtractionState_Int128Uint128> {
	   public:
		NODISCARD constexpr static bool Subtract(const T& t, const U& u, T& result) noexcept {
			if (u > INT128_MAX) {
				bool safe1 =
				    SubtractionHelper<i128, i128, SubtractionMethod<i128, i128>::method>::Subtract(
				        (i128) t, Int128(u - UInt128(uint64_t(INT64_MAX), UINT64_MAX)), result);
				bool safe2 =
				    SubtractionHelper<i128, i128, SubtractionMethod<i128, i128>::method>::Subtract(
				        result, INT128_MAX, result);
				return safe1 && safe2;
			}
			return SubtractionHelper<i128, i128, SubtractionMethod<i128, i128>::method>::Subtract(
			    (i128) t, (i128) u, result);
		}

		NODISCARD constexpr static SaturatingStatus SubtractSat(const T& t, const U& u,
		                                                        T& result) noexcept {
			if (u > INT128_MAX) {
				auto status = SubtractionHelper<i128, i128, SubtractionMethod<i128, i128>::method>::
				    SubtractSat((i128) t, Int128(u - UInt128(uint64_t(INT64_MAX), UINT64_MAX)),
				                result);
				if (status != Saturating_NoOverflow)
					return status;
				return SubtractionHelper<
				    i128, i128, SubtractionMethod<i128, i128>::method>::SubtractSat(result,
				                                                                    INT128_MAX,
				                                                                    result);
			}
			return SubtractionHelper<i128, i128,
			                         SubtractionMethod<i128, i128>::method>::SubtractSat((i128) t,
			                                                                             (i128) u,
			                                                                             result);
		}

		constexpr static void SubtractThrow(const T& t, const U& u, T& result) {
			if (u > INT128_MAX) {
				SubtractionHelper<i128, i128, SubtractionMethod<i128, i128>::method>::SubtractThrow(
				    (i128) t, Int128(u - UInt128(uint64_t(INT64_MAX), UINT64_MAX)), result);
				SubtractionHelper<i128, i128, SubtractionMethod<i128, i128>::method>::SubtractThrow(
				    result, INT128_MAX, result);
			}
			SubtractionHelper<i128, i128, SubtractionMethod<i128, i128>::method>::SubtractThrow(
			    (i128) t, (i128) u, result);
		}
	};

	template <class T, class U>
	class DivisionHelper<T, U, DivisionState_Uint128> {
	   public:
		constexpr static SafeIntErrorCode Divide(const T& t, const U& u, T& result) noexcept {
			if (u == 0) {
				result = 0u;
				return SafeInt_DivisionByZero;
			}

			if constexpr (std::numeric_limits<U>::is_signed) {
				if (u < 0) {
					result = 0u;
					return SafeInt_Overflow;
				}
			}

			result = t.Div(u);
			return SafeInt_NoError;
		}

		constexpr static void DivideThrow(const T& t, const U& u, T& result) {
			if constexpr (std::numeric_limits<U>::is_signed) {
				if (u < 0)
					throw IntegerOverflowException();
			}

			result = t.Div(u);
		}
	};

	template <class T, class U>
	class DivisionHelper<T, U, DivisionState_Int128> {
	   public:
		constexpr static SafeIntErrorCode Divide(const T& t, const U& u, T& result) noexcept {
			if (u == 0) {
				result = 0;
				return SafeInt_DivisionByZero;
			}

			if constexpr (std::numeric_limits<U>::is_signed) {
				if (t == INT128_MIN && u == -1) {
					result = INT128_MIN;
					return SafeInt_Overflow;
				}
			}

			result = t.Div(u);
			return SafeInt_NoError;
		}

		constexpr static void DivideThrow(const T& t, const U& u, T& result) {
			if constexpr (std::numeric_limits<U>::is_signed) {
				if (t == INT128_MIN && u == -1)
					throw IntegerOverflowException();
			}

			result = t.Div(u);
		}
	};

	inline CONSTEXPR_MULTIPLY std::tuple<u128, i128> WideningMul128(const i128& lhs,
	                                                                const i128& rhs) noexcept {
		u128 a_low  = lhs.Low64();
		i128 a_high = lhs.High64();
		u128 b_low  = rhs.Low64();
		i128 b_high = rhs.High64();

		u128 res_low  = a_low * b_low;
		i128 res_mid1 = b_high * a_low;
		i128 res_mid2 = a_high * b_low;
		i128 res_high = a_high * b_high;

		u128 mid;
		WrappingAdd(u128(res_mid1.Low64()), res_mid2, mid);
		WrappingAdd(mid, res_low.High64(), mid);

		u128 low = (mid << 64) | res_low.Low64();
		i128 high;
		WrappingAdd(res_high, mid.High64(), high);
		WrappingAdd(high, res_mid1.High64(), high);
		return std::make_tuple(low, high);
	}

	inline CONSTEXPR_MULTIPLY std::tuple<u128, u128> WideningMul128u(const u128& lhs,
	                                                                 const u128& rhs) noexcept {
		u128 a_low  = lhs.Low64();
		u128 a_high = lhs.High64();
		u128 b_low  = rhs.Low64();
		u128 b_high = rhs.High64();

		u128 res_low  = a_low * b_low;
		u128 res_mid1 = a_low * b_high;
		u128 res_mid2 = a_high * b_low;
		u128 res_high = a_high * b_high;

		u128 carry = ((res_low >> 64) + res_mid1.Low64() + res_mid2.Low64()) >> 64;

		u128 low;
		u128 high;
		WrappingAdd(res_mid1 << 64, res_mid2 << 64, low);
		WrappingAdd(low, res_low, low);
		WrappingAdd(res_high, res_mid1.High64(), high);
		WrappingAdd(high, res_mid2.High64(), high);
		WrappingAdd(high, carry, high);
		return std::make_tuple(low, high);
	}

	inline CONSTEXPR_MULTIPLY std::tuple<u128, i128> CarryingMul128(const i128& lhs,
	                                                                const i128& rhs,
	                                                                const i128& carry) noexcept {
		u128 a_low  = lhs.Low64();
		i128 a_high = lhs.High64();
		u128 b_low  = rhs.Low64();
		i128 b_high = rhs.High64();

		u128 res_low  = a_low * b_low;
		i128 res_mid1 = b_high * a_low;
		i128 res_mid2 = a_high * b_low;
		i128 res_high = a_high * b_high;

		u128 mid;
		WrappingAdd(u128(res_mid1.Low64()), res_mid2, mid);
		WrappingAdd(mid, res_low.High64(), mid);

		u128 low = (mid << 64) | res_low.Low64();
		i128 high;
		WrappingAdd(res_high, mid.High64(), high);
		WrappingAdd(high, res_mid1.High64(), high);
		u128 sum;
		WrappingAdd(low, carry, sum);
		if (carry > 0 && sum < low)
			high++;
		if (carry < 0 && sum > low)
			high--;
		return std::make_tuple(sum, high);
	}

	inline CONSTEXPR_MULTIPLY std::tuple<u128, u128> CarryingMul128u(const u128& lhs,
	                                                                 const u128& rhs,
	                                                                 const u128& carry) noexcept {
		u128 a_low  = lhs.Low64();
		u128 a_high = lhs.High64();
		u128 b_low  = rhs.Low64();
		u128 b_high = rhs.High64();

		u128 res_low  = a_low * b_low;
		u128 res_mid1 = a_low * b_high;
		u128 res_mid2 = a_high * b_low;
		u128 res_high = a_high * b_high;

		u128 low_carry = ((res_low >> 64) + res_mid1.Low64() + res_mid2.Low64()) >> 64;

		u128 low;
		u128 high;
		WrappingAdd(res_mid1 << 64, res_mid2 << 64, low);
		WrappingAdd(low, res_low, low);
		WrappingAdd(res_high, res_mid1.High64(), high);
		WrappingAdd(high, res_mid2.High64(), high);
		WrappingAdd(high, low_carry, high);
		u128 sum;
		WrappingAdd(low, carry, sum);
		if (carry > 0 && sum < low)
			high++;
		return std::make_tuple(sum, high);
	}

}  // namespace Builtin
/*
template <>
struct std::_Sign_base<Builtin::UInt128,
                       false> {  // determine whether integral type _Ty is signed or unsigned
    static constexpr bool _Signed   = false;
    static constexpr bool _Unsigned = true;
};

template <>
struct std::_Sign_base<Builtin::Int128,
                       false> {  // determine whether integral type _Ty is signed or unsigned
    static constexpr bool _Signed   = true;
    static constexpr bool _Unsigned = false;
};*/
#ifdef MSVC
#pragma warning(disable : 5285)
#endif
template <>
struct std::make_unsigned<Builtin::UInt128> {  // unsigned partner to _Ty
	using type = Builtin::UInt128;
};

template <>
struct std::make_unsigned<Builtin::Int128> {  // unsigned partner to _Ty
	using type = Builtin::UInt128;
};
template <>
struct std::make_signed<Builtin::UInt128> {  // unsigned partner to _Ty
	using type = Builtin::Int128;
};

template <>
struct std::make_signed<Builtin::Int128> {  // unsigned partner to _Ty
	using type = Builtin::Int128;
};
/*
template <>
class std::numeric_limits<Builtin::UInt128> {
   public:
    static constexpr bool is_specialized    = true;
    static constexpr bool is_signed         = false;
    static constexpr bool is_integer        = true;
    static constexpr bool is_exact          = true;
    static constexpr bool has_infinity      = false;
    static constexpr bool has_quiet_NaN     = false;
    static constexpr bool has_signaling_NaN = false;
    static constexpr std::float_round_style round_style = std::round_toward_zero;
    static constexpr bool is_iec559                     = false;
    static constexpr bool is_bounded                    = true;
    static constexpr bool is_modulo                     = true;
    static constexpr int digits                         = 128;
    static constexpr int digits10                       = 38;
    static constexpr int max_digits10                   = 0;
    static constexpr int radix                          = 2;
    static constexpr int min_exponent                   = 0;
    static constexpr int min_exponent10                 = 0;
    static constexpr int max_exponent                   = 0;
    static constexpr int max_exponent10                 = 0;
    static constexpr bool traps                         = std::numeric_limits<uint64_t>::traps;
    static constexpr bool tinyness_before               = false;*/

constexpr Builtin::UInt128 std::numeric_limits<Builtin::UInt128>::min() { return 0u; }
constexpr Builtin::UInt128 std::numeric_limits<Builtin::UInt128>::lowest() { return 0u; }
constexpr Builtin::UInt128 std::numeric_limits<Builtin::UInt128>::max() { return UINT128_MAX; }
constexpr Builtin::UInt128 std::numeric_limits<Builtin::UInt128>::epsilon() { return 0u; }
constexpr Builtin::UInt128 std::numeric_limits<Builtin::UInt128>::round_error() { return 0u; }
constexpr Builtin::UInt128 std::numeric_limits<Builtin::UInt128>::infinity() { return 0u; }
constexpr Builtin::UInt128 std::numeric_limits<Builtin::UInt128>::quiet_NaN() { return 0u; }
constexpr Builtin::UInt128 std::numeric_limits<Builtin::UInt128>::signaling_NaN() { return 0u; }
constexpr Builtin::UInt128 std::numeric_limits<Builtin::UInt128>::denorm_min() { return 0u; }
//};
/*
template <>
class std::numeric_limits<Builtin::Int128> {
   public:
    static constexpr bool is_specialized    = true;
    static constexpr bool is_signed         = true;
    static constexpr bool is_integer        = true;
    static constexpr bool is_exact          = true;
    static constexpr bool has_infinity      = false;
    static constexpr bool has_quiet_NaN     = false;
    static constexpr bool has_signaling_NaN = false;
    static constexpr std::float_round_style round_style = std::round_toward_zero;
    static constexpr bool is_iec559                     = false;
    static constexpr bool is_bounded                    = true;
    static constexpr bool is_modulo                     = true;
    static constexpr int digits                         = 127;
    static constexpr int digits10                       = 38;
    static constexpr int max_digits10                   = 0;
    static constexpr int radix                          = 2;
    static constexpr int min_exponent                   = 0;
    static constexpr int min_exponent10                 = 0;
    static constexpr int max_exponent                   = 0;
    static constexpr int max_exponent10                 = 0;
    static constexpr bool traps                         = std::numeric_limits<uint64_t>::traps;
    static constexpr bool tinyness_before               = false;*/

constexpr Builtin::Int128 std::numeric_limits<Builtin::Int128>::min() { return INT128_MIN; }
constexpr Builtin::Int128 std::numeric_limits<Builtin::Int128>::lowest() { return INT128_MIN; }
constexpr Builtin::Int128 std::numeric_limits<Builtin::Int128>::max() { return INT128_MAX; }
constexpr Builtin::Int128 std::numeric_limits<Builtin::Int128>::epsilon() { return 0; }
constexpr Builtin::Int128 std::numeric_limits<Builtin::Int128>::round_error() { return 0; }
constexpr Builtin::Int128 std::numeric_limits<Builtin::Int128>::infinity() { return 0; }
constexpr Builtin::Int128 std::numeric_limits<Builtin::Int128>::quiet_NaN() { return 0; }
constexpr Builtin::Int128 std::numeric_limits<Builtin::Int128>::signaling_NaN() { return 0; }
constexpr Builtin::Int128 std::numeric_limits<Builtin::Int128>::denorm_min() { return 0; }
//};

template <class T>
inline constexpr T UnsafeCast(Builtin::Int128 value) noexcept {
	return value.__builtin_UnsafeNarrow<T>();
}
template <class T>
inline constexpr T UnsafeCast(Builtin::UInt128 value) noexcept {
	return value.__builtin_UnsafeNarrow<T>();
}

#ifdef Builtin_OVERFLOW_CHECKS
template <class T, class U>
inline constexpr T UnsafeCast(Builtin::SafeInt<U> value) noexcept {
	if constexpr (std::is_same_v<T, Builtin::UInt128>) {
		if constexpr (std::numeric_limits<U>::is_signed) {
			auto low  = UnsafeCast<Builtin::u64>(value);
			auto high = 0ull;
			if (value < 0)
				high = ~high;
			return Builtin::UInt128(high, low);
		} else {
			return Builtin::UInt128(0ull, UnsafeCast<Builtin::u64>(value));
		}
	} else if constexpr (std::is_same_v<T, Builtin::Int128>) {
		if constexpr (std::numeric_limits<U>::is_signed) {
			auto low  = UnsafeCast<Builtin::u64>(value);
			auto high = 0ll;
			if (value < 0)
				high = ~high;
			return Builtin::Int128(high, low);
		} else {
			return Builtin::Int128(0ull, UnsafeCast<Builtin::u64>(value));
		}
	} else {
		return value.__builtin_UnsafeNarrow<T>();
	}
}
#else
template <class T, class U>
inline constexpr T UnsafeCast(Builtin::FastInt<U> value) noexcept {
	if constexpr (std::is_same_v<T, Builtin::UInt128>) {
		if constexpr (std::numeric_limits<U>::is_signed) {
			auto low = UnsafeCast<Builtin::u64>(value);
			auto high = 0ull;
			if (value < 0)
				high = ~high;
			return Builtin::UInt128(high, low);
		} else {
			return Builtin::UInt128(0ull, UnsafeCast<Builtin::u64>(value));
		}
	} else if constexpr (std::is_same_v<T, Builtin::Int128>) {
		if constexpr (std::numeric_limits<U>::is_signed) {
			auto low = UnsafeCast<Builtin::u64>(value);
			auto high = 0ll;
			if (value < 0)
				high = ~high;
			return Builtin::Int128(high, low);
		} else {
			return Builtin::Int128(0ull, UnsafeCast<Builtin::u64>(value));
		}
	} else {
		return static_cast<T>((U) value);
	}
}
#endif