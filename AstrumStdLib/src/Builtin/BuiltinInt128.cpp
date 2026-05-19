#include "Builtin/BuiltinInt128.h"

#include <bit>
#include <iomanip>
#include <iostream>
#include <sstream>

#include "Builtin/Exceptions.h"

namespace Builtin {
	inline int Fls128(UInt128 n) {
		if (uint64_t hi = n.High64()) {
			return 127 - std::countl_zero(hi);
		}
		const uint64_t low = n.Low64();
		return 63 - std::countl_zero(low);
	}

	inline void DivModImpl(UInt128 dividend, UInt128 divisor, UInt128* quotient_ret,
	                       UInt128* remainder_ret) {
		if (divisor == 0)
			throw DivisionByZeroException();

		if (divisor > dividend) {
			*quotient_ret  = 0u;
			*remainder_ret = dividend;
			return;
		}

		if (divisor == dividend) {
			*quotient_ret  = 1u;
			*remainder_ret = 0u;
			return;
		}

		UInt128 denominator = divisor;
		UInt128 quotient    = 0u;

		// Left aligns the MSB of the denominator and the dividend.
		const int shift = Fls128(dividend) - Fls128(denominator);
		denominator <<= shift;

		// Uses shift-subtract algorithm to divide dividend by denominator. The
		// remainder will be left in dividend.
		for (int i = 0; i <= shift; ++i) {
			quotient <<= 1;
			if (dividend >= denominator) {
				dividend -= denominator;
				quotient |= 1u;
			}
			denominator >>= 1;
		}

		*quotient_ret  = quotient;
		*remainder_ret = dividend;
	}

	/*UInt128 UInt128::Div(UInt128 rhs) const {
	    UInt128 quotient  = 0u;
	    UInt128 remainder = 0u;
	    DivModImpl(*this, rhs, &quotient, &remainder);
	    return quotient;
	}

	UInt128 UInt128::operator%(UInt128 rhs) const {
	    UInt128 quotient  = 0u;
	    UInt128 remainder = 0u;
	    DivModImpl(*this, rhs, &quotient, &remainder);
	    return remainder;
	}*/

	static constexpr u128 InverseUint128(u128 value) {
		return u128(uint64_t(~value.High64()) + static_cast<unsigned long>(value.Low64() == 0),
		            uint64_t(~value.Low64()) + 1);
	}

	static u128 UnsignedAbsolute(i128 v) {
		return v.High64() < 0 ? InverseUint128(std::bit_cast<u128>(v)) : std::bit_cast<u128>(v);
	}

	/*Int128 Int128::Div(Int128 rhs) const {
	    if (*this == INT128_MIN && rhs == -1)
	        throw IntegerOverflowException();
	    u128 quotient;
	    u128 remainder;
	    DivModImpl(UnsignedAbsolute(*this), UnsignedAbsolute(rhs), &quotient, &remainder);
	    if ((High64() < 0) != (rhs.High64() < 0))
	        quotient = InverseUint128(quotient);
	    return i128(__Details::BitCastToSigned(quotient.High64()), quotient.Low64());
	}

	Int128 Int128::operator%(Int128 rhs) const {
	    if (*this == INT128_MIN && rhs == -1)
	        throw IntegerOverflowException();
	    u128 quotient;
	    u128 remainder;
	    DivModImpl(UnsignedAbsolute(*this), UnsignedAbsolute(rhs), &quotient, &remainder);
	    if (High64() < 0)
	        remainder = InverseUint128(remainder);
	    return i128(__Details::BitCastToSigned(remainder.High64()), remainder.Low64());
	}*/

	ASTRUMSTD_API std::string U128ToFormattedString(UInt128 v,
	                                                            std::ios_base::fmtflags flags) {
		// Select a divisor which is the largest power of the base < 2^64.
		UInt128 div;
		int div_base_log;
		switch (flags & std::ios::basefield) {
			case std::ios::hex:
				div          = 0x1000000000000000u;  // 16^15
				div_base_log = 15;
				break;
			case std::ios::oct:
				div          = 01000000000000000000000u;  // 8^21
				div_base_log = 21;
				break;
			default:                                   // std::ios::dec
				div          = 10000000000000000000u;  // 10^19
				div_base_log = 19;
				break;
		}

		// Now piece together the uint128 representation from three chunks of the
		// original value, each less than "div" and therefore representable as a
		// uint64_t.
		std::stringstream os;
		std::ios_base::fmtflags copy_mask =
		    std::ios::basefield | std::ios::showbase | std::ios::uppercase;
		os.setf(flags & copy_mask, copy_mask);
		UInt128 high = v;
		UInt128 low;
		DivModImpl(high, div, &high, &low);
		UInt128 mid;
		DivModImpl(high, div, &high, &mid);
		if (high.Low64() != 0) {
			os << (uint64_t) high.Low64();
			os << std::noshowbase << std::setfill('0') << std::setw(div_base_log);
			os << (uint64_t) mid.Low64();
			os << std::setw(div_base_log);
		} else if (mid.Low64() != 0) {
			os << (uint64_t) mid.Low64();
			os << std::noshowbase << std::setfill('0') << std::setw(div_base_log);
		}
		os << (uint64_t) low.Low64();
		return os.str();
	}

	ASTRUMSTD_API std::string DebugPrintInt128(i128 v) {
		std::string result;
		if (v.High64() < 0)
			result = "-";
		result += U128ToFormattedString(UnsignedAbsolute(v), std::ios_base::dec);
		return result;
	}

}  // namespace Builtin