#pragma once
#include "Char.h"

namespace CppAdvance {
	struct Str {
		constexpr decltype(auto) __ref() const noexcept { return *this; }
		constexpr Str() noexcept : chars {nullptr}, len(0) {}
		constexpr Str(const char16* _chars, u64 _length) noexcept
		    : chars((const char16_t*) _chars), len(_length) {}
		constexpr Str(const Str&) noexcept = default;
		constexpr Str(Str&&) noexcept      = default;
		constexpr Str& operator=(const Str&) noexcept = default;
		constexpr Str& operator=(Str&&) noexcept = default;
		constexpr ~Str() noexcept                = default;
		constexpr Str(const char16_t* _chars) noexcept
		    : chars(_chars), len(std::char_traits<char16_t>::length(_chars)) {}

		constexpr Str& operator=(const char16_t* _chars) noexcept {
			chars = /*(const char16*)*/ _chars;
			len   = std::char_traits<char16_t>::length(_chars);
			return *this;
		}

		constexpr const char16* data() const noexcept { return (const char16*) chars; }
		constexpr const char16_t* raw_data() const noexcept { return (const char16_t*) chars; }
		constexpr u64 length() const noexcept { return len; }
		constexpr operator bool() const noexcept { return chars && len; }

		constexpr bool operator==(Str other) const noexcept {
			return chars == other.chars && len == other.len;
		}

	   private:
		const char16_t* chars;
		u64 len;
	};

	template <class... Args>
	struct StringInterpolation {
		const Str formatString;
		const std::tuple<Args...> args;

		StringInterpolation(Str formatString, const Args&... args)
		    : formatString(formatString), args(args...) {}
	};

}  // namespace CppAdvance