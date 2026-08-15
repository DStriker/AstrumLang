#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "System/Optional.h"
using namespace System;

namespace System::Numerics {
namespace __Unsafe {} namespace __ICheckedArithmetic$Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
class ICheckedArithmetic;
class ICheckedArithmetic$Unowned;
class ICheckedArithmetic$Weak;
} namespace $extensions {
} namespace System::Numerics {
//###############################################################################
//# Type definitions
//###############################################################################

}
template<> inline constexpr bool Builtin::__details::cheapCopy<System::Numerics::ICheckedArithmetic> = false;

namespace System::Numerics {
	#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_890e2bf27620d08e = requires(typename __AnyType::$class t) { {t._operator_add_qst(std::declval<typename __AnyType::$self>())} -> std::convertible_to<Builtin::Nullable<typename __AnyType::$self>>; }  || requires(typename __AnyType::$self t) { {_operator_add_qst($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<Builtin::Nullable<typename __AnyType::$self>>; };
	#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_866d4a678a8a09d9 = requires(typename __AnyType::$class t) { {t._operator_add_qst_eq(std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_add_qst_eq($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_81909588f7d8b544 = requires(typename __AnyType::$class t) { {t._operator_add_add_qst()} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_add_add_qst($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<typename __AnyType::$self>; };
	#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_8a71d095fb91cedb = requires(typename __AnyType::$class t) { {t._operator_add_ne(std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_add_ne($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_373e4d7f0c90dc02 = requires(typename __AnyType::$class t) { {t._operator_add_ne_eq(std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_add_ne_eq($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_9b6dbf53e1c01f15 = requires(typename __AnyType::$class t) { {t._operator_add_add_ne()} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_add_add_ne($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<typename __AnyType::$self>; };
	#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_ff67cd75f5eb8436 = requires(typename __AnyType::$class t) { {t._operator_add_mod(std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_add_mod($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_b23c2b5d58711621 = requires(typename __AnyType::$class t) { {t._operator_add_mod_eq(std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_add_mod_eq($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_d460618895c40afc = requires(typename __AnyType::$class t) { {t._operator_add_add_mod()} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_add_add_mod($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<typename __AnyType::$self>; };
	#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_70b55cc028445de3 = requires(typename __AnyType::$class t) { {t._operator_add_or(std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_add_or($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_0c5eebf0abd7cb2a = requires(typename __AnyType::$class t) { {t._operator_add_or_eq(std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_add_or_eq($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_9b71b253e1c3f1d5 = requires(typename __AnyType::$class t) { {t._operator_add_add_or()} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_add_add_or($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<typename __AnyType::$self>; };
	#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_448f4b59047412c9 = requires(typename __AnyType::$class t) { {t._operator_add_mod_qst(std::declval<typename __AnyType::$self>())} -> std::convertible_to<std::tuple<typename __AnyType::$self, bool>>; }  || requires(typename __AnyType::$self t) { {_operator_add_mod_qst($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<std::tuple<typename __AnyType::$self, bool>>; };
	#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_cb0ce08ed6f47e57 = requires(typename __AnyType::$class t) { {t.CarryingAdd(std::declval<typename __AnyType::$self>(), std::declval<bool>())} -> std::convertible_to<std::tuple<typename __AnyType::$self, bool>>; }  || requires(typename __AnyType::$self t) { {CarryingAdd($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>(), std::declval<bool>())} -> std::convertible_to<std::tuple<typename __AnyType::$self, bool>>; };
	#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_ea8e57053862060f = requires(typename __AnyType::$class t) { {t._operator_sub_qst(std::declval<typename __AnyType::$self>())} -> std::convertible_to<Builtin::Nullable<typename __AnyType::$self>>; }  || requires(typename __AnyType::$self t) { {_operator_sub_qst($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<Builtin::Nullable<typename __AnyType::$self>>; };
	#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_f0e095b211cace6e = requires(typename __AnyType::$class t) { {t._operator_sub_qst_eq(std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_sub_qst_eq($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_a73ec69d32732cd0 = requires(typename __AnyType::$class t) { {t._operator_sub_sub_qst()} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_sub_sub_qst($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<typename __AnyType::$self>; };
	#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_d9eaad2c76ea0d94 = requires(typename __AnyType::$class t) { {t._operator_sub_ne(std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_sub_ne($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_198f966ecce69407 = requires(typename __AnyType::$class t) { {t._operator_sub_ne_eq(std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_sub_ne_eq($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_fa9a4ae386877b91 = requires(typename __AnyType::$class t) { {t._operator_sub_sub_ne()} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_sub_sub_ne($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<typename __AnyType::$self>; };
	#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_e190a5988c54eb5f = requires(typename __AnyType::$class t) { {t._operator_sub_mod(std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_sub_mod($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_325ff096ea37dcde = requires(typename __AnyType::$class t) { {t._operator_sub_mod_eq(std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_sub_mod_eq($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_54a51a9d94b59ce8 = requires(typename __AnyType::$class t) { {t._operator_sub_sub_mod()} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_sub_sub_mod($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<typename __AnyType::$self>; };
	#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_5582589cbf634348 = requires(typename __AnyType::$class t) { {t._operator_sub_or(std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_sub_or($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_c2bba26c281e2a03 = requires(typename __AnyType::$class t) { {t._operator_sub_or_eq(std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_sub_or_eq($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_fa9e45e3868b5be9 = requires(typename __AnyType::$class t) { {t._operator_sub_sub_or()} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_sub_sub_or($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<typename __AnyType::$self>; };
	#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_11b06445ce43bcf6 = requires(typename __AnyType::$class t) { {t.BorrowingSub(std::declval<typename __AnyType::$self>(), std::declval<bool>())} -> std::convertible_to<std::tuple<typename __AnyType::$self, bool>>; }  || requires(typename __AnyType::$self t) { {BorrowingSub($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>(), std::declval<bool>())} -> std::convertible_to<std::tuple<typename __AnyType::$self, bool>>; };
	#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_2078d6b2bfcfa044 = requires(typename __AnyType::$class t) { {t._operator_sub_mod_qst(std::declval<typename __AnyType::$self>())} -> std::convertible_to<std::tuple<typename __AnyType::$self, bool>>; }  || requires(typename __AnyType::$self t) { {_operator_sub_mod_qst($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<std::tuple<typename __AnyType::$self, bool>>; };
	#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_e401d4e7a25094cb = requires(typename __AnyType::$class t) { {t._operator_mul_qst(std::declval<typename __AnyType::$self>())} -> std::convertible_to<Builtin::Nullable<typename __AnyType::$self>>; }  || requires(typename __AnyType::$self t) { {_operator_mul_qst($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<Builtin::Nullable<typename __AnyType::$self>>; };
	#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_0c149692e7034b12 = requires(typename __AnyType::$class t) { {t._operator_mul_qst_eq(std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_mul_qst_eq($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_8d40c48a891595c0 = requires(typename __AnyType::$class t) { {t._operator_mul_ne(std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_mul_ne($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 71 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_7f805010b755097b = requires(typename __AnyType::$class t) { {t._operator_mul_ne_eq(std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_mul_ne_eq($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_645cd7dc2d67c73b = requires(typename __AnyType::$class t) { {t._operator_mul_mod(std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_mul_mod($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_796de1e6e6d23222 = requires(typename __AnyType::$class t) { {t._operator_mul_mod_eq(std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_mul_mod_eq($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_fd02696bf571b30c = requires(typename __AnyType::$class t) { {t._operator_mul_or(std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_mul_or($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_737cd39f982dc2bf = requires(typename __AnyType::$class t) { {t._operator_mul_or_eq(std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_mul_or_eq($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_19ced39a1ad0d430 = requires(typename __AnyType::$class t) { {t._operator_mul_mod_qst(std::declval<typename __AnyType::$self>())} -> std::convertible_to<std::tuple<typename __AnyType::$self, bool>>; }  || requires(typename __AnyType::$self t) { {_operator_mul_mod_qst($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<std::tuple<typename __AnyType::$self, bool>>; };
	#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_5fbd5a37d2c9daf6 = requires(typename __AnyType::$class t) { {t._operator_mul_gt(std::declval<typename __AnyType::$self>())} -> std::convertible_to<std::tuple<typename __AnyType::$self::Unsigned, typename __AnyType::$self>>; }  || requires(typename __AnyType::$self t) { {_operator_mul_gt($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<std::tuple<typename __AnyType::$self::Unsigned, typename __AnyType::$self>>; };
	#line 85 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_e6a3061e10f81462 = requires(typename __AnyType::$class t) { {t.CarryingMul(std::declval<typename __AnyType::$self>(), std::declval<typename __AnyType::$self>())} -> std::convertible_to<std::tuple<typename __AnyType::$self::Unsigned, typename __AnyType::$self>>; }  || requires(typename __AnyType::$self t) { {CarryingMul($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>(), std::declval<typename __AnyType::$self>())} -> std::convertible_to<std::tuple<typename __AnyType::$self::Unsigned, typename __AnyType::$self>>; };
	#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_b91827fb7b430998 = requires(typename __AnyType::$class t) { {t._operator_bsl_qst(std::declval<typename __AnyType::$self>())} -> std::convertible_to<Builtin::Nullable<typename __AnyType::$self>>; }  || requires(typename __AnyType::$self t) { {_operator_bsl_qst($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<Builtin::Nullable<typename __AnyType::$self>>; };
	#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_c97afb1ab303c173 = requires(typename __AnyType::$class t) { {t._operator_bsl_qst_eq(std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_bsl_qst_eq($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_c6588325e4bba201 = requires(typename __AnyType::$class t) { {t._operator_bsl_ne(std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_bsl_ne($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_b2493a805d7f2f60 = requires(typename __AnyType::$class t) { {t._operator_bsl_ne_eq(std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_bsl_ne_eq($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 95 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_d5754f5101e675b0 = requires(typename __AnyType::$class t) { {t._operator_bsl_mod(std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_bsl_mod($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_3673477acab3148b = requires(typename __AnyType::$class t) { {t._operator_bsl_mod_eq(std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_bsl_mod_eq($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 99 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_6077d6319b48d76d = requires(typename __AnyType::$class t) { {t._operator_bsl_or(std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_bsl_or($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_1de6c8430fe322d4 = requires(typename __AnyType::$class t) { {t._operator_bsl_or_eq(std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_bsl_or_eq($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_bb4e442518ecb8f3 = requires(typename __AnyType::$class t) { {t._operator_bsl_mod_qst(std::declval<typename __AnyType::$self>())} -> std::convertible_to<std::tuple<typename __AnyType::$self, bool>>; }  || requires(typename __AnyType::$self t) { {_operator_bsl_mod_qst($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<std::tuple<typename __AnyType::$self, bool>>; };
	#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_c5b3990559b4743a = requires(typename __AnyType::$class t) { {t._operator_bsl_bsl_qst(std::declval<typename __AnyType::$self>())} -> std::convertible_to<Builtin::Nullable<typename __AnyType::$self>>; }  || requires(typename __AnyType::$self t) { {_operator_bsl_bsl_qst($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<Builtin::Nullable<typename __AnyType::$self>>; };
	#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_f1b4e482978274bd = requires(typename __AnyType::$class t) { {t._operator_bsl_bsl_qst_eq(std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_bsl_bsl_qst_eq($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_908b16c243bcced5 = requires(typename __AnyType::$class t) { {t._operator_mod_qst(std::declval<typename __AnyType::$self>())} -> std::convertible_to<Builtin::Nullable<typename __AnyType::$self>>; }  || requires(typename __AnyType::$self t) { {_operator_mod_qst($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<Builtin::Nullable<typename __AnyType::$self>>; };
	#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_b2cc3a8c0d89e35c = requires(typename __AnyType::$class t) { {t._operator_mod_qst_eq(std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_mod_qst_eq($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_ad71746bd6359976 = requires(typename __AnyType::$class t) { {t._operator_mod_ne(std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_mod_ne($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_9cb6152eb22a4c61 = requires(typename __AnyType::$class t) { {t._operator_mod_ne_eq(std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_mod_ne_eq($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_3ca7d3508363363d = requires(typename __AnyType::$class t) { {t._operator_mod_mod(std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_mod_mod($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_216f17339450d704 = requires(typename __AnyType::$class t) { {t._operator_mod_mod_eq(std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_mod_mod_eq($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_6bad9b175667117a = requires(typename __AnyType::$class t) { {t._operator_mod_mod_qst(std::declval<typename __AnyType::$self>())} -> std::convertible_to<std::tuple<typename __AnyType::$self, bool>>; }  || requires(typename __AnyType::$self t) { {_operator_mod_mod_qst($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<std::tuple<typename __AnyType::$self, bool>>; };
	#line 123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_881ab50bdbe7988d = requires(typename __AnyType::$class t) { {t._operator_sub_qst()} -> std::convertible_to<Builtin::Nullable<typename __AnyType::$self>>; }  || requires(typename __AnyType::$self t) { {_operator_sub_qst($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<Builtin::Nullable<typename __AnyType::$self>>; };
	#line 125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_f88a73706e3b9ca2 = requires(typename __AnyType::$class t) { {t._operator_sub_ne()} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_sub_ne($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<typename __AnyType::$self>; };
	#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_95d5290b52c161dd = requires(typename __AnyType::$class t) { {t._operator_sub_mod()} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_sub_mod($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<typename __AnyType::$self>; };
	#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_f8875c706e393fb6 = requires(typename __AnyType::$class t) { {t._operator_sub_or()} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_sub_or($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<typename __AnyType::$self>; };
	#line 131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_844e32093c5fb112 = requires(typename __AnyType::$class t) { {t._operator_sub_mod_qst()} -> std::convertible_to<std::tuple<typename __AnyType::$self, bool>>; }  || requires(typename __AnyType::$self t) { {_operator_sub_mod_qst($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<std::tuple<typename __AnyType::$self, bool>>; };
	#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_38a1b16b7fd7177f = requires(typename __AnyType::$class t) { {t._operator_lt_lt_qst(std::declval<Builtin::i32>())} -> std::convertible_to<Builtin::Nullable<typename __AnyType::$self>>; }  || requires(typename __AnyType::$self t) { {_operator_lt_lt_qst($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<Builtin::i32>())} -> std::convertible_to<Builtin::Nullable<typename __AnyType::$self>>; };
	#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_8ed583d9019db27c = requires(typename __AnyType::$class t) { {t._operator_lt_lt_qst_eq(std::declval<Builtin::i32>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_lt_lt_qst_eq($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<Builtin::i32>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_870dff332828b2fa = requires(typename __AnyType::$class t) { {t._operator_lt_lt_ne(std::declval<Builtin::i32>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_lt_lt_ne($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<Builtin::i32>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_15da982c2acd251f = requires(typename __AnyType::$class t) { {t._operator_lt_lt_ne_eq(std::declval<Builtin::i32>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_lt_lt_ne_eq($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<Builtin::i32>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_105f8f95274c2137 = requires(typename __AnyType::$class t) { {t._operator_lt_lt_mod(std::declval<Builtin::i32>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_lt_lt_mod($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<Builtin::i32>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_75ef0e42fbf4bfb4 = requires(typename __AnyType::$class t) { {t._operator_lt_lt_mod_eq(std::declval<Builtin::i32>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_lt_lt_mod_eq($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<Builtin::i32>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_e999ccf8f2324764 = requires(typename __AnyType::$class t) { {t._operator_lt_lt_mod_qst(std::declval<Builtin::i32>())} -> std::convertible_to<std::tuple<typename __AnyType::$self, bool>>; }  || requires(typename __AnyType::$self t) { {_operator_lt_lt_mod_qst($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<Builtin::i32>())} -> std::convertible_to<std::tuple<typename __AnyType::$self, bool>>; };
	#line 147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_2bcc1c637a912745 = requires(typename __AnyType::$class t) { {t._operator_gt_gt_qst(std::declval<Builtin::i32>())} -> std::convertible_to<Builtin::Nullable<typename __AnyType::$self>>; }  || requires(typename __AnyType::$self t) { {_operator_gt_gt_qst($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<Builtin::i32>())} -> std::convertible_to<Builtin::Nullable<typename __AnyType::$self>>; };
	#line 149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_169ba7e7e0583482 = requires(typename __AnyType::$class t) { {t._operator_gt_gt_qst_eq(std::declval<Builtin::i32>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_gt_gt_qst_eq($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<Builtin::i32>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_cd871524fe784794 = requires(typename __AnyType::$class t) { {t._operator_gt_gt_ne(std::declval<Builtin::i32>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_gt_gt_ne($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<Builtin::i32>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_6c2639645679cb21 = requires(typename __AnyType::$class t) { {t._operator_gt_gt_ne_eq(std::declval<Builtin::i32>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_gt_gt_ne_eq($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<Builtin::i32>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_9e999d3efdcb8b6d = requires(typename __AnyType::$class t) { {t._operator_gt_gt_mod(std::declval<Builtin::i32>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_gt_gt_mod($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<Builtin::i32>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_f80f26b7f9c3e9ca = requires(typename __AnyType::$class t) { {t._operator_gt_gt_mod_eq(std::declval<Builtin::i32>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_gt_gt_mod_eq($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<Builtin::i32>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_7d8608b2d49183ba = requires(typename __AnyType::$class t) { {t._operator_gt_gt_mod_qst(std::declval<Builtin::i32>())} -> std::convertible_to<std::tuple<typename __AnyType::$self, bool>>; }  || requires(typename __AnyType::$self t) { {_operator_gt_gt_mod_qst($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<Builtin::i32>())} -> std::convertible_to<std::tuple<typename __AnyType::$self, bool>>; };
	#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_c17d0732b7dc41c6 = requires(typename __AnyType::$class t) { {t._operator_xor_xor_qst(std::declval<Builtin::u32>())} -> std::convertible_to<Builtin::Nullable<typename __AnyType::$self>>; }  || requires(typename __AnyType::$self t) { {_operator_xor_xor_qst($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<Builtin::u32>())} -> std::convertible_to<Builtin::Nullable<typename __AnyType::$self>>; };
	#line 163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_c2d44d2f95ef1b07 = requires(typename __AnyType::$class t) { {t._operator_xor_xor_qst_eq(std::declval<Builtin::u32>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_xor_xor_qst_eq($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<Builtin::u32>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_c7dc42ff9041ed8d = requires(typename __AnyType::$class t) { {t._operator_xor_xor_ne(std::declval<Builtin::u32>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_xor_xor_ne($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<Builtin::u32>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_ba9c2c6c1aa1bb72 = requires(typename __AnyType::$class t) { {t._operator_xor_xor_ne_eq(std::declval<Builtin::u32>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_xor_xor_ne_eq($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<Builtin::u32>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_c89cc1b780e5b04e = requires(typename __AnyType::$class t) { {t._operator_xor_xor_mod(std::declval<Builtin::u32>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_xor_xor_mod($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<Builtin::u32>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_2a4abfe80d1eefaf = requires(typename __AnyType::$class t) { {t._operator_xor_xor_mod_eq(std::declval<Builtin::u32>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_xor_xor_mod_eq($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<Builtin::u32>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_651927546cbf454d = requires(typename __AnyType::$class t) { {t._operator_xor_xor_or(std::declval<Builtin::u32>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_xor_xor_or($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<Builtin::u32>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_0c20951d1aaf3c32 = requires(typename __AnyType::$class t) { {t._operator_xor_xor_or_eq(std::declval<Builtin::u32>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_xor_xor_or_eq($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<Builtin::u32>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_fcdf67eeb11bcc6f = requires(typename __AnyType::$class t) { {t._operator_xor_xor_mod_qst(std::declval<Builtin::u32>())} -> std::convertible_to<std::tuple<typename __AnyType::$self, bool>>; }  || requires(typename __AnyType::$self t) { {_operator_xor_xor_mod_qst($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<Builtin::u32>())} -> std::convertible_to<std::tuple<typename __AnyType::$self, bool>>; };
	#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_getd25d7b22d74edaad = requires(typename __AnyType::$class t) { {t.getCheckedAbs()} -> std::convertible_to<Builtin::Nullable<typename __AnyType::$self>>; } || requires(typename __AnyType::$self t) { {getCheckedAbs($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<Builtin::Nullable<typename __AnyType::$self>>; };
	#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_get91906ed6944fe73d = requires(typename __AnyType::$class t) { {t.getStrictAbs()} -> std::convertible_to<typename __AnyType::$self>; } || requires(typename __AnyType::$self t) { {getStrictAbs($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<typename __AnyType::$self>; };
	#line 183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_getd4dca40b4165967a = requires(typename __AnyType::$class t) { {t.getWrappingAbs()} -> std::convertible_to<typename __AnyType::$self>; } || requires(typename __AnyType::$self t) { {getWrappingAbs($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<typename __AnyType::$self>; };
	#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_getcb516c26e245f4e4 = requires(typename __AnyType::$class t) { {t.getSaturatingAbs()} -> std::convertible_to<typename __AnyType::$self>; } || requires(typename __AnyType::$self t) { {getSaturatingAbs($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<typename __AnyType::$self>; };
	#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasMethodImplementation_get6583e256e7e12a10 = requires(typename __AnyType::$class t) { {t.getOverflowingAbs()} -> std::convertible_to<std::tuple<typename __AnyType::$self, bool>>; } || requires(typename __AnyType::$self t) { {getOverflowingAbs($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<std::tuple<typename __AnyType::$self, bool>>; };
	#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $HasAssociatedType_858aea26d1cc9a61 = requires { typename __AnyType::Unsigned; };
	namespace $vtables {
		#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		struct $vtable_ICheckedArithmetic
		{
			using fn_890e2bf27620d08e = const Builtin::Nullable<Builtin::OptionalStrongRef<Builtin::ObjectRef>>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_890e2bf27620d08e* fnptr_890e2bf27620d08e;
			#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::Nullable<Builtin::OptionalStrongRef<Builtin::ObjectRef>> impl_890e2bf27620d08e(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_qst)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_866d4a678a8a09d9 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_866d4a678a8a09d9* fnptr_866d4a678a8a09d9;
			#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_866d4a678a8a09d9(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_qst_eq)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_81909588f7d8b544 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_81909588f7d8b544* fnptr_81909588f7d8b544;
			#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_81909588f7d8b544(Builtin::Object* obj) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_add_qst)(*static_cast<typename __AnyType::$class*>(obj))); }
			using fn_8a71d095fb91cedb = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_8a71d095fb91cedb* fnptr_8a71d095fb91cedb;
			#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_8a71d095fb91cedb(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_ne)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_373e4d7f0c90dc02 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_373e4d7f0c90dc02* fnptr_373e4d7f0c90dc02;
			#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_373e4d7f0c90dc02(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_ne_eq)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_9b6dbf53e1c01f15 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_9b6dbf53e1c01f15* fnptr_9b6dbf53e1c01f15;
			#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_9b6dbf53e1c01f15(Builtin::Object* obj) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_add_ne)(*static_cast<typename __AnyType::$class*>(obj))); }
			using fn_ff67cd75f5eb8436 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_ff67cd75f5eb8436* fnptr_ff67cd75f5eb8436;
			#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_ff67cd75f5eb8436(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_mod)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_b23c2b5d58711621 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_b23c2b5d58711621* fnptr_b23c2b5d58711621;
			#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_b23c2b5d58711621(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_mod_eq)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_d460618895c40afc = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_d460618895c40afc* fnptr_d460618895c40afc;
			#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_d460618895c40afc(Builtin::Object* obj) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_add_mod)(*static_cast<typename __AnyType::$class*>(obj))); }
			using fn_70b55cc028445de3 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_70b55cc028445de3* fnptr_70b55cc028445de3;
			#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_70b55cc028445de3(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_or)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_0c5eebf0abd7cb2a = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_0c5eebf0abd7cb2a* fnptr_0c5eebf0abd7cb2a;
			#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_0c5eebf0abd7cb2a(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_or_eq)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_9b71b253e1c3f1d5 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_9b71b253e1c3f1d5* fnptr_9b71b253e1c3f1d5;
			#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_9b71b253e1c3f1d5(Builtin::Object* obj) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_add_or)(*static_cast<typename __AnyType::$class*>(obj))); }
			using fn_448f4b59047412c9 = const std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, bool>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_448f4b59047412c9* fnptr_448f4b59047412c9;
			#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, bool> impl_448f4b59047412c9(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_mod_qst)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_cb0ce08ed6f47e57 = const std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, bool>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs, bool carry);
			fn_cb0ce08ed6f47e57* fnptr_cb0ce08ed6f47e57;
			#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, bool> impl_cb0ce08ed6f47e57(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs, bool carry) { ADV_EXPRESSION_BODY(ADV_UFCS(CarryingAdd)(*static_cast<typename __AnyType::$class*>(obj), rhs, carry)); }
			using fn_ea8e57053862060f = const Builtin::Nullable<Builtin::OptionalStrongRef<Builtin::ObjectRef>>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_ea8e57053862060f* fnptr_ea8e57053862060f;
			#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::Nullable<Builtin::OptionalStrongRef<Builtin::ObjectRef>> impl_ea8e57053862060f(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_qst)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_f0e095b211cace6e = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_f0e095b211cace6e* fnptr_f0e095b211cace6e;
			#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_f0e095b211cace6e(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_qst_eq)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_a73ec69d32732cd0 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_a73ec69d32732cd0* fnptr_a73ec69d32732cd0;
			#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_a73ec69d32732cd0(Builtin::Object* obj) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_sub_qst)(*static_cast<typename __AnyType::$class*>(obj))); }
			using fn_d9eaad2c76ea0d94 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_d9eaad2c76ea0d94* fnptr_d9eaad2c76ea0d94;
			#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_d9eaad2c76ea0d94(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_ne)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_198f966ecce69407 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_198f966ecce69407* fnptr_198f966ecce69407;
			#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_198f966ecce69407(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_ne_eq)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_fa9a4ae386877b91 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_fa9a4ae386877b91* fnptr_fa9a4ae386877b91;
			#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_fa9a4ae386877b91(Builtin::Object* obj) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_sub_ne)(*static_cast<typename __AnyType::$class*>(obj))); }
			using fn_e190a5988c54eb5f = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_e190a5988c54eb5f* fnptr_e190a5988c54eb5f;
			#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_e190a5988c54eb5f(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_mod)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_325ff096ea37dcde = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_325ff096ea37dcde* fnptr_325ff096ea37dcde;
			#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_325ff096ea37dcde(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_mod_eq)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_54a51a9d94b59ce8 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_54a51a9d94b59ce8* fnptr_54a51a9d94b59ce8;
			#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_54a51a9d94b59ce8(Builtin::Object* obj) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_sub_mod)(*static_cast<typename __AnyType::$class*>(obj))); }
			using fn_5582589cbf634348 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_5582589cbf634348* fnptr_5582589cbf634348;
			#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_5582589cbf634348(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_or)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_c2bba26c281e2a03 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_c2bba26c281e2a03* fnptr_c2bba26c281e2a03;
			#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_c2bba26c281e2a03(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_or_eq)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_fa9e45e3868b5be9 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_fa9e45e3868b5be9* fnptr_fa9e45e3868b5be9;
			#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_fa9e45e3868b5be9(Builtin::Object* obj) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_sub_or)(*static_cast<typename __AnyType::$class*>(obj))); }
			using fn_11b06445ce43bcf6 = const std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, bool>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs, bool carry);
			fn_11b06445ce43bcf6* fnptr_11b06445ce43bcf6;
			#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, bool> impl_11b06445ce43bcf6(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs, bool carry) { ADV_EXPRESSION_BODY(ADV_UFCS(BorrowingSub)(*static_cast<typename __AnyType::$class*>(obj), rhs, carry)); }
			using fn_2078d6b2bfcfa044 = const std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, bool>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_2078d6b2bfcfa044* fnptr_2078d6b2bfcfa044;
			#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, bool> impl_2078d6b2bfcfa044(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_mod_qst)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_e401d4e7a25094cb = const Builtin::Nullable<Builtin::OptionalStrongRef<Builtin::ObjectRef>>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_e401d4e7a25094cb* fnptr_e401d4e7a25094cb;
			#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::Nullable<Builtin::OptionalStrongRef<Builtin::ObjectRef>> impl_e401d4e7a25094cb(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_qst)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_0c149692e7034b12 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_0c149692e7034b12* fnptr_0c149692e7034b12;
			#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_0c149692e7034b12(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_qst_eq)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_8d40c48a891595c0 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_8d40c48a891595c0* fnptr_8d40c48a891595c0;
			#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_8d40c48a891595c0(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_ne)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_7f805010b755097b = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_7f805010b755097b* fnptr_7f805010b755097b;
			#line 71 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_7f805010b755097b(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_ne_eq)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_645cd7dc2d67c73b = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_645cd7dc2d67c73b* fnptr_645cd7dc2d67c73b;
			#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_645cd7dc2d67c73b(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_mod)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_796de1e6e6d23222 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_796de1e6e6d23222* fnptr_796de1e6e6d23222;
			#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_796de1e6e6d23222(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_mod_eq)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_fd02696bf571b30c = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_fd02696bf571b30c* fnptr_fd02696bf571b30c;
			#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_fd02696bf571b30c(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_or)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_737cd39f982dc2bf = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_737cd39f982dc2bf* fnptr_737cd39f982dc2bf;
			#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_737cd39f982dc2bf(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_or_eq)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_19ced39a1ad0d430 = const std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, bool>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_19ced39a1ad0d430* fnptr_19ced39a1ad0d430;
			#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, bool> impl_19ced39a1ad0d430(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_mod_qst)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_5fbd5a37d2c9daf6 = const std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, Builtin::OptionalStrongRef<Builtin::ObjectRef>>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_5fbd5a37d2c9daf6* fnptr_5fbd5a37d2c9daf6;
			#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, Builtin::OptionalStrongRef<Builtin::ObjectRef>> impl_5fbd5a37d2c9daf6(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_gt)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_e6a3061e10f81462 = const std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, Builtin::OptionalStrongRef<Builtin::ObjectRef>>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs, Builtin::OptionalStrongRef<Builtin::ObjectRef> carry);
			fn_e6a3061e10f81462* fnptr_e6a3061e10f81462;
			#line 85 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, Builtin::OptionalStrongRef<Builtin::ObjectRef>> impl_e6a3061e10f81462(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs, Builtin::OptionalStrongRef<Builtin::ObjectRef> carry) { ADV_EXPRESSION_BODY(ADV_UFCS(CarryingMul)(*static_cast<typename __AnyType::$class*>(obj), rhs, carry)); }
			using fn_b91827fb7b430998 = const Builtin::Nullable<Builtin::OptionalStrongRef<Builtin::ObjectRef>>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_b91827fb7b430998* fnptr_b91827fb7b430998;
			#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::Nullable<Builtin::OptionalStrongRef<Builtin::ObjectRef>> impl_b91827fb7b430998(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl_qst)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_c97afb1ab303c173 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_c97afb1ab303c173* fnptr_c97afb1ab303c173;
			#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_c97afb1ab303c173(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl_qst_eq)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_c6588325e4bba201 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_c6588325e4bba201* fnptr_c6588325e4bba201;
			#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_c6588325e4bba201(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl_ne)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_b2493a805d7f2f60 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_b2493a805d7f2f60* fnptr_b2493a805d7f2f60;
			#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_b2493a805d7f2f60(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl_ne_eq)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_d5754f5101e675b0 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_d5754f5101e675b0* fnptr_d5754f5101e675b0;
			#line 95 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_d5754f5101e675b0(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl_mod)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_3673477acab3148b = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_3673477acab3148b* fnptr_3673477acab3148b;
			#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_3673477acab3148b(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl_mod_eq)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_6077d6319b48d76d = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_6077d6319b48d76d* fnptr_6077d6319b48d76d;
			#line 99 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_6077d6319b48d76d(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl_or)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_1de6c8430fe322d4 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_1de6c8430fe322d4* fnptr_1de6c8430fe322d4;
			#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_1de6c8430fe322d4(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl_or_eq)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_bb4e442518ecb8f3 = const std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, bool>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_bb4e442518ecb8f3* fnptr_bb4e442518ecb8f3;
			#line 103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, bool> impl_bb4e442518ecb8f3(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl_mod_qst)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_c5b3990559b4743a = const Builtin::Nullable<Builtin::OptionalStrongRef<Builtin::ObjectRef>>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_c5b3990559b4743a* fnptr_c5b3990559b4743a;
			#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::Nullable<Builtin::OptionalStrongRef<Builtin::ObjectRef>> impl_c5b3990559b4743a(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl_bsl_qst)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_f1b4e482978274bd = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_f1b4e482978274bd* fnptr_f1b4e482978274bd;
			#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_f1b4e482978274bd(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl_bsl_qst_eq)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_908b16c243bcced5 = const Builtin::Nullable<Builtin::OptionalStrongRef<Builtin::ObjectRef>>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_908b16c243bcced5* fnptr_908b16c243bcced5;
			#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::Nullable<Builtin::OptionalStrongRef<Builtin::ObjectRef>> impl_908b16c243bcced5(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mod_qst)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_b2cc3a8c0d89e35c = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_b2cc3a8c0d89e35c* fnptr_b2cc3a8c0d89e35c;
			#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_b2cc3a8c0d89e35c(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mod_qst_eq)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_ad71746bd6359976 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_ad71746bd6359976* fnptr_ad71746bd6359976;
			#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_ad71746bd6359976(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mod_ne)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_9cb6152eb22a4c61 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_9cb6152eb22a4c61* fnptr_9cb6152eb22a4c61;
			#line 115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_9cb6152eb22a4c61(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mod_ne_eq)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_3ca7d3508363363d = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_3ca7d3508363363d* fnptr_3ca7d3508363363d;
			#line 117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_3ca7d3508363363d(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mod_mod)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_216f17339450d704 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_216f17339450d704* fnptr_216f17339450d704;
			#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_216f17339450d704(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mod_mod_eq)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_6bad9b175667117a = const std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, bool>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_6bad9b175667117a* fnptr_6bad9b175667117a;
			#line 121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, bool> impl_6bad9b175667117a(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mod_mod_qst)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_881ab50bdbe7988d = const Builtin::Nullable<Builtin::OptionalStrongRef<Builtin::ObjectRef>>(Builtin::Object*);
			fn_881ab50bdbe7988d* fnptr_881ab50bdbe7988d;
			#line 123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::Nullable<Builtin::OptionalStrongRef<Builtin::ObjectRef>> impl_881ab50bdbe7988d(Builtin::Object* obj) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_qst)(*static_cast<typename __AnyType::$class*>(obj))); }
			using fn_f88a73706e3b9ca2 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_f88a73706e3b9ca2* fnptr_f88a73706e3b9ca2;
			#line 125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_f88a73706e3b9ca2(Builtin::Object* obj) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_ne)(*static_cast<typename __AnyType::$class*>(obj))); }
			using fn_95d5290b52c161dd = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_95d5290b52c161dd* fnptr_95d5290b52c161dd;
			#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_95d5290b52c161dd(Builtin::Object* obj) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_mod)(*static_cast<typename __AnyType::$class*>(obj))); }
			using fn_f8875c706e393fb6 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_f8875c706e393fb6* fnptr_f8875c706e393fb6;
			#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_f8875c706e393fb6(Builtin::Object* obj) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_or)(*static_cast<typename __AnyType::$class*>(obj))); }
			using fn_844e32093c5fb112 = const std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, bool>(Builtin::Object*);
			fn_844e32093c5fb112* fnptr_844e32093c5fb112;
			#line 131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, bool> impl_844e32093c5fb112(Builtin::Object* obj) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_mod_qst)(*static_cast<typename __AnyType::$class*>(obj))); }
			using fn_38a1b16b7fd7177f = const Builtin::Nullable<Builtin::OptionalStrongRef<Builtin::ObjectRef>>(Builtin::Object*, Builtin::i32 amount);
			fn_38a1b16b7fd7177f* fnptr_38a1b16b7fd7177f;
			#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::Nullable<Builtin::OptionalStrongRef<Builtin::ObjectRef>> impl_38a1b16b7fd7177f(Builtin::Object* obj, Builtin::i32 amount) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_lt_lt_qst)(*static_cast<typename __AnyType::$class*>(obj), amount)); }
			using fn_8ed583d9019db27c = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::i32 amount);
			fn_8ed583d9019db27c* fnptr_8ed583d9019db27c;
			#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_8ed583d9019db27c(Builtin::Object* obj, Builtin::i32 amount) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_lt_lt_qst_eq)(*static_cast<typename __AnyType::$class*>(obj), amount)); }
			using fn_870dff332828b2fa = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::i32 amount);
			fn_870dff332828b2fa* fnptr_870dff332828b2fa;
			#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_870dff332828b2fa(Builtin::Object* obj, Builtin::i32 amount) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_lt_lt_ne)(*static_cast<typename __AnyType::$class*>(obj), amount)); }
			using fn_15da982c2acd251f = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::i32 amount);
			fn_15da982c2acd251f* fnptr_15da982c2acd251f;
			#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_15da982c2acd251f(Builtin::Object* obj, Builtin::i32 amount) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_lt_lt_ne_eq)(*static_cast<typename __AnyType::$class*>(obj), amount)); }
			using fn_105f8f95274c2137 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::i32 amount);
			fn_105f8f95274c2137* fnptr_105f8f95274c2137;
			#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_105f8f95274c2137(Builtin::Object* obj, Builtin::i32 amount) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_lt_lt_mod)(*static_cast<typename __AnyType::$class*>(obj), amount)); }
			using fn_75ef0e42fbf4bfb4 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::i32 amount);
			fn_75ef0e42fbf4bfb4* fnptr_75ef0e42fbf4bfb4;
			#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_75ef0e42fbf4bfb4(Builtin::Object* obj, Builtin::i32 amount) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_lt_lt_mod_eq)(*static_cast<typename __AnyType::$class*>(obj), amount)); }
			using fn_e999ccf8f2324764 = const std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, bool>(Builtin::Object*, Builtin::i32 amount);
			fn_e999ccf8f2324764* fnptr_e999ccf8f2324764;
			#line 145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, bool> impl_e999ccf8f2324764(Builtin::Object* obj, Builtin::i32 amount) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_lt_lt_mod_qst)(*static_cast<typename __AnyType::$class*>(obj), amount)); }
			using fn_2bcc1c637a912745 = const Builtin::Nullable<Builtin::OptionalStrongRef<Builtin::ObjectRef>>(Builtin::Object*, Builtin::i32 amount);
			fn_2bcc1c637a912745* fnptr_2bcc1c637a912745;
			#line 147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::Nullable<Builtin::OptionalStrongRef<Builtin::ObjectRef>> impl_2bcc1c637a912745(Builtin::Object* obj, Builtin::i32 amount) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_gt_gt_qst)(*static_cast<typename __AnyType::$class*>(obj), amount)); }
			using fn_169ba7e7e0583482 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::i32 amount);
			fn_169ba7e7e0583482* fnptr_169ba7e7e0583482;
			#line 149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_169ba7e7e0583482(Builtin::Object* obj, Builtin::i32 amount) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_gt_gt_qst_eq)(*static_cast<typename __AnyType::$class*>(obj), amount)); }
			using fn_cd871524fe784794 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::i32 amount);
			fn_cd871524fe784794* fnptr_cd871524fe784794;
			#line 151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_cd871524fe784794(Builtin::Object* obj, Builtin::i32 amount) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_gt_gt_ne)(*static_cast<typename __AnyType::$class*>(obj), amount)); }
			using fn_6c2639645679cb21 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::i32 amount);
			fn_6c2639645679cb21* fnptr_6c2639645679cb21;
			#line 153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_6c2639645679cb21(Builtin::Object* obj, Builtin::i32 amount) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_gt_gt_ne_eq)(*static_cast<typename __AnyType::$class*>(obj), amount)); }
			using fn_9e999d3efdcb8b6d = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::i32 amount);
			fn_9e999d3efdcb8b6d* fnptr_9e999d3efdcb8b6d;
			#line 155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_9e999d3efdcb8b6d(Builtin::Object* obj, Builtin::i32 amount) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_gt_gt_mod)(*static_cast<typename __AnyType::$class*>(obj), amount)); }
			using fn_f80f26b7f9c3e9ca = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::i32 amount);
			fn_f80f26b7f9c3e9ca* fnptr_f80f26b7f9c3e9ca;
			#line 157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_f80f26b7f9c3e9ca(Builtin::Object* obj, Builtin::i32 amount) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_gt_gt_mod_eq)(*static_cast<typename __AnyType::$class*>(obj), amount)); }
			using fn_7d8608b2d49183ba = const std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, bool>(Builtin::Object*, Builtin::i32 amount);
			fn_7d8608b2d49183ba* fnptr_7d8608b2d49183ba;
			#line 159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, bool> impl_7d8608b2d49183ba(Builtin::Object* obj, Builtin::i32 amount) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_gt_gt_mod_qst)(*static_cast<typename __AnyType::$class*>(obj), amount)); }
			using fn_c17d0732b7dc41c6 = const Builtin::Nullable<Builtin::OptionalStrongRef<Builtin::ObjectRef>>(Builtin::Object*, Builtin::u32 exp);
			fn_c17d0732b7dc41c6* fnptr_c17d0732b7dc41c6;
			#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::Nullable<Builtin::OptionalStrongRef<Builtin::ObjectRef>> impl_c17d0732b7dc41c6(Builtin::Object* obj, Builtin::u32 exp) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_xor_xor_qst)(*static_cast<typename __AnyType::$class*>(obj), exp)); }
			using fn_c2d44d2f95ef1b07 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::u32 exp);
			fn_c2d44d2f95ef1b07* fnptr_c2d44d2f95ef1b07;
			#line 163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_c2d44d2f95ef1b07(Builtin::Object* obj, Builtin::u32 exp) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_xor_xor_qst_eq)(*static_cast<typename __AnyType::$class*>(obj), exp)); }
			using fn_c7dc42ff9041ed8d = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::u32 exp);
			fn_c7dc42ff9041ed8d* fnptr_c7dc42ff9041ed8d;
			#line 165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_c7dc42ff9041ed8d(Builtin::Object* obj, Builtin::u32 exp) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_xor_xor_ne)(*static_cast<typename __AnyType::$class*>(obj), exp)); }
			using fn_ba9c2c6c1aa1bb72 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::u32 exp);
			fn_ba9c2c6c1aa1bb72* fnptr_ba9c2c6c1aa1bb72;
			#line 167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_ba9c2c6c1aa1bb72(Builtin::Object* obj, Builtin::u32 exp) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_xor_xor_ne_eq)(*static_cast<typename __AnyType::$class*>(obj), exp)); }
			using fn_c89cc1b780e5b04e = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::u32 exp);
			fn_c89cc1b780e5b04e* fnptr_c89cc1b780e5b04e;
			#line 169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_c89cc1b780e5b04e(Builtin::Object* obj, Builtin::u32 exp) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_xor_xor_mod)(*static_cast<typename __AnyType::$class*>(obj), exp)); }
			using fn_2a4abfe80d1eefaf = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::u32 exp);
			fn_2a4abfe80d1eefaf* fnptr_2a4abfe80d1eefaf;
			#line 171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_2a4abfe80d1eefaf(Builtin::Object* obj, Builtin::u32 exp) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_xor_xor_mod_eq)(*static_cast<typename __AnyType::$class*>(obj), exp)); }
			using fn_651927546cbf454d = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::u32 exp);
			fn_651927546cbf454d* fnptr_651927546cbf454d;
			#line 173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_651927546cbf454d(Builtin::Object* obj, Builtin::u32 exp) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_xor_xor_or)(*static_cast<typename __AnyType::$class*>(obj), exp)); }
			using fn_0c20951d1aaf3c32 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::u32 exp);
			fn_0c20951d1aaf3c32* fnptr_0c20951d1aaf3c32;
			#line 175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_0c20951d1aaf3c32(Builtin::Object* obj, Builtin::u32 exp) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_xor_xor_or_eq)(*static_cast<typename __AnyType::$class*>(obj), exp)); }
			using fn_fcdf67eeb11bcc6f = const std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, bool>(Builtin::Object*, Builtin::u32 exp);
			fn_fcdf67eeb11bcc6f* fnptr_fcdf67eeb11bcc6f;
			#line 177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static const std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, bool> impl_fcdf67eeb11bcc6f(Builtin::Object* obj, Builtin::u32 exp) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_xor_xor_mod_qst)(*static_cast<typename __AnyType::$class*>(obj), exp)); }
			using fn_getCheckedAbs = Builtin::Nullable<Builtin::OptionalStrongRef<Builtin::ObjectRef>>(Builtin::Object*);
			fn_getCheckedAbs* fnptr_getCheckedAbs;
			#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static Builtin::Nullable<Builtin::OptionalStrongRef<Builtin::ObjectRef>> impl_getCheckedAbs(Builtin::Object* obj) { return ADV_UFCS(getCheckedAbs)(*static_cast<typename __AnyType::$class*>(obj)); }
			using fn_getStrictAbs = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getStrictAbs* fnptr_getStrictAbs;
			#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getStrictAbs(Builtin::Object* obj) { return ADV_UFCS(getStrictAbs)(*static_cast<typename __AnyType::$class*>(obj)); }
			using fn_getWrappingAbs = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getWrappingAbs* fnptr_getWrappingAbs;
			#line 183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getWrappingAbs(Builtin::Object* obj) { return ADV_UFCS(getWrappingAbs)(*static_cast<typename __AnyType::$class*>(obj)); }
			using fn_getSaturatingAbs = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getSaturatingAbs* fnptr_getSaturatingAbs;
			#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getSaturatingAbs(Builtin::Object* obj) { return ADV_UFCS(getSaturatingAbs)(*static_cast<typename __AnyType::$class*>(obj)); }
			using fn_getOverflowingAbs = std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, bool>(Builtin::Object*);
			fn_getOverflowingAbs* fnptr_getOverflowingAbs;
			#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
			template<class __AnyType> static std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, bool> impl_getOverflowingAbs(Builtin::Object* obj) { return ADV_UFCS(getOverflowingAbs)(*static_cast<typename __AnyType::$class*>(obj)); }
			
		};
	}
	#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> inline constexpr $vtables::$vtable_ICheckedArithmetic $vtable_ICheckedArithmetic_for = {&$vtables::$vtable_ICheckedArithmetic::template impl_890e2bf27620d08e<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_866d4a678a8a09d9<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_81909588f7d8b544<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_8a71d095fb91cedb<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_373e4d7f0c90dc02<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_9b6dbf53e1c01f15<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_ff67cd75f5eb8436<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_b23c2b5d58711621<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_d460618895c40afc<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_70b55cc028445de3<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_0c5eebf0abd7cb2a<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_9b71b253e1c3f1d5<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_448f4b59047412c9<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_cb0ce08ed6f47e57<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_ea8e57053862060f<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_f0e095b211cace6e<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_a73ec69d32732cd0<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_d9eaad2c76ea0d94<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_198f966ecce69407<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_fa9a4ae386877b91<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_e190a5988c54eb5f<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_325ff096ea37dcde<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_54a51a9d94b59ce8<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_5582589cbf634348<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_c2bba26c281e2a03<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_fa9e45e3868b5be9<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_11b06445ce43bcf6<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_2078d6b2bfcfa044<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_e401d4e7a25094cb<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_0c149692e7034b12<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_8d40c48a891595c0<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_7f805010b755097b<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_645cd7dc2d67c73b<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_796de1e6e6d23222<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_fd02696bf571b30c<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_737cd39f982dc2bf<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_19ced39a1ad0d430<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_5fbd5a37d2c9daf6<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_e6a3061e10f81462<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_b91827fb7b430998<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_c97afb1ab303c173<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_c6588325e4bba201<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_b2493a805d7f2f60<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_d5754f5101e675b0<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_3673477acab3148b<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_6077d6319b48d76d<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_1de6c8430fe322d4<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_bb4e442518ecb8f3<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_c5b3990559b4743a<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_f1b4e482978274bd<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_908b16c243bcced5<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_b2cc3a8c0d89e35c<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_ad71746bd6359976<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_9cb6152eb22a4c61<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_3ca7d3508363363d<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_216f17339450d704<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_6bad9b175667117a<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_881ab50bdbe7988d<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_f88a73706e3b9ca2<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_95d5290b52c161dd<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_f8875c706e393fb6<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_844e32093c5fb112<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_38a1b16b7fd7177f<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_8ed583d9019db27c<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_870dff332828b2fa<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_15da982c2acd251f<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_105f8f95274c2137<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_75ef0e42fbf4bfb4<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_e999ccf8f2324764<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_2bcc1c637a912745<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_169ba7e7e0583482<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_cd871524fe784794<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_6c2639645679cb21<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_9e999d3efdcb8b6d<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_f80f26b7f9c3e9ca<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_7d8608b2d49183ba<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_c17d0732b7dc41c6<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_c2d44d2f95ef1b07<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_c7dc42ff9041ed8d<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_ba9c2c6c1aa1bb72<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_c89cc1b780e5b04e<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_2a4abfe80d1eefaf<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_651927546cbf454d<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_0c20951d1aaf3c32<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_fcdf67eeb11bcc6f<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_getCheckedAbs<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_getStrictAbs<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_getWrappingAbs<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_getSaturatingAbs<__AnyType>
		, &$vtables::$vtable_ICheckedArithmetic::template impl_getOverflowingAbs<__AnyType>
		};
	#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	template<class __AnyType> concept $ImplementsInterface_ICheckedArithmetic = $HasMethodImplementation_890e2bf27620d08e<__AnyType> && $HasMethodImplementation_866d4a678a8a09d9<__AnyType> && $HasMethodImplementation_81909588f7d8b544<__AnyType> && $HasMethodImplementation_8a71d095fb91cedb<__AnyType> && $HasMethodImplementation_373e4d7f0c90dc02<__AnyType> && $HasMethodImplementation_9b6dbf53e1c01f15<__AnyType> && $HasMethodImplementation_ff67cd75f5eb8436<__AnyType> && $HasMethodImplementation_b23c2b5d58711621<__AnyType> && $HasMethodImplementation_d460618895c40afc<__AnyType> && $HasMethodImplementation_70b55cc028445de3<__AnyType> && $HasMethodImplementation_0c5eebf0abd7cb2a<__AnyType> && $HasMethodImplementation_9b71b253e1c3f1d5<__AnyType> && $HasMethodImplementation_448f4b59047412c9<__AnyType> && $HasMethodImplementation_cb0ce08ed6f47e57<__AnyType> && $HasMethodImplementation_ea8e57053862060f<__AnyType> && $HasMethodImplementation_f0e095b211cace6e<__AnyType> && $HasMethodImplementation_a73ec69d32732cd0<__AnyType> && $HasMethodImplementation_d9eaad2c76ea0d94<__AnyType> && $HasMethodImplementation_198f966ecce69407<__AnyType> && $HasMethodImplementation_fa9a4ae386877b91<__AnyType> && $HasMethodImplementation_e190a5988c54eb5f<__AnyType> && $HasMethodImplementation_325ff096ea37dcde<__AnyType> && $HasMethodImplementation_54a51a9d94b59ce8<__AnyType> && $HasMethodImplementation_5582589cbf634348<__AnyType> && $HasMethodImplementation_c2bba26c281e2a03<__AnyType> && $HasMethodImplementation_fa9e45e3868b5be9<__AnyType> && $HasMethodImplementation_11b06445ce43bcf6<__AnyType> && $HasMethodImplementation_2078d6b2bfcfa044<__AnyType> && $HasMethodImplementation_e401d4e7a25094cb<__AnyType> && $HasMethodImplementation_0c149692e7034b12<__AnyType> && $HasMethodImplementation_8d40c48a891595c0<__AnyType> && $HasMethodImplementation_7f805010b755097b<__AnyType> && $HasMethodImplementation_645cd7dc2d67c73b<__AnyType> && $HasMethodImplementation_796de1e6e6d23222<__AnyType> && $HasMethodImplementation_fd02696bf571b30c<__AnyType> && $HasMethodImplementation_737cd39f982dc2bf<__AnyType> && $HasMethodImplementation_19ced39a1ad0d430<__AnyType> && $HasMethodImplementation_5fbd5a37d2c9daf6<__AnyType> && $HasMethodImplementation_e6a3061e10f81462<__AnyType> && $HasMethodImplementation_b91827fb7b430998<__AnyType> && $HasMethodImplementation_c97afb1ab303c173<__AnyType> && $HasMethodImplementation_c6588325e4bba201<__AnyType> && $HasMethodImplementation_b2493a805d7f2f60<__AnyType> && $HasMethodImplementation_d5754f5101e675b0<__AnyType> && $HasMethodImplementation_3673477acab3148b<__AnyType> && $HasMethodImplementation_6077d6319b48d76d<__AnyType> && $HasMethodImplementation_1de6c8430fe322d4<__AnyType> && $HasMethodImplementation_bb4e442518ecb8f3<__AnyType> && $HasMethodImplementation_c5b3990559b4743a<__AnyType> && $HasMethodImplementation_f1b4e482978274bd<__AnyType> && $HasMethodImplementation_908b16c243bcced5<__AnyType> && $HasMethodImplementation_b2cc3a8c0d89e35c<__AnyType> && $HasMethodImplementation_ad71746bd6359976<__AnyType> && $HasMethodImplementation_9cb6152eb22a4c61<__AnyType> && $HasMethodImplementation_3ca7d3508363363d<__AnyType> && $HasMethodImplementation_216f17339450d704<__AnyType> && $HasMethodImplementation_6bad9b175667117a<__AnyType> && $HasMethodImplementation_881ab50bdbe7988d<__AnyType> && $HasMethodImplementation_f88a73706e3b9ca2<__AnyType> && $HasMethodImplementation_95d5290b52c161dd<__AnyType> && $HasMethodImplementation_f8875c706e393fb6<__AnyType> && $HasMethodImplementation_844e32093c5fb112<__AnyType> && $HasMethodImplementation_38a1b16b7fd7177f<__AnyType> && $HasMethodImplementation_8ed583d9019db27c<__AnyType> && $HasMethodImplementation_870dff332828b2fa<__AnyType> && $HasMethodImplementation_15da982c2acd251f<__AnyType> && $HasMethodImplementation_105f8f95274c2137<__AnyType> && $HasMethodImplementation_75ef0e42fbf4bfb4<__AnyType> && $HasMethodImplementation_e999ccf8f2324764<__AnyType> && $HasMethodImplementation_2bcc1c637a912745<__AnyType> && $HasMethodImplementation_169ba7e7e0583482<__AnyType> && $HasMethodImplementation_cd871524fe784794<__AnyType> && $HasMethodImplementation_6c2639645679cb21<__AnyType> && $HasMethodImplementation_9e999d3efdcb8b6d<__AnyType> && $HasMethodImplementation_f80f26b7f9c3e9ca<__AnyType> && $HasMethodImplementation_7d8608b2d49183ba<__AnyType> && $HasMethodImplementation_c17d0732b7dc41c6<__AnyType> && $HasMethodImplementation_c2d44d2f95ef1b07<__AnyType> && $HasMethodImplementation_c7dc42ff9041ed8d<__AnyType> && $HasMethodImplementation_ba9c2c6c1aa1bb72<__AnyType> && $HasMethodImplementation_c89cc1b780e5b04e<__AnyType> && $HasMethodImplementation_2a4abfe80d1eefaf<__AnyType> && $HasMethodImplementation_651927546cbf454d<__AnyType> && $HasMethodImplementation_0c20951d1aaf3c32<__AnyType> && $HasMethodImplementation_fcdf67eeb11bcc6f<__AnyType> && $HasMethodImplementation_getd25d7b22d74edaad<__AnyType> && $HasMethodImplementation_get91906ed6944fe73d<__AnyType> && $HasMethodImplementation_getd4dca40b4165967a<__AnyType> && $HasMethodImplementation_getcb516c26e245f4e4<__AnyType> && $HasMethodImplementation_get6583e256e7e12a10<__AnyType> && $HasAssociatedType_858aea26d1cc9a61<__AnyType>;
	#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	class ICheckedArithmetic final : public Builtin::InterfaceRef {
		public: using $self = ICheckedArithmetic;
		public: using $vtable = $vtables::$vtable_ICheckedArithmetic;
		public: using $class = Builtin::Object;
		public: using $super = Builtin::InterfaceRef;
		private: friend class ICheckedArithmetic$Unowned;
		friend class ICheckedArithmetic$Weak;
		public: using $strong_ref = $self;
		public: using $unowned_ref = ICheckedArithmetic$Unowned;
		public: using $weak_ref = ICheckedArithmetic$Weak;
		public: template<class __AnyType> static constexpr bool $ImplementsInterface = $ImplementsInterface_ICheckedArithmetic<__AnyType>;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		private: const $vtable* _vtable;
		ADV_INTERFACE_STRONG_COMMON_CTORS(ICheckedArithmetic);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		ICheckedArithmetic(const __AnyType& value) : $super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::Retain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable> && std::is_rvalue_reference_v<__AnyType&&>
		ICheckedArithmetic(__AnyType&& value) : $super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		ICheckedArithmetic& operator=(const __AnyType& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable> && std::is_rvalue_reference_v<__AnyType&&>
		ICheckedArithmetic& operator=(__AnyType&& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); _vtable = Builtin::GetVTableFromInterface(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); return *this; } 
		public: template<class __AnyType> ICheckedArithmetic(const __AnyType& value) : $super(nullptr), _vtable{ nullptr } 
		{
			static_assert($ImplementsInterface_ICheckedArithmetic<std::decay_t<__AnyType>>,"Cannot initialize interface ICheckedArithmetic from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &$vtable_ICheckedArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_ICheckedArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_ICheckedArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_ICheckedArithmetic_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> ICheckedArithmetic(__AnyType&& value) : $super(nullptr), _vtable{ nullptr } 
		{
			static_assert($ImplementsInterface_ICheckedArithmetic<std::decay_t<__AnyType>>,"Cannot initialize interface ICheckedArithmetic from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &$vtable_ICheckedArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_ICheckedArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_ICheckedArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_ICheckedArithmetic_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::$self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> ICheckedArithmetic(__AnyType&& value) : $super((Builtin::Object*)&value), _vtable{ &$vtable_ICheckedArithmetic_for<__FixedType> } { static_assert($ImplementsInterface_ICheckedArithmetic<__FixedType>, "Cannot initialize interface ICheckedArithmetic from this type"); Builtin::Retain(_obj); }
		public: template<class __AnyType> ICheckedArithmetic& operator=(const __AnyType& value) {
			static_assert($ImplementsInterface_ICheckedArithmetic<std::decay_t<__AnyType>>,"Cannot initialize interface ICheckedArithmetic from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &$vtable_ICheckedArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_ICheckedArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_ICheckedArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_ICheckedArithmetic_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> ICheckedArithmetic& operator=(__AnyType&& value) {
			static_assert($ImplementsInterface_ICheckedArithmetic<std::decay_t<__AnyType>>,"Cannot initialize interface ICheckedArithmetic from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &$vtable_ICheckedArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_ICheckedArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_ICheckedArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_ICheckedArithmetic_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::$self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> ICheckedArithmetic& operator=(__AnyType&& value) { static_assert($ImplementsInterface_ICheckedArithmetic<__FixedType>, "Cannot initialize interface ICheckedArithmetic from this type"); 
 		if (_obj) Builtin::Release(_obj); _obj = (Builtin::Object*)&value; Builtin::Retain(_obj); 
		_vtable = &$vtable_ICheckedArithmetic_for<__FixedType>; return *this; }
		#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::Nullable<Builtin::OptionalStrongRef<Builtin::ObjectRef>> _operator_add_qst(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_890e2bf27620d08e(_obj, rhs)); }
		#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_add_qst_eq(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_866d4a678a8a09d9(_obj, rhs)); }
		#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_add_add_qst() const { ADV_EXPRESSION_BODY(_vtable->fnptr_81909588f7d8b544(_obj)); }
		#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_add_ne(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_8a71d095fb91cedb(_obj, rhs)); }
		#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_add_ne_eq(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_373e4d7f0c90dc02(_obj, rhs)); }
		#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_add_add_ne() const { ADV_EXPRESSION_BODY(_vtable->fnptr_9b6dbf53e1c01f15(_obj)); }
		#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_add_mod(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_ff67cd75f5eb8436(_obj, rhs)); }
		#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_add_mod_eq(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_b23c2b5d58711621(_obj, rhs)); }
		#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_add_add_mod() const { ADV_EXPRESSION_BODY(_vtable->fnptr_d460618895c40afc(_obj)); }
		#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_add_or(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_70b55cc028445de3(_obj, rhs)); }
		#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_add_or_eq(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_0c5eebf0abd7cb2a(_obj, rhs)); }
		#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_add_add_or() const { ADV_EXPRESSION_BODY(_vtable->fnptr_9b71b253e1c3f1d5(_obj)); }
		#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, bool> _operator_add_mod_qst(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_448f4b59047412c9(_obj, rhs)); }
		#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, bool> CarryingAdd(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs, bool carry) const { ADV_EXPRESSION_BODY(_vtable->fnptr_cb0ce08ed6f47e57(_obj, rhs, carry)); }
		#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::Nullable<Builtin::OptionalStrongRef<Builtin::ObjectRef>> _operator_sub_qst(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_ea8e57053862060f(_obj, rhs)); }
		#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_sub_qst_eq(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_f0e095b211cace6e(_obj, rhs)); }
		#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_sub_sub_qst() const { ADV_EXPRESSION_BODY(_vtable->fnptr_a73ec69d32732cd0(_obj)); }
		#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_sub_ne(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_d9eaad2c76ea0d94(_obj, rhs)); }
		#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_sub_ne_eq(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_198f966ecce69407(_obj, rhs)); }
		#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_sub_sub_ne() const { ADV_EXPRESSION_BODY(_vtable->fnptr_fa9a4ae386877b91(_obj)); }
		#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_sub_mod(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_e190a5988c54eb5f(_obj, rhs)); }
		#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_sub_mod_eq(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_325ff096ea37dcde(_obj, rhs)); }
		#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_sub_sub_mod() const { ADV_EXPRESSION_BODY(_vtable->fnptr_54a51a9d94b59ce8(_obj)); }
		#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_sub_or(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_5582589cbf634348(_obj, rhs)); }
		#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_sub_or_eq(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_c2bba26c281e2a03(_obj, rhs)); }
		#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_sub_sub_or() const { ADV_EXPRESSION_BODY(_vtable->fnptr_fa9e45e3868b5be9(_obj)); }
		#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, bool> BorrowingSub(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs, bool carry) const { ADV_EXPRESSION_BODY(_vtable->fnptr_11b06445ce43bcf6(_obj, rhs, carry)); }
		#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, bool> _operator_sub_mod_qst(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_2078d6b2bfcfa044(_obj, rhs)); }
		#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::Nullable<Builtin::OptionalStrongRef<Builtin::ObjectRef>> _operator_mul_qst(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_e401d4e7a25094cb(_obj, rhs)); }
		#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_mul_qst_eq(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_0c149692e7034b12(_obj, rhs)); }
		#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_mul_ne(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_8d40c48a891595c0(_obj, rhs)); }
		#line 71 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_mul_ne_eq(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_7f805010b755097b(_obj, rhs)); }
		#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_mul_mod(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_645cd7dc2d67c73b(_obj, rhs)); }
		#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_mul_mod_eq(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_796de1e6e6d23222(_obj, rhs)); }
		#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_mul_or(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_fd02696bf571b30c(_obj, rhs)); }
		#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_mul_or_eq(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_737cd39f982dc2bf(_obj, rhs)); }
		#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, bool> _operator_mul_mod_qst(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_19ced39a1ad0d430(_obj, rhs)); }
		#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, Builtin::OptionalStrongRef<Builtin::ObjectRef>> _operator_mul_gt(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_5fbd5a37d2c9daf6(_obj, rhs)); }
		#line 85 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, Builtin::OptionalStrongRef<Builtin::ObjectRef>> CarryingMul(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs, Builtin::OptionalStrongRef<Builtin::ObjectRef> carry) const { ADV_EXPRESSION_BODY(_vtable->fnptr_e6a3061e10f81462(_obj, rhs, carry)); }
		#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::Nullable<Builtin::OptionalStrongRef<Builtin::ObjectRef>> _operator_bsl_qst(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_b91827fb7b430998(_obj, rhs)); }
		#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_bsl_qst_eq(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_c97afb1ab303c173(_obj, rhs)); }
		#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_bsl_ne(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_c6588325e4bba201(_obj, rhs)); }
		#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_bsl_ne_eq(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_b2493a805d7f2f60(_obj, rhs)); }
		#line 95 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_bsl_mod(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_d5754f5101e675b0(_obj, rhs)); }
		#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_bsl_mod_eq(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_3673477acab3148b(_obj, rhs)); }
		#line 99 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_bsl_or(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_6077d6319b48d76d(_obj, rhs)); }
		#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_bsl_or_eq(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_1de6c8430fe322d4(_obj, rhs)); }
		#line 103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, bool> _operator_bsl_mod_qst(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_bb4e442518ecb8f3(_obj, rhs)); }
		#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::Nullable<Builtin::OptionalStrongRef<Builtin::ObjectRef>> _operator_bsl_bsl_qst(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_c5b3990559b4743a(_obj, rhs)); }
		#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_bsl_bsl_qst_eq(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_f1b4e482978274bd(_obj, rhs)); }
		#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::Nullable<Builtin::OptionalStrongRef<Builtin::ObjectRef>> _operator_mod_qst(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_908b16c243bcced5(_obj, rhs)); }
		#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_mod_qst_eq(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_b2cc3a8c0d89e35c(_obj, rhs)); }
		#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_mod_ne(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_ad71746bd6359976(_obj, rhs)); }
		#line 115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_mod_ne_eq(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_9cb6152eb22a4c61(_obj, rhs)); }
		#line 117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_mod_mod(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_3ca7d3508363363d(_obj, rhs)); }
		#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_mod_mod_eq(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_216f17339450d704(_obj, rhs)); }
		#line 121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, bool> _operator_mod_mod_qst(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_6bad9b175667117a(_obj, rhs)); }
		#line 123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::Nullable<Builtin::OptionalStrongRef<Builtin::ObjectRef>> _operator_sub_qst() const { ADV_EXPRESSION_BODY(_vtable->fnptr_881ab50bdbe7988d(_obj)); }
		#line 125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_sub_ne() const { ADV_EXPRESSION_BODY(_vtable->fnptr_f88a73706e3b9ca2(_obj)); }
		#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_sub_mod() const { ADV_EXPRESSION_BODY(_vtable->fnptr_95d5290b52c161dd(_obj)); }
		#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_sub_or() const { ADV_EXPRESSION_BODY(_vtable->fnptr_f8875c706e393fb6(_obj)); }
		#line 131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, bool> _operator_sub_mod_qst() const { ADV_EXPRESSION_BODY(_vtable->fnptr_844e32093c5fb112(_obj)); }
		#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::Nullable<Builtin::OptionalStrongRef<Builtin::ObjectRef>> _operator_lt_lt_qst(Builtin::i32 amount) const { ADV_EXPRESSION_BODY(_vtable->fnptr_38a1b16b7fd7177f(_obj, amount)); }
		#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_lt_lt_qst_eq(Builtin::i32 amount) const { ADV_EXPRESSION_BODY(_vtable->fnptr_8ed583d9019db27c(_obj, amount)); }
		#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_lt_lt_ne(Builtin::i32 amount) const { ADV_EXPRESSION_BODY(_vtable->fnptr_870dff332828b2fa(_obj, amount)); }
		#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_lt_lt_ne_eq(Builtin::i32 amount) const { ADV_EXPRESSION_BODY(_vtable->fnptr_15da982c2acd251f(_obj, amount)); }
		#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_lt_lt_mod(Builtin::i32 amount) const { ADV_EXPRESSION_BODY(_vtable->fnptr_105f8f95274c2137(_obj, amount)); }
		#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_lt_lt_mod_eq(Builtin::i32 amount) const { ADV_EXPRESSION_BODY(_vtable->fnptr_75ef0e42fbf4bfb4(_obj, amount)); }
		#line 145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, bool> _operator_lt_lt_mod_qst(Builtin::i32 amount) const { ADV_EXPRESSION_BODY(_vtable->fnptr_e999ccf8f2324764(_obj, amount)); }
		#line 147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::Nullable<Builtin::OptionalStrongRef<Builtin::ObjectRef>> _operator_gt_gt_qst(Builtin::i32 amount) const { ADV_EXPRESSION_BODY(_vtable->fnptr_2bcc1c637a912745(_obj, amount)); }
		#line 149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_gt_gt_qst_eq(Builtin::i32 amount) const { ADV_EXPRESSION_BODY(_vtable->fnptr_169ba7e7e0583482(_obj, amount)); }
		#line 151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_gt_gt_ne(Builtin::i32 amount) const { ADV_EXPRESSION_BODY(_vtable->fnptr_cd871524fe784794(_obj, amount)); }
		#line 153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_gt_gt_ne_eq(Builtin::i32 amount) const { ADV_EXPRESSION_BODY(_vtable->fnptr_6c2639645679cb21(_obj, amount)); }
		#line 155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_gt_gt_mod(Builtin::i32 amount) const { ADV_EXPRESSION_BODY(_vtable->fnptr_9e999d3efdcb8b6d(_obj, amount)); }
		#line 157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_gt_gt_mod_eq(Builtin::i32 amount) const { ADV_EXPRESSION_BODY(_vtable->fnptr_f80f26b7f9c3e9ca(_obj, amount)); }
		#line 159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, bool> _operator_gt_gt_mod_qst(Builtin::i32 amount) const { ADV_EXPRESSION_BODY(_vtable->fnptr_7d8608b2d49183ba(_obj, amount)); }
		#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::Nullable<Builtin::OptionalStrongRef<Builtin::ObjectRef>> _operator_xor_xor_qst(Builtin::u32 exp) const { ADV_EXPRESSION_BODY(_vtable->fnptr_c17d0732b7dc41c6(_obj, exp)); }
		#line 163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_xor_xor_qst_eq(Builtin::u32 exp) const { ADV_EXPRESSION_BODY(_vtable->fnptr_c2d44d2f95ef1b07(_obj, exp)); }
		#line 165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_xor_xor_ne(Builtin::u32 exp) const { ADV_EXPRESSION_BODY(_vtable->fnptr_c7dc42ff9041ed8d(_obj, exp)); }
		#line 167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_xor_xor_ne_eq(Builtin::u32 exp) const { ADV_EXPRESSION_BODY(_vtable->fnptr_ba9c2c6c1aa1bb72(_obj, exp)); }
		#line 169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_xor_xor_mod(Builtin::u32 exp) const { ADV_EXPRESSION_BODY(_vtable->fnptr_c89cc1b780e5b04e(_obj, exp)); }
		#line 171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_xor_xor_mod_eq(Builtin::u32 exp) const { ADV_EXPRESSION_BODY(_vtable->fnptr_2a4abfe80d1eefaf(_obj, exp)); }
		#line 173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_xor_xor_or(Builtin::u32 exp) const { ADV_EXPRESSION_BODY(_vtable->fnptr_651927546cbf454d(_obj, exp)); }
		#line 175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_xor_xor_or_eq(Builtin::u32 exp) const { ADV_EXPRESSION_BODY(_vtable->fnptr_0c20951d1aaf3c32(_obj, exp)); }
		#line 177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
		public: FORCE_INLINE const std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, bool> _operator_xor_xor_mod_qst(Builtin::u32 exp) const { ADV_EXPRESSION_BODY(_vtable->fnptr_fcdf67eeb11bcc6f(_obj, exp)); }
		
	};
	class ICheckedArithmetic$Unowned final : public Builtin::InterfaceRef$Unowned {
		public: using $self = ICheckedArithmetic$Unowned;
		public: using $vtable = $vtables::$vtable_ICheckedArithmetic;
		public: using $class = Builtin::Object;
		public: using $super = Builtin::InterfaceRef$Unowned;
		private: friend class ICheckedArithmetic;
		public: using $strong_ref = ICheckedArithmetic;
		public: using $unowned_ref = $self;
		public: using $weak_ref = ICheckedArithmetic$Weak;
		public: FORCE_INLINE decltype(auto) $ref() noexcept { UnownedCheck(_obj); return *this; } FORCE_INLINE decltype(auto) $ref() const noexcept { UnownedCheck(_obj); return *this; }
		private: const $vtable* _vtable;
		ADV_INTERFACE_UNOWNED_COMMON_CTORS(ICheckedArithmetic$Unowned);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		ICheckedArithmetic$Unowned(const __AnyType& value) : $super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::UnownedRetain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		ICheckedArithmetic$Unowned& operator=(const __AnyType& value) { if (_obj) Builtin::UnownedRelease(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires $ImplementsInterface_ICheckedArithmetic<__AnyType> ICheckedArithmetic$Unowned(const __AnyType& value) : $super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_ICheckedArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_ICheckedArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires $ImplementsInterface_ICheckedArithmetic<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> ICheckedArithmetic$Unowned(__AnyType&& value) : $super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj);if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_ICheckedArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &$vtable_ICheckedArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires $ImplementsInterface_ICheckedArithmetic<__AnyType> ICheckedArithmetic$Unowned& operator=(const __AnyType& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_ICheckedArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_ICheckedArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		public: template<class __AnyType> requires $ImplementsInterface_ICheckedArithmetic<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> ICheckedArithmetic$Unowned& operator=(__AnyType&& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_ICheckedArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &$vtable_ICheckedArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	class ICheckedArithmetic$Weak final : public Builtin::ObjectRef$Weak {
		public: using $self = ICheckedArithmetic$Weak;
		public: using $vtable = $vtables::$vtable_ICheckedArithmetic;
		public: using $class = Builtin::Object;
		public: using $super = Builtin::ObjectRef$Weak;
		private: friend class ICheckedArithmetic;
		public: using $strong_ref = ICheckedArithmetic;
		public: using $unowned_ref = ICheckedArithmetic$Unowned;
		public: using $weak_ref = $self;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		private: const $vtable* _vtable;
		ADV_INTERFACE_WEAK_COMMON_CTORS(ICheckedArithmetic$Weak);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		ICheckedArithmetic$Weak(const __AnyType& value) : $super(formWeakRef(Builtin::GetObjectReferenceFromInterface(&value))), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		ICheckedArithmetic$Weak& operator=(const __AnyType& value) { if (_obj) _obj->decrementWeak(); _obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires $ImplementsInterface_ICheckedArithmetic<__AnyType> ICheckedArithmetic$Weak(const __AnyType& value) : $super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &$vtable_ICheckedArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires $ImplementsInterface_ICheckedArithmetic<__AnyType> ICheckedArithmetic$Weak& operator=(const __AnyType& value) {
			if (_obj) _obj->decrementWeak();
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &$vtable_ICheckedArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::Nullable<Builtin::OptionalStrongRef<Builtin::ObjectRef>> _operator_add_qst(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_890e2bf27620d08e(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_add_qst_eq(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_866d4a678a8a09d9(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_add_add_qst(const __AnyInterface& iface)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_81909588f7d8b544(Builtin::GetObjectReferenceFromInterface(&iface))); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_add_ne(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_8a71d095fb91cedb(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_add_ne_eq(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_373e4d7f0c90dc02(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_add_add_ne(const __AnyInterface& iface)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_9b6dbf53e1c01f15(Builtin::GetObjectReferenceFromInterface(&iface))); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_add_mod(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_ff67cd75f5eb8436(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_add_mod_eq(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_b23c2b5d58711621(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_add_add_mod(const __AnyInterface& iface)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_d460618895c40afc(Builtin::GetObjectReferenceFromInterface(&iface))); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_add_or(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_70b55cc028445de3(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_add_or_eq(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_0c5eebf0abd7cb2a(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_add_add_or(const __AnyInterface& iface)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_9b71b253e1c3f1d5(Builtin::GetObjectReferenceFromInterface(&iface))); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, bool> _operator_add_mod_qst(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_448f4b59047412c9(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, bool> CarryingAdd(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs, bool carry)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_cb0ce08ed6f47e57(Builtin::GetObjectReferenceFromInterface(&iface), rhs, carry)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::Nullable<Builtin::OptionalStrongRef<Builtin::ObjectRef>> _operator_sub_qst(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_ea8e57053862060f(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_sub_qst_eq(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_f0e095b211cace6e(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_sub_sub_qst(const __AnyInterface& iface)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_a73ec69d32732cd0(Builtin::GetObjectReferenceFromInterface(&iface))); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_sub_ne(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_d9eaad2c76ea0d94(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_sub_ne_eq(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_198f966ecce69407(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_sub_sub_ne(const __AnyInterface& iface)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_fa9a4ae386877b91(Builtin::GetObjectReferenceFromInterface(&iface))); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_sub_mod(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_e190a5988c54eb5f(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_sub_mod_eq(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_325ff096ea37dcde(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_sub_sub_mod(const __AnyInterface& iface)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_54a51a9d94b59ce8(Builtin::GetObjectReferenceFromInterface(&iface))); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_sub_or(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_5582589cbf634348(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_sub_or_eq(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_c2bba26c281e2a03(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_sub_sub_or(const __AnyInterface& iface)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_fa9e45e3868b5be9(Builtin::GetObjectReferenceFromInterface(&iface))); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, bool> BorrowingSub(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs, bool carry)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_11b06445ce43bcf6(Builtin::GetObjectReferenceFromInterface(&iface), rhs, carry)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, bool> _operator_sub_mod_qst(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_2078d6b2bfcfa044(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::Nullable<Builtin::OptionalStrongRef<Builtin::ObjectRef>> _operator_mul_qst(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_e401d4e7a25094cb(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_mul_qst_eq(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_0c149692e7034b12(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_mul_ne(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_8d40c48a891595c0(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_mul_ne_eq(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_7f805010b755097b(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_mul_mod(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_645cd7dc2d67c73b(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_mul_mod_eq(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_796de1e6e6d23222(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_mul_or(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_fd02696bf571b30c(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_mul_or_eq(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_737cd39f982dc2bf(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, bool> _operator_mul_mod_qst(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_19ced39a1ad0d430(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, Builtin::OptionalStrongRef<Builtin::ObjectRef>> _operator_mul_gt(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_5fbd5a37d2c9daf6(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, Builtin::OptionalStrongRef<Builtin::ObjectRef>> CarryingMul(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs, Builtin::OptionalStrongRef<Builtin::ObjectRef> carry)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_e6a3061e10f81462(Builtin::GetObjectReferenceFromInterface(&iface), rhs, carry)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::Nullable<Builtin::OptionalStrongRef<Builtin::ObjectRef>> _operator_bsl_qst(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_b91827fb7b430998(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_bsl_qst_eq(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_c97afb1ab303c173(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_bsl_ne(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_c6588325e4bba201(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_bsl_ne_eq(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_b2493a805d7f2f60(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_bsl_mod(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_d5754f5101e675b0(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_bsl_mod_eq(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_3673477acab3148b(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_bsl_or(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_6077d6319b48d76d(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_bsl_or_eq(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_1de6c8430fe322d4(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, bool> _operator_bsl_mod_qst(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_bb4e442518ecb8f3(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::Nullable<Builtin::OptionalStrongRef<Builtin::ObjectRef>> _operator_bsl_bsl_qst(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_c5b3990559b4743a(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_bsl_bsl_qst_eq(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_f1b4e482978274bd(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::Nullable<Builtin::OptionalStrongRef<Builtin::ObjectRef>> _operator_mod_qst(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_908b16c243bcced5(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_mod_qst_eq(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_b2cc3a8c0d89e35c(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_mod_ne(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_ad71746bd6359976(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_mod_ne_eq(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_9cb6152eb22a4c61(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_mod_mod(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_3ca7d3508363363d(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_mod_mod_eq(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_216f17339450d704(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, bool> _operator_mod_mod_qst(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_6bad9b175667117a(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::Nullable<Builtin::OptionalStrongRef<Builtin::ObjectRef>> _operator_sub_qst(const __AnyInterface& iface)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_881ab50bdbe7988d(Builtin::GetObjectReferenceFromInterface(&iface))); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_sub_ne(const __AnyInterface& iface)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_f88a73706e3b9ca2(Builtin::GetObjectReferenceFromInterface(&iface))); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_sub_mod(const __AnyInterface& iface)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_95d5290b52c161dd(Builtin::GetObjectReferenceFromInterface(&iface))); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_sub_or(const __AnyInterface& iface)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_f8875c706e393fb6(Builtin::GetObjectReferenceFromInterface(&iface))); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, bool> _operator_sub_mod_qst(const __AnyInterface& iface)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_844e32093c5fb112(Builtin::GetObjectReferenceFromInterface(&iface))); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::Nullable<Builtin::OptionalStrongRef<Builtin::ObjectRef>> _operator_lt_lt_qst(const __AnyInterface& iface, Builtin::i32 amount)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_38a1b16b7fd7177f(Builtin::GetObjectReferenceFromInterface(&iface), amount)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_lt_lt_qst_eq(const __AnyInterface& iface, Builtin::i32 amount)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_8ed583d9019db27c(Builtin::GetObjectReferenceFromInterface(&iface), amount)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_lt_lt_ne(const __AnyInterface& iface, Builtin::i32 amount)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_870dff332828b2fa(Builtin::GetObjectReferenceFromInterface(&iface), amount)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_lt_lt_ne_eq(const __AnyInterface& iface, Builtin::i32 amount)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_15da982c2acd251f(Builtin::GetObjectReferenceFromInterface(&iface), amount)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_lt_lt_mod(const __AnyInterface& iface, Builtin::i32 amount)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_105f8f95274c2137(Builtin::GetObjectReferenceFromInterface(&iface), amount)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_lt_lt_mod_eq(const __AnyInterface& iface, Builtin::i32 amount)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_75ef0e42fbf4bfb4(Builtin::GetObjectReferenceFromInterface(&iface), amount)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, bool> _operator_lt_lt_mod_qst(const __AnyInterface& iface, Builtin::i32 amount)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_e999ccf8f2324764(Builtin::GetObjectReferenceFromInterface(&iface), amount)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::Nullable<Builtin::OptionalStrongRef<Builtin::ObjectRef>> _operator_gt_gt_qst(const __AnyInterface& iface, Builtin::i32 amount)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_2bcc1c637a912745(Builtin::GetObjectReferenceFromInterface(&iface), amount)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_gt_gt_qst_eq(const __AnyInterface& iface, Builtin::i32 amount)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_169ba7e7e0583482(Builtin::GetObjectReferenceFromInterface(&iface), amount)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_gt_gt_ne(const __AnyInterface& iface, Builtin::i32 amount)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_cd871524fe784794(Builtin::GetObjectReferenceFromInterface(&iface), amount)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_gt_gt_ne_eq(const __AnyInterface& iface, Builtin::i32 amount)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_6c2639645679cb21(Builtin::GetObjectReferenceFromInterface(&iface), amount)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_gt_gt_mod(const __AnyInterface& iface, Builtin::i32 amount)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_9e999d3efdcb8b6d(Builtin::GetObjectReferenceFromInterface(&iface), amount)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_gt_gt_mod_eq(const __AnyInterface& iface, Builtin::i32 amount)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_f80f26b7f9c3e9ca(Builtin::GetObjectReferenceFromInterface(&iface), amount)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, bool> _operator_gt_gt_mod_qst(const __AnyInterface& iface, Builtin::i32 amount)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_7d8608b2d49183ba(Builtin::GetObjectReferenceFromInterface(&iface), amount)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::Nullable<Builtin::OptionalStrongRef<Builtin::ObjectRef>> _operator_xor_xor_qst(const __AnyInterface& iface, Builtin::u32 exp)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_c17d0732b7dc41c6(Builtin::GetObjectReferenceFromInterface(&iface), exp)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_xor_xor_qst_eq(const __AnyInterface& iface, Builtin::u32 exp)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_c2d44d2f95ef1b07(Builtin::GetObjectReferenceFromInterface(&iface), exp)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_xor_xor_ne(const __AnyInterface& iface, Builtin::u32 exp)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_c7dc42ff9041ed8d(Builtin::GetObjectReferenceFromInterface(&iface), exp)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_xor_xor_ne_eq(const __AnyInterface& iface, Builtin::u32 exp)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_ba9c2c6c1aa1bb72(Builtin::GetObjectReferenceFromInterface(&iface), exp)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_xor_xor_mod(const __AnyInterface& iface, Builtin::u32 exp)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_c89cc1b780e5b04e(Builtin::GetObjectReferenceFromInterface(&iface), exp)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_xor_xor_mod_eq(const __AnyInterface& iface, Builtin::u32 exp)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_2a4abfe80d1eefaf(Builtin::GetObjectReferenceFromInterface(&iface), exp)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_xor_xor_or(const __AnyInterface& iface, Builtin::u32 exp)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_651927546cbf454d(Builtin::GetObjectReferenceFromInterface(&iface), exp)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_xor_xor_or_eq(const __AnyInterface& iface, Builtin::u32 exp)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_0c20951d1aaf3c32(Builtin::GetObjectReferenceFromInterface(&iface), exp)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, bool> _operator_xor_xor_mod_qst(const __AnyInterface& iface, Builtin::u32 exp)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_fcdf67eeb11bcc6f(Builtin::GetObjectReferenceFromInterface(&iface), exp)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::Nullable<Builtin::OptionalStrongRef<Builtin::ObjectRef>> getCheckedAbs(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getCheckedAbs(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getStrictAbs(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getStrictAbs(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getWrappingAbs(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getWrappingAbs(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getSaturatingAbs(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getSaturatingAbs(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ICheckedArithmetic::$vtable> FORCE_INLINE const std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, bool> getOverflowingAbs(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getOverflowingAbs(Builtin::GetObjectReferenceFromInterface(&iface)); }
	
	//###############################################################################
//# Function definitions
//###############################################################################

#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ICheckedArithmetic.ast"
	

}