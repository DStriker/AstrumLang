#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "SimdVector.h"
#include "System/Float32.h"
using namespace System;
#include "System/Float64.h"
using namespace System;

namespace System::Runtime::Intrinsics {
namespace __Unsafe {} namespace __CommonInstructions_Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
class CommonInstructions;
//###############################################################################
//# Type definitions
//###############################################################################
#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	struct CommonInstructions : public SimdInstructionSet {
		public: using __self = CommonInstructions;
		#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		ADV_CHECK_STATIC_CLASS("SimdInstructionSet", SimdInstructionSet);
		private: CommonInstructions() = default;
		#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Abs(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto BitOfSign(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		
	};
	
	//###############################################################################
//# Function definitions
//###############################################################################

#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Abs(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, IUnsignedNumber>()) {
			#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return vec;
		} else {
			#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{
				#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(BitOfSign(vec))> sign = BitOfSign(vec); 
				#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(vec ^ sign)> inv = vec ^ sign; 
				#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return inv - sign;
			}
		}
		return {};
	}
#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::BitOfSign(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using Vec = SimdVector<T, Arch>;
		#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, IUnsignedNumber>()) {
			#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return ADV_USPCS(Zero, Vec)();
		} else {
			#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if constexpr (Builtin::TypeIs<T, IBinaryInteger>()) {
				#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return vec >> (Builtin::i32(8) * Builtin::usize(sizeof (T)) - Builtin::i32(1));
			} else {
				#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				if constexpr (std::is_same_v<T, Builtin::f32>) {
					#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					return vec & ADV_USFCS((Builtin::f32), FromBits)(Builtin::u32(0x80000000U));
				} else {
					#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					if constexpr (std::is_same_v<T, Builtin::f64>) {
						#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
						return vec & ADV_USFCS((Builtin::f64), FromBits)(Builtin::u64(0x8000000000000000ULL));
					} else {
						#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
						{
							#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
							static_assert(Builtin::Boolean(false), "Unsupported type");
							#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
							return vec;
						}
					}
				}
			}
		}
		return {};
	}
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	

}