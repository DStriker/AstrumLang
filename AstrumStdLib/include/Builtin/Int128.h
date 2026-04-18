#pragma once
#include "Integer.h"
#include "StringUtils.h"
#define INT128_MIN CppAdvance::Int128::minValue()
#define INT128_MAX CppAdvance::Int128::maxValue()
#define UINT128_MAX CppAdvance::UInt128::maxValue()

#ifdef MSVC
#if defined(_M_X64) && !defined(_M_ARM64EC)
#include "intrin.h"
#pragma intrinsic(_umul128)
#endif
#endif
#include <cassert>
#include <stdexcept>
#include <xiosbase>

namespace CppAdvance {
	class Int128;
	constexpr uint64_t Int128Low64(Int128 v) noexcept;
	constexpr i64 Int128High64(Int128 v) noexcept;

	class alignas(16) UInt128 {
	   public:
		static constexpr unsigned BYTES = 16;
		static constexpr unsigned BITS  = 128;
		constexpr decltype(auto) __ref() const noexcept { return *this; }

		constexpr UInt128() noexcept : _low(0), _high(0) {}
		constexpr UInt128(u64 high, u64 low) noexcept : _low(low), _high(high) {}
		constexpr explicit UInt128(int value)
		    : _low(static_cast<u64>(value)), _high(value < 0 ? UINT64_MAX : 0u) {}
		constexpr explicit UInt128(long value)
		    : _low(static_cast<u64>(value)), _high(value < 0 ? UINT64_MAX : 0u) {}
		constexpr explicit UInt128(int64_t value)
		    : _low(static_cast<u64>(value)), _high(value < 0 ? UINT64_MAX : 0u) {}
		constexpr UInt128(unsigned value) noexcept : _low(value), _high(0) {}
		constexpr UInt128(unsigned long value) noexcept : _low(value), _high(0) {}
		constexpr UInt128(uint64_t value) noexcept : _low(value), _high(0) {}

		constexpr explicit UInt128(i8 value)
		    : _low(static_cast<u64>(value)), _high(value < 0 ? UINT64_MAX : 0u) {}
		constexpr explicit UInt128(i16 value)
		    : _low(static_cast<u64>(value)), _high(value < 0 ? UINT64_MAX : 0u) {}
		constexpr explicit UInt128(i32 value)
		    : _low(static_cast<u64>(value)), _high(value < 0 ? UINT64_MAX : 0u) {}
		constexpr explicit UInt128(i64 value)
		    : _low(static_cast<u64>(value)), _high(value < 0 ? UINT64_MAX : 0u) {}
		constexpr UInt128(u8 value) noexcept : _low(value), _high(0) {}
		constexpr UInt128(u16 value) noexcept : _low(value), _high(0) {}
		constexpr UInt128(u32 value) noexcept : _low(value), _high(0) {}
		constexpr UInt128(u64 value) noexcept : _low(value), _high(0) {}

		constexpr explicit UInt128(Int128 value);

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

		constexpr UInt128& operator=(unsigned value) noexcept { return *this = UInt128(value); }

		constexpr UInt128& operator=(unsigned long value) noexcept {
			return *this = UInt128(value);
		}

		constexpr UInt128& operator=(uint64_t value) noexcept { return *this = UInt128(value); }

		constexpr UInt128& operator=(u8 value) noexcept { return *this = UInt128(value); }

		constexpr UInt128& operator=(u16 value) noexcept { return *this = UInt128(value); }

		constexpr UInt128& operator=(u32 value) noexcept { return *this = UInt128(value); }

		constexpr UInt128& operator=(u64 value) noexcept { return *this = UInt128(value); }

		// constexpr UInt128& operator=(Int128 value) ;

		constexpr u64 low64() const noexcept { return _low; }

		constexpr u64 high64() const noexcept { return _high; }

		constexpr explicit operator bool() const noexcept { return _low || _high; }

		constexpr explicit operator char() const {
#ifdef CPPADVANCE_OVERFLOW_CHECKS
			if (_high > 0)
				throw IntegerOverflowException();
#endif
			return static_cast<char>(_low);
		}
		constexpr explicit operator signed char() const {
#ifdef CPPADVANCE_OVERFLOW_CHECKS
			if (_high > 0)
				throw IntegerOverflowException();
#endif
			return static_cast<signed char>(_low);
		}
		constexpr explicit operator unsigned char() const {
#ifdef CPPADVANCE_OVERFLOW_CHECKS
			if (_high > 0)
				throw IntegerOverflowException();
#endif
			return static_cast<unsigned char>(_low);
		}
		constexpr explicit operator wchar_t() const {
#ifdef CPPADVANCE_OVERFLOW_CHECKS
			if (_high > 0)
				throw IntegerOverflowException();
#endif
			return static_cast<wchar_t>(_low);
		}
		constexpr explicit operator short() const {
#ifdef CPPADVANCE_OVERFLOW_CHECKS
			if (_high > 0)
				throw IntegerOverflowException();
#endif
			return static_cast<short>(_low);
		}
		constexpr explicit operator unsigned short() const {
#ifdef CPPADVANCE_OVERFLOW_CHECKS
			if (_high > 0)
				throw IntegerOverflowException();
#endif
			return static_cast<unsigned short>(_low);
		}
		constexpr explicit operator int() const {
#ifdef CPPADVANCE_OVERFLOW_CHECKS
			if (_high > 0)
				throw IntegerOverflowException();
#endif
			return static_cast<int>(_low);
		}
		constexpr explicit operator unsigned() const {
#ifdef CPPADVANCE_OVERFLOW_CHECKS
			if (_high > 0)
				throw IntegerOverflowException();
#endif
			return static_cast<unsigned>(_low);
		}
		constexpr explicit operator long() const {
#ifdef CPPADVANCE_OVERFLOW_CHECKS
			if (_high > 0)
				throw IntegerOverflowException();
#endif
			return static_cast<long>(_low);
		}
		constexpr explicit operator unsigned long() const {
#ifdef CPPADVANCE_OVERFLOW_CHECKS
			if (_high > 0)
				throw IntegerOverflowException();
#endif
			return static_cast<unsigned long>(_low);
		}
		constexpr explicit operator int64_t() const {
#ifdef CPPADVANCE_OVERFLOW_CHECKS
			if (_high > 0)
				throw IntegerOverflowException();
#endif
			return static_cast<int64_t>(_low);
		}
		constexpr explicit operator uint64_t() const {
#ifdef CPPADVANCE_OVERFLOW_CHECKS
			if (_high > 0)
				throw IntegerOverflowException();
#endif
			return _low;
		}

		constexpr explicit operator i8() const {
#ifdef CPPADVANCE_OVERFLOW_CHECKS
			if (_high > 0)
				throw IntegerOverflowException();
#endif
			return static_cast<signed char>(_low);
		}
		constexpr explicit operator u8() const {
#ifdef CPPADVANCE_OVERFLOW_CHECKS
			if (_high > 0)
				throw IntegerOverflowException();
#endif
			return static_cast<unsigned char>(_low);
		}
		constexpr explicit operator i16() const {
#ifdef CPPADVANCE_OVERFLOW_CHECKS
			if (_high > 0)
				throw IntegerOverflowException();
#endif
			return static_cast<short>(_low);
		}
		constexpr explicit operator u16() const {
#ifdef CPPADVANCE_OVERFLOW_CHECKS
			if (_high > 0)
				throw IntegerOverflowException();
#endif
			return static_cast<unsigned short>(_low);
		}
		constexpr explicit operator i32() const {
#ifdef CPPADVANCE_OVERFLOW_CHECKS
			if (_high > 0)
				throw IntegerOverflowException();
#endif
			return static_cast<int>(_low);
		}
		constexpr explicit operator u32() const {
#ifdef CPPADVANCE_OVERFLOW_CHECKS
			if (_high > 0)
				throw IntegerOverflowException();
#endif
			return static_cast<unsigned>(_low);
		}
		constexpr explicit operator i64() const {
#ifdef CPPADVANCE_OVERFLOW_CHECKS
			if (_high > 0)
				throw IntegerOverflowException();
#endif
			return static_cast<int64_t>(_low);
		}
		constexpr explicit operator u64() const {
#ifdef CPPADVANCE_OVERFLOW_CHECKS
			if (_high > 0)
				throw IntegerOverflowException();
#endif
			return _low;
		}
		constexpr explicit operator float() const noexcept {
			constexpr float pow_2_64 = 18446744073709551616.0f;
			return static_cast<float>((uint64_t) _low) +
			       static_cast<float>((uint64_t) _high) * pow_2_64;
		}
		constexpr explicit operator double() const noexcept {
			constexpr double pow_2_64 = 18446744073709551616.0;
			return static_cast<double>((uint64_t) _low) +
			       static_cast<double>((uint64_t) _high) * pow_2_64;
		}
		constexpr explicit operator long double() const noexcept {
			constexpr long double pow_2_64 = 18446744073709551616.0L;
			return static_cast<long double>((uint64_t) _low) +
			       static_cast<long double>((uint64_t) _high) * pow_2_64;
		}

		static constexpr UInt128 minValue() noexcept { return UInt128(0); }

		static constexpr UInt128 maxValue() noexcept { return UInt128(UINT64_MAX, UINT64_MAX); }

		template <class OtherT>
		constexpr UInt128 operator<<(OtherT amount) const requires(std::is_integral_v<OtherT>) {
			return amount >= 64 ? UInt128(_low << (amount - 64), 0u)
			       : amount == 0
			           ? *this
			           : UInt128((_high << amount) | (_low >> (64 - amount)), _low << amount);
		}

		constexpr UInt128 operator<<(i8 bits) const { return operator<<((unsigned) bits); }

		constexpr UInt128 operator<<(i16 bits) const { return operator<<((unsigned) bits); }

		constexpr UInt128 operator<<(i32 bits) const { return operator<<((unsigned) bits); }

		constexpr UInt128 operator<<(i64 bits) const { return operator<<((unsigned) bits); }

		constexpr UInt128 operator<<(u8 bits) const { return operator<<((unsigned) bits); }

		constexpr UInt128 operator<<(u16 bits) const { return operator<<((unsigned) bits); }

		constexpr UInt128 operator<<(u32 bits) const { return operator<<((unsigned) bits); }

		constexpr UInt128 operator<<(u64 bits) const { return operator<<((unsigned) bits); }

		template <class OtherT>
		friend constexpr OtherT operator<<(OtherT lhs,
		                                   UInt128 rhs) requires(std::is_integral_v<OtherT>) {
			return lhs << (OtherT) rhs;
		}

		friend constexpr i8 operator<<(i8 lhs, UInt128 rhs) { return lhs << (i8) rhs; }

		friend constexpr i16 operator<<(i16 lhs, UInt128 rhs) { return lhs << (i16) rhs; }

		friend constexpr i32 operator<<(i32 lhs, UInt128 rhs) { return lhs << (i32) rhs; }

		friend constexpr i64 operator<<(i64 lhs, UInt128 rhs) { return lhs << (i64) rhs; }

		friend constexpr u8 operator<<(u8 lhs, UInt128 rhs) { return lhs << (u8) rhs; }

		friend constexpr u16 operator<<(u16 lhs, UInt128 rhs) { return lhs << (u16) rhs; }

		friend constexpr u32 operator<<(u32 lhs, UInt128 rhs) { return lhs << (u32) rhs; }

		friend constexpr u64 operator<<(u64 lhs, UInt128 rhs) { return lhs << (u64) rhs; }

		template <class OtherT>
		constexpr UInt128 operator>>(OtherT amount) const requires(std::is_integral_v<OtherT>) {
			return amount >= 64 ? UInt128(0u, _high >> (amount - 64))
			       : amount == 0
			           ? *this
			           : UInt128(_high >> amount, (_low >> amount) | (_high << (64 - amount)));
		}

		constexpr UInt128 operator>>(i8 bits) const { return operator>>((unsigned) bits); }

		constexpr UInt128 operator>>(i16 bits) const { return operator>>((unsigned) bits); }

		constexpr UInt128 operator>>(i32 bits) const { return operator>>((unsigned) bits); }

		constexpr UInt128 operator>>(i64 bits) const { return operator>>((unsigned) bits); }

		constexpr UInt128 operator>>(u8 bits) const { return operator>>((unsigned) bits); }

		constexpr UInt128 operator>>(u16 bits) const { return operator>>((unsigned) bits); }

		constexpr UInt128 operator>>(u32 bits) const { return operator>>((unsigned) bits); }

		constexpr UInt128 operator>>(u64 bits) const { return operator>>((unsigned) bits); }

		template <class OtherT>
		friend constexpr OtherT operator>>(OtherT lhs,
		                                   UInt128 rhs) requires(std::is_integral_v<OtherT>) {
			return lhs >> (OtherT) rhs;
		}

		friend constexpr i8 operator>>(i8 lhs, UInt128 rhs) { return lhs >> (i8) rhs; }

		friend constexpr i16 operator>>(i16 lhs, UInt128 rhs) { return lhs >> (i16) rhs; }

		friend constexpr i32 operator>>(i32 lhs, UInt128 rhs) { return lhs >> (i32) rhs; }

		friend constexpr i64 operator>>(i64 lhs, UInt128 rhs) { return lhs >> (i64) rhs; }

		friend constexpr u8 operator>>(u8 lhs, UInt128 rhs) { return lhs >> (u8) rhs; }

		friend constexpr u16 operator>>(u16 lhs, UInt128 rhs) { return lhs >> (u16) rhs; }

		friend constexpr u32 operator>>(u32 lhs, UInt128 rhs) { return lhs >> (u32) rhs; }

		friend constexpr u64 operator>>(u64 lhs, UInt128 rhs) { return lhs >> (u64) rhs; }

		constexpr UInt128 operator+(UInt128 rhs) const {
			return UInt128::addResult(UInt128(_high + rhs._high, _low + rhs._low), *this);
		}
		template <typename OtherT>
		constexpr UInt128 checkedAdd(OtherT rhs) const {
			if (rhs < 0) {
				const auto rhs128 = UInt128(-rhs);
				return UInt128::substractResult(UInt128(_high - rhs128._high, _low - rhs128._low),
				                                *this, rhs128);
			}
			const auto rhs128 = UInt128(rhs);
			return UInt128::addResult(UInt128(_high + rhs128._high, _low + rhs128._low), *this);
		}

		constexpr UInt128 operator+(i8 rhs) const { return checkedAdd(rhs); }

		constexpr UInt128 operator+(i16 rhs) const { return checkedAdd(rhs); }

		constexpr UInt128 operator+(i32 rhs) const { return checkedAdd(rhs); }

		constexpr UInt128 operator+(i64 rhs) const { return checkedAdd(rhs); }

		constexpr UInt128 operator+(u8 rhs) const { return operator+(UInt128(rhs)); }

		constexpr UInt128 operator+(u16 rhs) const { return operator+(UInt128(rhs)); }

		constexpr UInt128 operator+(u32 rhs) const { return operator+(UInt128(rhs)); }

		constexpr UInt128 operator+(u64 rhs) const { return operator+(UInt128(rhs)); }

		template <typename OtherT>
		constexpr UInt128 operator+(OtherT rhs) const requires(std::is_integral_v<OtherT>) {
			if constexpr (std::numeric_limits<OtherT>::is_signed) {
				return checkedAdd(rhs);
			}
			return operator+(UInt128(rhs));
		}

		template <typename OtherT>
		friend constexpr UInt128 operator+(OtherT lhs,
		                                   UInt128 rhs) requires(std::is_integral_v<OtherT>) {
			return rhs + lhs;
		}

		friend constexpr UInt128 operator+(i8 lhs, UInt128 rhs) { return rhs + lhs; }

		friend constexpr UInt128 operator+(i16 lhs, UInt128 rhs) { return rhs + lhs; }

		friend constexpr UInt128 operator+(i32 lhs, UInt128 rhs) { return rhs + lhs; }

		friend constexpr UInt128 operator+(i64 lhs, UInt128 rhs) { return rhs + lhs; }

		friend constexpr UInt128 operator+(u8 lhs, UInt128 rhs) { return rhs + lhs; }

		friend constexpr UInt128 operator+(u16 lhs, UInt128 rhs) { return rhs + lhs; }

		friend constexpr UInt128 operator+(u32 lhs, UInt128 rhs) { return rhs + lhs; }

		friend constexpr UInt128 operator+(u64 lhs, UInt128 rhs) { return rhs + lhs; }

		constexpr UInt128 operator-(UInt128 rhs) const {
			return UInt128::substractResult(UInt128(_high - rhs._high, _low - rhs._low), *this,
			                                rhs);
		}
		template <typename OtherT>
		constexpr UInt128 checkedSub(OtherT rhs) const {
			if (rhs < 0) {
				const auto rhs128 = UInt128(-rhs);
				return UInt128::addResult(UInt128(_high + rhs128._high, _low + rhs128._low), *this);
			}
			const UInt128 _rhs(rhs);
			return UInt128::substractResult(UInt128(_high - _rhs._high, _low - _rhs._low), *this,
			                                _rhs);
		}

		constexpr UInt128 operator-(i8 rhs) const { return checkedSub(rhs); }

		constexpr UInt128 operator-(i16 rhs) const { return checkedSub(rhs); }

		constexpr UInt128 operator-(i32 rhs) const { return checkedSub(rhs); }

		constexpr UInt128 operator-(i64 rhs) const { return checkedSub(rhs); }

		constexpr UInt128 operator-(u8 rhs) const { return operator-(UInt128(rhs)); }

		constexpr UInt128 operator-(u16 rhs) const { return operator-(UInt128(rhs)); }

		constexpr UInt128 operator-(u32 rhs) const { return operator-(UInt128(rhs)); }

		constexpr UInt128 operator-(u64 rhs) const { return operator-(UInt128(rhs)); }

		template <typename OtherT>
		constexpr UInt128 operator-(OtherT rhs) const requires(std::is_integral_v<OtherT>) {
			if constexpr (std::numeric_limits<OtherT>::is_signed) {
				return checkedSub(rhs);
			}
			return operator-(UInt128(rhs));
		}

		template <typename OtherT>
		friend constexpr OtherT operator-(OtherT lhs,
		                                  UInt128 rhs) requires(std::is_integral_v<OtherT>) {
			if (lhs < 0)
				return static_cast<OtherT>(i64(lhs) - i64(rhs));
			return static_cast<OtherT>(UInt128(lhs) - rhs);
		}

		friend constexpr i8 operator-(i8 lhs, UInt128 rhs) { return lhs - (i8) rhs; }

		friend constexpr i16 operator-(i16 lhs, UInt128 rhs) { return lhs - (i16) rhs; }

		friend constexpr i32 operator-(i32 lhs, UInt128 rhs) { return lhs - (i32) rhs; }

		friend constexpr i64 operator-(i64 lhs, UInt128 rhs) { return lhs - (i64) rhs; }

		friend constexpr u8 operator-(u8 lhs, UInt128 rhs) { return lhs - (u8) rhs; }

		friend constexpr u16 operator-(u16 lhs, UInt128 rhs) { return lhs - (u16) rhs; }

		friend constexpr u32 operator-(u32 lhs, UInt128 rhs) { return lhs - (u32) rhs; }

		friend constexpr u64 operator-(u64 lhs, UInt128 rhs) { return lhs - (u64) rhs; }

		/*template<typename OtherT> requires (!std::same_as<std::decay_t<OtherT>, UInt128>)
		    friend constexpr OtherT operator-(OtherT lhs, UInt128 rhs) {
		    if (lhs < 0) {
		        return lhs - (OtherT)rhs;
		    }
		    UInt128 _lhs(lhs);
		    return (OtherT)UInt128::substractResult(UInt128(_lhs._high - rhs._high, _lhs._low -
		rhs._low), _lhs, rhs);
		}*/
		inline UInt128 operator*(UInt128 rhs) const {
#if defined(_MSC_VER) && defined(_M_X64) && !defined(_M_ARM64EC)
			uint64_t carry;
			const uint64_t low = _umul128(_low, rhs._low, &carry);
			return UInt128(_low * rhs._high + _high * rhs._low + carry, low);
#else
			uint64_t a32   = _low >> 32;
			uint64_t a00   = _low & 0xffffffff;
			uint64_t b32   = rhs._low >> 32;
			uint64_t b00   = rhs._low & 0xffffffff;
			UInt128 result = UInt128(_high * rhs._low + _low * rhs._high + a32 * b32, a00 * b00);
			result += UInt128(a32 * b00) << 32;
			result += UInt128(a00 * b32) << 32;
			return result;
#endif  // defined(_MSC_VER) && defined(_M_X64) && !defined(_M_ARM64EC)
		}

		UInt128 operator*(i8 rhs) const { return operator*(UInt128(rhs)); }

		UInt128 operator*(i16 rhs) const { return operator*(UInt128(rhs)); }

		UInt128 operator*(i32 rhs) const { return operator*(UInt128(rhs)); }

		UInt128 operator*(i64 rhs) const { return operator*(UInt128(rhs)); }

		UInt128 operator*(u8 rhs) const { return operator*(UInt128(rhs)); }

		UInt128 operator*(u16 rhs) const { return operator*(UInt128(rhs)); }

		UInt128 operator*(u32 rhs) const { return operator*(UInt128(rhs)); }

		UInt128 operator*(u64 rhs) const { return operator*(UInt128(rhs)); }

		template <typename OtherT>
		UInt128 operator*(OtherT rhs) const requires(std::is_integral_v<OtherT>) {
			return operator*(UInt128(rhs));
		}

		template <typename OtherT>
		friend inline UInt128 operator*(OtherT lhs,
		                                UInt128 rhs) requires(std::is_integral_v<OtherT>) {
			return rhs * lhs;
		}

		friend inline UInt128 operator*(i8 lhs, UInt128 rhs) { return rhs * lhs; }

		friend inline UInt128 operator*(i16 lhs, UInt128 rhs) { return rhs * lhs; }

		friend inline UInt128 operator*(i32 lhs, UInt128 rhs) { return rhs * lhs; }

		friend inline UInt128 operator*(i64 lhs, UInt128 rhs) { return rhs * lhs; }

		friend inline UInt128 operator*(u8 lhs, UInt128 rhs) { return rhs * lhs; }

		friend inline UInt128 operator*(u16 lhs, UInt128 rhs) { return rhs * lhs; }

		friend inline UInt128 operator*(u32 lhs, UInt128 rhs) { return rhs * lhs; }

		friend inline UInt128 operator*(u64 lhs, UInt128 rhs) { return rhs * lhs; }

		constexpr UInt128 operator&(UInt128 rhs) const noexcept {
			return UInt128(_high & rhs._high, _low & rhs._low);
		}

		constexpr UInt128 operator&(i8 rhs) const { return operator&(UInt128(rhs)); }

		constexpr UInt128 operator&(i16 rhs) const { return operator&(UInt128(rhs)); }

		constexpr UInt128 operator&(i32 rhs) const { return operator&(UInt128(rhs)); }

		constexpr UInt128 operator&(i64 rhs) const { return operator&(UInt128(rhs)); }

		constexpr UInt128 operator&(u8 rhs) const noexcept { return operator&(UInt128(rhs)); }

		constexpr UInt128 operator&(u16 rhs) const noexcept { return operator&(UInt128(rhs)); }

		constexpr UInt128 operator&(u32 rhs) const noexcept { return operator&(UInt128(rhs)); }

		constexpr UInt128 operator&(u64 rhs) const noexcept { return operator&(UInt128(rhs)); }

		template <typename OtherT>
		constexpr UInt128 operator&(OtherT rhs) const
		    noexcept(!std::numeric_limits<OtherT>::is_signed) requires(std::is_integral_v<OtherT>) {
			return operator&(UInt128(rhs));
		}

		template <typename OtherT>
		friend constexpr OtherT operator&(OtherT lhs,
		                                  UInt128 rhs) requires(std::is_integral_v<OtherT>) {
			return lhs & (OtherT) rhs;
		}

		friend constexpr i8 operator&(i8 lhs, UInt128 rhs) { return lhs & (i8) rhs; }

		friend constexpr i16 operator&(i16 lhs, UInt128 rhs) { return lhs & (i16) rhs; }

		friend constexpr i32 operator&(i32 lhs, UInt128 rhs) { return lhs & (i32) rhs; }

		friend constexpr i64 operator&(i64 lhs, UInt128 rhs) { return lhs & (i64) rhs; }

		friend constexpr u8 operator&(u8 lhs, UInt128 rhs) { return lhs & (u8) rhs; }

		friend constexpr u16 operator&(u16 lhs, UInt128 rhs) { return lhs & (u16) rhs; }

		friend constexpr u32 operator&(u32 lhs, UInt128 rhs) { return lhs & (u32) rhs; }

		friend constexpr u64 operator&(u64 lhs, UInt128 rhs) { return lhs & (u64) rhs; }

		constexpr UInt128 operator|(UInt128 rhs) const noexcept {
			return UInt128(_high | rhs._high, _low | rhs._low);
		}

		constexpr UInt128 operator|(i8 rhs) const { return operator|(UInt128(rhs)); }

		constexpr UInt128 operator|(i16 rhs) const { return operator|(UInt128(rhs)); }

		constexpr UInt128 operator|(i32 rhs) const { return operator|(UInt128(rhs)); }

		constexpr UInt128 operator|(i64 rhs) const { return operator|(UInt128(rhs)); }

		constexpr UInt128 operator|(u8 rhs) const noexcept { return operator|(UInt128(rhs)); }

		constexpr UInt128 operator|(u16 rhs) const noexcept { return operator|(UInt128(rhs)); }

		constexpr UInt128 operator|(u32 rhs) const noexcept { return operator|(UInt128(rhs)); }

		constexpr UInt128 operator|(u64 rhs) const noexcept { return operator|(UInt128(rhs)); }

		template <typename OtherT>
		constexpr UInt128 operator|(OtherT rhs) const
		    noexcept(!std::numeric_limits<OtherT>::is_signed) requires(std::is_integral_v<OtherT>) {
			return operator|(UInt128(rhs));
		}

		template <typename OtherT>
		friend constexpr OtherT operator|(OtherT lhs,
		                                  UInt128 rhs) requires(std::is_integral_v<OtherT>) {
			return lhs | (OtherT) rhs;
		}

		friend constexpr i8 operator|(i8 lhs, UInt128 rhs) { return lhs | (i8) rhs; }

		friend constexpr i16 operator|(i16 lhs, UInt128 rhs) { return lhs | (i16) rhs; }

		friend constexpr i32 operator|(i32 lhs, UInt128 rhs) { return lhs | (i32) rhs; }

		friend constexpr i64 operator|(i64 lhs, UInt128 rhs) { return lhs | (i64) rhs; }

		friend constexpr u8 operator|(u8 lhs, UInt128 rhs) { return lhs | (u8) rhs; }

		friend constexpr u16 operator|(u16 lhs, UInt128 rhs) { return lhs | (u16) rhs; }

		friend constexpr u32 operator|(u32 lhs, UInt128 rhs) { return lhs | (u32) rhs; }

		friend constexpr u64 operator|(u64 lhs, UInt128 rhs) { return lhs | (u64) rhs; }

		constexpr UInt128 operator^(UInt128 rhs) const noexcept {
			return UInt128(_high ^ rhs._high, _low ^ rhs._low);
		}

		constexpr UInt128 operator^(i8 rhs) const { return operator^(UInt128(rhs)); }

		constexpr UInt128 operator^(i16 rhs) const { return operator^(UInt128(rhs)); }

		constexpr UInt128 operator^(i32 rhs) const { return operator^(UInt128(rhs)); }

		constexpr UInt128 operator^(i64 rhs) const { return operator^(UInt128(rhs)); }

		constexpr UInt128 operator^(u8 rhs) const noexcept { return operator^(UInt128(rhs)); }

		constexpr UInt128 operator^(u16 rhs) const noexcept { return operator^(UInt128(rhs)); }

		constexpr UInt128 operator^(u32 rhs) const noexcept { return operator^(UInt128(rhs)); }

		constexpr UInt128 operator^(u64 rhs) const noexcept { return operator^(UInt128(rhs)); }

		template <typename OtherT>
		constexpr UInt128 operator^(OtherT rhs) const
		    noexcept(!std::numeric_limits<OtherT>::is_signed) requires(std::is_integral_v<OtherT>) {
			return operator^(UInt128(rhs));
		}

		template <typename OtherT>
		friend constexpr OtherT operator^(OtherT lhs,
		                                  UInt128 rhs) requires(std::is_integral_v<OtherT>) {
			return lhs ^ (OtherT) rhs;
		}

		friend constexpr i8 operator^(i8 lhs, UInt128 rhs) { return lhs ^ (i8) rhs; }

		friend constexpr i16 operator^(i16 lhs, UInt128 rhs) { return lhs ^ (i16) rhs; }

		friend constexpr i32 operator^(i32 lhs, UInt128 rhs) { return lhs ^ (i32) rhs; }

		friend constexpr i64 operator^(i64 lhs, UInt128 rhs) { return lhs ^ (i64) rhs; }

		friend constexpr u8 operator^(u8 lhs, UInt128 rhs) { return lhs ^ (u8) rhs; }

		friend constexpr u16 operator^(u16 lhs, UInt128 rhs) { return lhs ^ (u16) rhs; }

		friend constexpr u32 operator^(u32 lhs, UInt128 rhs) { return lhs ^ (u32) rhs; }

		friend constexpr u64 operator^(u64 lhs, UInt128 rhs) { return lhs ^ (u64) rhs; }

		constexpr UInt128& operator<<=(int amount) {
			*this = *this << amount;
			return *this;
		}

		constexpr UInt128& operator>>=(int amount) {
			*this = *this >> amount;
			return *this;
		}

		constexpr UInt128& operator+=(UInt128 other) {
			*this = *this + other;
			return *this;
		}

		constexpr UInt128& operator-=(UInt128 other) {
			*this = *this - other;
			return *this;
		}

		UInt128& operator*=(UInt128 other) {
			*this = *this * other;
			return *this;
		}

		CPPADVANCE_DLLEXPORT UInt128 operator/(UInt128 rhs) const;

		UInt128 operator/(i8 rhs) const { return operator/(UInt128(rhs)); }

		UInt128 operator/(i16 rhs) const { return operator/(UInt128(rhs)); }

		UInt128 operator/(i32 rhs) const { return operator/(UInt128(rhs)); }

		UInt128 operator/(i64 rhs) const { return operator/(UInt128(rhs)); }

		UInt128 operator/(u8 rhs) const { return operator/(UInt128(rhs)); }

		UInt128 operator/(u16 rhs) const { return operator/(UInt128(rhs)); }

		UInt128 operator/(u32 rhs) const { return operator/(UInt128(rhs)); }

		UInt128 operator/(u64 rhs) const { return operator/(UInt128(rhs)); }

		template <typename OtherT>
		UInt128 operator/(OtherT rhs) const requires(std::is_integral_v<OtherT>) {
			return operator/(UInt128(rhs));
		}

		template <typename OtherT>
		friend OtherT operator/(OtherT lhs, UInt128 rhs) requires(std::is_integral_v<OtherT>) {
			return lhs / (OtherT) rhs;
		}

		friend inline i8 operator/(i8 lhs, UInt128 rhs) { return lhs / (i8) rhs; }

		friend inline i16 operator/(i16 lhs, UInt128 rhs) { return lhs / (i16) rhs; }

		friend inline i32 operator/(i32 lhs, UInt128 rhs) { return lhs / (i32) rhs; }

		friend inline i64 operator/(i64 lhs, UInt128 rhs) { return lhs / (i64) rhs; }

		friend inline u8 operator/(u8 lhs, UInt128 rhs) { return lhs / (u8) rhs; }

		friend inline u16 operator/(u16 lhs, UInt128 rhs) { return lhs / (u16) rhs; }

		friend inline u32 operator/(u32 lhs, UInt128 rhs) { return lhs / (u32) rhs; }

		friend inline u64 operator/(u64 lhs, UInt128 rhs) { return lhs / (u64) rhs; }

		UInt128& operator/=(UInt128 other) {
			*this = *this / other;
			return *this;
		}

		CPPADVANCE_DLLEXPORT UInt128 operator%(UInt128 rhs) const;

		UInt128 operator%(i8 rhs) const { return operator%(UInt128(rhs)); }

		UInt128 operator%(i16 rhs) const { return operator%(UInt128(rhs)); }

		UInt128 operator%(i32 rhs) const { return operator%(UInt128(rhs)); }

		UInt128 operator%(i64 rhs) const { return operator%(UInt128(rhs)); }

		UInt128 operator%(u8 rhs) const { return operator%(UInt128(rhs)); }

		UInt128 operator%(u16 rhs) const { return operator%(UInt128(rhs)); }

		UInt128 operator%(u32 rhs) const { return operator%(UInt128(rhs)); }

		UInt128 operator%(u64 rhs) const { return operator%(UInt128(rhs)); }

		template <typename OtherT>
		UInt128 operator%(OtherT rhs) const requires(std::is_integral_v<OtherT>) {
			return operator%(UInt128(rhs));
		}

		template <typename OtherT>
		friend OtherT operator%(OtherT lhs, UInt128 rhs) requires(std::is_integral_v<OtherT>) {
			return lhs % (OtherT) rhs;
		}

		friend inline i8 operator%(i8 lhs, UInt128 rhs) { return lhs % (i8) rhs; }

		friend inline i16 operator%(i16 lhs, UInt128 rhs) { return lhs % (i16) rhs; }

		friend inline i32 operator%(i32 lhs, UInt128 rhs) { return lhs % (i32) rhs; }

		friend inline i64 operator%(i64 lhs, UInt128 rhs) { return lhs % (i64) rhs; }

		friend inline u8 operator%(u8 lhs, UInt128 rhs) { return lhs % (u8) rhs; }

		friend inline u16 operator%(u16 lhs, UInt128 rhs) { return lhs % (u16) rhs; }

		friend inline u32 operator%(u32 lhs, UInt128 rhs) { return lhs % (u32) rhs; }

		friend inline u64 operator%(u64 lhs, UInt128 rhs) { return lhs % (u64) rhs; }

		UInt128& operator%=(UInt128 other) {
			*this = *this % other;
			return *this;
		}

		constexpr UInt128& operator&=(UInt128 other) {
			*this = *this & other;
			return *this;
		}

		constexpr UInt128& operator|=(UInt128 other) {
			*this = *this | other;
			return *this;
		}

		constexpr UInt128& operator^=(UInt128 other) {
			*this = *this ^ other;
			return *this;
		}

		constexpr UInt128& operator++() {
			*this += 1u;
			return *this;
		}

		constexpr UInt128& operator--() {
			*this -= 1u;
			return *this;
		}

		constexpr UInt128 operator++(int) {
			UInt128 tmp(*this);
			*this += 1u;
			return tmp;
		}

		constexpr UInt128 operator--(int) {
			UInt128 tmp(*this);
			*this -= 1u;
			return tmp;
		}

		constexpr UInt128& operator+() noexcept { return *this; }

		UInt128 operator-() = delete;

		constexpr UInt128 operator~() const noexcept { return UInt128(~_high, ~_low); }

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
			if (rhs.high64() != 0)
				return false;
			if constexpr (std::numeric_limits<OtherT>::is_signed) {
				if (lhs < 0)
					return false;
			}
			return _low == lhs;
		}

		friend constexpr bool operator==(i8 lhs, UInt128 rhs) noexcept {
			if (rhs.high64() != 0)
				return false;
			if (lhs < 0)
				return false;
			return lhs == rhs.low64();
		}

		friend constexpr bool operator==(i16 lhs, UInt128 rhs) noexcept {
			if (rhs.high64() != 0)
				return false;
			if (lhs < 0)
				return false;
			return lhs == rhs.low64();
		}

		friend constexpr bool operator==(i32 lhs, UInt128 rhs) noexcept {
			if (rhs.high64() != 0)
				return false;
			if (lhs < 0)
				return false;
			return lhs == rhs.low64();
		}

		friend constexpr bool operator==(i64 lhs, UInt128 rhs) noexcept {
			if (rhs.high64() != 0)
				return false;
			if (lhs < 0)
				return false;
			return lhs == rhs.low64();
		}

		friend constexpr bool operator==(u8 lhs, UInt128 rhs) noexcept {
			if (rhs.high64() != 0)
				return false;
			return lhs == rhs.low64();
		}

		friend constexpr bool operator==(u16 lhs, UInt128 rhs) noexcept {
			if (rhs.high64() != 0)
				return false;
			return lhs == rhs.low64();
		}

		friend constexpr bool operator==(u32 lhs, UInt128 rhs) noexcept {
			if (rhs.high64() != 0)
				return false;
			return lhs == rhs.low64();
		}

		friend constexpr bool operator==(u64 lhs, UInt128 rhs) noexcept {
			if (rhs.high64() != 0)
				return false;
			return lhs == rhs.low64();
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
			if (rhs.high64() != 0)
				return true;
			if constexpr (std::numeric_limits<OtherT>::is_signed) {
				if (lhs < 0)
					return true;
			}
			return _low != lhs;
		}

		friend constexpr bool operator!=(i8 lhs, UInt128 rhs) noexcept {
			if (rhs.high64() != 0)
				return true;
			if (lhs < 0)
				return true;
			return lhs != rhs.low64();
		}

		friend constexpr bool operator!=(i16 lhs, UInt128 rhs) noexcept {
			if (rhs.high64() != 0)
				return true;
			if (lhs < 0)
				return true;
			return lhs != rhs.low64();
		}

		friend constexpr bool operator!=(i32 lhs, UInt128 rhs) noexcept {
			if (rhs.high64() != 0)
				return true;
			if (lhs < 0)
				return true;
			return lhs != rhs.low64();
		}

		friend constexpr bool operator!=(i64 lhs, UInt128 rhs) noexcept {
			if (rhs.high64() != 0)
				return true;
			if (lhs < 0)
				return true;
			return lhs != rhs.low64();
		}

		friend constexpr bool operator!=(u8 lhs, UInt128 rhs) noexcept {
			if (rhs.high64() != 0)
				return true;
			return lhs != rhs.low64();
		}

		friend constexpr bool operator!=(u16 lhs, UInt128 rhs) noexcept {
			if (rhs.high64() != 0)
				return true;
			return lhs != rhs.low64();
		}

		friend constexpr bool operator!=(u32 lhs, UInt128 rhs) noexcept {
			if (rhs.high64() != 0)
				return true;
			return lhs != rhs.low64();
		}

		friend constexpr bool operator!=(u64 lhs, UInt128 rhs) noexcept {
			if (rhs.high64() != 0)
				return true;
			return lhs != rhs.low64();
		}

		constexpr std::strong_ordering operator<=>(UInt128 rhs) const noexcept {
			if (const uint64_t lhsHigh = _high, rhsHigh = rhs._high; lhsHigh < rhsHigh) {
				return std::strong_ordering::less;
			} else if (lhsHigh > rhsHigh) {
				return std::strong_ordering::greater;
			}

			if (const uint64_t lhsLow = _low, rhsLow = rhs._low; lhsLow < rhsLow) {
				return std::strong_ordering::less;
			} else if (lhsLow > rhsLow) {
				return std::strong_ordering::greater;
			}
			return std::strong_ordering::equal;
		}

		constexpr auto operator<=>(i8 rhs) const noexcept {
			if (_high != 0)
				return std::strong_ordering::greater;
			if (rhs < 0)
				return std::strong_ordering::greater;
			return _low <=> rhs;
		}

		constexpr auto operator<=>(i16 rhs) const noexcept {
			if (_high != 0)
				return std::strong_ordering::greater;
			if (rhs < 0)
				return std::strong_ordering::greater;
			return _low <=> rhs;
		}

		constexpr auto operator<=>(i32 rhs) const noexcept {
			if (_high != 0)
				return std::strong_ordering::greater;
			if (rhs < 0)
				return std::strong_ordering::greater;
			return _low <=> rhs;
		}

		constexpr auto operator<=>(i64 rhs) const noexcept {
			if (_high != 0)
				return std::strong_ordering::greater;
			if (rhs < 0)
				return std::strong_ordering::greater;
			return _low <=> rhs;
		}

		constexpr auto operator<=>(u8 rhs) const noexcept {
			if (_high != 0)
				return std::strong_ordering::greater;
			return _low <=> rhs;
		}

		constexpr auto operator<=>(u16 rhs) const noexcept {
			if (_high != 0)
				return std::strong_ordering::greater;
			return _low <=> rhs;
		}

		constexpr auto operator<=>(u32 rhs) const noexcept {
			if (_high != 0)
				return std::strong_ordering::greater;
			return _low <=> rhs;
		}

		constexpr auto operator<=>(u64 rhs) const noexcept {
			if (_high != 0)
				return std::strong_ordering::greater;
			return _low <=> rhs;
		}

		template <typename OtherT>
		constexpr auto operator<=>(OtherT rhs) const noexcept requires(std::is_integral_v<OtherT>) {
			if (_high != 0)
				return std::strong_ordering::greater;
			if constexpr (std::numeric_limits<OtherT>::is_signed) {
				if (rhs < 0)
					return std::strong_ordering::greater;
			}
			return _low <=> rhs;
		}

		template <typename OtherT>
		friend constexpr auto operator<=>(OtherT lhs, UInt128 rhs) noexcept
		    requires(std::is_integral_v<OtherT>) {
			if (rhs.high64() != 0)
				return std::strong_ordering::less;
			if constexpr (std::numeric_limits<OtherT>::is_signed) {
				if (lhs < 0)
					return std::strong_ordering::less;
			}
			return lhs <=> rhs.low64();
		}

		friend constexpr auto operator<=>(i8 lhs, UInt128 rhs) noexcept {
			if (rhs.high64() != 0)
				return std::strong_ordering::less;
			if (lhs < 0)
				return std::strong_ordering::less;
			return lhs <=> rhs.low64();
		}

		friend constexpr auto operator<=>(i16 lhs, UInt128 rhs) noexcept {
			if (rhs.high64() != 0)
				return std::strong_ordering::less;
			if (lhs < 0)
				return std::strong_ordering::less;
			return lhs <=> rhs.low64();
		}

		friend constexpr auto operator<=>(i32 lhs, UInt128 rhs) noexcept {
			if (rhs.high64() != 0)
				return std::strong_ordering::less;
			if (lhs < 0)
				return std::strong_ordering::less;
			return lhs <=> rhs.low64();
		}

		friend constexpr auto operator<=>(i64 lhs, UInt128 rhs) noexcept {
			if (rhs.high64() != 0)
				return std::strong_ordering::less;
			if (lhs < 0)
				return std::strong_ordering::less;
			return lhs <=> rhs.low64();
		}

		friend constexpr auto operator<=>(u8 lhs, UInt128 rhs) noexcept {
			if (rhs.high64() != 0)
				return std::strong_ordering::less;
			return lhs <=> rhs.low64();
		}

		friend constexpr auto operator<=>(u16 lhs, UInt128 rhs) noexcept {
			if (rhs.high64() != 0)
				return std::strong_ordering::less;
			return lhs <=> rhs.low64();
		}

		friend constexpr auto operator<=>(u32 lhs, UInt128 rhs) noexcept {
			if (rhs.high64() != 0)
				return std::strong_ordering::less;
			return lhs <=> rhs.low64();
		}

		friend constexpr auto operator<=>(u64 lhs, UInt128 rhs) noexcept {
			if (rhs.high64() != 0)
				return std::strong_ordering::less;
			return lhs <=> rhs.low64();
		}

		//************************************
		// Returns absolute value of number (without sign)
		//************************************
		constexpr UInt128 abs() const noexcept { return *this; }

		constexpr static UInt128 Parse(std::string_view input) {
			UInt128 tmp;
			auto inputEnd = input.data() + input.size();
			auto ret      = FromChars(input.data(), inputEnd, tmp);
#ifdef CPPADVANCE_OVERFLOW_CHECKS
			if (ret.ec == std::errc::result_out_of_range)
				throw IntegerOverflowException();
#endif
			return tmp;
		}

		CPPADVANCE_DLLEXPORT static std::string ToFormattedString(UInt128 v,
		                                                          std::ios_base::fmtflags flags);

		std::string toString() const {
			return ToFormattedString(*this, static_cast<std::ios_base::fmtflags>(0x0200));
		}

	   private:
		static constexpr UInt128 addResult(UInt128 result, UInt128 lhs) {
			return (result._low < lhs._low) ? UInt128(result._high + 1, result._low) : result;
		}

		static constexpr UInt128 substractResult(UInt128 result, UInt128 lhs, UInt128 rhs) {
			return (lhs._low < rhs._low) ? UInt128(result._high - 1, result._low) : result;
		}

		uint64_t _low;
		u64 _high;
	};

	inline constexpr uint64_t UInt128Low64(UInt128 v) noexcept { return v.low64(); }
	inline constexpr u64 UInt128High64(UInt128 v) noexcept { return v.high64(); }

	namespace __Details {
		inline constexpr int64_t BitCastToSigned(uint64_t v) {
			return v & (uint64_t {1} << 63) ? ~static_cast<int64_t>(~v) : static_cast<int64_t>(v);
		}
	}  // namespace __Details

	class alignas(16) Int128 {
	   public:
		static constexpr unsigned BYTES = 16;
		static constexpr unsigned BITS  = 128;
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

		constexpr explicit Int128(UInt128 value)
		    : _low(value.low64()), _high(static_cast<int64_t>((uint64_t) value.high64())) {
#ifdef CPPADVANCE_OVERFLOW_CHECKS
			if (value > UInt128(INT128_MAX))
				throw IntegerOverflowException();
#endif
		}

		// API explicit Int128(float value);
		// API explicit Int128(double value);
		// explicit Int128(Float32 value) : Int128((float)value) {}
		// explicit Int128(Float64 value) : Int128((double)value) {}

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

		constexpr Int128& operator=(UInt128 value) { return *this = Int128(value); }

		constexpr uint64_t low64() const noexcept { return _low; }

		constexpr i64 high64() const noexcept { return _high; }

		constexpr explicit operator bool() const noexcept { return _low || _high; }

		constexpr explicit operator char() const {
			return static_cast<char>(static_cast<int64_t>(*this));
		}
		constexpr explicit operator signed char() const {
			return static_cast<signed char>(static_cast<int64_t>(*this));
		}
		constexpr explicit operator unsigned char() const {
#ifdef CPPADVANCE_OVERFLOW_CHECKS
			if (_high != 0)
				throw IntegerOverflowException();
#endif
			return static_cast<unsigned char>(_low);
		}
		constexpr explicit operator wchar_t() const {
			return static_cast<wchar_t>(static_cast<int64_t>(*this));
		}
		constexpr explicit operator short() const {
			return static_cast<short>(static_cast<int64_t>(*this));
		}
		constexpr explicit operator unsigned short() const {
#ifdef CPPADVANCE_OVERFLOW_CHECKS
			if (_high != 0)
				throw IntegerOverflowException();
#endif
			return static_cast<unsigned short>(_low);
		}
		constexpr explicit operator int() const {
			return static_cast<int>(static_cast<int64_t>(*this));
		}
		constexpr explicit operator unsigned() const {
#ifdef CPPADVANCE_OVERFLOW_CHECKS
			if (_high != 0)
				throw IntegerOverflowException();
#endif
			return static_cast<unsigned>(_low);
		}
		constexpr explicit operator long() const {
			return static_cast<long>(static_cast<int64_t>(*this));
		}
		constexpr explicit operator unsigned long() const {
#ifdef CPPADVANCE_OVERFLOW_CHECKS
			if (_high != 0)
				throw IntegerOverflowException();
#endif
			return static_cast<unsigned long>(_low);
		}
		constexpr explicit operator int64_t() const {
#ifdef CPPADVANCE_OVERFLOW_CHECKS
			if (*this < std::numeric_limits<int64_t>::min() ||
			    *this > std::numeric_limits<int64_t>::max())
				throw IntegerOverflowException();
#endif
			return __Details::BitCastToSigned(_low);
		}
		constexpr explicit operator uint64_t() const {
#ifdef CPPADVANCE_OVERFLOW_CHECKS
			if (_high != 0)
				throw IntegerOverflowException();
#endif
			return _low;
		}
		constexpr explicit operator i8() const {
			return static_cast<signed char>(static_cast<int64_t>(*this));
		}
		constexpr explicit operator u8() const {
#ifdef CPPADVANCE_OVERFLOW_CHECKS
			if (_high != 0)
				throw IntegerOverflowException();
#endif
			return static_cast<unsigned char>(_low);
		}
		constexpr explicit operator i16() const {
			return static_cast<short>(static_cast<int64_t>(*this));
		}
		constexpr explicit operator u16() const {
#ifdef CPPADVANCE_OVERFLOW_CHECKS
			if (_high != 0)
				throw IntegerOverflowException();
#endif
			return static_cast<unsigned short>(_low);
		}
		constexpr explicit operator i32() const {
			return static_cast<int>(static_cast<int64_t>(*this));
		}
		constexpr explicit operator u32() const {
#ifdef CPPADVANCE_OVERFLOW_CHECKS
			if (_high != 0)
				throw IntegerOverflowException();
#endif
			return static_cast<unsigned>(_low);
		}
		constexpr explicit operator i64() const {
#ifdef CPPADVANCE_OVERFLOW_CHECKS
			if (*this < std::numeric_limits<int64_t>::min() ||
			    *this > std::numeric_limits<int64_t>::max())
				throw IntegerOverflowException();
#endif
			return __Details::BitCastToSigned(_low);
		}
		constexpr explicit operator u64() const {
#ifdef CPPADVANCE_OVERFLOW_CHECKS
			if (_high != 0)
				throw IntegerOverflowException();
#endif
			return _low;
		}
		constexpr explicit operator float() const noexcept {
			constexpr float pow_2_64 = 18446744073709551616.0f;
			return _high < 0 && *this != minValue()
			           ? -static_cast<float>(-*this)
			           : static_cast<float>((uint64_t) _low) +
			                 static_cast<float>((int64_t) _high) * pow_2_64;
		}
		constexpr explicit operator double() const noexcept {
			constexpr double pow_2_64 = 18446744073709551616.0;
			return _high < 0 && *this != minValue()
			           ? -static_cast<double>(-*this)
			           : static_cast<double>((uint64_t) _low) +
			                 static_cast<double>((int64_t) _high) * pow_2_64;
		}
		constexpr explicit operator long double() const noexcept {
			constexpr long double pow_2_64 = 18446744073709551616.0L;
			return _high < 0 && *this != minValue()
			           ? -static_cast<long double>(-*this)
			           : static_cast<long double>((uint64_t) _low) +
			                 static_cast<long double>((int64_t) _high) * pow_2_64;
		}

		static constexpr Int128 minValue() noexcept { return Int128(INT64_MIN, 0u); }

		static constexpr Int128 maxValue() noexcept { return Int128(INT64_MAX, UINT64_MAX); }

		template <class OtherT>
		constexpr Int128 operator<<(OtherT amount) const requires(std::is_integral_v<OtherT>) {
			assert(amount >= 0 && amount < 127);
			if (amount <= 0)
				return *this;
			if (amount < 63)
				return Int128((high64() << amount) | static_cast<int64_t>(low64() >> (64 - amount)),
				              low64() << amount);
			if (amount == 63)
				return Int128(((high64() << 32) << 31) | static_cast<int64_t>(low64() >> 1),
				              (low64() << 32) << 31);
			if (amount == 127)
				return Int128(static_cast<int64_t>(low64() << 63), 0u);
			if (amount > 127)
				return Int128(0, 0u);
			return Int128(static_cast<int64_t>(low64() << (amount - 64)), 0u);
		}

		constexpr Int128 operator<<(i8 bits) const { return operator<<((unsigned) bits); }

		constexpr Int128 operator<<(i16 bits) const { return operator<<((unsigned) bits); }

		constexpr Int128 operator<<(i32 bits) const { return operator<<((unsigned) bits); }

		constexpr Int128 operator<<(i64 bits) const { return operator<<((unsigned) bits); }

		constexpr Int128 operator<<(u8 bits) const { return operator<<((unsigned) bits); }

		constexpr Int128 operator<<(u16 bits) const { return operator<<((unsigned) bits); }

		constexpr Int128 operator<<(u32 bits) const { return operator<<((unsigned) bits); }

		constexpr Int128 operator<<(u64 bits) const { return operator<<((unsigned) bits); }

		template <class OtherT>
		friend constexpr OtherT operator<<(OtherT lhs,
		                                   Int128 rhs) requires(std::is_integral_v<OtherT>) {
			return lhs << (OtherT) rhs;
		}

		friend constexpr i8 operator<<(i8 lhs, Int128 rhs) { return lhs << (i8) rhs; }

		friend constexpr i16 operator<<(i16 lhs, Int128 rhs) { return lhs << (i16) rhs; }

		friend constexpr i32 operator<<(i32 lhs, Int128 rhs) { return lhs << (i32) rhs; }

		friend constexpr i64 operator<<(i64 lhs, Int128 rhs) { return lhs << (i64) rhs; }

		friend constexpr u8 operator<<(u8 lhs, Int128 rhs) { return lhs << (u8) rhs; }

		friend constexpr u16 operator<<(u16 lhs, Int128 rhs) { return lhs << (u16) rhs; }

		friend constexpr u32 operator<<(u32 lhs, Int128 rhs) { return lhs << (u32) rhs; }

		friend constexpr u64 operator<<(u64 lhs, Int128 rhs) { return lhs << (u64) rhs; }

		template <class OtherT>
		constexpr Int128 operator>>(OtherT amount) const requires(std::is_integral_v<OtherT>) {
			assert(amount >= 0 && amount < 127);
			if (amount <= 0)
				return *this;
			if (amount < 63)
				return Int128(
				    high64() >> amount,
				    (low64() >> amount) | static_cast<uint64_t>(high64() << (64 - amount)));
			if (amount == 63)
				return Int128((high64() >> 32) >> 31,
				              ((low64() >> 32) >> 31) | static_cast<uint64_t>(high64() << 1));
			if (amount >= 127)
				return Int128((high64() >> 32) >> 31,
				              static_cast<uint64_t>((high64() >> 32) >> 31));
			return Int128((high64() >> 32) >> 31, static_cast<uint64_t>(high64() >> (amount - 64)));
		}

		constexpr Int128 operator>>(i8 bits) const { return operator>>((unsigned) bits); }

		constexpr Int128 operator>>(i16 bits) const { return operator>>((unsigned) bits); }

		constexpr Int128 operator>>(i32 bits) const { return operator>>((unsigned) bits); }

		constexpr Int128 operator>>(i64 bits) const { return operator>>((unsigned) bits); }

		constexpr Int128 operator>>(u8 bits) const { return operator>>((unsigned) bits); }

		constexpr Int128 operator>>(u16 bits) const { return operator>>((unsigned) bits); }

		constexpr Int128 operator>>(u32 bits) const { return operator>>((unsigned) bits); }

		constexpr Int128 operator>>(u64 bits) const { return operator>>((unsigned) bits); }

		template <class OtherT>
		friend constexpr OtherT operator>>(OtherT lhs,
		                                   Int128 rhs) requires(std::is_integral_v<OtherT>) {
			return lhs >> (OtherT) rhs;
		}

		friend constexpr i8 operator>>(i8 lhs, Int128 rhs) { return lhs >> (i8) rhs; }

		friend constexpr i16 operator>>(i16 lhs, Int128 rhs) { return lhs >> (i16) rhs; }

		friend constexpr i32 operator>>(i32 lhs, Int128 rhs) { return lhs >> (i32) rhs; }

		friend constexpr i64 operator>>(i64 lhs, Int128 rhs) { return lhs >> (i64) rhs; }

		friend constexpr u8 operator>>(u8 lhs, Int128 rhs) { return lhs >> (u8) rhs; }

		friend constexpr u16 operator>>(u16 lhs, Int128 rhs) { return lhs >> (u16) rhs; }

		friend constexpr u32 operator>>(u32 lhs, Int128 rhs) { return lhs >> (u32) rhs; }

		friend constexpr u64 operator>>(u64 lhs, Int128 rhs) { return lhs >> (u64) rhs; }

		constexpr Int128 operator+(Int128 rhs) const {
			return Int128::addResult(Int128(_high + rhs._high, _low + rhs._low), *this);
		}

		constexpr Int128 operator+(i8 rhs) const { return operator+(Int128(rhs)); }

		constexpr Int128 operator+(i16 rhs) const { return operator+(Int128(rhs)); }

		constexpr Int128 operator+(i32 rhs) const { return operator+(Int128(rhs)); }

		constexpr Int128 operator+(i64 rhs) const { return operator+(Int128(rhs)); }

		constexpr Int128 operator+(u8 rhs) const { return operator+(Int128(rhs)); }

		constexpr Int128 operator+(u16 rhs) const { return operator+(Int128(rhs)); }

		constexpr Int128 operator+(u32 rhs) const { return operator+(Int128(rhs)); }

		constexpr Int128 operator+(u64 rhs) const { return operator+(Int128(rhs)); }

		template <typename OtherT>
		constexpr Int128 operator+(OtherT rhs) const requires(std::is_integral_v<OtherT>) {
			return operator+(Int128(rhs));
		}

		template <typename OtherT>
		friend constexpr Int128 operator+(OtherT lhs,
		                                  Int128 rhs) requires(std::is_integral_v<OtherT>) {
			return rhs + lhs;
		}

		friend constexpr Int128 operator+(i8 lhs, Int128 rhs) { return rhs + lhs; }

		friend constexpr Int128 operator+(i16 lhs, Int128 rhs) { return rhs + lhs; }

		friend constexpr Int128 operator+(i32 lhs, Int128 rhs) { return rhs + lhs; }

		friend constexpr Int128 operator+(i64 lhs, Int128 rhs) { return rhs + lhs; }

		friend constexpr Int128 operator+(u8 lhs, Int128 rhs) { return rhs + lhs; }

		friend constexpr Int128 operator+(u16 lhs, Int128 rhs) { return rhs + lhs; }

		friend constexpr Int128 operator+(u32 lhs, Int128 rhs) { return rhs + lhs; }

		friend constexpr Int128 operator+(u64 lhs, Int128 rhs) { return rhs + lhs; }

		constexpr Int128 operator-(Int128 rhs) const {
			return Int128::substractResult(Int128(_high - rhs._high, _low - rhs._low), *this, rhs);
		}

		constexpr Int128 operator-(i8 rhs) const { return operator-(Int128(rhs)); }

		constexpr Int128 operator-(i16 rhs) const { return operator-(Int128(rhs)); }

		constexpr Int128 operator-(i32 rhs) const { return operator-(Int128(rhs)); }

		constexpr Int128 operator-(i64 rhs) const { return operator-(Int128(rhs)); }

		constexpr Int128 operator-(u8 rhs) const { return operator-(Int128(rhs)); }

		constexpr Int128 operator-(u16 rhs) const { return operator-(Int128(rhs)); }

		constexpr Int128 operator-(u32 rhs) const { return operator-(Int128(rhs)); }

		constexpr Int128 operator-(u64 rhs) const { return operator-(Int128(rhs)); }

		template <typename OtherT>
		constexpr Int128 operator-(OtherT rhs) const requires(std::is_integral_v<OtherT>) {
			return operator-(Int128(rhs));
		}

		template <typename OtherT>
		friend constexpr OtherT operator-(OtherT lhs,
		                                  Int128 rhs) requires(std::is_integral_v<OtherT>) {
			return static_cast<OtherT>(Int128(lhs) - rhs);
		}

		friend constexpr i8 operator-(i8 lhs, Int128 rhs) { return lhs - (i8) rhs; }

		friend constexpr i16 operator-(i16 lhs, Int128 rhs) { return lhs - (i16) rhs; }

		friend constexpr i32 operator-(i32 lhs, Int128 rhs) { return lhs - (i32) rhs; }

		friend constexpr i64 operator-(i64 lhs, Int128 rhs) { return lhs - (i64) rhs; }

		friend constexpr u8 operator-(u8 lhs, Int128 rhs) { return lhs - (u8) rhs; }

		friend constexpr u16 operator-(u16 lhs, Int128 rhs) { return lhs - (u16) rhs; }

		friend constexpr u32 operator-(u32 lhs, Int128 rhs) { return lhs - (u32) rhs; }

		friend constexpr u64 operator-(u64 lhs, Int128 rhs) { return lhs - (u64) rhs; }

		inline Int128 operator*(Int128 rhs) const {
			const auto product = std::bit_cast<UInt128>(*this) * std::bit_cast<UInt128>(rhs);
			auto result = Int128(__Details::BitCastToSigned(product.high64()), product.low64());
#ifdef CPPADVANCE_OVERFLOW_CHECKS
			if (*this > 0) {
				if ((rhs > 0 && result < *this) || (rhs < 0 && result > *this))
					throw IntegerOverflowException();
			} else if (*this < 0) {
				if ((rhs > 0 && result > *this) || (rhs < 0 && result < *this))
					throw IntegerOverflowException();
			}
#endif
			return result;
		}

		Int128 operator*(i8 rhs) const { return operator*(Int128(rhs)); }

		Int128 operator*(i16 rhs) const { return operator*(Int128(rhs)); }

		Int128 operator*(i32 rhs) const { return operator*(Int128(rhs)); }

		Int128 operator*(i64 rhs) const { return operator*(Int128(rhs)); }

		Int128 operator*(u8 rhs) const { return operator*(Int128(rhs)); }

		Int128 operator*(u16 rhs) const { return operator*(Int128(rhs)); }

		Int128 operator*(u32 rhs) const { return operator*(Int128(rhs)); }

		Int128 operator*(u64 rhs) const { return operator*(Int128(rhs)); }

		template <typename OtherT>
		Int128 operator*(OtherT rhs) const requires(std::is_integral_v<OtherT>) {
			return operator*(Int128(rhs));
		}

		template <typename OtherT>
		friend inline Int128 operator*(OtherT lhs,
		                               Int128 rhs) requires(std::is_integral_v<OtherT>) {
			return rhs * lhs;
		}

		friend inline Int128 operator*(i8 lhs, Int128 rhs) { return rhs * lhs; }

		friend inline Int128 operator*(i16 lhs, Int128 rhs) { return rhs * lhs; }

		friend inline Int128 operator*(i32 lhs, Int128 rhs) { return rhs * lhs; }

		friend inline Int128 operator*(i64 lhs, Int128 rhs) { return rhs * lhs; }

		friend inline Int128 operator*(u8 lhs, Int128 rhs) { return rhs * lhs; }

		friend inline Int128 operator*(u16 lhs, Int128 rhs) { return rhs * lhs; }

		friend inline Int128 operator*(u32 lhs, Int128 rhs) { return rhs * lhs; }

		friend inline Int128 operator*(u64 lhs, Int128 rhs) { return rhs * lhs; }

		constexpr Int128 operator&(Int128 rhs) const noexcept {
			return Int128(_high & rhs._high, _low & rhs._low);
		}

		constexpr Int128 operator&(i8 rhs) const { return operator&(Int128(rhs)); }

		constexpr Int128 operator&(i16 rhs) const { return operator&(Int128(rhs)); }

		constexpr Int128 operator&(i32 rhs) const { return operator&(Int128(rhs)); }

		constexpr Int128 operator&(i64 rhs) const { return operator&(Int128(rhs)); }

		constexpr Int128 operator&(u8 rhs) const noexcept { return operator&(Int128(rhs)); }

		constexpr Int128 operator&(u16 rhs) const noexcept { return operator&(Int128(rhs)); }

		constexpr Int128 operator&(u32 rhs) const noexcept { return operator&(Int128(rhs)); }

		constexpr Int128 operator&(u64 rhs) const noexcept { return operator&(Int128(rhs)); }

		template <typename OtherT>
		constexpr Int128 operator&(OtherT rhs) const
		    noexcept(!std::numeric_limits<OtherT>::is_signed) requires(std::is_integral_v<OtherT>) {
			return operator&(Int128(rhs));
		}

		template <typename OtherT>
		friend constexpr OtherT operator&(OtherT lhs,
		                                  Int128 rhs) requires(std::is_integral_v<OtherT>) {
			return lhs & (OtherT) rhs;
		}

		friend constexpr i8 operator&(i8 lhs, Int128 rhs) { return lhs & (i8) rhs; }

		friend constexpr i16 operator&(i16 lhs, Int128 rhs) { return lhs & (i16) rhs; }

		friend constexpr i32 operator&(i32 lhs, Int128 rhs) { return lhs & (i32) rhs; }

		friend constexpr i64 operator&(i64 lhs, Int128 rhs) { return lhs & (i64) rhs; }

		friend constexpr u8 operator&(u8 lhs, Int128 rhs) { return lhs & (u8) rhs; }

		friend constexpr u16 operator&(u16 lhs, Int128 rhs) { return lhs & (u16) rhs; }

		friend constexpr u32 operator&(u32 lhs, Int128 rhs) { return lhs & (u32) rhs; }

		friend constexpr u64 operator&(u64 lhs, Int128 rhs) { return lhs & (u64) rhs; }

		constexpr Int128 operator|(Int128 rhs) const noexcept {
			return Int128(_high | rhs._high, _low | rhs._low);
		}

		constexpr Int128 operator|(i8 rhs) const { return operator|(Int128(rhs)); }

		constexpr Int128 operator|(i16 rhs) const { return operator|(Int128(rhs)); }

		constexpr Int128 operator|(i32 rhs) const { return operator|(Int128(rhs)); }

		constexpr Int128 operator|(i64 rhs) const { return operator|(Int128(rhs)); }

		constexpr Int128 operator|(u8 rhs) const noexcept { return operator|(Int128(rhs)); }

		constexpr Int128 operator|(u16 rhs) const noexcept { return operator|(Int128(rhs)); }

		constexpr Int128 operator|(u32 rhs) const noexcept { return operator|(Int128(rhs)); }

		constexpr Int128 operator|(u64 rhs) const noexcept { return operator|(Int128(rhs)); }

		template <typename OtherT>
		constexpr Int128 operator|(OtherT rhs) const
		    noexcept(!std::numeric_limits<OtherT>::is_signed) requires(std::is_integral_v<OtherT>) {
			return operator|(Int128(rhs));
		}

		template <typename OtherT>
		friend constexpr OtherT operator|(OtherT lhs,
		                                  Int128 rhs) requires(std::is_integral_v<OtherT>) {
			return lhs | (OtherT) rhs;
		}

		friend constexpr i8 operator|(i8 lhs, Int128 rhs) { return lhs | (i8) rhs; }

		friend constexpr i16 operator|(i16 lhs, Int128 rhs) { return lhs | (i16) rhs; }

		friend constexpr i32 operator|(i32 lhs, Int128 rhs) { return lhs | (i32) rhs; }

		friend constexpr i64 operator|(i64 lhs, Int128 rhs) { return lhs | (i64) rhs; }

		friend constexpr u8 operator|(u8 lhs, Int128 rhs) { return lhs | (u8) rhs; }

		friend constexpr u16 operator|(u16 lhs, Int128 rhs) { return lhs | (u16) rhs; }

		friend constexpr u32 operator|(u32 lhs, Int128 rhs) { return lhs | (u32) rhs; }

		friend constexpr u64 operator|(u64 lhs, Int128 rhs) { return lhs | (u64) rhs; }

		constexpr Int128 operator^(Int128 rhs) const noexcept {
			return Int128(_high ^ rhs._high, _low ^ rhs._low);
		}

		constexpr Int128 operator^(i8 rhs) const { return operator^(Int128(rhs)); }

		constexpr Int128 operator^(i16 rhs) const { return operator^(Int128(rhs)); }

		constexpr Int128 operator^(i32 rhs) const { return operator^(Int128(rhs)); }

		constexpr Int128 operator^(i64 rhs) const { return operator^(Int128(rhs)); }

		constexpr Int128 operator^(u8 rhs) const noexcept { return operator^(Int128(rhs)); }

		constexpr Int128 operator^(u16 rhs) const noexcept { return operator^(Int128(rhs)); }

		constexpr Int128 operator^(u32 rhs) const noexcept { return operator^(Int128(rhs)); }

		constexpr Int128 operator^(u64 rhs) const noexcept { return operator^(Int128(rhs)); }

		template <typename OtherT>
		constexpr Int128 operator^(OtherT rhs) const
		    noexcept(!std::numeric_limits<OtherT>::is_signed) requires(std::is_integral_v<OtherT>) {
			return operator^(Int128(rhs));
		}

		template <typename OtherT>
		friend constexpr OtherT operator^(OtherT lhs,
		                                  Int128 rhs) requires(std::is_integral_v<OtherT>) {
			return lhs ^ (OtherT) rhs;
		}

		friend constexpr i8 operator^(i8 lhs, Int128 rhs) { return lhs ^ (i8) rhs; }

		friend constexpr i16 operator^(i16 lhs, Int128 rhs) { return lhs ^ (i16) rhs; }

		friend constexpr i32 operator^(i32 lhs, Int128 rhs) { return lhs ^ (i32) rhs; }

		friend constexpr i64 operator^(i64 lhs, Int128 rhs) { return lhs ^ (i64) rhs; }

		friend constexpr u8 operator^(u8 lhs, Int128 rhs) { return lhs ^ (u8) rhs; }

		friend constexpr u16 operator^(u16 lhs, Int128 rhs) { return lhs ^ (u16) rhs; }

		friend constexpr u32 operator^(u32 lhs, Int128 rhs) { return lhs ^ (u32) rhs; }

		friend constexpr u64 operator^(u64 lhs, Int128 rhs) { return lhs ^ (u64) rhs; }

		constexpr Int128& operator<<=(int amount) {
			*this = *this << amount;
			return *this;
		}

		constexpr Int128& operator>>=(int amount) {
			*this = *this >> amount;
			return *this;
		}

		constexpr Int128& operator+=(Int128 other) {
			*this = *this + other;
			return *this;
		}

		constexpr Int128& operator-=(Int128 other) {
			*this = *this - other;
			return *this;
		}

		Int128& operator*=(Int128 other) {
			*this = *this * other;
			return *this;
		}

		CPPADVANCE_DLLEXPORT Int128 operator/(Int128 rhs) const;

		Int128 operator/(i8 rhs) const { return operator/(Int128(rhs)); }

		Int128 operator/(i16 rhs) const { return operator/(Int128(rhs)); }

		Int128 operator/(i32 rhs) const { return operator/(Int128(rhs)); }

		Int128 operator/(i64 rhs) const { return operator/(Int128(rhs)); }

		Int128 operator/(u8 rhs) const { return operator/(Int128(rhs)); }

		Int128 operator/(u16 rhs) const { return operator/(Int128(rhs)); }

		Int128 operator/(u32 rhs) const { return operator/(Int128(rhs)); }

		Int128 operator/(u64 rhs) const { return operator/(Int128(rhs)); }

		template <typename OtherT>
		Int128 operator/(OtherT rhs) const requires(std::is_integral_v<OtherT>) {
			return operator/(Int128(rhs));
		}

		template <typename OtherT>
		friend OtherT operator/(OtherT lhs, Int128 rhs) requires(std::is_integral_v<OtherT>) {
			return lhs / (OtherT) rhs;
		}

		friend inline i8 operator/(i8 lhs, Int128 rhs) { return lhs / (i8) rhs; }

		friend inline i16 operator/(i16 lhs, Int128 rhs) { return lhs / (i16) rhs; }

		friend inline i32 operator/(i32 lhs, Int128 rhs) { return lhs / (i32) rhs; }

		friend inline i64 operator/(i64 lhs, Int128 rhs) { return lhs / (i64) rhs; }

		friend inline u8 operator/(u8 lhs, Int128 rhs) { return lhs / (u8) rhs; }

		friend inline u16 operator/(u16 lhs, Int128 rhs) { return lhs / (u16) rhs; }

		friend inline u32 operator/(u32 lhs, Int128 rhs) { return lhs / (u32) rhs; }

		friend inline u64 operator/(u64 lhs, Int128 rhs) { return lhs / (u64) rhs; }

		Int128& operator/=(Int128 other) {
			*this = *this / other;
			return *this;
		}

		CPPADVANCE_DLLEXPORT Int128 operator%(Int128 rhs) const;

		Int128 operator%(i8 rhs) const { return operator%(Int128(rhs)); }

		Int128 operator%(i16 rhs) const { return operator%(Int128(rhs)); }

		Int128 operator%(i32 rhs) const { return operator%(Int128(rhs)); }

		Int128 operator%(i64 rhs) const { return operator%(Int128(rhs)); }

		Int128 operator%(u8 rhs) const { return operator%(Int128(rhs)); }

		Int128 operator%(u16 rhs) const { return operator%(Int128(rhs)); }

		Int128 operator%(u32 rhs) const { return operator%(Int128(rhs)); }

		Int128 operator%(u64 rhs) const { return operator%(Int128(rhs)); }

		template <typename OtherT>
		Int128 operator%(OtherT rhs) const requires(std::is_integral_v<OtherT>) {
			return operator%(Int128(rhs));
		}

		template <typename OtherT>
		friend OtherT operator%(OtherT lhs, Int128 rhs) requires(std::is_integral_v<OtherT>) {
			return lhs % (OtherT) rhs;
		}

		friend inline i8 operator%(i8 lhs, Int128 rhs) { return lhs % (i8) rhs; }

		friend inline i16 operator%(i16 lhs, Int128 rhs) { return lhs % (i16) rhs; }

		friend inline i32 operator%(i32 lhs, Int128 rhs) { return lhs % (i32) rhs; }

		friend inline i64 operator%(i64 lhs, Int128 rhs) { return lhs % (i64) rhs; }

		friend inline u8 operator%(u8 lhs, Int128 rhs) { return lhs % (u8) rhs; }

		friend inline u16 operator%(u16 lhs, Int128 rhs) { return lhs % (u16) rhs; }

		friend inline u32 operator%(u32 lhs, Int128 rhs) { return lhs % (u32) rhs; }

		friend inline u64 operator%(u64 lhs, Int128 rhs) { return lhs % (u64) rhs; }

		Int128& operator%=(Int128 other) {
			*this = *this % other;
			return *this;
		}

		constexpr Int128& operator&=(Int128 other) {
			*this = *this & other;
			return *this;
		}

		constexpr Int128& operator|=(Int128 other) {
			*this = *this | other;
			return *this;
		}

		constexpr Int128& operator^=(Int128 other) {
			*this = *this ^ other;
			return *this;
		}

		constexpr Int128& operator++() {
			*this += 1;
			return *this;
		}

		constexpr Int128& operator--() {
			*this -= 1;
			return *this;
		}

		constexpr Int128 operator++(int) {
			Int128 tmp(*this);
			*this += 1;
			return tmp;
		}

		constexpr Int128 operator--(int) {
			Int128 tmp(*this);
			*this -= 1;
			return tmp;
		}

		constexpr Int128& operator+() noexcept { return *this; }

		constexpr Int128 operator-() const {
#ifdef CPPADVANCE_OVERFLOW_CHECKS
			if (*this == INT128_MIN)
				throw IntegerOverflowException();
#endif
			return Int128((~_high) + int(_low == 0), (~_low) + 1);
		}

		constexpr Int128 operator~() const noexcept { return Int128(~_high, ~_low); }

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

		constexpr std::strong_ordering operator<=>(Int128 rhs) const noexcept {
			if (const int64_t lhsHigh = _high, rhsHigh = rhs._high; lhsHigh < rhsHigh) {
				return std::strong_ordering::less;
			} else if (lhsHigh > rhsHigh) {
				return std::strong_ordering::greater;
			}

			if (const uint64_t lhsLow = _low, rhsLow = rhs._low; lhsLow < rhsLow) {
				return std::strong_ordering::less;
			} else if (lhsLow > rhsLow) {
				return std::strong_ordering::greater;
			}
			return std::strong_ordering::equal;
		}

		constexpr auto operator<=>(i8 rhs) const noexcept { return *this <=> Int128(rhs); }

		constexpr auto operator<=>(i16 rhs) const noexcept { return *this <=> Int128(rhs); }

		constexpr auto operator<=>(i32 rhs) const noexcept { return *this <=> Int128(rhs); }

		constexpr auto operator<=>(i64 rhs) const noexcept { return *this <=> Int128(rhs); }

		constexpr auto operator<=>(u8 rhs) const noexcept { return *this <=> Int128(rhs); }

		constexpr auto operator<=>(u16 rhs) const noexcept { return *this <=> Int128(rhs); }

		constexpr auto operator<=>(u32 rhs) const noexcept { return *this <=> Int128(rhs); }

		constexpr auto operator<=>(u64 rhs) const noexcept { return *this <=> Int128(rhs); }

		template <typename OtherT>
		constexpr auto operator<=>(OtherT rhs) const noexcept requires(std::is_integral_v<OtherT>) {
			return *this <=> Int128(rhs);
		}

		template <typename OtherT>
		friend constexpr auto operator<=>(OtherT lhs, Int128 rhs) noexcept
		    requires(std::is_integral_v<OtherT>) {
			return Int128(lhs) <=> rhs;
		}

		friend constexpr auto operator<=>(i8 lhs, Int128 rhs) noexcept {
			return Int128(lhs) <=> rhs;
		}

		friend constexpr auto operator<=>(i16 lhs, Int128 rhs) noexcept {
			return Int128(lhs) <=> rhs;
		}

		friend constexpr auto operator<=>(i32 lhs, Int128 rhs) noexcept {
			return Int128(lhs) <=> rhs;
		}

		friend constexpr auto operator<=>(i64 lhs, Int128 rhs) noexcept {
			return Int128(lhs) <=> rhs;
		}

		friend constexpr auto operator<=>(u8 lhs, Int128 rhs) noexcept {
			return Int128(lhs) <=> rhs;
		}

		friend constexpr auto operator<=>(u16 lhs, Int128 rhs) noexcept {
			return Int128(lhs) <=> rhs;
		}

		friend constexpr auto operator<=>(u32 lhs, Int128 rhs) noexcept {
			return Int128(lhs) <=> rhs;
		}

		friend constexpr auto operator<=>(u64 lhs, Int128 rhs) noexcept {
			return Int128(lhs) <=> rhs;
		}

		constexpr static Int128 Parse(std::string_view input) {
			Int128 tmp;
			auto inputEnd = input.data() + input.size();
			auto ret      = FromChars(input.data(), inputEnd, tmp);
#ifdef CPPADVANCE_OVERFLOW_CHECKS
			if (ret.ec == std::errc::result_out_of_range)
				throw IntegerOverflowException();
#endif
			return tmp;
		}

		CPPADVANCE_DLLEXPORT std::string toString() const;

	   private:
		static constexpr Int128 addResult(Int128 result, Int128 lhs) {
			return (result._low < lhs._low) ? Int128(result._high + 1, result._low) : result;
		}

		static constexpr Int128 substractResult(Int128 result, Int128 lhs, Int128 rhs) {
			return (lhs._low < rhs._low) ? Int128(result._high - 1, result._low) : result;
		}

		uint64_t _low;
		i64 _high;
	};

	inline constexpr UInt128::UInt128(Int128 value)
	    : _low(Int128Low64(value)), _high(static_cast<uint64_t>(Int128High64(value))) {
#ifdef CPPADVANCE_OVERFLOW_CHECKS
		if (value < 0)
			throw IntegerOverflowException();
#endif
		// ASSERT(value >= 0, "IntegerOverflow((int64_t)value, 0, INT64_MAX))");
	}

	inline constexpr uint64_t Int128Low64(Int128 v) noexcept { return v.low64(); }
	inline constexpr i64 Int128High64(Int128 v) noexcept { return v.high64(); }

	namespace __details {
		inline constexpr void checkRhsForZero(const UInt128& divisor) {
#ifdef CPPADVANCE_OVERFLOW_CHECKS
			if (divisor == 0)
				throw DivisionByZeroException();
#endif
		}

		inline constexpr void checkIntCornerCase(const Int128& lhs, const Int128& rhs) {
#ifdef CPPADVANCE_OVERFLOW_CHECKS
			if (lhs == INT128_MIN && rhs == -1)
				throw IntegerOverflowException();
#endif
		}
	}  // namespace __details

	using i128 = Int128;
	using u128 = UInt128;
}  // namespace CppAdvance

template <>
struct std::_Sign_base<CppAdvance::UInt128,
                       false> {  // determine whether integral type _Ty is signed or unsigned
	static constexpr bool _Signed   = false;
	static constexpr bool _Unsigned = true;
};

template <>
struct std::_Sign_base<CppAdvance::Int128,
                       false> {  // determine whether integral type _Ty is signed or unsigned
	static constexpr bool _Signed   = true;
	static constexpr bool _Unsigned = false;
};

template <>
struct std::make_unsigned<CppAdvance::UInt128> {  // unsigned partner to _Ty
	using type = CppAdvance::UInt128;
};

template <>
struct std::make_unsigned<CppAdvance::Int128> {  // unsigned partner to _Ty
	using type = CppAdvance::UInt128;
};

template <>
class std::numeric_limits<CppAdvance::UInt128> {
   public:
	static constexpr bool is_specialized    = true;
	static constexpr bool is_signed         = false;
	static constexpr bool is_integer        = true;
	static constexpr bool is_exact          = true;
	static constexpr bool has_infinity      = false;
	static constexpr bool has_quiet_NaN     = false;
	static constexpr bool has_signaling_NaN = false;
	/*static constexpr std::float_denorm_style has_denorm = std::denorm_absent;
	static constexpr bool has_denorm_loss = false;*/
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
	static constexpr bool tinyness_before               = false;

	static constexpr CppAdvance::UInt128(min)() { return 0u; }
	static constexpr CppAdvance::UInt128 lowest() { return 0u; }
	static constexpr CppAdvance::UInt128(max)() { return UINT128_MAX; }
	static constexpr CppAdvance::UInt128 epsilon() { return 0u; }
	static constexpr CppAdvance::UInt128 round_error() { return 0u; }
	static constexpr CppAdvance::UInt128 infinity() { return 0u; }
	static constexpr CppAdvance::UInt128 quiet_NaN() { return 0u; }
	static constexpr CppAdvance::UInt128 signaling_NaN() { return 0u; }
	static constexpr CppAdvance::UInt128 denorm_min() { return 0u; }
};

template <>
class std::numeric_limits<CppAdvance::Int128> {
   public:
	static constexpr bool is_specialized    = true;
	static constexpr bool is_signed         = true;
	static constexpr bool is_integer        = true;
	static constexpr bool is_exact          = true;
	static constexpr bool has_infinity      = false;
	static constexpr bool has_quiet_NaN     = false;
	static constexpr bool has_signaling_NaN = false;
	/*static constexpr std::float_denorm_style has_denorm = std::denorm_absent;
	static constexpr bool has_denorm_loss = false;*/
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
	static constexpr bool tinyness_before               = false;

	static constexpr CppAdvance::Int128(min)() { return INT128_MIN; }
	static constexpr CppAdvance::Int128 lowest() { return INT128_MIN; }
	static constexpr CppAdvance::Int128(max)() { return INT128_MAX; }
	static constexpr CppAdvance::Int128 epsilon() { return 0; }
	static constexpr CppAdvance::Int128 round_error() { return 0; }
	static constexpr CppAdvance::Int128 infinity() { return 0; }
	static constexpr CppAdvance::Int128 quiet_NaN() { return 0; }
	static constexpr CppAdvance::Int128 signaling_NaN() { return 0; }
	static constexpr CppAdvance::Int128 denorm_min() { return 0; }
};