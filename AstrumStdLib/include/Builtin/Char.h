#pragma once
#include "Integer.h"

namespace Builtin {

	struct Character : public Struct {
		using $self  = Character;
		using $class = $Class_Basic<$self>;
		constexpr decltype(auto) $ref() noexcept { return *this; }
		constexpr decltype(auto) $ref() const noexcept { return *this; }

		constexpr Character() noexcept = default;
		constexpr Character(bool)      = delete;
		constexpr Character(char value) : value {(uint8_t) value} {}
		constexpr Character(signed char value) : Character((uint32_t) value) {}
		constexpr Character(unsigned char value) noexcept : value {(uint32_t) value} {}
		constexpr Character(uint16_t value) : value {(uint32_t) value} {
			if (value >= 0xD800 && value <= 0xDFFF)
				throw InvalidArgumentException();
		}
		constexpr explicit Character(int value) : Character ((uint32_t) value) {}
		constexpr explicit Character(uint32_t value) : value {value} {
			if (((value ^ 0xD800) - 0x800) >= 0x110000 - 0x80)
				throw InvalidArgumentException();
		}
		constexpr Character(wchar_t value) : Character ((uint32_t) value) {}
		constexpr Character(char8_t value) noexcept : value {(uint32_t) value} {}
		constexpr Character(char16_t value) : Character ((uint16_t) value) {}
		constexpr Character(char32_t value) : Character ((uint32_t) value) {}

		constexpr explicit Character(i8 v) : Character((uint32_t) v) {}
		constexpr Character(u8 v) noexcept : value {(uint8_t) v} {}
		constexpr explicit Character(i16 v) : Character((uint32_t) v) {}
		constexpr Character(u16 v) : Character((uint16_t) v) {}
		constexpr explicit Character(i32 v) : Character((uint32_t) v) {}
		constexpr explicit Character(u32 v) : Character((uint32_t) v) {}

		constexpr Character& operator=(char rhs) noexcept {
			*this = Character((uint32_t) rhs);
			return *this;
		}
		constexpr Character& operator=(signed char rhs) noexcept {
			*this = Character((uint32_t) rhs);
			return *this;
		}
		constexpr Character& operator=(unsigned char rhs) noexcept {
			*this = Character((uint32_t) rhs);
			return *this;
		}
		constexpr Character& operator=(uint16_t rhs) noexcept {
			*this = Character((uint32_t) rhs);
			return *this;
		}

		constexpr Character& operator=(wchar_t rhs) noexcept {
			*this = Character((uint32_t) rhs);
			return *this;
		}
		constexpr Character& operator=(char8_t rhs) noexcept {
			*this = Character((uint32_t) rhs);
			return *this;
		}
		constexpr Character& operator=(char16_t rhs) noexcept {
			*this = Character((uint32_t) rhs);
			return *this;
		}
		constexpr Character& operator=(char32_t rhs) noexcept {
			*this = Character((uint32_t) rhs);
			return *this;
		}

		constexpr Character& operator=(u8 rhs) noexcept {
			*this = Character((uint32_t) rhs);
			return *this;
		}
		constexpr Character& operator=(u16 rhs) noexcept {
			*this = Character((uint32_t) rhs);
			return *this;
		}

		constexpr explicit operator bool() const noexcept { return value > 0; }
		constexpr explicit operator u8() const RELEASE_NOEXCEPT { 
#ifdef NDEBUG
			if (value > 255u)
				throw IntegerOverflowException();
#endif
			return (uint8_t) value;
		}
		constexpr explicit operator u16() const RELEASE_NOEXCEPT {
#ifdef NDEBUG
			if (value > 65535u)
				throw IntegerOverflowException();
#endif
			return (uint16_t) value;
		}
		constexpr explicit operator i8() const RELEASE_NOEXCEPT {
#ifdef NDEBUG
			if (value > 127u)
				throw IntegerOverflowException();
#endif
			return (int8_t) value;
		}
		constexpr explicit operator i16() const RELEASE_NOEXCEPT {
#ifdef NDEBUG
			if (value > 32767u)
				throw IntegerOverflowException();
#endif
			return (int16_t) value;
		}
		constexpr operator u32() const noexcept { return value; }
		constexpr operator u64() const noexcept { return value; }
		constexpr operator i32() const noexcept { return (int)value; }
		constexpr operator i64() const noexcept { return (int)value; }
		
		constexpr bool operator==(Character rhs) const noexcept { return value == rhs.value; }
		constexpr int operator<=>(Character rhs) const noexcept {
			return u32(value) <=> u32(rhs.value);
		}
		/*constexpr bool operator==(unsigned rhs) const noexcept { return value == rhs; }
		constexpr int operator<=>(unsigned rhs) const noexcept { return u32(value) <=> u32(rhs); }*/

	   private:
		uint32_t value;
		static constexpr uint32_t MAX_CHAR = 0x10FFFF;
	};

	using char32 = Character;
}  // namespace Builtin