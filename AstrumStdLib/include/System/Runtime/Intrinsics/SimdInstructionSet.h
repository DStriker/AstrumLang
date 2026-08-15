#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "X86/X86.h"
using namespace X86;
#include "Arm/Arm.h"
using namespace Arm;

namespace System::Runtime::Intrinsics {
namespace __Unsafe {} namespace __SimdInstructionSet$Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
class SimdInstructionSet;
} namespace $extensions {
} namespace System::Runtime::Intrinsics {
//###############################################################################
//# Global type aliases
//###############################################################################
#if (ADV_VERSION_X86 )
#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdInstructionSet.ast"
using CpuFeatureSet = typename X86Features::CpuFeatureSet;
#endif 
#if (!(ADV_VERSION_X86 )) && (ADV_VERSION_ARM )
#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdInstructionSet.ast"
using CpuFeatureSet = typename ArmFeatures::CpuFeatureSet;
#endif 
#if (!(ADV_VERSION_X86 )) && (!(ADV_VERSION_ARM ))
#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdInstructionSet.ast"
using CpuFeatureSet = CommonCpuFeatureSet;
#endif 
//###############################################################################
//# Type definitions
//###############################################################################
#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdInstructionSet.ast"
	struct SimdInstructionSet : public Builtin::StaticClass {
		public: using $self = SimdInstructionSet;
		private: SimdInstructionSet() = default;
		#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdInstructionSet.ast"
		public: inline static auto getIsRuntimeAvailable()  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdInstructionSet.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, IsRuntimeAvailable, getIsRuntimeAvailable, bool);
		#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdInstructionSet.ast"
		public: static constexpr bool IsCompileTimeSupported = Builtin::Boolean(false);
		#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdInstructionSet.ast"
		public: static constexpr Builtin::usize Alignment = Builtin::u32(0U);
		#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdInstructionSet.ast"
		public: static constexpr bool RequiresAlignment = Builtin::Boolean(false);
		#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdInstructionSet.ast"
		public: static constexpr Builtin::Str Name = Builtin::Str{"none"};
		#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdInstructionSet.ast"
		public: template<class T> static constexpr bool IsSimdType = Builtin::IsAnyOf<T, Builtin::i8, Builtin::u8, Builtin::i16, Builtin::u16, Builtin::i32, Builtin::u32, Builtin::i64, Builtin::u64, Builtin::f32, Builtin::f64>;
		
	};
	
	//###############################################################################
//# Function definitions
//###############################################################################

#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdInstructionSet.ast"
	inline auto SimdInstructionSet::getIsRuntimeAvailable()  -> bool 
	{
		#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdInstructionSet.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdInstructionSet.ast"
	

}