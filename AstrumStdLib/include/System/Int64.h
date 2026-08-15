#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "System/Numerics/IBinaryIntegerFormatInfo.h"
using namespace System::Numerics;
#include "System/Numerics/ISignedNumber.h"
using namespace System::Numerics;
#include "System/Numerics/IFixedWidthInteger.h"
using namespace System::Numerics;
#include "Optional.h"
#include "IConvertible.h"

namespace System {
namespace __Unsafe {} namespace __Int64$Protected__Unsafe {}
} namespace $extensions {
template<class __TT> struct $static_CheckedLog2;
template<class __TT> struct $static_getCheckedLog2;
template<class __TT> struct $static_IsNegative;
template<class __TT> struct $static_getIsNegative;
template<class __TT> struct $static_IsPositive;
template<class __TT> struct $static_getIsPositive;
template<class __TT> struct $static_DefaultSign;
template<class __TT> struct $static_getDefaultSign;
template<class __TT> struct $static_MinimalBitWidth;
template<class __TT> struct $static_getMinimalBitWidth;
template<class __TT> struct $static_MinusOne;
template<class __TT> struct $static_getMinusOne;
template<class __TT> struct $static_PopCount;
template<class __TT> struct $static_getPopCount;
template<class __TT> struct $static_AllBitsSet;
template<class __TT> struct $static_getAllBitsSet;
template<class __TT> struct $static_BitWidth;
template<class __TT> struct $static_getBitWidth;
template<class __TT> struct $static_LeadingZeroCount;
template<class __TT> struct $static_getLeadingZeroCount;
template<class __TT> struct $static_InvalidOperationException;
template<class __TT> struct $static_getInvalidOperationException;
template<class __TT> struct $static_DivAssign;
template<class __TT> struct $static_getDivAssign;
template<class __TT> struct $static_CheckedLog10;
template<class __TT> struct $static_getCheckedLog10;
template<class __TT> struct $static_TrailingZeroCount;
template<class __TT> struct $static_getTrailingZeroCount;
template<class __TT> struct $static_Isqrt64;
template<class __TT> struct $static_getIsqrt64;
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
template<class __TT> struct $static_ByteSwap64;
template<class __TT> struct $static_getByteSwap64;
template<class __TT> struct $static_NarrowToUInt64;
template<class __TT> struct $static_getNarrowToUInt64;
template<class __TT> struct $static_IsLittleEndian;
template<class __TT> struct $static_getIsLittleEndian;
template<class __TT> struct $static_IsBigEndian;
template<class __TT> struct $static_getIsBigEndian;
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
#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
using Int64 = Builtin::i64;
#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
using Long = Builtin::i64;
//###############################################################################
//# Type definitions
//###############################################################################
	} namespace $extensions { using namespace System;
#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	using $extension_Int64_15_i64 = Builtin::i64;
	#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE(IMinMaxValue, IMinMaxValue);
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class __TT> struct $static_getMinValue; template<> struct $static_getMinValue<$extension_Int64_15_i64> { static inline constexpr auto get() -> const $extension_Int64_15_i64; };
	#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class __TT> struct $static_getMaxValue; template<> struct $static_getMaxValue<$extension_Int64_15_i64> { static inline constexpr auto get() -> const $extension_Int64_15_i64; };
	#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int64_15_i64, IMinMaxValue, IMinMaxValue, $extension_Int64_15_i64);
	} namespace System{
using $extensions::$static_getMinValue;
using $extensions::$static_getMaxValue;

		} namespace $extensions { using namespace System;
#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	using $extension_Int64_20_i64 = Builtin::i64;
	#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ASTRUMSTD_API auto _operator_eq_eq_mul($extension_Int64_20_i64 const& $this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool;
	#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto operator<=>($extension_Int64_20_i64 const& $this LIFETIMEBOUND, Builtin::Nullable<$extension_Int64_20_i64> rhs) noexcept -> const Builtin::i32;
	#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_gt_gt_gt($extension_Int64_20_i64 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_Int64_20_i64;
	#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_gt_gt_gt_eq($extension_Int64_20_i64 & $this , Builtin::i32 amount)  -> typename $extension_Int64_20_i64&;
	#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_lt_lt_bsl($extension_Int64_20_i64 const& $this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename $extension_Int64_20_i64;
	#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_lt_lt_bsl_eq($extension_Int64_20_i64 & $this , Builtin::u32 amount) noexcept -> typename $extension_Int64_20_i64&;
	#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_gt_gt_bsl($extension_Int64_20_i64 const& $this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename $extension_Int64_20_i64;
	#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_gt_gt_bsl_eq($extension_Int64_20_i64 & $this , Builtin::u32 amount) noexcept -> typename $extension_Int64_20_i64&;
	#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getHashCode($extension_Int64_20_i64 const& $this ) -> const Builtin::u64;
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
#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	using $extension_Int64_73_i64 = Builtin::i64;
	#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE(IAbstractComparable, IAbstractComparable);
	#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ASTRUMSTD_API auto _operator_lt_eq_gt_mul($extension_Int64_73_i64 const& $this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32;
	#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int64_73_i64, IAbstractComparable, IAbstractComparable, $extension_Int64_73_i64);
	} namespace System{
using $extensions::_operator_lt_eq_gt_mul;

		} namespace $extensions { using namespace System;
#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	using $extension_Int64_88_i64 = Builtin::i64;
	#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE(IConvertible, IConvertible);
	#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToBoolean($extension_Int64_88_i64 const& $this LIFETIMEBOUND) noexcept -> const bool;
	#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToInt8($extension_Int64_88_i64 const& $this LIFETIMEBOUND)  -> const Builtin::i8;
	#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToUInt8($extension_Int64_88_i64 const& $this LIFETIMEBOUND)  -> const Builtin::u8;
	#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToInt16($extension_Int64_88_i64 const& $this LIFETIMEBOUND)  -> const Builtin::i16;
	#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToUInt16($extension_Int64_88_i64 const& $this LIFETIMEBOUND)  -> const Builtin::u16;
	#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToInt32($extension_Int64_88_i64 const& $this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToUInt32($extension_Int64_88_i64 const& $this LIFETIMEBOUND)  -> const Builtin::u32;
	#line 126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToInt64($extension_Int64_88_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i64;
	#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToUInt64($extension_Int64_88_i64 const& $this LIFETIMEBOUND)  -> const Builtin::u64;
	#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToInt128($extension_Int64_88_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i128;
	#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToUInt128($extension_Int64_88_i64 const& $this LIFETIMEBOUND)  -> const Builtin::u128;
	#line 140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToIsize($extension_Int64_88_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::isize;
	#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToUsize($extension_Int64_88_i64 const& $this LIFETIMEBOUND)  -> const Builtin::usize;
	#line 152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToFloat32($extension_Int64_88_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::f32;
	#line 153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToFloat64($extension_Int64_88_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::f64;
	#line 154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToByte($extension_Int64_88_i64 const& $this LIFETIMEBOUND)  -> const Builtin::u8;
	#line 155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToChar($extension_Int64_88_i64 const& $this LIFETIMEBOUND)  -> const Builtin::char32;
	#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int64_88_i64, IConvertible, IConvertible, $extension_Int64_88_i64);
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
#line 166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	using $extension_Int64_166_i64 = Builtin::i64;
	#line 166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE(IDivisibleArithmetic, IDivisibleArithmetic);
	#line 168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_div_mod($extension_Int64_166_i64 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_Int64_166_i64, $extension_Int64_166_i64>;
	#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_div_not($extension_Int64_166_i64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int64_166_i64;
	#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_div_not_eq($extension_Int64_166_i64 & $this , auto rhs)  -> typename $extension_Int64_166_i64&;
	#line 183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_div_lt($extension_Int64_166_i64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int64_166_i64;
	#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_div_lt_eq($extension_Int64_166_i64 & $this , auto rhs)  -> typename $extension_Int64_166_i64&;
	#line 199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_div_gt($extension_Int64_166_i64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int64_166_i64;
	#line 213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_div_gt_eq($extension_Int64_166_i64 & $this , auto rhs)  -> typename $extension_Int64_166_i64&;
	#line 166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int64_166_i64, IDivisibleArithmetic, IDivisibleArithmetic, $extension_Int64_166_i64);
	} namespace System{
using $extensions::_operator_div_mod;
using $extensions::_operator_div_not;
using $extensions::_operator_div_not_eq;
using $extensions::_operator_div_lt;
using $extensions::_operator_div_lt_eq;
using $extensions::_operator_div_gt;
using $extensions::_operator_div_gt_eq;

		} namespace $extensions { using namespace System;
#line 216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	using $extension_Int64_216_i64 = Builtin::i64;
	#line 216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE(IIntegerDivisibleArithmetic, IIntegerDivisibleArithmetic);
	#line 218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl($extension_Int64_216_i64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int64_216_i64;
	#line 220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_eq($extension_Int64_216_i64 & $this , T rhs)  -> typename $extension_Int64_216_i64&;
	#line 225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl($extension_Int64_216_i64 const& $this LIFETIMEBOUND, T rhs)  -> const Builtin::Nullable<$extension_Int64_216_i64>;
	#line 216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int64_216_i64, IIntegerDivisibleArithmetic, IIntegerDivisibleArithmetic, $extension_Int64_216_i64);
	} namespace System{
using $extensions::_operator_bsl;
using $extensions::_operator_bsl_eq;
using $extensions::_operator_bsl_bsl;

		} namespace $extensions { using namespace System;
#line 236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	using $extension_Int64_236_i64 = Builtin::i64;
	#line 236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE(IIntegerPowerArithmetic, IIntegerPowerArithmetic);
	#line 239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor($extension_Int64_236_i64 const& $this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename $extension_Int64_236_i64;
	#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor_eq($extension_Int64_236_i64 & $this , Builtin::u32 exp)  -> typename $extension_Int64_236_i64&;
	#line 236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int64_236_i64, IIntegerPowerArithmetic, IIntegerPowerArithmetic, $extension_Int64_236_i64);
	} namespace System{
using $extensions::_operator_xor_xor;
using $extensions::_operator_xor_xor_eq;

		} namespace $extensions { using namespace System;
#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	using $extension_Int64_274_i64 = Builtin::i64;
	#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE(INumberBase, INumberBase);
	#line 298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ASTRUMSTD_API auto MaxMagnitude($extension_Int64_274_i64 const& $this LIFETIMEBOUND, $extension_Int64_274_i64 rhs)  -> const typename $extension_Int64_274_i64;
	#line 327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline auto MaxMagnitudeNumber($extension_Int64_274_i64 const& $this LIFETIMEBOUND, $extension_Int64_274_i64 rhs)  -> const typename $extension_Int64_274_i64;
	#line 329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ASTRUMSTD_API auto MinMagnitude($extension_Int64_274_i64 const& $this LIFETIMEBOUND, $extension_Int64_274_i64 rhs)  -> const typename $extension_Int64_274_i64;
	#line 358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline auto MinMagnitudeNumber($extension_Int64_274_i64 const& $this LIFETIMEBOUND, $extension_Int64_274_i64 rhs)  -> const typename $extension_Int64_274_i64;
	#line 360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ASTRUMSTD_API auto Parse($extension_Int64_274_i64 const& $this LIFETIMEBOUND, Builtin::Str input)  -> const typename $extension_Int64_274_i64;
	#line 365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ASTRUMSTD_API auto TryParse($extension_Int64_274_i64 const& $this LIFETIMEBOUND, Builtin::Str input) noexcept -> const Builtin::Nullable<$extension_Int64_274_i64>;
	#line 372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToInt8($extension_Int64_274_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i8;
	#line 373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToUInt8($extension_Int64_274_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u8;
	#line 374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToInt16($extension_Int64_274_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i16;
	#line 375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToUInt16($extension_Int64_274_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u16;
	#line 376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToInt32($extension_Int64_274_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i32;
	#line 377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToUInt32($extension_Int64_274_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u32;
	#line 378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToInt64($extension_Int64_274_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i64;
	#line 379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToUInt64($extension_Int64_274_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u64;
	#line 380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToInt128($extension_Int64_274_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i128;
	#line 381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToUInt128($extension_Int64_274_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u128;
	#line 382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToIsize($extension_Int64_274_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::isize;
	#line 383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToUsize($extension_Int64_274_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::usize;
	#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class __TT> struct $static_getOne; template<> struct $static_getOne<$extension_Int64_274_i64> { static inline constexpr auto get() -> const $extension_Int64_274_i64; };
	#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class __TT> struct $static_getZero; template<> struct $static_getZero<$extension_Int64_274_i64> { static inline constexpr auto get() -> const $extension_Int64_274_i64; };
	#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class __TT> struct $static_getRadix; template<> struct $static_getRadix<$extension_Int64_274_i64> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getAbs($extension_Int64_274_i64 const& $this ) -> const $extension_Int64_274_i64;
	#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsCanonical($extension_Int64_274_i64 const& $this ) -> const bool;
	#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsComplexNumber($extension_Int64_274_i64 const& $this ) -> const bool;
	#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsEvenInteger($extension_Int64_274_i64 const& $this ) -> const bool;
	#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsFinite($extension_Int64_274_i64 const& $this ) -> const bool;
	#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsImaginaryNumber($extension_Int64_274_i64 const& $this ) -> const bool;
	#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsInfinity($extension_Int64_274_i64 const& $this ) -> const bool;
	#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsInteger($extension_Int64_274_i64 const& $this ) -> const bool;
	#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsNaN($extension_Int64_274_i64 const& $this ) -> const bool;
	#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsNegative($extension_Int64_274_i64 const& $this ) -> const bool;
	#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsNegativeInfinity($extension_Int64_274_i64 const& $this ) -> const bool;
	#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsNormal($extension_Int64_274_i64 const& $this ) -> const bool;
	#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsOddInteger($extension_Int64_274_i64 const& $this ) -> const bool;
	#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsPositive($extension_Int64_274_i64 const& $this ) -> const bool;
	#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsPositiveInfinity($extension_Int64_274_i64 const& $this ) -> const bool;
	#line 294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsRealNumber($extension_Int64_274_i64 const& $this ) -> const bool;
	#line 295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsSubnormal($extension_Int64_274_i64 const& $this ) -> const bool;
	#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsZero($extension_Int64_274_i64 const& $this ) -> const bool;
	#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int64_274_i64, INumberBase, INumberBase, $extension_Int64_274_i64);
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
#line 386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	using $extension_Int64_386_i64 = Builtin::i64;
	#line 386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE(ISignedNumber, ISignedNumber);
	#line 387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class __TT> struct $static_getMinusOne; template<> struct $static_getMinusOne<$extension_Int64_386_i64> { static inline constexpr auto get() -> const $extension_Int64_386_i64; };
	#line 386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int64_386_i64, ISignedNumber, ISignedNumber, $extension_Int64_386_i64);
	} namespace System{
using $extensions::$static_getMinusOne;

		} namespace $extensions { using namespace System;
#line 390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	using $extension_Int64_390_i64 = Builtin::i64;
	#line 390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE(INumber, INumber);
	#line 393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ASTRUMSTD_API auto CopySign($extension_Int64_390_i64 const& $this LIFETIMEBOUND, $extension_Int64_390_i64 sign)  -> const typename $extension_Int64_390_i64;
	#line 411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto Max($extension_Int64_390_i64 const& $this LIFETIMEBOUND, $extension_Int64_390_i64 rhs) noexcept -> const typename $extension_Int64_390_i64;
	#line 412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto MaxNumber($extension_Int64_390_i64 const& $this LIFETIMEBOUND, $extension_Int64_390_i64 rhs) noexcept -> const typename $extension_Int64_390_i64;
	#line 413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto Min($extension_Int64_390_i64 const& $this LIFETIMEBOUND, $extension_Int64_390_i64 rhs) noexcept -> const typename $extension_Int64_390_i64;
	#line 414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto MinNumber($extension_Int64_390_i64 const& $this LIFETIMEBOUND, $extension_Int64_390_i64 rhs) noexcept -> const typename $extension_Int64_390_i64;
	#line 415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto Clamp($extension_Int64_390_i64 const& $this LIFETIMEBOUND, $extension_Int64_390_i64 min, $extension_Int64_390_i64 max)  -> const typename $extension_Int64_390_i64;
	#line 391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getSign($extension_Int64_390_i64 const& $this ) -> const Builtin::i32;
	#line 390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int64_390_i64, INumber, INumber, $extension_Int64_390_i64);
	} namespace System{
using $extensions::CopySign;
using $extensions::Max;
using $extensions::MaxNumber;
using $extensions::Min;
using $extensions::MinNumber;
using $extensions::Clamp;
using $extensions::getSign;

		} namespace $extensions { using namespace System;
#line 418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	using $extension_Int64_418_i64 = Builtin::i64;
	#line 418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE(IBinaryNumber, IBinaryNumber);
	#line 482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto CheckedLog($extension_Int64_418_i64 const& $this LIFETIMEBOUND, $extension_Int64_418_i64 base) noexcept -> const Builtin::Nullable<$extension_Int64_418_i64>;
	#line 515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ASTRUMSTD_API auto Log($extension_Int64_418_i64 const& $this LIFETIMEBOUND, $extension_Int64_418_i64 base)  -> const typename $extension_Int64_418_i64;
	#line 525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto Midpoint($extension_Int64_418_i64 const& $this LIFETIMEBOUND, $extension_Int64_418_i64 rhs) noexcept -> const typename $extension_Int64_418_i64;
	#line 533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto IsMultipleOf($extension_Int64_418_i64 const& $this LIFETIMEBOUND, $extension_Int64_418_i64 rhs) noexcept -> const bool;
	#line 420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class __TT> struct $static_getAllBitsSet; template<> struct $static_getAllBitsSet<$extension_Int64_418_i64> { static inline constexpr auto get() -> const $extension_Int64_418_i64; };
	#line 423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsPow2($extension_Int64_418_i64 const& $this ) -> const bool;
	#line 427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getCheckedLog2($extension_Int64_418_i64 const& $this ) -> const Builtin::Nullable<$extension_Int64_418_i64>;
	#line 437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getLog2($extension_Int64_418_i64 const& $this ) -> const $extension_Int64_418_i64;
	#line 447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getCheckedLog10($extension_Int64_418_i64 const& $this ) -> const Builtin::Nullable<$extension_Int64_418_i64>;
	#line 472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getLog10($extension_Int64_418_i64 const& $this ) -> const $extension_Int64_418_i64;
	#line 418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int64_418_i64, IBinaryNumber, IBinaryNumber, $extension_Int64_418_i64);
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
#line 547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	using $extension_Int64_547_i64 = Builtin::i64;
	#line 547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE(ICheckedArithmetic, ICheckedArithmetic);
	#line 550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_add_qst($extension_Int64_547_i64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int64_547_i64>;
	#line 559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_add_qst_eq($extension_Int64_547_i64 & $this , T rhs) noexcept -> typename $extension_Int64_547_i64&;
	#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_add_ne($extension_Int64_547_i64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int64_547_i64;
	#line 577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_add_ne_eq($extension_Int64_547_i64 & $this , T rhs)  -> typename $extension_Int64_547_i64&;
	#line 581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_add_mod($extension_Int64_547_i64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int64_547_i64;
	#line 588 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_add_mod_eq($extension_Int64_547_i64 & $this , T rhs) noexcept -> typename $extension_Int64_547_i64&;
	#line 592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_add_or($extension_Int64_547_i64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int64_547_i64;
	#line 599 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_add_or_eq($extension_Int64_547_i64 & $this , T rhs) noexcept -> typename $extension_Int64_547_i64&;
	#line 603 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_add_mod_qst($extension_Int64_547_i64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_Int64_547_i64, bool>;
	#line 611 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_qst($extension_Int64_547_i64 & $this )  -> typename $extension_Int64_547_i64&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_qst_postfix($extension_Int64_547_i64 & $this)  -> decltype(auto);
	#line 614 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_ne($extension_Int64_547_i64 & $this )  -> typename $extension_Int64_547_i64&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_ne_postfix($extension_Int64_547_i64 & $this)  -> decltype(auto);
	#line 617 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_mod($extension_Int64_547_i64 & $this )  -> typename $extension_Int64_547_i64&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_mod_postfix($extension_Int64_547_i64 & $this)  -> decltype(auto);
	#line 620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_or($extension_Int64_547_i64 & $this )  -> typename $extension_Int64_547_i64&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_or_postfix($extension_Int64_547_i64 & $this)  -> decltype(auto);
	#line 624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto CarryingAdd($extension_Int64_547_i64 const& $this LIFETIMEBOUND, $extension_Int64_547_i64 rhs, bool carry) noexcept -> const std::tuple<$extension_Int64_547_i64, bool>;
	#line 633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto BorrowingSub($extension_Int64_547_i64 const& $this LIFETIMEBOUND, $extension_Int64_547_i64 rhs, bool carry) noexcept -> const std::tuple<$extension_Int64_547_i64, bool>;
	#line 642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_sub_qst($extension_Int64_547_i64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int64_547_i64>;
	#line 651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_sub_qst_eq($extension_Int64_547_i64 & $this , T rhs) noexcept -> typename $extension_Int64_547_i64&;
	#line 662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_sub_ne($extension_Int64_547_i64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int64_547_i64;
	#line 669 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_sub_ne_eq($extension_Int64_547_i64 & $this , T rhs)  -> typename $extension_Int64_547_i64&;
	#line 673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_sub_mod($extension_Int64_547_i64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int64_547_i64;
	#line 680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_sub_mod_eq($extension_Int64_547_i64 & $this , T rhs) noexcept -> typename $extension_Int64_547_i64&;
	#line 684 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_sub_or($extension_Int64_547_i64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int64_547_i64;
	#line 691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_sub_or_eq($extension_Int64_547_i64 & $this , T rhs) noexcept -> typename $extension_Int64_547_i64&;
	#line 695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_sub_mod_qst($extension_Int64_547_i64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_Int64_547_i64, bool>;
	#line 703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_qst($extension_Int64_547_i64 & $this )  -> typename $extension_Int64_547_i64&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_qst_postfix($extension_Int64_547_i64 & $this)  -> decltype(auto);
	#line 706 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_ne($extension_Int64_547_i64 & $this )  -> typename $extension_Int64_547_i64&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_ne_postfix($extension_Int64_547_i64 & $this)  -> decltype(auto);
	#line 709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_mod($extension_Int64_547_i64 & $this )  -> typename $extension_Int64_547_i64&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_mod_postfix($extension_Int64_547_i64 & $this)  -> decltype(auto);
	#line 712 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_or($extension_Int64_547_i64 & $this )  -> typename $extension_Int64_547_i64&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_or_postfix($extension_Int64_547_i64 & $this)  -> decltype(auto);
	#line 716 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mul_qst($extension_Int64_547_i64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int64_547_i64>;
	#line 725 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mul_qst_eq($extension_Int64_547_i64 & $this , T rhs) noexcept -> typename $extension_Int64_547_i64&;
	#line 736 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mul_ne($extension_Int64_547_i64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int64_547_i64;
	#line 743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mul_ne_eq($extension_Int64_547_i64 & $this , T rhs)  -> typename $extension_Int64_547_i64&;
	#line 747 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mul_mod($extension_Int64_547_i64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int64_547_i64;
	#line 754 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mul_mod_eq($extension_Int64_547_i64 & $this , T rhs) noexcept -> typename $extension_Int64_547_i64&;
	#line 758 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mul_or($extension_Int64_547_i64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int64_547_i64;
	#line 765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mul_or_eq($extension_Int64_547_i64 & $this , T rhs) noexcept -> typename $extension_Int64_547_i64&;
	#line 769 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mul_mod_qst($extension_Int64_547_i64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_Int64_547_i64, bool>;
	#line 778 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline auto _operator_mul_gt($extension_Int64_547_i64 const& $this LIFETIMEBOUND, $extension_Int64_547_i64 rhs) noexcept -> const std::tuple<Builtin::u64, Builtin::i64>;
	#line 787 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline auto CarryingMul($extension_Int64_547_i64 const& $this LIFETIMEBOUND, $extension_Int64_547_i64 rhs, $extension_Int64_547_i64 carry) noexcept -> const std::tuple<Builtin::u64, Builtin::i64>;
	#line 795 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_qst($extension_Int64_547_i64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int64_547_i64>;
	#line 804 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_qst_eq($extension_Int64_547_i64 & $this , T rhs) noexcept -> typename $extension_Int64_547_i64&;
	#line 816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_ne($extension_Int64_547_i64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int64_547_i64;
	#line 823 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_ne_eq($extension_Int64_547_i64 & $this , T rhs)  -> typename $extension_Int64_547_i64&;
	#line 828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_mod($extension_Int64_547_i64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int64_547_i64;
	#line 835 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_eq($extension_Int64_547_i64 & $this , T rhs)  -> typename $extension_Int64_547_i64&;
	#line 840 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_or($extension_Int64_547_i64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int64_547_i64;
	#line 847 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_or_eq($extension_Int64_547_i64 & $this , T rhs)  -> typename $extension_Int64_547_i64&;
	#line 852 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_qst($extension_Int64_547_i64 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_Int64_547_i64, bool>;
	#line 861 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst($extension_Int64_547_i64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int64_547_i64>;
	#line 871 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst_eq($extension_Int64_547_i64 & $this , T rhs) noexcept -> typename $extension_Int64_547_i64&;
	#line 882 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mod_qst($extension_Int64_547_i64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int64_547_i64>;
	#line 891 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mod_qst_eq($extension_Int64_547_i64 & $this , T rhs) noexcept -> typename $extension_Int64_547_i64&;
	#line 903 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mod_ne($extension_Int64_547_i64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int64_547_i64;
	#line 910 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mod_ne_eq($extension_Int64_547_i64 & $this , T rhs)  -> typename $extension_Int64_547_i64&;
	#line 915 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mod_mod($extension_Int64_547_i64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int64_547_i64;
	#line 922 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mod_mod_eq($extension_Int64_547_i64 & $this , T rhs)  -> typename $extension_Int64_547_i64&;
	#line 927 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mod_mod_qst($extension_Int64_547_i64 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_Int64_547_i64, bool>;
	#line 936 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_sub_qst($extension_Int64_547_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::Nullable<$extension_Int64_547_i64>;
	#line 946 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_sub_ne($extension_Int64_547_i64 const& $this LIFETIMEBOUND)  -> const typename $extension_Int64_547_i64;
	#line 953 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_sub_mod($extension_Int64_547_i64 const& $this LIFETIMEBOUND)  -> const typename $extension_Int64_547_i64;
	#line 961 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_sub_or($extension_Int64_547_i64 const& $this LIFETIMEBOUND)  -> const typename $extension_Int64_547_i64;
	#line 969 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_sub_mod_qst($extension_Int64_547_i64 const& $this LIFETIMEBOUND)  -> const std::tuple<$extension_Int64_547_i64, bool>;
	#line 977 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_lt_lt_qst($extension_Int64_547_i64 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<$extension_Int64_547_i64>;
	#line 985 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_lt_lt_qst_eq($extension_Int64_547_i64 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int64_547_i64&;
	#line 993 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_lt_lt_ne($extension_Int64_547_i64 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_Int64_547_i64;
	#line 1001 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_lt_lt_ne_eq($extension_Int64_547_i64 & $this , Builtin::i32 amount)  -> typename $extension_Int64_547_i64&;
	#line 1003 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_lt_lt_mod($extension_Int64_547_i64 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename $extension_Int64_547_i64;
	#line 1006 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_lt_lt_mod_eq($extension_Int64_547_i64 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int64_547_i64&;
	#line 1008 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_lt_lt_mod_qst($extension_Int64_547_i64 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<$extension_Int64_547_i64, bool>;
	#line 1011 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_gt_gt_qst($extension_Int64_547_i64 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<$extension_Int64_547_i64>;
	#line 1019 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_gt_gt_qst_eq($extension_Int64_547_i64 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int64_547_i64&;
	#line 1027 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_gt_gt_ne($extension_Int64_547_i64 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_Int64_547_i64;
	#line 1035 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_gt_gt_ne_eq($extension_Int64_547_i64 & $this , Builtin::i32 amount)  -> typename $extension_Int64_547_i64&;
	#line 1037 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_gt_gt_mod($extension_Int64_547_i64 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename $extension_Int64_547_i64;
	#line 1040 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_gt_gt_mod_eq($extension_Int64_547_i64 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int64_547_i64&;
	#line 1042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_gt_gt_mod_qst($extension_Int64_547_i64 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<$extension_Int64_547_i64, bool>;
	#line 1047 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor_qst($extension_Int64_547_i64 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const Builtin::Nullable<$extension_Int64_547_i64>;
	#line 1076 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor_qst_eq($extension_Int64_547_i64 & $this , Builtin::u32 exp) noexcept -> typename $extension_Int64_547_i64&;
	#line 1084 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor_ne($extension_Int64_547_i64 const& $this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename $extension_Int64_547_i64;
	#line 1105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor_ne_eq($extension_Int64_547_i64 & $this , Builtin::u32 exp)  -> typename $extension_Int64_547_i64&;
	#line 1107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor_mod($extension_Int64_547_i64 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename $extension_Int64_547_i64;
	#line 1139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor_mod_eq($extension_Int64_547_i64 & $this , Builtin::u32 exp) noexcept -> typename $extension_Int64_547_i64&;
	#line 1141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor_or($extension_Int64_547_i64 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename $extension_Int64_547_i64;
	#line 1150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor_or_eq($extension_Int64_547_i64 & $this , Builtin::u32 exp) noexcept -> typename $extension_Int64_547_i64&;
	#line 1152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor_mod_qst($extension_Int64_547_i64 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const std::tuple<$extension_Int64_547_i64, bool>;
	#line 1183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getCheckedAbs($extension_Int64_547_i64 const& $this ) -> const Builtin::Nullable<$extension_Int64_547_i64>;
	#line 1186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getStrictAbs($extension_Int64_547_i64 const& $this ) -> const $extension_Int64_547_i64;
	#line 1189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getWrappingAbs($extension_Int64_547_i64 const& $this ) -> const $extension_Int64_547_i64;
	#line 1192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getSaturatingAbs($extension_Int64_547_i64 const& $this ) -> const $extension_Int64_547_i64;
	#line 1195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getOverflowingAbs($extension_Int64_547_i64 const& $this ) -> const std::tuple<$extension_Int64_547_i64, bool>;
	#line 547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int64_547_i64, ICheckedArithmetic, ICheckedArithmetic, $extension_Int64_547_i64);
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
#line 1204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	using $extension_Int64_1204_i64 = Builtin::i64;
	#line 1204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE(IBinaryInteger, IBinaryInteger);
	#line 1249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NextMultipleOf($extension_Int64_1204_i64 const& $this LIFETIMEBOUND, $extension_Int64_1204_i64 rhs)  -> const typename $extension_Int64_1204_i64;
	#line 1265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto CheckedNextMultipleOf($extension_Int64_1204_i64 const& $this LIFETIMEBOUND, $extension_Int64_1204_i64 rhs) noexcept -> const Builtin::Nullable<$extension_Int64_1204_i64>;
	#line 1205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class __TT> struct $static_getIsSigned; template<> struct $static_getIsSigned<$extension_Int64_1204_i64> { static inline constexpr auto get() -> const bool; };
	#line 1207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getTrailingZeroCount($extension_Int64_1204_i64 const& $this ) -> const Builtin::u32;
	#line 1208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getTrailingOneCount($extension_Int64_1204_i64 const& $this ) -> const Builtin::u32;
	#line 1209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getByteCount($extension_Int64_1204_i64 const& $this ) -> const Builtin::u32;
	#line 1210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getMinimalBitWidth($extension_Int64_1204_i64 const& $this ) -> const Builtin::u32;
	#line 1214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ASTRUMSTD_API auto getCheckedIsqrt($extension_Int64_1204_i64 const& $this ) -> const Builtin::Nullable<$extension_Int64_1204_i64>;
	#line 1226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline auto getIsqrt($extension_Int64_1204_i64 const& $this ) -> const $extension_Int64_1204_i64;
	#line 1235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getLog2Ceiling($extension_Int64_1204_i64 const& $this ) -> const $extension_Int64_1204_i64;
	#line 1286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getPrevPow2($extension_Int64_1204_i64 const& $this ) -> const $extension_Int64_1204_i64;
	#line 1297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getNextPow2($extension_Int64_1204_i64 const& $this ) -> const $extension_Int64_1204_i64;
	#line 1309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getCheckedNextPow2($extension_Int64_1204_i64 const& $this ) -> const Builtin::Nullable<$extension_Int64_1204_i64>;
	#line 1321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getWrappingNextPow2($extension_Int64_1204_i64 const& $this ) -> const $extension_Int64_1204_i64;
	#line 1204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int64_1204_i64, IBinaryInteger, IBinaryInteger, $extension_Int64_1204_i64);
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
#line 1332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	using $extension_Int64_1332_i64 = Builtin::i64;
	#line 1332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE(IFixedWidthInteger, IFixedWidthInteger);
	#line 1365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto RotateLeft($extension_Int64_1332_i64 const& $this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename $extension_Int64_1332_i64;
	#line 1366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto RotateRight($extension_Int64_1332_i64 const& $this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename $extension_Int64_1332_i64;
	#line 1333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class __TT> struct $static_getBitWidth; template<> struct $static_getBitWidth<$extension_Int64_1332_i64> { static inline constexpr auto get() -> const Builtin::u32; };
	#line 1335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getLeadingZeroCount($extension_Int64_1332_i64 const& $this ) -> const Builtin::u32;
	#line 1336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getLeadingOneCount($extension_Int64_1332_i64 const& $this ) -> const Builtin::u32;
	#line 1337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getPopCount($extension_Int64_1332_i64 const& $this ) -> const Builtin::u32;
	#line 1338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getZeroCount($extension_Int64_1332_i64 const& $this ) -> const Builtin::u32;
	#line 1339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getByteSwapped($extension_Int64_1332_i64 const& $this ) -> const $extension_Int64_1332_i64;
	#line 1340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getBigEndian($extension_Int64_1332_i64 const& $this ) -> const $extension_Int64_1332_i64;
	#line 1347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getLittleEndian($extension_Int64_1332_i64 const& $this ) -> const $extension_Int64_1332_i64;
	#line 1354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getReverseBits($extension_Int64_1332_i64 const& $this ) -> const $extension_Int64_1332_i64;
	#line 1356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getShortestBitLength($extension_Int64_1332_i64 const& $this ) -> const Builtin::u32;
	#line 1332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int64_1332_i64, IFixedWidthInteger, IFixedWidthInteger, $extension_Int64_1332_i64);
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
#line 1370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	using $extension_Int64_1370_i64 = Builtin::i64;
	#line 1370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE(IBinaryIntegerFormatInfo, IBinaryIntegerFormatInfo);
	#line 1378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto IsGreaterThanAsUnsigned($extension_Int64_1370_i64 const& $this LIFETIMEBOUND, $extension_Int64_1370_i64 rhs) noexcept -> const bool;
	#line 1371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class __TT> struct $static_getMaxDigitCount; template<> struct $static_getMaxDigitCount<$extension_Int64_1370_i64> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class __TT> struct $static_getMaxHexDigitCount; template<> struct $static_getMaxHexDigitCount<$extension_Int64_1370_i64> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class __TT> struct $static_getMaxValueDiv10; template<> struct $static_getMaxValueDiv10<$extension_Int64_1370_i64> { static inline constexpr auto get() -> const $extension_Int64_1370_i64; };
	#line 1375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getMultiplyBy10($extension_Int64_1370_i64 const& $this ) -> const $extension_Int64_1370_i64;
	#line 1376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getMultiplyBy16($extension_Int64_1370_i64 const& $this ) -> const $extension_Int64_1370_i64;
	#line 1370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int64_1370_i64, IBinaryIntegerFormatInfo, IBinaryIntegerFormatInfo, $extension_Int64_1370_i64);
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
#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto $static_getMinValue<$extension_Int64_15_i64>::get() -> const $extension_Int64_15_i64
	{
		#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::i64(-9223372036854775807LL - 1)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto $static_getMaxValue<$extension_Int64_15_i64>::get() -> const $extension_Int64_15_i64
	{
		#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(+Builtin::i64(9223372036854775807LL)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	
} namespace $extensions { using namespace System;
#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto operator<=>($extension_Int64_20_i64 const& $this LIFETIMEBOUND, Builtin::Nullable<$extension_Int64_20_i64> rhs) noexcept -> const Builtin::i32
	{
		#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		{
			#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			if ((!Builtin::Is(rhs, nullptr))) {
				#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				auto __tmp0 = *rhs; const auto& rhs = __tmp0;
				
				#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				return $this <=> rhs;
			}
		}
		#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return Builtin::i32(1);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_gt_gt_gt($extension_Int64_20_i64 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_Int64_20_i64
	{
		#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i64>(UnsafeCast<Builtin::u64>($this) >> amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_gt_gt_gt_eq($extension_Int64_20_i64 & $this , Builtin::i32 amount)  -> typename $extension_Int64_20_i64&
	{
		#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_gt_gt_gt)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_lt_lt_bsl($extension_Int64_20_i64 const& $this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename $extension_Int64_20_i64
	{
		#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((amount <=> ADV_USPCS(BitWidth, $extension_Int64_20_i64)()) >= 0) {
			#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return Builtin::i32(0);
		}
		#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return Builtin::UncheckedShiftLeft($this, Builtin::Cast<true, Builtin::i32>(amount));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_lt_lt_bsl_eq($extension_Int64_20_i64 & $this , Builtin::u32 amount) noexcept -> typename $extension_Int64_20_i64&
	{
		#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_lt_lt_bsl)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_gt_gt_bsl($extension_Int64_20_i64 const& $this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename $extension_Int64_20_i64
	{
		#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((amount <=> ADV_USPCS(BitWidth, $extension_Int64_20_i64)()) >= 0) {
			#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return ADV_UPCS(IsPositive)($this.$ref()) ? Builtin::i32(0) : Builtin::i32(-1);
		}
		#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return Builtin::UncheckedShiftRight($this, Builtin::Cast<true, Builtin::i32>(amount));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_gt_gt_bsl_eq($extension_Int64_20_i64 & $this , Builtin::u32 amount) noexcept -> typename $extension_Int64_20_i64&
	{
		#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_gt_gt_bsl)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getHashCode($extension_Int64_20_i64 const& $this ) -> const Builtin::u64
	{
		#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u64>($this)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	
} namespace $extensions { using namespace System;
#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToBoolean($extension_Int64_88_i64 const& $this LIFETIMEBOUND) noexcept -> const bool
	{
		#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this != Builtin::i32(0)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToInt8($extension_Int64_88_i64 const& $this LIFETIMEBOUND)  -> const Builtin::i8
	{
		#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (($this <=> Builtin::i32(0x7F)) > 0 || ($this <=> (Builtin::i32(-0x80))) < 0) {
			#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return Builtin::Cast<true, Builtin::i8>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToUInt8($extension_Int64_88_i64 const& $this LIFETIMEBOUND)  -> const Builtin::u8
	{
		#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (($this <=> Builtin::i32(0)) < 0 || ($this <=> Builtin::i32(0xFF)) > 0) {
			#line 98 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return Builtin::Cast<true, Builtin::u8>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToInt16($extension_Int64_88_i64 const& $this LIFETIMEBOUND)  -> const Builtin::i16
	{
		#line 103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (($this <=> Builtin::i32(0x7FFF)) > 0 || ($this <=> (Builtin::i32(-0x8000))) < 0) {
			#line 104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return Builtin::Cast<true, Builtin::i16>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToUInt16($extension_Int64_88_i64 const& $this LIFETIMEBOUND)  -> const Builtin::u16
	{
		#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (($this <=> Builtin::i32(0)) < 0 || ($this <=> Builtin::i32(0xFFFF)) > 0) {
			#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return Builtin::Cast<true, Builtin::u16>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToInt32($extension_Int64_88_i64 const& $this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (($this <=> Builtin::i32(0x7FFFFFFF)) > 0 || ($this <=> (Builtin::i64(-0x80000000LL))) < 0) {
			#line 116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return Builtin::Cast<true, Builtin::i32>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToUInt32($extension_Int64_88_i64 const& $this LIFETIMEBOUND)  -> const Builtin::u32
	{
		#line 121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (($this <=> Builtin::i32(0)) < 0 || ($this <=> Builtin::i64(0xFFFFFFFFLL)) > 0) {
			#line 122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return Builtin::Cast<true, Builtin::u32>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToInt64($extension_Int64_88_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i64
	{
		#line 126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToUInt64($extension_Int64_88_i64 const& $this LIFETIMEBOUND)  -> const Builtin::u64
	{
		#line 128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (($this <=> Builtin::i32(0)) < 0) {
			#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return Builtin::Cast<true, Builtin::u64>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToInt128($extension_Int64_88_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i128
	{
		#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToUInt128($extension_Int64_88_i64 const& $this LIFETIMEBOUND)  -> const Builtin::u128
	{
		#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (($this <=> Builtin::i32(0)) < 0) {
			#line 136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return Builtin::Cast<true, Builtin::u128>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToIsize($extension_Int64_88_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::isize
	{
		#line 140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToUsize($extension_Int64_88_i64 const& $this LIFETIMEBOUND)  -> const Builtin::usize
	{
		#line 142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (($this <=> Builtin::i32(0)) < 0) {
			#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if constexpr ((Builtin::usize(sizeof(Builtin::usize)) <=> Builtin::i32(64)) < 0) {
			#line 146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			if (($this <=> Builtin::i64(0xFFFFFFFFLL)) > 0) {
				#line 147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				Builtin::Throw(Builtin::IntegerOverflowException{});
			}
		}
		#line 150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return Builtin::Cast<true, Builtin::usize>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToFloat32($extension_Int64_88_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::f32
	{
		#line 152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToFloat64($extension_Int64_88_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::f64
	{
		#line 153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToByte($extension_Int64_88_i64 const& $this LIFETIMEBOUND)  -> const Builtin::u8
	{
		#line 154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(ToUInt8)($this.$ref())); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToChar($extension_Int64_88_i64 const& $this LIFETIMEBOUND)  -> const Builtin::char32
	{
		#line 157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (($this <=> Builtin::i32(0)) < 0 || ($this <=> Builtin::i32(0x10FFFF)) > 0) {
			#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return Builtin::char32{Builtin::Cast<true, Builtin::u32>($this)};
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	
} namespace $extensions { using namespace System;
#line 168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_div_mod($extension_Int64_166_i64 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_Int64_166_i64, $extension_Int64_166_i64>
	{
		#line 170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator /% implemented only for integer types");
		#line 171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return std::make_tuple(ADV_UFCS(_operator_bsl)($this, rhs), $this % rhs);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_div_not($extension_Int64_166_i64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int64_166_i64
	{
		#line 176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Auto<decltype($this)> result = $this; 
		#line 177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		result /= rhs;
		#line 178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_div_not_eq($extension_Int64_166_i64 & $this , auto rhs)  -> typename $extension_Int64_166_i64&
	{
		#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this /= rhs); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_div_lt($extension_Int64_166_i64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int64_166_i64
	{
		#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if constexpr (Builtin::TypeIs<T, IBinaryInteger>()) {
			#line 186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			const auto& [div, rem] = ADV_UFCS(_operator_div_mod)($this, rhs);
			#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			if (rem == Builtin::i32(0)) {
				#line 188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				return div;
			}
			#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			Builtin::Auto<decltype(($this ^ rhs) >> (ADV_USPCS(BitWidth, $extension_Int64_166_i64)() - Builtin::i32(1)))> correction = ($this ^ rhs) >> (ADV_USPCS(BitWidth, $extension_Int64_166_i64)() - Builtin::i32(1)); 
			#line 191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return div + correction;
		} else {
			#line 192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			{
				#line 193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				return Builtin::Cast<true, $extension_Int64_166_i64>((ADV_UFCS(_operator_div_lt)(Builtin::f64{$this}, rhs)));
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_div_lt_eq($extension_Int64_166_i64 & $this , auto rhs)  -> typename $extension_Int64_166_i64&
	{
		#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this = $extension_Int64_166_i64{ADV_UFCS(_operator_div_lt)($this, rhs)}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_div_gt($extension_Int64_166_i64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int64_166_i64
	{
		#line 201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if constexpr (Builtin::TypeIs<T, IBinaryInteger>()) {
			#line 202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			const auto& [div, rem] = ADV_UFCS(_operator_div_mod)($this, rhs);
			#line 203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			if (rem == Builtin::i32(0)) {
				#line 204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				return div;
			}
			#line 206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			Builtin::Auto<decltype(Builtin::i32(1) + (($this ^ rhs) >> (ADV_USPCS(BitWidth, $extension_Int64_166_i64)() - Builtin::i32(1))))> correction = Builtin::i32(1) + (($this ^ rhs) >> (ADV_USPCS(BitWidth, $extension_Int64_166_i64)() - Builtin::i32(1))); 
			#line 207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return div + correction;
		} else {
			#line 208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			{
				#line 209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				return Builtin::Cast<true, $extension_Int64_166_i64>((ADV_UFCS(_operator_div_gt)(Builtin::f64{$this}, rhs)));
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_div_gt_eq($extension_Int64_166_i64 & $this , auto rhs)  -> typename $extension_Int64_166_i64&
	{
		#line 213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this = $extension_Int64_166_i64{ADV_UFCS(_operator_div_gt)($this, rhs)}); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	
} namespace $extensions { using namespace System;
#line 218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl($extension_Int64_216_i64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int64_216_i64
	{
		#line 218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Div)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_eq($extension_Int64_216_i64 & $this , T rhs)  -> typename $extension_Int64_216_i64&
	{
		#line 220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(DivAssign)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl($extension_Int64_216_i64 const& $this LIFETIMEBOUND, T rhs)  -> const Builtin::Nullable<$extension_Int64_216_i64>
	{
		#line 227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\? implemented only for integer types");
		#line 228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_216_i64 result{}; 
		#line 229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (Builtin::DivExact($this, rhs, result)) {
			#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return result;
		}
		#line 232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return nullptr;
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	
} namespace $extensions { using namespace System;
#line 239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor($extension_Int64_236_i64 const& $this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename $extension_Int64_236_i64
	{
		#line 241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return Builtin::i64(1LL);
		}
		#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Auto<decltype(Builtin::i64(1LL))> result = Builtin::i64(1LL); 
		#line 249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (std::is_constant_evaluated()) {
			#line 250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			while ((exp <=> Builtin::i32(1)) > 0) 
			{
				#line 251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
					#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
					result *= base;
				}
				#line 254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
				#line 255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				base *= base;
			}
			#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return result * base;
		} else {
			#line 258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			{
				#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				for (;;) 
				{
					#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
					if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
						#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
						result *= base;
						#line 262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
						if (exp == Builtin::i32(1)) {
							#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
							return result;
						}
					}
					#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
					ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
					#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
					base *= base;
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor_eq($extension_Int64_236_i64 & $this , Builtin::u32 exp)  -> typename $extension_Int64_236_i64&
	{
		#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_xor_xor)($this, exp)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	
} namespace $extensions { using namespace System;
#line 327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline auto MaxMagnitudeNumber($extension_Int64_274_i64 const& $this LIFETIMEBOUND, $extension_Int64_274_i64 rhs)  -> const typename $extension_Int64_274_i64
	{
		#line 327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(MaxMagnitude)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline auto MinMagnitudeNumber($extension_Int64_274_i64 const& $this LIFETIMEBOUND, $extension_Int64_274_i64 rhs)  -> const typename $extension_Int64_274_i64
	{
		#line 358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(MinMagnitude)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToInt8($extension_Int64_274_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i8
	{
		#line 372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i8>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToUInt8($extension_Int64_274_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u8
	{
		#line 373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u8>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToInt16($extension_Int64_274_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i16
	{
		#line 374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i16>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToUInt16($extension_Int64_274_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u16
	{
		#line 375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u16>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToInt32($extension_Int64_274_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i32
	{
		#line 376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i32>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToUInt32($extension_Int64_274_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u32
	{
		#line 377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u32>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToInt64($extension_Int64_274_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i64
	{
		#line 378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToUInt64($extension_Int64_274_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u64
	{
		#line 379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u64>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToInt128($extension_Int64_274_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i128
	{
		#line 380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToUInt128($extension_Int64_274_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u128
	{
		#line 381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u128>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToIsize($extension_Int64_274_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::isize
	{
		#line 382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::isize>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToUsize($extension_Int64_274_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::usize
	{
		#line 383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::usize>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto $static_getOne<$extension_Int64_274_i64>::get() -> const $extension_Int64_274_i64
	{
		#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::i64(1LL)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto $static_getZero<$extension_Int64_274_i64>::get() -> const $extension_Int64_274_i64
	{
		#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::i64(0LL)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto $static_getRadix<$extension_Int64_274_i64>::get() -> const Builtin::i32
	{
		#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(2)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getAbs($extension_Int64_274_i64 const& $this ) -> const $extension_Int64_274_i64
	{
		#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)($this.$ref()) ? -$this : $this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsCanonical($extension_Int64_274_i64 const& $this ) -> const bool
	{
		#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsComplexNumber($extension_Int64_274_i64 const& $this ) -> const bool
	{
		#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsEvenInteger($extension_Int64_274_i64 const& $this ) -> const bool
	{
		#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(($this & Builtin::i64(1LL)) == Builtin::i32(0)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsFinite($extension_Int64_274_i64 const& $this ) -> const bool
	{
		#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsImaginaryNumber($extension_Int64_274_i64 const& $this ) -> const bool
	{
		#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsInfinity($extension_Int64_274_i64 const& $this ) -> const bool
	{
		#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsInteger($extension_Int64_274_i64 const& $this ) -> const bool
	{
		#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsNaN($extension_Int64_274_i64 const& $this ) -> const bool
	{
		#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsNegative($extension_Int64_274_i64 const& $this ) -> const bool
	{
		#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(($this <=> Builtin::i32(0)) < 0); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsNegativeInfinity($extension_Int64_274_i64 const& $this ) -> const bool
	{
		#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsNormal($extension_Int64_274_i64 const& $this ) -> const bool
	{
		#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this != Builtin::i32(0)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsOddInteger($extension_Int64_274_i64 const& $this ) -> const bool
	{
		#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(($this & Builtin::i64(1LL)) != Builtin::i32(0)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsPositive($extension_Int64_274_i64 const& $this ) -> const bool
	{
		#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(($this <=> Builtin::i32(0)) >= 0); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsPositiveInfinity($extension_Int64_274_i64 const& $this ) -> const bool
	{
		#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsRealNumber($extension_Int64_274_i64 const& $this ) -> const bool
	{
		#line 294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsSubnormal($extension_Int64_274_i64 const& $this ) -> const bool
	{
		#line 295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsZero($extension_Int64_274_i64 const& $this ) -> const bool
	{
		#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this == Builtin::i32(0)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	
} namespace $extensions { using namespace System;
#line 387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto $static_getMinusOne<$extension_Int64_386_i64>::get() -> const $extension_Int64_386_i64
	{
		#line 387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(-1)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	
} namespace $extensions { using namespace System;
#line 411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto Max($extension_Int64_390_i64 const& $this LIFETIMEBOUND, $extension_Int64_390_i64 rhs) noexcept -> const typename $extension_Int64_390_i64
	{
		#line 411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultMax)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto MaxNumber($extension_Int64_390_i64 const& $this LIFETIMEBOUND, $extension_Int64_390_i64 rhs) noexcept -> const typename $extension_Int64_390_i64
	{
		#line 412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Max)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto Min($extension_Int64_390_i64 const& $this LIFETIMEBOUND, $extension_Int64_390_i64 rhs) noexcept -> const typename $extension_Int64_390_i64
	{
		#line 413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultMin)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto MinNumber($extension_Int64_390_i64 const& $this LIFETIMEBOUND, $extension_Int64_390_i64 rhs) noexcept -> const typename $extension_Int64_390_i64
	{
		#line 414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Min)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto Clamp($extension_Int64_390_i64 const& $this LIFETIMEBOUND, $extension_Int64_390_i64 min, $extension_Int64_390_i64 max)  -> const typename $extension_Int64_390_i64
	{
		#line 415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultClamp)($this, min, max)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getSign($extension_Int64_390_i64 const& $this ) -> const Builtin::i32
	{
		#line 391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultSign)($this)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	
} namespace $extensions { using namespace System;
#line 482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto CheckedLog($extension_Int64_418_i64 const& $this LIFETIMEBOUND, $extension_Int64_418_i64 base) noexcept -> const Builtin::Nullable<$extension_Int64_418_i64>
	{
		#line 484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (($this <=> Builtin::i32(0)) <= 0 || (base <=> Builtin::i32(1)) <= 0) {
			#line 485 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return nullptr;
		}
		#line 488 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (std::is_constant_evaluated()) {
			#line 489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			if (base == Builtin::i32(2)) {
				#line 490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				return ADV_UPCS(CheckedLog2)($this.$ref());
			}
			#line 492 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			if (base == Builtin::i32(10)) {
				#line 493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				return ADV_UPCS(CheckedLog10)($this.$ref());
			}
		}
		#line 497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (($this <=> base) < 0) {
			#line 498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return Builtin::i64(0LL);
		}
		#line 501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_418_i64 n = Builtin::i64(1LL); 
		#line 502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Auto<decltype(base)> r = base; 
		#line 503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_bsl)($this, base))> baseRatio = ADV_UFCS(_operator_bsl)($this, base); 
		#line 504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		while ((r <=> baseRatio) <= 0) 
		{
			#line 505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			++n;
			#line 506 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			r *= base;
		}
		#line 509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return n;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto Midpoint($extension_Int64_418_i64 const& $this LIFETIMEBOUND, $extension_Int64_418_i64 rhs) noexcept -> const typename $extension_Int64_418_i64
	{
		#line 527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		const Builtin::Auto<decltype((($this ^ rhs) >> Builtin::i32(1)) + ($this & rhs))> result = (($this ^ rhs) >> Builtin::i32(1)) + ($this & rhs); 
		#line 528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		const Builtin::Auto<decltype((result <=> Builtin::i32(0)) < 0)> correction = (result <=> Builtin::i32(0)) < 0; 
		#line 529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result + ((Builtin::Cast<true, $extension_Int64_418_i64>(correction)) & ($this ^ rhs));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto IsMultipleOf($extension_Int64_418_i64 const& $this LIFETIMEBOUND, $extension_Int64_418_i64 rhs) noexcept -> const bool
	{
		#line 535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (rhs == Builtin::i32(0)) {
			#line 536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return $this == Builtin::i32(0);
		}
		#line 539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (rhs == Builtin::i32(-1)) {
			#line 540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return Builtin::Boolean(true);
		}
		#line 543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return $this % rhs == Builtin::i32(0);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto $static_getAllBitsSet<$extension_Int64_418_i64>::get() -> const $extension_Int64_418_i64
	{
		#line 420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(MinusOne, Builtin::i64)()); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsPow2($extension_Int64_418_i64 const& $this ) -> const bool
	{
		#line 423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsPositive)($this.$ref()) && ADV_UPCS(PopCount)($this.$ref()) == Builtin::i32(1)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getCheckedLog2($extension_Int64_418_i64 const& $this ) -> const Builtin::Nullable<$extension_Int64_418_i64>
	{
		#line 429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (($this <=> Builtin::i32(0)) <= 0) {
			#line 430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return nullptr;
		}
		#line 433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return Builtin::Cast<true, $extension_Int64_418_i64>((ADV_USPCS(BitWidth, $extension_Int64_418_i64)() - Builtin::i32(1) - ADV_UPCS(LeadingZeroCount)($this.$ref())));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getLog2($extension_Int64_418_i64 const& $this ) -> const $extension_Int64_418_i64
	{
		#line 439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (const auto result = ADV_UPCS(CheckedLog2)($this.$ref())) {
			{
				#line 439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				return result;
			}
		}
		#line 442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getCheckedLog10($extension_Int64_418_i64 const& $this ) -> const Builtin::Nullable<$extension_Int64_418_i64>
	{
		#line 449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (($this <=> Builtin::i32(0)) <= 0) {
			#line 450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return nullptr;
		}
		#line 453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		constexpr Builtin::u32 C1 = Builtin::u32(0b01100000000000000000U) - Builtin::i32(10);
		#line 454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		constexpr Builtin::u32 C2 = Builtin::u32(0b10000000000000000000U) - Builtin::i32(100);
		#line 455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		constexpr Builtin::u32 C3 = Builtin::u32(0b11100000000000000000U) - Builtin::i32(1000);
		#line 456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		constexpr Builtin::u32 C4 = Builtin::u32(0b10000000000000000000U) - Builtin::i32(10000);
		#line 457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Auto<decltype(Builtin::i32(0))> log = Builtin::i32(0); 
		#line 458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Auto<decltype(Builtin::Cast<true, Builtin::u64>($this))> val1 = Builtin::Cast<true, Builtin::u64>($this); 
		#line 459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((val1 <=> Builtin::i64(10000000000LL)) >= 0) {
			#line 460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			ADV_UFCS(DivAssign)(val1.$ref(), Builtin::u64(10000000000ULL));
			#line 461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			log += Builtin::i32(10);
		}
		#line 463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((val1 <=> Builtin::i32(100000)) >= 0) {
			#line 464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			ADV_UFCS(DivAssign)(val1.$ref(), Builtin::u32(100000U));
			#line 465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			log += Builtin::i32(5);
		}
		#line 467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::u32>(val1))> val = Builtin::Cast<true, Builtin::u32>(val1); 
		#line 468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return log + ((((val + C1) & (val + C2)) ^ ((val + C3) & (val + C4))) >> Builtin::i32(17));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getLog10($extension_Int64_418_i64 const& $this ) -> const $extension_Int64_418_i64
	{
		#line 474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (const auto result = ADV_UPCS(CheckedLog10)($this.$ref())) {
			{
				#line 474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				return result;
			}
		}
		#line 477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	
} namespace $extensions { using namespace System;
#line 550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_add_qst($extension_Int64_547_i64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int64_547_i64>
	{
		#line 552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +? implemented only for integer types");
		#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_547_i64 result{}; 
		#line 554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (Builtin::SafeAdd($this, rhs, result)) {
			#line 555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return result;
		}
		#line 557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_add_qst_eq($extension_Int64_547_i64 & $this , T rhs) noexcept -> typename $extension_Int64_547_i64&
	{
		#line 561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +?= implemented only for integer types");
		#line 562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (const auto result = ADV_UFCS(_operator_add_qst)($this, rhs)) {
			{
				#line 562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				$this = result;
			}
		}
		#line 565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_add_ne($extension_Int64_547_i64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int64_547_i64
	{
		#line 572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +! implemented only for integer types");
		#line 573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_547_i64 result{}; 
		#line 574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::StrictAdd($this, rhs, result);
		#line 575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_add_ne_eq($extension_Int64_547_i64 & $this , T rhs)  -> typename $extension_Int64_547_i64&
	{
		#line 577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_add_ne)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_add_mod($extension_Int64_547_i64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int64_547_i64
	{
		#line 583 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +% implemented only for integer types");
		#line 584 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_547_i64 result{}; 
		#line 585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::WrappingAdd($this, rhs, result);
		#line 586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 588 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_add_mod_eq($extension_Int64_547_i64 & $this , T rhs) noexcept -> typename $extension_Int64_547_i64&
	{
		#line 588 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_add_mod)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_add_or($extension_Int64_547_i64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int64_547_i64
	{
		#line 594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +| implemented only for integer types");
		#line 595 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_547_i64 result{}; 
		#line 596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::SaturatingAdd($this, rhs, result);
		#line 597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 599 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_add_or_eq($extension_Int64_547_i64 & $this , T rhs) noexcept -> typename $extension_Int64_547_i64&
	{
		#line 599 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_add_or)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 603 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_add_mod_qst($extension_Int64_547_i64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_Int64_547_i64, bool>
	{
		#line 604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +%? implemented only for integer types");
		#line 605 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_547_i64 result{}; 
		#line 606 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Auto<decltype(!Builtin::SafeAdd($this, rhs, result))> overflowed = !Builtin::SafeAdd($this, rhs, result); 
		#line 607 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 611 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_add_add_qst($extension_Int64_547_i64 & $this )  -> typename $extension_Int64_547_i64&
	{
		#line 611 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_qst_eq)($this, Builtin::i64(1LL))); 
	}
	inline constexpr auto _operator_add_add_qst_postfix($extension_Int64_547_i64 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_add_add_qst)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 614 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_add_add_ne($extension_Int64_547_i64 & $this )  -> typename $extension_Int64_547_i64&
	{
		#line 614 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_ne_eq)($this, Builtin::i64(1LL))); 
	}
	inline constexpr auto _operator_add_add_ne_postfix($extension_Int64_547_i64 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_add_add_ne)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 617 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_add_add_mod($extension_Int64_547_i64 & $this )  -> typename $extension_Int64_547_i64&
	{
		#line 617 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_mod_eq)($this, Builtin::i64(1LL))); 
	}
	inline constexpr auto _operator_add_add_mod_postfix($extension_Int64_547_i64 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_add_add_mod)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_add_add_or($extension_Int64_547_i64 & $this )  -> typename $extension_Int64_547_i64&
	{
		#line 620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_or_eq)($this, Builtin::i64(1LL))); 
	}
	inline constexpr auto _operator_add_add_or_postfix($extension_Int64_547_i64 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_add_add_or)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto CarryingAdd($extension_Int64_547_i64 const& $this LIFETIMEBOUND, $extension_Int64_547_i64 rhs, bool carry) noexcept -> const std::tuple<$extension_Int64_547_i64, bool>
	{
		#line 626 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_547_i64 result{}; 
		#line 627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Auto<decltype(Builtin::CarryingAdd($this, rhs, carry, result))> overflowed = Builtin::CarryingAdd($this, rhs, carry, result); 
		#line 628 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto BorrowingSub($extension_Int64_547_i64 const& $this LIFETIMEBOUND, $extension_Int64_547_i64 rhs, bool carry) noexcept -> const std::tuple<$extension_Int64_547_i64, bool>
	{
		#line 635 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_547_i64 result{}; 
		#line 636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Auto<decltype(Builtin::BorrowingSub($this, rhs, carry, result))> overflowed = Builtin::BorrowingSub($this, rhs, carry, result); 
		#line 637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_sub_qst($extension_Int64_547_i64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int64_547_i64>
	{
		#line 644 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -? implemented only for integer types");
		#line 645 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_547_i64 result{}; 
		#line 646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (Builtin::SafeSubtract($this, rhs, result)) {
			#line 647 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return result;
		}
		#line 649 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_sub_qst_eq($extension_Int64_547_i64 & $this , T rhs) noexcept -> typename $extension_Int64_547_i64&
	{
		#line 653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -?= implemented only for integer types");
		#line 654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (const auto result = ADV_UFCS(_operator_sub_qst)($this, rhs)) {
			{
				#line 654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				$this = result;
			}
		}
		#line 657 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_sub_ne($extension_Int64_547_i64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int64_547_i64
	{
		#line 664 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -! implemented only for integer types");
		#line 665 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_547_i64 result{}; 
		#line 666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::StrictSubtract($this, rhs, result);
		#line 667 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 669 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_sub_ne_eq($extension_Int64_547_i64 & $this , T rhs)  -> typename $extension_Int64_547_i64&
	{
		#line 669 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_sub_ne)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_sub_mod($extension_Int64_547_i64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int64_547_i64
	{
		#line 675 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -% implemented only for integer types");
		#line 676 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_547_i64 result{}; 
		#line 677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::WrappingSubtract($this, rhs, result);
		#line 678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_sub_mod_eq($extension_Int64_547_i64 & $this , T rhs) noexcept -> typename $extension_Int64_547_i64&
	{
		#line 680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_sub_mod)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 684 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_sub_or($extension_Int64_547_i64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int64_547_i64
	{
		#line 686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -| implemented only for integer types");
		#line 687 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_547_i64 result{}; 
		#line 688 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::SaturatingSubtract($this, rhs, result);
		#line 689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_sub_or_eq($extension_Int64_547_i64 & $this , T rhs) noexcept -> typename $extension_Int64_547_i64&
	{
		#line 691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_sub_or)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_sub_mod_qst($extension_Int64_547_i64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_Int64_547_i64, bool>
	{
		#line 696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -%? implemented only for integer types");
		#line 697 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_547_i64 result{}; 
		#line 698 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Auto<decltype(!Builtin::SafeSubtract($this, rhs, result))> overflowed = !Builtin::SafeSubtract($this, rhs, result); 
		#line 699 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_sub_sub_qst($extension_Int64_547_i64 & $this )  -> typename $extension_Int64_547_i64&
	{
		#line 703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_qst_eq)($this, Builtin::i64(1LL))); 
	}
	inline constexpr auto _operator_sub_sub_qst_postfix($extension_Int64_547_i64 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_sub_sub_qst)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 706 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_sub_sub_ne($extension_Int64_547_i64 & $this )  -> typename $extension_Int64_547_i64&
	{
		#line 706 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_ne_eq)($this, Builtin::i64(1LL))); 
	}
	inline constexpr auto _operator_sub_sub_ne_postfix($extension_Int64_547_i64 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_sub_sub_ne)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_sub_sub_mod($extension_Int64_547_i64 & $this )  -> typename $extension_Int64_547_i64&
	{
		#line 709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_mod_eq)($this, Builtin::i64(1LL))); 
	}
	inline constexpr auto _operator_sub_sub_mod_postfix($extension_Int64_547_i64 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_sub_sub_mod)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 712 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_sub_sub_or($extension_Int64_547_i64 & $this )  -> typename $extension_Int64_547_i64&
	{
		#line 712 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_or_eq)($this, Builtin::i64(1LL))); 
	}
	inline constexpr auto _operator_sub_sub_or_postfix($extension_Int64_547_i64 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_sub_sub_or)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 716 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mul_qst($extension_Int64_547_i64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int64_547_i64>
	{
		#line 718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *? implemented only for integer types");
		#line 719 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_547_i64 result{}; 
		#line 720 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (Builtin::SafeMultiply($this, rhs, result)) {
			#line 721 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return result;
		}
		#line 723 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 725 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mul_qst_eq($extension_Int64_547_i64 & $this , T rhs) noexcept -> typename $extension_Int64_547_i64&
	{
		#line 727 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *?= implemented only for integer types");
		#line 728 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (const auto result = ADV_UFCS(_operator_mul_qst)($this, rhs)) {
			{
				#line 728 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				$this = result;
			}
		}
		#line 731 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 736 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mul_ne($extension_Int64_547_i64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int64_547_i64
	{
		#line 738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *! implemented only for integer types");
		#line 739 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_547_i64 result{}; 
		#line 740 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::StrictMultiply($this, rhs, result);
		#line 741 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mul_ne_eq($extension_Int64_547_i64 & $this , T rhs)  -> typename $extension_Int64_547_i64&
	{
		#line 743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_mul_ne)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 747 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mul_mod($extension_Int64_547_i64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int64_547_i64
	{
		#line 749 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *% implemented only for integer types");
		#line 750 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_547_i64 result{}; 
		#line 751 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::WrappingMultiply($this, rhs, result);
		#line 752 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 754 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mul_mod_eq($extension_Int64_547_i64 & $this , T rhs) noexcept -> typename $extension_Int64_547_i64&
	{
		#line 754 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_mul_mod)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 758 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mul_or($extension_Int64_547_i64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int64_547_i64
	{
		#line 760 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *| implemented only for integer types");
		#line 761 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_547_i64 result{}; 
		#line 762 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::SaturatingMultiply($this, rhs, result);
		#line 763 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mul_or_eq($extension_Int64_547_i64 & $this , T rhs) noexcept -> typename $extension_Int64_547_i64&
	{
		#line 765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_mul_or)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 769 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mul_mod_qst($extension_Int64_547_i64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_Int64_547_i64, bool>
	{
		#line 770 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *%? implemented only for integer types");
		#line 771 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_547_i64 result{}; 
		#line 772 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Auto<decltype(!Builtin::SafeMultiply($this, rhs, result))> overflowed = !Builtin::SafeMultiply($this, rhs, result); 
		#line 773 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 778 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline auto _operator_mul_gt($extension_Int64_547_i64 const& $this LIFETIMEBOUND, $extension_Int64_547_i64 rhs) noexcept -> const std::tuple<Builtin::u64, Builtin::i64>
	{
		#line 780 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		const auto& [low, high] = Builtin::WideningMul64($this, rhs);
		#line 781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return std::make_tuple(low, high);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 787 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline auto CarryingMul($extension_Int64_547_i64 const& $this LIFETIMEBOUND, $extension_Int64_547_i64 rhs, $extension_Int64_547_i64 carry) noexcept -> const std::tuple<Builtin::u64, Builtin::i64>
	{
		#line 789 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		const auto& [low, high] = Builtin::CarryingMul64($this, rhs, carry);
		#line 790 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return std::make_tuple(low, high);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 795 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_qst($extension_Int64_547_i64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int64_547_i64>
	{
		#line 797 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\? implemented only for integer types");
		#line 798 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_547_i64 result{}; 
		#line 799 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (Builtin::SafeDivide($this, rhs, result)) {
			#line 800 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return result;
		}
		#line 802 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 804 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_qst_eq($extension_Int64_547_i64 & $this , T rhs) noexcept -> typename $extension_Int64_547_i64&
	{
		#line 806 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\?= implemented only for integer types");
		#line 807 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (const auto result = ADV_UFCS(_operator_bsl_qst)($this, rhs)) {
			{
				#line 807 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 808 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				$this = result;
			}
		}
		#line 810 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_ne($extension_Int64_547_i64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int64_547_i64
	{
		#line 818 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\! implemented only for integer types");
		#line 819 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_547_i64 result{}; 
		#line 820 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::StrictDivide($this, rhs, result);
		#line 821 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 823 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_ne_eq($extension_Int64_547_i64 & $this , T rhs)  -> typename $extension_Int64_547_i64&
	{
		#line 823 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_bsl_ne)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_mod($extension_Int64_547_i64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int64_547_i64
	{
		#line 830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\% implemented only for integer types");
		#line 831 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_547_i64 result{}; 
		#line 832 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::WrappingDivide($this, rhs, result);
		#line 833 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 835 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_eq($extension_Int64_547_i64 & $this , T rhs)  -> typename $extension_Int64_547_i64&
	{
		#line 835 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_bsl_mod)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 840 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_or($extension_Int64_547_i64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int64_547_i64
	{
		#line 842 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\| implemented only for integer types");
		#line 843 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_547_i64 result{}; 
		#line 844 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::SaturatingDivide($this, rhs, result);
		#line 845 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 847 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_or_eq($extension_Int64_547_i64 & $this , T rhs)  -> typename $extension_Int64_547_i64&
	{
		#line 847 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_bsl_or)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 852 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_qst($extension_Int64_547_i64 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_Int64_547_i64, bool>
	{
		#line 853 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\%? implemented only for integer types");
		#line 854 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_547_i64 result{}; 
		#line 855 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Auto<decltype(!Builtin::SafeDivide($this, rhs, result))> overflowed = !Builtin::SafeDivide($this, rhs, result); 
		#line 856 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 861 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst($extension_Int64_547_i64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int64_547_i64>
	{
		#line 863 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\? implemented only for integer types");
		#line 864 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_547_i64 result{}; 
		#line 865 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (Builtin::SafeDivExact($this, rhs, result)) {
			#line 866 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return result;
		}
		#line 868 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 871 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst_eq($extension_Int64_547_i64 & $this , T rhs) noexcept -> typename $extension_Int64_547_i64&
	{
		#line 873 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\?= implemented only for integer types");
		#line 874 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (const auto result = ADV_UFCS(_operator_bsl_bsl_qst)($this, rhs)) {
			{
				#line 874 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 875 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				$this = result;
			}
		}
		#line 877 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 882 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mod_qst($extension_Int64_547_i64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int64_547_i64>
	{
		#line 884 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %? implemented only for integer types");
		#line 885 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_547_i64 result{}; 
		#line 886 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (Builtin::SafeModulus($this, rhs, result)) {
			#line 887 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return result;
		}
		#line 889 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 891 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mod_qst_eq($extension_Int64_547_i64 & $this , T rhs) noexcept -> typename $extension_Int64_547_i64&
	{
		#line 893 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %?= implemented only for integer types");
		#line 894 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (const auto result = ADV_UFCS(_operator_mod_qst)($this, rhs)) {
			{
				#line 894 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 895 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				$this = result;
			}
		}
		#line 897 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 903 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mod_ne($extension_Int64_547_i64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int64_547_i64
	{
		#line 905 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %! implemented only for integer types");
		#line 906 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_547_i64 result{}; 
		#line 907 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::StrictModulus($this, rhs, result);
		#line 908 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 910 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mod_ne_eq($extension_Int64_547_i64 & $this , T rhs)  -> typename $extension_Int64_547_i64&
	{
		#line 910 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_mod_ne)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 915 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mod_mod($extension_Int64_547_i64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int64_547_i64
	{
		#line 917 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %% implemented only for integer types");
		#line 918 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_547_i64 result{}; 
		#line 919 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::WrappingModulus($this, rhs, result);
		#line 920 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 922 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mod_mod_eq($extension_Int64_547_i64 & $this , T rhs)  -> typename $extension_Int64_547_i64&
	{
		#line 922 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_mod_mod)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 927 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mod_mod_qst($extension_Int64_547_i64 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_Int64_547_i64, bool>
	{
		#line 928 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %%? implemented only for integer types");
		#line 929 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_547_i64 result{}; 
		#line 930 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Auto<decltype(!Builtin::SafeModulus($this, rhs, result))> overflowed = !Builtin::SafeModulus($this, rhs, result); 
		#line 931 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 936 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_sub_qst($extension_Int64_547_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::Nullable<$extension_Int64_547_i64>
	{
		#line 938 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_547_i64 result{}; 
		#line 939 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (Builtin::SafeNegate($this, result)) {
			#line 940 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return result;
		}
		#line 942 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 946 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_sub_ne($extension_Int64_547_i64 const& $this LIFETIMEBOUND)  -> const typename $extension_Int64_547_i64
	{
		#line 948 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_547_i64 result{}; 
		#line 949 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::StrictNegate($this, result);
		#line 950 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 953 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_sub_mod($extension_Int64_547_i64 const& $this LIFETIMEBOUND)  -> const typename $extension_Int64_547_i64
	{
		#line 955 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_547_i64 result{}; 
		#line 956 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::WrappingNegate($this, result);
		#line 957 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 961 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_sub_or($extension_Int64_547_i64 const& $this LIFETIMEBOUND)  -> const typename $extension_Int64_547_i64
	{
		#line 963 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_547_i64 result{}; 
		#line 964 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::SaturatingNegate($this, result);
		#line 965 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 969 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_sub_mod_qst($extension_Int64_547_i64 const& $this LIFETIMEBOUND)  -> const std::tuple<$extension_Int64_547_i64, bool>
	{
		#line 971 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_547_i64 result{}; 
		#line 972 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Auto<decltype(!Builtin::SafeNegate($this, result))> overflowed = !Builtin::SafeNegate($this, result); 
		#line 973 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 977 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_lt_lt_qst($extension_Int64_547_i64 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<$extension_Int64_547_i64>
	{
		#line 979 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_Int64_547_i64)()) < 0) {
			#line 980 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return Builtin::UncheckedShiftLeft($this, amount);
		}
		#line 982 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 985 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_lt_lt_qst_eq($extension_Int64_547_i64 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int64_547_i64&
	{
		#line 987 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_Int64_547_i64)()) < 0) {
			#line 988 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return $this <<= amount;
		}
		#line 990 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 993 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_lt_lt_ne($extension_Int64_547_i64 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_Int64_547_i64
	{
		#line 995 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_Int64_547_i64)()) < 0) {
			#line 996 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return Builtin::UncheckedShiftLeft($this, amount);
		}
		#line 998 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Throw(Builtin::IntegerOverflowException{});
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1001 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_lt_lt_ne_eq($extension_Int64_547_i64 & $this , Builtin::i32 amount)  -> typename $extension_Int64_547_i64&
	{
		#line 1001 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_lt_lt_ne)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1003 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_lt_lt_mod($extension_Int64_547_i64 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename $extension_Int64_547_i64
	{
		#line 1003 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::UncheckedShiftLeft($this, amount & (ADV_USPCS(BitWidth, $extension_Int64_547_i64)() - Builtin::i32(1)))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1006 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_lt_lt_mod_eq($extension_Int64_547_i64 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int64_547_i64&
	{
		#line 1006 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_lt_lt_mod)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1008 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_lt_lt_mod_qst($extension_Int64_547_i64 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<$extension_Int64_547_i64, bool>
	{
		#line 1008 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(std::make_tuple(ADV_UFCS(_operator_lt_lt_mod)($this, amount), (amount <=> Builtin::i32(0)) < 0 || (amount <=> ADV_USPCS(BitWidth, $extension_Int64_547_i64)()) >= 0)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1011 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_gt_gt_qst($extension_Int64_547_i64 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<$extension_Int64_547_i64>
	{
		#line 1013 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_Int64_547_i64)()) < 0) {
			#line 1014 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return $this >> amount;
		}
		#line 1016 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1019 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_gt_gt_qst_eq($extension_Int64_547_i64 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int64_547_i64&
	{
		#line 1021 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_Int64_547_i64)()) < 0) {
			#line 1022 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return $this >>= amount;
		}
		#line 1024 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1027 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_gt_gt_ne($extension_Int64_547_i64 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_Int64_547_i64
	{
		#line 1029 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_Int64_547_i64)()) < 0) {
			#line 1030 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return $this >> amount;
		}
		#line 1032 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Throw(Builtin::IntegerOverflowException{});
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1035 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_gt_gt_ne_eq($extension_Int64_547_i64 & $this , Builtin::i32 amount)  -> typename $extension_Int64_547_i64&
	{
		#line 1035 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_gt_gt_ne)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1037 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_gt_gt_mod($extension_Int64_547_i64 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename $extension_Int64_547_i64
	{
		#line 1037 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::UncheckedShiftRight($this, amount & (ADV_USPCS(BitWidth, $extension_Int64_547_i64)() - Builtin::i32(1)))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1040 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_gt_gt_mod_eq($extension_Int64_547_i64 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int64_547_i64&
	{
		#line 1040 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_gt_gt_mod)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_gt_gt_mod_qst($extension_Int64_547_i64 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<$extension_Int64_547_i64, bool>
	{
		#line 1042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(std::make_tuple(ADV_UFCS(_operator_gt_gt_mod)($this, amount), (amount <=> Builtin::i32(0)) < 0 || (amount <=> ADV_USPCS(BitWidth, $extension_Int64_547_i64)()) >= 0)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1047 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor_qst($extension_Int64_547_i64 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const Builtin::Nullable<$extension_Int64_547_i64>
	{
		#line 1049 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1051 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return Builtin::i64(1LL);
		}
		#line 1054 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 1055 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Auto<decltype(Builtin::i64(1LL))> result = Builtin::i64(1LL); 
		#line 1057 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		for (;;) 
		{
			#line 1058 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 1059 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				if (const auto mul = ADV_UFCS(_operator_mul_qst)(result, base)) {
					{
						#line 1059 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
						auto __tmp0 = *mul; const auto& mul = __tmp0;
						
						#line 1060 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
						result = mul;
					}
				} else {
					#line 1061 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
					{
						#line 1062 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
						return nullptr;
					}
				}
				#line 1064 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				if (exp == Builtin::i32(1)) {
					#line 1065 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
					return result;
				}
			}
			#line 1067 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
			#line 1068 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			if (const auto mul = ADV_UFCS(_operator_mul_qst)(base, base)) {
				{
					#line 1068 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
					auto __tmp0 = *mul; const auto& mul = __tmp0;
					
					#line 1069 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
					base = mul;
				}
			} else {
				#line 1070 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				{
					#line 1071 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
					return nullptr;
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1076 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor_qst_eq($extension_Int64_547_i64 & $this , Builtin::u32 exp) noexcept -> typename $extension_Int64_547_i64&
	{
		#line 1078 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (auto result = ADV_UFCS(_operator_xor_xor_qst)($this, exp)) {
			{
				#line 1078 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 1079 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				return $this = result;
			}
		}
		#line 1081 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1084 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor_ne($extension_Int64_547_i64 const& $this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename $extension_Int64_547_i64
	{
		#line 1086 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1088 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return Builtin::i32(1);
		}
		#line 1091 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 1092 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Auto<decltype(Builtin::i64(1LL))> result = Builtin::i64(1LL); 
		#line 1094 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		for (;;) 
		{
			#line 1095 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 1096 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				ADV_UFCS(_operator_mul_ne_eq)(result, base);
				#line 1097 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				if (exp == Builtin::i32(1)) {
					#line 1098 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
					return result;
				}
			}
			#line 1100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
			#line 1101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			ADV_UFCS(_operator_mul_ne_eq)(base, base);
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor_ne_eq($extension_Int64_547_i64 & $this , Builtin::u32 exp)  -> typename $extension_Int64_547_i64&
	{
		#line 1105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_xor_xor_ne)($this, exp)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor_mod($extension_Int64_547_i64 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename $extension_Int64_547_i64
	{
		#line 1109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return Builtin::i64(1LL);
		}
		#line 1114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 1115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Auto<decltype(Builtin::i64(1LL))> result = Builtin::i64(1LL); 
		#line 1117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (std::is_constant_evaluated()) {
			#line 1118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			while ((exp <=> Builtin::i32(1)) > 0) 
			{
				#line 1119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
					#line 1120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
					ADV_UFCS(_operator_mul_mod_eq)(result, base);
				}
				#line 1122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
				#line 1123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				ADV_UFCS(_operator_mul_mod_eq)(base, base);
			}
			#line 1125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return ADV_UFCS(_operator_mul_mod)(result, base);
		} else {
			#line 1126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			{
				#line 1127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				for (;;) 
				{
					#line 1128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
					if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
						#line 1129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
						ADV_UFCS(_operator_mul_mod_eq)(result, base);
						#line 1130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
						if (exp == Builtin::i32(1)) {
							#line 1131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
							return result;
						}
					}
					#line 1133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
					ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
					#line 1134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
					ADV_UFCS(_operator_mul_mod_eq)(base, base);
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor_mod_eq($extension_Int64_547_i64 & $this , Builtin::u32 exp) noexcept -> typename $extension_Int64_547_i64&
	{
		#line 1139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_xor_xor_mod)($this, exp)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor_or($extension_Int64_547_i64 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename $extension_Int64_547_i64
	{
		#line 1143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (const auto result = ADV_UFCS(_operator_xor_xor_qst)($this, exp)) {
			{
				#line 1143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 1144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				return result;
			}
		}
		#line 1147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return (ADV_UPCS(IsNegative)($this.$ref()) && exp % Builtin::i32(2) == Builtin::i32(1)) ? ADV_USPCS(MinValue, $extension_Int64_547_i64)() : ADV_USPCS(MaxValue, $extension_Int64_547_i64)();
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor_or_eq($extension_Int64_547_i64 & $this , Builtin::u32 exp) noexcept -> typename $extension_Int64_547_i64&
	{
		#line 1150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_xor_xor_or)($this, exp)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor_mod_qst($extension_Int64_547_i64 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const std::tuple<$extension_Int64_547_i64, bool>
	{
		#line 1154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return std::make_tuple(Builtin::i64(1LL), Builtin::Boolean(false));
		}
		#line 1159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 1160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Auto<decltype(Builtin::i64(1LL))> result = Builtin::i64(1LL); 
		#line 1161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Auto<decltype(Builtin::Boolean(false))> overflowed = Builtin::Boolean(false); 
		#line 1162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Auto<decltype(std::make_tuple(Builtin::i64(0LL), Builtin::Boolean(false)))> tmp = std::make_tuple(Builtin::i64(0LL), Builtin::Boolean(false)); 
		#line 1164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		for (;;) 
		{
			#line 1165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 1166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				tmp = ADV_UFCS(_operator_mul_mod_qst)(result, base);
				#line 1167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				if (exp == Builtin::i32(1)) {
					#line 1168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
					std::get<1>(tmp) |= overflowed;
					#line 1169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
					return tmp;
				}
				#line 1171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				result = std::get<0>(tmp);
				#line 1172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				overflowed |= std::get<1>(tmp);
			}
			#line 1174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
			#line 1175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			tmp = ADV_UFCS(_operator_mul_mod_qst)(base, base);
			#line 1176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			base = std::get<0>(tmp);
			#line 1177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			overflowed |= std::get<1>(tmp);
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getCheckedAbs($extension_Int64_547_i64 const& $this ) -> const Builtin::Nullable<$extension_Int64_547_i64>
	{
		#line 1183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)($this.$ref()) ? ADV_UFCS(_operator_sub_qst)($this) : $this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getStrictAbs($extension_Int64_547_i64 const& $this ) -> const $extension_Int64_547_i64
	{
		#line 1186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)($this.$ref()) ? ADV_UFCS(_operator_sub_ne)($this) : $this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getWrappingAbs($extension_Int64_547_i64 const& $this ) -> const $extension_Int64_547_i64
	{
		#line 1189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)($this.$ref()) ? ADV_UFCS(_operator_sub_mod)($this) : $this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getSaturatingAbs($extension_Int64_547_i64 const& $this ) -> const $extension_Int64_547_i64
	{
		#line 1192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)($this.$ref()) ? ADV_UFCS(_operator_sub_or)($this) : $this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getOverflowingAbs($extension_Int64_547_i64 const& $this ) -> const std::tuple<$extension_Int64_547_i64, bool>
	{
		#line 1197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (ADV_UPCS(IsNegative)($this.$ref())) {
			#line 1198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return ADV_UFCS(_operator_sub_mod_qst)($this);
		}
		#line 1200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return std::make_tuple($this, Builtin::Boolean(false));
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	
} namespace $extensions { using namespace System;
#line 1249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NextMultipleOf($extension_Int64_1204_i64 const& $this LIFETIMEBOUND, $extension_Int64_1204_i64 rhs)  -> const typename $extension_Int64_1204_i64
	{
		#line 1251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (rhs == Builtin::i32(-1)) {
			#line 1252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return $this;
		}
		#line 1255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		const Builtin::Auto<decltype($this % rhs)> remainder = $this % rhs; 
		#line 1256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		const Builtin::Auto<decltype(((remainder <=> Builtin::i32(0)) > 0 && (rhs <=> Builtin::i32(0)) < 0) || ((remainder <=> Builtin::i32(0)) < 0 && (rhs <=> Builtin::i32(0)) > 0) ? remainder + rhs : remainder)> mod = ((remainder <=> Builtin::i32(0)) > 0 && (rhs <=> Builtin::i32(0)) < 0) || ((remainder <=> Builtin::i32(0)) < 0 && (rhs <=> Builtin::i32(0)) > 0) ? remainder + rhs : remainder; 
		#line 1259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return mod == Builtin::i32(0) ? $this : $this + (rhs - mod);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto CheckedNextMultipleOf($extension_Int64_1204_i64 const& $this LIFETIMEBOUND, $extension_Int64_1204_i64 rhs) noexcept -> const Builtin::Nullable<$extension_Int64_1204_i64>
	{
		#line 1267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (rhs == Builtin::i32(-1)) {
			#line 1268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return $this;
		}
		#line 1271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_1204_i64 remainder{}; 
		#line 1272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (const auto r = ADV_UFCS(_operator_mod_qst)($this, rhs)) {
			{
				#line 1272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				auto __tmp0 = *r; const auto& r = __tmp0;
				
				#line 1273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				remainder = r;
			}
		} else {
			#line 1274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return nullptr;
		}
		#line 1276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		const Builtin::Auto<decltype(((remainder <=> Builtin::i32(0)) > 0 && (rhs <=> Builtin::i32(0)) < 0) || ((remainder <=> Builtin::i32(0)) < 0 && (rhs <=> Builtin::i32(0)) > 0) ? remainder + rhs : remainder)> mod = ((remainder <=> Builtin::i32(0)) > 0 && (rhs <=> Builtin::i32(0)) < 0) || ((remainder <=> Builtin::i32(0)) < 0 && (rhs <=> Builtin::i32(0)) > 0) ? remainder + rhs : remainder; 
		#line 1279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (mod == Builtin::i32(0)) {
			#line 1280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return $this;
		}
		#line 1282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return ADV_UFCS(_operator_add_qst)($this, (rhs - mod));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto $static_getIsSigned<$extension_Int64_1204_i64>::get() -> const bool
	{
		#line 1205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getTrailingZeroCount($extension_Int64_1204_i64 const& $this ) -> const Builtin::u32
	{
		#line 1207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::TrailingZeroCount($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getTrailingOneCount($extension_Int64_1204_i64 const& $this ) -> const Builtin::u32
	{
		#line 1208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::TrailingZeroCount(ADV_UFCS(_operator_not)($this))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getByteCount($extension_Int64_1204_i64 const& $this ) -> const Builtin::u32
	{
		#line 1209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u32>(Builtin::usize(sizeof($extension_Int64_1204_i64)))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getMinimalBitWidth($extension_Int64_1204_i64 const& $this ) -> const Builtin::u32
	{
		#line 1210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(BitWidth, $extension_Int64_1204_i64)() - ADV_UPCS(LeadingZeroCount)($this.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline auto getIsqrt($extension_Int64_1204_i64 const& $this ) -> const $extension_Int64_1204_i64
	{
		#line 1227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (const auto result = ADV_UPCS(CheckedIsqrt)($this.$ref())) {
			{
				#line 1227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 1228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				return result;
			}
		}
		#line 1230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getLog2Ceiling($extension_Int64_1204_i64 const& $this ) -> const $extension_Int64_1204_i64
	{
		#line 1237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Auto<decltype(ADV_UPCS(Log2)($this.$ref()))> result = ADV_UPCS(Log2)($this.$ref()); 
		#line 1238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (ADV_UPCS(PopCount)($this.$ref()) != Builtin::i32(1)) {
			#line 1239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			++result;
		}
		#line 1242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getPrevPow2($extension_Int64_1204_i64 const& $this ) -> const $extension_Int64_1204_i64
	{
		#line 1288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (($this <=> Builtin::i32(1)) <= 0) {
			#line 1289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return Builtin::i32(0);
		}
		#line 1292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return ADV_USPCS(One, $extension_Int64_1204_i64)() << (ADV_UPCS(MinimalBitWidth)($this.$ref()) - Builtin::i32(1));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getNextPow2($extension_Int64_1204_i64 const& $this ) -> const $extension_Int64_1204_i64
	{
		#line 1299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (($this <=> Builtin::i32(1)) <= 0) {
			#line 1300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return Builtin::i32(0);
		}
		#line 1303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		const Builtin::Auto<decltype($this - Builtin::i32(1))> p = $this - Builtin::i32(1); 
		#line 1304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return (ADV_USPCS(AllBitsSet, $extension_Int64_1204_i64)() >> ADV_UPCS(LeadingZeroCount)(p.$ref())) + Builtin::i32(1);
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getCheckedNextPow2($extension_Int64_1204_i64 const& $this ) -> const Builtin::Nullable<$extension_Int64_1204_i64>
	{
		#line 1311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (($this <=> Builtin::i32(1)) <= 0) {
			#line 1312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return Builtin::i64(0LL);
		}
		#line 1315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		const Builtin::Auto<decltype($this - Builtin::i64(1LL))> p = $this - Builtin::i64(1LL); 
		#line 1316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return ADV_UFCS(_operator_add_qst)((ADV_USPCS(AllBitsSet, $extension_Int64_1204_i64)() >> ADV_UPCS(LeadingZeroCount)(p.$ref())), Builtin::i64(1LL));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getWrappingNextPow2($extension_Int64_1204_i64 const& $this ) -> const $extension_Int64_1204_i64
	{
		#line 1323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (($this <=> Builtin::i32(1)) <= 0) {
			#line 1324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return Builtin::i64(0LL);
		}
		#line 1327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		const Builtin::Auto<decltype($this - Builtin::i64(1LL))> p = $this - Builtin::i64(1LL); 
		#line 1328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return ADV_UFCS(_operator_add_mod)((ADV_USPCS(AllBitsSet, $extension_Int64_1204_i64)() >> ADV_UPCS(LeadingZeroCount)(p.$ref())), Builtin::i64(1LL));
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	
} namespace $extensions { using namespace System;
#line 1365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto RotateLeft($extension_Int64_1332_i64 const& $this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename $extension_Int64_1332_i64
	{
		#line 1365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::BitsRotateLeft($this, shiftAmount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto RotateRight($extension_Int64_1332_i64 const& $this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename $extension_Int64_1332_i64
	{
		#line 1366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::BitsRotateRight($this, shiftAmount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto $static_getBitWidth<$extension_Int64_1332_i64>::get() -> const Builtin::u32
	{
		#line 1333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(64U)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getLeadingZeroCount($extension_Int64_1332_i64 const& $this ) -> const Builtin::u32
	{
		#line 1335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::LeadingZeroCount($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getLeadingOneCount($extension_Int64_1332_i64 const& $this ) -> const Builtin::u32
	{
		#line 1336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::LeadingZeroCount(ADV_UFCS(_operator_not)($this))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getPopCount($extension_Int64_1332_i64 const& $this ) -> const Builtin::u32
	{
		#line 1337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::PopCount($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getZeroCount($extension_Int64_1332_i64 const& $this ) -> const Builtin::u32
	{
		#line 1338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::PopCount(ADV_UFCS(_operator_not)($this))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getByteSwapped($extension_Int64_1332_i64 const& $this ) -> const $extension_Int64_1332_i64
	{
		#line 1339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i64>(Builtin::ByteSwap64(ADV_UFCS(NarrowToUInt64)($this.$ref())))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getBigEndian($extension_Int64_1332_i64 const& $this ) -> const $extension_Int64_1332_i64
	{
		#line 1342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if constexpr (Builtin::IsLittleEndian()) {
			#line 1343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return ADV_UPCS(ByteSwapped)($this.$ref());
		}
		#line 1345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return $this;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getLittleEndian($extension_Int64_1332_i64 const& $this ) -> const $extension_Int64_1332_i64
	{
		#line 1349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if constexpr (Builtin::IsBigEndian()) {
			#line 1350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return ADV_UPCS(ByteSwapped)($this.$ref());
		}
		#line 1352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return $this;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getReverseBits($extension_Int64_1332_i64 const& $this ) -> const $extension_Int64_1332_i64
	{
		#line 1354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::ReverseBits64($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getShortestBitLength($extension_Int64_1332_i64 const& $this ) -> const Builtin::u32
	{
		#line 1358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (($this <=> Builtin::i32(0)) >= 0) {
			#line 1359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return ADV_USPCS(BitWidth, $extension_Int64_1332_i64)() - ADV_UPCS(LeadingZeroCount)($this.$ref());
		}
		#line 1362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return ADV_USPCS(BitWidth, $extension_Int64_1332_i64)() + Builtin::u32(1U) - ADV_UPCS(LeadingOneCount)($this.$ref());
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	
} namespace $extensions { using namespace System;
#line 1378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto IsGreaterThanAsUnsigned($extension_Int64_1370_i64 const& $this LIFETIMEBOUND, $extension_Int64_1370_i64 rhs) noexcept -> const bool
	{
		#line 1378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY((ADV_UFCS(NarrowToUInt64)($this.$ref()) <=> ADV_UFCS(NarrowToUInt64)(rhs.$ref())) > 0); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto $static_getMaxDigitCount<$extension_Int64_1370_i64>::get() -> const Builtin::i32
	{
		#line 1371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(19)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto $static_getMaxHexDigitCount<$extension_Int64_1370_i64>::get() -> const Builtin::i32
	{
		#line 1372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(16)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto $static_getMaxValueDiv10<$extension_Int64_1370_i64>::get() -> const $extension_Int64_1370_i64
	{
		#line 1373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl)(ADV_USPCS(MaxValue, Builtin::i64)(), Builtin::i32(10))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getMultiplyBy10($extension_Int64_1370_i64 const& $this ) -> const $extension_Int64_1370_i64
	{
		#line 1375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_mod)($this, Builtin::i64(10LL))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getMultiplyBy16($extension_Int64_1370_i64 const& $this ) -> const $extension_Int64_1370_i64
	{
		#line 1376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_mod)($this, Builtin::i64(16LL))); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	

}