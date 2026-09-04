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
namespace __Unsafe {} namespace __Int128$Protected__Unsafe {}
//###############################################################################
//# Global type aliases
//###############################################################################
#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
using Int128 = Builtin::i128;
//###############################################################################
//# Type definitions
//###############################################################################
	} namespace $extensions { using namespace System;
#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	using $extension_Int128_16_i128 = Builtin::i128;
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE(IMinMaxValue, IMinMaxValue);
	#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class __TT> struct $static_getMinValue; template<> struct $static_getMinValue<$extension_Int128_16_i128> { static inline constexpr auto get() -> const $extension_Int128_16_i128; };
	#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class __TT> struct $static_getMaxValue; template<> struct $static_getMaxValue<$extension_Int128_16_i128> { static inline constexpr auto get() -> const $extension_Int128_16_i128; };
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int128_16_i128, IMinMaxValue, IMinMaxValue, $extension_Int128_16_i128);
	} namespace System{
using $extensions::$static_getMinValue;
using $extensions::$static_getMaxValue;

		} namespace $extensions { using namespace System;
#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	using $extension_Int128_21_i128 = Builtin::i128;
	#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ASTRUMSTD_API auto _operator_eq_eq_mul($extension_Int128_21_i128 const& $this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool;
	#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto operator<=>($extension_Int128_21_i128 const& $this LIFETIMEBOUND, Builtin::Nullable<$extension_Int128_21_i128> rhs) noexcept -> const Builtin::i32;
	#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_gt_gt_gt($extension_Int128_21_i128 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_Int128_21_i128;
	#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_gt_gt_gt_eq($extension_Int128_21_i128 & $this , Builtin::i32 amount)  -> typename $extension_Int128_21_i128&;
	#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_lt_lt_bsl($extension_Int128_21_i128 const& $this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename $extension_Int128_21_i128;
	#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_lt_lt_bsl_eq($extension_Int128_21_i128 & $this , Builtin::u32 amount) noexcept -> typename $extension_Int128_21_i128&;
	#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_gt_gt_bsl($extension_Int128_21_i128 const& $this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename $extension_Int128_21_i128;
	#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_gt_gt_bsl_eq($extension_Int128_21_i128 & $this , Builtin::u32 amount) noexcept -> typename $extension_Int128_21_i128&;
	#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getHashCode($extension_Int128_21_i128 const& $this ) -> const Builtin::u64;
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
#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	using $extension_Int128_90_i128 = Builtin::i128;
	#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE(IAbstractComparable, IAbstractComparable);
	#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ASTRUMSTD_API auto _operator_lt_eq_gt_mul($extension_Int128_90_i128 const& $this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32;
	#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int128_90_i128, IAbstractComparable, IAbstractComparable, $extension_Int128_90_i128);
	} namespace System{
using $extensions::_operator_lt_eq_gt_mul;

		} namespace $extensions { using namespace System;
#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	using $extension_Int128_105_i128 = Builtin::i128;
	#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE(IConvertible, IConvertible);
	#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToBoolean($extension_Int128_105_i128 const& $this LIFETIMEBOUND) noexcept -> const bool;
	#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToInt8($extension_Int128_105_i128 const& $this LIFETIMEBOUND)  -> const Builtin::i8;
	#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToUInt8($extension_Int128_105_i128 const& $this LIFETIMEBOUND)  -> const Builtin::u8;
	#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToInt16($extension_Int128_105_i128 const& $this LIFETIMEBOUND)  -> const Builtin::i16;
	#line 125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToUInt16($extension_Int128_105_i128 const& $this LIFETIMEBOUND)  -> const Builtin::u16;
	#line 131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToInt32($extension_Int128_105_i128 const& $this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToUInt32($extension_Int128_105_i128 const& $this LIFETIMEBOUND)  -> const Builtin::u32;
	#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToInt64($extension_Int128_105_i128 const& $this LIFETIMEBOUND)  -> const Builtin::i64;
	#line 149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToUInt64($extension_Int128_105_i128 const& $this LIFETIMEBOUND)  -> const Builtin::u64;
	#line 155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToInt128($extension_Int128_105_i128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i128;
	#line 156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToUInt128($extension_Int128_105_i128 const& $this LIFETIMEBOUND)  -> const Builtin::u128;
	#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToIsize($extension_Int128_105_i128 const& $this LIFETIMEBOUND)  -> const Builtin::isize;
	#line 173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToUsize($extension_Int128_105_i128 const& $this LIFETIMEBOUND)  -> const Builtin::usize;
	#line 184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToFloat32($extension_Int128_105_i128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::f32;
	#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToFloat64($extension_Int128_105_i128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::f64;
	#line 186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToByte($extension_Int128_105_i128 const& $this LIFETIMEBOUND)  -> const Builtin::u8;
	#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToChar($extension_Int128_105_i128 const& $this LIFETIMEBOUND)  -> const Builtin::char32;
	#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int128_105_i128, IConvertible, IConvertible, $extension_Int128_105_i128);
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
#line 198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	using $extension_Int128_198_i128 = Builtin::i128;
	#line 198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE(IDivisibleArithmetic, IDivisibleArithmetic);
	#line 200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_div_mod($extension_Int128_198_i128 const& $this LIFETIMEBOUND, T rhs)  -> const Builtin::Tuple<$extension_Int128_198_i128, $extension_Int128_198_i128>;
	#line 206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_div_not($extension_Int128_198_i128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int128_198_i128;
	#line 213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_div_not_eq($extension_Int128_198_i128 & $this , auto rhs)  -> typename $extension_Int128_198_i128&;
	#line 215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_div_lt($extension_Int128_198_i128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int128_198_i128;
	#line 229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_div_lt_eq($extension_Int128_198_i128 & $this , auto rhs)  -> typename $extension_Int128_198_i128&;
	#line 231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mod_lt($extension_Int128_198_i128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int128_198_i128;
	#line 239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_mod_lt_eq($extension_Int128_198_i128 & $this , auto rhs)  -> typename $extension_Int128_198_i128&;
	#line 241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_div_gt($extension_Int128_198_i128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int128_198_i128;
	#line 255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_div_gt_eq($extension_Int128_198_i128 & $this , auto rhs)  -> typename $extension_Int128_198_i128&;
	#line 198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int128_198_i128, IDivisibleArithmetic, IDivisibleArithmetic, $extension_Int128_198_i128);
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
#line 258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	using $extension_Int128_258_i128 = Builtin::i128;
	#line 258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE(IIntegerDivisibleArithmetic, IIntegerDivisibleArithmetic);
	#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl($extension_Int128_258_i128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int128_258_i128;
	#line 262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_eq($extension_Int128_258_i128 & $this , T rhs)  -> typename $extension_Int128_258_i128&;
	#line 267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl($extension_Int128_258_i128 const& $this LIFETIMEBOUND, T rhs)  -> const Builtin::Nullable<$extension_Int128_258_i128>;
	#line 258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int128_258_i128, IIntegerDivisibleArithmetic, IIntegerDivisibleArithmetic, $extension_Int128_258_i128);
	} namespace System{
using $extensions::_operator_bsl;
using $extensions::_operator_bsl_eq;
using $extensions::_operator_bsl_bsl;

		} namespace $extensions { using namespace System;
#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	using $extension_Int128_278_i128 = Builtin::i128;
	#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE(IIntegerPowerArithmetic, IIntegerPowerArithmetic);
	#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor($extension_Int128_278_i128 const& $this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename $extension_Int128_278_i128;
	#line 313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor_eq($extension_Int128_278_i128 & $this , Builtin::u32 exp)  -> typename $extension_Int128_278_i128&;
	#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int128_278_i128, IIntegerPowerArithmetic, IIntegerPowerArithmetic, $extension_Int128_278_i128);
	} namespace System{
using $extensions::_operator_xor_xor;
using $extensions::_operator_xor_xor_eq;

		} namespace $extensions { using namespace System;
#line 316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	using $extension_Int128_316_i128 = Builtin::i128;
	#line 316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE(INumberBase, INumberBase);
	#line 340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ASTRUMSTD_API auto MaxMagnitude($extension_Int128_316_i128 const& $this LIFETIMEBOUND, $extension_Int128_316_i128 rhs)  -> const typename $extension_Int128_316_i128;
	#line 369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline auto MaxMagnitudeNumber($extension_Int128_316_i128 const& $this LIFETIMEBOUND, $extension_Int128_316_i128 rhs)  -> const typename $extension_Int128_316_i128;
	#line 371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ASTRUMSTD_API auto MinMagnitude($extension_Int128_316_i128 const& $this LIFETIMEBOUND, $extension_Int128_316_i128 rhs)  -> const typename $extension_Int128_316_i128;
	#line 400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline auto MinMagnitudeNumber($extension_Int128_316_i128 const& $this LIFETIMEBOUND, $extension_Int128_316_i128 rhs)  -> const typename $extension_Int128_316_i128;
	#line 402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ASTRUMSTD_API auto Parse($extension_Int128_316_i128 const& $this LIFETIMEBOUND, Builtin::Str input)  -> const typename $extension_Int128_316_i128;
	#line 407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ASTRUMSTD_API auto TryParse($extension_Int128_316_i128 const& $this LIFETIMEBOUND, Builtin::Str input) noexcept -> const Builtin::Nullable<$extension_Int128_316_i128>;
	#line 414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToInt8($extension_Int128_316_i128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i8;
	#line 415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToUInt8($extension_Int128_316_i128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u8;
	#line 416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToInt16($extension_Int128_316_i128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i16;
	#line 417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToUInt16($extension_Int128_316_i128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u16;
	#line 418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToInt32($extension_Int128_316_i128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i32;
	#line 419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToUInt32($extension_Int128_316_i128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u32;
	#line 420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToInt64($extension_Int128_316_i128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i64;
	#line 421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToUInt64($extension_Int128_316_i128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u64;
	#line 422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToInt128($extension_Int128_316_i128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i128;
	#line 423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToUInt128($extension_Int128_316_i128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u128;
	#line 424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToIsize($extension_Int128_316_i128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::isize;
	#line 425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToUsize($extension_Int128_316_i128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::usize;
	#line 317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class __TT> struct $static_getOne; template<> struct $static_getOne<$extension_Int128_316_i128> { static inline constexpr auto get() -> const $extension_Int128_316_i128; };
	#line 318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class __TT> struct $static_getZero; template<> struct $static_getZero<$extension_Int128_316_i128> { static inline constexpr auto get() -> const $extension_Int128_316_i128; };
	#line 319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class __TT> struct $static_getRadix; template<> struct $static_getRadix<$extension_Int128_316_i128> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getAbs($extension_Int128_316_i128 const& $this ) -> const $extension_Int128_316_i128;
	#line 322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsCanonical($extension_Int128_316_i128 const& $this ) -> const bool;
	#line 323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsComplexNumber($extension_Int128_316_i128 const& $this ) -> const bool;
	#line 324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsEvenInteger($extension_Int128_316_i128 const& $this ) -> const bool;
	#line 325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsFinite($extension_Int128_316_i128 const& $this ) -> const bool;
	#line 326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsImaginaryNumber($extension_Int128_316_i128 const& $this ) -> const bool;
	#line 327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsInfinity($extension_Int128_316_i128 const& $this ) -> const bool;
	#line 328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsInteger($extension_Int128_316_i128 const& $this ) -> const bool;
	#line 329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsNaN($extension_Int128_316_i128 const& $this ) -> const bool;
	#line 330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsNegative($extension_Int128_316_i128 const& $this ) -> const bool;
	#line 331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsNegativeInfinity($extension_Int128_316_i128 const& $this ) -> const bool;
	#line 332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsNormal($extension_Int128_316_i128 const& $this ) -> const bool;
	#line 333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsOddInteger($extension_Int128_316_i128 const& $this ) -> const bool;
	#line 334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsPositive($extension_Int128_316_i128 const& $this ) -> const bool;
	#line 335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsPositiveInfinity($extension_Int128_316_i128 const& $this ) -> const bool;
	#line 336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsRealNumber($extension_Int128_316_i128 const& $this ) -> const bool;
	#line 337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsSubnormal($extension_Int128_316_i128 const& $this ) -> const bool;
	#line 338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsZero($extension_Int128_316_i128 const& $this ) -> const bool;
	#line 316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int128_316_i128, INumberBase, INumberBase, $extension_Int128_316_i128);
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
#line 428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	using $extension_Int128_428_i128 = Builtin::i128;
	#line 428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE(ISignedNumber, ISignedNumber);
	#line 429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class __TT> struct $static_getMinusOne; template<> struct $static_getMinusOne<$extension_Int128_428_i128> { static inline constexpr auto get() -> const $extension_Int128_428_i128; };
	#line 428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int128_428_i128, ISignedNumber, ISignedNumber, $extension_Int128_428_i128);
	} namespace System{
using $extensions::$static_getMinusOne;

		} namespace $extensions { using namespace System;
#line 432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	using $extension_Int128_432_i128 = Builtin::i128;
	#line 432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE(INumber, INumber);
	#line 446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ASTRUMSTD_API auto CopySign($extension_Int128_432_i128 const& $this LIFETIMEBOUND, $extension_Int128_432_i128 sign)  -> const typename $extension_Int128_432_i128;
	#line 464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto Max($extension_Int128_432_i128 const& $this LIFETIMEBOUND, $extension_Int128_432_i128 rhs) noexcept -> const typename $extension_Int128_432_i128;
	#line 465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto MaxNumber($extension_Int128_432_i128 const& $this LIFETIMEBOUND, $extension_Int128_432_i128 rhs) noexcept -> const typename $extension_Int128_432_i128;
	#line 466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto Min($extension_Int128_432_i128 const& $this LIFETIMEBOUND, $extension_Int128_432_i128 rhs) noexcept -> const typename $extension_Int128_432_i128;
	#line 467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto MinNumber($extension_Int128_432_i128 const& $this LIFETIMEBOUND, $extension_Int128_432_i128 rhs) noexcept -> const typename $extension_Int128_432_i128;
	#line 468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto Clamp($extension_Int128_432_i128 const& $this LIFETIMEBOUND, $extension_Int128_432_i128 min, $extension_Int128_432_i128 max)  -> const typename $extension_Int128_432_i128;
	#line 433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getSign($extension_Int128_432_i128 const& $this ) -> const Builtin::i32;
	#line 432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int128_432_i128, INumber, INumber, $extension_Int128_432_i128);
	} namespace System{
using $extensions::CopySign;
using $extensions::Max;
using $extensions::MaxNumber;
using $extensions::Min;
using $extensions::MinNumber;
using $extensions::Clamp;
using $extensions::getSign;

		} namespace $extensions { using namespace System;
#line 482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	using $extension_Int128_482_i128 = Builtin::i128;
	#line 482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE(IBinaryNumber, IBinaryNumber);
	#line 560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto CheckedLog($extension_Int128_482_i128 const& $this LIFETIMEBOUND, $extension_Int128_482_i128 base) noexcept -> const Builtin::Nullable<$extension_Int128_482_i128>;
	#line 594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ASTRUMSTD_API auto Log($extension_Int128_482_i128 const& $this LIFETIMEBOUND, $extension_Int128_482_i128 base)  -> const typename $extension_Int128_482_i128;
	#line 604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto Midpoint($extension_Int128_482_i128 const& $this LIFETIMEBOUND, $extension_Int128_482_i128 rhs) noexcept -> const typename $extension_Int128_482_i128;
	#line 612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto IsMultipleOf($extension_Int128_482_i128 const& $this LIFETIMEBOUND, $extension_Int128_482_i128 rhs) noexcept -> const bool;
	#line 484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class __TT> struct $static_getAllBitsSet; template<> struct $static_getAllBitsSet<$extension_Int128_482_i128> { static inline constexpr auto get() -> const $extension_Int128_482_i128; };
	#line 487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsPow2($extension_Int128_482_i128 const& $this ) -> const bool;
	#line 491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getCheckedLog2($extension_Int128_482_i128 const& $this ) -> const Builtin::Nullable<$extension_Int128_482_i128>;
	#line 501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getLog2($extension_Int128_482_i128 const& $this ) -> const $extension_Int128_482_i128;
	#line 511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getCheckedLog10($extension_Int128_482_i128 const& $this ) -> const Builtin::Nullable<$extension_Int128_482_i128>;
	#line 550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getLog10($extension_Int128_482_i128 const& $this ) -> const $extension_Int128_482_i128;
	#line 482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int128_482_i128, IBinaryNumber, IBinaryNumber, $extension_Int128_482_i128);
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
#line 626 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	using $extension_Int128_626_i128 = Builtin::i128;
	#line 626 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE(ICheckedArithmetic, ICheckedArithmetic);
	#line 629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_add_qst($extension_Int128_626_i128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int128_626_i128>;
	#line 638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_add_qst_eq($extension_Int128_626_i128 & $this , T rhs) noexcept -> typename $extension_Int128_626_i128&;
	#line 649 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_add_ne($extension_Int128_626_i128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int128_626_i128;
	#line 656 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_add_ne_eq($extension_Int128_626_i128 & $this , T rhs)  -> typename $extension_Int128_626_i128&;
	#line 660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_add_mod($extension_Int128_626_i128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int128_626_i128;
	#line 667 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_add_mod_eq($extension_Int128_626_i128 & $this , T rhs) noexcept -> typename $extension_Int128_626_i128&;
	#line 671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_add_or($extension_Int128_626_i128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int128_626_i128;
	#line 678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_add_or_eq($extension_Int128_626_i128 & $this , T rhs) noexcept -> typename $extension_Int128_626_i128&;
	#line 682 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_add_mod_qst($extension_Int128_626_i128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Tuple<$extension_Int128_626_i128, bool>;
	#line 690 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_qst($extension_Int128_626_i128 & $this )  -> typename $extension_Int128_626_i128&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_qst_postfix($extension_Int128_626_i128 & $this)  -> decltype(auto);
	#line 693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_ne($extension_Int128_626_i128 & $this )  -> typename $extension_Int128_626_i128&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_ne_postfix($extension_Int128_626_i128 & $this)  -> decltype(auto);
	#line 696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_mod($extension_Int128_626_i128 & $this )  -> typename $extension_Int128_626_i128&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_mod_postfix($extension_Int128_626_i128 & $this)  -> decltype(auto);
	#line 699 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_or($extension_Int128_626_i128 & $this )  -> typename $extension_Int128_626_i128&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_or_postfix($extension_Int128_626_i128 & $this)  -> decltype(auto);
	#line 703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto CarryingAdd($extension_Int128_626_i128 const& $this LIFETIMEBOUND, $extension_Int128_626_i128 rhs, bool carry) noexcept -> const Builtin::Tuple<$extension_Int128_626_i128, bool>;
	#line 712 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto BorrowingSub($extension_Int128_626_i128 const& $this LIFETIMEBOUND, $extension_Int128_626_i128 rhs, bool carry) noexcept -> const Builtin::Tuple<$extension_Int128_626_i128, bool>;
	#line 721 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_sub_qst($extension_Int128_626_i128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int128_626_i128>;
	#line 730 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_sub_qst_eq($extension_Int128_626_i128 & $this , T rhs) noexcept -> typename $extension_Int128_626_i128&;
	#line 741 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_sub_ne($extension_Int128_626_i128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int128_626_i128;
	#line 748 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_sub_ne_eq($extension_Int128_626_i128 & $this , T rhs)  -> typename $extension_Int128_626_i128&;
	#line 752 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_sub_mod($extension_Int128_626_i128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int128_626_i128;
	#line 759 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_sub_mod_eq($extension_Int128_626_i128 & $this , T rhs) noexcept -> typename $extension_Int128_626_i128&;
	#line 763 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_sub_or($extension_Int128_626_i128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int128_626_i128;
	#line 770 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_sub_or_eq($extension_Int128_626_i128 & $this , T rhs) noexcept -> typename $extension_Int128_626_i128&;
	#line 774 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_sub_mod_qst($extension_Int128_626_i128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Tuple<$extension_Int128_626_i128, bool>;
	#line 782 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_qst($extension_Int128_626_i128 & $this )  -> typename $extension_Int128_626_i128&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_qst_postfix($extension_Int128_626_i128 & $this)  -> decltype(auto);
	#line 785 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_ne($extension_Int128_626_i128 & $this )  -> typename $extension_Int128_626_i128&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_ne_postfix($extension_Int128_626_i128 & $this)  -> decltype(auto);
	#line 788 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_mod($extension_Int128_626_i128 & $this )  -> typename $extension_Int128_626_i128&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_mod_postfix($extension_Int128_626_i128 & $this)  -> decltype(auto);
	#line 791 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_or($extension_Int128_626_i128 & $this )  -> typename $extension_Int128_626_i128&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_or_postfix($extension_Int128_626_i128 & $this)  -> decltype(auto);
	#line 795 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mul_qst($extension_Int128_626_i128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int128_626_i128>;
	#line 804 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mul_qst_eq($extension_Int128_626_i128 & $this , T rhs) noexcept -> typename $extension_Int128_626_i128&;
	#line 815 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mul_ne($extension_Int128_626_i128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int128_626_i128;
	#line 822 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mul_ne_eq($extension_Int128_626_i128 & $this , T rhs)  -> typename $extension_Int128_626_i128&;
	#line 826 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mul_mod($extension_Int128_626_i128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int128_626_i128;
	#line 833 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mul_mod_eq($extension_Int128_626_i128 & $this , T rhs) noexcept -> typename $extension_Int128_626_i128&;
	#line 837 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mul_or($extension_Int128_626_i128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int128_626_i128;
	#line 844 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mul_or_eq($extension_Int128_626_i128 & $this , T rhs) noexcept -> typename $extension_Int128_626_i128&;
	#line 848 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mul_mod_qst($extension_Int128_626_i128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Tuple<$extension_Int128_626_i128, bool>;
	#line 857 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline auto _operator_mul_gt($extension_Int128_626_i128 const& $this LIFETIMEBOUND, $extension_Int128_626_i128 rhs) noexcept -> const Builtin::Tuple<Builtin::u128, Builtin::i128>;
	#line 866 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline auto CarryingMul($extension_Int128_626_i128 const& $this LIFETIMEBOUND, $extension_Int128_626_i128 rhs, $extension_Int128_626_i128 carry) noexcept -> const Builtin::Tuple<Builtin::u128, Builtin::i128>;
	#line 874 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_qst($extension_Int128_626_i128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int128_626_i128>;
	#line 883 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_qst_eq($extension_Int128_626_i128 & $this , T rhs) noexcept -> typename $extension_Int128_626_i128&;
	#line 895 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_ne($extension_Int128_626_i128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int128_626_i128;
	#line 902 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_ne_eq($extension_Int128_626_i128 & $this , T rhs)  -> typename $extension_Int128_626_i128&;
	#line 907 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_mod($extension_Int128_626_i128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int128_626_i128;
	#line 914 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_eq($extension_Int128_626_i128 & $this , T rhs)  -> typename $extension_Int128_626_i128&;
	#line 919 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_or($extension_Int128_626_i128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int128_626_i128;
	#line 926 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_or_eq($extension_Int128_626_i128 & $this , T rhs)  -> typename $extension_Int128_626_i128&;
	#line 931 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_qst($extension_Int128_626_i128 const& $this LIFETIMEBOUND, T rhs)  -> const Builtin::Tuple<$extension_Int128_626_i128, bool>;
	#line 940 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst($extension_Int128_626_i128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int128_626_i128>;
	#line 950 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst_eq($extension_Int128_626_i128 & $this , T rhs) noexcept -> typename $extension_Int128_626_i128&;
	#line 961 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mod_qst($extension_Int128_626_i128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int128_626_i128>;
	#line 970 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mod_qst_eq($extension_Int128_626_i128 & $this , T rhs) noexcept -> typename $extension_Int128_626_i128&;
	#line 982 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mod_ne($extension_Int128_626_i128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int128_626_i128;
	#line 989 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mod_ne_eq($extension_Int128_626_i128 & $this , T rhs)  -> typename $extension_Int128_626_i128&;
	#line 994 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mod_mod($extension_Int128_626_i128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int128_626_i128;
	#line 1001 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mod_mod_eq($extension_Int128_626_i128 & $this , T rhs)  -> typename $extension_Int128_626_i128&;
	#line 1006 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mod_mod_qst($extension_Int128_626_i128 const& $this LIFETIMEBOUND, T rhs)  -> const Builtin::Tuple<$extension_Int128_626_i128, bool>;
	#line 1015 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_sub_qst($extension_Int128_626_i128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::Nullable<$extension_Int128_626_i128>;
	#line 1025 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_sub_ne($extension_Int128_626_i128 const& $this LIFETIMEBOUND)  -> const typename $extension_Int128_626_i128;
	#line 1032 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_sub_mod($extension_Int128_626_i128 const& $this LIFETIMEBOUND)  -> const typename $extension_Int128_626_i128;
	#line 1040 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_sub_or($extension_Int128_626_i128 const& $this LIFETIMEBOUND)  -> const typename $extension_Int128_626_i128;
	#line 1048 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_sub_mod_qst($extension_Int128_626_i128 const& $this LIFETIMEBOUND)  -> const Builtin::Tuple<$extension_Int128_626_i128, bool>;
	#line 1056 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_lt_lt_qst($extension_Int128_626_i128 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<$extension_Int128_626_i128>;
	#line 1064 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_lt_lt_qst_eq($extension_Int128_626_i128 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int128_626_i128&;
	#line 1072 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_lt_lt_ne($extension_Int128_626_i128 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_Int128_626_i128;
	#line 1080 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_lt_lt_ne_eq($extension_Int128_626_i128 & $this , Builtin::i32 amount)  -> typename $extension_Int128_626_i128&;
	#line 1082 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_lt_lt_mod($extension_Int128_626_i128 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename $extension_Int128_626_i128;
	#line 1085 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_lt_lt_mod_eq($extension_Int128_626_i128 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int128_626_i128&;
	#line 1087 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_lt_lt_mod_qst($extension_Int128_626_i128 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Tuple<$extension_Int128_626_i128, bool>;
	#line 1090 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_gt_gt_qst($extension_Int128_626_i128 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<$extension_Int128_626_i128>;
	#line 1098 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_gt_gt_qst_eq($extension_Int128_626_i128 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int128_626_i128&;
	#line 1106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_gt_gt_ne($extension_Int128_626_i128 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_Int128_626_i128;
	#line 1114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_gt_gt_ne_eq($extension_Int128_626_i128 & $this , Builtin::i32 amount)  -> typename $extension_Int128_626_i128&;
	#line 1116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_gt_gt_mod($extension_Int128_626_i128 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename $extension_Int128_626_i128;
	#line 1119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_gt_gt_mod_eq($extension_Int128_626_i128 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int128_626_i128&;
	#line 1121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_gt_gt_mod_qst($extension_Int128_626_i128 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Tuple<$extension_Int128_626_i128, bool>;
	#line 1126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor_qst($extension_Int128_626_i128 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const Builtin::Nullable<$extension_Int128_626_i128>;
	#line 1155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor_qst_eq($extension_Int128_626_i128 & $this , Builtin::u32 exp) noexcept -> typename $extension_Int128_626_i128&;
	#line 1163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor_ne($extension_Int128_626_i128 const& $this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename $extension_Int128_626_i128;
	#line 1184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor_ne_eq($extension_Int128_626_i128 & $this , Builtin::u32 exp)  -> typename $extension_Int128_626_i128&;
	#line 1186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor_mod($extension_Int128_626_i128 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename $extension_Int128_626_i128;
	#line 1218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor_mod_eq($extension_Int128_626_i128 & $this , Builtin::u32 exp) noexcept -> typename $extension_Int128_626_i128&;
	#line 1220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor_or($extension_Int128_626_i128 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename $extension_Int128_626_i128;
	#line 1229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor_or_eq($extension_Int128_626_i128 & $this , Builtin::u32 exp) noexcept -> typename $extension_Int128_626_i128&;
	#line 1231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor_mod_qst($extension_Int128_626_i128 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const Builtin::Tuple<$extension_Int128_626_i128, bool>;
	#line 1262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getCheckedAbs($extension_Int128_626_i128 const& $this ) -> const Builtin::Nullable<$extension_Int128_626_i128>;
	#line 1265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getStrictAbs($extension_Int128_626_i128 const& $this ) -> const $extension_Int128_626_i128;
	#line 1268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getWrappingAbs($extension_Int128_626_i128 const& $this ) -> const $extension_Int128_626_i128;
	#line 1271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getSaturatingAbs($extension_Int128_626_i128 const& $this ) -> const $extension_Int128_626_i128;
	#line 1274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getOverflowingAbs($extension_Int128_626_i128 const& $this ) -> const Builtin::Tuple<$extension_Int128_626_i128, bool>;
	#line 626 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int128_626_i128, ICheckedArithmetic, ICheckedArithmetic, $extension_Int128_626_i128);
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
#line 1283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	using $extension_Int128_1283_i128 = Builtin::i128;
	#line 1283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE(IBinaryInteger, IBinaryInteger);
	#line 1334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NextMultipleOf($extension_Int128_1283_i128 const& $this LIFETIMEBOUND, $extension_Int128_1283_i128 rhs)  -> const typename $extension_Int128_1283_i128;
	#line 1350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto CheckedNextMultipleOf($extension_Int128_1283_i128 const& $this LIFETIMEBOUND, $extension_Int128_1283_i128 rhs) noexcept -> const Builtin::Nullable<$extension_Int128_1283_i128>;
	#line 1284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class __TT> struct $static_getIsSigned; template<> struct $static_getIsSigned<$extension_Int128_1283_i128> { static inline constexpr auto get() -> const bool; };
	#line 1286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getTrailingZeroCount($extension_Int128_1283_i128 const& $this ) -> const Builtin::u32;
	#line 1293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getTrailingOneCount($extension_Int128_1283_i128 const& $this ) -> const Builtin::u32;
	#line 1294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getByteCount($extension_Int128_1283_i128 const& $this ) -> const Builtin::u32;
	#line 1295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getMinimalBitWidth($extension_Int128_1283_i128 const& $this ) -> const Builtin::u32;
	#line 1299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ASTRUMSTD_API auto getCheckedIsqrt($extension_Int128_1283_i128 const& $this ) -> const Builtin::Nullable<$extension_Int128_1283_i128>;
	#line 1311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline auto getIsqrt($extension_Int128_1283_i128 const& $this ) -> const $extension_Int128_1283_i128;
	#line 1320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getLog2Ceiling($extension_Int128_1283_i128 const& $this ) -> const $extension_Int128_1283_i128;
	#line 1371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getPrevPow2($extension_Int128_1283_i128 const& $this ) -> const $extension_Int128_1283_i128;
	#line 1382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getNextPow2($extension_Int128_1283_i128 const& $this ) -> const $extension_Int128_1283_i128;
	#line 1394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getCheckedNextPow2($extension_Int128_1283_i128 const& $this ) -> const Builtin::Nullable<$extension_Int128_1283_i128>;
	#line 1406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getWrappingNextPow2($extension_Int128_1283_i128 const& $this ) -> const $extension_Int128_1283_i128;
	#line 1283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int128_1283_i128, IBinaryInteger, IBinaryInteger, $extension_Int128_1283_i128);
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
#line 1417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	using $extension_Int128_1417_i128 = Builtin::i128;
	#line 1417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE(IFixedWidthInteger, IFixedWidthInteger);
	#line 1457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto RotateLeft($extension_Int128_1417_i128 const& $this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename $extension_Int128_1417_i128;
	#line 1458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto RotateRight($extension_Int128_1417_i128 const& $this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename $extension_Int128_1417_i128;
	#line 1418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class __TT> struct $static_getBitWidth; template<> struct $static_getBitWidth<$extension_Int128_1417_i128> { static inline constexpr auto get() -> const Builtin::u32; };
	#line 1420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getLeadingZeroCount($extension_Int128_1417_i128 const& $this ) -> const Builtin::u32;
	#line 1428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getLeadingOneCount($extension_Int128_1417_i128 const& $this ) -> const Builtin::u32;
	#line 1429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getPopCount($extension_Int128_1417_i128 const& $this ) -> const Builtin::u32;
	#line 1430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getZeroCount($extension_Int128_1417_i128 const& $this ) -> const Builtin::u32;
	#line 1431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getByteSwapped($extension_Int128_1417_i128 const& $this ) -> const $extension_Int128_1417_i128;
	#line 1432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getBigEndian($extension_Int128_1417_i128 const& $this ) -> const $extension_Int128_1417_i128;
	#line 1439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getLittleEndian($extension_Int128_1417_i128 const& $this ) -> const $extension_Int128_1417_i128;
	#line 1446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getReverseBits($extension_Int128_1417_i128 const& $this ) -> const $extension_Int128_1417_i128;
	#line 1448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getShortestBitLength($extension_Int128_1417_i128 const& $this ) -> const Builtin::u32;
	#line 1417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int128_1417_i128, IFixedWidthInteger, IFixedWidthInteger, $extension_Int128_1417_i128);
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
#line 1462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	using $extension_Int128_1462_i128 = Builtin::i128;
	#line 1462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE(IBinaryIntegerFormatInfo, IBinaryIntegerFormatInfo);
	#line 1470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto IsGreaterThanAsUnsigned($extension_Int128_1462_i128 const& $this LIFETIMEBOUND, $extension_Int128_1462_i128 rhs) noexcept -> const bool;
	#line 1463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class __TT> struct $static_getMaxDigitCount; template<> struct $static_getMaxDigitCount<$extension_Int128_1462_i128> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class __TT> struct $static_getMaxHexDigitCount; template<> struct $static_getMaxHexDigitCount<$extension_Int128_1462_i128> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class __TT> struct $static_getMaxValueDiv10; template<> struct $static_getMaxValueDiv10<$extension_Int128_1462_i128> { static inline constexpr auto get() -> const $extension_Int128_1462_i128; };
	#line 1467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getMultiplyBy10($extension_Int128_1462_i128 const& $this ) -> const $extension_Int128_1462_i128;
	#line 1468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getMultiplyBy16($extension_Int128_1462_i128 const& $this ) -> const $extension_Int128_1462_i128;
	#line 1462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int128_1462_i128, IBinaryIntegerFormatInfo, IBinaryIntegerFormatInfo, $extension_Int128_1462_i128);
	} namespace System{
using $extensions::IsGreaterThanAsUnsigned;
using $extensions::$static_getMaxDigitCount;
using $extensions::$static_getMaxHexDigitCount;
using $extensions::$static_getMaxValueDiv10;
using $extensions::getMultiplyBy10;
using $extensions::getMultiplyBy16;

	} namespace $extensions {
template<class __TT> struct $static_Low64;
template<class __TT> struct $static_getLow64;
template<class __TT> struct $static_WideningMul128;
template<class __TT> struct $static_getWideningMul128;
template<class __TT> struct $static_SaturatingSubtract;
template<class __TT> struct $static_getSaturatingSubtract;
template<class __TT> struct $static_DivExact;
template<class __TT> struct $static_getDivExact;
template<class __TT> struct $static_PopCount;
template<class __TT> struct $static_getPopCount;
template<class __TT> struct $static_High64;
template<class __TT> struct $static_getHigh64;
template<class __TT> struct $static_IsNegative;
template<class __TT> struct $static_getIsNegative;
template<class __TT> struct $static_IsPositive;
template<class __TT> struct $static_getIsPositive;
template<class __TT> struct $static_IsNormal;
template<class __TT> struct $static_getIsNormal;
template<class __TT> struct $static_SaturatingAdd;
template<class __TT> struct $static_getSaturatingAdd;
template<class __TT> struct $static_MinimalBitWidth;
template<class __TT> struct $static_getMinimalBitWidth;
template<class __TT> struct $static_MinusOne;
template<class __TT> struct $static_getMinusOne;
template<class __TT> struct $static_BitWidth;
template<class __TT> struct $static_getBitWidth;
template<class __TT> struct $static_AllBitsSet;
template<class __TT> struct $static_getAllBitsSet;
template<class __TT> struct $static_LeadingZeroCount;
template<class __TT> struct $static_getLeadingZeroCount;
template<class __TT> struct $static_CheckedLog2;
template<class __TT> struct $static_getCheckedLog2;
template<class __TT> struct $static_IsPositiveInfinity;
template<class __TT> struct $static_getIsPositiveInfinity;
template<class __TT> struct $static_InvalidOperationException;
template<class __TT> struct $static_getInvalidOperationException;
template<class __TT> struct $static_Max;
template<class __TT> struct $static_getMax;
template<class __TT> struct $static_DivAssign;
template<class __TT> struct $static_getDivAssign;
template<class __TT> struct $static_CheckedLog10;
template<class __TT> struct $static_getCheckedLog10;
template<class __TT> struct $static_SafeNegate;
template<class __TT> struct $static_getSafeNegate;
template<class __TT> struct $static_TrailingZeroCount;
template<class __TT> struct $static_getTrailingZeroCount;
template<class __TT> struct $static_Isqrt128;
template<class __TT> struct $static_getIsqrt128;
template<class __TT> struct $static_MaxValue;
template<class __TT> struct $static_getMaxValue;
template<class __TT> struct $static_CarryingMul128;
template<class __TT> struct $static_getCarryingMul128;
template<class __TT> struct $static_SaturatingMultiply;
template<class __TT> struct $static_getSaturatingMultiply;
template<class __TT> struct $static_CheckedIsqrt;
template<class __TT> struct $static_getCheckedIsqrt;
template<class __TT> struct $static_ByteSwapped;
template<class __TT> struct $static_getByteSwapped;
template<class __TT> struct $static_MaxMagnitude;
template<class __TT> struct $static_getMaxMagnitude;
template<class __TT> struct $static_Log2;
template<class __TT> struct $static_getLog2;
template<class __TT> struct $static_One;
template<class __TT> struct $static_getOne;
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
template<class __TT> struct $static_CarryingAdd;
template<class __TT> struct $static_getCarryingAdd;
template<class __TT> struct $static_ReverseBits64;
template<class __TT> struct $static_getReverseBits64;
template<class __TT> struct $static_LeadingOneCount;
template<class __TT> struct $static_getLeadingOneCount;
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
template<class __TT> struct $static_SafeSubtract;
template<class __TT> struct $static_getSafeSubtract;
template<class __TT> struct $static_IntegerOverflowException;
template<class __TT> struct $static_getIntegerOverflowException;
template<class __TT> struct $static_ToUInt8;
template<class __TT> struct $static_getToUInt8;
template<class __TT> struct $static_StrictSubtract;
template<class __TT> struct $static_getStrictSubtract;
template<class __TT> struct $static_Div;
template<class __TT> struct $static_getDiv;
template<class __TT> struct $static_MinMagnitude;
template<class __TT> struct $static_getMinMagnitude;
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
template<class __TT> struct $static_MultiplyBy10;
template<class __TT> struct $static_getMultiplyBy10;
template<class __TT> struct $static_WrappingSubtract;
template<class __TT> struct $static_getWrappingSubtract;
template<class __TT> struct $static_HashCode;
template<class __TT> struct $static_getHashCode;
template<class __TT> struct $static_SafeMultiply;
template<class __TT> struct $static_getSafeMultiply;
template<class __TT> struct $static_SafeDivide;
template<class __TT> struct $static_getSafeDivide;
template<class __TT> struct $static_StrictModulus;
template<class __TT> struct $static_getStrictModulus;
template<class __TT> struct $static_StrictDivide;
template<class __TT> struct $static_getStrictDivide;
template<class __TT> struct $static_WrappingDivide;
template<class __TT> struct $static_getWrappingDivide;
template<class __TT> struct $static_SaturatingDivide;
template<class __TT> struct $static_getSaturatingDivide;
template<class __TT> struct $static_SafeModulus;
template<class __TT> struct $static_getSafeModulus;
template<class __TT> struct $static_WrappingModulus;
template<class __TT> struct $static_getWrappingModulus;
template<class __TT> struct $static_StrictNegate;
template<class __TT> struct $static_getStrictNegate;
template<class __TT> struct $static_WrappingNegate;
template<class __TT> struct $static_getWrappingNegate;
template<class __TT> struct $static_SaturatingNegate;
template<class __TT> struct $static_getSaturatingNegate;
template<class __TT> struct $static_UncheckedShiftLeft;
template<class __TT> struct $static_getUncheckedShiftLeft;
template<class __TT> struct $static_UncheckedShiftRight;
template<class __TT> struct $static_getUncheckedShiftRight;
template<class __TT> struct $static_NarrowToUInt128;
template<class __TT> struct $static_getNarrowToUInt128;
template<class __TT> struct $static_ToInt32;
template<class __TT> struct $static_getToInt32;
template<class __TT> struct $static_NarrowToUInt64;
template<class __TT> struct $static_getNarrowToUInt64;
template<class __TT> struct $static_Abs;
template<class __TT> struct $static_getAbs;
template<class __TT> struct $static_CheckedAbs;
template<class __TT> struct $static_getCheckedAbs;
template<class __TT> struct $static_StrictAbs;
template<class __TT> struct $static_getStrictAbs;
template<class __TT> struct $static_WrappingAbs;
template<class __TT> struct $static_getWrappingAbs;
template<class __TT> struct $static_SaturatingAbs;
template<class __TT> struct $static_getSaturatingAbs;
template<class __TT> struct $static_OverflowingAbs;
template<class __TT> struct $static_getOverflowingAbs;
template<class __TT> struct $static_IsFinite;
template<class __TT> struct $static_getIsFinite;
template<class __TT> struct $static_IsInteger;
template<class __TT> struct $static_getIsInteger;
template<class __TT> struct $static_IsCanonical;
template<class __TT> struct $static_getIsCanonical;
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
#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto $static_getMinValue<$extension_Int128_16_i128>::get() -> const $extension_Int128_16_i128
	{
		#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(INT128_MIN); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto $static_getMaxValue<$extension_Int128_16_i128>::get() -> const $extension_Int128_16_i128
	{
		#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(+Builtin::ParseInt128("170141183460469231731687303715884105727")); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	
} namespace $extensions { using namespace System;
#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto operator<=>($extension_Int128_21_i128 const& $this LIFETIMEBOUND, Builtin::Nullable<$extension_Int128_21_i128> rhs) noexcept -> const Builtin::i32
	{
		#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		{
			#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			if ((!Builtin::Is(rhs, nullptr))) {
				#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				auto __tmp0 = *rhs; const auto& rhs = __tmp0;
				
				#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				return $this <=> rhs;
			}
		}
		#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return Builtin::i32(1);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_gt_gt_gt($extension_Int128_21_i128 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_Int128_21_i128
	{
		#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i128>(UnsafeCast<Builtin::u128>($this) >> amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_gt_gt_gt_eq($extension_Int128_21_i128 & $this , Builtin::i32 amount)  -> typename $extension_Int128_21_i128&
	{
		#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_gt_gt_gt)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_lt_lt_bsl($extension_Int128_21_i128 const& $this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename $extension_Int128_21_i128
	{
		#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((amount <=> ADV_USPCS(BitWidth, $extension_Int128_21_i128)()) >= 0) {
			#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return Builtin::i32(0);
		}
		#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return $this << amount;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_lt_lt_bsl_eq($extension_Int128_21_i128 & $this , Builtin::u32 amount) noexcept -> typename $extension_Int128_21_i128&
	{
		#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_lt_lt_bsl)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_gt_gt_bsl($extension_Int128_21_i128 const& $this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename $extension_Int128_21_i128
	{
		#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((amount <=> ADV_USPCS(BitWidth, $extension_Int128_21_i128)()) >= 0) {
			#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return ADV_UPCS(IsPositive)($this.$ref()) ? Builtin::i32(0) : Builtin::i32(-1);
		}
		#line 62 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return $this >> amount;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_gt_gt_bsl_eq($extension_Int128_21_i128 & $this , Builtin::u32 amount) noexcept -> typename $extension_Int128_21_i128&
	{
		#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_gt_gt_bsl)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getHashCode($extension_Int128_21_i128 const & $this ) -> const Builtin::u64
	{
		#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		auto finalize = [&] (Builtin::u64 input) 
		{
			#line 71 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			input ^= input >> Builtin::i32(30);
			#line 72 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_UFCS(_operator_mul_mod_eq)(input, Builtin::u64(0xbf58476d1ce4e5b9ULL));
			#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			input ^= input >> Builtin::i32(27);
			#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_UFCS(_operator_mul_mod_eq)(input, Builtin::u64(0x94d049bb133111ebULL));
			#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			input ^= input >> Builtin::i32(31);
			#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return input;
		}; 
		#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		const Builtin::Auto<decltype(finalize(ADV_UFCS(Low64)($this.$ref())))> lowHash = finalize(ADV_UFCS(Low64)($this.$ref())); 
		#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		const Builtin::Auto<decltype(finalize(UnsafeCast<Builtin::u64>(ADV_UFCS(High64)($this.$ref()))))> highHash = finalize(UnsafeCast<Builtin::u64>(ADV_UFCS(High64)($this.$ref()))); 
		#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return lowHash ^ (ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_add_mod)(highHash, Builtin::u32(0x9e3779b9U)), (lowHash << Builtin::i32(6))), (lowHash >> Builtin::i32(2))));
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	
} namespace $extensions { using namespace System;
#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToBoolean($extension_Int128_105_i128 const& $this LIFETIMEBOUND) noexcept -> const bool
	{
		#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this != Builtin::i32(0)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToInt8($extension_Int128_105_i128 const& $this LIFETIMEBOUND)  -> const Builtin::i8
	{
		#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (($this <=> ADV_USPCS(MaxValue, Builtin::i8)()) > 0 || ($this <=> ADV_USPCS(MinValue, Builtin::i8)()) < 0) {
			#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return Builtin::Cast<true, Builtin::i8>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToUInt8($extension_Int128_105_i128 const& $this LIFETIMEBOUND)  -> const Builtin::u8
	{
		#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (($this <=> Builtin::i32(0)) < 0 || ($this <=> ADV_USPCS(MaxValue, Builtin::u8)()) > 0) {
			#line 115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return Builtin::Cast<true, Builtin::u8>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToInt16($extension_Int128_105_i128 const& $this LIFETIMEBOUND)  -> const Builtin::i16
	{
		#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (($this <=> ADV_USPCS(MaxValue, Builtin::i16)()) > 0 || ($this <=> ADV_USPCS(MinValue, Builtin::i16)()) < 0) {
			#line 121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return Builtin::Cast<true, Builtin::i16>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToUInt16($extension_Int128_105_i128 const& $this LIFETIMEBOUND)  -> const Builtin::u16
	{
		#line 126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (($this <=> Builtin::i32(0)) < 0 || ($this <=> ADV_USPCS(MaxValue, Builtin::u16)()) > 0) {
			#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return Builtin::Cast<true, Builtin::u16>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToInt32($extension_Int128_105_i128 const& $this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (($this <=> ADV_USPCS(MaxValue, Builtin::i32)()) > 0 || ($this <=> ADV_USPCS(MinValue, Builtin::i32)()) < 0) {
			#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return Builtin::Cast<true, Builtin::i32>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToUInt32($extension_Int128_105_i128 const& $this LIFETIMEBOUND)  -> const Builtin::u32
	{
		#line 138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (($this <=> Builtin::i32(0)) < 0 || ($this <=> ADV_USPCS(MaxValue, Builtin::u32)()) > 0) {
			#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return Builtin::Cast<true, Builtin::u32>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToInt64($extension_Int128_105_i128 const& $this LIFETIMEBOUND)  -> const Builtin::i64
	{
		#line 144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (($this <=> ADV_USPCS(MaxValue, Builtin::i64)()) > 0 || ($this <=> ADV_USPCS(MinValue, Builtin::i64)()) < 0) {
			#line 145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return Builtin::Cast<true, Builtin::i64>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToUInt64($extension_Int128_105_i128 const& $this LIFETIMEBOUND)  -> const Builtin::u64
	{
		#line 150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (($this <=> Builtin::i32(0)) < 0 || ($this <=> ADV_USPCS(MaxValue, Builtin::u64)()) > 0) {
			#line 151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return Builtin::Cast<true, Builtin::u64>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToInt128($extension_Int128_105_i128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i128
	{
		#line 155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToUInt128($extension_Int128_105_i128 const& $this LIFETIMEBOUND)  -> const Builtin::u128
	{
		#line 157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (($this <=> Builtin::i32(0)) < 0) {
			#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return Builtin::Cast<true, Builtin::u128>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToIsize($extension_Int128_105_i128 const& $this LIFETIMEBOUND)  -> const Builtin::isize
	{
		#line 163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (($this <=> ADV_USPCS(MinValue, Builtin::i64)()) < 0 || ($this <=> ADV_USPCS(MaxValue, Builtin::i64)()) > 0) {
			#line 164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if constexpr ((Builtin::usize(sizeof(Builtin::isize)) <=> Builtin::i32(64)) < 0) {
			#line 167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			if (($this <=> ADV_USPCS(MinValue, Builtin::i32)()) < 0 || ($this <=> ADV_USPCS(MaxValue, Builtin::i32)()) > 0) {
				#line 168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				Builtin::Throw(Builtin::IntegerOverflowException{});
			}
		}
		#line 171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return Builtin::Cast<true, Builtin::isize>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToUsize($extension_Int128_105_i128 const& $this LIFETIMEBOUND)  -> const Builtin::usize
	{
		#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (($this <=> Builtin::i32(0)) < 0 || ($this <=> ADV_USPCS(MaxValue, Builtin::u64)()) > 0) {
			#line 175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if constexpr ((Builtin::usize(sizeof(Builtin::usize)) <=> Builtin::i32(64)) < 0) {
			#line 178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			if (($this <=> ADV_USPCS(MaxValue, Builtin::u32)()) > 0) {
				#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				Builtin::Throw(Builtin::IntegerOverflowException{});
			}
		}
		#line 182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return Builtin::Cast<true, Builtin::usize>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToFloat32($extension_Int128_105_i128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::f32
	{
		#line 184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToFloat64($extension_Int128_105_i128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::f64
	{
		#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToByte($extension_Int128_105_i128 const& $this LIFETIMEBOUND)  -> const Builtin::u8
	{
		#line 186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(ToUInt8)($this.$ref())); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToChar($extension_Int128_105_i128 const& $this LIFETIMEBOUND)  -> const Builtin::char32
	{
		#line 189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (($this <=> Builtin::i32(0)) < 0 || ($this <=> Builtin::i32(0x10FFFF)) > 0) {
			#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return Builtin::char32{Builtin::Cast<true, Builtin::u32>($this)};
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	
} namespace $extensions { using namespace System;
#line 200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_div_mod($extension_Int128_198_i128 const& $this LIFETIMEBOUND, T rhs)  -> const Builtin::Tuple<$extension_Int128_198_i128, $extension_Int128_198_i128>
	{
		#line 203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return Builtin::MakeTuple(ADV_UFCS(_operator_bsl)($this, rhs), $this % rhs);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_div_not($extension_Int128_198_i128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int128_198_i128
	{
		#line 208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Auto<decltype($this)> result = $this; 
		#line 209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		result /= rhs;
		#line 210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_div_not_eq($extension_Int128_198_i128 & $this , auto rhs)  -> typename $extension_Int128_198_i128&
	{
		#line 213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this /= rhs); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_div_lt($extension_Int128_198_i128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int128_198_i128
	{
		#line 217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if constexpr (Builtin::TypeIs<T, IBinaryInteger>()) {
			#line 218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			const auto& [div, rem] = ADV_UFCS(_operator_div_mod)($this, rhs);
			#line 219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			if (rem == Builtin::i32(0)) {
				#line 220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				return div;
			}
			#line 222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			Builtin::Auto<decltype(($this ^ rhs) >> (ADV_USPCS(BitWidth, $extension_Int128_198_i128)() - Builtin::i32(1)))> correction = ($this ^ rhs) >> (ADV_USPCS(BitWidth, $extension_Int128_198_i128)() - Builtin::i32(1)); 
			#line 223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return div + correction;
		} else {
			#line 224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			{
				#line 225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				return Builtin::Cast<true, $extension_Int128_198_i128>((ADV_UFCS(_operator_div_lt)(Builtin::f64{$this}, rhs)));
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_div_lt_eq($extension_Int128_198_i128 & $this , auto rhs)  -> typename $extension_Int128_198_i128&
	{
		#line 229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this = $extension_Int128_198_i128{ADV_UFCS(_operator_div_lt)($this, rhs)}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mod_lt($extension_Int128_198_i128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int128_198_i128
	{
		#line 233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		const Builtin::Auto<decltype($this % rhs)> result = $this % rhs; 
		#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_gt_gt_gt)((result ^ rhs), Builtin::i32{ADV_USPCS(BitWidth, $extension_Int128_198_i128)() - Builtin::i32(1)}))> signDiff = ADV_UFCS(_operator_gt_gt_gt)((result ^ rhs), Builtin::i32{ADV_USPCS(BitWidth, $extension_Int128_198_i128)() - Builtin::i32(1)}); 
		#line 235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		const Builtin::Auto<decltype((result != Builtin::i32(0)) & (signDiff != Builtin::i32(0)))> needAdjust = (result != Builtin::i32(0)) & (signDiff != Builtin::i32(0)); 
		#line 236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result + (needAdjust ? rhs : T{});
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_mod_lt_eq($extension_Int128_198_i128 & $this , auto rhs)  -> typename $extension_Int128_198_i128&
	{
		#line 239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this = $extension_Int128_198_i128{ADV_UFCS(_operator_mod_lt)($this, rhs)}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_div_gt($extension_Int128_198_i128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int128_198_i128
	{
		#line 243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if constexpr (Builtin::TypeIs<T, IBinaryInteger>()) {
			#line 244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			const auto& [div, rem] = ADV_UFCS(_operator_div_mod)($this, rhs);
			#line 245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			if (rem == Builtin::i32(0)) {
				#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				return div;
			}
			#line 248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			Builtin::Auto<decltype(Builtin::i32(1) + (($this ^ rhs) >> (ADV_USPCS(BitWidth, $extension_Int128_198_i128)() - Builtin::i32(1))))> correction = Builtin::i32(1) + (($this ^ rhs) >> (ADV_USPCS(BitWidth, $extension_Int128_198_i128)() - Builtin::i32(1))); 
			#line 249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return div + correction;
		} else {
			#line 250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			{
				#line 251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				return Builtin::Cast<true, $extension_Int128_198_i128>((ADV_UFCS(_operator_div_gt)(Builtin::f64{$this}, rhs)));
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_div_gt_eq($extension_Int128_198_i128 & $this , auto rhs)  -> typename $extension_Int128_198_i128&
	{
		#line 255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this = $extension_Int128_198_i128{ADV_UFCS(_operator_div_gt)($this, rhs)}); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	
} namespace $extensions { using namespace System;
#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl($extension_Int128_258_i128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int128_258_i128
	{
		#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Div)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_eq($extension_Int128_258_i128 & $this , T rhs)  -> typename $extension_Int128_258_i128&
	{
		#line 262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(DivAssign)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl($extension_Int128_258_i128 const& $this LIFETIMEBOUND, T rhs)  -> const Builtin::Nullable<$extension_Int128_258_i128>
	{
		#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_258_i128 result{}; 
		#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (Builtin::DivExact($this, rhs, result)) {
			#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return result;
		}
		#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return nullptr;
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	
} namespace $extensions { using namespace System;
#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor($extension_Int128_278_i128 const& $this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename $extension_Int128_278_i128
	{
		#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return Builtin::i32(1);
		}
		#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Auto<decltype(Builtin::i128(1LL))> result = Builtin::i128(1LL); 
		#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (std::is_constant_evaluated()) {
			#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			while ((exp <=> Builtin::i32(1)) > 0) 
			{
				#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
					#line 294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
					result *= base;
				}
				#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
				#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				base *= base;
			}
			#line 299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return result * base;
		} else {
			#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			{
				#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				for (;;) 
				{
					#line 302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
					if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
						#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
						result *= base;
						#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
						if (exp == Builtin::i32(1)) {
							#line 305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
							return result;
						}
					}
					#line 307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
					ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
					#line 308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
					base *= base;
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor_eq($extension_Int128_278_i128 & $this , Builtin::u32 exp)  -> typename $extension_Int128_278_i128&
	{
		#line 313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_xor_xor)($this, exp)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	
} namespace $extensions { using namespace System;
#line 369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline auto MaxMagnitudeNumber($extension_Int128_316_i128 const& $this LIFETIMEBOUND, $extension_Int128_316_i128 rhs)  -> const typename $extension_Int128_316_i128
	{
		#line 369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(MaxMagnitude)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline auto MinMagnitudeNumber($extension_Int128_316_i128 const& $this LIFETIMEBOUND, $extension_Int128_316_i128 rhs)  -> const typename $extension_Int128_316_i128
	{
		#line 400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(MinMagnitude)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToInt8($extension_Int128_316_i128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i8
	{
		#line 414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i8>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToUInt8($extension_Int128_316_i128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u8
	{
		#line 415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u8>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToInt16($extension_Int128_316_i128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i16
	{
		#line 416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i16>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToUInt16($extension_Int128_316_i128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u16
	{
		#line 417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u16>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToInt32($extension_Int128_316_i128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i32
	{
		#line 418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i32>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToUInt32($extension_Int128_316_i128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u32
	{
		#line 419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u32>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToInt64($extension_Int128_316_i128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i64
	{
		#line 420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i64>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToUInt64($extension_Int128_316_i128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u64
	{
		#line 421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u64>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToInt128($extension_Int128_316_i128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i128
	{
		#line 422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToUInt128($extension_Int128_316_i128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u128
	{
		#line 423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u128>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToIsize($extension_Int128_316_i128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::isize
	{
		#line 424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::isize>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToUsize($extension_Int128_316_i128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::usize
	{
		#line 425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::usize>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto $static_getOne<$extension_Int128_316_i128>::get() -> const $extension_Int128_316_i128
	{
		#line 317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::i128(1LL)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto $static_getZero<$extension_Int128_316_i128>::get() -> const $extension_Int128_316_i128
	{
		#line 318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::i128(0LL)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto $static_getRadix<$extension_Int128_316_i128>::get() -> const Builtin::i32
	{
		#line 319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(2)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getAbs($extension_Int128_316_i128 const & $this ) -> const $extension_Int128_316_i128
	{
		#line 321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)($this.$ref()) ? -$this : $this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsCanonical($extension_Int128_316_i128 const & $this ) -> const bool
	{
		#line 322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsComplexNumber($extension_Int128_316_i128 const & $this ) -> const bool
	{
		#line 323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsEvenInteger($extension_Int128_316_i128 const & $this ) -> const bool
	{
		#line 324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY((ADV_UFCS(Low64)($this.$ref()) & Builtin::u32(1U)) == Builtin::i32(0)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsFinite($extension_Int128_316_i128 const & $this ) -> const bool
	{
		#line 325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsImaginaryNumber($extension_Int128_316_i128 const & $this ) -> const bool
	{
		#line 326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsInfinity($extension_Int128_316_i128 const & $this ) -> const bool
	{
		#line 327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsInteger($extension_Int128_316_i128 const & $this ) -> const bool
	{
		#line 328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsNaN($extension_Int128_316_i128 const & $this ) -> const bool
	{
		#line 329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsNegative($extension_Int128_316_i128 const & $this ) -> const bool
	{
		#line 330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY((ADV_UFCS(High64)($this.$ref()) <=> Builtin::i32(0)) < 0); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsNegativeInfinity($extension_Int128_316_i128 const & $this ) -> const bool
	{
		#line 331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsNormal($extension_Int128_316_i128 const & $this ) -> const bool
	{
		#line 332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this != Builtin::i32(0)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsOddInteger($extension_Int128_316_i128 const & $this ) -> const bool
	{
		#line 333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY((ADV_UFCS(Low64)($this.$ref()) & Builtin::u32(1U)) != Builtin::i32(0)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsPositive($extension_Int128_316_i128 const & $this ) -> const bool
	{
		#line 334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY((ADV_UFCS(High64)($this.$ref()) <=> Builtin::i32(0)) >= 0); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsPositiveInfinity($extension_Int128_316_i128 const & $this ) -> const bool
	{
		#line 335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsRealNumber($extension_Int128_316_i128 const & $this ) -> const bool
	{
		#line 336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsSubnormal($extension_Int128_316_i128 const & $this ) -> const bool
	{
		#line 337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsZero($extension_Int128_316_i128 const & $this ) -> const bool
	{
		#line 338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this == Builtin::i32(0)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	
} namespace $extensions { using namespace System;
#line 429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto $static_getMinusOne<$extension_Int128_428_i128>::get() -> const $extension_Int128_428_i128
	{
		#line 429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::i128(-1LL)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	
} namespace $extensions { using namespace System;
#line 464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto Max($extension_Int128_432_i128 const& $this LIFETIMEBOUND, $extension_Int128_432_i128 rhs) noexcept -> const typename $extension_Int128_432_i128
	{
		#line 464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY((($this <=> rhs) >= 0) ? $this : rhs); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto MaxNumber($extension_Int128_432_i128 const& $this LIFETIMEBOUND, $extension_Int128_432_i128 rhs) noexcept -> const typename $extension_Int128_432_i128
	{
		#line 465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Max)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto Min($extension_Int128_432_i128 const& $this LIFETIMEBOUND, $extension_Int128_432_i128 rhs) noexcept -> const typename $extension_Int128_432_i128
	{
		#line 466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY((($this <=> rhs) <= 0) ? $this : rhs); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto MinNumber($extension_Int128_432_i128 const& $this LIFETIMEBOUND, $extension_Int128_432_i128 rhs) noexcept -> const typename $extension_Int128_432_i128
	{
		#line 467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Min)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto Clamp($extension_Int128_432_i128 const& $this LIFETIMEBOUND, $extension_Int128_432_i128 min, $extension_Int128_432_i128 max)  -> const typename $extension_Int128_432_i128
	{
		#line 470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((min <=> max) > 0) {
			#line 471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			Builtin::Throw(Builtin::InvalidOperationException{});
		}
		#line 474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Auto<decltype($this)> result = $this; 
		#line 475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		result = ADV_UFCS(Max)(result.$ref(), min);
		#line 476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		result = ADV_UFCS(Min)(result.$ref(), max);
		#line 478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getSign($extension_Int128_432_i128 const & $this ) -> const Builtin::i32
	{
		#line 435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (ADV_UPCS(IsNegative)($this.$ref())) {
			#line 436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return Builtin::i32(-1);
		}
		#line 439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (ADV_UPCS(IsNormal)($this.$ref())) {
			#line 440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return Builtin::i32(1);
		}
		#line 443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return Builtin::i32(0);
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	
} namespace $extensions { using namespace System;
#line 560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto CheckedLog($extension_Int128_482_i128 const& $this LIFETIMEBOUND, $extension_Int128_482_i128 base) noexcept -> const Builtin::Nullable<$extension_Int128_482_i128>
	{
		#line 562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (($this <=> Builtin::i32(0)) <= 0 || (base <=> Builtin::i32(1)) <= 0) {
			#line 563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return nullptr;
		}
		#line 566 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (std::is_constant_evaluated()) {
			#line 567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			if (base == Builtin::i32(2)) {
				#line 568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				return ADV_UPCS(CheckedLog2)($this.$ref());
			}
			#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			if (base == Builtin::i32(10)) {
				#line 571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				return ADV_UPCS(CheckedLog10)($this.$ref());
			}
		}
		#line 575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (($this <=> base) < 0) {
			#line 576 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return Builtin::i32(0);
		}
		#line 579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Auto<decltype(ADV_UFCS(_operator_bsl)(ADV_UPCS(Log2)($this.$ref()), (ADV_UPCS(Log2)(base.$ref()) + Builtin::i32(1))))> n = ADV_UFCS(_operator_bsl)(ADV_UPCS(Log2)($this.$ref()), (ADV_UPCS(Log2)(base.$ref()) + Builtin::i32(1))); 
		#line 580 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Auto<decltype(ADV_UFCS(_operator_xor_xor)(base, (Builtin::Cast<true, Builtin::u32>(n))))> r = ADV_UFCS(_operator_xor_xor)(base, (Builtin::Cast<true, Builtin::u32>(n))); 
		#line 582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_bsl)($this, base))> baseRatio = ADV_UFCS(_operator_bsl)($this, base); 
		#line 583 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		while ((r <=> baseRatio) <= 0) 
		{
			#line 584 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			++n;
			#line 585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			r *= base;
		}
		#line 588 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return n;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto Midpoint($extension_Int128_482_i128 const& $this LIFETIMEBOUND, $extension_Int128_482_i128 rhs) noexcept -> const typename $extension_Int128_482_i128
	{
		#line 606 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		const Builtin::Auto<decltype((($this ^ rhs) >> Builtin::i32(1)) + ($this & rhs))> result = (($this ^ rhs) >> Builtin::i32(1)) + ($this & rhs); 
		#line 607 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		const Builtin::Auto<decltype((result <=> Builtin::i32(0)) < 0)> correction = (result <=> Builtin::i32(0)) < 0; 
		#line 608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result + ((Builtin::Cast<true, $extension_Int128_482_i128>(correction)) & ($this ^ rhs));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto IsMultipleOf($extension_Int128_482_i128 const& $this LIFETIMEBOUND, $extension_Int128_482_i128 rhs) noexcept -> const bool
	{
		#line 614 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (rhs == Builtin::i32(0)) {
			#line 615 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return $this == Builtin::i32(0);
		}
		#line 618 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (rhs == Builtin::i32(-1)) {
			#line 619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return Builtin::Boolean(true);
		}
		#line 622 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return $this % rhs == Builtin::i32(0);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto $static_getAllBitsSet<$extension_Int128_482_i128>::get() -> const $extension_Int128_482_i128
	{
		#line 484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(MinusOne, Builtin::i128)()); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsPow2($extension_Int128_482_i128 const & $this ) -> const bool
	{
		#line 487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsPositive)($this.$ref()) && ADV_UPCS(PopCount)($this.$ref()) == Builtin::i32(1)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getCheckedLog2($extension_Int128_482_i128 const & $this ) -> const Builtin::Nullable<$extension_Int128_482_i128>
	{
		#line 493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (($this <=> Builtin::i32(0)) <= 0) {
			#line 494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return nullptr;
		}
		#line 497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return Builtin::Cast<true, $extension_Int128_482_i128>((ADV_USPCS(BitWidth, $extension_Int128_482_i128)() - Builtin::i32(1) - ADV_UPCS(LeadingZeroCount)($this.$ref())));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getLog2($extension_Int128_482_i128 const & $this ) -> const $extension_Int128_482_i128
	{
		#line 503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (const auto result = ADV_UPCS(CheckedLog2)($this.$ref())) {
			{
				#line 503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				return result;
			}
		}
		#line 506 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getCheckedLog10($extension_Int128_482_i128 const & $this ) -> const Builtin::Nullable<$extension_Int128_482_i128>
	{
		#line 513 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (($this <=> Builtin::i32(0)) <= 0) {
			#line 514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return nullptr;
		}
		#line 517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		constexpr Builtin::u32 C1 = Builtin::u32(0b01100000000000000000U) - Builtin::i32(10);
		#line 518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		constexpr Builtin::u32 C2 = Builtin::u32(0b10000000000000000000U) - Builtin::i32(100);
		#line 519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		constexpr Builtin::u32 C3 = Builtin::u32(0b11100000000000000000U) - Builtin::i32(1000);
		#line 520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		constexpr Builtin::u32 C4 = Builtin::u32(0b10000000000000000000U) - Builtin::i32(10000);
		#line 521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Auto<decltype(Builtin::i32(0))> log = Builtin::i32(0); 
		#line 522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Auto<decltype(Builtin::Cast<true, Builtin::u128>($this))> val1 = Builtin::Cast<true, Builtin::u128>($this); 
		#line 523 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((val1 <=> Builtin::ParseInt128("100000000000000000000000000000000")) >= 0) {
			#line 524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_UFCS(DivAssign)(val1.$ref(), Builtin::ParseUInt128("100000000000000000000000000000000"));
			#line 525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			log += Builtin::i32(32);
			#line 526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			if ((val1 <=> Builtin::i32(100000)) >= 0) {
				#line 527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				ADV_UFCS(DivAssign)(val1.$ref(), Builtin::u32(100000U));
				#line 528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				log += Builtin::i32(5);
			}
			#line 530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::u32>(val1))> val = Builtin::Cast<true, Builtin::u32>(val1); 
			#line 531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return log + ((((val + C1) & (val + C2)) ^ ((val + C3) & (val + C4))) >> Builtin::i32(17));
		}
		#line 533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((val1 <=> Builtin::i64(10000000000000000LL)) >= 0) {
			#line 534 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_UFCS(DivAssign)(val1.$ref(), Builtin::u64(10000000000000000ULL));
			#line 535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			log += Builtin::i32(16);
		}
		#line 537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((val1 <=> Builtin::i64(10000000000LL)) >= 0) {
			#line 538 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_UFCS(DivAssign)(val1.$ref(), Builtin::u64(10000000000ULL));
			#line 539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			log += Builtin::i32(10);
		}
		#line 541 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((val1 <=> Builtin::i32(100000)) >= 0) {
			#line 542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_UFCS(DivAssign)(val1.$ref(), Builtin::u32(100000U));
			#line 543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			log += Builtin::i32(5);
		}
		#line 545 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::u32>(val1))> val = Builtin::Cast<true, Builtin::u32>(val1); 
		#line 546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return log + ((((val + C1) & (val + C2)) ^ ((val + C3) & (val + C4))) >> Builtin::i32(17));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getLog10($extension_Int128_482_i128 const & $this ) -> const $extension_Int128_482_i128
	{
		#line 552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (const auto result = ADV_UPCS(CheckedLog10)($this.$ref())) {
			{
				#line 552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				return result;
			}
		}
		#line 555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	
} namespace $extensions { using namespace System;
#line 629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_add_qst($extension_Int128_626_i128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int128_626_i128>
	{
		#line 631 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +? implemented only for integer types");
		#line 632 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_626_i128 result{}; 
		#line 633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (Builtin::SafeAdd($this, rhs, result)) {
			#line 634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return result;
		}
		#line 636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_add_qst_eq($extension_Int128_626_i128 & $this , T rhs) noexcept -> typename $extension_Int128_626_i128&
	{
		#line 640 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +?= implemented only for integer types");
		#line 641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (const auto result = ADV_UFCS(_operator_add_qst)($this, rhs)) {
			{
				#line 641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				$this = result;
			}
		}
		#line 644 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 649 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_add_ne($extension_Int128_626_i128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int128_626_i128
	{
		#line 651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +! implemented only for integer types");
		#line 652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_626_i128 result{}; 
		#line 653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::StrictAdd($this, rhs, result);
		#line 654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 656 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_add_ne_eq($extension_Int128_626_i128 & $this , T rhs)  -> typename $extension_Int128_626_i128&
	{
		#line 656 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_add_ne)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_add_mod($extension_Int128_626_i128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int128_626_i128
	{
		#line 662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +% implemented only for integer types");
		#line 663 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_626_i128 result{}; 
		#line 664 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::WrappingAdd($this, rhs, result);
		#line 665 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 667 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_add_mod_eq($extension_Int128_626_i128 & $this , T rhs) noexcept -> typename $extension_Int128_626_i128&
	{
		#line 667 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_add_mod)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_add_or($extension_Int128_626_i128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int128_626_i128
	{
		#line 673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +| implemented only for integer types");
		#line 674 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_626_i128 result{}; 
		#line 675 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::SaturatingAdd($this, rhs, result);
		#line 676 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_add_or_eq($extension_Int128_626_i128 & $this , T rhs) noexcept -> typename $extension_Int128_626_i128&
	{
		#line 678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_add_or)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 682 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_add_mod_qst($extension_Int128_626_i128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Tuple<$extension_Int128_626_i128, bool>
	{
		#line 683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +%? implemented only for integer types");
		#line 684 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_626_i128 result{}; 
		#line 685 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Auto<decltype(!Builtin::SafeAdd($this, rhs, result))> overflowed = !Builtin::SafeAdd($this, rhs, result); 
		#line 686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return Builtin::MakeTuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 690 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_add_add_qst($extension_Int128_626_i128 & $this )  -> typename $extension_Int128_626_i128&
	{
		#line 690 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_qst_eq)($this, Builtin::i128(1LL))); 
	}
	inline constexpr auto _operator_add_add_qst_postfix($extension_Int128_626_i128 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_add_add_qst)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_add_add_ne($extension_Int128_626_i128 & $this )  -> typename $extension_Int128_626_i128&
	{
		#line 693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_ne_eq)($this, Builtin::i128(1LL))); 
	}
	inline constexpr auto _operator_add_add_ne_postfix($extension_Int128_626_i128 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_add_add_ne)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_add_add_mod($extension_Int128_626_i128 & $this )  -> typename $extension_Int128_626_i128&
	{
		#line 696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_mod_eq)($this, Builtin::i128(1LL))); 
	}
	inline constexpr auto _operator_add_add_mod_postfix($extension_Int128_626_i128 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_add_add_mod)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 699 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_add_add_or($extension_Int128_626_i128 & $this )  -> typename $extension_Int128_626_i128&
	{
		#line 699 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_or_eq)($this, Builtin::i128(1LL))); 
	}
	inline constexpr auto _operator_add_add_or_postfix($extension_Int128_626_i128 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_add_add_or)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto CarryingAdd($extension_Int128_626_i128 const& $this LIFETIMEBOUND, $extension_Int128_626_i128 rhs, bool carry) noexcept -> const Builtin::Tuple<$extension_Int128_626_i128, bool>
	{
		#line 705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_626_i128 result{}; 
		#line 706 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Auto<decltype(Builtin::CarryingAdd($this, rhs, carry, result))> overflowed = Builtin::CarryingAdd($this, rhs, carry, result); 
		#line 707 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return Builtin::MakeTuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 712 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto BorrowingSub($extension_Int128_626_i128 const& $this LIFETIMEBOUND, $extension_Int128_626_i128 rhs, bool carry) noexcept -> const Builtin::Tuple<$extension_Int128_626_i128, bool>
	{
		#line 714 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_626_i128 result{}; 
		#line 715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Auto<decltype(Builtin::BorrowingSub($this, rhs, carry, result))> overflowed = Builtin::BorrowingSub($this, rhs, carry, result); 
		#line 716 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return Builtin::MakeTuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 721 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_sub_qst($extension_Int128_626_i128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int128_626_i128>
	{
		#line 723 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -? implemented only for integer types");
		#line 724 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_626_i128 result{}; 
		#line 725 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (Builtin::SafeSubtract($this, rhs, result)) {
			#line 726 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return result;
		}
		#line 728 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 730 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_sub_qst_eq($extension_Int128_626_i128 & $this , T rhs) noexcept -> typename $extension_Int128_626_i128&
	{
		#line 732 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -?= implemented only for integer types");
		#line 733 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (const auto result = ADV_UFCS(_operator_sub_qst)($this, rhs)) {
			{
				#line 733 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 734 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				$this = result;
			}
		}
		#line 736 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 741 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_sub_ne($extension_Int128_626_i128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int128_626_i128
	{
		#line 743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -! implemented only for integer types");
		#line 744 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_626_i128 result{}; 
		#line 745 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::StrictSubtract($this, rhs, result);
		#line 746 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 748 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_sub_ne_eq($extension_Int128_626_i128 & $this , T rhs)  -> typename $extension_Int128_626_i128&
	{
		#line 748 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_sub_ne)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 752 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_sub_mod($extension_Int128_626_i128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int128_626_i128
	{
		#line 754 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -% implemented only for integer types");
		#line 755 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_626_i128 result{}; 
		#line 756 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::WrappingSubtract($this, rhs, result);
		#line 757 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 759 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_sub_mod_eq($extension_Int128_626_i128 & $this , T rhs) noexcept -> typename $extension_Int128_626_i128&
	{
		#line 759 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_sub_mod)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 763 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_sub_or($extension_Int128_626_i128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int128_626_i128
	{
		#line 765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -| implemented only for integer types");
		#line 766 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_626_i128 result{}; 
		#line 767 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::SaturatingSubtract($this, rhs, result);
		#line 768 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 770 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_sub_or_eq($extension_Int128_626_i128 & $this , T rhs) noexcept -> typename $extension_Int128_626_i128&
	{
		#line 770 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_sub_or)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 774 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_sub_mod_qst($extension_Int128_626_i128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Tuple<$extension_Int128_626_i128, bool>
	{
		#line 775 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -%? implemented only for integer types");
		#line 776 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_626_i128 result{}; 
		#line 777 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Auto<decltype(!Builtin::SafeSubtract($this, rhs, result))> overflowed = !Builtin::SafeSubtract($this, rhs, result); 
		#line 778 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return Builtin::MakeTuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 782 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_sub_sub_qst($extension_Int128_626_i128 & $this )  -> typename $extension_Int128_626_i128&
	{
		#line 782 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_qst_eq)($this, Builtin::i128(1LL))); 
	}
	inline constexpr auto _operator_sub_sub_qst_postfix($extension_Int128_626_i128 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_sub_sub_qst)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 785 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_sub_sub_ne($extension_Int128_626_i128 & $this )  -> typename $extension_Int128_626_i128&
	{
		#line 785 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_ne_eq)($this, Builtin::i128(1LL))); 
	}
	inline constexpr auto _operator_sub_sub_ne_postfix($extension_Int128_626_i128 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_sub_sub_ne)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 788 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_sub_sub_mod($extension_Int128_626_i128 & $this )  -> typename $extension_Int128_626_i128&
	{
		#line 788 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_mod_eq)($this, Builtin::i128(1LL))); 
	}
	inline constexpr auto _operator_sub_sub_mod_postfix($extension_Int128_626_i128 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_sub_sub_mod)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 791 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_sub_sub_or($extension_Int128_626_i128 & $this )  -> typename $extension_Int128_626_i128&
	{
		#line 791 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_or_eq)($this, Builtin::i128(1LL))); 
	}
	inline constexpr auto _operator_sub_sub_or_postfix($extension_Int128_626_i128 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_sub_sub_or)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 795 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mul_qst($extension_Int128_626_i128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int128_626_i128>
	{
		#line 797 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *? implemented only for integer types");
		#line 798 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_626_i128 result{}; 
		#line 799 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (Builtin::SafeMultiply($this, rhs, result)) {
			#line 800 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return result;
		}
		#line 802 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 804 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mul_qst_eq($extension_Int128_626_i128 & $this , T rhs) noexcept -> typename $extension_Int128_626_i128&
	{
		#line 806 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *?= implemented only for integer types");
		#line 807 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (const auto result = ADV_UFCS(_operator_mul_qst)($this, rhs)) {
			{
				#line 807 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 808 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				$this = result;
			}
		}
		#line 810 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 815 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mul_ne($extension_Int128_626_i128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int128_626_i128
	{
		#line 817 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *! implemented only for integer types");
		#line 818 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_626_i128 result{}; 
		#line 819 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::StrictMultiply($this, rhs, result);
		#line 820 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 822 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mul_ne_eq($extension_Int128_626_i128 & $this , T rhs)  -> typename $extension_Int128_626_i128&
	{
		#line 822 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_mul_ne)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 826 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mul_mod($extension_Int128_626_i128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int128_626_i128
	{
		#line 828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *% implemented only for integer types");
		#line 829 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_626_i128 result{}; 
		#line 830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::WrappingMultiply($this, rhs, result);
		#line 831 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 833 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mul_mod_eq($extension_Int128_626_i128 & $this , T rhs) noexcept -> typename $extension_Int128_626_i128&
	{
		#line 833 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_mul_mod)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 837 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mul_or($extension_Int128_626_i128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int128_626_i128
	{
		#line 839 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *| implemented only for integer types");
		#line 840 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_626_i128 result{}; 
		#line 841 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::SaturatingMultiply($this, rhs, result);
		#line 842 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 844 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mul_or_eq($extension_Int128_626_i128 & $this , T rhs) noexcept -> typename $extension_Int128_626_i128&
	{
		#line 844 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_mul_or)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 848 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mul_mod_qst($extension_Int128_626_i128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Tuple<$extension_Int128_626_i128, bool>
	{
		#line 849 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *%? implemented only for integer types");
		#line 850 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_626_i128 result{}; 
		#line 851 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Auto<decltype(!Builtin::SafeMultiply($this, rhs, result))> overflowed = !Builtin::SafeMultiply($this, rhs, result); 
		#line 852 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return Builtin::MakeTuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 857 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline auto _operator_mul_gt($extension_Int128_626_i128 const& $this LIFETIMEBOUND, $extension_Int128_626_i128 rhs) noexcept -> const Builtin::Tuple<Builtin::u128, Builtin::i128>
	{
		#line 859 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		const auto& [low, high] = Builtin::WideningMul128($this, rhs);
		#line 860 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return Builtin::MakeTuple(low, high);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 866 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline auto CarryingMul($extension_Int128_626_i128 const& $this LIFETIMEBOUND, $extension_Int128_626_i128 rhs, $extension_Int128_626_i128 carry) noexcept -> const Builtin::Tuple<Builtin::u128, Builtin::i128>
	{
		#line 868 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		const auto& [low, high] = Builtin::CarryingMul128($this, rhs, carry);
		#line 869 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return Builtin::MakeTuple(low, high);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 874 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_qst($extension_Int128_626_i128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int128_626_i128>
	{
		#line 876 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\? implemented only for integer types");
		#line 877 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_626_i128 result{}; 
		#line 878 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (Builtin::SafeDivide($this, rhs, result)) {
			#line 879 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return result;
		}
		#line 881 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 883 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_qst_eq($extension_Int128_626_i128 & $this , T rhs) noexcept -> typename $extension_Int128_626_i128&
	{
		#line 885 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\?= implemented only for integer types");
		#line 886 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (const auto result = ADV_UFCS(_operator_bsl_qst)($this, rhs)) {
			{
				#line 886 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 887 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				$this = result;
			}
		}
		#line 889 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 895 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_ne($extension_Int128_626_i128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int128_626_i128
	{
		#line 897 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\! implemented only for integer types");
		#line 898 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_626_i128 result{}; 
		#line 899 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::StrictDivide($this, rhs, result);
		#line 900 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 902 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_ne_eq($extension_Int128_626_i128 & $this , T rhs)  -> typename $extension_Int128_626_i128&
	{
		#line 902 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_bsl_ne)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 907 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_mod($extension_Int128_626_i128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int128_626_i128
	{
		#line 909 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\% implemented only for integer types");
		#line 910 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_626_i128 result{}; 
		#line 911 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::WrappingDivide($this, rhs, result);
		#line 912 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 914 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_eq($extension_Int128_626_i128 & $this , T rhs)  -> typename $extension_Int128_626_i128&
	{
		#line 914 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_bsl_mod)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 919 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_or($extension_Int128_626_i128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int128_626_i128
	{
		#line 921 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\| implemented only for integer types");
		#line 922 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_626_i128 result{}; 
		#line 923 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::SaturatingDivide($this, rhs, result);
		#line 924 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 926 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_or_eq($extension_Int128_626_i128 & $this , T rhs)  -> typename $extension_Int128_626_i128&
	{
		#line 926 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_bsl_or)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 931 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_qst($extension_Int128_626_i128 const& $this LIFETIMEBOUND, T rhs)  -> const Builtin::Tuple<$extension_Int128_626_i128, bool>
	{
		#line 932 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\%? implemented only for integer types");
		#line 933 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_626_i128 result{}; 
		#line 934 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Auto<decltype(!Builtin::SafeDivide($this, rhs, result))> overflowed = !Builtin::SafeDivide($this, rhs, result); 
		#line 935 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return Builtin::MakeTuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 940 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst($extension_Int128_626_i128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int128_626_i128>
	{
		#line 942 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\? implemented only for integer types");
		#line 943 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_626_i128 result{}; 
		#line 944 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (Builtin::SafeDivExact($this, rhs, result)) {
			#line 945 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return result;
		}
		#line 947 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 950 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst_eq($extension_Int128_626_i128 & $this , T rhs) noexcept -> typename $extension_Int128_626_i128&
	{
		#line 952 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\?= implemented only for integer types");
		#line 953 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (const auto result = ADV_UFCS(_operator_bsl_bsl_qst)($this, rhs)) {
			{
				#line 953 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 954 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				$this = result;
			}
		}
		#line 956 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 961 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mod_qst($extension_Int128_626_i128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int128_626_i128>
	{
		#line 963 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %? implemented only for integer types");
		#line 964 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_626_i128 result{}; 
		#line 965 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (Builtin::SafeModulus($this, rhs, result)) {
			#line 966 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return result;
		}
		#line 968 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 970 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mod_qst_eq($extension_Int128_626_i128 & $this , T rhs) noexcept -> typename $extension_Int128_626_i128&
	{
		#line 972 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %?= implemented only for integer types");
		#line 973 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (const auto result = ADV_UFCS(_operator_mod_qst)($this, rhs)) {
			{
				#line 973 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 974 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				$this = result;
			}
		}
		#line 976 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 982 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mod_ne($extension_Int128_626_i128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int128_626_i128
	{
		#line 984 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %! implemented only for integer types");
		#line 985 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_626_i128 result{}; 
		#line 986 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::StrictModulus($this, rhs, result);
		#line 987 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 989 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mod_ne_eq($extension_Int128_626_i128 & $this , T rhs)  -> typename $extension_Int128_626_i128&
	{
		#line 989 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_mod_ne)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 994 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mod_mod($extension_Int128_626_i128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int128_626_i128
	{
		#line 996 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %% implemented only for integer types");
		#line 997 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_626_i128 result{}; 
		#line 998 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::WrappingModulus($this, rhs, result);
		#line 999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1001 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mod_mod_eq($extension_Int128_626_i128 & $this , T rhs)  -> typename $extension_Int128_626_i128&
	{
		#line 1001 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_mod_mod)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1006 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mod_mod_qst($extension_Int128_626_i128 const& $this LIFETIMEBOUND, T rhs)  -> const Builtin::Tuple<$extension_Int128_626_i128, bool>
	{
		#line 1007 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %%? implemented only for integer types");
		#line 1008 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_626_i128 result{}; 
		#line 1009 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Auto<decltype(!Builtin::SafeModulus($this, rhs, result))> overflowed = !Builtin::SafeModulus($this, rhs, result); 
		#line 1010 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return Builtin::MakeTuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1015 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_sub_qst($extension_Int128_626_i128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::Nullable<$extension_Int128_626_i128>
	{
		#line 1017 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_626_i128 result{}; 
		#line 1018 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (Builtin::SafeNegate($this, result)) {
			#line 1019 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return result;
		}
		#line 1021 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1025 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_sub_ne($extension_Int128_626_i128 const& $this LIFETIMEBOUND)  -> const typename $extension_Int128_626_i128
	{
		#line 1027 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_626_i128 result{}; 
		#line 1028 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::StrictNegate($this, result);
		#line 1029 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1032 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_sub_mod($extension_Int128_626_i128 const& $this LIFETIMEBOUND)  -> const typename $extension_Int128_626_i128
	{
		#line 1034 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_626_i128 result{}; 
		#line 1035 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::WrappingNegate($this, result);
		#line 1036 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1040 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_sub_or($extension_Int128_626_i128 const& $this LIFETIMEBOUND)  -> const typename $extension_Int128_626_i128
	{
		#line 1042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_626_i128 result{}; 
		#line 1043 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::SaturatingNegate($this, result);
		#line 1044 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1048 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_sub_mod_qst($extension_Int128_626_i128 const& $this LIFETIMEBOUND)  -> const Builtin::Tuple<$extension_Int128_626_i128, bool>
	{
		#line 1050 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_626_i128 result{}; 
		#line 1051 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Auto<decltype(!Builtin::SafeNegate($this, result))> overflowed = !Builtin::SafeNegate($this, result); 
		#line 1052 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return Builtin::MakeTuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1056 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_lt_lt_qst($extension_Int128_626_i128 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<$extension_Int128_626_i128>
	{
		#line 1058 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_Int128_626_i128)()) < 0) {
			#line 1059 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return Builtin::UncheckedShiftLeft($this, amount);
		}
		#line 1061 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1064 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_lt_lt_qst_eq($extension_Int128_626_i128 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int128_626_i128&
	{
		#line 1066 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_Int128_626_i128)()) < 0) {
			#line 1067 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return $this <<= amount;
		}
		#line 1069 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1072 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_lt_lt_ne($extension_Int128_626_i128 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_Int128_626_i128
	{
		#line 1074 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_Int128_626_i128)()) < 0) {
			#line 1075 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return Builtin::UncheckedShiftLeft($this, amount);
		}
		#line 1077 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Throw(Builtin::IntegerOverflowException{});
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1080 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_lt_lt_ne_eq($extension_Int128_626_i128 & $this , Builtin::i32 amount)  -> typename $extension_Int128_626_i128&
	{
		#line 1080 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_lt_lt_ne)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1082 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_lt_lt_mod($extension_Int128_626_i128 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename $extension_Int128_626_i128
	{
		#line 1082 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::UncheckedShiftLeft($this, amount & (ADV_USPCS(BitWidth, $extension_Int128_626_i128)() - Builtin::i32(1)))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1085 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_lt_lt_mod_eq($extension_Int128_626_i128 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int128_626_i128&
	{
		#line 1085 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_lt_lt_mod)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1087 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_lt_lt_mod_qst($extension_Int128_626_i128 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Tuple<$extension_Int128_626_i128, bool>
	{
		#line 1087 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::MakeTuple(ADV_UFCS(_operator_lt_lt_mod)($this, amount), (amount <=> Builtin::i32(0)) < 0 || (amount <=> ADV_USPCS(BitWidth, $extension_Int128_626_i128)()) >= 0)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1090 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_gt_gt_qst($extension_Int128_626_i128 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<$extension_Int128_626_i128>
	{
		#line 1092 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_Int128_626_i128)()) < 0) {
			#line 1093 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return $this >> amount;
		}
		#line 1095 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1098 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_gt_gt_qst_eq($extension_Int128_626_i128 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int128_626_i128&
	{
		#line 1100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_Int128_626_i128)()) < 0) {
			#line 1101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return $this >>= amount;
		}
		#line 1103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_gt_gt_ne($extension_Int128_626_i128 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_Int128_626_i128
	{
		#line 1108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_Int128_626_i128)()) < 0) {
			#line 1109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return $this >> amount;
		}
		#line 1111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Throw(Builtin::IntegerOverflowException{});
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_gt_gt_ne_eq($extension_Int128_626_i128 & $this , Builtin::i32 amount)  -> typename $extension_Int128_626_i128&
	{
		#line 1114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_gt_gt_ne)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_gt_gt_mod($extension_Int128_626_i128 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename $extension_Int128_626_i128
	{
		#line 1116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::UncheckedShiftRight($this, amount & (ADV_USPCS(BitWidth, $extension_Int128_626_i128)() - Builtin::i32(1)))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_gt_gt_mod_eq($extension_Int128_626_i128 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int128_626_i128&
	{
		#line 1119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_gt_gt_mod)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_gt_gt_mod_qst($extension_Int128_626_i128 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Tuple<$extension_Int128_626_i128, bool>
	{
		#line 1121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::MakeTuple(ADV_UFCS(_operator_gt_gt_mod)($this, amount), (amount <=> Builtin::i32(0)) < 0 || (amount <=> ADV_USPCS(BitWidth, $extension_Int128_626_i128)()) >= 0)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor_qst($extension_Int128_626_i128 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const Builtin::Nullable<$extension_Int128_626_i128>
	{
		#line 1128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return Builtin::i128(1LL);
		}
		#line 1133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 1134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Auto<decltype(Builtin::i128(1LL))> result = Builtin::i128(1LL); 
		#line 1136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		for (;;) 
		{
			#line 1137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 1138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				if (const auto mul = ADV_UFCS(_operator_mul_qst)(result, base)) {
					{
						#line 1138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
						auto __tmp0 = *mul; const auto& mul = __tmp0;
						
						#line 1139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
						result = mul;
					}
				} else {
					#line 1140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
					{
						#line 1141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
						return nullptr;
					}
				}
				#line 1143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				if (exp == Builtin::i32(1)) {
					#line 1144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
					return result;
				}
			}
			#line 1146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
			#line 1147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			if (const auto mul = ADV_UFCS(_operator_mul_qst)(base, base)) {
				{
					#line 1147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
					auto __tmp0 = *mul; const auto& mul = __tmp0;
					
					#line 1148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
					base = mul;
				}
			} else {
				#line 1149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				{
					#line 1150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
					return nullptr;
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor_qst_eq($extension_Int128_626_i128 & $this , Builtin::u32 exp) noexcept -> typename $extension_Int128_626_i128&
	{
		#line 1157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (auto result = ADV_UFCS(_operator_xor_xor_qst)($this, exp)) {
			{
				#line 1157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 1158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				return $this = result;
			}
		}
		#line 1160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor_ne($extension_Int128_626_i128 const& $this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename $extension_Int128_626_i128
	{
		#line 1165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return Builtin::i32(1);
		}
		#line 1170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 1171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Auto<decltype(Builtin::i128(1LL))> result = Builtin::i128(1LL); 
		#line 1173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		for (;;) 
		{
			#line 1174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 1175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				ADV_UFCS(_operator_mul_ne_eq)(result, base);
				#line 1176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				if (exp == Builtin::i32(1)) {
					#line 1177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
					return result;
				}
			}
			#line 1179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
			#line 1180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_UFCS(_operator_mul_ne_eq)(base, base);
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor_ne_eq($extension_Int128_626_i128 & $this , Builtin::u32 exp)  -> typename $extension_Int128_626_i128&
	{
		#line 1184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_xor_xor_ne)($this, exp)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor_mod($extension_Int128_626_i128 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename $extension_Int128_626_i128
	{
		#line 1188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return Builtin::i128(1LL);
		}
		#line 1193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 1194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Auto<decltype(Builtin::i128(1LL))> result = Builtin::i128(1LL); 
		#line 1196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (std::is_constant_evaluated()) {
			#line 1197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			while ((exp <=> Builtin::i32(1)) > 0) 
			{
				#line 1198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
					#line 1199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
					ADV_UFCS(_operator_mul_mod_eq)(result, base);
				}
				#line 1201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
				#line 1202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				ADV_UFCS(_operator_mul_mod_eq)(base, base);
			}
			#line 1204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return ADV_UFCS(_operator_mul_mod)(result, base);
		} else {
			#line 1205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			{
				#line 1206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				for (;;) 
				{
					#line 1207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
					if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
						#line 1208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
						ADV_UFCS(_operator_mul_mod_eq)(result, base);
						#line 1209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
						if (exp == Builtin::i32(1)) {
							#line 1210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
							return result;
						}
					}
					#line 1212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
					ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
					#line 1213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
					ADV_UFCS(_operator_mul_mod_eq)(base, base);
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor_mod_eq($extension_Int128_626_i128 & $this , Builtin::u32 exp) noexcept -> typename $extension_Int128_626_i128&
	{
		#line 1218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_xor_xor_mod)($this, exp)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor_or($extension_Int128_626_i128 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename $extension_Int128_626_i128
	{
		#line 1222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (const auto result = ADV_UFCS(_operator_xor_xor_qst)($this, exp)) {
			{
				#line 1222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 1223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				return result;
			}
		}
		#line 1226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return (ADV_UPCS(IsNegative)($this.$ref()) && exp % Builtin::i32(2) == Builtin::i32(1)) ? ADV_USPCS(MinValue, $extension_Int128_626_i128)() : ADV_USPCS(MaxValue, $extension_Int128_626_i128)();
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor_or_eq($extension_Int128_626_i128 & $this , Builtin::u32 exp) noexcept -> typename $extension_Int128_626_i128&
	{
		#line 1229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_xor_xor_or)($this, exp)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor_mod_qst($extension_Int128_626_i128 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const Builtin::Tuple<$extension_Int128_626_i128, bool>
	{
		#line 1233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return Builtin::MakeTuple(Builtin::i128(1LL), Builtin::Boolean(false));
		}
		#line 1238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 1239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Auto<decltype(Builtin::i128(1LL))> result = Builtin::i128(1LL); 
		#line 1240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Auto<decltype(Builtin::Boolean(false))> overflowed = Builtin::Boolean(false); 
		#line 1241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Auto<decltype(Builtin::MakeTuple(Builtin::i128(0LL), Builtin::Boolean(false)))> tmp = Builtin::MakeTuple(Builtin::i128(0LL), Builtin::Boolean(false)); 
		#line 1243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		for (;;) 
		{
			#line 1244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 1245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				tmp = ADV_UFCS(_operator_mul_mod_qst)(result, base);
				#line 1246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				if (exp == Builtin::i32(1)) {
					#line 1247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
					get<1>(tmp) |= overflowed;
					#line 1248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
					return tmp;
				}
				#line 1250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				result = get<0>(tmp);
				#line 1251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				overflowed |= get<1>(tmp);
			}
			#line 1253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
			#line 1254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			tmp = ADV_UFCS(_operator_mul_mod_qst)(base, base);
			#line 1255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			base = get<0>(tmp);
			#line 1256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			overflowed |= get<1>(tmp);
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getCheckedAbs($extension_Int128_626_i128 const & $this ) -> const Builtin::Nullable<$extension_Int128_626_i128>
	{
		#line 1262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)($this.$ref()) ? ADV_UFCS(_operator_sub_qst)($this) : $this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getStrictAbs($extension_Int128_626_i128 const & $this ) -> const $extension_Int128_626_i128
	{
		#line 1265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)($this.$ref()) ? ADV_UFCS(_operator_sub_ne)($this) : $this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getWrappingAbs($extension_Int128_626_i128 const & $this ) -> const $extension_Int128_626_i128
	{
		#line 1268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)($this.$ref()) ? ADV_UFCS(_operator_sub_mod)($this) : $this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getSaturatingAbs($extension_Int128_626_i128 const & $this ) -> const $extension_Int128_626_i128
	{
		#line 1271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)($this.$ref()) ? ADV_UFCS(_operator_sub_or)($this) : $this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getOverflowingAbs($extension_Int128_626_i128 const & $this ) -> const Builtin::Tuple<$extension_Int128_626_i128, bool>
	{
		#line 1276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (ADV_UPCS(IsNegative)($this.$ref())) {
			#line 1277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return ADV_UFCS(_operator_sub_mod_qst)($this);
		}
		#line 1279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return Builtin::MakeTuple($this, Builtin::Boolean(false));
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	
} namespace $extensions { using namespace System;
#line 1334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NextMultipleOf($extension_Int128_1283_i128 const& $this LIFETIMEBOUND, $extension_Int128_1283_i128 rhs)  -> const typename $extension_Int128_1283_i128
	{
		#line 1336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (rhs == Builtin::i32(-1)) {
			#line 1337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return $this;
		}
		#line 1340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		const Builtin::Auto<decltype($this % rhs)> remainder = $this % rhs; 
		#line 1341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		const Builtin::Auto<decltype(((remainder <=> Builtin::i32(0)) > 0 && (rhs <=> Builtin::i32(0)) < 0) || ((remainder <=> Builtin::i32(0)) < 0 && (rhs <=> Builtin::i32(0)) > 0) ? remainder + rhs : remainder)> mod = ((remainder <=> Builtin::i32(0)) > 0 && (rhs <=> Builtin::i32(0)) < 0) || ((remainder <=> Builtin::i32(0)) < 0 && (rhs <=> Builtin::i32(0)) > 0) ? remainder + rhs : remainder; 
		#line 1344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return mod == Builtin::i32(0) ? $this : $this + (rhs - mod);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto CheckedNextMultipleOf($extension_Int128_1283_i128 const& $this LIFETIMEBOUND, $extension_Int128_1283_i128 rhs) noexcept -> const Builtin::Nullable<$extension_Int128_1283_i128>
	{
		#line 1352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (rhs == Builtin::i32(-1)) {
			#line 1353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return $this;
		}
		#line 1356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_1283_i128 remainder{}; 
		#line 1357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (const auto r = ADV_UFCS(_operator_mod_qst)($this, rhs)) {
			{
				#line 1357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				auto __tmp0 = *r; const auto& r = __tmp0;
				
				#line 1358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				remainder = r;
			}
		} else {
			#line 1359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return nullptr;
		}
		#line 1361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		const Builtin::Auto<decltype(((remainder <=> Builtin::i32(0)) > 0 && (rhs <=> Builtin::i32(0)) < 0) || ((remainder <=> Builtin::i32(0)) < 0 && (rhs <=> Builtin::i32(0)) > 0) ? remainder + rhs : remainder)> mod = ((remainder <=> Builtin::i32(0)) > 0 && (rhs <=> Builtin::i32(0)) < 0) || ((remainder <=> Builtin::i32(0)) < 0 && (rhs <=> Builtin::i32(0)) > 0) ? remainder + rhs : remainder; 
		#line 1364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (mod == Builtin::i32(0)) {
			#line 1365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return $this;
		}
		#line 1367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return ADV_UFCS(_operator_add_qst)($this, (rhs - mod));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto $static_getIsSigned<$extension_Int128_1283_i128>::get() -> const bool
	{
		#line 1284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getTrailingZeroCount($extension_Int128_1283_i128 const & $this ) -> const Builtin::u32
	{
		#line 1288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (ADV_UFCS(Low64)($this.$ref()) == Builtin::i32(0)) {
			#line 1289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return ADV_UPCS(TrailingZeroCount)(ADV_UFCS(High64)($this.$ref()).$ref()) + Builtin::u32(64U);
		}
		#line 1291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return ADV_UPCS(TrailingZeroCount)(ADV_UFCS(Low64)($this.$ref()).$ref());
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getTrailingOneCount($extension_Int128_1283_i128 const & $this ) -> const Builtin::u32
	{
		#line 1293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(TrailingZeroCount)((ADV_UFCS(_operator_not)($this)).$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getByteCount($extension_Int128_1283_i128 const & $this ) -> const Builtin::u32
	{
		#line 1294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u32>(Builtin::usize(sizeof($extension_Int128_1283_i128)))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getMinimalBitWidth($extension_Int128_1283_i128 const & $this ) -> const Builtin::u32
	{
		#line 1295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(BitWidth, $extension_Int128_1283_i128)() - ADV_UPCS(LeadingZeroCount)($this.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline auto getIsqrt($extension_Int128_1283_i128 const & $this ) -> const $extension_Int128_1283_i128
	{
		#line 1312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (const auto result = ADV_UPCS(CheckedIsqrt)($this.$ref())) {
			{
				#line 1312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 1313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				return result;
			}
		}
		#line 1315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getLog2Ceiling($extension_Int128_1283_i128 const & $this ) -> const $extension_Int128_1283_i128
	{
		#line 1322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Auto<decltype(ADV_UPCS(Log2)($this.$ref()))> result = ADV_UPCS(Log2)($this.$ref()); 
		#line 1323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (ADV_UPCS(PopCount)($this.$ref()) != Builtin::i32(1)) {
			#line 1324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			++result;
		}
		#line 1327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getPrevPow2($extension_Int128_1283_i128 const & $this ) -> const $extension_Int128_1283_i128
	{
		#line 1373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (($this <=> Builtin::i32(1)) <= 0) {
			#line 1374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return Builtin::i32(0);
		}
		#line 1377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return ADV_USPCS(One, $extension_Int128_1283_i128)() << (ADV_UPCS(MinimalBitWidth)($this.$ref()) - Builtin::i32(1));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getNextPow2($extension_Int128_1283_i128 const & $this ) -> const $extension_Int128_1283_i128
	{
		#line 1384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (($this <=> Builtin::i32(1)) <= 0) {
			#line 1385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return Builtin::i32(0);
		}
		#line 1388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		const Builtin::Auto<decltype($this - Builtin::i32(1))> p = $this - Builtin::i32(1); 
		#line 1389 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return (ADV_USPCS(AllBitsSet, $extension_Int128_1283_i128)() >> ADV_UPCS(LeadingZeroCount)(p.$ref())) + Builtin::i32(1);
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getCheckedNextPow2($extension_Int128_1283_i128 const & $this ) -> const Builtin::Nullable<$extension_Int128_1283_i128>
	{
		#line 1396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (($this <=> Builtin::i32(1)) <= 0) {
			#line 1397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return Builtin::i128(0LL);
		}
		#line 1400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		const Builtin::Auto<decltype($this - Builtin::i32(1))> p = $this - Builtin::i32(1); 
		#line 1401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return ADV_UFCS(_operator_add_qst)((ADV_USPCS(AllBitsSet, $extension_Int128_1283_i128)() >> ADV_UPCS(LeadingZeroCount)(p.$ref())), Builtin::i128(1LL));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getWrappingNextPow2($extension_Int128_1283_i128 const & $this ) -> const $extension_Int128_1283_i128
	{
		#line 1408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (($this <=> Builtin::i32(1)) <= 0) {
			#line 1409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return Builtin::i32(0);
		}
		#line 1412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		const Builtin::Auto<decltype($this - Builtin::i32(1))> p = $this - Builtin::i32(1); 
		#line 1413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return ADV_UFCS(_operator_add_mod)((ADV_USPCS(AllBitsSet, $extension_Int128_1283_i128)() >> ADV_UPCS(LeadingZeroCount)(p.$ref())), Builtin::i128(1LL));
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	
} namespace $extensions { using namespace System;
#line 1457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto RotateLeft($extension_Int128_1417_i128 const& $this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename $extension_Int128_1417_i128
	{
		#line 1457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(($this << shiftAmount) | (ADV_UFCS(_operator_gt_gt_gt)($this, Builtin::i32{ADV_USPCS(BitWidth, $extension_Int128_1417_i128)() - shiftAmount}))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto RotateRight($extension_Int128_1417_i128 const& $this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename $extension_Int128_1417_i128
	{
		#line 1458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY((ADV_UFCS(_operator_gt_gt_gt)($this, Builtin::i32{shiftAmount})) | ($this << (ADV_USPCS(BitWidth, $extension_Int128_1417_i128)() - shiftAmount))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto $static_getBitWidth<$extension_Int128_1417_i128>::get() -> const Builtin::u32
	{
		#line 1418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(128U)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getLeadingZeroCount($extension_Int128_1417_i128 const & $this ) -> const Builtin::u32
	{
		#line 1422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (ADV_UFCS(High64)($this.$ref()) == Builtin::i32(0)) {
			#line 1423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return Builtin::u32(64U) + Builtin::LeadingZeroCount(ADV_UFCS(Low64)($this.$ref()));
		}
		#line 1426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return Builtin::LeadingZeroCount(ADV_UFCS(High64)($this.$ref()));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getLeadingOneCount($extension_Int128_1417_i128 const & $this ) -> const Builtin::u32
	{
		#line 1428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(LeadingZeroCount)((ADV_UFCS(_operator_not)($this)).$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getPopCount($extension_Int128_1417_i128 const & $this ) -> const Builtin::u32
	{
		#line 1429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::PopCount(ADV_UFCS(High64)($this.$ref())) + Builtin::PopCount(ADV_UFCS(Low64)($this.$ref()))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getZeroCount($extension_Int128_1417_i128 const & $this ) -> const Builtin::u32
	{
		#line 1430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(PopCount)((ADV_UFCS(_operator_not)($this)).$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getByteSwapped($extension_Int128_1417_i128 const & $this ) -> const $extension_Int128_1417_i128
	{
		#line 1431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::i128{Builtin::Cast<true, Builtin::i64>(ADV_UPCS(ByteSwapped)(ADV_UFCS(Low64)($this.$ref()).$ref())), Builtin::Cast<true, Builtin::u64>(ADV_UPCS(ByteSwapped)(ADV_UFCS(High64)($this.$ref()).$ref()))}); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getBigEndian($extension_Int128_1417_i128 const & $this ) -> const $extension_Int128_1417_i128
	{
		#line 1434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if constexpr (Builtin::IsLittleEndian()) {
			#line 1435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return ADV_UPCS(ByteSwapped)($this.$ref());
		}
		#line 1437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return $this;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getLittleEndian($extension_Int128_1417_i128 const & $this ) -> const $extension_Int128_1417_i128
	{
		#line 1441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if constexpr (Builtin::IsBigEndian()) {
			#line 1442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return ADV_UPCS(ByteSwapped)($this.$ref());
		}
		#line 1444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return $this;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getReverseBits($extension_Int128_1417_i128 const & $this ) -> const $extension_Int128_1417_i128
	{
		#line 1446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::i128{Builtin::Cast<true, Builtin::i64>(Builtin::ReverseBits64u(ADV_UFCS(Low64)($this.$ref()))), Builtin::Cast<true, Builtin::u64>(Builtin::ReverseBits64(ADV_UFCS(High64)($this.$ref())))}); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getShortestBitLength($extension_Int128_1417_i128 const & $this ) -> const Builtin::u32
	{
		#line 1450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (($this <=> Builtin::i32(0)) >= 0) {
			#line 1451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return ADV_USPCS(BitWidth, $extension_Int128_1417_i128)() - ADV_UPCS(LeadingZeroCount)($this.$ref());
		}
		#line 1454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return ADV_USPCS(BitWidth, $extension_Int128_1417_i128)() + Builtin::u32(1U) - ADV_UPCS(LeadingOneCount)($this.$ref());
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	
} namespace $extensions { using namespace System;
#line 1470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto IsGreaterThanAsUnsigned($extension_Int128_1462_i128 const& $this LIFETIMEBOUND, $extension_Int128_1462_i128 rhs) noexcept -> const bool
	{
		#line 1470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY((ADV_UFCS(NarrowToUInt128)($this.$ref()) <=> ADV_UFCS(NarrowToUInt128)(rhs.$ref())) > 0); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto $static_getMaxDigitCount<$extension_Int128_1462_i128>::get() -> const Builtin::i32
	{
		#line 1463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(39)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto $static_getMaxHexDigitCount<$extension_Int128_1462_i128>::get() -> const Builtin::i32
	{
		#line 1464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(32)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto $static_getMaxValueDiv10<$extension_Int128_1462_i128>::get() -> const $extension_Int128_1462_i128
	{
		#line 1465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl)(ADV_USPCS(MaxValue, Builtin::i128)(), Builtin::i32(10))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getMultiplyBy10($extension_Int128_1462_i128 const & $this ) -> const $extension_Int128_1462_i128
	{
		#line 1467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_mod)($this, Builtin::i128(10LL))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getMultiplyBy16($extension_Int128_1462_i128 const & $this ) -> const $extension_Int128_1462_i128
	{
		#line 1468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_mod)($this, Builtin::i128(16LL))); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	

}