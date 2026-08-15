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
namespace __Unsafe {} namespace __Int16$Protected__Unsafe {}
} namespace $extensions {
template<class __TT> struct $static_CheckedLog2;
template<class __TT> struct $static_getCheckedLog2;
template<class __TT> struct $static_ReverseBits16;
template<class __TT> struct $static_getReverseBits16;
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
template<class __TT> struct $static_Isqrt16;
template<class __TT> struct $static_getIsqrt16;
template<class __TT> struct $static_CheckedLog10;
template<class __TT> struct $static_getCheckedLog10;
template<class __TT> struct $static_TrailingZeroCount;
template<class __TT> struct $static_getTrailingZeroCount;
template<class __TT> struct $static_MaxValue;
template<class __TT> struct $static_getMaxValue;
template<class __TT> struct $static_ByteSwap16;
template<class __TT> struct $static_getByteSwap16;
template<class __TT> struct $static_CheckedIsqrt;
template<class __TT> struct $static_getCheckedIsqrt;
template<class __TT> struct $static_ByteSwapped;
template<class __TT> struct $static_getByteSwapped;
template<class __TT> struct $static_Log2;
template<class __TT> struct $static_getLog2;
template<class __TT> struct $static_One;
template<class __TT> struct $static_getOne;
template<class __TT> struct $static_NarrowToUInt16;
template<class __TT> struct $static_getNarrowToUInt16;
template<class __TT> struct $static_IsLittleEndian;
template<class __TT> struct $static_getIsLittleEndian;
template<class __TT> struct $static_IsBigEndian;
template<class __TT> struct $static_getIsBigEndian;
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
#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
using Int16 = Builtin::i16;
#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
using Short = Builtin::i16;
//###############################################################################
//# Type definitions
//###############################################################################
	} namespace $extensions { using namespace System;
#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	using $extension_Int16_15_i16 = Builtin::i16;
	#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE(IMinMaxValue, IMinMaxValue);
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class __TT> struct $static_getMinValue; template<> struct $static_getMinValue<$extension_Int16_15_i16> { static inline constexpr auto get() -> const $extension_Int16_15_i16; };
	#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class __TT> struct $static_getMaxValue; template<> struct $static_getMaxValue<$extension_Int16_15_i16> { static inline constexpr auto get() -> const $extension_Int16_15_i16; };
	#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int16_15_i16, IMinMaxValue, IMinMaxValue, $extension_Int16_15_i16);
	} namespace System{
using $extensions::$static_getMinValue;
using $extensions::$static_getMaxValue;

		} namespace $extensions { using namespace System;
#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	using $extension_Int16_20_i16 = Builtin::i16;
	#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ASTRUMSTD_API auto _operator_eq_eq_mul($extension_Int16_20_i16 const& $this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool;
	#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto operator<=>($extension_Int16_20_i16 const& $this LIFETIMEBOUND, Builtin::Nullable<$extension_Int16_20_i16> rhs) noexcept -> const Builtin::i32;
	#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_gt_gt_gt($extension_Int16_20_i16 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_Int16_20_i16;
	#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_gt_gt_gt_eq($extension_Int16_20_i16 & $this , Builtin::i32 amount)  -> typename $extension_Int16_20_i16&;
	#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_lt_lt_bsl($extension_Int16_20_i16 const& $this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename $extension_Int16_20_i16;
	#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_lt_lt_bsl_eq($extension_Int16_20_i16 & $this , Builtin::u32 amount) noexcept -> typename $extension_Int16_20_i16&;
	#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_gt_gt_bsl($extension_Int16_20_i16 const& $this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename $extension_Int16_20_i16;
	#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_gt_gt_bsl_eq($extension_Int16_20_i16 & $this , Builtin::u32 amount) noexcept -> typename $extension_Int16_20_i16&;
	#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getHashCode($extension_Int16_20_i16 const& $this ) -> const Builtin::u64;
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
#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	using $extension_Int16_73_i16 = Builtin::i16;
	#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE(IAbstractComparable, IAbstractComparable);
	#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ASTRUMSTD_API auto _operator_lt_eq_gt_mul($extension_Int16_73_i16 const& $this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32;
	#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int16_73_i16, IAbstractComparable, IAbstractComparable, $extension_Int16_73_i16);
	} namespace System{
using $extensions::_operator_lt_eq_gt_mul;

		} namespace $extensions { using namespace System;
#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	using $extension_Int16_88_i16 = Builtin::i16;
	#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE(IConvertible, IConvertible);
	#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToBoolean($extension_Int16_88_i16 const& $this LIFETIMEBOUND) noexcept -> const bool;
	#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToInt8($extension_Int16_88_i16 const& $this LIFETIMEBOUND)  -> const Builtin::i8;
	#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToUInt8($extension_Int16_88_i16 const& $this LIFETIMEBOUND)  -> const Builtin::u8;
	#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToInt16($extension_Int16_88_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i16;
	#line 103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToUInt16($extension_Int16_88_i16 const& $this LIFETIMEBOUND)  -> const Builtin::u16;
	#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToInt32($extension_Int16_88_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i32;
	#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToUInt32($extension_Int16_88_i16 const& $this LIFETIMEBOUND)  -> const Builtin::u32;
	#line 116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToInt64($extension_Int16_88_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i64;
	#line 117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToUInt64($extension_Int16_88_i16 const& $this LIFETIMEBOUND)  -> const Builtin::u64;
	#line 123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToInt128($extension_Int16_88_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i128;
	#line 124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToUInt128($extension_Int16_88_i16 const& $this LIFETIMEBOUND)  -> const Builtin::u128;
	#line 130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToIsize($extension_Int16_88_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::isize;
	#line 131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToUsize($extension_Int16_88_i16 const& $this LIFETIMEBOUND)  -> const Builtin::usize;
	#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToFloat32($extension_Int16_88_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::f32;
	#line 138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToFloat64($extension_Int16_88_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::f64;
	#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToByte($extension_Int16_88_i16 const& $this LIFETIMEBOUND)  -> const Builtin::u8;
	#line 140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToChar($extension_Int16_88_i16 const& $this LIFETIMEBOUND)  -> const Builtin::char32;
	#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int16_88_i16, IConvertible, IConvertible, $extension_Int16_88_i16);
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
#line 150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	using $extension_Int16_150_i16 = Builtin::i16;
	#line 150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE(IDivisibleArithmetic, IDivisibleArithmetic);
	#line 152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_div_mod($extension_Int16_150_i16 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_Int16_150_i16, $extension_Int16_150_i16>;
	#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_div_not($extension_Int16_150_i16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int16_150_i16;
	#line 165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_div_not_eq($extension_Int16_150_i16 & $this , auto rhs)  -> typename $extension_Int16_150_i16&;
	#line 167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_div_lt($extension_Int16_150_i16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int16_150_i16;
	#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_div_lt_eq($extension_Int16_150_i16 & $this , auto rhs)  -> typename $extension_Int16_150_i16&;
	#line 183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_div_gt($extension_Int16_150_i16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int16_150_i16;
	#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_div_gt_eq($extension_Int16_150_i16 & $this , auto rhs)  -> typename $extension_Int16_150_i16&;
	#line 150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int16_150_i16, IDivisibleArithmetic, IDivisibleArithmetic, $extension_Int16_150_i16);
	} namespace System{
using $extensions::_operator_div_mod;
using $extensions::_operator_div_not;
using $extensions::_operator_div_not_eq;
using $extensions::_operator_div_lt;
using $extensions::_operator_div_lt_eq;
using $extensions::_operator_div_gt;
using $extensions::_operator_div_gt_eq;

		} namespace $extensions { using namespace System;
#line 200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	using $extension_Int16_200_i16 = Builtin::i16;
	#line 200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE(IIntegerDivisibleArithmetic, IIntegerDivisibleArithmetic);
	#line 202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl($extension_Int16_200_i16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int16_200_i16;
	#line 204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_eq($extension_Int16_200_i16 & $this , T rhs)  -> typename $extension_Int16_200_i16&;
	#line 209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl($extension_Int16_200_i16 const& $this LIFETIMEBOUND, T rhs)  -> const Builtin::Nullable<$extension_Int16_200_i16>;
	#line 200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int16_200_i16, IIntegerDivisibleArithmetic, IIntegerDivisibleArithmetic, $extension_Int16_200_i16);
	} namespace System{
using $extensions::_operator_bsl;
using $extensions::_operator_bsl_eq;
using $extensions::_operator_bsl_bsl;

		} namespace $extensions { using namespace System;
#line 220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	using $extension_Int16_220_i16 = Builtin::i16;
	#line 220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE(IIntegerPowerArithmetic, IIntegerPowerArithmetic);
	#line 223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor($extension_Int16_220_i16 const& $this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename $extension_Int16_220_i16;
	#line 255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor_eq($extension_Int16_220_i16 & $this , Builtin::u32 exp)  -> typename $extension_Int16_220_i16&;
	#line 220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int16_220_i16, IIntegerPowerArithmetic, IIntegerPowerArithmetic, $extension_Int16_220_i16);
	} namespace System{
using $extensions::_operator_xor_xor;
using $extensions::_operator_xor_xor_eq;

		} namespace $extensions { using namespace System;
#line 258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	using $extension_Int16_258_i16 = Builtin::i16;
	#line 258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE(INumberBase, INumberBase);
	#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ASTRUMSTD_API auto MaxMagnitude($extension_Int16_258_i16 const& $this LIFETIMEBOUND, $extension_Int16_258_i16 rhs) noexcept -> const typename $extension_Int16_258_i16;
	#line 311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline auto MaxMagnitudeNumber($extension_Int16_258_i16 const& $this LIFETIMEBOUND, $extension_Int16_258_i16 rhs) noexcept -> const typename $extension_Int16_258_i16;
	#line 313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ASTRUMSTD_API auto MinMagnitude($extension_Int16_258_i16 const& $this LIFETIMEBOUND, $extension_Int16_258_i16 rhs) noexcept -> const typename $extension_Int16_258_i16;
	#line 342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline auto MinMagnitudeNumber($extension_Int16_258_i16 const& $this LIFETIMEBOUND, $extension_Int16_258_i16 rhs) noexcept -> const typename $extension_Int16_258_i16;
	#line 344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ASTRUMSTD_API auto Parse($extension_Int16_258_i16 const& $this LIFETIMEBOUND, Builtin::Str input)  -> const typename $extension_Int16_258_i16;
	#line 349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ASTRUMSTD_API auto TryParse($extension_Int16_258_i16 const& $this LIFETIMEBOUND, Builtin::Str input) noexcept -> const Builtin::Nullable<$extension_Int16_258_i16>;
	#line 356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToInt8($extension_Int16_258_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i8;
	#line 357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToUInt8($extension_Int16_258_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u8;
	#line 358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToInt16($extension_Int16_258_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i16;
	#line 359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToUInt16($extension_Int16_258_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u16;
	#line 360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToInt32($extension_Int16_258_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i32;
	#line 361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToUInt32($extension_Int16_258_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u32;
	#line 362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToInt64($extension_Int16_258_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i64;
	#line 363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToUInt64($extension_Int16_258_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u64;
	#line 364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToInt128($extension_Int16_258_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i128;
	#line 365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToUInt128($extension_Int16_258_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u128;
	#line 366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToIsize($extension_Int16_258_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::isize;
	#line 367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToUsize($extension_Int16_258_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::usize;
	#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class __TT> struct $static_getOne; template<> struct $static_getOne<$extension_Int16_258_i16> { static inline constexpr auto get() -> const $extension_Int16_258_i16; };
	#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class __TT> struct $static_getZero; template<> struct $static_getZero<$extension_Int16_258_i16> { static inline constexpr auto get() -> const $extension_Int16_258_i16; };
	#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class __TT> struct $static_getRadix; template<> struct $static_getRadix<$extension_Int16_258_i16> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getAbs($extension_Int16_258_i16 const& $this ) -> const $extension_Int16_258_i16;
	#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsCanonical($extension_Int16_258_i16 const& $this ) -> const bool;
	#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsComplexNumber($extension_Int16_258_i16 const& $this ) -> const bool;
	#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsEvenInteger($extension_Int16_258_i16 const& $this ) -> const bool;
	#line 267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsFinite($extension_Int16_258_i16 const& $this ) -> const bool;
	#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsImaginaryNumber($extension_Int16_258_i16 const& $this ) -> const bool;
	#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsInfinity($extension_Int16_258_i16 const& $this ) -> const bool;
	#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsInteger($extension_Int16_258_i16 const& $this ) -> const bool;
	#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsNaN($extension_Int16_258_i16 const& $this ) -> const bool;
	#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsNegative($extension_Int16_258_i16 const& $this ) -> const bool;
	#line 273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsNegativeInfinity($extension_Int16_258_i16 const& $this ) -> const bool;
	#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsNormal($extension_Int16_258_i16 const& $this ) -> const bool;
	#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsOddInteger($extension_Int16_258_i16 const& $this ) -> const bool;
	#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsPositive($extension_Int16_258_i16 const& $this ) -> const bool;
	#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsPositiveInfinity($extension_Int16_258_i16 const& $this ) -> const bool;
	#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsRealNumber($extension_Int16_258_i16 const& $this ) -> const bool;
	#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsSubnormal($extension_Int16_258_i16 const& $this ) -> const bool;
	#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsZero($extension_Int16_258_i16 const& $this ) -> const bool;
	#line 258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int16_258_i16, INumberBase, INumberBase, $extension_Int16_258_i16);
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
#line 370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	using $extension_Int16_370_i16 = Builtin::i16;
	#line 370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE(ISignedNumber, ISignedNumber);
	#line 371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class __TT> struct $static_getMinusOne; template<> struct $static_getMinusOne<$extension_Int16_370_i16> { static inline constexpr auto get() -> const $extension_Int16_370_i16; };
	#line 370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int16_370_i16, ISignedNumber, ISignedNumber, $extension_Int16_370_i16);
	} namespace System{
using $extensions::$static_getMinusOne;

		} namespace $extensions { using namespace System;
#line 374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	using $extension_Int16_374_i16 = Builtin::i16;
	#line 374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE(INumber, INumber);
	#line 377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ASTRUMSTD_API auto CopySign($extension_Int16_374_i16 const& $this LIFETIMEBOUND, $extension_Int16_374_i16 sign)  -> const typename $extension_Int16_374_i16;
	#line 395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto Max($extension_Int16_374_i16 const& $this LIFETIMEBOUND, $extension_Int16_374_i16 rhs) noexcept -> const typename $extension_Int16_374_i16;
	#line 396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto MaxNumber($extension_Int16_374_i16 const& $this LIFETIMEBOUND, $extension_Int16_374_i16 rhs) noexcept -> const typename $extension_Int16_374_i16;
	#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto Min($extension_Int16_374_i16 const& $this LIFETIMEBOUND, $extension_Int16_374_i16 rhs) noexcept -> const typename $extension_Int16_374_i16;
	#line 398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto MinNumber($extension_Int16_374_i16 const& $this LIFETIMEBOUND, $extension_Int16_374_i16 rhs) noexcept -> const typename $extension_Int16_374_i16;
	#line 399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto Clamp($extension_Int16_374_i16 const& $this LIFETIMEBOUND, $extension_Int16_374_i16 min, $extension_Int16_374_i16 max)  -> const typename $extension_Int16_374_i16;
	#line 375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getSign($extension_Int16_374_i16 const& $this ) -> const Builtin::i32;
	#line 374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int16_374_i16, INumber, INumber, $extension_Int16_374_i16);
	} namespace System{
using $extensions::CopySign;
using $extensions::Max;
using $extensions::MaxNumber;
using $extensions::Min;
using $extensions::MinNumber;
using $extensions::Clamp;
using $extensions::getSign;

		} namespace $extensions { using namespace System;
#line 402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	using $extension_Int16_402_i16 = Builtin::i16;
	#line 402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE(IBinaryNumber, IBinaryNumber);
	#line 456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto CheckedLog($extension_Int16_402_i16 const& $this LIFETIMEBOUND, $extension_Int16_402_i16 base) noexcept -> const Builtin::Nullable<$extension_Int16_402_i16>;
	#line 489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ASTRUMSTD_API auto Log($extension_Int16_402_i16 const& $this LIFETIMEBOUND, $extension_Int16_402_i16 base)  -> const typename $extension_Int16_402_i16;
	#line 499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto Midpoint($extension_Int16_402_i16 const& $this LIFETIMEBOUND, $extension_Int16_402_i16 rhs) noexcept -> const typename $extension_Int16_402_i16;
	#line 507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto IsMultipleOf($extension_Int16_402_i16 const& $this LIFETIMEBOUND, $extension_Int16_402_i16 rhs) noexcept -> const bool;
	#line 404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class __TT> struct $static_getAllBitsSet; template<> struct $static_getAllBitsSet<$extension_Int16_402_i16> { static inline constexpr auto get() -> const $extension_Int16_402_i16; };
	#line 407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsPow2($extension_Int16_402_i16 const& $this ) -> const bool;
	#line 411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getCheckedLog2($extension_Int16_402_i16 const& $this ) -> const Builtin::Nullable<$extension_Int16_402_i16>;
	#line 421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getLog2($extension_Int16_402_i16 const& $this ) -> const $extension_Int16_402_i16;
	#line 431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getCheckedLog10($extension_Int16_402_i16 const& $this ) -> const Builtin::Nullable<$extension_Int16_402_i16>;
	#line 446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getLog10($extension_Int16_402_i16 const& $this ) -> const $extension_Int16_402_i16;
	#line 402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int16_402_i16, IBinaryNumber, IBinaryNumber, $extension_Int16_402_i16);
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
#line 521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	using $extension_Int16_521_i16 = Builtin::i16;
	#line 521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE(ICheckedArithmetic, ICheckedArithmetic);
	#line 524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_add_qst($extension_Int16_521_i16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int16_521_i16>;
	#line 533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_add_qst_eq($extension_Int16_521_i16 & $this , T rhs) noexcept -> typename $extension_Int16_521_i16&;
	#line 544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_add_ne($extension_Int16_521_i16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int16_521_i16;
	#line 551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_add_ne_eq($extension_Int16_521_i16 & $this , T rhs)  -> typename $extension_Int16_521_i16&;
	#line 555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_add_mod($extension_Int16_521_i16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int16_521_i16;
	#line 562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_add_mod_eq($extension_Int16_521_i16 & $this , T rhs) noexcept -> typename $extension_Int16_521_i16&;
	#line 566 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_add_or($extension_Int16_521_i16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int16_521_i16;
	#line 573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_add_or_eq($extension_Int16_521_i16 & $this , T rhs) noexcept -> typename $extension_Int16_521_i16&;
	#line 577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_add_mod_qst($extension_Int16_521_i16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_Int16_521_i16, bool>;
	#line 585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_qst($extension_Int16_521_i16 & $this )  -> typename $extension_Int16_521_i16&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_qst_postfix($extension_Int16_521_i16 & $this)  -> decltype(auto);
	#line 588 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_ne($extension_Int16_521_i16 & $this )  -> typename $extension_Int16_521_i16&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_ne_postfix($extension_Int16_521_i16 & $this)  -> decltype(auto);
	#line 591 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_mod($extension_Int16_521_i16 & $this )  -> typename $extension_Int16_521_i16&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_mod_postfix($extension_Int16_521_i16 & $this)  -> decltype(auto);
	#line 594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_or($extension_Int16_521_i16 & $this )  -> typename $extension_Int16_521_i16&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_or_postfix($extension_Int16_521_i16 & $this)  -> decltype(auto);
	#line 598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto CarryingAdd($extension_Int16_521_i16 const& $this LIFETIMEBOUND, $extension_Int16_521_i16 rhs, bool carry) noexcept -> const std::tuple<$extension_Int16_521_i16, bool>;
	#line 607 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto BorrowingSub($extension_Int16_521_i16 const& $this LIFETIMEBOUND, $extension_Int16_521_i16 rhs, bool carry) noexcept -> const std::tuple<$extension_Int16_521_i16, bool>;
	#line 616 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_sub_qst($extension_Int16_521_i16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int16_521_i16>;
	#line 625 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_sub_qst_eq($extension_Int16_521_i16 & $this , T rhs) noexcept -> typename $extension_Int16_521_i16&;
	#line 636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_sub_ne($extension_Int16_521_i16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int16_521_i16;
	#line 643 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_sub_ne_eq($extension_Int16_521_i16 & $this , T rhs)  -> typename $extension_Int16_521_i16&;
	#line 647 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_sub_mod($extension_Int16_521_i16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int16_521_i16;
	#line 654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_sub_mod_eq($extension_Int16_521_i16 & $this , T rhs) noexcept -> typename $extension_Int16_521_i16&;
	#line 658 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_sub_or($extension_Int16_521_i16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int16_521_i16;
	#line 665 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_sub_or_eq($extension_Int16_521_i16 & $this , T rhs) noexcept -> typename $extension_Int16_521_i16&;
	#line 669 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_sub_mod_qst($extension_Int16_521_i16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_Int16_521_i16, bool>;
	#line 677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_qst($extension_Int16_521_i16 & $this )  -> typename $extension_Int16_521_i16&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_qst_postfix($extension_Int16_521_i16 & $this)  -> decltype(auto);
	#line 680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_ne($extension_Int16_521_i16 & $this )  -> typename $extension_Int16_521_i16&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_ne_postfix($extension_Int16_521_i16 & $this)  -> decltype(auto);
	#line 683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_mod($extension_Int16_521_i16 & $this )  -> typename $extension_Int16_521_i16&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_mod_postfix($extension_Int16_521_i16 & $this)  -> decltype(auto);
	#line 686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_or($extension_Int16_521_i16 & $this )  -> typename $extension_Int16_521_i16&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_or_postfix($extension_Int16_521_i16 & $this)  -> decltype(auto);
	#line 690 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mul_qst($extension_Int16_521_i16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int16_521_i16>;
	#line 699 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mul_qst_eq($extension_Int16_521_i16 & $this , T rhs) noexcept -> typename $extension_Int16_521_i16&;
	#line 710 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mul_ne($extension_Int16_521_i16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int16_521_i16;
	#line 717 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mul_ne_eq($extension_Int16_521_i16 & $this , T rhs)  -> typename $extension_Int16_521_i16&;
	#line 721 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mul_mod($extension_Int16_521_i16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int16_521_i16;
	#line 728 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mul_mod_eq($extension_Int16_521_i16 & $this , T rhs) noexcept -> typename $extension_Int16_521_i16&;
	#line 732 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mul_or($extension_Int16_521_i16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int16_521_i16;
	#line 739 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mul_or_eq($extension_Int16_521_i16 & $this , T rhs) noexcept -> typename $extension_Int16_521_i16&;
	#line 743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mul_mod_qst($extension_Int16_521_i16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_Int16_521_i16, bool>;
	#line 752 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_mul_gt($extension_Int16_521_i16 const& $this LIFETIMEBOUND, $extension_Int16_521_i16 rhs) noexcept -> const std::tuple<Builtin::u16, Builtin::i16>;
	#line 761 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto CarryingMul($extension_Int16_521_i16 const& $this LIFETIMEBOUND, $extension_Int16_521_i16 rhs, $extension_Int16_521_i16 carry) noexcept -> const std::tuple<Builtin::u16, Builtin::i16>;
	#line 769 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_qst($extension_Int16_521_i16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int16_521_i16>;
	#line 778 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_qst_eq($extension_Int16_521_i16 & $this , T rhs) noexcept -> typename $extension_Int16_521_i16&;
	#line 790 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_ne($extension_Int16_521_i16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int16_521_i16;
	#line 797 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_ne_eq($extension_Int16_521_i16 & $this , T rhs)  -> typename $extension_Int16_521_i16&;
	#line 802 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_mod($extension_Int16_521_i16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int16_521_i16;
	#line 809 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_eq($extension_Int16_521_i16 & $this , T rhs)  -> typename $extension_Int16_521_i16&;
	#line 814 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_or($extension_Int16_521_i16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int16_521_i16;
	#line 821 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_or_eq($extension_Int16_521_i16 & $this , T rhs)  -> typename $extension_Int16_521_i16&;
	#line 826 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_qst($extension_Int16_521_i16 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_Int16_521_i16, bool>;
	#line 835 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst($extension_Int16_521_i16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int16_521_i16>;
	#line 845 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst_eq($extension_Int16_521_i16 & $this , T rhs) noexcept -> typename $extension_Int16_521_i16&;
	#line 856 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mod_qst($extension_Int16_521_i16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int16_521_i16>;
	#line 865 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mod_qst_eq($extension_Int16_521_i16 & $this , T rhs) noexcept -> typename $extension_Int16_521_i16&;
	#line 877 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mod_ne($extension_Int16_521_i16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int16_521_i16;
	#line 884 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mod_ne_eq($extension_Int16_521_i16 & $this , T rhs)  -> typename $extension_Int16_521_i16&;
	#line 889 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mod_mod($extension_Int16_521_i16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int16_521_i16;
	#line 896 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mod_mod_eq($extension_Int16_521_i16 & $this , T rhs)  -> typename $extension_Int16_521_i16&;
	#line 901 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mod_mod_qst($extension_Int16_521_i16 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_Int16_521_i16, bool>;
	#line 910 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_sub_qst($extension_Int16_521_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::Nullable<$extension_Int16_521_i16>;
	#line 920 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_sub_ne($extension_Int16_521_i16 const& $this LIFETIMEBOUND)  -> const typename $extension_Int16_521_i16;
	#line 927 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_sub_mod($extension_Int16_521_i16 const& $this LIFETIMEBOUND)  -> const typename $extension_Int16_521_i16;
	#line 935 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_sub_or($extension_Int16_521_i16 const& $this LIFETIMEBOUND)  -> const typename $extension_Int16_521_i16;
	#line 943 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_sub_mod_qst($extension_Int16_521_i16 const& $this LIFETIMEBOUND)  -> const std::tuple<$extension_Int16_521_i16, bool>;
	#line 951 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_lt_lt_qst($extension_Int16_521_i16 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<$extension_Int16_521_i16>;
	#line 959 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_lt_lt_qst_eq($extension_Int16_521_i16 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int16_521_i16&;
	#line 967 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_lt_lt_ne($extension_Int16_521_i16 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_Int16_521_i16;
	#line 975 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_lt_lt_ne_eq($extension_Int16_521_i16 & $this , Builtin::i32 amount)  -> typename $extension_Int16_521_i16&;
	#line 977 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_lt_lt_mod($extension_Int16_521_i16 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename $extension_Int16_521_i16;
	#line 980 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_lt_lt_mod_eq($extension_Int16_521_i16 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int16_521_i16&;
	#line 982 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_lt_lt_mod_qst($extension_Int16_521_i16 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<$extension_Int16_521_i16, bool>;
	#line 985 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_gt_gt_qst($extension_Int16_521_i16 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<$extension_Int16_521_i16>;
	#line 993 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_gt_gt_qst_eq($extension_Int16_521_i16 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int16_521_i16&;
	#line 1001 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_gt_gt_ne($extension_Int16_521_i16 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_Int16_521_i16;
	#line 1009 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_gt_gt_ne_eq($extension_Int16_521_i16 & $this , Builtin::i32 amount)  -> typename $extension_Int16_521_i16&;
	#line 1011 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_gt_gt_mod($extension_Int16_521_i16 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename $extension_Int16_521_i16;
	#line 1014 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_gt_gt_mod_eq($extension_Int16_521_i16 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int16_521_i16&;
	#line 1016 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_gt_gt_mod_qst($extension_Int16_521_i16 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<$extension_Int16_521_i16, bool>;
	#line 1022 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor_qst($extension_Int16_521_i16 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const Builtin::Nullable<$extension_Int16_521_i16>;
	#line 1051 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor_qst_eq($extension_Int16_521_i16 & $this , Builtin::u32 exp) noexcept -> typename $extension_Int16_521_i16&;
	#line 1059 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor_ne($extension_Int16_521_i16 const& $this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename $extension_Int16_521_i16;
	#line 1080 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor_ne_eq($extension_Int16_521_i16 & $this , Builtin::u32 exp)  -> typename $extension_Int16_521_i16&;
	#line 1082 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor_mod($extension_Int16_521_i16 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename $extension_Int16_521_i16;
	#line 1114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor_mod_eq($extension_Int16_521_i16 & $this , Builtin::u32 exp) noexcept -> typename $extension_Int16_521_i16&;
	#line 1116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor_or($extension_Int16_521_i16 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename $extension_Int16_521_i16;
	#line 1125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor_or_eq($extension_Int16_521_i16 & $this , Builtin::u32 exp) noexcept -> typename $extension_Int16_521_i16&;
	#line 1127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor_mod_qst($extension_Int16_521_i16 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const std::tuple<$extension_Int16_521_i16, bool>;
	#line 1158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getCheckedAbs($extension_Int16_521_i16 const& $this ) -> const Builtin::Nullable<$extension_Int16_521_i16>;
	#line 1161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getStrictAbs($extension_Int16_521_i16 const& $this ) -> const $extension_Int16_521_i16;
	#line 1164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getWrappingAbs($extension_Int16_521_i16 const& $this ) -> const $extension_Int16_521_i16;
	#line 1167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getSaturatingAbs($extension_Int16_521_i16 const& $this ) -> const $extension_Int16_521_i16;
	#line 1170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getOverflowingAbs($extension_Int16_521_i16 const& $this ) -> const std::tuple<$extension_Int16_521_i16, bool>;
	#line 521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int16_521_i16, ICheckedArithmetic, ICheckedArithmetic, $extension_Int16_521_i16);
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
#line 1179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	using $extension_Int16_1179_i16 = Builtin::i16;
	#line 1179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE(IBinaryInteger, IBinaryInteger);
	#line 1224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NextMultipleOf($extension_Int16_1179_i16 const& $this LIFETIMEBOUND, $extension_Int16_1179_i16 rhs)  -> const typename $extension_Int16_1179_i16;
	#line 1240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto CheckedNextMultipleOf($extension_Int16_1179_i16 const& $this LIFETIMEBOUND, $extension_Int16_1179_i16 rhs) noexcept -> const Builtin::Nullable<$extension_Int16_1179_i16>;
	#line 1180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class __TT> struct $static_getIsSigned; template<> struct $static_getIsSigned<$extension_Int16_1179_i16> { static inline constexpr auto get() -> const bool; };
	#line 1182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getTrailingZeroCount($extension_Int16_1179_i16 const& $this ) -> const Builtin::u32;
	#line 1183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getTrailingOneCount($extension_Int16_1179_i16 const& $this ) -> const Builtin::u32;
	#line 1184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getByteCount($extension_Int16_1179_i16 const& $this ) -> const Builtin::u32;
	#line 1185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getMinimalBitWidth($extension_Int16_1179_i16 const& $this ) -> const Builtin::u32;
	#line 1189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ASTRUMSTD_API auto getCheckedIsqrt($extension_Int16_1179_i16 const& $this ) -> const Builtin::Nullable<$extension_Int16_1179_i16>;
	#line 1201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline auto getIsqrt($extension_Int16_1179_i16 const& $this ) -> const $extension_Int16_1179_i16;
	#line 1210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getLog2Ceiling($extension_Int16_1179_i16 const& $this ) -> const $extension_Int16_1179_i16;
	#line 1261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getPrevPow2($extension_Int16_1179_i16 const& $this ) -> const $extension_Int16_1179_i16;
	#line 1272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getNextPow2($extension_Int16_1179_i16 const& $this ) -> const $extension_Int16_1179_i16;
	#line 1284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getCheckedNextPow2($extension_Int16_1179_i16 const& $this ) -> const Builtin::Nullable<$extension_Int16_1179_i16>;
	#line 1296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getWrappingNextPow2($extension_Int16_1179_i16 const& $this ) -> const $extension_Int16_1179_i16;
	#line 1179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int16_1179_i16, IBinaryInteger, IBinaryInteger, $extension_Int16_1179_i16);
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
#line 1307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	using $extension_Int16_1307_i16 = Builtin::i16;
	#line 1307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE(IFixedWidthInteger, IFixedWidthInteger);
	#line 1340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto RotateLeft($extension_Int16_1307_i16 const& $this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename $extension_Int16_1307_i16;
	#line 1341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto RotateRight($extension_Int16_1307_i16 const& $this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename $extension_Int16_1307_i16;
	#line 1308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class __TT> struct $static_getBitWidth; template<> struct $static_getBitWidth<$extension_Int16_1307_i16> { static inline constexpr auto get() -> const Builtin::u32; };
	#line 1310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getLeadingZeroCount($extension_Int16_1307_i16 const& $this ) -> const Builtin::u32;
	#line 1311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getLeadingOneCount($extension_Int16_1307_i16 const& $this ) -> const Builtin::u32;
	#line 1312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getPopCount($extension_Int16_1307_i16 const& $this ) -> const Builtin::u32;
	#line 1313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getZeroCount($extension_Int16_1307_i16 const& $this ) -> const Builtin::u32;
	#line 1314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getByteSwapped($extension_Int16_1307_i16 const& $this ) -> const $extension_Int16_1307_i16;
	#line 1315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getBigEndian($extension_Int16_1307_i16 const& $this ) -> const $extension_Int16_1307_i16;
	#line 1322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getLittleEndian($extension_Int16_1307_i16 const& $this ) -> const $extension_Int16_1307_i16;
	#line 1329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getReverseBits($extension_Int16_1307_i16 const& $this ) -> const $extension_Int16_1307_i16;
	#line 1331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getShortestBitLength($extension_Int16_1307_i16 const& $this ) -> const Builtin::u32;
	#line 1307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int16_1307_i16, IFixedWidthInteger, IFixedWidthInteger, $extension_Int16_1307_i16);
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
#line 1345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	using $extension_Int16_1345_i16 = Builtin::i16;
	#line 1345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE(IBinaryIntegerFormatInfo, IBinaryIntegerFormatInfo);
	#line 1353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto IsGreaterThanAsUnsigned($extension_Int16_1345_i16 const& $this LIFETIMEBOUND, $extension_Int16_1345_i16 rhs) noexcept -> const bool;
	#line 1346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class __TT> struct $static_getMaxDigitCount; template<> struct $static_getMaxDigitCount<$extension_Int16_1345_i16> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class __TT> struct $static_getMaxHexDigitCount; template<> struct $static_getMaxHexDigitCount<$extension_Int16_1345_i16> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class __TT> struct $static_getMaxValueDiv10; template<> struct $static_getMaxValueDiv10<$extension_Int16_1345_i16> { static inline constexpr auto get() -> const $extension_Int16_1345_i16; };
	#line 1350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getMultiplyBy10($extension_Int16_1345_i16 const& $this ) -> const $extension_Int16_1345_i16;
	#line 1351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getMultiplyBy16($extension_Int16_1345_i16 const& $this ) -> const $extension_Int16_1345_i16;
	#line 1345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int16_1345_i16, IBinaryIntegerFormatInfo, IBinaryIntegerFormatInfo, $extension_Int16_1345_i16);
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
#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto $static_getMinValue<$extension_Int16_15_i16>::get() -> const $extension_Int16_15_i16
	{
		#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::i16(-32768)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto $static_getMaxValue<$extension_Int16_15_i16>::get() -> const $extension_Int16_15_i16
	{
		#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(+Builtin::i16(32767)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	
} namespace $extensions { using namespace System;
#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto operator<=>($extension_Int16_20_i16 const& $this LIFETIMEBOUND, Builtin::Nullable<$extension_Int16_20_i16> rhs) noexcept -> const Builtin::i32
	{
		#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		{
			#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			if ((!Builtin::Is(rhs, nullptr))) {
				#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				auto __tmp0 = *rhs; const auto& rhs = __tmp0;
				
				#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				return $this <=> rhs;
			}
		}
		#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return Builtin::i32(1);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_gt_gt_gt($extension_Int16_20_i16 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_Int16_20_i16
	{
		#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i16>(UnsafeCast<Builtin::u16>($this) >> amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_gt_gt_gt_eq($extension_Int16_20_i16 & $this , Builtin::i32 amount)  -> typename $extension_Int16_20_i16&
	{
		#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_gt_gt_gt)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_lt_lt_bsl($extension_Int16_20_i16 const& $this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename $extension_Int16_20_i16
	{
		#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if ((amount <=> ADV_USPCS(BitWidth, $extension_Int16_20_i16)()) >= 0) {
			#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return Builtin::i16(0);
		}
		#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return Builtin::UncheckedShiftLeft($this, Builtin::Cast<true, Builtin::i32>(amount));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_lt_lt_bsl_eq($extension_Int16_20_i16 & $this , Builtin::u32 amount) noexcept -> typename $extension_Int16_20_i16&
	{
		#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_lt_lt_bsl)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_gt_gt_bsl($extension_Int16_20_i16 const& $this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename $extension_Int16_20_i16
	{
		#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if ((amount <=> ADV_USPCS(BitWidth, $extension_Int16_20_i16)()) >= 0) {
			#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return ADV_UPCS(IsPositive)($this.$ref()) ? Builtin::i16(0) : Builtin::i16(-1);
		}
		#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return Builtin::UncheckedShiftRight($this, Builtin::Cast<true, Builtin::i32>(amount));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_gt_gt_bsl_eq($extension_Int16_20_i16 & $this , Builtin::u32 amount) noexcept -> typename $extension_Int16_20_i16&
	{
		#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_gt_gt_bsl)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getHashCode($extension_Int16_20_i16 const& $this ) -> const Builtin::u64
	{
		#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u64>($this)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	
} namespace $extensions { using namespace System;
#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToBoolean($extension_Int16_88_i16 const& $this LIFETIMEBOUND) noexcept -> const bool
	{
		#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this != Builtin::i32(0)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToInt8($extension_Int16_88_i16 const& $this LIFETIMEBOUND)  -> const Builtin::i8
	{
		#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (($this <=> Builtin::i32(0x7F)) > 0 || ($this <=> (Builtin::i32(-0x80))) < 0) {
			#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return Builtin::Cast<true, Builtin::i8>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToUInt8($extension_Int16_88_i16 const& $this LIFETIMEBOUND)  -> const Builtin::u8
	{
		#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (($this <=> Builtin::i32(0)) < 0 || ($this <=> Builtin::i32(0xFF)) > 0) {
			#line 98 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return Builtin::Cast<true, Builtin::u8>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToInt16($extension_Int16_88_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i16
	{
		#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToUInt16($extension_Int16_88_i16 const& $this LIFETIMEBOUND)  -> const Builtin::u16
	{
		#line 104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (($this <=> Builtin::i32(0)) < 0) {
			#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return Builtin::Cast<true, Builtin::u16>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToInt32($extension_Int16_88_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i32
	{
		#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToUInt32($extension_Int16_88_i16 const& $this LIFETIMEBOUND)  -> const Builtin::u32
	{
		#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (($this <=> Builtin::i32(0)) < 0) {
			#line 112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return Builtin::Cast<true, Builtin::u32>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToInt64($extension_Int16_88_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i64
	{
		#line 116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToUInt64($extension_Int16_88_i16 const& $this LIFETIMEBOUND)  -> const Builtin::u64
	{
		#line 118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (($this <=> Builtin::i32(0)) < 0) {
			#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return Builtin::Cast<true, Builtin::u64>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToInt128($extension_Int16_88_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i128
	{
		#line 123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToUInt128($extension_Int16_88_i16 const& $this LIFETIMEBOUND)  -> const Builtin::u128
	{
		#line 125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (($this <=> Builtin::i32(0)) < 0) {
			#line 126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return Builtin::Cast<true, Builtin::u128>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToIsize($extension_Int16_88_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::isize
	{
		#line 130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToUsize($extension_Int16_88_i16 const& $this LIFETIMEBOUND)  -> const Builtin::usize
	{
		#line 132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (($this <=> Builtin::i32(0)) < 0) {
			#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return Builtin::Cast<true, Builtin::usize>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToFloat32($extension_Int16_88_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::f32
	{
		#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToFloat64($extension_Int16_88_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::f64
	{
		#line 138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToByte($extension_Int16_88_i16 const& $this LIFETIMEBOUND)  -> const Builtin::u8
	{
		#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(ToUInt8)($this.$ref())); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToChar($extension_Int16_88_i16 const& $this LIFETIMEBOUND)  -> const Builtin::char32
	{
		#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (($this <=> Builtin::i32(0)) < 0) {
			#line 142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return Builtin::Cast<true, Builtin::char32>($this);
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	
} namespace $extensions { using namespace System;
#line 152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_div_mod($extension_Int16_150_i16 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_Int16_150_i16, $extension_Int16_150_i16>
	{
		#line 154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator /% implemented only for integer types");
		#line 155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return std::make_tuple(ADV_UFCS(_operator_bsl)($this, rhs), $this % rhs);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_div_not($extension_Int16_150_i16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int16_150_i16
	{
		#line 160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype($this)> result = $this; 
		#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		result /= rhs;
		#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_div_not_eq($extension_Int16_150_i16 & $this , auto rhs)  -> typename $extension_Int16_150_i16&
	{
		#line 165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this /= rhs); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_div_lt($extension_Int16_150_i16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int16_150_i16
	{
		#line 169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if constexpr (Builtin::TypeIs<T, IBinaryInteger>()) {
			#line 170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			const auto& [div, rem] = ADV_UFCS(_operator_div_mod)($this, rhs);
			#line 171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			if (rem == Builtin::i32(0)) {
				#line 172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				return div;
			}
			#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			Builtin::Auto<decltype(($this ^ rhs) >> (ADV_USPCS(BitWidth, $extension_Int16_150_i16)() - Builtin::i32(1)))> correction = ($this ^ rhs) >> (ADV_USPCS(BitWidth, $extension_Int16_150_i16)() - Builtin::i32(1)); 
			#line 175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return div + correction;
		} else {
			#line 176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			{
				#line 177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				return Builtin::Cast<true, $extension_Int16_150_i16>((ADV_UFCS(_operator_div_lt)(Builtin::f64{$this}, rhs)));
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_div_lt_eq($extension_Int16_150_i16 & $this , auto rhs)  -> typename $extension_Int16_150_i16&
	{
		#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this = $extension_Int16_150_i16{ADV_UFCS(_operator_div_lt)($this, rhs)}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_div_gt($extension_Int16_150_i16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int16_150_i16
	{
		#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if constexpr (Builtin::TypeIs<T, IBinaryInteger>()) {
			#line 186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			const auto& [div, rem] = ADV_UFCS(_operator_div_mod)($this, rhs);
			#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			if (rem == Builtin::i32(0)) {
				#line 188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				return div;
			}
			#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			Builtin::Auto<decltype(Builtin::i16(1) + (($this ^ rhs) >> (ADV_USPCS(BitWidth, $extension_Int16_150_i16)() - Builtin::i32(1))))> correction = Builtin::i16(1) + (($this ^ rhs) >> (ADV_USPCS(BitWidth, $extension_Int16_150_i16)() - Builtin::i32(1))); 
			#line 191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return div + correction;
		} else {
			#line 192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			{
				#line 193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				return Builtin::Cast<true, $extension_Int16_150_i16>((ADV_UFCS(_operator_div_gt)(Builtin::f64{$this}, rhs)));
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_div_gt_eq($extension_Int16_150_i16 & $this , auto rhs)  -> typename $extension_Int16_150_i16&
	{
		#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this = $extension_Int16_150_i16{ADV_UFCS(_operator_div_gt)($this, rhs)}); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	
} namespace $extensions { using namespace System;
#line 202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl($extension_Int16_200_i16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int16_200_i16
	{
		#line 202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Div)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_eq($extension_Int16_200_i16 & $this , T rhs)  -> typename $extension_Int16_200_i16&
	{
		#line 204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(DivAssign)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl($extension_Int16_200_i16 const& $this LIFETIMEBOUND, T rhs)  -> const Builtin::Nullable<$extension_Int16_200_i16>
	{
		#line 211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\? implemented only for integer types");
		#line 212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_200_i16 result{}; 
		#line 213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (Builtin::DivExact($this, rhs, result)) {
			#line 214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return result;
		}
		#line 216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return nullptr;
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	
} namespace $extensions { using namespace System;
#line 223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor($extension_Int16_220_i16 const& $this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename $extension_Int16_220_i16
	{
		#line 225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return Builtin::i16(1);
		}
		#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype(Builtin::i16(1))> result = Builtin::i16(1); 
		#line 233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (std::is_constant_evaluated()) {
			#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			while ((exp <=> Builtin::i32(1)) > 0) 
			{
				#line 235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
					#line 236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
					result *= base;
				}
				#line 238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
				#line 239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				base *= base;
			}
			#line 241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return result * base;
		} else {
			#line 242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			{
				#line 243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				for (;;) 
				{
					#line 244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
					if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
						#line 245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
						result *= base;
						#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
						if (exp == Builtin::i32(1)) {
							#line 247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
							return result;
						}
					}
					#line 249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
					ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
					#line 250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
					base *= base;
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor_eq($extension_Int16_220_i16 & $this , Builtin::u32 exp)  -> typename $extension_Int16_220_i16&
	{
		#line 255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_xor_xor)($this, exp)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	
} namespace $extensions { using namespace System;
#line 311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline auto MaxMagnitudeNumber($extension_Int16_258_i16 const& $this LIFETIMEBOUND, $extension_Int16_258_i16 rhs) noexcept -> const typename $extension_Int16_258_i16
	{
		#line 311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(MaxMagnitude)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline auto MinMagnitudeNumber($extension_Int16_258_i16 const& $this LIFETIMEBOUND, $extension_Int16_258_i16 rhs) noexcept -> const typename $extension_Int16_258_i16
	{
		#line 342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(MinMagnitude)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToInt8($extension_Int16_258_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i8
	{
		#line 356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i8>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToUInt8($extension_Int16_258_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u8
	{
		#line 357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u8>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToInt16($extension_Int16_258_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i16
	{
		#line 358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToUInt16($extension_Int16_258_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u16
	{
		#line 359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u16>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToInt32($extension_Int16_258_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i32
	{
		#line 360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToUInt32($extension_Int16_258_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u32
	{
		#line 361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u32>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToInt64($extension_Int16_258_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i64
	{
		#line 362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToUInt64($extension_Int16_258_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u64
	{
		#line 363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u64>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToInt128($extension_Int16_258_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i128
	{
		#line 364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToUInt128($extension_Int16_258_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u128
	{
		#line 365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u128>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToIsize($extension_Int16_258_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::isize
	{
		#line 366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToUsize($extension_Int16_258_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::usize
	{
		#line 367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::usize>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto $static_getOne<$extension_Int16_258_i16>::get() -> const $extension_Int16_258_i16
	{
		#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::i16(1)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto $static_getZero<$extension_Int16_258_i16>::get() -> const $extension_Int16_258_i16
	{
		#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::i16(0)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto $static_getRadix<$extension_Int16_258_i16>::get() -> const Builtin::i32
	{
		#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(2)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getAbs($extension_Int16_258_i16 const& $this ) -> const $extension_Int16_258_i16
	{
		#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)($this.$ref()) ? -$this : $this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsCanonical($extension_Int16_258_i16 const& $this ) -> const bool
	{
		#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsComplexNumber($extension_Int16_258_i16 const& $this ) -> const bool
	{
		#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsEvenInteger($extension_Int16_258_i16 const& $this ) -> const bool
	{
		#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(($this & Builtin::i16(1)) == Builtin::i32(0)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsFinite($extension_Int16_258_i16 const& $this ) -> const bool
	{
		#line 267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsImaginaryNumber($extension_Int16_258_i16 const& $this ) -> const bool
	{
		#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsInfinity($extension_Int16_258_i16 const& $this ) -> const bool
	{
		#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsInteger($extension_Int16_258_i16 const& $this ) -> const bool
	{
		#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsNaN($extension_Int16_258_i16 const& $this ) -> const bool
	{
		#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsNegative($extension_Int16_258_i16 const& $this ) -> const bool
	{
		#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(($this <=> Builtin::i32(0)) < 0); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsNegativeInfinity($extension_Int16_258_i16 const& $this ) -> const bool
	{
		#line 273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsNormal($extension_Int16_258_i16 const& $this ) -> const bool
	{
		#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this != Builtin::i32(0)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsOddInteger($extension_Int16_258_i16 const& $this ) -> const bool
	{
		#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(($this & Builtin::i16(1)) != Builtin::i32(0)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsPositive($extension_Int16_258_i16 const& $this ) -> const bool
	{
		#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(($this <=> Builtin::i32(0)) >= 0); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsPositiveInfinity($extension_Int16_258_i16 const& $this ) -> const bool
	{
		#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsRealNumber($extension_Int16_258_i16 const& $this ) -> const bool
	{
		#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsSubnormal($extension_Int16_258_i16 const& $this ) -> const bool
	{
		#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsZero($extension_Int16_258_i16 const& $this ) -> const bool
	{
		#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this == Builtin::i32(0)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	
} namespace $extensions { using namespace System;
#line 371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto $static_getMinusOne<$extension_Int16_370_i16>::get() -> const $extension_Int16_370_i16
	{
		#line 371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::i16(-1)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	
} namespace $extensions { using namespace System;
#line 395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto Max($extension_Int16_374_i16 const& $this LIFETIMEBOUND, $extension_Int16_374_i16 rhs) noexcept -> const typename $extension_Int16_374_i16
	{
		#line 395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultMax)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto MaxNumber($extension_Int16_374_i16 const& $this LIFETIMEBOUND, $extension_Int16_374_i16 rhs) noexcept -> const typename $extension_Int16_374_i16
	{
		#line 396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Max)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto Min($extension_Int16_374_i16 const& $this LIFETIMEBOUND, $extension_Int16_374_i16 rhs) noexcept -> const typename $extension_Int16_374_i16
	{
		#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultMin)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto MinNumber($extension_Int16_374_i16 const& $this LIFETIMEBOUND, $extension_Int16_374_i16 rhs) noexcept -> const typename $extension_Int16_374_i16
	{
		#line 398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Min)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto Clamp($extension_Int16_374_i16 const& $this LIFETIMEBOUND, $extension_Int16_374_i16 min, $extension_Int16_374_i16 max)  -> const typename $extension_Int16_374_i16
	{
		#line 399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultClamp)($this, min, max)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getSign($extension_Int16_374_i16 const& $this ) -> const Builtin::i32
	{
		#line 375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultSign)($this)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	
} namespace $extensions { using namespace System;
#line 456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto CheckedLog($extension_Int16_402_i16 const& $this LIFETIMEBOUND, $extension_Int16_402_i16 base) noexcept -> const Builtin::Nullable<$extension_Int16_402_i16>
	{
		#line 458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (($this <=> Builtin::i32(0)) <= 0 || (base <=> Builtin::i32(1)) <= 0) {
			#line 459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return nullptr;
		}
		#line 462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (std::is_constant_evaluated()) {
			#line 463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			if (base == Builtin::i32(2)) {
				#line 464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				return ADV_UPCS(CheckedLog2)($this.$ref());
			}
			#line 466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			if (base == Builtin::i32(10)) {
				#line 467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				return ADV_UPCS(CheckedLog10)($this.$ref());
			}
		}
		#line 471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (($this <=> base) < 0) {
			#line 472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return Builtin::i16(0);
		}
		#line 475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_402_i16 n = Builtin::i16(1); 
		#line 476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype(base)> r = base; 
		#line 477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_bsl)($this, base))> baseRatio = ADV_UFCS(_operator_bsl)($this, base); 
		#line 478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		while ((r <=> baseRatio) <= 0) 
		{
			#line 479 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			++n;
			#line 480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			r *= base;
		}
		#line 483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return n;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto Midpoint($extension_Int16_402_i16 const& $this LIFETIMEBOUND, $extension_Int16_402_i16 rhs) noexcept -> const typename $extension_Int16_402_i16
	{
		#line 501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		const Builtin::Auto<decltype((($this ^ rhs) >> Builtin::i32(1)) + ($this & rhs))> result = (($this ^ rhs) >> Builtin::i32(1)) + ($this & rhs); 
		#line 502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		const Builtin::Auto<decltype((result <=> Builtin::i32(0)) < 0)> correction = (result <=> Builtin::i32(0)) < 0; 
		#line 503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return result + ((Builtin::Cast<true, $extension_Int16_402_i16>(correction)) & ($this ^ rhs));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto IsMultipleOf($extension_Int16_402_i16 const& $this LIFETIMEBOUND, $extension_Int16_402_i16 rhs) noexcept -> const bool
	{
		#line 509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (rhs == Builtin::i32(0)) {
			#line 510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return $this == Builtin::i32(0);
		}
		#line 513 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (rhs == Builtin::i32(-1)) {
			#line 514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return Builtin::Boolean(true);
		}
		#line 517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return $this % rhs == Builtin::i32(0);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto $static_getAllBitsSet<$extension_Int16_402_i16>::get() -> const $extension_Int16_402_i16
	{
		#line 404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(MinusOne, Builtin::i16)()); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsPow2($extension_Int16_402_i16 const& $this ) -> const bool
	{
		#line 407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsPositive)($this.$ref()) && ADV_UPCS(PopCount)($this.$ref()) == Builtin::i32(1)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getCheckedLog2($extension_Int16_402_i16 const& $this ) -> const Builtin::Nullable<$extension_Int16_402_i16>
	{
		#line 413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (($this <=> Builtin::i32(0)) <= 0) {
			#line 414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return nullptr;
		}
		#line 417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return Builtin::Cast<true, $extension_Int16_402_i16>((ADV_USPCS(BitWidth, $extension_Int16_402_i16)() - Builtin::i32(1) - ADV_UPCS(LeadingZeroCount)($this.$ref())));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getLog2($extension_Int16_402_i16 const& $this ) -> const $extension_Int16_402_i16
	{
		#line 423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (const auto result = ADV_UPCS(CheckedLog2)($this.$ref())) {
			{
				#line 423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				return result;
			}
		}
		#line 426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getCheckedLog10($extension_Int16_402_i16 const& $this ) -> const Builtin::Nullable<$extension_Int16_402_i16>
	{
		#line 433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (($this <=> Builtin::i32(0)) <= 0) {
			#line 434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return nullptr;
		}
		#line 437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::u32>($this))> val = Builtin::Cast<true, Builtin::u32>($this); 
		#line 438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		constexpr Builtin::u32 C1 = Builtin::u32(0b01100000000000000000U) - Builtin::i32(10);
		#line 439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		constexpr Builtin::u32 C2 = Builtin::u32(0b10000000000000000000U) - Builtin::i32(100);
		#line 440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		constexpr Builtin::u32 C3 = Builtin::u32(0b11100000000000000000U) - Builtin::i32(1000);
		#line 441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		constexpr Builtin::u32 C4 = Builtin::u32(0b10000000000000000000U) - Builtin::i32(10000);
		#line 442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return Builtin::Cast<true, $extension_Int16_402_i16>(((((val + C1) & (val + C2)) ^ ((val + C3) & (val + C4))) >> Builtin::i32(17)));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getLog10($extension_Int16_402_i16 const& $this ) -> const $extension_Int16_402_i16
	{
		#line 448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (const auto result = ADV_UPCS(CheckedLog10)($this.$ref())) {
			{
				#line 448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				return result;
			}
		}
		#line 451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	
} namespace $extensions { using namespace System;
#line 524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_add_qst($extension_Int16_521_i16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int16_521_i16>
	{
		#line 526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +? implemented only for integer types");
		#line 527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_521_i16 result{}; 
		#line 528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (Builtin::SafeAdd($this, rhs, result)) {
			#line 529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return result;
		}
		#line 531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_add_qst_eq($extension_Int16_521_i16 & $this , T rhs) noexcept -> typename $extension_Int16_521_i16&
	{
		#line 535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +?= implemented only for integer types");
		#line 536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (const auto result = ADV_UFCS(_operator_add_qst)($this, rhs)) {
			{
				#line 536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				$this = result;
			}
		}
		#line 539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_add_ne($extension_Int16_521_i16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int16_521_i16
	{
		#line 546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +! implemented only for integer types");
		#line 547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_521_i16 result{}; 
		#line 548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::StrictAdd($this, rhs, result);
		#line 549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_add_ne_eq($extension_Int16_521_i16 & $this , T rhs)  -> typename $extension_Int16_521_i16&
	{
		#line 551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_add_ne)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_add_mod($extension_Int16_521_i16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int16_521_i16
	{
		#line 557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +% implemented only for integer types");
		#line 558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_521_i16 result{}; 
		#line 559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::WrappingAdd($this, rhs, result);
		#line 560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_add_mod_eq($extension_Int16_521_i16 & $this , T rhs) noexcept -> typename $extension_Int16_521_i16&
	{
		#line 562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_add_mod)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 566 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_add_or($extension_Int16_521_i16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int16_521_i16
	{
		#line 568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +| implemented only for integer types");
		#line 569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_521_i16 result{}; 
		#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::SaturatingAdd($this, rhs, result);
		#line 571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_add_or_eq($extension_Int16_521_i16 & $this , T rhs) noexcept -> typename $extension_Int16_521_i16&
	{
		#line 573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_add_or)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_add_mod_qst($extension_Int16_521_i16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_Int16_521_i16, bool>
	{
		#line 578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +%? implemented only for integer types");
		#line 579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_521_i16 result{}; 
		#line 580 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype(!Builtin::SafeAdd($this, rhs, result))> overflowed = !Builtin::SafeAdd($this, rhs, result); 
		#line 581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_add_add_qst($extension_Int16_521_i16 & $this )  -> typename $extension_Int16_521_i16&
	{
		#line 585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_qst_eq)($this, Builtin::i16(1))); 
	}
	inline constexpr auto _operator_add_add_qst_postfix($extension_Int16_521_i16 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_add_add_qst)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 588 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_add_add_ne($extension_Int16_521_i16 & $this )  -> typename $extension_Int16_521_i16&
	{
		#line 588 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_ne_eq)($this, Builtin::i16(1))); 
	}
	inline constexpr auto _operator_add_add_ne_postfix($extension_Int16_521_i16 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_add_add_ne)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 591 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_add_add_mod($extension_Int16_521_i16 & $this )  -> typename $extension_Int16_521_i16&
	{
		#line 591 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_mod_eq)($this, Builtin::i16(1))); 
	}
	inline constexpr auto _operator_add_add_mod_postfix($extension_Int16_521_i16 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_add_add_mod)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_add_add_or($extension_Int16_521_i16 & $this )  -> typename $extension_Int16_521_i16&
	{
		#line 594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_or_eq)($this, Builtin::i16(1))); 
	}
	inline constexpr auto _operator_add_add_or_postfix($extension_Int16_521_i16 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_add_add_or)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto CarryingAdd($extension_Int16_521_i16 const& $this LIFETIMEBOUND, $extension_Int16_521_i16 rhs, bool carry) noexcept -> const std::tuple<$extension_Int16_521_i16, bool>
	{
		#line 600 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_521_i16 result{}; 
		#line 601 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype(Builtin::CarryingAdd($this, rhs, carry, result))> overflowed = Builtin::CarryingAdd($this, rhs, carry, result); 
		#line 602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 607 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto BorrowingSub($extension_Int16_521_i16 const& $this LIFETIMEBOUND, $extension_Int16_521_i16 rhs, bool carry) noexcept -> const std::tuple<$extension_Int16_521_i16, bool>
	{
		#line 609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_521_i16 result{}; 
		#line 610 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype(Builtin::BorrowingSub($this, rhs, carry, result))> overflowed = Builtin::BorrowingSub($this, rhs, carry, result); 
		#line 611 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 616 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_sub_qst($extension_Int16_521_i16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int16_521_i16>
	{
		#line 618 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -? implemented only for integer types");
		#line 619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_521_i16 result{}; 
		#line 620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (Builtin::SafeSubtract($this, rhs, result)) {
			#line 621 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return result;
		}
		#line 623 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 625 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_sub_qst_eq($extension_Int16_521_i16 & $this , T rhs) noexcept -> typename $extension_Int16_521_i16&
	{
		#line 627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -?= implemented only for integer types");
		#line 628 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (const auto result = ADV_UFCS(_operator_sub_qst)($this, rhs)) {
			{
				#line 628 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				$this = result;
			}
		}
		#line 631 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_sub_ne($extension_Int16_521_i16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int16_521_i16
	{
		#line 638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -! implemented only for integer types");
		#line 639 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_521_i16 result{}; 
		#line 640 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::StrictSubtract($this, rhs, result);
		#line 641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 643 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_sub_ne_eq($extension_Int16_521_i16 & $this , T rhs)  -> typename $extension_Int16_521_i16&
	{
		#line 643 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_sub_ne)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 647 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_sub_mod($extension_Int16_521_i16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int16_521_i16
	{
		#line 649 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -% implemented only for integer types");
		#line 650 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_521_i16 result{}; 
		#line 651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::WrappingSubtract($this, rhs, result);
		#line 652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_sub_mod_eq($extension_Int16_521_i16 & $this , T rhs) noexcept -> typename $extension_Int16_521_i16&
	{
		#line 654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_sub_mod)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 658 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_sub_or($extension_Int16_521_i16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int16_521_i16
	{
		#line 660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -| implemented only for integer types");
		#line 661 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_521_i16 result{}; 
		#line 662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::SaturatingSubtract($this, rhs, result);
		#line 663 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 665 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_sub_or_eq($extension_Int16_521_i16 & $this , T rhs) noexcept -> typename $extension_Int16_521_i16&
	{
		#line 665 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_sub_or)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 669 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_sub_mod_qst($extension_Int16_521_i16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_Int16_521_i16, bool>
	{
		#line 670 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -%? implemented only for integer types");
		#line 671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_521_i16 result{}; 
		#line 672 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype(!Builtin::SafeSubtract($this, rhs, result))> overflowed = !Builtin::SafeSubtract($this, rhs, result); 
		#line 673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_sub_sub_qst($extension_Int16_521_i16 & $this )  -> typename $extension_Int16_521_i16&
	{
		#line 677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_qst_eq)($this, Builtin::i16(1))); 
	}
	inline constexpr auto _operator_sub_sub_qst_postfix($extension_Int16_521_i16 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_sub_sub_qst)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_sub_sub_ne($extension_Int16_521_i16 & $this )  -> typename $extension_Int16_521_i16&
	{
		#line 680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_ne_eq)($this, Builtin::i16(1))); 
	}
	inline constexpr auto _operator_sub_sub_ne_postfix($extension_Int16_521_i16 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_sub_sub_ne)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_sub_sub_mod($extension_Int16_521_i16 & $this )  -> typename $extension_Int16_521_i16&
	{
		#line 683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_mod_eq)($this, Builtin::i16(1))); 
	}
	inline constexpr auto _operator_sub_sub_mod_postfix($extension_Int16_521_i16 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_sub_sub_mod)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_sub_sub_or($extension_Int16_521_i16 & $this )  -> typename $extension_Int16_521_i16&
	{
		#line 686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_or_eq)($this, Builtin::i16(1))); 
	}
	inline constexpr auto _operator_sub_sub_or_postfix($extension_Int16_521_i16 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_sub_sub_or)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 690 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mul_qst($extension_Int16_521_i16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int16_521_i16>
	{
		#line 692 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *? implemented only for integer types");
		#line 693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_521_i16 result{}; 
		#line 694 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (Builtin::SafeMultiply($this, rhs, result)) {
			#line 695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return result;
		}
		#line 697 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 699 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mul_qst_eq($extension_Int16_521_i16 & $this , T rhs) noexcept -> typename $extension_Int16_521_i16&
	{
		#line 701 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *?= implemented only for integer types");
		#line 702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (const auto result = ADV_UFCS(_operator_mul_qst)($this, rhs)) {
			{
				#line 702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				$this = result;
			}
		}
		#line 705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 710 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mul_ne($extension_Int16_521_i16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int16_521_i16
	{
		#line 712 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *! implemented only for integer types");
		#line 713 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_521_i16 result{}; 
		#line 714 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::StrictMultiply($this, rhs, result);
		#line 715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 717 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mul_ne_eq($extension_Int16_521_i16 & $this , T rhs)  -> typename $extension_Int16_521_i16&
	{
		#line 717 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_mul_ne)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 721 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mul_mod($extension_Int16_521_i16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int16_521_i16
	{
		#line 723 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *% implemented only for integer types");
		#line 724 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_521_i16 result{}; 
		#line 725 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::WrappingMultiply($this, rhs, result);
		#line 726 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 728 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mul_mod_eq($extension_Int16_521_i16 & $this , T rhs) noexcept -> typename $extension_Int16_521_i16&
	{
		#line 728 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_mul_mod)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 732 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mul_or($extension_Int16_521_i16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int16_521_i16
	{
		#line 734 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *| implemented only for integer types");
		#line 735 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_521_i16 result{}; 
		#line 736 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::SaturatingMultiply($this, rhs, result);
		#line 737 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 739 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mul_or_eq($extension_Int16_521_i16 & $this , T rhs) noexcept -> typename $extension_Int16_521_i16&
	{
		#line 739 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_mul_or)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mul_mod_qst($extension_Int16_521_i16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_Int16_521_i16, bool>
	{
		#line 744 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *%? implemented only for integer types");
		#line 745 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_521_i16 result{}; 
		#line 746 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype(!Builtin::SafeMultiply($this, rhs, result))> overflowed = !Builtin::SafeMultiply($this, rhs, result); 
		#line 747 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 752 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_mul_gt($extension_Int16_521_i16 const& $this LIFETIMEBOUND, $extension_Int16_521_i16 rhs) noexcept -> const std::tuple<Builtin::u16, Builtin::i16>
	{
		#line 754 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		const auto& [low, high] = Builtin::WideningMul16($this, rhs);
		#line 755 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return std::make_tuple(low, high);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 761 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto CarryingMul($extension_Int16_521_i16 const& $this LIFETIMEBOUND, $extension_Int16_521_i16 rhs, $extension_Int16_521_i16 carry) noexcept -> const std::tuple<Builtin::u16, Builtin::i16>
	{
		#line 763 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		const auto& [low, high] = Builtin::CarryingMul16($this, rhs, carry);
		#line 764 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return std::make_tuple(low, high);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 769 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_qst($extension_Int16_521_i16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int16_521_i16>
	{
		#line 771 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\? implemented only for integer types");
		#line 772 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_521_i16 result{}; 
		#line 773 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (Builtin::SafeDivide($this, rhs, result)) {
			#line 774 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return result;
		}
		#line 776 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 778 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_qst_eq($extension_Int16_521_i16 & $this , T rhs) noexcept -> typename $extension_Int16_521_i16&
	{
		#line 780 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\?= implemented only for integer types");
		#line 781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (const auto result = ADV_UFCS(_operator_bsl_qst)($this, rhs)) {
			{
				#line 781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 782 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				$this = result;
			}
		}
		#line 784 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 790 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_ne($extension_Int16_521_i16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int16_521_i16
	{
		#line 792 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\! implemented only for integer types");
		#line 793 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_521_i16 result{}; 
		#line 794 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::StrictDivide($this, rhs, result);
		#line 795 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 797 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_ne_eq($extension_Int16_521_i16 & $this , T rhs)  -> typename $extension_Int16_521_i16&
	{
		#line 797 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_bsl_ne)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 802 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_mod($extension_Int16_521_i16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int16_521_i16
	{
		#line 804 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\% implemented only for integer types");
		#line 805 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_521_i16 result{}; 
		#line 806 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::WrappingDivide($this, rhs, result);
		#line 807 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 809 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_eq($extension_Int16_521_i16 & $this , T rhs)  -> typename $extension_Int16_521_i16&
	{
		#line 809 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_bsl_mod)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 814 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_or($extension_Int16_521_i16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int16_521_i16
	{
		#line 816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\| implemented only for integer types");
		#line 817 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_521_i16 result{}; 
		#line 818 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::SaturatingDivide($this, rhs, result);
		#line 819 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 821 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_or_eq($extension_Int16_521_i16 & $this , T rhs)  -> typename $extension_Int16_521_i16&
	{
		#line 821 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_bsl_or)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 826 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_qst($extension_Int16_521_i16 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_Int16_521_i16, bool>
	{
		#line 827 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\%? implemented only for integer types");
		#line 828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_521_i16 result{}; 
		#line 829 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype(!Builtin::SafeDivide($this, rhs, result))> overflowed = !Builtin::SafeDivide($this, rhs, result); 
		#line 830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 835 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst($extension_Int16_521_i16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int16_521_i16>
	{
		#line 837 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\? implemented only for integer types");
		#line 838 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_521_i16 result{}; 
		#line 839 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (Builtin::SafeDivExact($this, rhs, result)) {
			#line 840 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return result;
		}
		#line 842 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 845 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst_eq($extension_Int16_521_i16 & $this , T rhs) noexcept -> typename $extension_Int16_521_i16&
	{
		#line 847 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\?= implemented only for integer types");
		#line 848 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (const auto result = ADV_UFCS(_operator_bsl_bsl_qst)($this, rhs)) {
			{
				#line 848 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 849 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				$this = result;
			}
		}
		#line 851 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 856 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mod_qst($extension_Int16_521_i16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int16_521_i16>
	{
		#line 858 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %? implemented only for integer types");
		#line 859 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_521_i16 result{}; 
		#line 860 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (Builtin::SafeModulus($this, rhs, result)) {
			#line 861 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return result;
		}
		#line 863 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 865 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mod_qst_eq($extension_Int16_521_i16 & $this , T rhs) noexcept -> typename $extension_Int16_521_i16&
	{
		#line 867 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %?= implemented only for integer types");
		#line 868 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (const auto result = ADV_UFCS(_operator_mod_qst)($this, rhs)) {
			{
				#line 868 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 869 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				$this = result;
			}
		}
		#line 871 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 877 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mod_ne($extension_Int16_521_i16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int16_521_i16
	{
		#line 879 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %! implemented only for integer types");
		#line 880 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_521_i16 result{}; 
		#line 881 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::StrictModulus($this, rhs, result);
		#line 882 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 884 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mod_ne_eq($extension_Int16_521_i16 & $this , T rhs)  -> typename $extension_Int16_521_i16&
	{
		#line 884 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_mod_ne)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 889 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mod_mod($extension_Int16_521_i16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int16_521_i16
	{
		#line 891 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %% implemented only for integer types");
		#line 892 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_521_i16 result{}; 
		#line 893 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::WrappingModulus($this, rhs, result);
		#line 894 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 896 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mod_mod_eq($extension_Int16_521_i16 & $this , T rhs)  -> typename $extension_Int16_521_i16&
	{
		#line 896 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_mod_mod)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 901 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mod_mod_qst($extension_Int16_521_i16 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_Int16_521_i16, bool>
	{
		#line 902 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %%? implemented only for integer types");
		#line 903 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_521_i16 result{}; 
		#line 904 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype(!Builtin::SafeModulus($this, rhs, result))> overflowed = !Builtin::SafeModulus($this, rhs, result); 
		#line 905 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 910 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_sub_qst($extension_Int16_521_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::Nullable<$extension_Int16_521_i16>
	{
		#line 912 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_521_i16 result{}; 
		#line 913 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (Builtin::SafeNegate($this, result)) {
			#line 914 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return result;
		}
		#line 916 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 920 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_sub_ne($extension_Int16_521_i16 const& $this LIFETIMEBOUND)  -> const typename $extension_Int16_521_i16
	{
		#line 922 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_521_i16 result{}; 
		#line 923 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::StrictNegate($this, result);
		#line 924 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 927 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_sub_mod($extension_Int16_521_i16 const& $this LIFETIMEBOUND)  -> const typename $extension_Int16_521_i16
	{
		#line 929 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_521_i16 result{}; 
		#line 930 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::WrappingNegate($this, result);
		#line 931 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 935 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_sub_or($extension_Int16_521_i16 const& $this LIFETIMEBOUND)  -> const typename $extension_Int16_521_i16
	{
		#line 937 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_521_i16 result{}; 
		#line 938 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::SaturatingNegate($this, result);
		#line 939 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 943 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_sub_mod_qst($extension_Int16_521_i16 const& $this LIFETIMEBOUND)  -> const std::tuple<$extension_Int16_521_i16, bool>
	{
		#line 945 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_521_i16 result{}; 
		#line 946 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype(!Builtin::SafeNegate($this, result))> overflowed = !Builtin::SafeNegate($this, result); 
		#line 947 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 951 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_lt_lt_qst($extension_Int16_521_i16 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<$extension_Int16_521_i16>
	{
		#line 953 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_Int16_521_i16)()) < 0) {
			#line 954 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return Builtin::UncheckedShiftLeft($this, amount);
		}
		#line 956 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 959 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_lt_lt_qst_eq($extension_Int16_521_i16 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int16_521_i16&
	{
		#line 961 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_Int16_521_i16)()) < 0) {
			#line 962 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return $this <<= amount;
		}
		#line 964 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 967 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_lt_lt_ne($extension_Int16_521_i16 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_Int16_521_i16
	{
		#line 969 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_Int16_521_i16)()) < 0) {
			#line 970 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return Builtin::UncheckedShiftLeft($this, amount);
		}
		#line 972 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Throw(Builtin::IntegerOverflowException{});
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 975 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_lt_lt_ne_eq($extension_Int16_521_i16 & $this , Builtin::i32 amount)  -> typename $extension_Int16_521_i16&
	{
		#line 975 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_lt_lt_ne)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 977 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_lt_lt_mod($extension_Int16_521_i16 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename $extension_Int16_521_i16
	{
		#line 977 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::UncheckedShiftLeft($this, amount & (ADV_USPCS(BitWidth, $extension_Int16_521_i16)() - Builtin::i32(1)))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 980 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_lt_lt_mod_eq($extension_Int16_521_i16 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int16_521_i16&
	{
		#line 980 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_lt_lt_mod)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 982 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_lt_lt_mod_qst($extension_Int16_521_i16 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<$extension_Int16_521_i16, bool>
	{
		#line 982 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(std::make_tuple(ADV_UFCS(_operator_lt_lt_mod)($this, amount), (amount <=> Builtin::i32(0)) < 0 || (amount <=> ADV_USPCS(BitWidth, $extension_Int16_521_i16)()) >= 0)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 985 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_gt_gt_qst($extension_Int16_521_i16 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<$extension_Int16_521_i16>
	{
		#line 987 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_Int16_521_i16)()) < 0) {
			#line 988 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return $this >> amount;
		}
		#line 990 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 993 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_gt_gt_qst_eq($extension_Int16_521_i16 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int16_521_i16&
	{
		#line 995 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_Int16_521_i16)()) < 0) {
			#line 996 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return $this >>= amount;
		}
		#line 998 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1001 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_gt_gt_ne($extension_Int16_521_i16 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_Int16_521_i16
	{
		#line 1003 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_Int16_521_i16)()) < 0) {
			#line 1004 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return $this >> amount;
		}
		#line 1006 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Throw(Builtin::IntegerOverflowException{});
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1009 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_gt_gt_ne_eq($extension_Int16_521_i16 & $this , Builtin::i32 amount)  -> typename $extension_Int16_521_i16&
	{
		#line 1009 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_gt_gt_ne)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1011 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_gt_gt_mod($extension_Int16_521_i16 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename $extension_Int16_521_i16
	{
		#line 1011 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::UncheckedShiftRight($this, amount & (ADV_USPCS(BitWidth, $extension_Int16_521_i16)() - Builtin::i32(1)))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1014 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_gt_gt_mod_eq($extension_Int16_521_i16 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int16_521_i16&
	{
		#line 1014 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_gt_gt_mod)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1016 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_gt_gt_mod_qst($extension_Int16_521_i16 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<$extension_Int16_521_i16, bool>
	{
		#line 1016 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(std::make_tuple(ADV_UFCS(_operator_gt_gt_mod)($this, amount), (amount <=> Builtin::i32(0)) < 0 || (amount <=> ADV_USPCS(BitWidth, $extension_Int16_521_i16)()) >= 0)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1022 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor_qst($extension_Int16_521_i16 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const Builtin::Nullable<$extension_Int16_521_i16>
	{
		#line 1024 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1026 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return Builtin::i16(1);
		}
		#line 1029 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 1030 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype(Builtin::i16(1))> result = Builtin::i16(1); 
		#line 1032 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		for (;;) 
		{
			#line 1033 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 1034 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				if (const auto mul = ADV_UFCS(_operator_mul_qst)(result, base)) {
					{
						#line 1034 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
						auto __tmp0 = *mul; const auto& mul = __tmp0;
						
						#line 1035 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
						result = mul;
					}
				} else {
					#line 1036 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
					{
						#line 1037 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
						return nullptr;
					}
				}
				#line 1039 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				if (exp == Builtin::i32(1)) {
					#line 1040 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
					return result;
				}
			}
			#line 1042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
			#line 1043 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			if (const auto mul = ADV_UFCS(_operator_mul_qst)(base, base)) {
				{
					#line 1043 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
					auto __tmp0 = *mul; const auto& mul = __tmp0;
					
					#line 1044 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
					base = mul;
				}
			} else {
				#line 1045 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				{
					#line 1046 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
					return nullptr;
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1051 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor_qst_eq($extension_Int16_521_i16 & $this , Builtin::u32 exp) noexcept -> typename $extension_Int16_521_i16&
	{
		#line 1053 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (auto result = ADV_UFCS(_operator_xor_xor_qst)($this, exp)) {
			{
				#line 1053 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 1054 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				return $this = result;
			}
		}
		#line 1056 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1059 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor_ne($extension_Int16_521_i16 const& $this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename $extension_Int16_521_i16
	{
		#line 1061 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1063 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return Builtin::i16(1);
		}
		#line 1066 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 1067 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype(Builtin::i16(1))> result = Builtin::i16(1); 
		#line 1069 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		for (;;) 
		{
			#line 1070 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 1071 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				ADV_UFCS(_operator_mul_ne_eq)(result, base);
				#line 1072 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				if (exp == Builtin::i32(1)) {
					#line 1073 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
					return result;
				}
			}
			#line 1075 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
			#line 1076 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			ADV_UFCS(_operator_mul_ne_eq)(base, base);
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1080 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor_ne_eq($extension_Int16_521_i16 & $this , Builtin::u32 exp)  -> typename $extension_Int16_521_i16&
	{
		#line 1080 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_xor_xor_ne)($this, exp)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1082 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor_mod($extension_Int16_521_i16 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename $extension_Int16_521_i16
	{
		#line 1084 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1086 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return Builtin::i16(1);
		}
		#line 1089 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 1090 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype(Builtin::i16(1))> result = Builtin::i16(1); 
		#line 1092 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (std::is_constant_evaluated()) {
			#line 1093 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			while ((exp <=> Builtin::i32(1)) > 0) 
			{
				#line 1094 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
					#line 1095 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
					ADV_UFCS(_operator_mul_mod_eq)(result, base);
				}
				#line 1097 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
				#line 1098 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				ADV_UFCS(_operator_mul_mod_eq)(base, base);
			}
			#line 1100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return ADV_UFCS(_operator_mul_mod)(result, base);
		} else {
			#line 1101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			{
				#line 1102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				for (;;) 
				{
					#line 1103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
					if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
						#line 1104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
						ADV_UFCS(_operator_mul_mod_eq)(result, base);
						#line 1105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
						if (exp == Builtin::i32(1)) {
							#line 1106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
							return result;
						}
					}
					#line 1108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
					ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
					#line 1109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
					ADV_UFCS(_operator_mul_mod_eq)(base, base);
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor_mod_eq($extension_Int16_521_i16 & $this , Builtin::u32 exp) noexcept -> typename $extension_Int16_521_i16&
	{
		#line 1114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_xor_xor_mod)($this, exp)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor_or($extension_Int16_521_i16 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename $extension_Int16_521_i16
	{
		#line 1118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (const auto result = ADV_UFCS(_operator_xor_xor_qst)($this, exp)) {
			{
				#line 1118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 1119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				return result;
			}
		}
		#line 1122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return (ADV_UPCS(IsNegative)($this.$ref()) && exp % Builtin::i32(2) == Builtin::i32(1)) ? ADV_USPCS(MinValue, $extension_Int16_521_i16)() : ADV_USPCS(MaxValue, $extension_Int16_521_i16)();
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor_or_eq($extension_Int16_521_i16 & $this , Builtin::u32 exp) noexcept -> typename $extension_Int16_521_i16&
	{
		#line 1125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_xor_xor_or)($this, exp)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor_mod_qst($extension_Int16_521_i16 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const std::tuple<$extension_Int16_521_i16, bool>
	{
		#line 1129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return std::make_tuple(Builtin::i16(1), Builtin::Boolean(false));
		}
		#line 1134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 1135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype(Builtin::i16(1))> result = Builtin::i16(1); 
		#line 1136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype(Builtin::Boolean(false))> overflowed = Builtin::Boolean(false); 
		#line 1137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype(std::make_tuple(Builtin::i16(0), Builtin::Boolean(false)))> tmp = std::make_tuple(Builtin::i16(0), Builtin::Boolean(false)); 
		#line 1139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		for (;;) 
		{
			#line 1140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 1141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				tmp = ADV_UFCS(_operator_mul_mod_qst)(result, base);
				#line 1142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				if (exp == Builtin::i32(1)) {
					#line 1143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
					std::get<1>(tmp) |= overflowed;
					#line 1144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
					return tmp;
				}
				#line 1146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				result = std::get<0>(tmp);
				#line 1147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				overflowed |= std::get<1>(tmp);
			}
			#line 1149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
			#line 1150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			tmp = ADV_UFCS(_operator_mul_mod_qst)(base, base);
			#line 1151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			base = std::get<0>(tmp);
			#line 1152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			overflowed |= std::get<1>(tmp);
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getCheckedAbs($extension_Int16_521_i16 const& $this ) -> const Builtin::Nullable<$extension_Int16_521_i16>
	{
		#line 1158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)($this.$ref()) ? ADV_UFCS(_operator_sub_qst)($this) : $this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getStrictAbs($extension_Int16_521_i16 const& $this ) -> const $extension_Int16_521_i16
	{
		#line 1161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)($this.$ref()) ? ADV_UFCS(_operator_sub_ne)($this) : $this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getWrappingAbs($extension_Int16_521_i16 const& $this ) -> const $extension_Int16_521_i16
	{
		#line 1164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)($this.$ref()) ? ADV_UFCS(_operator_sub_mod)($this) : $this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getSaturatingAbs($extension_Int16_521_i16 const& $this ) -> const $extension_Int16_521_i16
	{
		#line 1167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)($this.$ref()) ? ADV_UFCS(_operator_sub_or)($this) : $this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getOverflowingAbs($extension_Int16_521_i16 const& $this ) -> const std::tuple<$extension_Int16_521_i16, bool>
	{
		#line 1172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (ADV_UPCS(IsNegative)($this.$ref())) {
			#line 1173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return ADV_UFCS(_operator_sub_mod_qst)($this);
		}
		#line 1175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return std::make_tuple($this, Builtin::Boolean(false));
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	
} namespace $extensions { using namespace System;
#line 1224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NextMultipleOf($extension_Int16_1179_i16 const& $this LIFETIMEBOUND, $extension_Int16_1179_i16 rhs)  -> const typename $extension_Int16_1179_i16
	{
		#line 1226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (rhs == Builtin::i32(-1)) {
			#line 1227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return $this;
		}
		#line 1230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		const Builtin::Auto<decltype($this % rhs)> remainder = $this % rhs; 
		#line 1231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		const Builtin::Auto<decltype(((remainder <=> Builtin::i32(0)) > 0 && (rhs <=> Builtin::i32(0)) < 0) || ((remainder <=> Builtin::i32(0)) < 0 && (rhs <=> Builtin::i32(0)) > 0) ? remainder + rhs : remainder)> mod = ((remainder <=> Builtin::i32(0)) > 0 && (rhs <=> Builtin::i32(0)) < 0) || ((remainder <=> Builtin::i32(0)) < 0 && (rhs <=> Builtin::i32(0)) > 0) ? remainder + rhs : remainder; 
		#line 1234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return mod == Builtin::i32(0) ? $this : $this + (rhs - mod);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto CheckedNextMultipleOf($extension_Int16_1179_i16 const& $this LIFETIMEBOUND, $extension_Int16_1179_i16 rhs) noexcept -> const Builtin::Nullable<$extension_Int16_1179_i16>
	{
		#line 1242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (rhs == Builtin::i32(-1)) {
			#line 1243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return $this;
		}
		#line 1246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_1179_i16 remainder{}; 
		#line 1247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (const auto r = ADV_UFCS(_operator_mod_qst)($this, rhs)) {
			{
				#line 1247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				auto __tmp0 = *r; const auto& r = __tmp0;
				
				#line 1248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				remainder = r;
			}
		} else {
			#line 1249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return nullptr;
		}
		#line 1251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		const Builtin::Auto<decltype(((remainder <=> Builtin::i32(0)) > 0 && (rhs <=> Builtin::i32(0)) < 0) || ((remainder <=> Builtin::i32(0)) < 0 && (rhs <=> Builtin::i32(0)) > 0) ? remainder + rhs : remainder)> mod = ((remainder <=> Builtin::i32(0)) > 0 && (rhs <=> Builtin::i32(0)) < 0) || ((remainder <=> Builtin::i32(0)) < 0 && (rhs <=> Builtin::i32(0)) > 0) ? remainder + rhs : remainder; 
		#line 1254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (mod == Builtin::i32(0)) {
			#line 1255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return $this;
		}
		#line 1257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return ADV_UFCS(_operator_add_qst)($this, (rhs - mod));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto $static_getIsSigned<$extension_Int16_1179_i16>::get() -> const bool
	{
		#line 1180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getTrailingZeroCount($extension_Int16_1179_i16 const& $this ) -> const Builtin::u32
	{
		#line 1182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::TrailingZeroCount($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getTrailingOneCount($extension_Int16_1179_i16 const& $this ) -> const Builtin::u32
	{
		#line 1183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::TrailingZeroCount(ADV_UFCS(_operator_not)($this))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getByteCount($extension_Int16_1179_i16 const& $this ) -> const Builtin::u32
	{
		#line 1184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u32>(Builtin::usize(sizeof($extension_Int16_1179_i16)))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getMinimalBitWidth($extension_Int16_1179_i16 const& $this ) -> const Builtin::u32
	{
		#line 1185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(BitWidth, $extension_Int16_1179_i16)() - ADV_UPCS(LeadingZeroCount)($this.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline auto getIsqrt($extension_Int16_1179_i16 const& $this ) -> const $extension_Int16_1179_i16
	{
		#line 1202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (const auto result = ADV_UPCS(CheckedIsqrt)($this.$ref())) {
			{
				#line 1202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 1203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				return result;
			}
		}
		#line 1205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getLog2Ceiling($extension_Int16_1179_i16 const& $this ) -> const $extension_Int16_1179_i16
	{
		#line 1212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype(ADV_UPCS(Log2)($this.$ref()))> result = ADV_UPCS(Log2)($this.$ref()); 
		#line 1213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (ADV_UPCS(PopCount)($this.$ref()) != Builtin::i32(1)) {
			#line 1214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			++result;
		}
		#line 1217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return result;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getPrevPow2($extension_Int16_1179_i16 const& $this ) -> const $extension_Int16_1179_i16
	{
		#line 1263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (($this <=> Builtin::i32(1)) <= 0) {
			#line 1264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return Builtin::i16(0);
		}
		#line 1267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return ADV_USPCS(One, $extension_Int16_1179_i16)() << (ADV_UPCS(MinimalBitWidth)($this.$ref()) - Builtin::u8(1U));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getNextPow2($extension_Int16_1179_i16 const& $this ) -> const $extension_Int16_1179_i16
	{
		#line 1274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (($this <=> Builtin::i32(1)) <= 0) {
			#line 1275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return Builtin::i16(0);
		}
		#line 1278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		const Builtin::Auto<decltype($this - Builtin::i16(1))> p = $this - Builtin::i16(1); 
		#line 1279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return (ADV_USPCS(AllBitsSet, $extension_Int16_1179_i16)() >> ADV_UPCS(LeadingZeroCount)(p.$ref())) + Builtin::i16(1);
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getCheckedNextPow2($extension_Int16_1179_i16 const& $this ) -> const Builtin::Nullable<$extension_Int16_1179_i16>
	{
		#line 1286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (($this <=> Builtin::i32(1)) <= 0) {
			#line 1287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return Builtin::i16(0);
		}
		#line 1290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		const Builtin::Auto<decltype($this - Builtin::i16(1))> p = $this - Builtin::i16(1); 
		#line 1291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return ADV_UFCS(_operator_add_qst)((ADV_USPCS(AllBitsSet, $extension_Int16_1179_i16)() >> ADV_UPCS(LeadingZeroCount)(p.$ref())), Builtin::i16(1));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getWrappingNextPow2($extension_Int16_1179_i16 const& $this ) -> const $extension_Int16_1179_i16
	{
		#line 1298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (($this <=> Builtin::i32(1)) <= 0) {
			#line 1299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return Builtin::i16(0);
		}
		#line 1302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		const Builtin::Auto<decltype($this - Builtin::i16(1))> p = $this - Builtin::i16(1); 
		#line 1303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return ADV_UFCS(_operator_add_mod)((ADV_USPCS(AllBitsSet, $extension_Int16_1179_i16)() >> ADV_UPCS(LeadingZeroCount)(p.$ref())), Builtin::i16(1));
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	
} namespace $extensions { using namespace System;
#line 1340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto RotateLeft($extension_Int16_1307_i16 const& $this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename $extension_Int16_1307_i16
	{
		#line 1340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::BitsRotateLeft($this, shiftAmount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto RotateRight($extension_Int16_1307_i16 const& $this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename $extension_Int16_1307_i16
	{
		#line 1341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::BitsRotateRight($this, shiftAmount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto $static_getBitWidth<$extension_Int16_1307_i16>::get() -> const Builtin::u32
	{
		#line 1308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(16U)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getLeadingZeroCount($extension_Int16_1307_i16 const& $this ) -> const Builtin::u32
	{
		#line 1310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::LeadingZeroCount($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getLeadingOneCount($extension_Int16_1307_i16 const& $this ) -> const Builtin::u32
	{
		#line 1311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::LeadingZeroCount(ADV_UFCS(_operator_not)($this))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getPopCount($extension_Int16_1307_i16 const& $this ) -> const Builtin::u32
	{
		#line 1312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::PopCount($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getZeroCount($extension_Int16_1307_i16 const& $this ) -> const Builtin::u32
	{
		#line 1313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::PopCount(ADV_UFCS(_operator_not)($this))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getByteSwapped($extension_Int16_1307_i16 const& $this ) -> const $extension_Int16_1307_i16
	{
		#line 1314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i16>(Builtin::ByteSwap16(ADV_UFCS(NarrowToUInt16)($this.$ref())))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getBigEndian($extension_Int16_1307_i16 const& $this ) -> const $extension_Int16_1307_i16
	{
		#line 1317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if constexpr (Builtin::IsLittleEndian()) {
			#line 1318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return ADV_UPCS(ByteSwapped)($this.$ref());
		}
		#line 1320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return $this;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getLittleEndian($extension_Int16_1307_i16 const& $this ) -> const $extension_Int16_1307_i16
	{
		#line 1324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if constexpr (Builtin::IsBigEndian()) {
			#line 1325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return ADV_UPCS(ByteSwapped)($this.$ref());
		}
		#line 1327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return $this;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getReverseBits($extension_Int16_1307_i16 const& $this ) -> const $extension_Int16_1307_i16
	{
		#line 1329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::ReverseBits16($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getShortestBitLength($extension_Int16_1307_i16 const& $this ) -> const Builtin::u32
	{
		#line 1333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (($this <=> Builtin::i32(0)) >= 0) {
			#line 1334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return ADV_USPCS(BitWidth, $extension_Int16_1307_i16)() - ADV_UPCS(LeadingZeroCount)($this.$ref());
		}
		#line 1337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return ADV_USPCS(BitWidth, $extension_Int16_1307_i16)() + Builtin::u32(1U) - ADV_UPCS(LeadingOneCount)($this.$ref());
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	
} namespace $extensions { using namespace System;
#line 1353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto IsGreaterThanAsUnsigned($extension_Int16_1345_i16 const& $this LIFETIMEBOUND, $extension_Int16_1345_i16 rhs) noexcept -> const bool
	{
		#line 1353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY((ADV_UFCS(NarrowToUInt16)($this.$ref()) <=> ADV_UFCS(NarrowToUInt16)(rhs.$ref())) > 0); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto $static_getMaxDigitCount<$extension_Int16_1345_i16>::get() -> const Builtin::i32
	{
		#line 1346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(5)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto $static_getMaxHexDigitCount<$extension_Int16_1345_i16>::get() -> const Builtin::i32
	{
		#line 1347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(4)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto $static_getMaxValueDiv10<$extension_Int16_1345_i16>::get() -> const $extension_Int16_1345_i16
	{
		#line 1348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl)(ADV_USPCS(MaxValue, Builtin::i16)(), Builtin::i32(10))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getMultiplyBy10($extension_Int16_1345_i16 const& $this ) -> const $extension_Int16_1345_i16
	{
		#line 1350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_mod)($this, Builtin::i16(10))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getMultiplyBy16($extension_Int16_1345_i16 const& $this ) -> const $extension_Int16_1345_i16
	{
		#line 1351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_mod)($this, Builtin::i16(16))); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	

}