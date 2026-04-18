#pragma once
#include <xerrc.h>

#include <cassert>
#include <string>

namespace CppAdvance {
	namespace __detail {
		template <typename CharT>
		struct from_chars_result {
			const CharT* ptr;
			std::errc ec;
			[[nodiscard]] friend bool operator==(const from_chars_result&,
			                                     const from_chars_result&) = default;
			constexpr explicit operator bool() const noexcept { return ec == std::errc {}; }
		};

		inline constexpr unsigned char Digit_from_byte[] = {
		    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
		    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
		    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
		    0,   1,   2,   3,   4,   5,   6,   7,   8,   9,   255, 255, 255, 255, 255, 255,
		    255, 10,  11,  12,  13,  14,  15,  16,  17,  18,  19,  20,  21,  22,  23,  24,
		    25,  26,  27,  28,  29,  30,  31,  32,  33,  34,  35,  255, 255, 255, 255, 255,
		    255, 10,  11,  12,  13,  14,  15,  16,  17,  18,  19,  20,  21,  22,  23,  24,
		    25,  26,  27,  28,  29,  30,  31,  32,  33,  34,  35,  255, 255, 255, 255, 255,
		    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
		    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
		    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
		    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
		    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
		    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
		    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
		    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255};
		static_assert(std::size(Digit_from_byte) == 256);
	}  // namespace __detail

	template <class CharT>
	[[nodiscard]] inline constexpr bool hasHexPrefix(const CharT* const pFirst,
	                                                 const CharT* const pLast) {
		return (pFirst != pLast && (pFirst + 1) != pLast &&
		        (*pFirst == '0' && (*(pFirst + 1) == 'x' || *(pFirst + 1) == 'X')));
	};

	template <class CharT>
	[[nodiscard]] inline constexpr bool hasBinPrefix(const CharT* const pFirst,
	                                                 const CharT* const pLast) {
		return (pFirst != pLast && (pFirst + 1) != pLast &&
		        (*pFirst == '0' && (*(pFirst + 1) == 'b')));
	};

	template <class CharT>
	[[nodiscard]] inline constexpr bool hasOctPrefix(const CharT* const pFirst,
	                                                 const CharT* const pLast) {
		return (pFirst != pLast && (pFirst + 1) != pLast && (*pFirst == '0'));
	};

	[[nodiscard]] inline constexpr unsigned char digitFromChar(const char Ch) noexcept {
		// convert ['0', '9'] ['A', 'Z'] ['a', 'z'] to [0, 35], everything else to 255
		return __detail::Digit_from_byte[static_cast<unsigned char>(Ch)];
	}

	[[nodiscard]] inline constexpr unsigned char digitFromChar(const char8_t Ch) noexcept {
		// convert ['0', '9'] ['A', 'Z'] ['a', 'z'] to [0, 35], everything else to 255
		return __detail::Digit_from_byte[(unsigned char) Ch];
	}

	[[nodiscard]] inline constexpr unsigned char digitFromChar(const wchar_t Ch) noexcept {
		// convert ['0', '9'] ['A', 'Z'] ['a', 'z'] to [0, 35], everything else to 255
		return Ch > 255 ? 255 : __detail::Digit_from_byte[static_cast<unsigned char>(Ch)];
	}

	[[nodiscard]] inline constexpr unsigned char digitFromChar(const char16_t Ch) noexcept {
		// convert ['0', '9'] ['A', 'Z'] ['a', 'z'] to [0, 35], everything else to 255
		return Ch > 255 ? 255 : __detail::Digit_from_byte[static_cast<unsigned char>(Ch)];
	}

	[[nodiscard]] inline constexpr unsigned char digitFromChar(const char32_t Ch) noexcept {
		// convert ['0', '9'] ['A', 'Z'] ['a', 'z'] to [0, 35], everything else to 255
		return Ch > 255 ? 255 : __detail::Digit_from_byte[static_cast<unsigned char>(Ch)];
	}

	template <typename T, class CharT>
	[[nodiscard]] constexpr __detail::from_chars_result<CharT> FromChars(const CharT* const First,
	                                                                     const CharT* const Last,
	                                                                     T& Raw_value,
	                                                                     int Base = 0) {
		// assert(Base >= 2 && Base <= 36);

		bool Minus_sign = false;

		const auto* Next = First;

		if constexpr (std::is_signed_v<T>) {
			if (Next != Last && *Next == '-') {
				Minus_sign = true;
				++Next;
			}
		}

		// Checking for '0x'/'0X' hex prefix, when Base == 0 or 16.
		if (Base == 0) {
			if (hasHexPrefix(Next, Last)) {
				Base = 16;
				Next += 2;
			} else if (hasBinPrefix(Next, Last)) {
				Base = 2;
				Next += 2;
			} else if (hasOctPrefix(Next, Last)) {
				Base = 8;
				Next += 1;
			} else {
				Base = 10;
			}
		}

		using Unsigned = std::make_unsigned_t<T>;

		constexpr Unsigned Uint_max    = std::numeric_limits<Unsigned>::max();
		constexpr Unsigned Int_max     = static_cast<Unsigned>(Uint_max >> 1);
		constexpr Unsigned Abs_int_min = static_cast<Unsigned>(Int_max + 1);

		Unsigned Risky_val;
		Unsigned Max_digit;

		if constexpr (std::is_signed_v<T>) {
			if (Minus_sign) {
				Risky_val = static_cast<Unsigned>(Abs_int_min / Base);
				Max_digit = static_cast<Unsigned>(Abs_int_min % Base);
			} else {
				Risky_val = static_cast<Unsigned>(Int_max / Base);
				Max_digit = static_cast<Unsigned>(Int_max % Base);
			}
		} else {
			Risky_val = static_cast<Unsigned>(Uint_max / Base);
			Max_digit = static_cast<Unsigned>(Uint_max % Base);
		}

		Unsigned Value = 0u;

		bool Overflowed = false;

		for (; Next != Last; ++Next) {
			const unsigned char Digit = digitFromChar(*Next);

			if (Digit >= Base) {
				break;
			}

			if (Value < Risky_val                                 // never overflows
			    || (Value == Risky_val && Digit <= Max_digit)) {  // overflows for certain digits
				Value = static_cast<Unsigned>(Value * Base + Digit);
			} else {  // Value > Risky_val always overflows
				Overflowed =
				    true;  // keep going, Next still needs to be updated, Value is now irrelevant
			}
		}

		if (Next - First == static_cast<ptrdiff_t>(Minus_sign)) {
			return {First, std::errc::invalid_argument};
		}

		if (Overflowed) {
			return {Next, std::errc::result_out_of_range};
		}

		if constexpr (std::is_signed_v<T>) {
			if (Minus_sign) {
				Raw_value = -std::bit_cast<T>(Value);
			} else {
				Raw_value = std::bit_cast<T>(Value);
			}
		} else {
			Raw_value = std::bit_cast<T>(Value);
		}

		return {Next, std::errc {}};
	}
}  // namespace CppAdvance