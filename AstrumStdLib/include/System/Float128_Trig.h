#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"

namespace System {
namespace __Unsafe {} namespace __Float128_Trig_Protected__Unsafe {}
//###############################################################################
//# Free function declarations
//###############################################################################
#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
	ASTRUMSTD_HIDDEN auto SinImpl(Builtin::f128 x)  -> const Builtin::f128;
#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
	ASTRUMSTD_HIDDEN auto CosImpl(Builtin::f128 x)  -> const Builtin::f128;
#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
	ASTRUMSTD_HIDDEN auto SinCosImpl(Builtin::f128 x)  -> const std::tuple<Builtin::f128, Builtin::f128>;
#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
	ASTRUMSTD_HIDDEN auto TanImpl(Builtin::f128 x)  -> const Builtin::f128;
#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
	ASTRUMSTD_HIDDEN auto AsinImpl(Builtin::f128 x)  -> const Builtin::f128;
#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
	ASTRUMSTD_HIDDEN auto AcosImpl(Builtin::f128 x)  -> const Builtin::f128;
#line 167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
	ASTRUMSTD_HIDDEN auto AtanImpl(Builtin::f128 x)  -> const Builtin::f128;
#line 224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
	ASTRUMSTD_HIDDEN auto Atan2Impl(Builtin::f128 y, Builtin::f128 x)  -> const Builtin::f128;
#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
	ASTRUMSTD_HIDDEN auto SinPiImpl(Builtin::f128 x)  -> const Builtin::f128;
#line 353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
	ASTRUMSTD_HIDDEN auto CosPiImpl(Builtin::f128 x)  -> const Builtin::f128;
#line 417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
	ASTRUMSTD_HIDDEN auto TanPiImpl(Builtin::f128 x)  -> const Builtin::f128;
//###############################################################################
//# Global compile-time constants
//###############################################################################
//###############################################################################
//# Function definitions
//###############################################################################


}