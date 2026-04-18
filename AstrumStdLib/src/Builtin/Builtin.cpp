#include "Builtin.h"

#include "UnsafeContext.h"

NullRefT NullRef {};

namespace CppAdvance {
#ifdef CPPADVANCE_CONTEXT_SAFETY_CHECKS
	thread_local int UnsafeContextGuard::depth = 0;
#endif

	AssertInfo& GetAssertInfo() {
		static AssertInfo info {};
		return info;
	}

	ADV_MAIN_FUNC_SIGNATURE ApplicationMainPtr;

	int TestMain(int argc, char** argv) {
		std::cout << "Passed tests: " << GetAssertInfo().PassedAsserts << std::endl;
		std::cout << "Failed tests: " << GetAssertInfo().FailedAsserts << std::endl;
		return 0;
	}

	int AstrumMainStartup(int argc, char** argv) {
		return ApplicationMainPtr(/*forward arguments*/);
	}
}  // namespace CppAdvance
