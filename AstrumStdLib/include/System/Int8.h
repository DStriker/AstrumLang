#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "System/Numerics/IMinMaxValue.h"
using namespace System::Numerics;
#include "Optional.h"

namespace System {
namespace __Unsafe {} namespace __Int8_Protected__Unsafe {}
//###############################################################################
//# Global type aliases
//###############################################################################
#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
using Int8 = Builtin::i8;
#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
using SByte = Builtin::i8;
//###############################################################################
//# Type definitions
//###############################################################################
	} namespace __extensions { using namespace System;
#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	using __extension_Int8_10_i8 = Builtin::i8;
	#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE(IMinMaxValue, IMinMaxValue);
	#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class __TT> requires std::same_as<__TT, __extension_Int8_10_i8> inline constexpr auto __static_getMin() -> const __extension_Int8_10_i8;
	#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class __TT> requires std::same_as<__TT, __extension_Int8_10_i8> inline constexpr auto __static_getMax() -> const __extension_Int8_10_i8;
	#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i8, IMinMaxValue, IMinMaxValue, i8);
	} namespace System{
using __extensions::__static_getMin;
using __extensions::__static_getMax;

		} namespace __extensions { using namespace System;
#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	using __extension_Int8_15_i8 = Builtin::i8;
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class __TT> requires std::same_as<__TT, __extension_Int8_15_i8> inline constexpr auto __static_getOne() -> const __extension_Int8_15_i8;
	#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class __TT> requires std::same_as<__TT, __extension_Int8_15_i8> inline constexpr auto __static_getZero() -> const __extension_Int8_15_i8;
	#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class __TT> requires std::same_as<__TT, __extension_Int8_15_i8> inline constexpr auto __static_getMinusOne() -> const __extension_Int8_15_i8;
	} namespace System{
using __extensions::__static_getOne;
using __extensions::__static_getZero;
using __extensions::__static_getMinusOne;

		} namespace __extensions { using namespace System;
#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	using __extension_Int8_22_i8 = Builtin::i8;
	#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ASTRUMSTD_API auto _operator_eq_eq_qst(__extension_Int8_22_i8 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool;
	#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto operator<=>(__extension_Int8_22_i8 const& __this LIFETIMEBOUND, Builtin::Nullable<__extension_Int8_22_i8> rhs)  -> const Builtin::i32;
	} namespace System{
using __extensions::_operator_eq_eq_qst;
using __extensions::operator<=>;

		} namespace __extensions { using namespace System;
#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	using __extension_Int8_45_i8 = Builtin::i8;
	#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE(IAbstractComparable, IAbstractComparable);
	#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ASTRUMSTD_API auto _operator_lt_eq_gt_qst(__extension_Int8_45_i8 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32;
	#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i8, IAbstractComparable, IAbstractComparable, i8);
	} namespace System{
using __extensions::_operator_lt_eq_gt_qst;

	//###############################################################################
//# Function definitions
//###############################################################################

} namespace __extensions { using namespace System;
#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class __TT> requires std::same_as<__TT, __extension_Int8_10_i8> inline constexpr auto __static_getMin() -> const __extension_Int8_45_i8
	{
		#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::i8(-128)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class __TT> requires std::same_as<__TT, __extension_Int8_10_i8> inline constexpr auto __static_getMax() -> const __extension_Int8_45_i8
	{
		#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(+Builtin::i8(127)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	
} namespace __extensions { using namespace System;
#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class __TT> requires std::same_as<__TT, __extension_Int8_15_i8> inline constexpr auto __static_getOne() -> const __extension_Int8_45_i8
	{
		#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::i8(1)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class __TT> requires std::same_as<__TT, __extension_Int8_15_i8> inline constexpr auto __static_getZero() -> const __extension_Int8_45_i8
	{
		#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::i8(0)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class __TT> requires std::same_as<__TT, __extension_Int8_15_i8> inline constexpr auto __static_getMinusOne() -> const __extension_Int8_45_i8
	{
		#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::i8(-1)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	
} namespace __extensions { using namespace System;
#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto operator<=>(__extension_Int8_22_i8 const& __this LIFETIMEBOUND, Builtin::Nullable<__extension_Int8_45_i8> rhs)  -> const Builtin::i32
	{
		#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		{
			#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			if ((!Builtin::Is(rhs, nullptr))) {
				#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				auto __tmp0 = *rhs; const auto& rhs = __tmp0;
				
				#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				return __this <=> rhs;
			}
		}
		#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return Builtin::i8((signed char)1);
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	

}