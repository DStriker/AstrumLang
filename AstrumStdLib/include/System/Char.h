#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"

namespace System {
namespace __Unsafe {} namespace __Char_Protected__Unsafe {}
//###############################################################################
//# Type definitions
//###############################################################################
	} namespace __extensions { using namespace System;
#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	using __extension_Char_3_byte = Builtin::u8;
	#line 4 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAscii(__extension_Char_3_byte const& __this ) -> const bool;
	} namespace System{
using __extensions::getIsAscii;

		} namespace __extensions { using namespace System;
#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	using __extension_Char_7_char = Builtin::char32;
	} namespace System{

	//###############################################################################
//# Function definitions
//###############################################################################

} namespace __extensions { using namespace System;
#line 4 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAscii(__extension_Char_3_byte const& __this ) -> const bool
	{
		#line 4 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY((__this <=> Builtin::u8(0x7FU)) <= 0); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	

}