#pragma once
#include "DebugPrint.h"
#include "Exceptions.h"
#define ADV_ENABLE_ASSERT_CHECKS
#if defined(ADV_ENABLE_ASSERT_CHECKS) || defined(ADV_UNITTEST)
#define ADV_ASSERT(condition, ...) CppAdvance::Assert(condition, __VA_ARGS__);
#else
#define ADV_ASSERT(...)
#endif  // (ADV_ENABLE_ASSERT_CHECKS) || defined(ADV_UNITTEST)

namespace CppAdvance {
	struct AssertException : public std::runtime_error {
		AssertException() : std::runtime_error("Assertion failed") {}
	};

	struct AssertInfo {
		size_t PassedAsserts = 0;
		size_t FailedAsserts = 0;
	};

	AssertInfo& GetAssertInfo();

	inline void Assert(bool condition, Str message = u"") {
#ifdef ADV_ENABLE_ASSERT_CHECKS
		if (!condition) {
			print(message);
			throw AssertException {};
			// breakpoint
		}
#elif defined(ADV_UNITTEST)
		if (condition) {
			GetAssertInfo().PassedAsserts++;
		} else {
			GetAssertInfo().FailedAsserts++;
		}
#endif
	}
}  // namespace CppAdvance