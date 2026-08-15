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
namespace __Unsafe {} namespace __Simd$Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
class Simd;
//###############################################################################
//# Type definitions
//###############################################################################
#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
	struct Simd : public Builtin::StaticClass {
		public: using $self = Simd;
		private: template<class L, class... Archs> class SupportedHelper;
		public: 
		#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
		struct UnsupportedArch : public SimdInstructionSet {
			public: using $self = UnsupportedArch;
			private: using $super = SimdInstructionSet;
			#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
			ADV_CHECK_STATIC_CLASS("SimdInstructionSet", SimdInstructionSet);
			private: UnsupportedArch() = default;
			#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
			public: static constexpr bool IsCompileTimeSupported = Builtin::Boolean(false);
			#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
			public: static constexpr Builtin::usize Alignment = Builtin::u32(0U);
			#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
			public: static constexpr bool RequiresAlignment = Builtin::Boolean(false);
			#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
			public: static constexpr Builtin::Str Name = Builtin::Str{"Unsupported"};
			
		};
		
		public: 
		#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
		template<class... Archs> struct ArchList : public Builtin::StaticClass {
			public: using $self = ArchList<Archs...>;
			#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
			public: using Best = std::conditional_t<std::is_same_v<typename Builtin::template TypeListHead<Archs...>, typename Builtin::FakeTypeTag>, UnsupportedArch, typename Builtin::template TypeListHead<Archs...>>;
			#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
			public: template<class Arch> using Add = ArchList<Archs..., Arch>;
			#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
			public: template<class... Other> using Extend = ArchList<Archs..., Other...>;
			private: ArchList() = default;
			
		};
		
		private: 
		#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
		template<class L> struct SupportedHelper<L, ArchList<>> : public Builtin::StaticClass {
			public: using $self = SupportedHelper<L, ArchList<>>;
			#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
			public: using SupportedType = L;
			private: SupportedHelper() = default;
			
		};
		
		private: 
		#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
		template<class L, class Arch, class... Archs> struct SupportedHelper<L, ArchList<Arch, Archs...>> : public SupportedHelper<std::conditional_t<ADV_USPCS(IsCompileTimeSupported, Arch)(), typename L::template Add<Arch>, L>, ArchList<Archs...>> {
			public: using $self = SupportedHelper<L, ArchList<Arch, Archs...>>;
			private: using $super = SupportedHelper<std::conditional_t<ADV_USPCS(IsCompileTimeSupported, Arch)(), typename L::template Add<Arch>, L>, ArchList<Archs...>>;
			#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
			ADV_CHECK_STATIC_CLASS("SupportedHelper<Arch.IsCompileTimeSupported?L.Add<Arch>:L,ArchList<Archs...>>", SupportedHelper<std::conditional_t<ADV_USPCS(IsCompileTimeSupported, Arch)(), typename L::template Add<Arch>, L>, ArchList<Archs...>>);
			private: SupportedHelper() = default;
			
		};
		
		private: 
		#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
		template<class... Archs> struct Supported : public SupportedHelper<ArchList<>, Archs...> {
			public: using $self = Supported<Archs...>;
			private: using $super = SupportedHelper<ArchList<>, Archs...>;
			#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
			ADV_CHECK_STATIC_CLASS("SupportedHelper<ArchList<>,Archs...>", SupportedHelper<ArchList<>, Archs...>);
			private: Supported() = default;
			
		};
		
		private: 
		#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
		template<class Functor, class... Archs> struct InvokeDispatcher : public Builtin::StaticClass {
			public: using $self = InvokeDispatcher<Functor, Archs...>;
			#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
			public: using UsedInstructionSets = ArchList<Archs...>;
			private: InvokeDispatcher() = default;
			#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
			private: template<class Arch> static auto WalkInstructionSets()  -> auto;
			#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
			private: template<class Arch, class ArchNext, class... ArchTail> static auto WalkInstructionSets()  -> auto;
			#line 72 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
			public: template<class... Args> static auto Invoke(Args&&... args)  -> decltype(auto);
			
		};
		
		public: 
		
		public: 
		
		private: 
		
		private: 
		
		private: 
		
		private: 
		
		#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
		public: using AllInstructionSets = ArchList<I8mmNeon64, Neon64, Neon, Avx512VnniAvx512Vbmi2, Avx512Vbmi2, Avx512Vbmi, Avx512IFMA, Avx512PF, Avx512VnniAvx512BW, Avx512BW, Avx512ER, Avx512DQ, Avx512VL128, Avx512VL256, Avx512CD, Avx512F, AvxVnni, Fma3Avx2, Avx2, Fma3Avx, Avx, Avx2128, Avx128, Fma4, Fma3Sse42, Sse42, Sse41, Ssse3, Sse3, Sse2>;
		#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
		public: using ArmInstructionSets = ArchList<I8mmNeon64, Neon64, Neon>;
		#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
		public: using X86InstructionSets = ArchList<Avx512VnniAvx512Vbmi2, Avx512Vbmi2, Avx512Vbmi, Avx512IFMA, Avx512PF, Avx512VnniAvx512BW, Avx512BW, Avx512ER, Avx512DQ, Avx512VL128, Avx512VL256, Avx512CD, Avx512F, AvxVnni, Fma3Avx2, Avx2, Fma3Avx, Avx, Avx2128, Avx128, Fma4, Fma3Sse42, Sse42, Sse41, Ssse3, Sse3, Sse2>;
		#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
		public: using InstructionSets128 = ArchList<I8mmNeon64, Neon64, Neon, Avx512VL128, Avx2128, Avx128, Fma4, Fma3Sse42, Sse42, Sse41, Ssse3, Sse3, Sse2>;
		#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
		public: using InstructionSets256 = ArchList<Avx512VL256, AvxVnni, Fma3Avx2, Avx2, Fma3Avx, Avx>;
		#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
		public: using InstructionSets512 = ArchList<Avx512VnniAvx512Vbmi2, Avx512Vbmi2, Avx512Vbmi, Avx512IFMA, Avx512PF, Avx512VnniAvx512BW, Avx512BW, Avx512ER, Avx512DQ, Avx512CD, Avx512F>;
		#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
		public: using SupportedInstructionSets = typename Supported<AllInstructionSets>::SupportedType;
		#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
		public: using DefaultInstructionSet = typename SupportedInstructionSets::Best;
		#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
		public: using DefaultInstructionSet128 = typename Supported<InstructionSets128>::SupportedType::Best;
		#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
		public: using DefaultInstructionSet256 = typename Supported<InstructionSets256>::SupportedType::Best;
		#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
		public: using DefaultInstructionSet512 = typename Supported<InstructionSets512>::SupportedType::Best;
		private: Simd() = default;
		#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
		public: template<class Functor, class... Archs, class... Args> static auto RuntimeDispatch(Args&&... args)  -> decltype(auto);
		
	};
	
	} namespace $extensions {
template<class __TT> struct $static_IsCompileTimeSupported;
template<class __TT> struct $static_getIsCompileTimeSupported;
template<class __TT> struct $static_IsRuntimeAvailable;
template<class __TT> struct $static_getIsRuntimeAvailable;
template<class __TT> struct $static_Length;
template<class __TT> struct $static_getLength;
template<class __TT> struct $static_Sum;
template<class __TT> struct $static_getSum;
} namespace System::Runtime::Intrinsics {
//###############################################################################
//# Function definitions
//###############################################################################

#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
	template<class Functor, class... Archs> template<class Arch> auto Simd::InvokeDispatcher<Functor, Archs...>::WalkInstructionSets()  -> auto
	{
		#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
		ADV_ASSERT((ADV_USPCS(IsRuntimeAvailable, Arch)()), "Arch.IsRuntimeAvailable");
		#line 62 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
		return Functor::template Invoke<Arch>;
	}
#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
	template<class Functor, class... Archs> template<class Arch, class ArchNext, class... ArchTail> auto Simd::InvokeDispatcher<Functor, Archs...>::WalkInstructionSets()  -> auto
	{
		#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
		if (ADV_USPCS(IsRuntimeAvailable, Arch)()) {
			#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
			return Functor::template Invoke<Arch>;
		}
		#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
		return WalkInstructionSets<ArchNext, ArchTail...>();
	}
#line 72 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
	template<class Functor, class... Archs> template<class... Args> auto Simd::InvokeDispatcher<Functor, Archs...>::Invoke(Args&&... args)  -> decltype(auto)
	{
		#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
		static const Builtin::Auto<decltype(WalkInstructionSets<Archs...>())> invokeTarget = WalkInstructionSets<Archs...>(); 
		#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
		return invokeTarget(std::forward<decltype(args)>(args)...);
	}
#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
	template<class Functor, class... Archs, class... Args> auto Simd::RuntimeDispatch(Args&&... args)  -> decltype(auto)
	{
		#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
		return InvokeDispatcher<Functor, Archs...>::Invoke(std::forward<decltype(args)>(args)...);
	}
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
	

}