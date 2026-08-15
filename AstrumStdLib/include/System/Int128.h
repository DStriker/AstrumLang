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
} namespace $extensions {
template<class __TT> struct $static_Low64;
template<class __TT> struct $static_getLow64;
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
template<class __TT> struct $static_MinimalBitWidth;
template<class __TT> struct $static_getMinimalBitWidth;
template<class __TT> struct $static_MinusOne;
template<class __TT> struct $static_getMinusOne;
template<class __TT> struct $static_AllBitsSet;
template<class __TT> struct $static_getAllBitsSet;
template<class __TT> struct $static_BitWidth;
template<class __TT> struct $static_getBitWidth;
template<class __TT> struct $static_LeadingZeroCount;
template<class __TT> struct $static_getLeadingZeroCount;
template<class __TT> struct $static_CheckedLog2;
template<class __TT> struct $static_getCheckedLog2;
template<class __TT> struct $static_InvalidOperationException;
template<class __TT> struct $static_getInvalidOperationException;
template<class __TT> struct $static_DivAssign;
template<class __TT> struct $static_getDivAssign;
template<class __TT> struct $static_CheckedLog10;
template<class __TT> struct $static_getCheckedLog10;
template<class __TT> struct $static_TrailingZeroCount;
template<class __TT> struct $static_getTrailingZeroCount;
template<class __TT> struct $static_Isqrt128;
template<class __TT> struct $static_getIsqrt128;
template<class __TT> struct $static_MaxValue;
template<class __TT> struct $static_getMaxValue;
template<class __TT> struct $static_CheckedIsqrt;
template<class __TT> struct $static_getCheckedIsqrt;
template<class __TT> struct $static_ByteSwapped;
template<class __TT> struct $static_getByteSwapped;
template<class __TT> struct $static_Log2;
template<class __TT> struct $static_getLog2;
template<class __TT> struct $static_One;
template<class __TT> struct $static_getOne;
template<class __TT> struct $static_IsLittleEndian;
template<class __TT> struct $static_getIsLittleEndian;
template<class __TT> struct $static_IsBigEndian;
template<class __TT> struct $static_getIsBigEndian;
template<class __TT> struct $static_ReverseBits64u;
template<class __TT> struct $static_getReverseBits64u;
template<class __TT> struct $static_ReverseBits64;
template<class __TT> struct $static_getReverseBits64;
template<class __TT> struct $static_LeadingOneCount;
template<class __TT> struct $static_getLeadingOneCount;
template<class __TT> struct $static_MinValue;
template<class __TT> struct $static_getMinValue;
template<class __TT> struct $static_IsSigned;
template<class __TT> struct $static_getIsSigned;
template<class __TT> struct $static_MaxDigitCount;
template<class __TT> struct $static_getMaxDigitCount;
} namespace System {
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
	template<class T> inline constexpr auto _operator_div_mod($extension_Int128_198_i128 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_Int128_198_i128, $extension_Int128_198_i128>;
	#line 206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_div_not($extension_Int128_198_i128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int128_198_i128;
	#line 213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_div_not_eq($extension_Int128_198_i128 & $this , auto rhs)  -> typename $extension_Int128_198_i128&;
	#line 215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_div_lt($extension_Int128_198_i128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int128_198_i128;
	#line 229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_div_lt_eq($extension_Int128_198_i128 & $this , auto rhs)  -> typename $extension_Int128_198_i128&;
	#line 231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_div_gt($extension_Int128_198_i128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int128_198_i128;
	#line 245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_div_gt_eq($extension_Int128_198_i128 & $this , auto rhs)  -> typename $extension_Int128_198_i128&;
	#line 198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int128_198_i128, IDivisibleArithmetic, IDivisibleArithmetic, $extension_Int128_198_i128);
	} namespace System{
using $extensions::_operator_div_mod;
using $extensions::_operator_div_not;
using $extensions::_operator_div_not_eq;
using $extensions::_operator_div_lt;
using $extensions::_operator_div_lt_eq;
using $extensions::_operator_div_gt;
using $extensions::_operator_div_gt_eq;

		} namespace $extensions { using namespace System;
#line 248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	using $extension_Int128_248_i128 = Builtin::i128;
	#line 248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE(IIntegerDivisibleArithmetic, IIntegerDivisibleArithmetic);
	#line 250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl($extension_Int128_248_i128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int128_248_i128;
	#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_eq($extension_Int128_248_i128 & $this , T rhs)  -> typename $extension_Int128_248_i128&;
	#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl($extension_Int128_248_i128 const& $this LIFETIMEBOUND, T rhs)  -> const Builtin::Nullable<$extension_Int128_248_i128>;
	#line 248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int128_248_i128, IIntegerDivisibleArithmetic, IIntegerDivisibleArithmetic, $extension_Int128_248_i128);
	} namespace System{
using $extensions::_operator_bsl;
using $extensions::_operator_bsl_eq;
using $extensions::_operator_bsl_bsl;

		} namespace $extensions { using namespace System;
#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	using $extension_Int128_268_i128 = Builtin::i128;
	#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE(IIntegerPowerArithmetic, IIntegerPowerArithmetic);
	#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor($extension_Int128_268_i128 const& $this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename $extension_Int128_268_i128;
	#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor_eq($extension_Int128_268_i128 & $this , Builtin::u32 exp)  -> typename $extension_Int128_268_i128&;
	#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int128_268_i128, IIntegerPowerArithmetic, IIntegerPowerArithmetic, $extension_Int128_268_i128);
	} namespace System{
using $extensions::_operator_xor_xor;
using $extensions::_operator_xor_xor_eq;

		} namespace $extensions { using namespace System;
#line 306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	using $extension_Int128_306_i128 = Builtin::i128;
	#line 306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE(INumberBase, INumberBase);
	#line 330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ASTRUMSTD_API auto MaxMagnitude($extension_Int128_306_i128 const& $this LIFETIMEBOUND, $extension_Int128_306_i128 rhs)  -> const typename $extension_Int128_306_i128;
	#line 359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline auto MaxMagnitudeNumber($extension_Int128_306_i128 const& $this LIFETIMEBOUND, $extension_Int128_306_i128 rhs)  -> const typename $extension_Int128_306_i128;
	#line 361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ASTRUMSTD_API auto MinMagnitude($extension_Int128_306_i128 const& $this LIFETIMEBOUND, $extension_Int128_306_i128 rhs)  -> const typename $extension_Int128_306_i128;
	#line 390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline auto MinMagnitudeNumber($extension_Int128_306_i128 const& $this LIFETIMEBOUND, $extension_Int128_306_i128 rhs)  -> const typename $extension_Int128_306_i128;
	#line 392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ASTRUMSTD_API auto Parse($extension_Int128_306_i128 const& $this LIFETIMEBOUND, Builtin::Str input)  -> const typename $extension_Int128_306_i128;
	#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ASTRUMSTD_API auto TryParse($extension_Int128_306_i128 const& $this LIFETIMEBOUND, Builtin::Str input) noexcept -> const Builtin::Nullable<$extension_Int128_306_i128>;
	#line 404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToInt8($extension_Int128_306_i128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i8;
	#line 405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToUInt8($extension_Int128_306_i128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u8;
	#line 406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToInt16($extension_Int128_306_i128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i16;
	#line 407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToUInt16($extension_Int128_306_i128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u16;
	#line 408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToInt32($extension_Int128_306_i128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i32;
	#line 409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToUInt32($extension_Int128_306_i128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u32;
	#line 410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToInt64($extension_Int128_306_i128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i64;
	#line 411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToUInt64($extension_Int128_306_i128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u64;
	#line 412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToInt128($extension_Int128_306_i128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i128;
	#line 413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToUInt128($extension_Int128_306_i128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u128;
	#line 414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToIsize($extension_Int128_306_i128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::isize;
	#line 415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToUsize($extension_Int128_306_i128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::usize;
	#line 307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class __TT> struct $static_getOne; template<> struct $static_getOne<$extension_Int128_306_i128> { static inline constexpr auto get() -> const $extension_Int128_306_i128; };
	#line 308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class __TT> struct $static_getZero; template<> struct $static_getZero<$extension_Int128_306_i128> { static inline constexpr auto get() -> const $extension_Int128_306_i128; };
	#line 309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class __TT> struct $static_getRadix; template<> struct $static_getRadix<$extension_Int128_306_i128> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getAbs($extension_Int128_306_i128 const& $this ) -> const $extension_Int128_306_i128;
	#line 312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsCanonical($extension_Int128_306_i128 const& $this ) -> const bool;
	#line 313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsComplexNumber($extension_Int128_306_i128 const& $this ) -> const bool;
	#line 314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsEvenInteger($extension_Int128_306_i128 const& $this ) -> const bool;
	#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsFinite($extension_Int128_306_i128 const& $this ) -> const bool;
	#line 316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsImaginaryNumber($extension_Int128_306_i128 const& $this ) -> const bool;
	#line 317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsInfinity($extension_Int128_306_i128 const& $this ) -> const bool;
	#line 318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsInteger($extension_Int128_306_i128 const& $this ) -> const bool;
	#line 319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsNaN($extension_Int128_306_i128 const& $this ) -> const bool;
	#line 320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsNegative($extension_Int128_306_i128 const& $this ) -> const bool;
	#line 321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsNegativeInfinity($extension_Int128_306_i128 const& $this ) -> const bool;
	#line 322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsNormal($extension_Int128_306_i128 const& $this ) -> const bool;
	#line 323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsOddInteger($extension_Int128_306_i128 const& $this ) -> const bool;
	#line 324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsPositive($extension_Int128_306_i128 const& $this ) -> const bool;
	#line 325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsPositiveInfinity($extension_Int128_306_i128 const& $this ) -> const bool;
	#line 326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsRealNumber($extension_Int128_306_i128 const& $this ) -> const bool;
	#line 327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsSubnormal($extension_Int128_306_i128 const& $this ) -> const bool;
	#line 328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsZero($extension_Int128_306_i128 const& $this ) -> const bool;
	#line 306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int128_306_i128, INumberBase, INumberBase, $extension_Int128_306_i128);
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
#line 418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	using $extension_Int128_418_i128 = Builtin::i128;
	#line 418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE(ISignedNumber, ISignedNumber);
	#line 419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class __TT> struct $static_getMinusOne; template<> struct $static_getMinusOne<$extension_Int128_418_i128> { static inline constexpr auto get() -> const $extension_Int128_418_i128; };
	#line 418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int128_418_i128, ISignedNumber, ISignedNumber, $extension_Int128_418_i128);
	} namespace System{
using $extensions::$static_getMinusOne;

		} namespace $extensions { using namespace System;
#line 422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	using $extension_Int128_422_i128 = Builtin::i128;
	#line 422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE(INumber, INumber);
	#line 436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ASTRUMSTD_API auto CopySign($extension_Int128_422_i128 const& $this LIFETIMEBOUND, $extension_Int128_422_i128 sign)  -> const typename $extension_Int128_422_i128;
	#line 454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto Max($extension_Int128_422_i128 const& $this LIFETIMEBOUND, $extension_Int128_422_i128 rhs) noexcept -> const typename $extension_Int128_422_i128;
	#line 455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto MaxNumber($extension_Int128_422_i128 const& $this LIFETIMEBOUND, $extension_Int128_422_i128 rhs) noexcept -> const typename $extension_Int128_422_i128;
	#line 456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto Min($extension_Int128_422_i128 const& $this LIFETIMEBOUND, $extension_Int128_422_i128 rhs) noexcept -> const typename $extension_Int128_422_i128;
	#line 457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto MinNumber($extension_Int128_422_i128 const& $this LIFETIMEBOUND, $extension_Int128_422_i128 rhs) noexcept -> const typename $extension_Int128_422_i128;
	#line 458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto Clamp($extension_Int128_422_i128 const& $this LIFETIMEBOUND, $extension_Int128_422_i128 min, $extension_Int128_422_i128 max)  -> const typename $extension_Int128_422_i128;
	#line 423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getSign($extension_Int128_422_i128 const& $this ) -> const Builtin::i32;
	#line 422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int128_422_i128, INumber, INumber, $extension_Int128_422_i128);
	} namespace System{
using $extensions::CopySign;
using $extensions::Max;
using $extensions::MaxNumber;
using $extensions::Min;
using $extensions::MinNumber;
using $extensions::Clamp;
using $extensions::getSign;

		} namespace $extensions { using namespace System;
#line 472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	using $extension_Int128_472_i128 = Builtin::i128;
	#line 472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE(IBinaryNumber, IBinaryNumber);
	#line 550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto CheckedLog($extension_Int128_472_i128 const& $this LIFETIMEBOUND, $extension_Int128_472_i128 base) noexcept -> const Builtin::Nullable<$extension_Int128_472_i128>;
	#line 584 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ASTRUMSTD_API auto Log($extension_Int128_472_i128 const& $this LIFETIMEBOUND, $extension_Int128_472_i128 base)  -> const typename $extension_Int128_472_i128;
	#line 594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto Midpoint($extension_Int128_472_i128 const& $this LIFETIMEBOUND, $extension_Int128_472_i128 rhs) noexcept -> const typename $extension_Int128_472_i128;
	#line 602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto IsMultipleOf($extension_Int128_472_i128 const& $this LIFETIMEBOUND, $extension_Int128_472_i128 rhs) noexcept -> const bool;
	#line 474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class __TT> struct $static_getAllBitsSet; template<> struct $static_getAllBitsSet<$extension_Int128_472_i128> { static inline constexpr auto get() -> const $extension_Int128_472_i128; };
	#line 477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsPow2($extension_Int128_472_i128 const& $this ) -> const bool;
	#line 481 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getCheckedLog2($extension_Int128_472_i128 const& $this ) -> const Builtin::Nullable<$extension_Int128_472_i128>;
	#line 491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getLog2($extension_Int128_472_i128 const& $this ) -> const $extension_Int128_472_i128;
	#line 501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getCheckedLog10($extension_Int128_472_i128 const& $this ) -> const Builtin::Nullable<$extension_Int128_472_i128>;
	#line 540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getLog10($extension_Int128_472_i128 const& $this ) -> const $extension_Int128_472_i128;
	#line 472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int128_472_i128, IBinaryNumber, IBinaryNumber, $extension_Int128_472_i128);
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
#line 616 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	using $extension_Int128_616_i128 = Builtin::i128;
	#line 616 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE(ICheckedArithmetic, ICheckedArithmetic);
	#line 619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_add_qst($extension_Int128_616_i128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int128_616_i128>;
	#line 628 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_add_qst_eq($extension_Int128_616_i128 & $this , T rhs) noexcept -> typename $extension_Int128_616_i128&;
	#line 639 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_add_ne($extension_Int128_616_i128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int128_616_i128;
	#line 646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_add_ne_eq($extension_Int128_616_i128 & $this , T rhs)  -> typename $extension_Int128_616_i128&;
	#line 650 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_add_mod($extension_Int128_616_i128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int128_616_i128;
	#line 657 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_add_mod_eq($extension_Int128_616_i128 & $this , T rhs) noexcept -> typename $extension_Int128_616_i128&;
	#line 661 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_add_or($extension_Int128_616_i128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int128_616_i128;
	#line 668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_add_or_eq($extension_Int128_616_i128 & $this , T rhs) noexcept -> typename $extension_Int128_616_i128&;
	#line 672 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_add_mod_qst($extension_Int128_616_i128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_Int128_616_i128, bool>;
	#line 680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_qst($extension_Int128_616_i128 & $this )  -> typename $extension_Int128_616_i128&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_qst_postfix($extension_Int128_616_i128 & $this)  -> decltype(auto);
	#line 683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_ne($extension_Int128_616_i128 & $this )  -> typename $extension_Int128_616_i128&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_ne_postfix($extension_Int128_616_i128 & $this)  -> decltype(auto);
	#line 686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_mod($extension_Int128_616_i128 & $this )  -> typename $extension_Int128_616_i128&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_mod_postfix($extension_Int128_616_i128 & $this)  -> decltype(auto);
	#line 689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_or($extension_Int128_616_i128 & $this )  -> typename $extension_Int128_616_i128&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_or_postfix($extension_Int128_616_i128 & $this)  -> decltype(auto);
	#line 693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto CarryingAdd($extension_Int128_616_i128 const& $this LIFETIMEBOUND, $extension_Int128_616_i128 rhs, bool carry) noexcept -> const std::tuple<$extension_Int128_616_i128, bool>;
	#line 702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto BorrowingSub($extension_Int128_616_i128 const& $this LIFETIMEBOUND, $extension_Int128_616_i128 rhs, bool carry) noexcept -> const std::tuple<$extension_Int128_616_i128, bool>;
	#line 711 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_sub_qst($extension_Int128_616_i128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int128_616_i128>;
	#line 720 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_sub_qst_eq($extension_Int128_616_i128 & $this , T rhs) noexcept -> typename $extension_Int128_616_i128&;
	#line 731 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_sub_ne($extension_Int128_616_i128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int128_616_i128;
	#line 738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_sub_ne_eq($extension_Int128_616_i128 & $this , T rhs)  -> typename $extension_Int128_616_i128&;
	#line 742 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_sub_mod($extension_Int128_616_i128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int128_616_i128;
	#line 749 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_sub_mod_eq($extension_Int128_616_i128 & $this , T rhs) noexcept -> typename $extension_Int128_616_i128&;
	#line 753 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_sub_or($extension_Int128_616_i128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int128_616_i128;
	#line 760 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_sub_or_eq($extension_Int128_616_i128 & $this , T rhs) noexcept -> typename $extension_Int128_616_i128&;
	#line 764 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_sub_mod_qst($extension_Int128_616_i128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_Int128_616_i128, bool>;
	#line 772 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_qst($extension_Int128_616_i128 & $this )  -> typename $extension_Int128_616_i128&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_qst_postfix($extension_Int128_616_i128 & $this)  -> decltype(auto);
	#line 775 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_ne($extension_Int128_616_i128 & $this )  -> typename $extension_Int128_616_i128&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_ne_postfix($extension_Int128_616_i128 & $this)  -> decltype(auto);
	#line 778 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_mod($extension_Int128_616_i128 & $this )  -> typename $extension_Int128_616_i128&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_mod_postfix($extension_Int128_616_i128 & $this)  -> decltype(auto);
	#line 781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_or($extension_Int128_616_i128 & $this )  -> typename $extension_Int128_616_i128&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_or_postfix($extension_Int128_616_i128 & $this)  -> decltype(auto);
	#line 785 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mul_qst($extension_Int128_616_i128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int128_616_i128>;
	#line 794 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mul_qst_eq($extension_Int128_616_i128 & $this , T rhs) noexcept -> typename $extension_Int128_616_i128&;
	#line 805 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mul_ne($extension_Int128_616_i128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int128_616_i128;
	#line 812 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mul_ne_eq($extension_Int128_616_i128 & $this , T rhs)  -> typename $extension_Int128_616_i128&;
	#line 816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mul_mod($extension_Int128_616_i128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int128_616_i128;
	#line 823 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mul_mod_eq($extension_Int128_616_i128 & $this , T rhs) noexcept -> typename $extension_Int128_616_i128&;
	#line 827 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mul_or($extension_Int128_616_i128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int128_616_i128;
	#line 834 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mul_or_eq($extension_Int128_616_i128 & $this , T rhs) noexcept -> typename $extension_Int128_616_i128&;
	#line 838 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mul_mod_qst($extension_Int128_616_i128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_Int128_616_i128, bool>;
	#line 847 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline auto _operator_mul_gt($extension_Int128_616_i128 const& $this LIFETIMEBOUND, $extension_Int128_616_i128 rhs) noexcept -> const std::tuple<Builtin::u128, Builtin::i128>;
	#line 856 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline auto CarryingMul($extension_Int128_616_i128 const& $this LIFETIMEBOUND, $extension_Int128_616_i128 rhs, $extension_Int128_616_i128 carry) noexcept -> const std::tuple<Builtin::u128, Builtin::i128>;
	#line 864 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_qst($extension_Int128_616_i128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int128_616_i128>;
	#line 873 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_qst_eq($extension_Int128_616_i128 & $this , T rhs) noexcept -> typename $extension_Int128_616_i128&;
	#line 885 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_ne($extension_Int128_616_i128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int128_616_i128;
	#line 892 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_ne_eq($extension_Int128_616_i128 & $this , T rhs)  -> typename $extension_Int128_616_i128&;
	#line 897 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_mod($extension_Int128_616_i128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int128_616_i128;
	#line 904 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_eq($extension_Int128_616_i128 & $this , T rhs)  -> typename $extension_Int128_616_i128&;
	#line 909 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_or($extension_Int128_616_i128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int128_616_i128;
	#line 916 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_or_eq($extension_Int128_616_i128 & $this , T rhs)  -> typename $extension_Int128_616_i128&;
	#line 921 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_qst($extension_Int128_616_i128 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_Int128_616_i128, bool>;
	#line 930 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst($extension_Int128_616_i128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int128_616_i128>;
	#line 940 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst_eq($extension_Int128_616_i128 & $this , T rhs) noexcept -> typename $extension_Int128_616_i128&;
	#line 951 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mod_qst($extension_Int128_616_i128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int128_616_i128>;
	#line 960 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mod_qst_eq($extension_Int128_616_i128 & $this , T rhs) noexcept -> typename $extension_Int128_616_i128&;
	#line 972 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mod_ne($extension_Int128_616_i128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int128_616_i128;
	#line 979 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mod_ne_eq($extension_Int128_616_i128 & $this , T rhs)  -> typename $extension_Int128_616_i128&;
	#line 984 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mod_mod($extension_Int128_616_i128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int128_616_i128;
	#line 991 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mod_mod_eq($extension_Int128_616_i128 & $this , T rhs)  -> typename $extension_Int128_616_i128&;
	#line 996 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mod_mod_qst($extension_Int128_616_i128 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_Int128_616_i128, bool>;
	#line 1005 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_sub_qst($extension_Int128_616_i128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::Nullable<$extension_Int128_616_i128>;
	#line 1015 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_sub_ne($extension_Int128_616_i128 const& $this LIFETIMEBOUND)  -> const typename $extension_Int128_616_i128;
	#line 1022 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_sub_mod($extension_Int128_616_i128 const& $this LIFETIMEBOUND)  -> const typename $extension_Int128_616_i128;
	#line 1030 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_sub_or($extension_Int128_616_i128 const& $this LIFETIMEBOUND)  -> const typename $extension_Int128_616_i128;
	#line 1038 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_sub_mod_qst($extension_Int128_616_i128 const& $this LIFETIMEBOUND)  -> const std::tuple<$extension_Int128_616_i128, bool>;
	#line 1046 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_lt_lt_qst($extension_Int128_616_i128 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<$extension_Int128_616_i128>;
	#line 1054 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_lt_lt_qst_eq($extension_Int128_616_i128 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int128_616_i128&;
	#line 1062 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_lt_lt_ne($extension_Int128_616_i128 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_Int128_616_i128;
	#line 1070 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_lt_lt_ne_eq($extension_Int128_616_i128 & $this , Builtin::i32 amount)  -> typename $extension_Int128_616_i128&;
	#line 1072 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_lt_lt_mod($extension_Int128_616_i128 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename $extension_Int128_616_i128;
	#line 1075 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_lt_lt_mod_eq($extension_Int128_616_i128 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int128_616_i128&;
	#line 1077 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_lt_lt_mod_qst($extension_Int128_616_i128 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<$extension_Int128_616_i128, bool>;
	#line 1080 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_gt_gt_qst($extension_Int128_616_i128 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<$extension_Int128_616_i128>;
	#line 1088 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_gt_gt_qst_eq($extension_Int128_616_i128 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int128_616_i128&;
	#line 1096 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_gt_gt_ne($extension_Int128_616_i128 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_Int128_616_i128;
	#line 1104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_gt_gt_ne_eq($extension_Int128_616_i128 & $this , Builtin::i32 amount)  -> typename $extension_Int128_616_i128&;
	#line 1106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_gt_gt_mod($extension_Int128_616_i128 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename $extension_Int128_616_i128;
	#line 1109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_gt_gt_mod_eq($extension_Int128_616_i128 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int128_616_i128&;
	#line 1111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_gt_gt_mod_qst($extension_Int128_616_i128 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<$extension_Int128_616_i128, bool>;
	#line 1116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor_qst($extension_Int128_616_i128 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const Builtin::Nullable<$extension_Int128_616_i128>;
	#line 1145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor_qst_eq($extension_Int128_616_i128 & $this , Builtin::u32 exp) noexcept -> typename $extension_Int128_616_i128&;
	#line 1153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor_ne($extension_Int128_616_i128 const& $this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename $extension_Int128_616_i128;
	#line 1174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor_ne_eq($extension_Int128_616_i128 & $this , Builtin::u32 exp)  -> typename $extension_Int128_616_i128&;
	#line 1176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor_mod($extension_Int128_616_i128 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename $extension_Int128_616_i128;
	#line 1208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor_mod_eq($extension_Int128_616_i128 & $this , Builtin::u32 exp) noexcept -> typename $extension_Int128_616_i128&;
	#line 1210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor_or($extension_Int128_616_i128 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename $extension_Int128_616_i128;
	#line 1219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor_or_eq($extension_Int128_616_i128 & $this , Builtin::u32 exp) noexcept -> typename $extension_Int128_616_i128&;
	#line 1221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor_mod_qst($extension_Int128_616_i128 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const std::tuple<$extension_Int128_616_i128, bool>;
	#line 1252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getCheckedAbs($extension_Int128_616_i128 const& $this ) -> const Builtin::Nullable<$extension_Int128_616_i128>;
	#line 1255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getStrictAbs($extension_Int128_616_i128 const& $this ) -> const $extension_Int128_616_i128;
	#line 1258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getWrappingAbs($extension_Int128_616_i128 const& $this ) -> const $extension_Int128_616_i128;
	#line 1261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getSaturatingAbs($extension_Int128_616_i128 const& $this ) -> const $extension_Int128_616_i128;
	#line 1264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getOverflowingAbs($extension_Int128_616_i128 const& $this ) -> const std::tuple<$extension_Int128_616_i128, bool>;
	#line 616 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int128_616_i128, ICheckedArithmetic, ICheckedArithmetic, $extension_Int128_616_i128);
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
#line 1273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	using $extension_Int128_1273_i128 = Builtin::i128;
	#line 1273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE(IBinaryInteger, IBinaryInteger);
	#line 1324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NextMultipleOf($extension_Int128_1273_i128 const& $this LIFETIMEBOUND, $extension_Int128_1273_i128 rhs)  -> const typename $extension_Int128_1273_i128;
	#line 1340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto CheckedNextMultipleOf($extension_Int128_1273_i128 const& $this LIFETIMEBOUND, $extension_Int128_1273_i128 rhs) noexcept -> const Builtin::Nullable<$extension_Int128_1273_i128>;
	#line 1274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class __TT> struct $static_getIsSigned; template<> struct $static_getIsSigned<$extension_Int128_1273_i128> { static inline constexpr auto get() -> const bool; };
	#line 1276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getTrailingZeroCount($extension_Int128_1273_i128 const& $this ) -> const Builtin::u32;
	#line 1283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getTrailingOneCount($extension_Int128_1273_i128 const& $this ) -> const Builtin::u32;
	#line 1284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getByteCount($extension_Int128_1273_i128 const& $this ) -> const Builtin::u32;
	#line 1285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getMinimalBitWidth($extension_Int128_1273_i128 const& $this ) -> const Builtin::u32;
	#line 1289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ASTRUMSTD_API auto getCheckedIsqrt($extension_Int128_1273_i128 const& $this ) -> const Builtin::Nullable<$extension_Int128_1273_i128>;
	#line 1301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline auto getIsqrt($extension_Int128_1273_i128 const& $this ) -> const $extension_Int128_1273_i128;
	#line 1310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getLog2Ceiling($extension_Int128_1273_i128 const& $this ) -> const $extension_Int128_1273_i128;
	#line 1361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getPrevPow2($extension_Int128_1273_i128 const& $this ) -> const $extension_Int128_1273_i128;
	#line 1372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getNextPow2($extension_Int128_1273_i128 const& $this ) -> const $extension_Int128_1273_i128;
	#line 1384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getCheckedNextPow2($extension_Int128_1273_i128 const& $this ) -> const Builtin::Nullable<$extension_Int128_1273_i128>;
	#line 1396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getWrappingNextPow2($extension_Int128_1273_i128 const& $this ) -> const $extension_Int128_1273_i128;
	#line 1273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int128_1273_i128, IBinaryInteger, IBinaryInteger, $extension_Int128_1273_i128);
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
#line 1407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	using $extension_Int128_1407_i128 = Builtin::i128;
	#line 1407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE(IFixedWidthInteger, IFixedWidthInteger);
	#line 1447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto RotateLeft($extension_Int128_1407_i128 const& $this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename $extension_Int128_1407_i128;
	#line 1448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto RotateRight($extension_Int128_1407_i128 const& $this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename $extension_Int128_1407_i128;
	#line 1408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class __TT> struct $static_getBitWidth; template<> struct $static_getBitWidth<$extension_Int128_1407_i128> { static inline constexpr auto get() -> const Builtin::u32; };
	#line 1410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getLeadingZeroCount($extension_Int128_1407_i128 const& $this ) -> const Builtin::u32;
	#line 1418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getLeadingOneCount($extension_Int128_1407_i128 const& $this ) -> const Builtin::u32;
	#line 1419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getPopCount($extension_Int128_1407_i128 const& $this ) -> const Builtin::u32;
	#line 1420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getZeroCount($extension_Int128_1407_i128 const& $this ) -> const Builtin::u32;
	#line 1421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getByteSwapped($extension_Int128_1407_i128 const& $this ) -> const $extension_Int128_1407_i128;
	#line 1422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getBigEndian($extension_Int128_1407_i128 const& $this ) -> const $extension_Int128_1407_i128;
	#line 1429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getLittleEndian($extension_Int128_1407_i128 const& $this ) -> const $extension_Int128_1407_i128;
	#line 1436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getReverseBits($extension_Int128_1407_i128 const& $this ) -> const $extension_Int128_1407_i128;
	#line 1438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getShortestBitLength($extension_Int128_1407_i128 const& $this ) -> const Builtin::u32;
	#line 1407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int128_1407_i128, IFixedWidthInteger, IFixedWidthInteger, $extension_Int128_1407_i128);
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
#line 1452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	using $extension_Int128_1452_i128 = Builtin::i128;
	#line 1452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE(IBinaryIntegerFormatInfo, IBinaryIntegerFormatInfo);
	#line 1460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto IsGreaterThanAsUnsigned($extension_Int128_1452_i128 const& $this LIFETIMEBOUND, $extension_Int128_1452_i128 rhs) noexcept -> const bool;
	#line 1453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class __TT> struct $static_getMaxDigitCount; template<> struct $static_getMaxDigitCount<$extension_Int128_1452_i128> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class __TT> struct $static_getMaxHexDigitCount; template<> struct $static_getMaxHexDigitCount<$extension_Int128_1452_i128> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class __TT> struct $static_getMaxValueDiv10; template<> struct $static_getMaxValueDiv10<$extension_Int128_1452_i128> { static inline constexpr auto get() -> const $extension_Int128_1452_i128; };
	#line 1457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getMultiplyBy10($extension_Int128_1452_i128 const& $this ) -> const $extension_Int128_1452_i128;
	#line 1458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getMultiplyBy16($extension_Int128_1452_i128 const& $this ) -> const $extension_Int128_1452_i128;
	#line 1452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int128_1452_i128, IBinaryIntegerFormatInfo, IBinaryIntegerFormatInfo, $extension_Int128_1452_i128);
	} namespace System{
using $extensions::IsGreaterThanAsUnsigned;
using $extensions::$static_getMaxDigitCount;
using $extensions::$static_getMaxHexDigitCount;
using $extensions::$static_getMaxValueDiv10;
using $extensions::getMultiplyBy10;
using $extensions::getMultiplyBy16;

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
	inline constexpr auto getHashCode($extension_Int128_21_i128 const& $this ) -> const Builtin::u64
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
	template<class T> inline constexpr auto _operator_div_mod($extension_Int128_198_i128 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_Int128_198_i128, $extension_Int128_198_i128>
	{
		#line 203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return std::make_tuple(ADV_UFCS(_operator_bsl)($this, rhs), $this % rhs);
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
	template<class T> inline constexpr auto _operator_div_gt($extension_Int128_198_i128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int128_198_i128
	{
		#line 233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if constexpr (Builtin::TypeIs<T, IBinaryInteger>()) {
			#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			const auto& [div, rem] = ADV_UFCS(_operator_div_mod)($this, rhs);
			#line 235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			if (rem == Builtin::i32(0)) {
				#line 236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				return div;
			}
			#line 238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			Builtin::Auto<decltype(Builtin::i32(1) + (($this ^ rhs) >> (ADV_USPCS(BitWidth, $extension_Int128_198_i128)() - Builtin::i32(1))))> correction = Builtin::i32(1) + (($this ^ rhs) >> (ADV_USPCS(BitWidth, $extension_Int128_198_i128)() - Builtin::i32(1))); 
			#line 239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return div + correction;
		} else {
			#line 240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			{
				#line 241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				return Builtin::Cast<true, $extension_Int128_198_i128>((ADV_UFCS(_operator_div_gt)(Builtin::f64{$this}, rhs)));
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_div_gt_eq($extension_Int128_198_i128 & $this , auto rhs)  -> typename $extension_Int128_198_i128&
	{
		#line 245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this = $extension_Int128_198_i128{ADV_UFCS(_operator_div_gt)($this, rhs)}); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	
} namespace $extensions { using namespace System;
#line 250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl($extension_Int128_248_i128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int128_248_i128
	{
		#line 250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Div)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_eq($extension_Int128_248_i128 & $this , T rhs)  -> typename $extension_Int128_248_i128&
	{
		#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(DivAssign)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl($extension_Int128_248_i128 const& $this LIFETIMEBOUND, T rhs)  -> const Builtin::Nullable<$extension_Int128_248_i128>
	{
		#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_248_i128 result{}; 
		#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (Builtin::DivExact($this, rhs, result)) {
			#line 262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return result;
		}
		#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return nullptr;
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	
} namespace $extensions { using namespace System;
#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor($extension_Int128_268_i128 const& $this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename $extension_Int128_268_i128
	{
		#line 273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return Builtin::i32(1);
		}
		#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Auto<decltype(Builtin::i128(1LL))> result = Builtin::i128(1LL); 
		#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (std::is_constant_evaluated()) {
			#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			while ((exp <=> Builtin::i32(1)) > 0) 
			{
				#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
					#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
					result *= base;
				}
				#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
				#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				base *= base;
			}
			#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return result * base;
		} else {
			#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			{
				#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				for (;;) 
				{
					#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
					if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
						#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
						result *= base;
						#line 294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
						if (exp == Builtin::i32(1)) {
							#line 295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
							return result;
						}
					}
					#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
					ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
					#line 298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
					base *= base;
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor_eq($extension_Int128_268_i128 & $this , Builtin::u32 exp)  -> typename $extension_Int128_268_i128&
	{
		#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_xor_xor)($this, exp)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	
} namespace $extensions { using namespace System;
#line 359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline auto MaxMagnitudeNumber($extension_Int128_306_i128 const& $this LIFETIMEBOUND, $extension_Int128_306_i128 rhs)  -> const typename $extension_Int128_306_i128
	{
		#line 359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(MaxMagnitude)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline auto MinMagnitudeNumber($extension_Int128_306_i128 const& $this LIFETIMEBOUND, $extension_Int128_306_i128 rhs)  -> const typename $extension_Int128_306_i128
	{
		#line 390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(MinMagnitude)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToInt8($extension_Int128_306_i128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i8
	{
		#line 404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i8>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToUInt8($extension_Int128_306_i128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u8
	{
		#line 405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u8>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToInt16($extension_Int128_306_i128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i16
	{
		#line 406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i16>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToUInt16($extension_Int128_306_i128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u16
	{
		#line 407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u16>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToInt32($extension_Int128_306_i128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i32
	{
		#line 408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i32>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToUInt32($extension_Int128_306_i128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u32
	{
		#line 409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u32>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToInt64($extension_Int128_306_i128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i64
	{
		#line 410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i64>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToUInt64($extension_Int128_306_i128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u64
	{
		#line 411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u64>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToInt128($extension_Int128_306_i128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i128
	{
		#line 412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToUInt128($extension_Int128_306_i128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u128
	{
		#line 413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u128>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToIsize($extension_Int128_306_i128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::isize
	{
		#line 414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::isize>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToUsize($extension_Int128_306_i128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::usize
	{
		#line 415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::usize>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto $static_getOne<$extension_Int128_306_i128>::get() -> const $extension_Int128_306_i128
	{
		#line 307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::i128(1LL)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto $static_getZero<$extension_Int128_306_i128>::get() -> const $extension_Int128_306_i128
	{
		#line 308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::i128(0LL)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto $static_getRadix<$extension_Int128_306_i128>::get() -> const Builtin::i32
	{
		#line 309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(2)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getAbs($extension_Int128_306_i128 const& $this ) -> const $extension_Int128_306_i128
	{
		#line 311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)($this.$ref()) ? -$this : $this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsCanonical($extension_Int128_306_i128 const& $this ) -> const bool
	{
		#line 312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsComplexNumber($extension_Int128_306_i128 const& $this ) -> const bool
	{
		#line 313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsEvenInteger($extension_Int128_306_i128 const& $this ) -> const bool
	{
		#line 314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY((ADV_UFCS(Low64)($this.$ref()) & Builtin::u32(1U)) == Builtin::i32(0)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsFinite($extension_Int128_306_i128 const& $this ) -> const bool
	{
		#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsImaginaryNumber($extension_Int128_306_i128 const& $this ) -> const bool
	{
		#line 316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsInfinity($extension_Int128_306_i128 const& $this ) -> const bool
	{
		#line 317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsInteger($extension_Int128_306_i128 const& $this ) -> const bool
	{
		#line 318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsNaN($extension_Int128_306_i128 const& $this ) -> const bool
	{
		#line 319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsNegative($extension_Int128_306_i128 const& $this ) -> const bool
	{
		#line 320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY((ADV_UFCS(High64)($this.$ref()) <=> Builtin::i32(0)) < 0); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsNegativeInfinity($extension_Int128_306_i128 const& $this ) -> const bool
	{
		#line 321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsNormal($extension_Int128_306_i128 const& $this ) -> const bool
	{
		#line 322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this != Builtin::i32(0)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsOddInteger($extension_Int128_306_i128 const& $this ) -> const bool
	{
		#line 323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY((ADV_UFCS(Low64)($this.$ref()) & Builtin::u32(1U)) != Builtin::i32(0)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsPositive($extension_Int128_306_i128 const& $this ) -> const bool
	{
		#line 324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY((ADV_UFCS(High64)($this.$ref()) <=> Builtin::i32(0)) >= 0); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsPositiveInfinity($extension_Int128_306_i128 const& $this ) -> const bool
	{
		#line 325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsRealNumber($extension_Int128_306_i128 const& $this ) -> const bool
	{
		#line 326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsSubnormal($extension_Int128_306_i128 const& $this ) -> const bool
	{
		#line 327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsZero($extension_Int128_306_i128 const& $this ) -> const bool
	{
		#line 328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this == Builtin::i32(0)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	
} namespace $extensions { using namespace System;
#line 419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto $static_getMinusOne<$extension_Int128_418_i128>::get() -> const $extension_Int128_418_i128
	{
		#line 419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::i128(-1LL)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	
} namespace $extensions { using namespace System;
#line 454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto Max($extension_Int128_422_i128 const& $this LIFETIMEBOUND, $extension_Int128_422_i128 rhs) noexcept -> const typename $extension_Int128_422_i128
	{
		#line 454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY((($this <=> rhs) >= 0) ? $this : rhs); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto MaxNumber($extension_Int128_422_i128 const& $this LIFETIMEBOUND, $extension_Int128_422_i128 rhs) noexcept -> const typename $extension_Int128_422_i128
	{
		#line 455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Max)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto Min($extension_Int128_422_i128 const& $this LIFETIMEBOUND, $extension_Int128_422_i128 rhs) noexcept -> const typename $extension_Int128_422_i128
	{
		#line 456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY((($this <=> rhs) <= 0) ? $this : rhs); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto MinNumber($extension_Int128_422_i128 const& $this LIFETIMEBOUND, $extension_Int128_422_i128 rhs) noexcept -> const typename $extension_Int128_422_i128
	{
		#line 457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Min)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto Clamp($extension_Int128_422_i128 const& $this LIFETIMEBOUND, $extension_Int128_422_i128 min, $extension_Int128_422_i128 max)  -> const typename $extension_Int128_422_i128
	{
		#line 460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((min <=> max) > 0) {
			#line 461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			Builtin::Throw(Builtin::InvalidOperationException{});
		}
		#line 464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Auto<decltype($this)> result = $this; 
		#line 465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		result = ADV_UFCS(Max)(result.$ref(), min);
		#line 466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		result = ADV_UFCS(Min)(result.$ref(), max);
		#line 468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getSign($extension_Int128_422_i128 const& $this ) -> const Builtin::i32
	{
		#line 425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (ADV_UPCS(IsNegative)($this.$ref())) {
			#line 426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return Builtin::i32(-1);
		}
		#line 429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (ADV_UPCS(IsNormal)($this.$ref())) {
			#line 430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return Builtin::i32(1);
		}
		#line 433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return Builtin::i32(0);
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	
} namespace $extensions { using namespace System;
#line 550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto CheckedLog($extension_Int128_472_i128 const& $this LIFETIMEBOUND, $extension_Int128_472_i128 base) noexcept -> const Builtin::Nullable<$extension_Int128_472_i128>
	{
		#line 552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (($this <=> Builtin::i32(0)) <= 0 || (base <=> Builtin::i32(1)) <= 0) {
			#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return nullptr;
		}
		#line 556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (std::is_constant_evaluated()) {
			#line 557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			if (base == Builtin::i32(2)) {
				#line 558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				return ADV_UPCS(CheckedLog2)($this.$ref());
			}
			#line 560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			if (base == Builtin::i32(10)) {
				#line 561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				return ADV_UPCS(CheckedLog10)($this.$ref());
			}
		}
		#line 565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (($this <=> base) < 0) {
			#line 566 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return Builtin::i32(0);
		}
		#line 569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Auto<decltype(ADV_UFCS(_operator_bsl)(ADV_UPCS(Log2)($this.$ref()), (ADV_UPCS(Log2)(base.$ref()) + Builtin::i32(1))))> n = ADV_UFCS(_operator_bsl)(ADV_UPCS(Log2)($this.$ref()), (ADV_UPCS(Log2)(base.$ref()) + Builtin::i32(1))); 
		#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Auto<decltype(ADV_UFCS(_operator_xor_xor)(base, (Builtin::Cast<true, Builtin::u32>(n))))> r = ADV_UFCS(_operator_xor_xor)(base, (Builtin::Cast<true, Builtin::u32>(n))); 
		#line 572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_bsl)($this, base))> baseRatio = ADV_UFCS(_operator_bsl)($this, base); 
		#line 573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		while ((r <=> baseRatio) <= 0) 
		{
			#line 574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			++n;
			#line 575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			r *= base;
		}
		#line 578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return n;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto Midpoint($extension_Int128_472_i128 const& $this LIFETIMEBOUND, $extension_Int128_472_i128 rhs) noexcept -> const typename $extension_Int128_472_i128
	{
		#line 596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		const Builtin::Auto<decltype((($this ^ rhs) >> Builtin::i32(1)) + ($this & rhs))> result = (($this ^ rhs) >> Builtin::i32(1)) + ($this & rhs); 
		#line 597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		const Builtin::Auto<decltype((result <=> Builtin::i32(0)) < 0)> correction = (result <=> Builtin::i32(0)) < 0; 
		#line 598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result + ((Builtin::Cast<true, $extension_Int128_472_i128>(correction)) & ($this ^ rhs));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto IsMultipleOf($extension_Int128_472_i128 const& $this LIFETIMEBOUND, $extension_Int128_472_i128 rhs) noexcept -> const bool
	{
		#line 604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (rhs == Builtin::i32(0)) {
			#line 605 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return $this == Builtin::i32(0);
		}
		#line 608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (rhs == Builtin::i32(-1)) {
			#line 609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return Builtin::Boolean(true);
		}
		#line 612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return $this % rhs == Builtin::i32(0);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto $static_getAllBitsSet<$extension_Int128_472_i128>::get() -> const $extension_Int128_472_i128
	{
		#line 474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(MinusOne, Builtin::i128)()); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsPow2($extension_Int128_472_i128 const& $this ) -> const bool
	{
		#line 477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsPositive)($this.$ref()) && ADV_UPCS(PopCount)($this.$ref()) == Builtin::i32(1)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 481 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getCheckedLog2($extension_Int128_472_i128 const& $this ) -> const Builtin::Nullable<$extension_Int128_472_i128>
	{
		#line 483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (($this <=> Builtin::i32(0)) <= 0) {
			#line 484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return nullptr;
		}
		#line 487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return Builtin::Cast<true, $extension_Int128_472_i128>((ADV_USPCS(BitWidth, $extension_Int128_472_i128)() - Builtin::i32(1) - ADV_UPCS(LeadingZeroCount)($this.$ref())));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getLog2($extension_Int128_472_i128 const& $this ) -> const $extension_Int128_472_i128
	{
		#line 493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (const auto result = ADV_UPCS(CheckedLog2)($this.$ref())) {
			{
				#line 493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				return result;
			}
		}
		#line 496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getCheckedLog10($extension_Int128_472_i128 const& $this ) -> const Builtin::Nullable<$extension_Int128_472_i128>
	{
		#line 503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (($this <=> Builtin::i32(0)) <= 0) {
			#line 504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return nullptr;
		}
		#line 507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		constexpr Builtin::u32 C1 = Builtin::u32(0b01100000000000000000U) - Builtin::i32(10);
		#line 508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		constexpr Builtin::u32 C2 = Builtin::u32(0b10000000000000000000U) - Builtin::i32(100);
		#line 509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		constexpr Builtin::u32 C3 = Builtin::u32(0b11100000000000000000U) - Builtin::i32(1000);
		#line 510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		constexpr Builtin::u32 C4 = Builtin::u32(0b10000000000000000000U) - Builtin::i32(10000);
		#line 511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Auto<decltype(Builtin::i32(0))> log = Builtin::i32(0); 
		#line 512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Auto<decltype(Builtin::Cast<true, Builtin::u128>($this))> val1 = Builtin::Cast<true, Builtin::u128>($this); 
		#line 513 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((val1 <=> Builtin::ParseInt128("100000000000000000000000000000000")) >= 0) {
			#line 514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_UFCS(DivAssign)(val1.$ref(), Builtin::ParseUInt128("100000000000000000000000000000000"));
			#line 515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			log += Builtin::i32(32);
			#line 516 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			if ((val1 <=> Builtin::i32(100000)) >= 0) {
				#line 517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				ADV_UFCS(DivAssign)(val1.$ref(), Builtin::u32(100000U));
				#line 518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				log += Builtin::i32(5);
			}
			#line 520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::u32>(val1))> val = Builtin::Cast<true, Builtin::u32>(val1); 
			#line 521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return log + ((((val + C1) & (val + C2)) ^ ((val + C3) & (val + C4))) >> Builtin::i32(17));
		}
		#line 523 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((val1 <=> Builtin::i64(10000000000000000LL)) >= 0) {
			#line 524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_UFCS(DivAssign)(val1.$ref(), Builtin::u64(10000000000000000ULL));
			#line 525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			log += Builtin::i32(16);
		}
		#line 527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((val1 <=> Builtin::i64(10000000000LL)) >= 0) {
			#line 528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_UFCS(DivAssign)(val1.$ref(), Builtin::u64(10000000000ULL));
			#line 529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			log += Builtin::i32(10);
		}
		#line 531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((val1 <=> Builtin::i32(100000)) >= 0) {
			#line 532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_UFCS(DivAssign)(val1.$ref(), Builtin::u32(100000U));
			#line 533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			log += Builtin::i32(5);
		}
		#line 535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::u32>(val1))> val = Builtin::Cast<true, Builtin::u32>(val1); 
		#line 536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return log + ((((val + C1) & (val + C2)) ^ ((val + C3) & (val + C4))) >> Builtin::i32(17));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getLog10($extension_Int128_472_i128 const& $this ) -> const $extension_Int128_472_i128
	{
		#line 542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (const auto result = ADV_UPCS(CheckedLog10)($this.$ref())) {
			{
				#line 542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				return result;
			}
		}
		#line 545 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	
} namespace $extensions { using namespace System;
#line 619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_add_qst($extension_Int128_616_i128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int128_616_i128>
	{
		#line 621 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +? implemented only for integer types");
		#line 622 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_616_i128 result{}; 
		#line 623 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (Builtin::SafeAdd($this, rhs, result)) {
			#line 624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return result;
		}
		#line 626 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 628 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_add_qst_eq($extension_Int128_616_i128 & $this , T rhs) noexcept -> typename $extension_Int128_616_i128&
	{
		#line 630 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +?= implemented only for integer types");
		#line 631 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (const auto result = ADV_UFCS(_operator_add_qst)($this, rhs)) {
			{
				#line 631 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 632 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				$this = result;
			}
		}
		#line 634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 639 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_add_ne($extension_Int128_616_i128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int128_616_i128
	{
		#line 641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +! implemented only for integer types");
		#line 642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_616_i128 result{}; 
		#line 643 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::StrictAdd($this, rhs, result);
		#line 644 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_add_ne_eq($extension_Int128_616_i128 & $this , T rhs)  -> typename $extension_Int128_616_i128&
	{
		#line 646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_add_ne)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 650 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_add_mod($extension_Int128_616_i128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int128_616_i128
	{
		#line 652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +% implemented only for integer types");
		#line 653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_616_i128 result{}; 
		#line 654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::WrappingAdd($this, rhs, result);
		#line 655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 657 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_add_mod_eq($extension_Int128_616_i128 & $this , T rhs) noexcept -> typename $extension_Int128_616_i128&
	{
		#line 657 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_add_mod)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 661 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_add_or($extension_Int128_616_i128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int128_616_i128
	{
		#line 663 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +| implemented only for integer types");
		#line 664 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_616_i128 result{}; 
		#line 665 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::SaturatingAdd($this, rhs, result);
		#line 666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_add_or_eq($extension_Int128_616_i128 & $this , T rhs) noexcept -> typename $extension_Int128_616_i128&
	{
		#line 668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_add_or)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 672 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_add_mod_qst($extension_Int128_616_i128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_Int128_616_i128, bool>
	{
		#line 673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +%? implemented only for integer types");
		#line 674 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_616_i128 result{}; 
		#line 675 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Auto<decltype(!Builtin::SafeAdd($this, rhs, result))> overflowed = !Builtin::SafeAdd($this, rhs, result); 
		#line 676 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_add_add_qst($extension_Int128_616_i128 & $this )  -> typename $extension_Int128_616_i128&
	{
		#line 680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_qst_eq)($this, Builtin::i128(1LL))); 
	}
	inline constexpr auto _operator_add_add_qst_postfix($extension_Int128_616_i128 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_add_add_qst)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_add_add_ne($extension_Int128_616_i128 & $this )  -> typename $extension_Int128_616_i128&
	{
		#line 683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_ne_eq)($this, Builtin::i128(1LL))); 
	}
	inline constexpr auto _operator_add_add_ne_postfix($extension_Int128_616_i128 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_add_add_ne)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_add_add_mod($extension_Int128_616_i128 & $this )  -> typename $extension_Int128_616_i128&
	{
		#line 686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_mod_eq)($this, Builtin::i128(1LL))); 
	}
	inline constexpr auto _operator_add_add_mod_postfix($extension_Int128_616_i128 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_add_add_mod)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_add_add_or($extension_Int128_616_i128 & $this )  -> typename $extension_Int128_616_i128&
	{
		#line 689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_or_eq)($this, Builtin::i128(1LL))); 
	}
	inline constexpr auto _operator_add_add_or_postfix($extension_Int128_616_i128 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_add_add_or)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto CarryingAdd($extension_Int128_616_i128 const& $this LIFETIMEBOUND, $extension_Int128_616_i128 rhs, bool carry) noexcept -> const std::tuple<$extension_Int128_616_i128, bool>
	{
		#line 695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_616_i128 result{}; 
		#line 696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Auto<decltype(Builtin::CarryingAdd($this, rhs, carry, result))> overflowed = Builtin::CarryingAdd($this, rhs, carry, result); 
		#line 697 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto BorrowingSub($extension_Int128_616_i128 const& $this LIFETIMEBOUND, $extension_Int128_616_i128 rhs, bool carry) noexcept -> const std::tuple<$extension_Int128_616_i128, bool>
	{
		#line 704 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_616_i128 result{}; 
		#line 705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Auto<decltype(Builtin::BorrowingSub($this, rhs, carry, result))> overflowed = Builtin::BorrowingSub($this, rhs, carry, result); 
		#line 706 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 711 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_sub_qst($extension_Int128_616_i128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int128_616_i128>
	{
		#line 713 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -? implemented only for integer types");
		#line 714 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_616_i128 result{}; 
		#line 715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (Builtin::SafeSubtract($this, rhs, result)) {
			#line 716 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return result;
		}
		#line 718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 720 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_sub_qst_eq($extension_Int128_616_i128 & $this , T rhs) noexcept -> typename $extension_Int128_616_i128&
	{
		#line 722 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -?= implemented only for integer types");
		#line 723 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (const auto result = ADV_UFCS(_operator_sub_qst)($this, rhs)) {
			{
				#line 723 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 724 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				$this = result;
			}
		}
		#line 726 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 731 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_sub_ne($extension_Int128_616_i128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int128_616_i128
	{
		#line 733 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -! implemented only for integer types");
		#line 734 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_616_i128 result{}; 
		#line 735 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::StrictSubtract($this, rhs, result);
		#line 736 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_sub_ne_eq($extension_Int128_616_i128 & $this , T rhs)  -> typename $extension_Int128_616_i128&
	{
		#line 738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_sub_ne)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 742 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_sub_mod($extension_Int128_616_i128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int128_616_i128
	{
		#line 744 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -% implemented only for integer types");
		#line 745 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_616_i128 result{}; 
		#line 746 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::WrappingSubtract($this, rhs, result);
		#line 747 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 749 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_sub_mod_eq($extension_Int128_616_i128 & $this , T rhs) noexcept -> typename $extension_Int128_616_i128&
	{
		#line 749 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_sub_mod)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 753 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_sub_or($extension_Int128_616_i128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int128_616_i128
	{
		#line 755 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -| implemented only for integer types");
		#line 756 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_616_i128 result{}; 
		#line 757 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::SaturatingSubtract($this, rhs, result);
		#line 758 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 760 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_sub_or_eq($extension_Int128_616_i128 & $this , T rhs) noexcept -> typename $extension_Int128_616_i128&
	{
		#line 760 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_sub_or)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 764 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_sub_mod_qst($extension_Int128_616_i128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_Int128_616_i128, bool>
	{
		#line 765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -%? implemented only for integer types");
		#line 766 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_616_i128 result{}; 
		#line 767 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Auto<decltype(!Builtin::SafeSubtract($this, rhs, result))> overflowed = !Builtin::SafeSubtract($this, rhs, result); 
		#line 768 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 772 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_sub_sub_qst($extension_Int128_616_i128 & $this )  -> typename $extension_Int128_616_i128&
	{
		#line 772 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_qst_eq)($this, Builtin::i128(1LL))); 
	}
	inline constexpr auto _operator_sub_sub_qst_postfix($extension_Int128_616_i128 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_sub_sub_qst)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 775 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_sub_sub_ne($extension_Int128_616_i128 & $this )  -> typename $extension_Int128_616_i128&
	{
		#line 775 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_ne_eq)($this, Builtin::i128(1LL))); 
	}
	inline constexpr auto _operator_sub_sub_ne_postfix($extension_Int128_616_i128 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_sub_sub_ne)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 778 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_sub_sub_mod($extension_Int128_616_i128 & $this )  -> typename $extension_Int128_616_i128&
	{
		#line 778 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_mod_eq)($this, Builtin::i128(1LL))); 
	}
	inline constexpr auto _operator_sub_sub_mod_postfix($extension_Int128_616_i128 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_sub_sub_mod)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_sub_sub_or($extension_Int128_616_i128 & $this )  -> typename $extension_Int128_616_i128&
	{
		#line 781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_or_eq)($this, Builtin::i128(1LL))); 
	}
	inline constexpr auto _operator_sub_sub_or_postfix($extension_Int128_616_i128 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_sub_sub_or)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 785 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mul_qst($extension_Int128_616_i128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int128_616_i128>
	{
		#line 787 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *? implemented only for integer types");
		#line 788 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_616_i128 result{}; 
		#line 789 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (Builtin::SafeMultiply($this, rhs, result)) {
			#line 790 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return result;
		}
		#line 792 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 794 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mul_qst_eq($extension_Int128_616_i128 & $this , T rhs) noexcept -> typename $extension_Int128_616_i128&
	{
		#line 796 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *?= implemented only for integer types");
		#line 797 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (const auto result = ADV_UFCS(_operator_mul_qst)($this, rhs)) {
			{
				#line 797 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 798 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				$this = result;
			}
		}
		#line 800 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 805 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mul_ne($extension_Int128_616_i128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int128_616_i128
	{
		#line 807 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *! implemented only for integer types");
		#line 808 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_616_i128 result{}; 
		#line 809 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::StrictMultiply($this, rhs, result);
		#line 810 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 812 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mul_ne_eq($extension_Int128_616_i128 & $this , T rhs)  -> typename $extension_Int128_616_i128&
	{
		#line 812 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_mul_ne)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mul_mod($extension_Int128_616_i128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int128_616_i128
	{
		#line 818 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *% implemented only for integer types");
		#line 819 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_616_i128 result{}; 
		#line 820 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::WrappingMultiply($this, rhs, result);
		#line 821 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 823 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mul_mod_eq($extension_Int128_616_i128 & $this , T rhs) noexcept -> typename $extension_Int128_616_i128&
	{
		#line 823 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_mul_mod)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 827 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mul_or($extension_Int128_616_i128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int128_616_i128
	{
		#line 829 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *| implemented only for integer types");
		#line 830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_616_i128 result{}; 
		#line 831 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::SaturatingMultiply($this, rhs, result);
		#line 832 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 834 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mul_or_eq($extension_Int128_616_i128 & $this , T rhs) noexcept -> typename $extension_Int128_616_i128&
	{
		#line 834 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_mul_or)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 838 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mul_mod_qst($extension_Int128_616_i128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_Int128_616_i128, bool>
	{
		#line 839 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *%? implemented only for integer types");
		#line 840 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_616_i128 result{}; 
		#line 841 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Auto<decltype(!Builtin::SafeMultiply($this, rhs, result))> overflowed = !Builtin::SafeMultiply($this, rhs, result); 
		#line 842 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 847 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline auto _operator_mul_gt($extension_Int128_616_i128 const& $this LIFETIMEBOUND, $extension_Int128_616_i128 rhs) noexcept -> const std::tuple<Builtin::u128, Builtin::i128>
	{
		#line 849 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		const auto& [low, high] = Builtin::WideningMul128($this, rhs);
		#line 850 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return std::make_tuple(low, high);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 856 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline auto CarryingMul($extension_Int128_616_i128 const& $this LIFETIMEBOUND, $extension_Int128_616_i128 rhs, $extension_Int128_616_i128 carry) noexcept -> const std::tuple<Builtin::u128, Builtin::i128>
	{
		#line 858 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		const auto& [low, high] = Builtin::CarryingMul128($this, rhs, carry);
		#line 859 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return std::make_tuple(low, high);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 864 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_qst($extension_Int128_616_i128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int128_616_i128>
	{
		#line 866 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\? implemented only for integer types");
		#line 867 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_616_i128 result{}; 
		#line 868 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (Builtin::SafeDivide($this, rhs, result)) {
			#line 869 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return result;
		}
		#line 871 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 873 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_qst_eq($extension_Int128_616_i128 & $this , T rhs) noexcept -> typename $extension_Int128_616_i128&
	{
		#line 875 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\?= implemented only for integer types");
		#line 876 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (const auto result = ADV_UFCS(_operator_bsl_qst)($this, rhs)) {
			{
				#line 876 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 877 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				$this = result;
			}
		}
		#line 879 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 885 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_ne($extension_Int128_616_i128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int128_616_i128
	{
		#line 887 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\! implemented only for integer types");
		#line 888 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_616_i128 result{}; 
		#line 889 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::StrictDivide($this, rhs, result);
		#line 890 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 892 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_ne_eq($extension_Int128_616_i128 & $this , T rhs)  -> typename $extension_Int128_616_i128&
	{
		#line 892 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_bsl_ne)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 897 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_mod($extension_Int128_616_i128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int128_616_i128
	{
		#line 899 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\% implemented only for integer types");
		#line 900 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_616_i128 result{}; 
		#line 901 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::WrappingDivide($this, rhs, result);
		#line 902 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 904 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_eq($extension_Int128_616_i128 & $this , T rhs)  -> typename $extension_Int128_616_i128&
	{
		#line 904 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_bsl_mod)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 909 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_or($extension_Int128_616_i128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int128_616_i128
	{
		#line 911 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\| implemented only for integer types");
		#line 912 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_616_i128 result{}; 
		#line 913 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::SaturatingDivide($this, rhs, result);
		#line 914 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 916 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_or_eq($extension_Int128_616_i128 & $this , T rhs)  -> typename $extension_Int128_616_i128&
	{
		#line 916 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_bsl_or)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 921 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_qst($extension_Int128_616_i128 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_Int128_616_i128, bool>
	{
		#line 922 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\%? implemented only for integer types");
		#line 923 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_616_i128 result{}; 
		#line 924 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Auto<decltype(!Builtin::SafeDivide($this, rhs, result))> overflowed = !Builtin::SafeDivide($this, rhs, result); 
		#line 925 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 930 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst($extension_Int128_616_i128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int128_616_i128>
	{
		#line 932 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\? implemented only for integer types");
		#line 933 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_616_i128 result{}; 
		#line 934 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (Builtin::SafeDivExact($this, rhs, result)) {
			#line 935 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return result;
		}
		#line 937 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 940 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst_eq($extension_Int128_616_i128 & $this , T rhs) noexcept -> typename $extension_Int128_616_i128&
	{
		#line 942 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\?= implemented only for integer types");
		#line 943 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (const auto result = ADV_UFCS(_operator_bsl_bsl_qst)($this, rhs)) {
			{
				#line 943 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 944 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				$this = result;
			}
		}
		#line 946 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 951 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mod_qst($extension_Int128_616_i128 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int128_616_i128>
	{
		#line 953 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %? implemented only for integer types");
		#line 954 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_616_i128 result{}; 
		#line 955 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (Builtin::SafeModulus($this, rhs, result)) {
			#line 956 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return result;
		}
		#line 958 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 960 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mod_qst_eq($extension_Int128_616_i128 & $this , T rhs) noexcept -> typename $extension_Int128_616_i128&
	{
		#line 962 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %?= implemented only for integer types");
		#line 963 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (const auto result = ADV_UFCS(_operator_mod_qst)($this, rhs)) {
			{
				#line 963 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 964 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				$this = result;
			}
		}
		#line 966 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 972 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mod_ne($extension_Int128_616_i128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int128_616_i128
	{
		#line 974 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %! implemented only for integer types");
		#line 975 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_616_i128 result{}; 
		#line 976 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::StrictModulus($this, rhs, result);
		#line 977 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 979 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mod_ne_eq($extension_Int128_616_i128 & $this , T rhs)  -> typename $extension_Int128_616_i128&
	{
		#line 979 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_mod_ne)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 984 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mod_mod($extension_Int128_616_i128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int128_616_i128
	{
		#line 986 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %% implemented only for integer types");
		#line 987 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_616_i128 result{}; 
		#line 988 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::WrappingModulus($this, rhs, result);
		#line 989 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 991 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mod_mod_eq($extension_Int128_616_i128 & $this , T rhs)  -> typename $extension_Int128_616_i128&
	{
		#line 991 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_mod_mod)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 996 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mod_mod_qst($extension_Int128_616_i128 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_Int128_616_i128, bool>
	{
		#line 997 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %%? implemented only for integer types");
		#line 998 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_616_i128 result{}; 
		#line 999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Auto<decltype(!Builtin::SafeModulus($this, rhs, result))> overflowed = !Builtin::SafeModulus($this, rhs, result); 
		#line 1000 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1005 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_sub_qst($extension_Int128_616_i128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::Nullable<$extension_Int128_616_i128>
	{
		#line 1007 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_616_i128 result{}; 
		#line 1008 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (Builtin::SafeNegate($this, result)) {
			#line 1009 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return result;
		}
		#line 1011 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1015 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_sub_ne($extension_Int128_616_i128 const& $this LIFETIMEBOUND)  -> const typename $extension_Int128_616_i128
	{
		#line 1017 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_616_i128 result{}; 
		#line 1018 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::StrictNegate($this, result);
		#line 1019 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1022 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_sub_mod($extension_Int128_616_i128 const& $this LIFETIMEBOUND)  -> const typename $extension_Int128_616_i128
	{
		#line 1024 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_616_i128 result{}; 
		#line 1025 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::WrappingNegate($this, result);
		#line 1026 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1030 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_sub_or($extension_Int128_616_i128 const& $this LIFETIMEBOUND)  -> const typename $extension_Int128_616_i128
	{
		#line 1032 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_616_i128 result{}; 
		#line 1033 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::SaturatingNegate($this, result);
		#line 1034 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1038 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_sub_mod_qst($extension_Int128_616_i128 const& $this LIFETIMEBOUND)  -> const std::tuple<$extension_Int128_616_i128, bool>
	{
		#line 1040 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_616_i128 result{}; 
		#line 1041 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Auto<decltype(!Builtin::SafeNegate($this, result))> overflowed = !Builtin::SafeNegate($this, result); 
		#line 1042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1046 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_lt_lt_qst($extension_Int128_616_i128 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<$extension_Int128_616_i128>
	{
		#line 1048 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_Int128_616_i128)()) < 0) {
			#line 1049 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return Builtin::UncheckedShiftLeft($this, amount);
		}
		#line 1051 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1054 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_lt_lt_qst_eq($extension_Int128_616_i128 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int128_616_i128&
	{
		#line 1056 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_Int128_616_i128)()) < 0) {
			#line 1057 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return $this <<= amount;
		}
		#line 1059 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1062 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_lt_lt_ne($extension_Int128_616_i128 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_Int128_616_i128
	{
		#line 1064 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_Int128_616_i128)()) < 0) {
			#line 1065 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return Builtin::UncheckedShiftLeft($this, amount);
		}
		#line 1067 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Throw(Builtin::IntegerOverflowException{});
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1070 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_lt_lt_ne_eq($extension_Int128_616_i128 & $this , Builtin::i32 amount)  -> typename $extension_Int128_616_i128&
	{
		#line 1070 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_lt_lt_ne)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1072 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_lt_lt_mod($extension_Int128_616_i128 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename $extension_Int128_616_i128
	{
		#line 1072 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::UncheckedShiftLeft($this, amount & (ADV_USPCS(BitWidth, $extension_Int128_616_i128)() - Builtin::i32(1)))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1075 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_lt_lt_mod_eq($extension_Int128_616_i128 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int128_616_i128&
	{
		#line 1075 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_lt_lt_mod)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1077 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_lt_lt_mod_qst($extension_Int128_616_i128 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<$extension_Int128_616_i128, bool>
	{
		#line 1077 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(std::make_tuple(ADV_UFCS(_operator_lt_lt_mod)($this, amount), (amount <=> Builtin::i32(0)) < 0 || (amount <=> ADV_USPCS(BitWidth, $extension_Int128_616_i128)()) >= 0)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1080 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_gt_gt_qst($extension_Int128_616_i128 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<$extension_Int128_616_i128>
	{
		#line 1082 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_Int128_616_i128)()) < 0) {
			#line 1083 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return $this >> amount;
		}
		#line 1085 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1088 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_gt_gt_qst_eq($extension_Int128_616_i128 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int128_616_i128&
	{
		#line 1090 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_Int128_616_i128)()) < 0) {
			#line 1091 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return $this >>= amount;
		}
		#line 1093 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1096 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_gt_gt_ne($extension_Int128_616_i128 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_Int128_616_i128
	{
		#line 1098 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_Int128_616_i128)()) < 0) {
			#line 1099 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return $this >> amount;
		}
		#line 1101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Throw(Builtin::IntegerOverflowException{});
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_gt_gt_ne_eq($extension_Int128_616_i128 & $this , Builtin::i32 amount)  -> typename $extension_Int128_616_i128&
	{
		#line 1104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_gt_gt_ne)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_gt_gt_mod($extension_Int128_616_i128 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename $extension_Int128_616_i128
	{
		#line 1106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::UncheckedShiftRight($this, amount & (ADV_USPCS(BitWidth, $extension_Int128_616_i128)() - Builtin::i32(1)))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_gt_gt_mod_eq($extension_Int128_616_i128 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int128_616_i128&
	{
		#line 1109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_gt_gt_mod)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_gt_gt_mod_qst($extension_Int128_616_i128 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<$extension_Int128_616_i128, bool>
	{
		#line 1111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(std::make_tuple(ADV_UFCS(_operator_gt_gt_mod)($this, amount), (amount <=> Builtin::i32(0)) < 0 || (amount <=> ADV_USPCS(BitWidth, $extension_Int128_616_i128)()) >= 0)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor_qst($extension_Int128_616_i128 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const Builtin::Nullable<$extension_Int128_616_i128>
	{
		#line 1118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return Builtin::i128(1LL);
		}
		#line 1123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 1124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Auto<decltype(Builtin::i128(1LL))> result = Builtin::i128(1LL); 
		#line 1126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		for (;;) 
		{
			#line 1127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 1128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				if (const auto mul = ADV_UFCS(_operator_mul_qst)(result, base)) {
					{
						#line 1128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
						auto __tmp0 = *mul; const auto& mul = __tmp0;
						
						#line 1129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
						result = mul;
					}
				} else {
					#line 1130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
					{
						#line 1131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
						return nullptr;
					}
				}
				#line 1133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				if (exp == Builtin::i32(1)) {
					#line 1134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
					return result;
				}
			}
			#line 1136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
			#line 1137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			if (const auto mul = ADV_UFCS(_operator_mul_qst)(base, base)) {
				{
					#line 1137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
					auto __tmp0 = *mul; const auto& mul = __tmp0;
					
					#line 1138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
					base = mul;
				}
			} else {
				#line 1139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				{
					#line 1140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
					return nullptr;
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor_qst_eq($extension_Int128_616_i128 & $this , Builtin::u32 exp) noexcept -> typename $extension_Int128_616_i128&
	{
		#line 1147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (auto result = ADV_UFCS(_operator_xor_xor_qst)($this, exp)) {
			{
				#line 1147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 1148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				return $this = result;
			}
		}
		#line 1150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor_ne($extension_Int128_616_i128 const& $this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename $extension_Int128_616_i128
	{
		#line 1155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return Builtin::i32(1);
		}
		#line 1160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 1161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Auto<decltype(Builtin::i128(1LL))> result = Builtin::i128(1LL); 
		#line 1163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		for (;;) 
		{
			#line 1164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 1165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				ADV_UFCS(_operator_mul_ne_eq)(result, base);
				#line 1166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				if (exp == Builtin::i32(1)) {
					#line 1167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
					return result;
				}
			}
			#line 1169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
			#line 1170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_UFCS(_operator_mul_ne_eq)(base, base);
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor_ne_eq($extension_Int128_616_i128 & $this , Builtin::u32 exp)  -> typename $extension_Int128_616_i128&
	{
		#line 1174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_xor_xor_ne)($this, exp)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor_mod($extension_Int128_616_i128 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename $extension_Int128_616_i128
	{
		#line 1178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return Builtin::i128(1LL);
		}
		#line 1183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 1184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Auto<decltype(Builtin::i128(1LL))> result = Builtin::i128(1LL); 
		#line 1186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (std::is_constant_evaluated()) {
			#line 1187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			while ((exp <=> Builtin::i32(1)) > 0) 
			{
				#line 1188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
					#line 1189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
					ADV_UFCS(_operator_mul_mod_eq)(result, base);
				}
				#line 1191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
				#line 1192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				ADV_UFCS(_operator_mul_mod_eq)(base, base);
			}
			#line 1194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return ADV_UFCS(_operator_mul_mod)(result, base);
		} else {
			#line 1195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			{
				#line 1196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				for (;;) 
				{
					#line 1197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
					if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
						#line 1198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
						ADV_UFCS(_operator_mul_mod_eq)(result, base);
						#line 1199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
						if (exp == Builtin::i32(1)) {
							#line 1200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
							return result;
						}
					}
					#line 1202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
					ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
					#line 1203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
					ADV_UFCS(_operator_mul_mod_eq)(base, base);
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor_mod_eq($extension_Int128_616_i128 & $this , Builtin::u32 exp) noexcept -> typename $extension_Int128_616_i128&
	{
		#line 1208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_xor_xor_mod)($this, exp)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor_or($extension_Int128_616_i128 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename $extension_Int128_616_i128
	{
		#line 1212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (const auto result = ADV_UFCS(_operator_xor_xor_qst)($this, exp)) {
			{
				#line 1212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 1213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				return result;
			}
		}
		#line 1216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return (ADV_UPCS(IsNegative)($this.$ref()) && exp % Builtin::i32(2) == Builtin::i32(1)) ? ADV_USPCS(MinValue, $extension_Int128_616_i128)() : ADV_USPCS(MaxValue, $extension_Int128_616_i128)();
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor_or_eq($extension_Int128_616_i128 & $this , Builtin::u32 exp) noexcept -> typename $extension_Int128_616_i128&
	{
		#line 1219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_xor_xor_or)($this, exp)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor_mod_qst($extension_Int128_616_i128 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const std::tuple<$extension_Int128_616_i128, bool>
	{
		#line 1223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return std::make_tuple(Builtin::i128(1LL), Builtin::Boolean(false));
		}
		#line 1228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 1229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Auto<decltype(Builtin::i128(1LL))> result = Builtin::i128(1LL); 
		#line 1230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Auto<decltype(Builtin::Boolean(false))> overflowed = Builtin::Boolean(false); 
		#line 1231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Auto<decltype(std::make_tuple(Builtin::i128(0LL), Builtin::Boolean(false)))> tmp = std::make_tuple(Builtin::i128(0LL), Builtin::Boolean(false)); 
		#line 1233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		for (;;) 
		{
			#line 1234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 1235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				tmp = ADV_UFCS(_operator_mul_mod_qst)(result, base);
				#line 1236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				if (exp == Builtin::i32(1)) {
					#line 1237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
					std::get<1>(tmp) |= overflowed;
					#line 1238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
					return tmp;
				}
				#line 1240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				result = std::get<0>(tmp);
				#line 1241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				overflowed |= std::get<1>(tmp);
			}
			#line 1243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
			#line 1244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			tmp = ADV_UFCS(_operator_mul_mod_qst)(base, base);
			#line 1245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			base = std::get<0>(tmp);
			#line 1246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			overflowed |= std::get<1>(tmp);
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getCheckedAbs($extension_Int128_616_i128 const& $this ) -> const Builtin::Nullable<$extension_Int128_616_i128>
	{
		#line 1252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)($this.$ref()) ? ADV_UFCS(_operator_sub_qst)($this) : $this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getStrictAbs($extension_Int128_616_i128 const& $this ) -> const $extension_Int128_616_i128
	{
		#line 1255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)($this.$ref()) ? ADV_UFCS(_operator_sub_ne)($this) : $this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getWrappingAbs($extension_Int128_616_i128 const& $this ) -> const $extension_Int128_616_i128
	{
		#line 1258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)($this.$ref()) ? ADV_UFCS(_operator_sub_mod)($this) : $this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getSaturatingAbs($extension_Int128_616_i128 const& $this ) -> const $extension_Int128_616_i128
	{
		#line 1261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)($this.$ref()) ? ADV_UFCS(_operator_sub_or)($this) : $this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getOverflowingAbs($extension_Int128_616_i128 const& $this ) -> const std::tuple<$extension_Int128_616_i128, bool>
	{
		#line 1266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (ADV_UPCS(IsNegative)($this.$ref())) {
			#line 1267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return ADV_UFCS(_operator_sub_mod_qst)($this);
		}
		#line 1269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return std::make_tuple($this, Builtin::Boolean(false));
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	
} namespace $extensions { using namespace System;
#line 1324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NextMultipleOf($extension_Int128_1273_i128 const& $this LIFETIMEBOUND, $extension_Int128_1273_i128 rhs)  -> const typename $extension_Int128_1273_i128
	{
		#line 1326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (rhs == Builtin::i32(-1)) {
			#line 1327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return $this;
		}
		#line 1330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		const Builtin::Auto<decltype($this % rhs)> remainder = $this % rhs; 
		#line 1331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		const Builtin::Auto<decltype(((remainder <=> Builtin::i32(0)) > 0 && (rhs <=> Builtin::i32(0)) < 0) || ((remainder <=> Builtin::i32(0)) < 0 && (rhs <=> Builtin::i32(0)) > 0) ? remainder + rhs : remainder)> mod = ((remainder <=> Builtin::i32(0)) > 0 && (rhs <=> Builtin::i32(0)) < 0) || ((remainder <=> Builtin::i32(0)) < 0 && (rhs <=> Builtin::i32(0)) > 0) ? remainder + rhs : remainder; 
		#line 1334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return mod == Builtin::i32(0) ? $this : $this + (rhs - mod);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto CheckedNextMultipleOf($extension_Int128_1273_i128 const& $this LIFETIMEBOUND, $extension_Int128_1273_i128 rhs) noexcept -> const Builtin::Nullable<$extension_Int128_1273_i128>
	{
		#line 1342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (rhs == Builtin::i32(-1)) {
			#line 1343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return $this;
		}
		#line 1346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		$extension_Int128_1273_i128 remainder{}; 
		#line 1347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (const auto r = ADV_UFCS(_operator_mod_qst)($this, rhs)) {
			{
				#line 1347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				auto __tmp0 = *r; const auto& r = __tmp0;
				
				#line 1348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				remainder = r;
			}
		} else {
			#line 1349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return nullptr;
		}
		#line 1351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		const Builtin::Auto<decltype(((remainder <=> Builtin::i32(0)) > 0 && (rhs <=> Builtin::i32(0)) < 0) || ((remainder <=> Builtin::i32(0)) < 0 && (rhs <=> Builtin::i32(0)) > 0) ? remainder + rhs : remainder)> mod = ((remainder <=> Builtin::i32(0)) > 0 && (rhs <=> Builtin::i32(0)) < 0) || ((remainder <=> Builtin::i32(0)) < 0 && (rhs <=> Builtin::i32(0)) > 0) ? remainder + rhs : remainder; 
		#line 1354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (mod == Builtin::i32(0)) {
			#line 1355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return $this;
		}
		#line 1357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return ADV_UFCS(_operator_add_qst)($this, (rhs - mod));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto $static_getIsSigned<$extension_Int128_1273_i128>::get() -> const bool
	{
		#line 1274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getTrailingZeroCount($extension_Int128_1273_i128 const& $this ) -> const Builtin::u32
	{
		#line 1278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (ADV_UFCS(Low64)($this.$ref()) == Builtin::i32(0)) {
			#line 1279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return ADV_UPCS(TrailingZeroCount)(ADV_UFCS(High64)($this.$ref()).$ref()) + Builtin::u32(64U);
		}
		#line 1281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return ADV_UPCS(TrailingZeroCount)(ADV_UFCS(Low64)($this.$ref()).$ref());
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getTrailingOneCount($extension_Int128_1273_i128 const& $this ) -> const Builtin::u32
	{
		#line 1283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(TrailingZeroCount)((ADV_UFCS(_operator_not)($this)).$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getByteCount($extension_Int128_1273_i128 const& $this ) -> const Builtin::u32
	{
		#line 1284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u32>(Builtin::usize(sizeof($extension_Int128_1273_i128)))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getMinimalBitWidth($extension_Int128_1273_i128 const& $this ) -> const Builtin::u32
	{
		#line 1285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(BitWidth, $extension_Int128_1273_i128)() - ADV_UPCS(LeadingZeroCount)($this.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline auto getIsqrt($extension_Int128_1273_i128 const& $this ) -> const $extension_Int128_1273_i128
	{
		#line 1302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (const auto result = ADV_UPCS(CheckedIsqrt)($this.$ref())) {
			{
				#line 1302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 1303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				return result;
			}
		}
		#line 1305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getLog2Ceiling($extension_Int128_1273_i128 const& $this ) -> const $extension_Int128_1273_i128
	{
		#line 1312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Auto<decltype(ADV_UPCS(Log2)($this.$ref()))> result = ADV_UPCS(Log2)($this.$ref()); 
		#line 1313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (ADV_UPCS(PopCount)($this.$ref()) != Builtin::i32(1)) {
			#line 1314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			++result;
		}
		#line 1317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getPrevPow2($extension_Int128_1273_i128 const& $this ) -> const $extension_Int128_1273_i128
	{
		#line 1363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (($this <=> Builtin::i32(1)) <= 0) {
			#line 1364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return Builtin::i32(0);
		}
		#line 1367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return ADV_USPCS(One, $extension_Int128_1273_i128)() << (ADV_UPCS(MinimalBitWidth)($this.$ref()) - Builtin::i32(1));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getNextPow2($extension_Int128_1273_i128 const& $this ) -> const $extension_Int128_1273_i128
	{
		#line 1374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (($this <=> Builtin::i32(1)) <= 0) {
			#line 1375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return Builtin::i32(0);
		}
		#line 1378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		const Builtin::Auto<decltype($this - Builtin::i32(1))> p = $this - Builtin::i32(1); 
		#line 1379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return (ADV_USPCS(AllBitsSet, $extension_Int128_1273_i128)() >> ADV_UPCS(LeadingZeroCount)(p.$ref())) + Builtin::i32(1);
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getCheckedNextPow2($extension_Int128_1273_i128 const& $this ) -> const Builtin::Nullable<$extension_Int128_1273_i128>
	{
		#line 1386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (($this <=> Builtin::i32(1)) <= 0) {
			#line 1387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return Builtin::i128(0LL);
		}
		#line 1390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		const Builtin::Auto<decltype($this - Builtin::i32(1))> p = $this - Builtin::i32(1); 
		#line 1391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return ADV_UFCS(_operator_add_qst)((ADV_USPCS(AllBitsSet, $extension_Int128_1273_i128)() >> ADV_UPCS(LeadingZeroCount)(p.$ref())), Builtin::i128(1LL));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getWrappingNextPow2($extension_Int128_1273_i128 const& $this ) -> const $extension_Int128_1273_i128
	{
		#line 1398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (($this <=> Builtin::i32(1)) <= 0) {
			#line 1399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return Builtin::i32(0);
		}
		#line 1402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		const Builtin::Auto<decltype($this - Builtin::i32(1))> p = $this - Builtin::i32(1); 
		#line 1403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return ADV_UFCS(_operator_add_mod)((ADV_USPCS(AllBitsSet, $extension_Int128_1273_i128)() >> ADV_UPCS(LeadingZeroCount)(p.$ref())), Builtin::i128(1LL));
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	
} namespace $extensions { using namespace System;
#line 1447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto RotateLeft($extension_Int128_1407_i128 const& $this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename $extension_Int128_1407_i128
	{
		#line 1447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(($this << shiftAmount) | (ADV_UFCS(_operator_gt_gt_gt)($this, Builtin::i32{ADV_USPCS(BitWidth, $extension_Int128_1407_i128)() - shiftAmount}))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto RotateRight($extension_Int128_1407_i128 const& $this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename $extension_Int128_1407_i128
	{
		#line 1448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY((ADV_UFCS(_operator_gt_gt_gt)($this, Builtin::i32{shiftAmount})) | ($this << (ADV_USPCS(BitWidth, $extension_Int128_1407_i128)() - shiftAmount))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto $static_getBitWidth<$extension_Int128_1407_i128>::get() -> const Builtin::u32
	{
		#line 1408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(128U)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getLeadingZeroCount($extension_Int128_1407_i128 const& $this ) -> const Builtin::u32
	{
		#line 1412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (ADV_UFCS(High64)($this.$ref()) == Builtin::i32(0)) {
			#line 1413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return Builtin::u32(64U) + Builtin::LeadingZeroCount(ADV_UFCS(Low64)($this.$ref()));
		}
		#line 1416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return Builtin::LeadingZeroCount(ADV_UFCS(High64)($this.$ref()));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getLeadingOneCount($extension_Int128_1407_i128 const& $this ) -> const Builtin::u32
	{
		#line 1418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(LeadingZeroCount)((ADV_UFCS(_operator_not)($this)).$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getPopCount($extension_Int128_1407_i128 const& $this ) -> const Builtin::u32
	{
		#line 1419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::PopCount(ADV_UFCS(High64)($this.$ref())) + Builtin::PopCount(ADV_UFCS(Low64)($this.$ref()))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getZeroCount($extension_Int128_1407_i128 const& $this ) -> const Builtin::u32
	{
		#line 1420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(PopCount)((ADV_UFCS(_operator_not)($this)).$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getByteSwapped($extension_Int128_1407_i128 const& $this ) -> const $extension_Int128_1407_i128
	{
		#line 1421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::i128{Builtin::Cast<true, Builtin::i64>(ADV_UPCS(ByteSwapped)(ADV_UFCS(Low64)($this.$ref()).$ref())), Builtin::Cast<true, Builtin::u64>(ADV_UPCS(ByteSwapped)(ADV_UFCS(High64)($this.$ref()).$ref()))}); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getBigEndian($extension_Int128_1407_i128 const& $this ) -> const $extension_Int128_1407_i128
	{
		#line 1424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if constexpr (Builtin::IsLittleEndian()) {
			#line 1425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return ADV_UPCS(ByteSwapped)($this.$ref());
		}
		#line 1427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return $this;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getLittleEndian($extension_Int128_1407_i128 const& $this ) -> const $extension_Int128_1407_i128
	{
		#line 1431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if constexpr (Builtin::IsBigEndian()) {
			#line 1432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return ADV_UPCS(ByteSwapped)($this.$ref());
		}
		#line 1434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return $this;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getReverseBits($extension_Int128_1407_i128 const& $this ) -> const $extension_Int128_1407_i128
	{
		#line 1436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::i128{Builtin::Cast<true, Builtin::i64>(Builtin::ReverseBits64u(ADV_UFCS(Low64)($this.$ref()))), Builtin::Cast<true, Builtin::u64>(Builtin::ReverseBits64(ADV_UFCS(High64)($this.$ref())))}); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getShortestBitLength($extension_Int128_1407_i128 const& $this ) -> const Builtin::u32
	{
		#line 1440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (($this <=> Builtin::i32(0)) >= 0) {
			#line 1441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return ADV_USPCS(BitWidth, $extension_Int128_1407_i128)() - ADV_UPCS(LeadingZeroCount)($this.$ref());
		}
		#line 1444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return ADV_USPCS(BitWidth, $extension_Int128_1407_i128)() + Builtin::u32(1U) - ADV_UPCS(LeadingOneCount)($this.$ref());
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	
} namespace $extensions { using namespace System;
#line 1460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto IsGreaterThanAsUnsigned($extension_Int128_1452_i128 const& $this LIFETIMEBOUND, $extension_Int128_1452_i128 rhs) noexcept -> const bool
	{
		#line 1460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY((ADV_UFCS(NarrowToUInt128)($this.$ref()) <=> ADV_UFCS(NarrowToUInt128)(rhs.$ref())) > 0); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto $static_getMaxDigitCount<$extension_Int128_1452_i128>::get() -> const Builtin::i32
	{
		#line 1453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(39)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto $static_getMaxHexDigitCount<$extension_Int128_1452_i128>::get() -> const Builtin::i32
	{
		#line 1454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(32)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto $static_getMaxValueDiv10<$extension_Int128_1452_i128>::get() -> const $extension_Int128_1452_i128
	{
		#line 1455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl)(ADV_USPCS(MaxValue, Builtin::i128)(), Builtin::i32(10))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getMultiplyBy10($extension_Int128_1452_i128 const& $this ) -> const $extension_Int128_1452_i128
	{
		#line 1457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_mod)($this, Builtin::i128(10LL))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getMultiplyBy16($extension_Int128_1452_i128 const& $this ) -> const $extension_Int128_1452_i128
	{
		#line 1458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_mod)($this, Builtin::i128(16LL))); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	

}