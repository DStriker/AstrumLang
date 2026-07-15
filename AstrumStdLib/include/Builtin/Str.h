#pragma once
#include "Char.h"
#include <array>

namespace Builtin {
	struct RefStruct {};

	struct Str : public RefStruct {
		using __self  = Str;
		using __class = __Class_Basic<Str>;
		constexpr decltype(auto) __ref() noexcept { return *this; }
		constexpr decltype(auto) __ref() const noexcept { return *this; }

		constexpr Str() noexcept : chars {nullptr}, len(0) {}
		constexpr Str(const char* _chars, usize _length) noexcept : chars(_chars), len(_length) {}
		constexpr Str(const u8* _chars, usize _length) noexcept : chars((const char*)_chars), len(_length) {}
		constexpr Str(const Str&) noexcept = default;
		constexpr Str(Str&&) noexcept      = default;
		constexpr Str& operator=(const Str&) noexcept = default;
		constexpr Str& operator=(Str&&) noexcept = default;
		constexpr Str(const char* _chars) noexcept
		    : chars(_chars), len(std::char_traits<char>::length(_chars)) {}

		constexpr Str& operator=(const char* _chars) noexcept {
			chars = _chars;
			len   = std::char_traits<char>::length(_chars);
			return *this;
		}

		constexpr const u8& GetDataReference() const noexcept { return (const u8&) *chars; }
		constexpr const char* UnsafeGetRawDataPointer() const noexcept { return chars; }
		constexpr usize GetByteLength() const noexcept { return len; }
		constexpr explicit operator bool() const noexcept { return chars && len; }

		constexpr bool operator==(Str other) const noexcept {
			return len == other.len &&
			       std::char_traits<char>::compare(chars, other.chars, len) == 0;
		}

		constexpr bool operator!=(Str other) const noexcept { return !(*this == other); }

		constexpr int operator<=>(Str other) const noexcept {
			const int result =
			    std::char_traits<char>::compare(chars, other.chars, std::min(len, other.len));
			if (result != 0) {
				return result;
			}
			if (len < other.len) {
				return -1;
			}
			if (len > other.len) {
				return 1;
			}
			return 0;
		}

	   private:
		const char* chars;
		usize len;
	};

	inline constexpr Str testStr = "12345 ffk34";

	template <class... Args>
	struct StringInterpolation {
		const Str formatString;
		const std::tuple<Args...> args;

		StringInterpolation(Str formatString, const Args&... args)
		    : formatString(formatString), args(args...) {}
	};

	template <Str const&... Strings>
	constexpr auto CompileTimeStringConcat() {
		constexpr size_t total_len = (Strings.GetByteLength() + ... + 0); // +0 for empty pack safety
		std::array<char, total_len + 1> arr {}; // +1 for null terminator

		size_t offset = 0;
		((std::copy(Strings.UnsafeGetRawDataPointer(),
		            Strings.UnsafeGetRawDataPointer() + size_t(Strings.GetByteLength()),
		            arr.begin() + offset),
		  offset += Strings.GetByteLength()),
		 ...);

		arr[total_len] = '\0';
		return arr;
	}

}  // namespace Builtin