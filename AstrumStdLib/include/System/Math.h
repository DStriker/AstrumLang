#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "Int8.h"
#include "UInt8.h"

namespace System {
namespace __Unsafe {} namespace __Math_Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
class Math;
//###############################################################################
//# Type definitions
//###############################################################################
#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	struct Math : public Builtin::StaticClass {
		public: using __self = Math;
		private: Math() = default;
		#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: inline constexpr static auto Isqrt8(Builtin::u8 num)  -> const Builtin::u8;
		
	};
	
	//###############################################################################
//# Function definitions
//###############################################################################

#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	inline constexpr auto Math::Isqrt8(Builtin::u8 num)  -> const Builtin::u8
	{
		#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(Builtin::u8(0U)); 
	}
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	

}