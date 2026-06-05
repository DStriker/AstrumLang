#pragma once
#include "DebugPrint.h"
#include "Exceptions.h"
#if defined(_DEBUG) && !defined(ADV_UNITTEST)
#define ADV_ENABLE_ASSERT_CHECKS
#endif
#if defined(ADV_ENABLE_ASSERT_CHECKS) || defined(ADV_UNITTEST)
#define ADV_ASSERT(condition, ...) Builtin::Assert(condition, __VA_ARGS__);
#else
#define ADV_ASSERT(...)
#endif  // (ADV_ENABLE_ASSERT_CHECKS) || defined(ADV_UNITTEST)

namespace Builtin {
	struct AssertException : public std::runtime_error {
		AssertException() : std::runtime_error("Assertion failed") {}
	};

	struct AssertInfo {
		size_t PassedAsserts = 0;
		size_t FailedAsserts = 0;
	};

	AssertInfo& GetAssertInfo();

	inline constexpr void Assert(bool condition, Str message = u"") {
		if (std::is_constant_evaluated())
		{
			if (!condition)
			{
				throw false;
			}
		} else {
#ifdef ADV_ENABLE_ASSERT_CHECKS
			if (!condition) {
				print(message);
				throw AssertException {};
				// breakpoint
				__debugbreak();
			}
#elif defined(ADV_UNITTEST)
			if (condition) {
				GetAssertInfo().PassedAsserts++;
			} else {
				GetAssertInfo().FailedAsserts++;
				__debugbreak();
			}
#endif
		}
	}
}  // namespace Builtin