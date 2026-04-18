#pragma once
#include "Exceptions.h"

namespace CppAdvance {
	struct UnsafeContextGuard {
#ifdef CPPADVANCE_CONTEXT_SAFETY_CHECKS
		UnsafeContextGuard() { ++depth; }

		~UnsafeContextGuard() { --depth; }

		static bool isUnsafe() { return depth > 0; }

	   private:
		static thread_local int depth;
#endif
	};

	inline void CheckForUnsafeContext() {
#ifdef CPPADVANCE_CONTEXT_SAFETY_CHECKS
		if (!UnsafeContextGuard::isUnsafe())
			throw SafetyException;
#endif
	}
}  // namespace CppAdvance