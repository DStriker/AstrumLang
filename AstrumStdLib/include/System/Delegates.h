#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"

namespace System {
namespace __Unsafe {} namespace __Delegates$Protected__Unsafe {}
//###############################################################################
//# Global type aliases
//###############################################################################
#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Delegates.ast"
template<class... Ts> using Action = Builtin::FunctionRef<void(Ts...)>;
#line 4 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Delegates.ast"
template<class T> using Predicate = Builtin::FunctionRef<bool (Builtin::In<T>)>;
#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Delegates.ast"
template<class T> using Comparator = Builtin::FunctionRef<Builtin::i32 (Builtin::In<T>, Builtin::In<T>)>;
#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Delegates.ast"
template<class T> using EqualityComparer = Builtin::FunctionRef<bool (Builtin::In<T>, Builtin::In<T>)>;
//###############################################################################
//# Global compile-time constants
//###############################################################################
#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Delegates.ast"
inline constexpr auto DefaultComparator = [] (auto lhs, auto rhs) { ADV_EXPRESSION_BODY(lhs <=> rhs); };
#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Delegates.ast"
inline constexpr auto DefaultAscendingComparator = [] (auto lhs, auto rhs) { ADV_EXPRESSION_BODY(lhs <=> rhs); };
#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Delegates.ast"
inline constexpr auto DefaultDescendingComparator = [] (auto lhs, auto rhs) { ADV_EXPRESSION_BODY(rhs <=> lhs); };
#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Delegates.ast"
inline constexpr auto DefaultEqualityComparer = [] (auto lhs, auto rhs) { ADV_EXPRESSION_BODY(lhs == rhs); };
} namespace $extensions {
} namespace System {
//###############################################################################
//# Function definitions
//###############################################################################


}