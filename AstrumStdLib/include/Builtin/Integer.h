#pragma once
//#define CPPADVANCE_OVERFLOW_CHECKS
#ifdef CPPADVANCE_OVERFLOW_CHECKS
#include "SafeInt.h"
#else
#include "FastInt.h"
#endif
#include <string_view>

#include "CInterop.h"

namespace CppAdvance {
#ifdef CPPADVANCE_OVERFLOW_CHECKS
	using i8    = SafeInt<int8_t>;
	using i16   = SafeInt<int16_t>;
	using i32   = SafeInt<int32_t>;
	using i64   = SafeInt<int64_t>;
	using u8    = SafeInt<uint8_t>;
	using u16   = SafeInt<uint16_t>;
	using u32   = SafeInt<uint32_t>;
	using u64   = SafeInt<uint64_t>;
	using isize = SafeInt<ptrdiff_t>;
	using usize = SafeInt<size_t>;
#else
	using i8    = FastInt<int8_t>;
	using i16   = FastInt<int16_t>;
	using i32   = FastInt<int32_t>;
	using i64   = FastInt<int64_t>;
	using u8    = FastInt<uint8_t>;
	using u16   = FastInt<uint16_t>;
	using u32   = FastInt<uint32_t>;
	using u64   = FastInt<uint64_t>;
	using isize = FastInt<ptrdiff_t>;
	using usize = FastInt<size_t>;
#endif

	template <int64_t Number>
	struct IntLiteral {
		constexpr IntLiteral() noexcept = default;

		constexpr explicit operator bool() const noexcept { return !!Number; }

		constexpr operator char() const noexcept {
			static_assert(Number >= std::numeric_limits<char>::min() &&
			                  Number <= std::numeric_limits<char>::max(),
			              "Integer literal is out of range for char type");
			return Number;
		}

		constexpr operator signed char() const noexcept {
			static_assert(Number >= std::numeric_limits<signed char>::min() &&
			                  Number <= std::numeric_limits<signed char>::max(),
			              "Integer literal is out of range for i8 type (-128..127)");
			return Number;
		}

		constexpr operator unsigned char() const noexcept {
			static_assert(Number >= 0 && Number <= std::numeric_limits<unsigned char>::max(),
			              "Integer literal is out of range for u8 type (0..255)");
			return Number;
		}

		constexpr operator short() const noexcept {
			static_assert(Number >= std::numeric_limits<short>::min() &&
			                  Number <= std::numeric_limits<short>::max(),
			              "Integer literal is out of range for i16 type (-32768..32767)");
			return Number;
		}

		constexpr operator unsigned short() const noexcept {
			static_assert(Number >= 0 && Number <= std::numeric_limits<unsigned short>::max(),
			              "Integer literal is out of range for u16 type (0..65535)");
			return Number;
		}

		constexpr operator int() const noexcept {
			static_assert(Number >= std::numeric_limits<int>::min() &&
			                  Number <= std::numeric_limits<int>::max(),
			              "Integer literal is out of range for i32 type (-2147483648..2147483647)");
			return Number;
		}

		constexpr operator unsigned int() const noexcept {
			static_assert(Number >= 0 && Number <= std::numeric_limits<unsigned int>::max(),
			              "Integer literal is out of range for u32 type (0..4294967295)");
			return Number;
		}

		constexpr operator long() const noexcept {
			static_assert(Number >= std::numeric_limits<long>::min() &&
			                  Number <= std::numeric_limits<long>::max(),
			              "Integer literal is out of range for native long type");
			return Number;
		}

		constexpr operator unsigned long() const noexcept {
			static_assert(Number >= 0 && Number <= std::numeric_limits<unsigned long>::max(),
			              "Integer literal is out of range for native unsigned long type");
			return Number;
		}

		constexpr operator long long() const noexcept { return Number; }

		constexpr operator unsigned long long() const noexcept {
			static_assert(Number >= 0, "Integer literal is out of range for u64 type");
			return Number;
		}

		constexpr operator wchar_t() const noexcept {
			static_assert(Number >= std::numeric_limits<wchar_t>::min() &&
			              Number <= std::numeric_limits<wchar_t>::max());
			return Number;
		}

		constexpr operator i8() const noexcept {
			static_assert(Number >= std::numeric_limits<signed char>::min() &&
			                  Number <= std::numeric_limits<signed char>::max(),
			              "Integer literal is out of range for i8 type (-128..127)");
			return (int8_t) Number;
		}

		constexpr operator u8() const noexcept {
			static_assert(Number >= 0 && Number <= std::numeric_limits<unsigned char>::max(),
			              "Integer literal is out of range for u8 type (0..255)");
			return (uint8_t) Number;
		}

		constexpr operator i16() const noexcept {
			static_assert(Number >= std::numeric_limits<short>::min() &&
			                  Number <= std::numeric_limits<short>::max(),
			              "Integer literal is out of range for i16 type (-32768..32767)");
			return (int16_t) Number;
		}

		constexpr operator u16() const noexcept {
			static_assert(Number >= 0 && Number <= std::numeric_limits<unsigned short>::max(),
			              "Integer literal is out of range for u16 type (0..65535)");
			return (uint16_t) Number;
		}

		constexpr operator i32() const noexcept {
			static_assert(Number >= std::numeric_limits<int>::min() &&
			                  Number <= std::numeric_limits<int>::max(),
			              "Integer literal is out of range for i32 type (-2147483648..2147483647)");
			return (int32_t) Number;
		}

		constexpr operator u32() const noexcept {
			static_assert(Number >= 0 && Number <= std::numeric_limits<unsigned int>::max(),
			              "Integer literal is out of range for u32 type (0..4294967295)");
			return (uint32_t) Number;
		}

		constexpr operator i64() const noexcept { return Number; }

		constexpr operator u64() const noexcept {
			static_assert(Number >= 0, "Integer literal is out of range for u64 type");
			return (uint64_t) Number;
		}
	};

	struct BigIntLiteral {
		const std::string_view literal;
		constexpr BigIntLiteral(const char* lit) noexcept : literal(lit) {}
		constexpr explicit operator bool() const noexcept { return literal.size() > 0; }
	};

	// template <class T, template <class...> class U>
	// concept SpecializationOf = std::invocable<decltype([]<typename... Args>(U<Args...> const&) {
	// }), T > ;
}  // namespace CppAdvance