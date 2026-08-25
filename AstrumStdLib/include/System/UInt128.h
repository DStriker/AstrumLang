#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "Int8.h"
#include "Int16.h"
#include "Int32.h"
#include "Int64.h"
#include "UInt8.h"
#include "UInt16.h"
#include "UInt32.h"
#include "UInt64.h"

namespace System {
namespace __Unsafe {} namespace __UInt128$Protected__Unsafe {}
//###############################################################################
//# Global type aliases
//###############################################################################
#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
using UInt128 = Builtin::u128;
//###############################################################################
//# Type definitions
//###############################################################################
	} namespace $extensions { using namespace System;
#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	using $extension_UInt128_16_u128 = Builtin::u128;
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ADV_CHECK_INTERFACE(IMinMaxValue, IMinMaxValue);
	#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class __TT> struct $static_getMinValue; template<> struct $static_getMinValue<$extension_UInt128_16_u128> { static inline constexpr auto get() -> const $extension_UInt128_16_u128; };
	#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class __TT> struct $static_getMaxValue; template<> struct $static_getMaxValue<$extension_UInt128_16_u128> { static inline constexpr auto get() -> const $extension_UInt128_16_u128; };
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt128_16_u128, IMinMaxValue, IMinMaxValue, $extension_UInt128_16_u128);
	} namespace System{
using $extensions::$static_getMinValue;
using $extensions::$static_getMaxValue;

		} namespace $extensions { using namespace System;
#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	using $extension_UInt128_21_u128 = Builtin::u128;
	#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ASTRUMSTD_API auto _operator_eq_eq_mul($extension_UInt128_21_u128 const& $this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool;
	#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto operator<=>($extension_UInt128_21_u128 const& $this LIFETIMEBOUND, Builtin::Nullable<$extension_UInt128_21_u128> rhs) noexcept -> const Builtin::i32;
	#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_gt_gt_gt($extension_UInt128_21_u128 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_UInt128_21_u128;
	#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_gt_gt_gt_eq($extension_UInt128_21_u128 & $this , Builtin::i32 amount)  -> typename $extension_UInt128_21_u128&;
	#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_lt_lt_bsl($extension_UInt128_21_u128 const& $this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename $extension_UInt128_21_u128;
	#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_lt_lt_bsl_eq($extension_UInt128_21_u128 & $this , Builtin::u32 amount) noexcept -> typename $extension_UInt128_21_u128&;
	#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_gt_gt_bsl($extension_UInt128_21_u128 const& $this LIFETIMEBOUND, Builtin::u128 amount) noexcept -> const typename $extension_UInt128_21_u128;
	#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_gt_gt_bsl_eq($extension_UInt128_21_u128 & $this , Builtin::u128 amount) noexcept -> typename $extension_UInt128_21_u128&;
	#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getHashCode($extension_UInt128_21_u128 const& $this ) -> const Builtin::u64;
	} namespace System{
using $extensions::_operator_eq_eq_mul;
using $extensions::operator<=>;
using $extensions::_operator_gt_gt_gt;
using $extensions::_operator_gt_gt_gt_eq;
using $extensions::_operator_lt_lt_bsl;
using $extensions::_operator_lt_lt_bsl_eq;
using $extensions::_operator_gt_gt_bsl;
using $extensions::_operator_gt_gt_bsl_eq;
using $extensions::getHashCode;

		} namespace $extensions { using namespace System;
#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	using $extension_UInt128_90_u128 = Builtin::u128;
	#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ADV_CHECK_INTERFACE(IAbstractComparable, IAbstractComparable);
	#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ASTRUMSTD_API auto _operator_lt_eq_gt_mul($extension_UInt128_90_u128 const& $this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32;
	#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt128_90_u128, IAbstractComparable, IAbstractComparable, $extension_UInt128_90_u128);
	} namespace System{
using $extensions::_operator_lt_eq_gt_mul;

		} namespace $extensions { using namespace System;
#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	using $extension_UInt128_105_u128 = Builtin::u128;
	#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ADV_CHECK_INTERFACE(IConvertible, IConvertible);
	#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToBoolean($extension_UInt128_105_u128 const& $this LIFETIMEBOUND) noexcept -> const bool;
	#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToInt8($extension_UInt128_105_u128 const& $this LIFETIMEBOUND)  -> const Builtin::i8;
	#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToUInt8($extension_UInt128_105_u128 const& $this LIFETIMEBOUND)  -> const Builtin::u8;
	#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToInt16($extension_UInt128_105_u128 const& $this LIFETIMEBOUND)  -> const Builtin::i16;
	#line 125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToUInt16($extension_UInt128_105_u128 const& $this LIFETIMEBOUND)  -> const Builtin::u16;
	#line 131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToInt32($extension_UInt128_105_u128 const& $this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToUInt32($extension_UInt128_105_u128 const& $this LIFETIMEBOUND)  -> const Builtin::u32;
	#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToInt64($extension_UInt128_105_u128 const& $this LIFETIMEBOUND)  -> const Builtin::i64;
	#line 149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToUInt64($extension_UInt128_105_u128 const& $this LIFETIMEBOUND)  -> const Builtin::u64;
	#line 155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToInt128($extension_UInt128_105_u128 const& $this LIFETIMEBOUND)  -> const Builtin::i128;
	#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToUInt128($extension_UInt128_105_u128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u128;
	#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToIsize($extension_UInt128_105_u128 const& $this LIFETIMEBOUND)  -> const Builtin::isize;
	#line 170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToUsize($extension_UInt128_105_u128 const& $this LIFETIMEBOUND)  -> const Builtin::usize;
	#line 178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToFloat32($extension_UInt128_105_u128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::f32;
	#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToFloat64($extension_UInt128_105_u128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::f64;
	#line 180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToByte($extension_UInt128_105_u128 const& $this LIFETIMEBOUND)  -> const Builtin::u8;
	#line 186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToChar($extension_UInt128_105_u128 const& $this LIFETIMEBOUND)  -> const Builtin::char32;
	#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt128_105_u128, IConvertible, IConvertible, $extension_UInt128_105_u128);
	} namespace System{
using $extensions::ToBoolean;
using $extensions::ToInt8;
using $extensions::ToUInt8;
using $extensions::ToInt16;
using $extensions::ToUInt16;
using $extensions::ToInt32;
using $extensions::ToUInt32;
using $extensions::ToInt64;
using $extensions::ToUInt64;
using $extensions::ToInt128;
using $extensions::ToUInt128;
using $extensions::ToIsize;
using $extensions::ToUsize;
using $extensions::ToFloat32;
using $extensions::ToFloat64;
using $extensions::ToByte;
using $extensions::ToChar;

		} namespace $extensions { using namespace System;
#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	using $extension_UInt128_197_u128 = Builtin::u128;
	#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ADV_CHECK_INTERFACE(IDivisibleArithmetic, IDivisibleArithmetic);
	#line 199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_div_mod($extension_UInt128_197_u128 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_UInt128_197_u128, $extension_UInt128_197_u128>;
	#line 205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_div_not($extension_UInt128_197_u128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt128_197_u128;
	#line 212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_div_not_eq($extension_UInt128_197_u128 & $this , auto rhs)  -> typename $extension_UInt128_197_u128&;
	#line 214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_div_lt($extension_UInt128_197_u128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt128_197_u128;
	#line 223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_div_lt_eq($extension_UInt128_197_u128 & $this , auto rhs)  -> typename $extension_UInt128_197_u128&;
	#line 225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mod_lt($extension_UInt128_197_u128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt128_197_u128;
	#line 233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_mod_lt_eq($extension_UInt128_197_u128 & $this , auto rhs)  -> typename $extension_UInt128_197_u128&;
	#line 235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_div_gt($extension_UInt128_197_u128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt128_197_u128;
	#line 245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_div_gt_eq($extension_UInt128_197_u128 & $this , auto rhs)  -> typename $extension_UInt128_197_u128&;
	#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt128_197_u128, IDivisibleArithmetic, IDivisibleArithmetic, $extension_UInt128_197_u128);
	} namespace System{
using $extensions::_operator_div_mod;
using $extensions::_operator_div_not;
using $extensions::_operator_div_not_eq;
using $extensions::_operator_div_lt;
using $extensions::_operator_div_lt_eq;
using $extensions::_operator_mod_lt;
using $extensions::_operator_mod_lt_eq;
using $extensions::_operator_div_gt;
using $extensions::_operator_div_gt_eq;

		} namespace $extensions { using namespace System;
#line 248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	using $extension_UInt128_248_u128 = Builtin::u128;
	#line 248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ADV_CHECK_INTERFACE(IIntegerDivisibleArithmetic, IIntegerDivisibleArithmetic);
	#line 250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_bsl($extension_UInt128_248_u128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt128_248_u128;
	#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_bsl_eq($extension_UInt128_248_u128 & $this , T rhs)  -> typename $extension_UInt128_248_u128&;
	#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl($extension_UInt128_248_u128 const& $this LIFETIMEBOUND, T rhs)  -> const Builtin::Nullable<$extension_UInt128_248_u128>;
	#line 248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt128_248_u128, IIntegerDivisibleArithmetic, IIntegerDivisibleArithmetic, $extension_UInt128_248_u128);
	} namespace System{
using $extensions::_operator_bsl;
using $extensions::_operator_bsl_eq;
using $extensions::_operator_bsl_bsl;

		} namespace $extensions { using namespace System;
#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	using $extension_UInt128_268_u128 = Builtin::u128;
	#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ADV_CHECK_INTERFACE(IIntegerPowerArithmetic, IIntegerPowerArithmetic);
	#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_xor_xor($extension_UInt128_268_u128 const& $this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename $extension_UInt128_268_u128;
	#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_xor_xor_eq($extension_UInt128_268_u128 & $this , Builtin::u32 exp)  -> typename $extension_UInt128_268_u128&;
	#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt128_268_u128, IIntegerPowerArithmetic, IIntegerPowerArithmetic, $extension_UInt128_268_u128);
	} namespace System{
using $extensions::_operator_xor_xor;
using $extensions::_operator_xor_xor_eq;

		} namespace $extensions { using namespace System;
#line 306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	using $extension_UInt128_306_u128 = Builtin::u128;
	#line 306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ADV_CHECK_INTERFACE(INumberBase, INumberBase);
	#line 330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto MaxMagnitude($extension_UInt128_306_u128 const& $this LIFETIMEBOUND, $extension_UInt128_306_u128 rhs) noexcept -> const typename $extension_UInt128_306_u128;
	#line 331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto MaxMagnitudeNumber($extension_UInt128_306_u128 const& $this LIFETIMEBOUND, $extension_UInt128_306_u128 rhs) noexcept -> const typename $extension_UInt128_306_u128;
	#line 333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto MinMagnitude($extension_UInt128_306_u128 const& $this LIFETIMEBOUND, $extension_UInt128_306_u128 rhs) noexcept -> const typename $extension_UInt128_306_u128;
	#line 334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto MinMagnitudeNumber($extension_UInt128_306_u128 const& $this LIFETIMEBOUND, $extension_UInt128_306_u128 rhs) noexcept -> const typename $extension_UInt128_306_u128;
	#line 336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ASTRUMSTD_API auto Parse($extension_UInt128_306_u128 const& $this LIFETIMEBOUND, Builtin::Str input)  -> const typename $extension_UInt128_306_u128;
	#line 341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ASTRUMSTD_API auto TryParse($extension_UInt128_306_u128 const& $this LIFETIMEBOUND, Builtin::Str input) noexcept -> const Builtin::Nullable<$extension_UInt128_306_u128>;
	#line 347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto NarrowToInt8($extension_UInt128_306_u128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i8;
	#line 348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto NarrowToUInt8($extension_UInt128_306_u128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u8;
	#line 349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto NarrowToInt16($extension_UInt128_306_u128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i16;
	#line 350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto NarrowToUInt16($extension_UInt128_306_u128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u16;
	#line 351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto NarrowToInt32($extension_UInt128_306_u128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i32;
	#line 352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto NarrowToUInt32($extension_UInt128_306_u128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u32;
	#line 353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto NarrowToInt64($extension_UInt128_306_u128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i64;
	#line 354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto NarrowToUInt64($extension_UInt128_306_u128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u64;
	#line 355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto NarrowToInt128($extension_UInt128_306_u128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i128;
	#line 356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto NarrowToUInt128($extension_UInt128_306_u128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u128;
	#line 357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto NarrowToIsize($extension_UInt128_306_u128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::isize;
	#line 358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto NarrowToUsize($extension_UInt128_306_u128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::usize;
	#line 307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class __TT> struct $static_getOne; template<> struct $static_getOne<$extension_UInt128_306_u128> { static inline constexpr auto get() -> const $extension_UInt128_306_u128; };
	#line 308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class __TT> struct $static_getZero; template<> struct $static_getZero<$extension_UInt128_306_u128> { static inline constexpr auto get() -> const $extension_UInt128_306_u128; };
	#line 309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class __TT> struct $static_getRadix; template<> struct $static_getRadix<$extension_UInt128_306_u128> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getAbs($extension_UInt128_306_u128 const& $this ) -> const $extension_UInt128_306_u128;
	#line 312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsCanonical($extension_UInt128_306_u128 const& $this ) -> const bool;
	#line 313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsComplexNumber($extension_UInt128_306_u128 const& $this ) -> const bool;
	#line 314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsEvenInteger($extension_UInt128_306_u128 const& $this ) -> const bool;
	#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsFinite($extension_UInt128_306_u128 const& $this ) -> const bool;
	#line 316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsImaginaryNumber($extension_UInt128_306_u128 const& $this ) -> const bool;
	#line 317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsInfinity($extension_UInt128_306_u128 const& $this ) -> const bool;
	#line 318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsInteger($extension_UInt128_306_u128 const& $this ) -> const bool;
	#line 319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsNaN($extension_UInt128_306_u128 const& $this ) -> const bool;
	#line 320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsNegative($extension_UInt128_306_u128 const& $this ) -> const bool;
	#line 321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsNegativeInfinity($extension_UInt128_306_u128 const& $this ) -> const bool;
	#line 322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsNormal($extension_UInt128_306_u128 const& $this ) -> const bool;
	#line 323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsOddInteger($extension_UInt128_306_u128 const& $this ) -> const bool;
	#line 324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsPositive($extension_UInt128_306_u128 const& $this ) -> const bool;
	#line 325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsPositiveInfinity($extension_UInt128_306_u128 const& $this ) -> const bool;
	#line 326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsRealNumber($extension_UInt128_306_u128 const& $this ) -> const bool;
	#line 327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsSubnormal($extension_UInt128_306_u128 const& $this ) -> const bool;
	#line 328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsZero($extension_UInt128_306_u128 const& $this ) -> const bool;
	#line 306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt128_306_u128, INumberBase, INumberBase, $extension_UInt128_306_u128);
	} namespace System{
using $extensions::MaxMagnitude;
using $extensions::MaxMagnitudeNumber;
using $extensions::MinMagnitude;
using $extensions::MinMagnitudeNumber;
using $extensions::Parse;
using $extensions::TryParse;
using $extensions::NarrowToInt8;
using $extensions::NarrowToUInt8;
using $extensions::NarrowToInt16;
using $extensions::NarrowToUInt16;
using $extensions::NarrowToInt32;
using $extensions::NarrowToUInt32;
using $extensions::NarrowToInt64;
using $extensions::NarrowToUInt64;
using $extensions::NarrowToInt128;
using $extensions::NarrowToUInt128;
using $extensions::NarrowToIsize;
using $extensions::NarrowToUsize;
using $extensions::$static_getOne;
using $extensions::$static_getZero;
using $extensions::$static_getRadix;
using $extensions::getAbs;
using $extensions::getIsCanonical;
using $extensions::getIsComplexNumber;
using $extensions::getIsEvenInteger;
using $extensions::getIsFinite;
using $extensions::getIsImaginaryNumber;
using $extensions::getIsInfinity;
using $extensions::getIsInteger;
using $extensions::getIsNaN;
using $extensions::getIsNegative;
using $extensions::getIsNegativeInfinity;
using $extensions::getIsNormal;
using $extensions::getIsOddInteger;
using $extensions::getIsPositive;
using $extensions::getIsPositiveInfinity;
using $extensions::getIsRealNumber;
using $extensions::getIsSubnormal;
using $extensions::getIsZero;

		} namespace $extensions { using namespace System;
#line 361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	using $extension_UInt128_361_u128 = Builtin::u128;
	#line 361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ADV_CHECK_INTERFACE(IUnsignedNumber, IUnsignedNumber);
	#line 362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class __TT> struct $static_getIsUnsigned; template<> struct $static_getIsUnsigned<$extension_UInt128_361_u128> { static inline constexpr auto get() -> const bool; };
	#line 361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt128_361_u128, IUnsignedNumber, IUnsignedNumber, $extension_UInt128_361_u128);
	} namespace System{
using $extensions::$static_getIsUnsigned;

		} namespace $extensions { using namespace System;
#line 365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	using $extension_UInt128_365_u128 = Builtin::u128;
	#line 365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ADV_CHECK_INTERFACE(INumber, INumber);
	#line 368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto CopySign($extension_UInt128_365_u128 const& $this LIFETIMEBOUND, $extension_UInt128_365_u128 sign) noexcept -> const typename $extension_UInt128_365_u128;
	#line 370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto Max($extension_UInt128_365_u128 const& $this LIFETIMEBOUND, $extension_UInt128_365_u128 rhs) noexcept -> const typename $extension_UInt128_365_u128;
	#line 371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto MaxNumber($extension_UInt128_365_u128 const& $this LIFETIMEBOUND, $extension_UInt128_365_u128 rhs) noexcept -> const typename $extension_UInt128_365_u128;
	#line 372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto Min($extension_UInt128_365_u128 const& $this LIFETIMEBOUND, $extension_UInt128_365_u128 rhs) noexcept -> const typename $extension_UInt128_365_u128;
	#line 373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto MinNumber($extension_UInt128_365_u128 const& $this LIFETIMEBOUND, $extension_UInt128_365_u128 rhs) noexcept -> const typename $extension_UInt128_365_u128;
	#line 374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto Clamp($extension_UInt128_365_u128 const& $this LIFETIMEBOUND, $extension_UInt128_365_u128 min, $extension_UInt128_365_u128 max)  -> const typename $extension_UInt128_365_u128;
	#line 366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getSign($extension_UInt128_365_u128 const& $this ) -> const Builtin::i32;
	#line 365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt128_365_u128, INumber, INumber, $extension_UInt128_365_u128);
	} namespace System{
using $extensions::CopySign;
using $extensions::Max;
using $extensions::MaxNumber;
using $extensions::Min;
using $extensions::MinNumber;
using $extensions::Clamp;
using $extensions::getSign;

		} namespace $extensions { using namespace System;
#line 388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	using $extension_UInt128_388_u128 = Builtin::u128;
	#line 388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ADV_CHECK_INTERFACE(IBinaryNumber, IBinaryNumber);
	#line 466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto CheckedLog($extension_UInt128_388_u128 const& $this LIFETIMEBOUND, $extension_UInt128_388_u128 base) noexcept -> const Builtin::Nullable<$extension_UInt128_388_u128>;
	#line 499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ASTRUMSTD_API auto Log($extension_UInt128_388_u128 const& $this LIFETIMEBOUND, $extension_UInt128_388_u128 base)  -> const typename $extension_UInt128_388_u128;
	#line 509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto Midpoint($extension_UInt128_388_u128 const& $this LIFETIMEBOUND, $extension_UInt128_388_u128 rhs) noexcept -> const typename $extension_UInt128_388_u128;
	#line 512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto IsMultipleOf($extension_UInt128_388_u128 const& $this LIFETIMEBOUND, $extension_UInt128_388_u128 rhs) noexcept -> const bool;
	#line 390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class __TT> struct $static_getAllBitsSet; template<> struct $static_getAllBitsSet<$extension_UInt128_388_u128> { static inline constexpr auto get() -> const $extension_UInt128_388_u128; };
	#line 393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsPow2($extension_UInt128_388_u128 const& $this ) -> const bool;
	#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getCheckedLog2($extension_UInt128_388_u128 const& $this ) -> const Builtin::Nullable<$extension_UInt128_388_u128>;
	#line 407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getLog2($extension_UInt128_388_u128 const& $this ) -> const $extension_UInt128_388_u128;
	#line 417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getCheckedLog10($extension_UInt128_388_u128 const& $this ) -> const Builtin::Nullable<$extension_UInt128_388_u128>;
	#line 456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getLog10($extension_UInt128_388_u128 const& $this ) -> const $extension_UInt128_388_u128;
	#line 388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt128_388_u128, IBinaryNumber, IBinaryNumber, $extension_UInt128_388_u128);
	} namespace System{
using $extensions::CheckedLog;
using $extensions::Log;
using $extensions::Midpoint;
using $extensions::IsMultipleOf;
using $extensions::$static_getAllBitsSet;
using $extensions::getIsPow2;
using $extensions::getCheckedLog2;
using $extensions::getLog2;
using $extensions::getCheckedLog10;
using $extensions::getLog10;

		} namespace $extensions { using namespace System;
#line 522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	using $extension_UInt128_522_u128 = Builtin::u128;
	#line 522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ADV_CHECK_INTERFACE(ICheckedArithmetic, ICheckedArithmetic);
	#line 525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_add_qst($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_UInt128_522_u128>;
	#line 534 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_add_qst_eq($extension_UInt128_522_u128 & $this , T rhs) noexcept -> typename $extension_UInt128_522_u128&;
	#line 545 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_add_ne($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt128_522_u128;
	#line 552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_add_ne_eq($extension_UInt128_522_u128 & $this , T rhs)  -> typename $extension_UInt128_522_u128&;
	#line 556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_add_mod($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_UInt128_522_u128;
	#line 563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_add_mod_eq($extension_UInt128_522_u128 & $this , T rhs) noexcept -> typename $extension_UInt128_522_u128&;
	#line 567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_add_or($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_UInt128_522_u128;
	#line 574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_add_or_eq($extension_UInt128_522_u128 & $this , T rhs) noexcept -> typename $extension_UInt128_522_u128&;
	#line 578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_add_mod_qst($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_UInt128_522_u128, bool>;
	#line 586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_qst($extension_UInt128_522_u128 & $this )  -> typename $extension_UInt128_522_u128&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_qst_postfix($extension_UInt128_522_u128 & $this)  -> decltype(auto);
	#line 589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_ne($extension_UInt128_522_u128 & $this )  -> typename $extension_UInt128_522_u128&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_ne_postfix($extension_UInt128_522_u128 & $this)  -> decltype(auto);
	#line 592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_mod($extension_UInt128_522_u128 & $this )  -> typename $extension_UInt128_522_u128&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_mod_postfix($extension_UInt128_522_u128 & $this)  -> decltype(auto);
	#line 595 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_or($extension_UInt128_522_u128 & $this )  -> typename $extension_UInt128_522_u128&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_or_postfix($extension_UInt128_522_u128 & $this)  -> decltype(auto);
	#line 599 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto CarryingAdd($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, $extension_UInt128_522_u128 rhs, bool carry) noexcept -> const std::tuple<$extension_UInt128_522_u128, bool>;
	#line 608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto BorrowingSub($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, $extension_UInt128_522_u128 rhs, bool carry) noexcept -> const std::tuple<$extension_UInt128_522_u128, bool>;
	#line 617 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_sub_qst($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_UInt128_522_u128>;
	#line 626 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_sub_qst_eq($extension_UInt128_522_u128 & $this , T rhs) noexcept -> typename $extension_UInt128_522_u128&;
	#line 637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_sub_ne($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt128_522_u128;
	#line 644 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_sub_ne_eq($extension_UInt128_522_u128 & $this , T rhs)  -> typename $extension_UInt128_522_u128&;
	#line 648 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_sub_mod($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_UInt128_522_u128;
	#line 655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_sub_mod_eq($extension_UInt128_522_u128 & $this , T rhs) noexcept -> typename $extension_UInt128_522_u128&;
	#line 659 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_sub_or($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_UInt128_522_u128;
	#line 666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_sub_or_eq($extension_UInt128_522_u128 & $this , T rhs) noexcept -> typename $extension_UInt128_522_u128&;
	#line 670 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_sub_mod_qst($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_UInt128_522_u128, bool>;
	#line 678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_qst($extension_UInt128_522_u128 & $this )  -> typename $extension_UInt128_522_u128&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_qst_postfix($extension_UInt128_522_u128 & $this)  -> decltype(auto);
	#line 681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_ne($extension_UInt128_522_u128 & $this )  -> typename $extension_UInt128_522_u128&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_ne_postfix($extension_UInt128_522_u128 & $this)  -> decltype(auto);
	#line 684 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_mod($extension_UInt128_522_u128 & $this )  -> typename $extension_UInt128_522_u128&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_mod_postfix($extension_UInt128_522_u128 & $this)  -> decltype(auto);
	#line 687 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_or($extension_UInt128_522_u128 & $this )  -> typename $extension_UInt128_522_u128&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_or_postfix($extension_UInt128_522_u128 & $this)  -> decltype(auto);
	#line 691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mul_qst($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_UInt128_522_u128>;
	#line 700 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mul_qst_eq($extension_UInt128_522_u128 & $this , T rhs) noexcept -> typename $extension_UInt128_522_u128&;
	#line 711 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mul_ne($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt128_522_u128;
	#line 718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mul_ne_eq($extension_UInt128_522_u128 & $this , T rhs)  -> typename $extension_UInt128_522_u128&;
	#line 722 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mul_mod($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_UInt128_522_u128;
	#line 729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mul_mod_eq($extension_UInt128_522_u128 & $this , T rhs) noexcept -> typename $extension_UInt128_522_u128&;
	#line 733 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mul_or($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_UInt128_522_u128;
	#line 740 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mul_or_eq($extension_UInt128_522_u128 & $this , T rhs) noexcept -> typename $extension_UInt128_522_u128&;
	#line 744 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mul_mod_qst($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_UInt128_522_u128, bool>;
	#line 753 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_mul_gt($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, $extension_UInt128_522_u128 rhs) noexcept -> const std::tuple<Builtin::u128, Builtin::u128>;
	#line 762 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto CarryingMul($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, $extension_UInt128_522_u128 rhs, $extension_UInt128_522_u128 carry) noexcept -> const std::tuple<Builtin::u128, Builtin::u128>;
	#line 770 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_bsl_qst($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_UInt128_522_u128>;
	#line 779 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_bsl_qst_eq($extension_UInt128_522_u128 & $this , T rhs) noexcept -> typename $extension_UInt128_522_u128&;
	#line 790 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_bsl_ne($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt128_522_u128;
	#line 791 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_bsl_ne_eq($extension_UInt128_522_u128 & $this , T rhs)  -> typename $extension_UInt128_522_u128&;
	#line 795 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_bsl_mod($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt128_522_u128;
	#line 796 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_eq($extension_UInt128_522_u128 & $this , T rhs)  -> typename $extension_UInt128_522_u128&;
	#line 800 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_bsl_or($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt128_522_u128;
	#line 801 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_bsl_or_eq($extension_UInt128_522_u128 & $this , T rhs)  -> typename $extension_UInt128_522_u128&;
	#line 806 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> auto _operator_bsl_mod_qst($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_UInt128_522_u128, bool>;
	#line 815 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_UInt128_522_u128>;
	#line 825 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst_eq($extension_UInt128_522_u128 & $this , T rhs) noexcept -> typename $extension_UInt128_522_u128&;
	#line 836 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mod_qst($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_UInt128_522_u128>;
	#line 845 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mod_qst_eq($extension_UInt128_522_u128 & $this , T rhs) noexcept -> typename $extension_UInt128_522_u128&;
	#line 856 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mod_ne($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt128_522_u128;
	#line 857 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mod_ne_eq($extension_UInt128_522_u128 & $this , T rhs)  -> typename $extension_UInt128_522_u128&;
	#line 861 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mod_mod($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt128_522_u128;
	#line 862 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mod_mod_eq($extension_UInt128_522_u128 & $this , T rhs)  -> typename $extension_UInt128_522_u128&;
	#line 867 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mod_mod_qst($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_UInt128_522_u128, bool>;
	#line 876 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_sub_qst($extension_UInt128_522_u128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::Nullable<$extension_UInt128_522_u128>;
	#line 879 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline auto _operator_sub_ne($extension_UInt128_522_u128 const& $this LIFETIMEBOUND)  -> const typename $extension_UInt128_522_u128;
	#line 884 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_sub_mod($extension_UInt128_522_u128 const& $this LIFETIMEBOUND)  -> const typename $extension_UInt128_522_u128;
	#line 892 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_sub_or($extension_UInt128_522_u128 const& $this LIFETIMEBOUND)  -> const typename $extension_UInt128_522_u128;
	#line 895 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_sub_mod_qst($extension_UInt128_522_u128 const& $this LIFETIMEBOUND)  -> const std::tuple<$extension_UInt128_522_u128, bool>;
	#line 903 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_lt_lt_qst($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<$extension_UInt128_522_u128>;
	#line 911 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_lt_lt_qst_eq($extension_UInt128_522_u128 & $this , Builtin::i32 amount) noexcept -> typename $extension_UInt128_522_u128&;
	#line 919 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_lt_lt_ne($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_UInt128_522_u128;
	#line 927 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_lt_lt_ne_eq($extension_UInt128_522_u128 & $this , Builtin::i32 amount)  -> typename $extension_UInt128_522_u128&;
	#line 929 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_lt_lt_mod($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename $extension_UInt128_522_u128;
	#line 932 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_lt_lt_mod_eq($extension_UInt128_522_u128 & $this , Builtin::i32 amount) noexcept -> typename $extension_UInt128_522_u128&;
	#line 934 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_lt_lt_mod_qst($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<$extension_UInt128_522_u128, bool>;
	#line 937 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_gt_gt_qst($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<$extension_UInt128_522_u128>;
	#line 945 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_gt_gt_qst_eq($extension_UInt128_522_u128 & $this , Builtin::i32 amount) noexcept -> typename $extension_UInt128_522_u128&;
	#line 953 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_gt_gt_ne($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_UInt128_522_u128;
	#line 961 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_gt_gt_ne_eq($extension_UInt128_522_u128 & $this , Builtin::i32 amount)  -> typename $extension_UInt128_522_u128&;
	#line 963 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_gt_gt_mod($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename $extension_UInt128_522_u128;
	#line 966 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_gt_gt_mod_eq($extension_UInt128_522_u128 & $this , Builtin::i32 amount) noexcept -> typename $extension_UInt128_522_u128&;
	#line 968 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_gt_gt_mod_qst($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<$extension_UInt128_522_u128, bool>;
	#line 973 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_xor_xor_qst($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const Builtin::Nullable<$extension_UInt128_522_u128>;
	#line 1002 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_xor_xor_qst_eq($extension_UInt128_522_u128 & $this , Builtin::u32 exp) noexcept -> typename $extension_UInt128_522_u128&;
	#line 1010 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_xor_xor_ne($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename $extension_UInt128_522_u128;
	#line 1031 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_xor_xor_ne_eq($extension_UInt128_522_u128 & $this , Builtin::u32 exp)  -> typename $extension_UInt128_522_u128&;
	#line 1033 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_xor_xor_mod($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename $extension_UInt128_522_u128;
	#line 1065 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_xor_xor_mod_eq($extension_UInt128_522_u128 & $this , Builtin::u32 exp) noexcept -> typename $extension_UInt128_522_u128&;
	#line 1067 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_xor_xor_or($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename $extension_UInt128_522_u128;
	#line 1076 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_xor_xor_or_eq($extension_UInt128_522_u128 & $this , Builtin::u32 exp) noexcept -> typename $extension_UInt128_522_u128&;
	#line 1078 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_xor_xor_mod_qst($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const std::tuple<$extension_UInt128_522_u128, bool>;
	#line 1108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getCheckedAbs($extension_UInt128_522_u128 const& $this ) -> const Builtin::Nullable<$extension_UInt128_522_u128>;
	#line 1110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getStrictAbs($extension_UInt128_522_u128 const& $this ) -> const $extension_UInt128_522_u128;
	#line 1112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getWrappingAbs($extension_UInt128_522_u128 const& $this ) -> const $extension_UInt128_522_u128;
	#line 1114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getSaturatingAbs($extension_UInt128_522_u128 const& $this ) -> const $extension_UInt128_522_u128;
	#line 1116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getOverflowingAbs($extension_UInt128_522_u128 const& $this ) -> const std::tuple<$extension_UInt128_522_u128, bool>;
	#line 522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt128_522_u128, ICheckedArithmetic, ICheckedArithmetic, $extension_UInt128_522_u128);
	} namespace System{
using $extensions::_operator_add_qst;
using $extensions::_operator_add_qst_eq;
using $extensions::_operator_add_ne;
using $extensions::_operator_add_ne_eq;
using $extensions::_operator_add_mod;
using $extensions::_operator_add_mod_eq;
using $extensions::_operator_add_or;
using $extensions::_operator_add_or_eq;
using $extensions::_operator_add_mod_qst;
using $extensions::_operator_add_add_qst;
using $extensions::_operator_add_add_ne;
using $extensions::_operator_add_add_mod;
using $extensions::_operator_add_add_or;
using $extensions::CarryingAdd;
using $extensions::BorrowingSub;
using $extensions::_operator_sub_qst;
using $extensions::_operator_sub_qst_eq;
using $extensions::_operator_sub_ne;
using $extensions::_operator_sub_ne_eq;
using $extensions::_operator_sub_mod;
using $extensions::_operator_sub_mod_eq;
using $extensions::_operator_sub_or;
using $extensions::_operator_sub_or_eq;
using $extensions::_operator_sub_mod_qst;
using $extensions::_operator_sub_sub_qst;
using $extensions::_operator_sub_sub_ne;
using $extensions::_operator_sub_sub_mod;
using $extensions::_operator_sub_sub_or;
using $extensions::_operator_mul_qst;
using $extensions::_operator_mul_qst_eq;
using $extensions::_operator_mul_ne;
using $extensions::_operator_mul_ne_eq;
using $extensions::_operator_mul_mod;
using $extensions::_operator_mul_mod_eq;
using $extensions::_operator_mul_or;
using $extensions::_operator_mul_or_eq;
using $extensions::_operator_mul_mod_qst;
using $extensions::_operator_mul_gt;
using $extensions::CarryingMul;
using $extensions::_operator_bsl_qst;
using $extensions::_operator_bsl_qst_eq;
using $extensions::_operator_bsl_ne;
using $extensions::_operator_bsl_ne_eq;
using $extensions::_operator_bsl_mod;
using $extensions::_operator_bsl_mod_eq;
using $extensions::_operator_bsl_or;
using $extensions::_operator_bsl_or_eq;
using $extensions::_operator_bsl_mod_qst;
using $extensions::_operator_bsl_bsl_qst;
using $extensions::_operator_bsl_bsl_qst_eq;
using $extensions::_operator_mod_qst;
using $extensions::_operator_mod_qst_eq;
using $extensions::_operator_mod_ne;
using $extensions::_operator_mod_ne_eq;
using $extensions::_operator_mod_mod;
using $extensions::_operator_mod_mod_eq;
using $extensions::_operator_mod_mod_qst;
using $extensions::_operator_sub_qst;
using $extensions::_operator_sub_ne;
using $extensions::_operator_sub_mod;
using $extensions::_operator_sub_or;
using $extensions::_operator_sub_mod_qst;
using $extensions::_operator_lt_lt_qst;
using $extensions::_operator_lt_lt_qst_eq;
using $extensions::_operator_lt_lt_ne;
using $extensions::_operator_lt_lt_ne_eq;
using $extensions::_operator_lt_lt_mod;
using $extensions::_operator_lt_lt_mod_eq;
using $extensions::_operator_lt_lt_mod_qst;
using $extensions::_operator_gt_gt_qst;
using $extensions::_operator_gt_gt_qst_eq;
using $extensions::_operator_gt_gt_ne;
using $extensions::_operator_gt_gt_ne_eq;
using $extensions::_operator_gt_gt_mod;
using $extensions::_operator_gt_gt_mod_eq;
using $extensions::_operator_gt_gt_mod_qst;
using $extensions::_operator_xor_xor_qst;
using $extensions::_operator_xor_xor_qst_eq;
using $extensions::_operator_xor_xor_ne;
using $extensions::_operator_xor_xor_ne_eq;
using $extensions::_operator_xor_xor_mod;
using $extensions::_operator_xor_xor_mod_eq;
using $extensions::_operator_xor_xor_or;
using $extensions::_operator_xor_xor_or_eq;
using $extensions::_operator_xor_xor_mod_qst;
using $extensions::getCheckedAbs;
using $extensions::getStrictAbs;
using $extensions::getWrappingAbs;
using $extensions::getSaturatingAbs;
using $extensions::getOverflowingAbs;

		} namespace $extensions { using namespace System;
#line 1119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	using $extension_UInt128_1119_u128 = Builtin::u128;
	#line 1119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ADV_CHECK_INTERFACE(IBinaryInteger, IBinaryInteger);
	#line 1164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto NextMultipleOf($extension_UInt128_1119_u128 const& $this LIFETIMEBOUND, $extension_UInt128_1119_u128 rhs)  -> const typename $extension_UInt128_1119_u128;
	#line 1172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto CheckedNextMultipleOf($extension_UInt128_1119_u128 const& $this LIFETIMEBOUND, $extension_UInt128_1119_u128 rhs) noexcept -> const Builtin::Nullable<$extension_UInt128_1119_u128>;
	#line 1120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class __TT> struct $static_getIsSigned; template<> struct $static_getIsSigned<$extension_UInt128_1119_u128> { static inline constexpr auto get() -> const bool; };
	#line 1122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getTrailingZeroCount($extension_UInt128_1119_u128 const& $this ) -> const Builtin::u32;
	#line 1129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getTrailingOneCount($extension_UInt128_1119_u128 const& $this ) -> const Builtin::u32;
	#line 1130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getByteCount($extension_UInt128_1119_u128 const& $this ) -> const Builtin::u32;
	#line 1131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getMinimalBitWidth($extension_UInt128_1119_u128 const& $this ) -> const Builtin::u32;
	#line 1134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ASTRUMSTD_API auto getCheckedIsqrt($extension_UInt128_1119_u128 const& $this ) -> const Builtin::Nullable<$extension_UInt128_1119_u128>;
	#line 1141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline auto getIsqrt($extension_UInt128_1119_u128 const& $this ) -> const $extension_UInt128_1119_u128;
	#line 1150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getLog2Ceiling($extension_UInt128_1119_u128 const& $this ) -> const $extension_UInt128_1119_u128;
	#line 1184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getPrevPow2($extension_UInt128_1119_u128 const& $this ) -> const $extension_UInt128_1119_u128;
	#line 1195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getNextPow2($extension_UInt128_1119_u128 const& $this ) -> const $extension_UInt128_1119_u128;
	#line 1207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getCheckedNextPow2($extension_UInt128_1119_u128 const& $this ) -> const Builtin::Nullable<$extension_UInt128_1119_u128>;
	#line 1219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getWrappingNextPow2($extension_UInt128_1119_u128 const& $this ) -> const $extension_UInt128_1119_u128;
	#line 1119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt128_1119_u128, IBinaryInteger, IBinaryInteger, $extension_UInt128_1119_u128);
	} namespace System{
using $extensions::NextMultipleOf;
using $extensions::CheckedNextMultipleOf;
using $extensions::$static_getIsSigned;
using $extensions::getTrailingZeroCount;
using $extensions::getTrailingOneCount;
using $extensions::getByteCount;
using $extensions::getMinimalBitWidth;
using $extensions::getCheckedIsqrt;
using $extensions::getIsqrt;
using $extensions::getLog2Ceiling;
using $extensions::getPrevPow2;
using $extensions::getNextPow2;
using $extensions::getCheckedNextPow2;
using $extensions::getWrappingNextPow2;

		} namespace $extensions { using namespace System;
#line 1230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	using $extension_UInt128_1230_u128 = Builtin::u128;
	#line 1230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ADV_CHECK_INTERFACE(IFixedWidthInteger, IFixedWidthInteger);
	#line 1263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto RotateLeft($extension_UInt128_1230_u128 const& $this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename $extension_UInt128_1230_u128;
	#line 1264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto RotateRight($extension_UInt128_1230_u128 const& $this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename $extension_UInt128_1230_u128;
	#line 1231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class __TT> struct $static_getBitWidth; template<> struct $static_getBitWidth<$extension_UInt128_1230_u128> { static inline constexpr auto get() -> const Builtin::u32; };
	#line 1233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getLeadingZeroCount($extension_UInt128_1230_u128 const& $this ) -> const Builtin::u32;
	#line 1241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getLeadingOneCount($extension_UInt128_1230_u128 const& $this ) -> const Builtin::u32;
	#line 1242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getPopCount($extension_UInt128_1230_u128 const& $this ) -> const Builtin::u32;
	#line 1243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getZeroCount($extension_UInt128_1230_u128 const& $this ) -> const Builtin::u32;
	#line 1244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getByteSwapped($extension_UInt128_1230_u128 const& $this ) -> const $extension_UInt128_1230_u128;
	#line 1245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getBigEndian($extension_UInt128_1230_u128 const& $this ) -> const $extension_UInt128_1230_u128;
	#line 1252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getLittleEndian($extension_UInt128_1230_u128 const& $this ) -> const $extension_UInt128_1230_u128;
	#line 1259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getReverseBits($extension_UInt128_1230_u128 const& $this ) -> const $extension_UInt128_1230_u128;
	#line 1261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getShortestBitLength($extension_UInt128_1230_u128 const& $this ) -> const Builtin::u32;
	#line 1230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt128_1230_u128, IFixedWidthInteger, IFixedWidthInteger, $extension_UInt128_1230_u128);
	} namespace System{
using $extensions::RotateLeft;
using $extensions::RotateRight;
using $extensions::$static_getBitWidth;
using $extensions::getLeadingZeroCount;
using $extensions::getLeadingOneCount;
using $extensions::getPopCount;
using $extensions::getZeroCount;
using $extensions::getByteSwapped;
using $extensions::getBigEndian;
using $extensions::getLittleEndian;
using $extensions::getReverseBits;
using $extensions::getShortestBitLength;

		} namespace $extensions { using namespace System;
#line 1268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	using $extension_UInt128_1268_u128 = Builtin::u128;
	#line 1268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ADV_CHECK_INTERFACE(IBinaryIntegerFormatInfo, IBinaryIntegerFormatInfo);
	#line 1276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto IsGreaterThanAsUnsigned($extension_UInt128_1268_u128 const& $this LIFETIMEBOUND, $extension_UInt128_1268_u128 rhs) noexcept -> const bool;
	#line 1269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class __TT> struct $static_getMaxDigitCount; template<> struct $static_getMaxDigitCount<$extension_UInt128_1268_u128> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class __TT> struct $static_getMaxHexDigitCount; template<> struct $static_getMaxHexDigitCount<$extension_UInt128_1268_u128> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class __TT> struct $static_getMaxValueDiv10; template<> struct $static_getMaxValueDiv10<$extension_UInt128_1268_u128> { static inline constexpr auto get() -> const $extension_UInt128_1268_u128; };
	#line 1273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getMultiplyBy10($extension_UInt128_1268_u128 const& $this ) -> const $extension_UInt128_1268_u128;
	#line 1274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getMultiplyBy16($extension_UInt128_1268_u128 const& $this ) -> const $extension_UInt128_1268_u128;
	#line 1268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt128_1268_u128, IBinaryIntegerFormatInfo, IBinaryIntegerFormatInfo, $extension_UInt128_1268_u128);
	} namespace System{
using $extensions::IsGreaterThanAsUnsigned;
using $extensions::$static_getMaxDigitCount;
using $extensions::$static_getMaxHexDigitCount;
using $extensions::$static_getMaxValueDiv10;
using $extensions::getMultiplyBy10;
using $extensions::getMultiplyBy16;

	} namespace $extensions {
template<class __TT> struct $static_SaturatingSubtract;
template<class __TT> struct $static_getSaturatingSubtract;
template<class __TT> struct $static_DivExact;
template<class __TT> struct $static_getDivExact;
template<class __TT> struct $static_Low64;
template<class __TT> struct $static_getLow64;
template<class __TT> struct $static_PopCount;
template<class __TT> struct $static_getPopCount;
template<class __TT> struct $static_NarrowToInt16;
template<class __TT> struct $static_getNarrowToInt16;
template<class __TT> struct $static_ToInt64;
template<class __TT> struct $static_getToInt64;
template<class __TT> struct $static_High64;
template<class __TT> struct $static_getHigh64;
template<class __TT> struct $static_LeadingZeroCount;
template<class __TT> struct $static_getLeadingZeroCount;
template<class __TT> struct $static_MaxValue;
template<class __TT> struct $static_getMaxValue;
template<class __TT> struct $static_BitWidth;
template<class __TT> struct $static_getBitWidth;
template<class __TT> struct $static_AllBitsSet;
template<class __TT> struct $static_getAllBitsSet;
template<class __TT> struct $static_IsPositiveInfinity;
template<class __TT> struct $static_getIsPositiveInfinity;
template<class __TT> struct $static_InvalidOperationException;
template<class __TT> struct $static_getInvalidOperationException;
template<class __TT> struct $static_CheckedLog2;
template<class __TT> struct $static_getCheckedLog2;
template<class __TT> struct $static_Max;
template<class __TT> struct $static_getMax;
template<class __TT> struct $static_DivAssign;
template<class __TT> struct $static_getDivAssign;
template<class __TT> struct $static_IsCanonical;
template<class __TT> struct $static_getIsCanonical;
template<class __TT> struct $static_IsInteger;
template<class __TT> struct $static_getIsInteger;
template<class __TT> struct $static_CheckedLog10;
template<class __TT> struct $static_getCheckedLog10;
template<class __TT> struct $static_SafeNegate;
template<class __TT> struct $static_getSafeNegate;
template<class __TT> struct $static_TrailingZeroCount;
template<class __TT> struct $static_getTrailingZeroCount;
template<class __TT> struct $static_WideningMul128u;
template<class __TT> struct $static_getWideningMul128u;
template<class __TT> struct $static_Isqrt128;
template<class __TT> struct $static_getIsqrt128;
template<class __TT> struct $static_SaturatingMultiply;
template<class __TT> struct $static_getSaturatingMultiply;
template<class __TT> struct $static_CheckedIsqrt;
template<class __TT> struct $static_getCheckedIsqrt;
template<class __TT> struct $static_ByteSwapped;
template<class __TT> struct $static_getByteSwapped;
template<class __TT> struct $static_Log2;
template<class __TT> struct $static_getLog2;
template<class __TT> struct $static_One;
template<class __TT> struct $static_getOne;
template<class __TT> struct $static_MinimalBitWidth;
template<class __TT> struct $static_getMinimalBitWidth;
template<class __TT> struct $static_IsLittleEndian;
template<class __TT> struct $static_getIsLittleEndian;
template<class __TT> struct $static_ByteCount;
template<class __TT> struct $static_getByteCount;
template<class __TT> struct $static_IsBigEndian;
template<class __TT> struct $static_getIsBigEndian;
template<class __TT> struct $static_SafeDivExact;
template<class __TT> struct $static_getSafeDivExact;
template<class __TT> struct $static_BorrowingSub;
template<class __TT> struct $static_getBorrowingSub;
template<class __TT> struct $static_ReverseBits64u;
template<class __TT> struct $static_getReverseBits64u;
template<class __TT> struct $static_StrictMultiply;
template<class __TT> struct $static_getStrictMultiply;
template<class __TT> struct $static_MinValue;
template<class __TT> struct $static_getMinValue;
template<class __TT> struct $static_IsSigned;
template<class __TT> struct $static_getIsSigned;
template<class __TT> struct $static_WrappingMultiply;
template<class __TT> struct $static_getWrappingMultiply;
template<class __TT> struct $static_MaxDigitCount;
template<class __TT> struct $static_getMaxDigitCount;
template<class __TT> struct $static_UncheckedShiftLeft;
template<class __TT> struct $static_getUncheckedShiftLeft;
template<class __TT> struct $static_UncheckedShiftRight;
template<class __TT> struct $static_getUncheckedShiftRight;
template<class __TT> struct $static_SafeSubtract;
template<class __TT> struct $static_getSafeSubtract;
template<class __TT> struct $static_IntegerOverflowException;
template<class __TT> struct $static_getIntegerOverflowException;
template<class __TT> struct $static_ToInt32;
template<class __TT> struct $static_getToInt32;
template<class __TT> struct $static_ToUInt32;
template<class __TT> struct $static_getToUInt32;
template<class __TT> struct $static_ToUInt64;
template<class __TT> struct $static_getToUInt64;
template<class __TT> struct $static_StrictSubtract;
template<class __TT> struct $static_getStrictSubtract;
template<class __TT> struct $static_Div;
template<class __TT> struct $static_getDiv;
template<class __TT> struct $static_WrappingNegate;
template<class __TT> struct $static_getWrappingNegate;
template<class __TT> struct $static_Min;
template<class __TT> struct $static_getMin;
template<class __TT> struct $static_CheckedLog;
template<class __TT> struct $static_getCheckedLog;
template<class __TT> struct $static_SafeAdd;
template<class __TT> struct $static_getSafeAdd;
template<class __TT> struct $static_StrictAdd;
template<class __TT> struct $static_getStrictAdd;
template<class __TT> struct $static_WrappingAdd;
template<class __TT> struct $static_getWrappingAdd;
template<class __TT> struct $static_IsNormal;
template<class __TT> struct $static_getIsNormal;
template<class __TT> struct $static_SaturatingAdd;
template<class __TT> struct $static_getSaturatingAdd;
template<class __TT> struct $static_CarryingAdd;
template<class __TT> struct $static_getCarryingAdd;
template<class __TT> struct $static_MultiplyBy10;
template<class __TT> struct $static_getMultiplyBy10;
template<class __TT> struct $static_WrappingSubtract;
template<class __TT> struct $static_getWrappingSubtract;
template<class __TT> struct $static_SafeMultiply;
template<class __TT> struct $static_getSafeMultiply;
template<class __TT> struct $static_CarryingMul128u;
template<class __TT> struct $static_getCarryingMul128u;
template<class __TT> struct $static_SafeDivide;
template<class __TT> struct $static_getSafeDivide;
template<class __TT> struct $static_SafeModulus;
template<class __TT> struct $static_getSafeModulus;
template<class __TT> struct $static_Abs;
template<class __TT> struct $static_getAbs;
template<class __TT> struct $static_IsFinite;
template<class __TT> struct $static_getIsFinite;
template<class __TT> struct $static_IsPositive;
template<class __TT> struct $static_getIsPositive;
template<class __TT> struct $static_IsNegative;
template<class __TT> struct $static_getIsNegative;
template<class __TT> struct $static_IsComplexNumber;
template<class __TT> struct $static_getIsComplexNumber;
template<class __TT> struct $static_IsRealNumber;
template<class __TT> struct $static_getIsRealNumber;
template<class __TT> struct $static_IsImaginaryNumber;
template<class __TT> struct $static_getIsImaginaryNumber;
template<class __TT> struct $static_IsEvenInteger;
template<class __TT> struct $static_getIsEvenInteger;
template<class __TT> struct $static_IsOddInteger;
template<class __TT> struct $static_getIsOddInteger;
template<class __TT> struct $static_IsInfinity;
template<class __TT> struct $static_getIsInfinity;
template<class __TT> struct $static_IsNegativeInfinity;
template<class __TT> struct $static_getIsNegativeInfinity;
template<class __TT> struct $static_IsNaN;
template<class __TT> struct $static_getIsNaN;
template<class __TT> struct $static_IsSubnormal;
template<class __TT> struct $static_getIsSubnormal;
template<class __TT> struct $static_IsZero;
template<class __TT> struct $static_getIsZero;
template<class __TT> struct $static_Sign;
template<class __TT> struct $static_getSign;
template<class __TT> struct $static_CopySign;
template<class __TT> struct $static_getCopySign;
template<class __TT> struct $static_MaxNumber;
template<class __TT> struct $static_getMaxNumber;
template<class __TT> struct $static_MinNumber;
template<class __TT> struct $static_getMinNumber;
template<class __TT> struct $static_Clamp;
template<class __TT> struct $static_getClamp;
template<class __TT> struct $static_IsPow2;
template<class __TT> struct $static_getIsPow2;
template<class __TT> struct $static_Log2Ceiling;
template<class __TT> struct $static_getLog2Ceiling;
template<class __TT> struct $static_Log10;
template<class __TT> struct $static_getLog10;
template<class __TT> struct $static_Log;
template<class __TT> struct $static_getLog;
template<class __TT> struct $static_Midpoint;
template<class __TT> struct $static_getMidpoint;
template<class __TT> struct $static_NextMultipleOf;
template<class __TT> struct $static_getNextMultipleOf;
template<class __TT> struct $static_LeadingOneCount;
template<class __TT> struct $static_getLeadingOneCount;
template<class __TT> struct $static_TrailingOneCount;
template<class __TT> struct $static_getTrailingOneCount;
template<class __TT> struct $static_ZeroCount;
template<class __TT> struct $static_getZeroCount;
template<class __TT> struct $static_ReverseBits;
template<class __TT> struct $static_getReverseBits;
template<class __TT> struct $static_NextPow2;
template<class __TT> struct $static_getNextPow2;
template<class __TT> struct $static_PrevPow2;
template<class __TT> struct $static_getPrevPow2;
template<class __TT> struct $static_CheckedNextPow2;
template<class __TT> struct $static_getCheckedNextPow2;
template<class __TT> struct $static_IsMultipleOf;
template<class __TT> struct $static_getIsMultipleOf;
template<class __TT> struct $static_MultiplyBy16;
template<class __TT> struct $static_getMultiplyBy16;
template<class __TT> struct $static_CarryingMul;
template<class __TT> struct $static_getCarryingMul;
} namespace System {
//###############################################################################
//# Function definitions
//###############################################################################

} namespace $extensions { using namespace System;
#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto $static_getMinValue<$extension_UInt128_16_u128>::get() -> const $extension_UInt128_16_u128
	{
		#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(Builtin::u128(0ULL)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto $static_getMaxValue<$extension_UInt128_16_u128>::get() -> const $extension_UInt128_16_u128
	{
		#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(Builtin::ParseUInt128("340282366920938463463374607431768211455")); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	
} namespace $extensions { using namespace System;
#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto operator<=>($extension_UInt128_21_u128 const& $this LIFETIMEBOUND, Builtin::Nullable<$extension_UInt128_21_u128> rhs) noexcept -> const Builtin::i32
	{
		#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		{
			#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			if ((!Builtin::Is(rhs, nullptr))) {
				#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				auto __tmp0 = *rhs; const auto& rhs = __tmp0;
				
				#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				return $this <=> rhs;
			}
		}
		#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return Builtin::i32(1);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_gt_gt_gt($extension_UInt128_21_u128 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_UInt128_21_u128
	{
		#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY($this >> amount); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_gt_gt_gt_eq($extension_UInt128_21_u128 & $this , Builtin::i32 amount)  -> typename $extension_UInt128_21_u128&
	{
		#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY($this >>= amount); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_lt_lt_bsl($extension_UInt128_21_u128 const& $this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename $extension_UInt128_21_u128
	{
		#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if ((amount <=> ADV_USPCS(BitWidth, $extension_UInt128_21_u128)()) >= 0) {
			#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return Builtin::u128(0ULL);
		}
		#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return Builtin::UncheckedShiftLeft($this, Builtin::Cast<true, Builtin::i32>(amount));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_lt_lt_bsl_eq($extension_UInt128_21_u128 & $this , Builtin::u32 amount) noexcept -> typename $extension_UInt128_21_u128&
	{
		#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_lt_lt_bsl)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_gt_gt_bsl($extension_UInt128_21_u128 const& $this LIFETIMEBOUND, Builtin::u128 amount) noexcept -> const typename $extension_UInt128_21_u128
	{
		#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if ((amount <=> ADV_USPCS(BitWidth, $extension_UInt128_21_u128)()) >= 0) {
			#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return Builtin::u128(0ULL);
		}
		#line 62 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return Builtin::UncheckedShiftRight($this, Builtin::Cast<true, Builtin::i32>(amount));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_gt_gt_bsl_eq($extension_UInt128_21_u128 & $this , Builtin::u128 amount) noexcept -> typename $extension_UInt128_21_u128&
	{
		#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_gt_gt_bsl)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getHashCode($extension_UInt128_21_u128 const & $this ) -> const Builtin::u64
	{
		#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		auto finalize = [&] (Builtin::u64 input) 
		{
			#line 71 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			input ^= input >> Builtin::i32(30);
			#line 72 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			ADV_UFCS(_operator_mul_mod_eq)(input, Builtin::u64(0xbf58476d1ce4e5b9ULL));
			#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			input ^= input >> Builtin::i32(27);
			#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			ADV_UFCS(_operator_mul_mod_eq)(input, Builtin::u64(0x94d049bb133111ebULL));
			#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			input ^= input >> Builtin::i32(31);
			#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return input;
		}; 
		#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		const Builtin::Auto<decltype(finalize(ADV_UFCS(Low64)($this.$ref())))> lowHash = finalize(ADV_UFCS(Low64)($this.$ref())); 
		#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		const Builtin::Auto<decltype(finalize(ADV_UFCS(High64)($this.$ref())))> highHash = finalize(ADV_UFCS(High64)($this.$ref())); 
		#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return lowHash ^ (ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_add_mod)(highHash, Builtin::u32(0x9e3779b9U)), (lowHash << Builtin::i32(6))), (lowHash >> Builtin::i32(2))));
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	
} namespace $extensions { using namespace System;
#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToBoolean($extension_UInt128_105_u128 const& $this LIFETIMEBOUND) noexcept -> const bool
	{
		#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY($this != Builtin::i32(0)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToInt8($extension_UInt128_105_u128 const& $this LIFETIMEBOUND)  -> const Builtin::i8
	{
		#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (($this <=> ADV_USPCS(MaxValue, Builtin::i8)()) > 0) {
			#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return Builtin::Cast<true, Builtin::i8>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToUInt8($extension_UInt128_105_u128 const& $this LIFETIMEBOUND)  -> const Builtin::u8
	{
		#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (($this <=> ADV_USPCS(MaxValue, Builtin::u8)()) > 0) {
			#line 115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return Builtin::Cast<true, Builtin::u8>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToInt16($extension_UInt128_105_u128 const& $this LIFETIMEBOUND)  -> const Builtin::i16
	{
		#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (($this <=> ADV_USPCS(MaxValue, Builtin::i16)()) > 0) {
			#line 121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return Builtin::Cast<true, Builtin::i16>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToUInt16($extension_UInt128_105_u128 const& $this LIFETIMEBOUND)  -> const Builtin::u16
	{
		#line 126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (($this <=> ADV_USPCS(MaxValue, Builtin::u16)()) > 0) {
			#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return Builtin::Cast<true, Builtin::u16>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToInt32($extension_UInt128_105_u128 const& $this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (($this <=> ADV_USPCS(MaxValue, Builtin::i32)()) > 0) {
			#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return Builtin::Cast<true, Builtin::i32>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToUInt32($extension_UInt128_105_u128 const& $this LIFETIMEBOUND)  -> const Builtin::u32
	{
		#line 138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (($this <=> ADV_USPCS(MaxValue, Builtin::u32)()) > 0) {
			#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return Builtin::Cast<true, Builtin::u32>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToInt64($extension_UInt128_105_u128 const& $this LIFETIMEBOUND)  -> const Builtin::i64
	{
		#line 144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (($this <=> ADV_USPCS(MaxValue, Builtin::i64)()) > 0) {
			#line 145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return Builtin::Cast<true, Builtin::i64>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToUInt64($extension_UInt128_105_u128 const& $this LIFETIMEBOUND)  -> const Builtin::u64
	{
		#line 150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (($this <=> ADV_USPCS(MaxValue, Builtin::u64)()) > 0) {
			#line 151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return Builtin::Cast<true, Builtin::u64>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToInt128($extension_UInt128_105_u128 const& $this LIFETIMEBOUND)  -> const Builtin::i128
	{
		#line 156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (($this <=> Builtin::ParseUInt128("0x7FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF")) > 0) {
			#line 157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return Builtin::Cast<true, Builtin::i128>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToUInt128($extension_UInt128_105_u128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u128
	{
		#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToIsize($extension_UInt128_105_u128 const& $this LIFETIMEBOUND)  -> const Builtin::isize
	{
		#line 164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if constexpr (Builtin::usize(sizeof(Builtin::isize)) == Builtin::i32(32)) {
			#line 165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return ADV_UFCS(ToInt32)($this.$ref());
		} else {
			#line 166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			{
				#line 167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				return ADV_UFCS(ToInt64)($this.$ref());
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToUsize($extension_UInt128_105_u128 const& $this LIFETIMEBOUND)  -> const Builtin::usize
	{
		#line 172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if constexpr (Builtin::usize(sizeof(Builtin::isize)) == Builtin::i32(32)) {
			#line 173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return ADV_UFCS(ToUInt32)($this.$ref());
		} else {
			#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			{
				#line 175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				return ADV_UFCS(ToUInt64)($this.$ref());
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToFloat32($extension_UInt128_105_u128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::f32
	{
		#line 178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToFloat64($extension_UInt128_105_u128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::f64
	{
		#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToByte($extension_UInt128_105_u128 const& $this LIFETIMEBOUND)  -> const Builtin::u8
	{
		#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (($this <=> Builtin::i32(0xFF)) > 0) {
			#line 182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return Builtin::Cast<true, Builtin::u8>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToChar($extension_UInt128_105_u128 const& $this LIFETIMEBOUND)  -> const Builtin::char32
	{
		#line 188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (($this <=> Builtin::u32(0x10FFFFU)) > 0) {
			#line 189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return Builtin::char32{Builtin::Cast<true, Builtin::u32>($this)};
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	
} namespace $extensions { using namespace System;
#line 199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_div_mod($extension_UInt128_197_u128 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_UInt128_197_u128, $extension_UInt128_197_u128>
	{
		#line 201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator /% implemented only for integer types");
		#line 202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return std::make_tuple(ADV_UFCS(_operator_bsl)($this, rhs), $this % rhs);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_div_not($extension_UInt128_197_u128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt128_197_u128
	{
		#line 207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::Auto<decltype($this)> result = $this; 
		#line 208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		result /= rhs;
		#line 209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_div_not_eq($extension_UInt128_197_u128 & $this , auto rhs)  -> typename $extension_UInt128_197_u128&
	{
		#line 212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY($this /= rhs); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_div_lt($extension_UInt128_197_u128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt128_197_u128
	{
		#line 216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if constexpr (Builtin::TypeIs<T, IBinaryInteger>()) {
			#line 217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return ADV_UFCS(_operator_bsl)($this, rhs);
		} else {
			#line 218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			{
				#line 219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				return Builtin::Cast<true, $extension_UInt128_197_u128>((ADV_UFCS(_operator_div_lt)(Builtin::f64{$this}, rhs)));
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_div_lt_eq($extension_UInt128_197_u128 & $this , auto rhs)  -> typename $extension_UInt128_197_u128&
	{
		#line 223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY($this = $extension_UInt128_197_u128{ADV_UFCS(_operator_div_lt)($this, rhs)}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mod_lt($extension_UInt128_197_u128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt128_197_u128
	{
		#line 227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		const Builtin::Auto<decltype($this % rhs)> result = $this % rhs; 
		#line 228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_gt_gt_gt)((result ^ rhs), Builtin::i32{ADV_USPCS(BitWidth, $extension_UInt128_197_u128)() - Builtin::i32(1)}))> signDiff = ADV_UFCS(_operator_gt_gt_gt)((result ^ rhs), Builtin::i32{ADV_USPCS(BitWidth, $extension_UInt128_197_u128)() - Builtin::i32(1)}); 
		#line 229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		const Builtin::Auto<decltype((result != Builtin::i32(0)) & (signDiff != Builtin::i32(0)))> needAdjust = (result != Builtin::i32(0)) & (signDiff != Builtin::i32(0)); 
		#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return result + (needAdjust ? rhs : T{});
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_mod_lt_eq($extension_UInt128_197_u128 & $this , auto rhs)  -> typename $extension_UInt128_197_u128&
	{
		#line 233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY($this = $extension_UInt128_197_u128{ADV_UFCS(_operator_mod_lt)($this, rhs)}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_div_gt($extension_UInt128_197_u128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt128_197_u128
	{
		#line 237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if constexpr (Builtin::TypeIs<T, IBinaryInteger>()) {
			#line 238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			const auto& [div, rem] = ADV_UFCS(_operator_div_mod)($this, rhs);
			#line 239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return (rem <=> Builtin::i32(0)) > 0 ? div + Builtin::i32(1) : div;
		} else {
			#line 240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			{
				#line 241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				return Builtin::Cast<true, $extension_UInt128_197_u128>((ADV_UFCS(_operator_div_gt)(Builtin::f64{$this}, rhs)));
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_div_gt_eq($extension_UInt128_197_u128 & $this , auto rhs)  -> typename $extension_UInt128_197_u128&
	{
		#line 245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY($this = $extension_UInt128_197_u128{ADV_UFCS(_operator_div_gt)($this, rhs)}); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	
} namespace $extensions { using namespace System;
#line 250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_bsl($extension_UInt128_248_u128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt128_248_u128
	{
		#line 250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Div)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_bsl_eq($extension_UInt128_248_u128 & $this , T rhs)  -> typename $extension_UInt128_248_u128&
	{
		#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(DivAssign)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl($extension_UInt128_248_u128 const& $this LIFETIMEBOUND, T rhs)  -> const Builtin::Nullable<$extension_UInt128_248_u128>
	{
		#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\? implemented only for integer types");
		#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		$extension_UInt128_248_u128 result{}; 
		#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (Builtin::DivExact($this, rhs, result)) {
			#line 262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return result;
		}
		#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return nullptr;
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	
} namespace $extensions { using namespace System;
#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_xor_xor($extension_UInt128_268_u128 const& $this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename $extension_UInt128_268_u128
	{
		#line 273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return Builtin::u128(1ULL);
		}
		#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::Auto<decltype(Builtin::u128(1ULL))> result = Builtin::u128(1ULL); 
		#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (std::is_constant_evaluated()) {
			#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			while ((exp <=> Builtin::i32(1)) > 0) 
			{
				#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
					#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
					result *= base;
				}
				#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
				#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				base *= base;
			}
			#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return result * base;
		} else {
			#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			{
				#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				for (;;) 
				{
					#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
					if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
						#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
						result *= base;
						#line 294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
						if (exp == Builtin::i32(1)) {
							#line 295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
							return result;
						}
					}
					#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
					ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
					#line 298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
					base *= base;
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_xor_xor_eq($extension_UInt128_268_u128 & $this , Builtin::u32 exp)  -> typename $extension_UInt128_268_u128&
	{
		#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_xor_xor)($this, exp)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	
} namespace $extensions { using namespace System;
#line 330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto MaxMagnitude($extension_UInt128_306_u128 const& $this LIFETIMEBOUND, $extension_UInt128_306_u128 rhs) noexcept -> const typename $extension_UInt128_306_u128
	{
		#line 330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Max)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto MaxMagnitudeNumber($extension_UInt128_306_u128 const& $this LIFETIMEBOUND, $extension_UInt128_306_u128 rhs) noexcept -> const typename $extension_UInt128_306_u128
	{
		#line 331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Max)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto MinMagnitude($extension_UInt128_306_u128 const& $this LIFETIMEBOUND, $extension_UInt128_306_u128 rhs) noexcept -> const typename $extension_UInt128_306_u128
	{
		#line 333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Min)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto MinMagnitudeNumber($extension_UInt128_306_u128 const& $this LIFETIMEBOUND, $extension_UInt128_306_u128 rhs) noexcept -> const typename $extension_UInt128_306_u128
	{
		#line 334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Min)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto NarrowToInt8($extension_UInt128_306_u128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i8
	{
		#line 347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i8>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto NarrowToUInt8($extension_UInt128_306_u128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u8
	{
		#line 348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u8>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto NarrowToInt16($extension_UInt128_306_u128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i16
	{
		#line 349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i16>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto NarrowToUInt16($extension_UInt128_306_u128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u16
	{
		#line 350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u16>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto NarrowToInt32($extension_UInt128_306_u128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i32
	{
		#line 351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i32>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto NarrowToUInt32($extension_UInt128_306_u128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u32
	{
		#line 352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u32>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto NarrowToInt64($extension_UInt128_306_u128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i64
	{
		#line 353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i64>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto NarrowToUInt64($extension_UInt128_306_u128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u64
	{
		#line 354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u64>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto NarrowToInt128($extension_UInt128_306_u128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i128
	{
		#line 355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i128>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto NarrowToUInt128($extension_UInt128_306_u128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u128
	{
		#line 356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto NarrowToIsize($extension_UInt128_306_u128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::isize
	{
		#line 357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::isize>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto NarrowToUsize($extension_UInt128_306_u128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::usize
	{
		#line 358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::usize>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto $static_getOne<$extension_UInt128_306_u128>::get() -> const $extension_UInt128_306_u128
	{
		#line 307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(Builtin::u128(1ULL)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto $static_getZero<$extension_UInt128_306_u128>::get() -> const $extension_UInt128_306_u128
	{
		#line 308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(Builtin::u128(0ULL)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto $static_getRadix<$extension_UInt128_306_u128>::get() -> const Builtin::i32
	{
		#line 309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(2)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getAbs($extension_UInt128_306_u128 const & $this ) -> const $extension_UInt128_306_u128
	{
		#line 311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsCanonical($extension_UInt128_306_u128 const & $this ) -> const bool
	{
		#line 312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsComplexNumber($extension_UInt128_306_u128 const & $this ) -> const bool
	{
		#line 313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsEvenInteger($extension_UInt128_306_u128 const & $this ) -> const bool
	{
		#line 314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY((ADV_UFCS(Low64)($this.$ref()) & Builtin::u32(1U)) == Builtin::i32(0)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsFinite($extension_UInt128_306_u128 const & $this ) -> const bool
	{
		#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsImaginaryNumber($extension_UInt128_306_u128 const & $this ) -> const bool
	{
		#line 316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsInfinity($extension_UInt128_306_u128 const & $this ) -> const bool
	{
		#line 317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsInteger($extension_UInt128_306_u128 const & $this ) -> const bool
	{
		#line 318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsNaN($extension_UInt128_306_u128 const & $this ) -> const bool
	{
		#line 319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsNegative($extension_UInt128_306_u128 const & $this ) -> const bool
	{
		#line 320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsNegativeInfinity($extension_UInt128_306_u128 const & $this ) -> const bool
	{
		#line 321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsNormal($extension_UInt128_306_u128 const & $this ) -> const bool
	{
		#line 322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY($this != Builtin::i32(0)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsOddInteger($extension_UInt128_306_u128 const & $this ) -> const bool
	{
		#line 323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY((ADV_UFCS(Low64)($this.$ref()) & Builtin::u32(1U)) != Builtin::i32(0)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsPositive($extension_UInt128_306_u128 const & $this ) -> const bool
	{
		#line 324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsPositiveInfinity($extension_UInt128_306_u128 const & $this ) -> const bool
	{
		#line 325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsRealNumber($extension_UInt128_306_u128 const & $this ) -> const bool
	{
		#line 326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsSubnormal($extension_UInt128_306_u128 const & $this ) -> const bool
	{
		#line 327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsZero($extension_UInt128_306_u128 const & $this ) -> const bool
	{
		#line 328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY($this == Builtin::i32(0)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	
} namespace $extensions { using namespace System;
#line 362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto $static_getIsUnsigned<$extension_UInt128_361_u128>::get() -> const bool
	{
		#line 362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	
} namespace $extensions { using namespace System;
#line 368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto CopySign($extension_UInt128_365_u128 const& $this LIFETIMEBOUND, $extension_UInt128_365_u128 sign) noexcept -> const typename $extension_UInt128_365_u128
	{
		#line 368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto Max($extension_UInt128_365_u128 const& $this LIFETIMEBOUND, $extension_UInt128_365_u128 rhs) noexcept -> const typename $extension_UInt128_365_u128
	{
		#line 370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY((($this <=> rhs) >= 0) ? $this : rhs); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto MaxNumber($extension_UInt128_365_u128 const& $this LIFETIMEBOUND, $extension_UInt128_365_u128 rhs) noexcept -> const typename $extension_UInt128_365_u128
	{
		#line 371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Max)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto Min($extension_UInt128_365_u128 const& $this LIFETIMEBOUND, $extension_UInt128_365_u128 rhs) noexcept -> const typename $extension_UInt128_365_u128
	{
		#line 372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY((($this <=> rhs) <= 0) ? $this : rhs); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto MinNumber($extension_UInt128_365_u128 const& $this LIFETIMEBOUND, $extension_UInt128_365_u128 rhs) noexcept -> const typename $extension_UInt128_365_u128
	{
		#line 373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Min)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto Clamp($extension_UInt128_365_u128 const& $this LIFETIMEBOUND, $extension_UInt128_365_u128 min, $extension_UInt128_365_u128 max)  -> const typename $extension_UInt128_365_u128
	{
		#line 376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if ((min <=> max) > 0) {
			#line 377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			Builtin::Throw(Builtin::InvalidOperationException{});
		}
		#line 380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::Auto<decltype($this)> result = $this; 
		#line 381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		result = ADV_UFCS(Max)(result.$ref(), min);
		#line 382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		result = ADV_UFCS(Min)(result.$ref(), max);
		#line 384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getSign($extension_UInt128_365_u128 const & $this ) -> const Builtin::i32
	{
		#line 366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY($this == Builtin::i32(0) ? Builtin::i32(0) : +Builtin::i32(1)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	
} namespace $extensions { using namespace System;
#line 466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto CheckedLog($extension_UInt128_388_u128 const& $this LIFETIMEBOUND, $extension_UInt128_388_u128 base) noexcept -> const Builtin::Nullable<$extension_UInt128_388_u128>
	{
		#line 468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if ($this == Builtin::i32(0) || (base <=> Builtin::i32(1)) <= 0) {
			#line 469 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return nullptr;
		}
		#line 472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (std::is_constant_evaluated()) {
			#line 473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			if (base == Builtin::i32(2)) {
				#line 474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				return ADV_UPCS(CheckedLog2)($this.$ref());
			}
			#line 476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			if (base == Builtin::i32(10)) {
				#line 477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				return ADV_UPCS(CheckedLog10)($this.$ref());
			}
		}
		#line 481 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (($this <=> base) < 0) {
			#line 482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return Builtin::u128(0ULL);
		}
		#line 485 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		$extension_UInt128_388_u128 n = Builtin::u128(1ULL); 
		#line 486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::Auto<decltype(base)> r = base; 
		#line 487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_bsl)($this, base))> baseRatio = ADV_UFCS(_operator_bsl)($this, base); 
		#line 488 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		while ((r <=> baseRatio) <= 0) 
		{
			#line 489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			++n;
			#line 490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			r *= base;
		}
		#line 493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return n;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto Midpoint($extension_UInt128_388_u128 const& $this LIFETIMEBOUND, $extension_UInt128_388_u128 rhs) noexcept -> const typename $extension_UInt128_388_u128
	{
		#line 509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY((($this ^ rhs) >> Builtin::i32(1)) + ($this & rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto IsMultipleOf($extension_UInt128_388_u128 const& $this LIFETIMEBOUND, $extension_UInt128_388_u128 rhs) noexcept -> const bool
	{
		#line 514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (rhs == Builtin::i32(0)) {
			#line 515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return $this == Builtin::i32(0);
		}
		#line 518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return $this % rhs == Builtin::i32(0);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto $static_getAllBitsSet<$extension_UInt128_388_u128>::get() -> const $extension_UInt128_388_u128
	{
		#line 390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(MaxValue, Builtin::u128)()); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsPow2($extension_UInt128_388_u128 const & $this ) -> const bool
	{
		#line 393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(PopCount)($this.$ref()) == Builtin::i32(1)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getCheckedLog2($extension_UInt128_388_u128 const & $this ) -> const Builtin::Nullable<$extension_UInt128_388_u128>
	{
		#line 399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if ($this == Builtin::i32(0)) {
			#line 400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return nullptr;
		}
		#line 403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return Builtin::Cast<true, $extension_UInt128_388_u128>((ADV_USPCS(BitWidth, $extension_UInt128_388_u128)() - Builtin::i32(1) - ADV_UPCS(LeadingZeroCount)($this.$ref())));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getLog2($extension_UInt128_388_u128 const & $this ) -> const $extension_UInt128_388_u128
	{
		#line 409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (const auto result = ADV_UPCS(CheckedLog2)($this.$ref())) {
			{
				#line 409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				return result;
			}
		}
		#line 412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getCheckedLog10($extension_UInt128_388_u128 const & $this ) -> const Builtin::Nullable<$extension_UInt128_388_u128>
	{
		#line 419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if ($this == Builtin::i32(0)) {
			#line 420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return nullptr;
		}
		#line 423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		constexpr Builtin::u32 C1 = Builtin::u32(0b01100000000000000000U) - Builtin::i32(10);
		#line 424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		constexpr Builtin::u32 C2 = Builtin::u32(0b10000000000000000000U) - Builtin::i32(100);
		#line 425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		constexpr Builtin::u32 C3 = Builtin::u32(0b11100000000000000000U) - Builtin::i32(1000);
		#line 426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		constexpr Builtin::u32 C4 = Builtin::u32(0b10000000000000000000U) - Builtin::i32(10000);
		#line 427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::Auto<decltype(Builtin::i32(0))> log = Builtin::i32(0); 
		#line 428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::Auto<decltype($this)> val1 = $this; 
		#line 429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if ((val1 <=> Builtin::ParseInt128("100000000000000000000000000000000")) >= 0) {
			#line 430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			ADV_UFCS(DivAssign)(val1.$ref(), Builtin::ParseUInt128("100000000000000000000000000000000"));
			#line 431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			log += Builtin::i32(32);
			#line 432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			if ((val1 <=> Builtin::i32(100000)) >= 0) {
				#line 433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				ADV_UFCS(DivAssign)(val1.$ref(), Builtin::u32(100000U));
				#line 434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				log += Builtin::i32(5);
			}
			#line 436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::u32>(val1))> val = Builtin::Cast<true, Builtin::u32>(val1); 
			#line 437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return Builtin::Cast<true, Builtin::u128>((log + ((((val + C1) & (val + C2)) ^ ((val + C3) & (val + C4))) >> Builtin::i32(17))));
		}
		#line 439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if ((val1 <=> Builtin::i64(10000000000000000LL)) >= 0) {
			#line 440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			ADV_UFCS(DivAssign)(val1.$ref(), Builtin::u64(10000000000000000ULL));
			#line 441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			log += Builtin::i32(16);
		}
		#line 443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if ((val1 <=> Builtin::i64(10000000000LL)) >= 0) {
			#line 444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			ADV_UFCS(DivAssign)(val1.$ref(), Builtin::u64(10000000000ULL));
			#line 445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			log += Builtin::i32(10);
		}
		#line 447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if ((val1 <=> Builtin::i32(100000)) >= 0) {
			#line 448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			ADV_UFCS(DivAssign)(val1.$ref(), Builtin::u32(100000U));
			#line 449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			log += Builtin::i32(5);
		}
		#line 451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::u32>(val1))> val = Builtin::Cast<true, Builtin::u32>(val1); 
		#line 452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return Builtin::Cast<true, Builtin::u128>((log + ((((val + C1) & (val + C2)) ^ ((val + C3) & (val + C4))) >> Builtin::i32(17))));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getLog10($extension_UInt128_388_u128 const & $this ) -> const $extension_UInt128_388_u128
	{
		#line 458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (const auto result = ADV_UPCS(CheckedLog10)($this.$ref())) {
			{
				#line 458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				return result;
			}
		}
		#line 461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	
} namespace $extensions { using namespace System;
#line 525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_add_qst($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_UInt128_522_u128>
	{
		#line 527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +? implemented only for integer types");
		#line 528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		$extension_UInt128_522_u128 result{}; 
		#line 529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (Builtin::SafeAdd($this, rhs, result)) {
			#line 530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return result;
		}
		#line 532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 534 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_add_qst_eq($extension_UInt128_522_u128 & $this , T rhs) noexcept -> typename $extension_UInt128_522_u128&
	{
		#line 536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +?= implemented only for integer types");
		#line 537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (const auto result = ADV_UFCS(_operator_add_qst)($this, rhs)) {
			{
				#line 537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 538 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				$this = result;
			}
		}
		#line 540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 545 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_add_ne($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt128_522_u128
	{
		#line 547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +! implemented only for integer types");
		#line 548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		$extension_UInt128_522_u128 result{}; 
		#line 549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::StrictAdd($this, rhs, result);
		#line 550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_add_ne_eq($extension_UInt128_522_u128 & $this , T rhs)  -> typename $extension_UInt128_522_u128&
	{
		#line 552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_add_ne)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_add_mod($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_UInt128_522_u128
	{
		#line 558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +% implemented only for integer types");
		#line 559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		$extension_UInt128_522_u128 result{}; 
		#line 560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::WrappingAdd($this, rhs, result);
		#line 561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_add_mod_eq($extension_UInt128_522_u128 & $this , T rhs) noexcept -> typename $extension_UInt128_522_u128&
	{
		#line 563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_add_mod)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_add_or($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_UInt128_522_u128
	{
		#line 569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +| implemented only for integer types");
		#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		$extension_UInt128_522_u128 result{}; 
		#line 571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::SaturatingAdd($this, rhs, result);
		#line 572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_add_or_eq($extension_UInt128_522_u128 & $this , T rhs) noexcept -> typename $extension_UInt128_522_u128&
	{
		#line 574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_add_or)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_add_mod_qst($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_UInt128_522_u128, bool>
	{
		#line 579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +%? implemented only for integer types");
		#line 580 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		$extension_UInt128_522_u128 result{}; 
		#line 581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::Auto<decltype(!Builtin::SafeAdd($this, rhs, result))> overflowed = !Builtin::SafeAdd($this, rhs, result); 
		#line 582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_add_add_qst($extension_UInt128_522_u128 & $this )  -> typename $extension_UInt128_522_u128&
	{
		#line 586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_qst_eq)($this, Builtin::u128(1ULL))); 
	}
	inline constexpr auto _operator_add_add_qst_postfix($extension_UInt128_522_u128 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_add_add_qst)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_add_add_ne($extension_UInt128_522_u128 & $this )  -> typename $extension_UInt128_522_u128&
	{
		#line 589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_ne_eq)($this, Builtin::u128(1ULL))); 
	}
	inline constexpr auto _operator_add_add_ne_postfix($extension_UInt128_522_u128 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_add_add_ne)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_add_add_mod($extension_UInt128_522_u128 & $this )  -> typename $extension_UInt128_522_u128&
	{
		#line 592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_mod_eq)($this, Builtin::u128(1ULL))); 
	}
	inline constexpr auto _operator_add_add_mod_postfix($extension_UInt128_522_u128 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_add_add_mod)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 595 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_add_add_or($extension_UInt128_522_u128 & $this )  -> typename $extension_UInt128_522_u128&
	{
		#line 595 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_or_eq)($this, Builtin::u128(1ULL))); 
	}
	inline constexpr auto _operator_add_add_or_postfix($extension_UInt128_522_u128 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_add_add_or)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 599 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto CarryingAdd($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, $extension_UInt128_522_u128 rhs, bool carry) noexcept -> const std::tuple<$extension_UInt128_522_u128, bool>
	{
		#line 601 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		$extension_UInt128_522_u128 result{}; 
		#line 602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::Auto<decltype(Builtin::CarryingAdd($this, rhs, carry, result))> overflowed = Builtin::CarryingAdd($this, rhs, carry, result); 
		#line 603 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto BorrowingSub($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, $extension_UInt128_522_u128 rhs, bool carry) noexcept -> const std::tuple<$extension_UInt128_522_u128, bool>
	{
		#line 610 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		$extension_UInt128_522_u128 result{}; 
		#line 611 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::Auto<decltype(Builtin::BorrowingSub($this, rhs, carry, result))> overflowed = Builtin::BorrowingSub($this, rhs, carry, result); 
		#line 612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 617 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_sub_qst($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_UInt128_522_u128>
	{
		#line 619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -? implemented only for integer types");
		#line 620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		$extension_UInt128_522_u128 result{}; 
		#line 621 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (Builtin::SafeSubtract($this, rhs, result)) {
			#line 622 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return result;
		}
		#line 624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 626 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_sub_qst_eq($extension_UInt128_522_u128 & $this , T rhs) noexcept -> typename $extension_UInt128_522_u128&
	{
		#line 628 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -?= implemented only for integer types");
		#line 629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (const auto result = ADV_UFCS(_operator_sub_qst)($this, rhs)) {
			{
				#line 629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 630 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				$this = result;
			}
		}
		#line 632 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_sub_ne($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt128_522_u128
	{
		#line 639 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -! implemented only for integer types");
		#line 640 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		$extension_UInt128_522_u128 result{}; 
		#line 641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::StrictSubtract($this, rhs, result);
		#line 642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 644 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_sub_ne_eq($extension_UInt128_522_u128 & $this , T rhs)  -> typename $extension_UInt128_522_u128&
	{
		#line 644 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_sub_ne)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 648 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_sub_mod($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_UInt128_522_u128
	{
		#line 650 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -% implemented only for integer types");
		#line 651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		$extension_UInt128_522_u128 result{}; 
		#line 652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::WrappingSubtract($this, rhs, result);
		#line 653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_sub_mod_eq($extension_UInt128_522_u128 & $this , T rhs) noexcept -> typename $extension_UInt128_522_u128&
	{
		#line 655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_sub_mod)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 659 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_sub_or($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_UInt128_522_u128
	{
		#line 661 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -| implemented only for integer types");
		#line 662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		$extension_UInt128_522_u128 result{}; 
		#line 663 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::SaturatingSubtract($this, rhs, result);
		#line 664 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_sub_or_eq($extension_UInt128_522_u128 & $this , T rhs) noexcept -> typename $extension_UInt128_522_u128&
	{
		#line 666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_sub_or)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 670 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_sub_mod_qst($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_UInt128_522_u128, bool>
	{
		#line 671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -%? implemented only for integer types");
		#line 672 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		$extension_UInt128_522_u128 result{}; 
		#line 673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::Auto<decltype(!Builtin::SafeSubtract($this, rhs, result))> overflowed = !Builtin::SafeSubtract($this, rhs, result); 
		#line 674 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_sub_sub_qst($extension_UInt128_522_u128 & $this )  -> typename $extension_UInt128_522_u128&
	{
		#line 678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_qst_eq)($this, Builtin::u128(1ULL))); 
	}
	inline constexpr auto _operator_sub_sub_qst_postfix($extension_UInt128_522_u128 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_sub_sub_qst)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_sub_sub_ne($extension_UInt128_522_u128 & $this )  -> typename $extension_UInt128_522_u128&
	{
		#line 681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_ne_eq)($this, Builtin::u128(1ULL))); 
	}
	inline constexpr auto _operator_sub_sub_ne_postfix($extension_UInt128_522_u128 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_sub_sub_ne)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 684 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_sub_sub_mod($extension_UInt128_522_u128 & $this )  -> typename $extension_UInt128_522_u128&
	{
		#line 684 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_mod_eq)($this, Builtin::u128(1ULL))); 
	}
	inline constexpr auto _operator_sub_sub_mod_postfix($extension_UInt128_522_u128 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_sub_sub_mod)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 687 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_sub_sub_or($extension_UInt128_522_u128 & $this )  -> typename $extension_UInt128_522_u128&
	{
		#line 687 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_or_eq)($this, Builtin::u128(1ULL))); 
	}
	inline constexpr auto _operator_sub_sub_or_postfix($extension_UInt128_522_u128 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_sub_sub_or)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mul_qst($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_UInt128_522_u128>
	{
		#line 693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *? implemented only for integer types");
		#line 694 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		$extension_UInt128_522_u128 result{}; 
		#line 695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (Builtin::SafeMultiply($this, rhs, result)) {
			#line 696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return result;
		}
		#line 698 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 700 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mul_qst_eq($extension_UInt128_522_u128 & $this , T rhs) noexcept -> typename $extension_UInt128_522_u128&
	{
		#line 702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *?= implemented only for integer types");
		#line 703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (const auto result = ADV_UFCS(_operator_mul_qst)($this, rhs)) {
			{
				#line 703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 704 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				$this = result;
			}
		}
		#line 706 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 711 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mul_ne($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt128_522_u128
	{
		#line 713 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *! implemented only for integer types");
		#line 714 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		$extension_UInt128_522_u128 result{}; 
		#line 715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::StrictMultiply($this, rhs, result);
		#line 716 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mul_ne_eq($extension_UInt128_522_u128 & $this , T rhs)  -> typename $extension_UInt128_522_u128&
	{
		#line 718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_mul_ne)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 722 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mul_mod($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_UInt128_522_u128
	{
		#line 724 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *% implemented only for integer types");
		#line 725 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		$extension_UInt128_522_u128 result{}; 
		#line 726 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::WrappingMultiply($this, rhs, result);
		#line 727 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mul_mod_eq($extension_UInt128_522_u128 & $this , T rhs) noexcept -> typename $extension_UInt128_522_u128&
	{
		#line 729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_mul_mod)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 733 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mul_or($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_UInt128_522_u128
	{
		#line 735 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *| implemented only for integer types");
		#line 736 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		$extension_UInt128_522_u128 result{}; 
		#line 737 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::SaturatingMultiply($this, rhs, result);
		#line 738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 740 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mul_or_eq($extension_UInt128_522_u128 & $this , T rhs) noexcept -> typename $extension_UInt128_522_u128&
	{
		#line 740 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_mul_or)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 744 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mul_mod_qst($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_UInt128_522_u128, bool>
	{
		#line 745 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *%? implemented only for integer types");
		#line 746 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		$extension_UInt128_522_u128 result{}; 
		#line 747 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::Auto<decltype(!Builtin::SafeMultiply($this, rhs, result))> overflowed = !Builtin::SafeMultiply($this, rhs, result); 
		#line 748 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 753 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_mul_gt($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, $extension_UInt128_522_u128 rhs) noexcept -> const std::tuple<Builtin::u128, Builtin::u128>
	{
		#line 755 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		const auto& [low, high] = Builtin::WideningMul128u($this, rhs);
		#line 756 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return std::make_tuple(low, high);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 762 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto CarryingMul($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, $extension_UInt128_522_u128 rhs, $extension_UInt128_522_u128 carry) noexcept -> const std::tuple<Builtin::u128, Builtin::u128>
	{
		#line 764 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		const auto& [low, high] = Builtin::CarryingMul128u($this, rhs, carry);
		#line 765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return std::make_tuple(low, high);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 770 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_bsl_qst($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_UInt128_522_u128>
	{
		#line 772 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\? implemented only for integer types");
		#line 773 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		$extension_UInt128_522_u128 result{}; 
		#line 774 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (Builtin::SafeDivide($this, rhs, result)) {
			#line 775 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return result;
		}
		#line 777 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 779 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_bsl_qst_eq($extension_UInt128_522_u128 & $this , T rhs) noexcept -> typename $extension_UInt128_522_u128&
	{
		#line 781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\?= implemented only for integer types");
		#line 782 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (const auto result = ADV_UFCS(_operator_bsl_qst)($this, rhs)) {
			{
				#line 782 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 783 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				$this = result;
			}
		}
		#line 785 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 790 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_bsl_ne($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt128_522_u128
	{
		#line 790 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 791 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_bsl_ne_eq($extension_UInt128_522_u128 & $this , T rhs)  -> typename $extension_UInt128_522_u128&
	{
		#line 791 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl_eq)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 795 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_bsl_mod($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt128_522_u128
	{
		#line 795 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 796 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_eq($extension_UInt128_522_u128 & $this , T rhs)  -> typename $extension_UInt128_522_u128&
	{
		#line 796 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl_eq)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 800 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_bsl_or($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt128_522_u128
	{
		#line 800 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 801 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_bsl_or_eq($extension_UInt128_522_u128 & $this , T rhs)  -> typename $extension_UInt128_522_u128&
	{
		#line 801 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl_eq)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 815 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_UInt128_522_u128>
	{
		#line 817 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\? implemented only for integer types");
		#line 818 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		$extension_UInt128_522_u128 result{}; 
		#line 819 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (Builtin::SafeDivExact($this, rhs, result)) {
			#line 820 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return result;
		}
		#line 822 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 825 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst_eq($extension_UInt128_522_u128 & $this , T rhs) noexcept -> typename $extension_UInt128_522_u128&
	{
		#line 827 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\?= implemented only for integer types");
		#line 828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (const auto result = ADV_UFCS(_operator_bsl_bsl_qst)($this, rhs)) {
			{
				#line 828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 829 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				$this = result;
			}
		}
		#line 831 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 836 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mod_qst($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_UInt128_522_u128>
	{
		#line 838 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %? implemented only for integer types");
		#line 839 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		$extension_UInt128_522_u128 result{}; 
		#line 840 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (Builtin::SafeModulus($this, rhs, result)) {
			#line 841 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return result;
		}
		#line 843 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 845 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mod_qst_eq($extension_UInt128_522_u128 & $this , T rhs) noexcept -> typename $extension_UInt128_522_u128&
	{
		#line 847 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %?= implemented only for integer types");
		#line 848 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (const auto result = ADV_UFCS(_operator_mod_qst)($this, rhs)) {
			{
				#line 848 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 849 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				$this = result;
			}
		}
		#line 851 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 856 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mod_ne($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt128_522_u128
	{
		#line 856 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY($this % rhs); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 857 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mod_ne_eq($extension_UInt128_522_u128 & $this , T rhs)  -> typename $extension_UInt128_522_u128&
	{
		#line 857 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY($this %= rhs); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 861 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mod_mod($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt128_522_u128
	{
		#line 861 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY($this % rhs); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 862 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mod_mod_eq($extension_UInt128_522_u128 & $this , T rhs)  -> typename $extension_UInt128_522_u128&
	{
		#line 862 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY($this %= rhs); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 867 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mod_mod_qst($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_UInt128_522_u128, bool>
	{
		#line 868 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %%? implemented only for integer types");
		#line 869 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		$extension_UInt128_522_u128 result{}; 
		#line 870 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::Auto<decltype(!Builtin::SafeModulus($this, rhs, result))> overflowed = !Builtin::SafeModulus($this, rhs, result); 
		#line 871 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 876 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_sub_qst($extension_UInt128_522_u128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::Nullable<$extension_UInt128_522_u128>
	{
		#line 876 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(nullptr); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 879 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline auto _operator_sub_ne($extension_UInt128_522_u128 const& $this LIFETIMEBOUND)  -> const typename $extension_UInt128_522_u128
	{
		#line 881 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::Throw(Builtin::IntegerOverflowException{});
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 884 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_sub_mod($extension_UInt128_522_u128 const& $this LIFETIMEBOUND)  -> const typename $extension_UInt128_522_u128
	{
		#line 886 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		$extension_UInt128_522_u128 result{}; 
		#line 887 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::WrappingNegate($this, result);
		#line 888 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 892 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_sub_or($extension_UInt128_522_u128 const& $this LIFETIMEBOUND)  -> const typename $extension_UInt128_522_u128
	{
		#line 892 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(Builtin::u128(0ULL)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 895 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_sub_mod_qst($extension_UInt128_522_u128 const& $this LIFETIMEBOUND)  -> const std::tuple<$extension_UInt128_522_u128, bool>
	{
		#line 897 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		$extension_UInt128_522_u128 result{}; 
		#line 898 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::Auto<decltype(Builtin::SafeNegate($this, result))> __var_898_8 = Builtin::SafeNegate($this, result); 
		#line 899 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return std::make_tuple(result, Builtin::Boolean(true));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 903 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_lt_lt_qst($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<$extension_UInt128_522_u128>
	{
		#line 905 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_UInt128_522_u128)()) < 0) {
			#line 906 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return Builtin::UncheckedShiftLeft($this, amount);
		}
		#line 908 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 911 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_lt_lt_qst_eq($extension_UInt128_522_u128 & $this , Builtin::i32 amount) noexcept -> typename $extension_UInt128_522_u128&
	{
		#line 913 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_UInt128_522_u128)()) < 0) {
			#line 914 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return $this <<= amount;
		}
		#line 916 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 919 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_lt_lt_ne($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_UInt128_522_u128
	{
		#line 921 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_UInt128_522_u128)()) < 0) {
			#line 922 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return Builtin::UncheckedShiftLeft($this, amount);
		}
		#line 924 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::Throw(Builtin::IntegerOverflowException{});
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 927 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_lt_lt_ne_eq($extension_UInt128_522_u128 & $this , Builtin::i32 amount)  -> typename $extension_UInt128_522_u128&
	{
		#line 927 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_lt_lt_ne)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 929 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_lt_lt_mod($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename $extension_UInt128_522_u128
	{
		#line 929 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(Builtin::UncheckedShiftLeft($this, amount & (ADV_USPCS(BitWidth, $extension_UInt128_522_u128)() - Builtin::i32(1)))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 932 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_lt_lt_mod_eq($extension_UInt128_522_u128 & $this , Builtin::i32 amount) noexcept -> typename $extension_UInt128_522_u128&
	{
		#line 932 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_lt_lt_mod)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 934 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_lt_lt_mod_qst($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<$extension_UInt128_522_u128, bool>
	{
		#line 934 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(std::make_tuple(ADV_UFCS(_operator_lt_lt_mod)($this, amount), (amount <=> Builtin::i32(0)) < 0 || (amount <=> ADV_USPCS(BitWidth, $extension_UInt128_522_u128)()) >= 0)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 937 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_gt_gt_qst($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<$extension_UInt128_522_u128>
	{
		#line 939 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_UInt128_522_u128)()) < 0) {
			#line 940 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return $this >> amount;
		}
		#line 942 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 945 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_gt_gt_qst_eq($extension_UInt128_522_u128 & $this , Builtin::i32 amount) noexcept -> typename $extension_UInt128_522_u128&
	{
		#line 947 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_UInt128_522_u128)()) < 0) {
			#line 948 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return $this >>= amount;
		}
		#line 950 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 953 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_gt_gt_ne($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_UInt128_522_u128
	{
		#line 955 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_UInt128_522_u128)()) < 0) {
			#line 956 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return $this >> amount;
		}
		#line 958 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::Throw(Builtin::IntegerOverflowException{});
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 961 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_gt_gt_ne_eq($extension_UInt128_522_u128 & $this , Builtin::i32 amount)  -> typename $extension_UInt128_522_u128&
	{
		#line 961 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_gt_gt_ne)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 963 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_gt_gt_mod($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename $extension_UInt128_522_u128
	{
		#line 963 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(Builtin::UncheckedShiftRight($this, amount & (ADV_USPCS(BitWidth, $extension_UInt128_522_u128)() - Builtin::i32(1)))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 966 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_gt_gt_mod_eq($extension_UInt128_522_u128 & $this , Builtin::i32 amount) noexcept -> typename $extension_UInt128_522_u128&
	{
		#line 966 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_gt_gt_mod)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 968 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_gt_gt_mod_qst($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<$extension_UInt128_522_u128, bool>
	{
		#line 968 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(std::make_tuple(ADV_UFCS(_operator_gt_gt_mod)($this, amount), (amount <=> Builtin::i32(0)) < 0 || (amount <=> ADV_USPCS(BitWidth, $extension_UInt128_522_u128)()) >= 0)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 973 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_xor_xor_qst($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const Builtin::Nullable<$extension_UInt128_522_u128>
	{
		#line 975 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 977 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return Builtin::u128(1ULL);
		}
		#line 980 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 981 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::Auto<decltype(Builtin::u128(1ULL))> result = Builtin::u128(1ULL); 
		#line 983 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		for (;;) 
		{
			#line 984 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 985 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				if (const auto mul = ADV_UFCS(_operator_mul_qst)(result, base)) {
					{
						#line 985 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
						auto __tmp0 = *mul; const auto& mul = __tmp0;
						
						#line 986 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
						result = mul;
					}
				} else {
					#line 987 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
					{
						#line 988 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
						return nullptr;
					}
				}
				#line 990 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				if (exp == Builtin::i32(1)) {
					#line 991 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
					return result;
				}
			}
			#line 993 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
			#line 994 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			if (const auto mul = ADV_UFCS(_operator_mul_qst)(base, base)) {
				{
					#line 994 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
					auto __tmp0 = *mul; const auto& mul = __tmp0;
					
					#line 995 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
					base = mul;
				}
			} else {
				#line 996 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				{
					#line 997 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
					return nullptr;
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1002 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_xor_xor_qst_eq($extension_UInt128_522_u128 & $this , Builtin::u32 exp) noexcept -> typename $extension_UInt128_522_u128&
	{
		#line 1004 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (auto result = ADV_UFCS(_operator_xor_xor_qst)($this, exp)) {
			{
				#line 1004 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 1005 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				return $this = result;
			}
		}
		#line 1007 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1010 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_xor_xor_ne($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename $extension_UInt128_522_u128
	{
		#line 1012 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1014 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return Builtin::u128(1ULL);
		}
		#line 1017 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 1018 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::Auto<decltype(Builtin::u128(1ULL))> result = Builtin::u128(1ULL); 
		#line 1020 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		for (;;) 
		{
			#line 1021 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 1022 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				ADV_UFCS(_operator_mul_ne_eq)(result, base);
				#line 1023 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				if (exp == Builtin::i32(1)) {
					#line 1024 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
					return result;
				}
			}
			#line 1026 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
			#line 1027 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			ADV_UFCS(_operator_mul_ne_eq)(base, base);
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1031 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_xor_xor_ne_eq($extension_UInt128_522_u128 & $this , Builtin::u32 exp)  -> typename $extension_UInt128_522_u128&
	{
		#line 1031 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_xor_xor_ne)($this, exp)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1033 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_xor_xor_mod($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename $extension_UInt128_522_u128
	{
		#line 1035 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1037 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return Builtin::u128(1ULL);
		}
		#line 1040 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 1041 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::Auto<decltype(Builtin::u128(1ULL))> result = Builtin::u128(1ULL); 
		#line 1043 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (std::is_constant_evaluated()) {
			#line 1044 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			while ((exp <=> Builtin::i32(1)) > 0) 
			{
				#line 1045 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
					#line 1046 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
					ADV_UFCS(_operator_mul_mod_eq)(result, base);
				}
				#line 1048 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
				#line 1049 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				ADV_UFCS(_operator_mul_mod_eq)(base, base);
			}
			#line 1051 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return ADV_UFCS(_operator_mul_mod)(result, base);
		} else {
			#line 1052 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			{
				#line 1053 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				for (;;) 
				{
					#line 1054 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
					if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
						#line 1055 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
						ADV_UFCS(_operator_mul_mod_eq)(result, base);
						#line 1056 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
						if (exp == Builtin::i32(1)) {
							#line 1057 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
							return result;
						}
					}
					#line 1059 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
					ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
					#line 1060 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
					ADV_UFCS(_operator_mul_mod_eq)(base, base);
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1065 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_xor_xor_mod_eq($extension_UInt128_522_u128 & $this , Builtin::u32 exp) noexcept -> typename $extension_UInt128_522_u128&
	{
		#line 1065 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_xor_xor_mod)($this, exp)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1067 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_xor_xor_or($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename $extension_UInt128_522_u128
	{
		#line 1069 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (const auto result = ADV_UFCS(_operator_xor_xor_qst)($this, exp)) {
			{
				#line 1069 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 1070 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				return result;
			}
		}
		#line 1073 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return ADV_USPCS(MaxValue, $extension_UInt128_522_u128)();
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1076 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_xor_xor_or_eq($extension_UInt128_522_u128 & $this , Builtin::u32 exp) noexcept -> typename $extension_UInt128_522_u128&
	{
		#line 1076 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_xor_xor_or)($this, exp)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1078 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_xor_xor_mod_qst($extension_UInt128_522_u128 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const std::tuple<$extension_UInt128_522_u128, bool>
	{
		#line 1080 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1082 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return std::make_tuple(Builtin::u128(1ULL), Builtin::Boolean(false));
		}
		#line 1085 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 1086 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::Auto<decltype(Builtin::u128(1ULL))> result = Builtin::u128(1ULL); 
		#line 1087 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::Auto<decltype(Builtin::Boolean(false))> overflowed = Builtin::Boolean(false); 
		#line 1088 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::Auto<decltype(std::make_tuple(Builtin::u128(0ULL), Builtin::Boolean(false)))> tmp = std::make_tuple(Builtin::u128(0ULL), Builtin::Boolean(false)); 
		#line 1090 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		for (;;) 
		{
			#line 1091 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 1092 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				tmp = ADV_UFCS(_operator_mul_mod_qst)(result, base);
				#line 1093 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				if (exp == Builtin::i32(1)) {
					#line 1094 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
					std::get<1>(tmp) |= overflowed;
					#line 1095 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
					return tmp;
				}
				#line 1097 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				result = std::get<0>(tmp);
				#line 1098 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				overflowed |= std::get<1>(tmp);
			}
			#line 1100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
			#line 1101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			tmp = ADV_UFCS(_operator_mul_mod_qst)(base, base);
			#line 1102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			base = std::get<0>(tmp);
			#line 1103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			overflowed |= std::get<1>(tmp);
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getCheckedAbs($extension_UInt128_522_u128 const & $this ) -> const Builtin::Nullable<$extension_UInt128_522_u128>
	{
		#line 1108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getStrictAbs($extension_UInt128_522_u128 const & $this ) -> const $extension_UInt128_522_u128
	{
		#line 1110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getWrappingAbs($extension_UInt128_522_u128 const & $this ) -> const $extension_UInt128_522_u128
	{
		#line 1112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getSaturatingAbs($extension_UInt128_522_u128 const & $this ) -> const $extension_UInt128_522_u128
	{
		#line 1114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getOverflowingAbs($extension_UInt128_522_u128 const & $this ) -> const std::tuple<$extension_UInt128_522_u128, bool>
	{
		#line 1116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(std::make_tuple($this, Builtin::Boolean(false))); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	
} namespace $extensions { using namespace System;
#line 1164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto NextMultipleOf($extension_UInt128_1119_u128 const& $this LIFETIMEBOUND, $extension_UInt128_1119_u128 rhs)  -> const typename $extension_UInt128_1119_u128
	{
		#line 1166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		const Builtin::Auto<decltype($this % rhs)> rem = $this % rhs; 
		#line 1167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return rem == Builtin::u32(0U) ? $this : $this + (rhs - rem);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto CheckedNextMultipleOf($extension_UInt128_1119_u128 const& $this LIFETIMEBOUND, $extension_UInt128_1119_u128 rhs) noexcept -> const Builtin::Nullable<$extension_UInt128_1119_u128>
	{
		#line 1174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (const auto rem = ADV_UFCS(_operator_mod_qst)($this, rhs)) {
			{
				#line 1174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				auto __tmp0 = *rem; const auto& rem = __tmp0;
				
				#line 1175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				if (rem == Builtin::u32(0U)) {
					#line 1176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
					return $this;
				}
				#line 1178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				return ADV_UFCS(_operator_add_qst)($this, (rhs - rem));
			}
		}
		#line 1180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto $static_getIsSigned<$extension_UInt128_1119_u128>::get() -> const bool
	{
		#line 1120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getTrailingZeroCount($extension_UInt128_1119_u128 const & $this ) -> const Builtin::u32
	{
		#line 1124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (ADV_UFCS(Low64)($this.$ref()) == Builtin::i32(0)) {
			#line 1125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return ADV_UPCS(TrailingZeroCount)(ADV_UFCS(High64)($this.$ref()).$ref()) + Builtin::u32(64U);
		}
		#line 1127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return ADV_UPCS(TrailingZeroCount)(ADV_UFCS(Low64)($this.$ref()).$ref());
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getTrailingOneCount($extension_UInt128_1119_u128 const & $this ) -> const Builtin::u32
	{
		#line 1129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(TrailingZeroCount)((ADV_UFCS(_operator_not)($this)).$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getByteCount($extension_UInt128_1119_u128 const & $this ) -> const Builtin::u32
	{
		#line 1130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u32>(Builtin::usize(sizeof($extension_UInt128_1119_u128)))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getMinimalBitWidth($extension_UInt128_1119_u128 const & $this ) -> const Builtin::u32
	{
		#line 1131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(BitWidth, $extension_UInt128_1119_u128)() - ADV_UPCS(LeadingZeroCount)($this.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline auto getIsqrt($extension_UInt128_1119_u128 const & $this ) -> const $extension_UInt128_1119_u128
	{
		#line 1142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (const auto result = ADV_UPCS(CheckedIsqrt)($this.$ref())) {
			{
				#line 1142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 1143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				return result;
			}
		}
		#line 1145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getLog2Ceiling($extension_UInt128_1119_u128 const & $this ) -> const $extension_UInt128_1119_u128
	{
		#line 1152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::Auto<decltype(ADV_UPCS(Log2)($this.$ref()))> result = ADV_UPCS(Log2)($this.$ref()); 
		#line 1153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (ADV_UPCS(PopCount)($this.$ref()) != Builtin::u32(1U)) {
			#line 1154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			++result;
		}
		#line 1157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return result;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getPrevPow2($extension_UInt128_1119_u128 const & $this ) -> const $extension_UInt128_1119_u128
	{
		#line 1186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (($this <=> Builtin::u32(1U)) <= 0) {
			#line 1187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return Builtin::u128(0ULL);
		}
		#line 1190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return ADV_USPCS(One, $extension_UInt128_1119_u128)() << (ADV_UPCS(MinimalBitWidth)($this.$ref()) - Builtin::u128(1ULL));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getNextPow2($extension_UInt128_1119_u128 const & $this ) -> const $extension_UInt128_1119_u128
	{
		#line 1197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (($this <=> Builtin::u32(1U)) <= 0) {
			#line 1198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return Builtin::u128(0ULL);
		}
		#line 1201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		const Builtin::Auto<decltype($this - Builtin::u128(1ULL))> p = $this - Builtin::u128(1ULL); 
		#line 1202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return (ADV_USPCS(AllBitsSet, $extension_UInt128_1119_u128)() >> ADV_UPCS(LeadingZeroCount)(p.$ref())) + Builtin::u128(1ULL);
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getCheckedNextPow2($extension_UInt128_1119_u128 const & $this ) -> const Builtin::Nullable<$extension_UInt128_1119_u128>
	{
		#line 1209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (($this <=> Builtin::u32(1U)) <= 0) {
			#line 1210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return Builtin::u128(0ULL);
		}
		#line 1213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		const Builtin::Auto<decltype($this - Builtin::u128(1ULL))> p = $this - Builtin::u128(1ULL); 
		#line 1214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return ADV_UFCS(_operator_add_qst)((ADV_USPCS(AllBitsSet, $extension_UInt128_1119_u128)() >> ADV_UPCS(LeadingZeroCount)(p.$ref())), Builtin::u128(1ULL));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getWrappingNextPow2($extension_UInt128_1119_u128 const & $this ) -> const $extension_UInt128_1119_u128
	{
		#line 1221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (($this <=> Builtin::u32(1U)) <= 0) {
			#line 1222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return Builtin::u128(0ULL);
		}
		#line 1225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		const Builtin::Auto<decltype($this - Builtin::u128(1ULL))> p = $this - Builtin::u128(1ULL); 
		#line 1226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return ADV_UFCS(_operator_add_mod)((ADV_USPCS(AllBitsSet, $extension_UInt128_1119_u128)() >> ADV_UPCS(LeadingZeroCount)(p.$ref())), Builtin::u128(1ULL));
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	
} namespace $extensions { using namespace System;
#line 1263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto RotateLeft($extension_UInt128_1230_u128 const& $this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename $extension_UInt128_1230_u128
	{
		#line 1263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(($this << shiftAmount) | ($this >> Builtin::i32{ADV_USPCS(BitWidth, $extension_UInt128_1230_u128)() - shiftAmount})); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto RotateRight($extension_UInt128_1230_u128 const& $this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename $extension_UInt128_1230_u128
	{
		#line 1264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(($this >> Builtin::i32{shiftAmount}) | ($this << (ADV_USPCS(BitWidth, $extension_UInt128_1230_u128)() - shiftAmount))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto $static_getBitWidth<$extension_UInt128_1230_u128>::get() -> const Builtin::u32
	{
		#line 1231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(128U)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getLeadingZeroCount($extension_UInt128_1230_u128 const & $this ) -> const Builtin::u32
	{
		#line 1235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (ADV_UFCS(High64)($this.$ref()) == Builtin::i32(0)) {
			#line 1236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return Builtin::u32(64U) + Builtin::LeadingZeroCount(ADV_UFCS(Low64)($this.$ref()));
		}
		#line 1239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return Builtin::LeadingZeroCount(ADV_UFCS(High64)($this.$ref()));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getLeadingOneCount($extension_UInt128_1230_u128 const & $this ) -> const Builtin::u32
	{
		#line 1241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(LeadingZeroCount)((ADV_UFCS(_operator_not)($this)).$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getPopCount($extension_UInt128_1230_u128 const & $this ) -> const Builtin::u32
	{
		#line 1242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(Builtin::PopCount(ADV_UFCS(High64)($this.$ref())) + Builtin::PopCount(ADV_UFCS(Low64)($this.$ref()))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getZeroCount($extension_UInt128_1230_u128 const & $this ) -> const Builtin::u32
	{
		#line 1243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(PopCount)((ADV_UFCS(_operator_not)($this)).$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getByteSwapped($extension_UInt128_1230_u128 const & $this ) -> const $extension_UInt128_1230_u128
	{
		#line 1244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(Builtin::u128{ADV_UPCS(ByteSwapped)(ADV_UFCS(Low64)($this.$ref()).$ref()), ADV_UPCS(ByteSwapped)(ADV_UFCS(High64)($this.$ref()).$ref())}); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getBigEndian($extension_UInt128_1230_u128 const & $this ) -> const $extension_UInt128_1230_u128
	{
		#line 1247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if constexpr (Builtin::IsLittleEndian()) {
			#line 1248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return ADV_UPCS(ByteSwapped)($this.$ref());
		}
		#line 1250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return $this;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getLittleEndian($extension_UInt128_1230_u128 const & $this ) -> const $extension_UInt128_1230_u128
	{
		#line 1254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if constexpr (Builtin::IsBigEndian()) {
			#line 1255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return ADV_UPCS(ByteSwapped)($this.$ref());
		}
		#line 1257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return $this;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getReverseBits($extension_UInt128_1230_u128 const & $this ) -> const $extension_UInt128_1230_u128
	{
		#line 1259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(Builtin::u128{Builtin::ReverseBits64u(ADV_UFCS(Low64)($this.$ref())), Builtin::ReverseBits64u(ADV_UFCS(High64)($this.$ref()))}); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getShortestBitLength($extension_UInt128_1230_u128 const & $this ) -> const Builtin::u32
	{
		#line 1261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(BitWidth, $extension_UInt128_1230_u128)() - ADV_UPCS(LeadingZeroCount)($this.$ref())); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	
} namespace $extensions { using namespace System;
#line 1276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto IsGreaterThanAsUnsigned($extension_UInt128_1268_u128 const& $this LIFETIMEBOUND, $extension_UInt128_1268_u128 rhs) noexcept -> const bool
	{
		#line 1276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(($this <=> rhs) > 0); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto $static_getMaxDigitCount<$extension_UInt128_1268_u128>::get() -> const Builtin::i32
	{
		#line 1269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(39)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto $static_getMaxHexDigitCount<$extension_UInt128_1268_u128>::get() -> const Builtin::i32
	{
		#line 1270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(32)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto $static_getMaxValueDiv10<$extension_UInt128_1268_u128>::get() -> const $extension_UInt128_1268_u128
	{
		#line 1271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl)(ADV_USPCS(MaxValue, Builtin::u128)(), Builtin::i32(10))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getMultiplyBy10($extension_UInt128_1268_u128 const & $this ) -> const $extension_UInt128_1268_u128
	{
		#line 1273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_mod)($this, Builtin::u128(10ULL))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getMultiplyBy16($extension_UInt128_1268_u128 const & $this ) -> const $extension_UInt128_1268_u128
	{
		#line 1274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_mod)($this, Builtin::u128(16ULL))); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	

}