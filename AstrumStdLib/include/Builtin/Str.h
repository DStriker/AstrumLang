#pragma once
#include <array>

#include "Char.h"

#if ADV_VERSION_LINUX || ADV_VERSION_FREEBSD
extern char etext, edata;
#endif

namespace Builtin {
	struct RefStruct {};
	bool IsConstantStringLiteral(const char* str) noexcept;

	struct Str : public RefStruct {
		using $self  = Str;
		using $class = $Class_Basic<Str>;
		constexpr decltype(auto) $ref() noexcept { return *this; }
		constexpr decltype(auto) $ref() const noexcept { return *this; }

		constexpr Str() noexcept : chars {nullptr}, len(0) {}
		constexpr Str(const char* _chars, usize _length) noexcept : chars(_chars), len(_length) {}
		constexpr Str(const u8* _chars, usize _length) noexcept
		    : chars((const char*) _chars), len(_length) {}
		constexpr Str(const Str&) noexcept = default;
		constexpr Str(Str&&) noexcept      = default;
		constexpr Str& operator=(const Str&) noexcept = default;
		constexpr Str& operator=(Str&&) noexcept = default;
		constexpr Str(const char* _chars) noexcept
		    : chars(_chars), len(std::char_traits<char>::length(_chars)) {}

		static constexpr Str UnsafeCreate(const u8& _chars, usize _length) noexcept {
			return Str(&_chars, _length);
		}

		constexpr Str& operator=(const char* _chars) noexcept {
			chars = _chars;
			len   = std::char_traits<char>::length(_chars);
			return *this;
		}

		constexpr const u8& GetDataReference() const noexcept { return (const u8&) *chars; }
		constexpr const char* UnsafeGetRawDataPointer() const noexcept { return chars; }
		constexpr usize GetByteLength() const noexcept { return len; }
		constexpr explicit operator bool() const noexcept { return chars && len; }

		uint64_t GetHashCode() const noexcept {
			return std::hash<std::string_view>()(std::string_view(chars, (size_t) len));
		}

	   private:
		const char* chars;
		usize len;
	};

	struct StaticStr : public Struct {
		using $self  = StaticStr;
		using $class = $Class_Basic<StaticStr>;
		constexpr decltype(auto) $ref() noexcept { return *this; }
		constexpr decltype(auto) $ref() const noexcept { return *this; }

		constexpr StaticStr() noexcept : chars {nullptr}, len(0) {}
		constexpr explicit StaticStr(Str str)
		    : chars(str.UnsafeGetRawDataPointer()), len(str.GetByteLength()) {
			ensureConstLiteral();
		}
		constexpr StaticStr(const char* _chars, usize _length) noexcept
		    : chars(_chars), len(_length) {
#ifdef _DEBUG
			ensureConstLiteral();
#endif
		}
		constexpr StaticStr(const u8* _chars, usize _length) noexcept
		    : chars((const char*) _chars), len(_length) {
			ensureConstLiteral();
		}
		constexpr StaticStr(const StaticStr&) noexcept = default;
		constexpr StaticStr(StaticStr&&) noexcept      = default;
		constexpr StaticStr& operator=(const StaticStr&) noexcept = default;
		constexpr StaticStr& operator=(StaticStr&&) noexcept = default;
		constexpr StaticStr(const char* _chars) noexcept
		    : chars(_chars), len(std::char_traits<char>::length(_chars)) {
#ifdef _DEBUG
			ensureConstLiteral();
#endif
		}

		static constexpr StaticStr UnsafeCreate(const u8& _chars, usize _length) noexcept {
			return StaticStr(&_chars, _length);
		}

		constexpr StaticStr& operator=(const char* _chars) noexcept {
			chars = _chars;
			len   = std::char_traits<char>::length(_chars);
#ifdef _DEBUG
			ensureConstLiteral();
#endif
			return *this;
		}

		constexpr const u8& GetDataReference() const noexcept { return (const u8&) *chars; }
		constexpr const char* UnsafeGetRawDataPointer() const noexcept { return chars; }
		constexpr usize GetByteLength() const noexcept { return len; }
		constexpr explicit operator bool() const noexcept { return chars && len; }

		uint64_t GetHashCode() const noexcept {
			return std::hash<std::string_view>()(std::string_view(chars, (size_t) len));
		}

		constexpr operator Str() const noexcept { return Str(chars, len); }

	   private:
		constexpr void ensureConstLiteral() {
			if (!std::is_constant_evaluated()) {
				if (chars && !IsConstantStringLiteral(chars))
					throw InvalidArgumentException();
			}
		}

		const char* chars;
		usize len;
	};

	inline constexpr bool operator==(Str lhs, Str rhs) noexcept {
		return lhs.GetByteLength() == rhs.GetByteLength() &&
		       (lhs.UnsafeGetRawDataPointer() == rhs.UnsafeGetRawDataPointer() ||
		        std::char_traits<char>::compare(lhs.UnsafeGetRawDataPointer(),
		                                        rhs.UnsafeGetRawDataPointer(),
		                                        (size_t)lhs.GetByteLength()) == 0);
	}

	inline constexpr bool operator!=(Str lhs, Str rhs) noexcept { return !(lhs == rhs); }

	inline constexpr int operator<=>(Str lhs, Str rhs) noexcept {
		const int result = std::char_traits<char>::compare(
		    lhs.UnsafeGetRawDataPointer(), rhs.UnsafeGetRawDataPointer(), std::min((size_t)lhs.GetByteLength(), (size_t)rhs.GetByteLength()));
		if (result != 0) {
			return result;
		}
		return size_t(lhs.GetByteLength()) - size_t(rhs.GetByteLength());
	}

	template <class... Args>
	struct StringInterpolation {
		const Str formatString;
		const std::tuple<Args...> args;

		StringInterpolation(Str formatString, const Args&... args)
		    : formatString(formatString), args(args...) {}
	};

	template <StaticStr const&... Strings>
	constexpr auto CompileTimeStringConcat() {
		constexpr size_t total_len =
		    (Strings.GetByteLength() + ... + 0);  // +0 for empty pack safety
		std::array<char, total_len + 1> arr {};   // +1 for null terminator

		size_t offset = 0;
		((std::copy(Strings.UnsafeGetRawDataPointer(),
		            Strings.UnsafeGetRawDataPointer() + size_t(Strings.GetByteLength()),
		            arr.begin() + offset),
		  offset += Strings.GetByteLength()),
		 ...);

		arr[total_len] = '\0';
		return arr;
	}

	static bool IsConstantStringLiteral(const char* str) noexcept {
#if ADV_VERSION_LINUX || ADV_VERSION_FREEBSD
		return str > &etext && str < &edata;
#else
		static const char* test          = "__test__";
		static const size_t probeAddress = (size_t) test;
		if constexpr (sizeof(void*) > 4) {
			return std::abs(ptrdiff_t(size_t(str) - probeAddress)) < 50000000LL;
		} else {
			return false;
		}
#endif
	}

}  // namespace Builtin