#pragma once
#include "InlineArray.h"
#include "Integer.h"

#if defined(__linux__) && (!defined(__ANDROID_API__) || __ANDROID_API__ >= 18)
#define ADV_VERSION_HAVE_LINUX_GETAUXVAL 1
#include <sys/auxv.h>
#ifdef ADV_VERSION_ARM
#include <asm/hwcap.h>
#endif
#else
#define ADV_VERSION_HAVE_LINUX_GETAUXVAL 0
#endif

namespace Builtin {
#if ADV_VERSION_X86
	using CpuidInfoType = InlineArray<4, u32>;
	inline CpuidInfoType CpuIdX86(unsigned leaf, unsigned subleaf) noexcept {
		CpuidInfoType reg = {};
#if defined(MSVC)
		int buf[4];
		__cpuidex(buf, leaf, subleaf);
		std::memcpy(&reg, buf, sizeof(buf));

#else

#if defined(__i386__) && defined(__PIC__)
		// %ebx may be the PIC register
		__asm__(
		    "xchg{l}\t{%%}ebx, %1\n\t"
		    "cpuid\n\t"
		    "xchg{l}\t{%%}ebx, %1\n\t"
		    : "=a"(reg[0]), "=r"(reg[1]), "=c"(reg[2]), "=d"(reg[3])
		    : "0"(leaf), "2"(subleaf));

#else
		__asm__("cpuid\n\t"
		        : "=a"(reg[0]), "=b"(reg[1]), "=c"(reg[2]), "=d"(reg[3])
		        : "0"(leaf), "2"(subleaf));
#endif
#endif
		return reg;
	}

	inline u32 Xcr0LowX86() noexcept {
#if defined(MSVC)
#if _MSC_VER >= 1400
		return static_cast<uint32_t>(_xgetbv(0));
#else
#error "_MSC_VER < 1400 is not supported"
#endif

#else
		uint32_t xcr0 = {};
		__asm__(
		    "xorl %%ecx, %%ecx\n"
		    "xgetbv\n"
		    : "=a"(xcr0)
		    :
#if defined(__i386__)
		    : "ecx", "edx"
#else
		    : "rcx", "rdx"
#endif
		);
		return xcr0;
#endif
	}

#else

	inline CpuidInfoType CpuIdX86(unsigned /* leaf */, unsigned /* subleaf */) noexcept {
		return {};  // All bits to zero
	}

	inline u32 Xcr0LowX86() noexcept {
		return {};  // All bits to zero
	}

#endif


#if ADV_VERSION_ARM64 && (defined(__GNUC__) || defined(__clang__))
	__attribute__((target("arch=armv8-a+sve"))) inline u64 RdvlArmUnsafe() {
		u64 vl;
		__asm__ volatile("rdvl %0, #1" : "=r"(vl));
		return vl;
	}
#else
	inline u64 RdvlArmUnsafe() { return 0u; }
#endif

#if ADV_VERSION_HAVE_LINUX_GETAUXVAL
	inline u64 GetAuxval(uint64_t type) noexcept {
		return getauxval(type);
	}
#else
	inline u64 GetAuxval(uint64_t) noexcept {
		return {};  // All bits set to 0
	}
#endif
}  // namespace Builtin

#ifdef HWCAP2_I8MM
#define ADV_VERSION_HWCAP2_I8MM HWCAP2_I8MM
#else
#define ADV_VERSION_HWCAP2_I8MM 0
#endif