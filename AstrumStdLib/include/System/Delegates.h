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
#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Delegates.ast"
template<class T> using GeneratorFunc = Builtin::FunctionRef<T ()>;
//###############################################################################
//# Global compile-time constants
//###############################################################################
#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Delegates.ast"
inline constexpr auto DefaultComparator = [] (auto lhs, auto rhs) { ADV_EXPRESSION_BODY(lhs <=> rhs); };
#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Delegates.ast"
inline constexpr auto DefaultAscendingComparator = [] (auto lhs, auto rhs) { ADV_EXPRESSION_BODY(lhs <=> rhs); };
#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Delegates.ast"
inline constexpr auto DefaultDescendingComparator = [] (auto lhs, auto rhs) { ADV_EXPRESSION_BODY(rhs <=> lhs); };
#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Delegates.ast"
inline constexpr auto DefaultEqualityComparer = [] (auto lhs, auto rhs) { ADV_EXPRESSION_BODY(lhs == rhs); };
#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Delegates.ast"
inline constexpr auto DefaultNonEqualityComparer = [] (auto lhs, auto rhs) { ADV_EXPRESSION_BODY(lhs != rhs); };
#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Delegates.ast"
inline constexpr auto DefaultLessThan = [] (auto lhs, auto rhs) { ADV_EXPRESSION_BODY((lhs <=> rhs) < 0); };
#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Delegates.ast"
inline constexpr auto DefaultLessThanOrEqual = [] (auto lhs, auto rhs) { ADV_EXPRESSION_BODY((lhs <=> rhs) <= 0); };
#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Delegates.ast"
inline constexpr auto DefaultGreaterThan = [] (auto lhs, auto rhs) { ADV_EXPRESSION_BODY((lhs <=> rhs) > 0); };
#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Delegates.ast"
inline constexpr auto DefaultGreaterThanOrEqual = [] (auto lhs, auto rhs) { ADV_EXPRESSION_BODY((lhs <=> rhs) >= 0); };
} namespace $extensions {
} namespace System {
//###############################################################################
//# Function definitions
//###############################################################################


}