#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "SimdInstructionSet.h"
#include "Arm/package.h"
using namespace Arm;
#include "X86/package.h"
using namespace X86;

namespace System::Runtime::Intrinsics {
namespace __Unsafe {} namespace __Arch_Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
class UnsupportedArch;
class Simd;
//###############################################################################
//# Type definitions
//###############################################################################
#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Arch.ast"
	struct UnsupportedArch : public SimdInstructionSet {
		public: using __self = UnsupportedArch;
		#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Arch.ast"
		ADV_CHECK_STATIC_CLASS("SimdInstructionSet", SimdInstructionSet);
		private: UnsupportedArch() = default;
		#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Arch.ast"
		public: static constexpr bool IsCompileTimeSupported = Builtin::Boolean(false);
		#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Arch.ast"
		public: static constexpr Builtin::usize Alignment = Builtin::u32(0U);
		#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Arch.ast"
		public: static constexpr bool RequiresAlignment = Builtin::Boolean(false);
		#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Arch.ast"
		public: static constexpr Builtin::Str Name = Builtin::Str{"Unsupported"};
		
	};
	
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Arch.ast"
	struct Simd : public Builtin::StaticClass {
		public: using __self = Simd;
		private: template<class L, class... Archs> class SupportedHelper;
		public: 
		#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Arch.ast"
		template<class... Archs> struct ArchList : public Builtin::StaticClass {
			public: using __self = ArchList<Archs...>;
			#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Arch.ast"
			public: using Best = std::conditional_t<std::is_same_v<typename Builtin::template TypeListHead<Archs...>, typename Builtin::FakeTypeTag>, UnsupportedArch, typename Builtin::template TypeListHead<Archs...>>;
			#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Arch.ast"
			public: template<class Arch> using Add = ArchList<Archs..., Arch>;
			#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Arch.ast"
			public: template<class... Other> using Extend = ArchList<Archs..., Other...>;
			private: ArchList() = default;
			
		};
		
		private: 
		#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Arch.ast"
		template<class L> struct SupportedHelper<L, ArchList<>> : public Builtin::StaticClass {
			public: using __self = SupportedHelper<L, ArchList<>>;
			#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Arch.ast"
			public: using SupportedType = L;
			private: SupportedHelper() = default;
			
		};
		
		private: 
		#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Arch.ast"
		template<class L, class Arch, class... Archs> struct SupportedHelper<L, ArchList<Arch, Archs...>> : public SupportedHelper<std::conditional_t<ADV_USPCS(IsCompileTimeSupported, Arch)(), typename L::template Add<Arch>, L>, ArchList<Archs...>> {
			public: using __self = SupportedHelper<L, ArchList<Arch, Archs...>>;
			#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Arch.ast"
			ADV_CHECK_STATIC_CLASS("SupportedHelper<Arch.IsCompileTimeSupported?L.Add<Arch>:L,ArchList<Archs...>>", SupportedHelper<std::conditional_t<ADV_USPCS(IsCompileTimeSupported, Arch)(), typename L::template Add<Arch>, L>, ArchList<Archs...>>);
			private: SupportedHelper() = default;
			
		};
		
		private: 
		#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Arch.ast"
		template<class... Archs> struct Supported : public SupportedHelper<ArchList<>, Archs...> {
			public: using __self = Supported<Archs...>;
			#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Arch.ast"
			ADV_CHECK_STATIC_CLASS("SupportedHelper<ArchList<>,Archs...>", SupportedHelper<ArchList<>, Archs...>);
			private: Supported() = default;
			
		};
		
		public: 
		
		private: 
		
		private: 
		
		private: 
		
		#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Arch.ast"
		public: using AllInstructionSets = ArchList<I8mmNeon64, Neon64, Neon, Avx512VnniAvx512Vbmi2, Avx512Vbmi2, Avx512Vbmi, Avx512IFMA, Avx512PF, Avx512VnniAvx512BW, Avx512BW, Avx512ER, Avx512DQ, Avx512VL, Avx512CD, Avx512F, AvxVnni, Fma3Avx2, Avx2, Fma3Avx, Avx, Avx2128, Avx128, Fma4, Fma3Sse42, Sse42, Sse41, Ssse3, Sse3, Sse2>;
		#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Arch.ast"
		public: using ArmInstructionSets = ArchList<I8mmNeon64, Neon64, Neon>;
		#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Arch.ast"
		public: using X86InstructionSets = ArchList<Avx512VnniAvx512Vbmi2, Avx512Vbmi2, Avx512Vbmi, Avx512IFMA, Avx512PF, Avx512VnniAvx512BW, Avx512BW, Avx512ER, Avx512DQ, Avx512VL, Avx512CD, Avx512F, AvxVnni, Fma3Avx2, Avx2, Fma3Avx, Avx, Avx2128, Avx128, Fma4, Fma3Sse42, Sse42, Sse41, Ssse3, Sse3, Sse2>;
		#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Arch.ast"
		public: using SupportedInstructionSets = typename Supported<AllInstructionSets>::SupportedType;
		#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Arch.ast"
		public: using DefaultInstructionSet = typename SupportedInstructionSets::Best;
		private: Simd() = default;
		
	};
	
	