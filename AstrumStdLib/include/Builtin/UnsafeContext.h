#pragma once
#include "Exceptions.h"

namespace Builtin {
	struct UnsafeContextGuard {
#ifdef Builtin_CONTEXT_SAFETY_CHECKS
		UnsafeContextGuard() { ++depth; }

		~UnsafeContextGuard() { --depth; }

		static bool isUnsafe() { return depth > 0; }

	   private:
		static thread_local int depth;
#endif
	};

	inline void CheckForUnsafeContext() {
#ifdef Builtin_CONTEXT_SAFETY_CHECKS
		if (!UnsafeContextGuard::isUnsafe())
			throw SafetyException;
#endif
	}
}  // namespace Builtin