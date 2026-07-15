#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "UInt32.h"
#include "UInt64.h"

namespace System {
namespace __Unsafe {} namespace __Str_Protected__Unsafe {}
//###############################################################################
//# Type definitions
//###############################################################################
	} namespace __extensions { using namespace System;
#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	using __extension_Str_7_str = Builtin::Str;
	#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getByteLength(__extension_Str_7_str const& __this ) -> const Builtin::usize;
	} namespace System{
using __extensions::getByteLength;

	//###############################################################################
//# Global compile-time constants
//###############################################################################
inline constexpr Builtin::Str __strconst_0x1d194bbb530_0 = "Begin ";
inline constexpr Builtin::Str __strconst_0x1d194bbb530_1 = " Middle ";
inline constexpr Builtin::Str __strconst_0x1d194bbb530_2 = " End";
//###############################################################################
//# Function definitions
//###############################################################################

} namespace __extensions { using namespace System;
#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getByteLength(__extension_Str_7_str const& __this ) -> const Builtin::usize
	{
		#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GetByteLength)(__this.__ref())); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	

}