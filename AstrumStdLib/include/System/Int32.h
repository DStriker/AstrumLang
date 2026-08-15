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
namespace __Unsafe {} namespace __Int32$Protected__Unsafe {}
} namespace $extensions {
template<class __TT> struct $static_CheckedLog2;
template<class __TT> struct $static_getCheckedLog2;
template<class __TT> struct $static_IsNegative;
template<class __TT> struct $static_getIsNegative;
template<class __TT> struct $static_IsPositive;
template<class __TT> struct $static_getIsPositive;
template<class __TT> struct $static_Isqrt32;
template<class __TT> struct $static_getIsqrt32;
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
template<class __TT> struct $static_NarrowToUInt32;
template<class __TT> struct $static_getNarrowToUInt32;
template<class __TT> struct $static_TrailingZeroCount;
template<class __TT> struct $static_getTrailingZeroCount;
template<class __TT> struct $static_MaxValue;
template<class __TT> struct $static_getMaxValue;
template<class __TT> struct $static_CheckedIsqrt;
template<class __TT> struct $static_getCheckedIsqrt;
template<class __TT> struct $static_ByteSwapped;
template<class __TT> struct $static_getByteSwapped;
template<class __TT> struct $static_ByteSwap32;
template<class __TT> struct $static_getByteSwap32;
template<class __TT> struct $static_Log2;
template<class __TT> struct $static_getLog2;
template<class __TT> struct $static_One;
template<class __TT> struct $static_getOne;
template<class __TT> struct $static_IsLittleEndian;
template<class __TT> struct $static_getIsLittleEndian;
template<class __TT> struct $static_IsBigEndian;
template<class __TT> struct $static_getIsBigEndian;
template<class __TT> struct $static_ReverseBits32;
template<class __TT> struct $static_getReverseBits32;
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
#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
using Int32 = Builtin::i32;
//###############################################################################
//# Type definitions
//###############################################################################
	} namespace $extensions { using namespace System;
#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	using $extension_Int32_14_i32 = Builtin::i32;
	#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE(IMinMaxValue, IMinMaxValue);
	#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class __TT> struct $static_getMinValue; template<> struct $static_getMinValue<$extension_Int32_14_i32> { static inline constexpr auto get() -> const $extension_Int32_14_i32; };
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class __TT> struct $static_getMaxValue; template<> struct $static_getMaxValue<$extension_Int32_14_i32> { static inline constexpr auto get() -> const $extension_Int32_14_i32; };
	#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int32_14_i32, IMinMaxValue, IMinMaxValue, $extension_Int32_14_i32);
	} namespace System{
using $extensions::$static_getMinValue;
using $extensions::$static_getMaxValue;

		} namespace $extensions { using namespace System;
#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	using $extension_Int32_19_i32 = Builtin::i32;
	#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ASTRUMSTD_API auto _operator_eq_eq_mul($extension_Int32_19_i32 const& $this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool;
	#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto operator<=>($extension_Int32_19_i32 const& $this LIFETIMEBOUND, Builtin::Nullable<$extension_Int32_19_i32> rhs) noexcept -> const Builtin::i32;
	#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_gt($extension_Int32_19_i32 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_Int32_19_i32;
	#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_gt_eq($extension_Int32_19_i32 & $this , Builtin::i32 amount)  -> typename $extension_Int32_19_i32&;
	#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_lt_lt_bsl($extension_Int32_19_i32 const& $this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename $extension_Int32_19_i32;
	#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_lt_lt_bsl_eq($extension_Int32_19_i32 & $this , Builtin::u32 amount) noexcept -> typename $extension_Int32_19_i32&;
	#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_bsl($extension_Int32_19_i32 const& $this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename $extension_Int32_19_i32;
	#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_bsl_eq($extension_Int32_19_i32 & $this , Builtin::u32 amount) noexcept -> typename $extension_Int32_19_i32&;
	#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getHashCode($extension_Int32_19_i32 const& $this ) -> const Builtin::u64;
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
#line 72 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	using $extension_Int32_72_i32 = Builtin::i32;
	#line 72 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE(IAbstractComparable, IAbstractComparable);
	#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ASTRUMSTD_API auto _operator_lt_eq_gt_mul($extension_Int32_72_i32 const& $this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32;
	#line 72 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int32_72_i32, IAbstractComparable, IAbstractComparable, $extension_Int32_72_i32);
	} namespace System{
using $extensions::_operator_lt_eq_gt_mul;

		} namespace $extensions { using namespace System;
#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	using $extension_Int32_87_i32 = Builtin::i32;
	#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE(IConvertible, IConvertible);
	#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToBoolean($extension_Int32_87_i32 const& $this LIFETIMEBOUND) noexcept -> const bool;
	#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToInt8($extension_Int32_87_i32 const& $this LIFETIMEBOUND)  -> const Builtin::i8;
	#line 95 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToUInt8($extension_Int32_87_i32 const& $this LIFETIMEBOUND)  -> const Builtin::u8;
	#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToInt16($extension_Int32_87_i32 const& $this LIFETIMEBOUND)  -> const Builtin::i16;
	#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToUInt16($extension_Int32_87_i32 const& $this LIFETIMEBOUND)  -> const Builtin::u16;
	#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToInt32($extension_Int32_87_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i32;
	#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToUInt32($extension_Int32_87_i32 const& $this LIFETIMEBOUND)  -> const Builtin::u32;
	#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToInt64($extension_Int32_87_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i64;
	#line 121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToUInt64($extension_Int32_87_i32 const& $this LIFETIMEBOUND)  -> const Builtin::u64;
	#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToInt128($extension_Int32_87_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i128;
	#line 128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToUInt128($extension_Int32_87_i32 const& $this LIFETIMEBOUND)  -> const Builtin::u128;
	#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToIsize($extension_Int32_87_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::isize;
	#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToUsize($extension_Int32_87_i32 const& $this LIFETIMEBOUND)  -> const Builtin::usize;
	#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToFloat32($extension_Int32_87_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::f32;
	#line 142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToFloat64($extension_Int32_87_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::f64;
	#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToByte($extension_Int32_87_i32 const& $this LIFETIMEBOUND)  -> const Builtin::u8;
	#line 144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToChar($extension_Int32_87_i32 const& $this LIFETIMEBOUND)  -> const Builtin::char32;
	#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int32_87_i32, IConvertible, IConvertible, $extension_Int32_87_i32);
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
#line 154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	using $extension_Int32_154_i32 = Builtin::i32;
	#line 154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE(IDivisibleArithmetic, IDivisibleArithmetic);
	#line 156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_div_mod($extension_Int32_154_i32 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_Int32_154_i32, $extension_Int32_154_i32>;
	#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_div_not($extension_Int32_154_i32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int32_154_i32;
	#line 169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_div_not_eq($extension_Int32_154_i32 & $this , auto rhs)  -> typename $extension_Int32_154_i32&;
	#line 171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_div_lt($extension_Int32_154_i32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int32_154_i32;
	#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_div_lt_eq($extension_Int32_154_i32 & $this , auto rhs)  -> typename $extension_Int32_154_i32&;
	#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_div_gt($extension_Int32_154_i32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int32_154_i32;
	#line 201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_div_gt_eq($extension_Int32_154_i32 & $this , auto rhs)  -> typename $extension_Int32_154_i32&;
	#line 154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int32_154_i32, IDivisibleArithmetic, IDivisibleArithmetic, $extension_Int32_154_i32);
	} namespace System{
using $extensions::_operator_div_mod;
using $extensions::_operator_div_not;
using $extensions::_operator_div_not_eq;
using $extensions::_operator_div_lt;
using $extensions::_operator_div_lt_eq;
using $extensions::_operator_div_gt;
using $extensions::_operator_div_gt_eq;

		} namespace $extensions { using namespace System;
#line 204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	using $extension_Int32_204_i32 = Builtin::i32;
	#line 204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE(IIntegerDivisibleArithmetic, IIntegerDivisibleArithmetic);
	#line 206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl($extension_Int32_204_i32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int32_204_i32;
	#line 208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_eq($extension_Int32_204_i32 & $this , T rhs)  -> typename $extension_Int32_204_i32&;
	#line 213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl($extension_Int32_204_i32 const& $this LIFETIMEBOUND, T rhs)  -> const Builtin::Nullable<$extension_Int32_204_i32>;
	#line 204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int32_204_i32, IIntegerDivisibleArithmetic, IIntegerDivisibleArithmetic, $extension_Int32_204_i32);
	} namespace System{
using $extensions::_operator_bsl;
using $extensions::_operator_bsl_eq;
using $extensions::_operator_bsl_bsl;

		} namespace $extensions { using namespace System;
#line 224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	using $extension_Int32_224_i32 = Builtin::i32;
	#line 224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE(IIntegerPowerArithmetic, IIntegerPowerArithmetic);
	#line 227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor($extension_Int32_224_i32 const& $this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename $extension_Int32_224_i32;
	#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor_eq($extension_Int32_224_i32 & $this , Builtin::u32 exp)  -> typename $extension_Int32_224_i32&;
	#line 224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int32_224_i32, IIntegerPowerArithmetic, IIntegerPowerArithmetic, $extension_Int32_224_i32);
	} namespace System{
using $extensions::_operator_xor_xor;
using $extensions::_operator_xor_xor_eq;

		} namespace $extensions { using namespace System;
#line 262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	using $extension_Int32_262_i32 = Builtin::i32;
	#line 262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE(INumberBase, INumberBase);
	#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ASTRUMSTD_API auto MaxMagnitude($extension_Int32_262_i32 const& $this LIFETIMEBOUND, $extension_Int32_262_i32 rhs) noexcept -> const typename $extension_Int32_262_i32;
	#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline auto MaxMagnitudeNumber($extension_Int32_262_i32 const& $this LIFETIMEBOUND, $extension_Int32_262_i32 rhs) noexcept -> const typename $extension_Int32_262_i32;
	#line 317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ASTRUMSTD_API auto MinMagnitude($extension_Int32_262_i32 const& $this LIFETIMEBOUND, $extension_Int32_262_i32 rhs) noexcept -> const typename $extension_Int32_262_i32;
	#line 346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline auto MinMagnitudeNumber($extension_Int32_262_i32 const& $this LIFETIMEBOUND, $extension_Int32_262_i32 rhs) noexcept -> const typename $extension_Int32_262_i32;
	#line 348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ASTRUMSTD_API auto Parse($extension_Int32_262_i32 const& $this LIFETIMEBOUND, Builtin::Str input)  -> const typename $extension_Int32_262_i32;
	#line 353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ASTRUMSTD_API auto TryParse($extension_Int32_262_i32 const& $this LIFETIMEBOUND, Builtin::Str input) noexcept -> const Builtin::Nullable<$extension_Int32_262_i32>;
	#line 360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToInt8($extension_Int32_262_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i8;
	#line 361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToUInt8($extension_Int32_262_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u8;
	#line 362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToInt16($extension_Int32_262_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i16;
	#line 363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToUInt16($extension_Int32_262_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u16;
	#line 364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToInt32($extension_Int32_262_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i32;
	#line 365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToUInt32($extension_Int32_262_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u32;
	#line 366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToInt64($extension_Int32_262_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i64;
	#line 367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToUInt64($extension_Int32_262_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u64;
	#line 368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToInt128($extension_Int32_262_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i128;
	#line 369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToUInt128($extension_Int32_262_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u128;
	#line 370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToIsize($extension_Int32_262_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::isize;
	#line 371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToUsize($extension_Int32_262_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::usize;
	#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class __TT> struct $static_getOne; template<> struct $static_getOne<$extension_Int32_262_i32> { static inline constexpr auto get() -> const $extension_Int32_262_i32; };
	#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class __TT> struct $static_getZero; template<> struct $static_getZero<$extension_Int32_262_i32> { static inline constexpr auto get() -> const $extension_Int32_262_i32; };
	#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class __TT> struct $static_getRadix; template<> struct $static_getRadix<$extension_Int32_262_i32> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getAbs($extension_Int32_262_i32 const& $this ) -> const $extension_Int32_262_i32;
	#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsCanonical($extension_Int32_262_i32 const& $this ) -> const bool;
	#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsComplexNumber($extension_Int32_262_i32 const& $this ) -> const bool;
	#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsEvenInteger($extension_Int32_262_i32 const& $this ) -> const bool;
	#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsFinite($extension_Int32_262_i32 const& $this ) -> const bool;
	#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsImaginaryNumber($extension_Int32_262_i32 const& $this ) -> const bool;
	#line 273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsInfinity($extension_Int32_262_i32 const& $this ) -> const bool;
	#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsInteger($extension_Int32_262_i32 const& $this ) -> const bool;
	#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsNaN($extension_Int32_262_i32 const& $this ) -> const bool;
	#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsNegative($extension_Int32_262_i32 const& $this ) -> const bool;
	#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsNegativeInfinity($extension_Int32_262_i32 const& $this ) -> const bool;
	#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsNormal($extension_Int32_262_i32 const& $this ) -> const bool;
	#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsOddInteger($extension_Int32_262_i32 const& $this ) -> const bool;
	#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsPositive($extension_Int32_262_i32 const& $this ) -> const bool;
	#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsPositiveInfinity($extension_Int32_262_i32 const& $this ) -> const bool;
	#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsRealNumber($extension_Int32_262_i32 const& $this ) -> const bool;
	#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsSubnormal($extension_Int32_262_i32 const& $this ) -> const bool;
	#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsZero($extension_Int32_262_i32 const& $this ) -> const bool;
	#line 262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int32_262_i32, INumberBase, INumberBase, $extension_Int32_262_i32);
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
#line 374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	using $extension_Int32_374_i32 = Builtin::i32;
	#line 374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE(ISignedNumber, ISignedNumber);
	#line 375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class __TT> struct $static_getMinusOne; template<> struct $static_getMinusOne<$extension_Int32_374_i32> { static inline constexpr auto get() -> const $extension_Int32_374_i32; };
	#line 374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int32_374_i32, ISignedNumber, ISignedNumber, $extension_Int32_374_i32);
	} namespace System{
using $extensions::$static_getMinusOne;

		} namespace $extensions { using namespace System;
#line 378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	using $extension_Int32_378_i32 = Builtin::i32;
	#line 378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE(INumber, INumber);
	#line 381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ASTRUMSTD_API auto CopySign($extension_Int32_378_i32 const& $this LIFETIMEBOUND, $extension_Int32_378_i32 sign)  -> const typename $extension_Int32_378_i32;
	#line 399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto Max($extension_Int32_378_i32 const& $this LIFETIMEBOUND, $extension_Int32_378_i32 rhs) noexcept -> const typename $extension_Int32_378_i32;
	#line 400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto MaxNumber($extension_Int32_378_i32 const& $this LIFETIMEBOUND, $extension_Int32_378_i32 rhs) noexcept -> const typename $extension_Int32_378_i32;
	#line 401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto Min($extension_Int32_378_i32 const& $this LIFETIMEBOUND, $extension_Int32_378_i32 rhs) noexcept -> const typename $extension_Int32_378_i32;
	#line 402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto MinNumber($extension_Int32_378_i32 const& $this LIFETIMEBOUND, $extension_Int32_378_i32 rhs) noexcept -> const typename $extension_Int32_378_i32;
	#line 403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto Clamp($extension_Int32_378_i32 const& $this LIFETIMEBOUND, $extension_Int32_378_i32 min, $extension_Int32_378_i32 max)  -> const typename $extension_Int32_378_i32;
	#line 379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getSign($extension_Int32_378_i32 const& $this ) -> const Builtin::i32;
	#line 378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int32_378_i32, INumber, INumber, $extension_Int32_378_i32);
	} namespace System{
using $extensions::CopySign;
using $extensions::Max;
using $extensions::MaxNumber;
using $extensions::Min;
using $extensions::MinNumber;
using $extensions::Clamp;
using $extensions::getSign;

		} namespace $extensions { using namespace System;
#line 406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	using $extension_Int32_406_i32 = Builtin::i32;
	#line 406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE(IBinaryNumber, IBinaryNumber);
	#line 465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto CheckedLog($extension_Int32_406_i32 const& $this LIFETIMEBOUND, $extension_Int32_406_i32 base) noexcept -> const Builtin::Nullable<$extension_Int32_406_i32>;
	#line 498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ASTRUMSTD_API auto Log($extension_Int32_406_i32 const& $this LIFETIMEBOUND, $extension_Int32_406_i32 base)  -> const typename $extension_Int32_406_i32;
	#line 508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto Midpoint($extension_Int32_406_i32 const& $this LIFETIMEBOUND, $extension_Int32_406_i32 rhs) noexcept -> const typename $extension_Int32_406_i32;
	#line 516 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto IsMultipleOf($extension_Int32_406_i32 const& $this LIFETIMEBOUND, $extension_Int32_406_i32 rhs) noexcept -> const bool;
	#line 408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class __TT> struct $static_getAllBitsSet; template<> struct $static_getAllBitsSet<$extension_Int32_406_i32> { static inline constexpr auto get() -> const $extension_Int32_406_i32; };
	#line 411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsPow2($extension_Int32_406_i32 const& $this ) -> const bool;
	#line 415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getCheckedLog2($extension_Int32_406_i32 const& $this ) -> const Builtin::Nullable<$extension_Int32_406_i32>;
	#line 425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getLog2($extension_Int32_406_i32 const& $this ) -> const $extension_Int32_406_i32;
	#line 435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getCheckedLog10($extension_Int32_406_i32 const& $this ) -> const Builtin::Nullable<$extension_Int32_406_i32>;
	#line 455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getLog10($extension_Int32_406_i32 const& $this ) -> const $extension_Int32_406_i32;
	#line 406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int32_406_i32, IBinaryNumber, IBinaryNumber, $extension_Int32_406_i32);
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
#line 530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	using $extension_Int32_530_i32 = Builtin::i32;
	#line 530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE(ICheckedArithmetic, ICheckedArithmetic);
	#line 533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_add_qst($extension_Int32_530_i32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int32_530_i32>;
	#line 542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_add_qst_eq($extension_Int32_530_i32 & $this , T rhs) noexcept -> typename $extension_Int32_530_i32&;
	#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_add_ne($extension_Int32_530_i32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int32_530_i32;
	#line 560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_add_ne_eq($extension_Int32_530_i32 & $this , T rhs)  -> typename $extension_Int32_530_i32&;
	#line 564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_add_mod($extension_Int32_530_i32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int32_530_i32;
	#line 571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_add_mod_eq($extension_Int32_530_i32 & $this , T rhs) noexcept -> typename $extension_Int32_530_i32&;
	#line 575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_add_or($extension_Int32_530_i32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int32_530_i32;
	#line 582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_add_or_eq($extension_Int32_530_i32 & $this , T rhs) noexcept -> typename $extension_Int32_530_i32&;
	#line 586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_add_mod_qst($extension_Int32_530_i32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_Int32_530_i32, bool>;
	#line 594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_qst($extension_Int32_530_i32 & $this )  -> typename $extension_Int32_530_i32&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_qst_postfix($extension_Int32_530_i32 & $this)  -> decltype(auto);
	#line 597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_ne($extension_Int32_530_i32 & $this )  -> typename $extension_Int32_530_i32&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_ne_postfix($extension_Int32_530_i32 & $this)  -> decltype(auto);
	#line 600 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_mod($extension_Int32_530_i32 & $this )  -> typename $extension_Int32_530_i32&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_mod_postfix($extension_Int32_530_i32 & $this)  -> decltype(auto);
	#line 603 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_or($extension_Int32_530_i32 & $this )  -> typename $extension_Int32_530_i32&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_or_postfix($extension_Int32_530_i32 & $this)  -> decltype(auto);
	#line 607 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto CarryingAdd($extension_Int32_530_i32 const& $this LIFETIMEBOUND, $extension_Int32_530_i32 rhs, bool carry) noexcept -> const std::tuple<$extension_Int32_530_i32, bool>;
	#line 616 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto BorrowingSub($extension_Int32_530_i32 const& $this LIFETIMEBOUND, $extension_Int32_530_i32 rhs, bool carry) noexcept -> const std::tuple<$extension_Int32_530_i32, bool>;
	#line 625 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_sub_qst($extension_Int32_530_i32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int32_530_i32>;
	#line 634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_sub_qst_eq($extension_Int32_530_i32 & $this , T rhs) noexcept -> typename $extension_Int32_530_i32&;
	#line 645 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_sub_ne($extension_Int32_530_i32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int32_530_i32;
	#line 652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_sub_ne_eq($extension_Int32_530_i32 & $this , T rhs)  -> typename $extension_Int32_530_i32&;
	#line 656 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_sub_mod($extension_Int32_530_i32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int32_530_i32;
	#line 663 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_sub_mod_eq($extension_Int32_530_i32 & $this , T rhs) noexcept -> typename $extension_Int32_530_i32&;
	#line 667 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_sub_or($extension_Int32_530_i32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int32_530_i32;
	#line 674 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_sub_or_eq($extension_Int32_530_i32 & $this , T rhs) noexcept -> typename $extension_Int32_530_i32&;
	#line 678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_sub_mod_qst($extension_Int32_530_i32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_Int32_530_i32, bool>;
	#line 686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_qst($extension_Int32_530_i32 & $this )  -> typename $extension_Int32_530_i32&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_qst_postfix($extension_Int32_530_i32 & $this)  -> decltype(auto);
	#line 689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_ne($extension_Int32_530_i32 & $this )  -> typename $extension_Int32_530_i32&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_ne_postfix($extension_Int32_530_i32 & $this)  -> decltype(auto);
	#line 692 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_mod($extension_Int32_530_i32 & $this )  -> typename $extension_Int32_530_i32&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_mod_postfix($extension_Int32_530_i32 & $this)  -> decltype(auto);
	#line 695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_or($extension_Int32_530_i32 & $this )  -> typename $extension_Int32_530_i32&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_or_postfix($extension_Int32_530_i32 & $this)  -> decltype(auto);
	#line 699 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mul_qst($extension_Int32_530_i32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int32_530_i32>;
	#line 708 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mul_qst_eq($extension_Int32_530_i32 & $this , T rhs) noexcept -> typename $extension_Int32_530_i32&;
	#line 719 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mul_ne($extension_Int32_530_i32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int32_530_i32;
	#line 726 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mul_ne_eq($extension_Int32_530_i32 & $this , T rhs)  -> typename $extension_Int32_530_i32&;
	#line 730 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mul_mod($extension_Int32_530_i32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int32_530_i32;
	#line 737 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mul_mod_eq($extension_Int32_530_i32 & $this , T rhs) noexcept -> typename $extension_Int32_530_i32&;
	#line 741 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mul_or($extension_Int32_530_i32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int32_530_i32;
	#line 748 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mul_or_eq($extension_Int32_530_i32 & $this , T rhs) noexcept -> typename $extension_Int32_530_i32&;
	#line 752 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mul_mod_qst($extension_Int32_530_i32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_Int32_530_i32, bool>;
	#line 761 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_mul_gt($extension_Int32_530_i32 const& $this LIFETIMEBOUND, $extension_Int32_530_i32 rhs) noexcept -> const std::tuple<Builtin::u32, Builtin::i32>;
	#line 770 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto CarryingMul($extension_Int32_530_i32 const& $this LIFETIMEBOUND, $extension_Int32_530_i32 rhs, $extension_Int32_530_i32 carry) noexcept -> const std::tuple<Builtin::u32, Builtin::i32>;
	#line 778 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_qst($extension_Int32_530_i32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int32_530_i32>;
	#line 787 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_qst_eq($extension_Int32_530_i32 & $this , T rhs) noexcept -> typename $extension_Int32_530_i32&;
	#line 799 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_ne($extension_Int32_530_i32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int32_530_i32;
	#line 806 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_ne_eq($extension_Int32_530_i32 & $this , T rhs)  -> typename $extension_Int32_530_i32&;
	#line 811 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_mod($extension_Int32_530_i32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int32_530_i32;
	#line 818 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_eq($extension_Int32_530_i32 & $this , T rhs)  -> typename $extension_Int32_530_i32&;
	#line 823 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_or($extension_Int32_530_i32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int32_530_i32;
	#line 830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_or_eq($extension_Int32_530_i32 & $this , T rhs)  -> typename $extension_Int32_530_i32&;
	#line 835 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_qst($extension_Int32_530_i32 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_Int32_530_i32, bool>;
	#line 844 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst($extension_Int32_530_i32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int32_530_i32>;
	#line 854 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst_eq($extension_Int32_530_i32 & $this , T rhs) noexcept -> typename $extension_Int32_530_i32&;
	#line 865 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mod_qst($extension_Int32_530_i32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int32_530_i32>;
	#line 874 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mod_qst_eq($extension_Int32_530_i32 & $this , T rhs) noexcept -> typename $extension_Int32_530_i32&;
	#line 886 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mod_ne($extension_Int32_530_i32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int32_530_i32;
	#line 893 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mod_ne_eq($extension_Int32_530_i32 & $this , T rhs)  -> typename $extension_Int32_530_i32&;
	#line 898 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mod_mod($extension_Int32_530_i32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int32_530_i32;
	#line 905 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mod_mod_eq($extension_Int32_530_i32 & $this , T rhs)  -> typename $extension_Int32_530_i32&;
	#line 910 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mod_mod_qst($extension_Int32_530_i32 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_Int32_530_i32, bool>;
	#line 919 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_sub_qst($extension_Int32_530_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::Nullable<$extension_Int32_530_i32>;
	#line 929 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_sub_ne($extension_Int32_530_i32 const& $this LIFETIMEBOUND)  -> const typename $extension_Int32_530_i32;
	#line 936 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_sub_mod($extension_Int32_530_i32 const& $this LIFETIMEBOUND)  -> const typename $extension_Int32_530_i32;
	#line 944 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_sub_or($extension_Int32_530_i32 const& $this LIFETIMEBOUND)  -> const typename $extension_Int32_530_i32;
	#line 952 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_sub_mod_qst($extension_Int32_530_i32 const& $this LIFETIMEBOUND)  -> const std::tuple<$extension_Int32_530_i32, bool>;
	#line 960 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_lt_lt_qst($extension_Int32_530_i32 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<$extension_Int32_530_i32>;
	#line 968 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_lt_lt_qst_eq($extension_Int32_530_i32 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int32_530_i32&;
	#line 976 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_lt_lt_ne($extension_Int32_530_i32 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_Int32_530_i32;
	#line 984 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_lt_lt_ne_eq($extension_Int32_530_i32 & $this , Builtin::i32 amount)  -> typename $extension_Int32_530_i32&;
	#line 986 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_lt_lt_mod($extension_Int32_530_i32 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename $extension_Int32_530_i32;
	#line 989 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_lt_lt_mod_eq($extension_Int32_530_i32 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int32_530_i32&;
	#line 991 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_lt_lt_mod_qst($extension_Int32_530_i32 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<$extension_Int32_530_i32, bool>;
	#line 994 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_qst($extension_Int32_530_i32 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<$extension_Int32_530_i32>;
	#line 1002 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_qst_eq($extension_Int32_530_i32 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int32_530_i32&;
	#line 1010 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_ne($extension_Int32_530_i32 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_Int32_530_i32;
	#line 1018 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_ne_eq($extension_Int32_530_i32 & $this , Builtin::i32 amount)  -> typename $extension_Int32_530_i32&;
	#line 1020 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_mod($extension_Int32_530_i32 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename $extension_Int32_530_i32;
	#line 1023 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_mod_eq($extension_Int32_530_i32 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int32_530_i32&;
	#line 1025 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_mod_qst($extension_Int32_530_i32 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<$extension_Int32_530_i32, bool>;
	#line 1030 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor_qst($extension_Int32_530_i32 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const Builtin::Nullable<$extension_Int32_530_i32>;
	#line 1059 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor_qst_eq($extension_Int32_530_i32 & $this , Builtin::u32 exp) noexcept -> typename $extension_Int32_530_i32&;
	#line 1067 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor_ne($extension_Int32_530_i32 const& $this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename $extension_Int32_530_i32;
	#line 1088 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor_ne_eq($extension_Int32_530_i32 & $this , Builtin::u32 exp)  -> typename $extension_Int32_530_i32&;
	#line 1090 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor_mod($extension_Int32_530_i32 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename $extension_Int32_530_i32;
	#line 1122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor_mod_eq($extension_Int32_530_i32 & $this , Builtin::u32 exp) noexcept -> typename $extension_Int32_530_i32&;
	#line 1124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor_or($extension_Int32_530_i32 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename $extension_Int32_530_i32;
	#line 1133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor_or_eq($extension_Int32_530_i32 & $this , Builtin::u32 exp) noexcept -> typename $extension_Int32_530_i32&;
	#line 1135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor_mod_qst($extension_Int32_530_i32 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const std::tuple<$extension_Int32_530_i32, bool>;
	#line 1166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getCheckedAbs($extension_Int32_530_i32 const& $this ) -> const Builtin::Nullable<$extension_Int32_530_i32>;
	#line 1169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getStrictAbs($extension_Int32_530_i32 const& $this ) -> const $extension_Int32_530_i32;
	#line 1172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getWrappingAbs($extension_Int32_530_i32 const& $this ) -> const $extension_Int32_530_i32;
	#line 1175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getSaturatingAbs($extension_Int32_530_i32 const& $this ) -> const $extension_Int32_530_i32;
	#line 1178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getOverflowingAbs($extension_Int32_530_i32 const& $this ) -> const std::tuple<$extension_Int32_530_i32, bool>;
	#line 530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int32_530_i32, ICheckedArithmetic, ICheckedArithmetic, $extension_Int32_530_i32);
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
#line 1187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	using $extension_Int32_1187_i32 = Builtin::i32;
	#line 1187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE(IBinaryInteger, IBinaryInteger);
	#line 1232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NextMultipleOf($extension_Int32_1187_i32 const& $this LIFETIMEBOUND, $extension_Int32_1187_i32 rhs)  -> const typename $extension_Int32_1187_i32;
	#line 1248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto CheckedNextMultipleOf($extension_Int32_1187_i32 const& $this LIFETIMEBOUND, $extension_Int32_1187_i32 rhs) noexcept -> const Builtin::Nullable<$extension_Int32_1187_i32>;
	#line 1188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class __TT> struct $static_getIsSigned; template<> struct $static_getIsSigned<$extension_Int32_1187_i32> { static inline constexpr auto get() -> const bool; };
	#line 1190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getTrailingZeroCount($extension_Int32_1187_i32 const& $this ) -> const Builtin::u32;
	#line 1191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getTrailingOneCount($extension_Int32_1187_i32 const& $this ) -> const Builtin::u32;
	#line 1192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getByteCount($extension_Int32_1187_i32 const& $this ) -> const Builtin::u32;
	#line 1193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getMinimalBitWidth($extension_Int32_1187_i32 const& $this ) -> const Builtin::u32;
	#line 1197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ASTRUMSTD_API auto getCheckedIsqrt($extension_Int32_1187_i32 const& $this ) -> const Builtin::Nullable<$extension_Int32_1187_i32>;
	#line 1209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline auto getIsqrt($extension_Int32_1187_i32 const& $this ) -> const $extension_Int32_1187_i32;
	#line 1218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getLog2Ceiling($extension_Int32_1187_i32 const& $this ) -> const $extension_Int32_1187_i32;
	#line 1269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getPrevPow2($extension_Int32_1187_i32 const& $this ) -> const $extension_Int32_1187_i32;
	#line 1280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getNextPow2($extension_Int32_1187_i32 const& $this ) -> const $extension_Int32_1187_i32;
	#line 1292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getCheckedNextPow2($extension_Int32_1187_i32 const& $this ) -> const Builtin::Nullable<$extension_Int32_1187_i32>;
	#line 1304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getWrappingNextPow2($extension_Int32_1187_i32 const& $this ) -> const $extension_Int32_1187_i32;
	#line 1187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int32_1187_i32, IBinaryInteger, IBinaryInteger, $extension_Int32_1187_i32);
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
#line 1315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	using $extension_Int32_1315_i32 = Builtin::i32;
	#line 1315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE(IFixedWidthInteger, IFixedWidthInteger);
	#line 1348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto RotateLeft($extension_Int32_1315_i32 const& $this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename $extension_Int32_1315_i32;
	#line 1349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto RotateRight($extension_Int32_1315_i32 const& $this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename $extension_Int32_1315_i32;
	#line 1316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class __TT> struct $static_getBitWidth; template<> struct $static_getBitWidth<$extension_Int32_1315_i32> { static inline constexpr auto get() -> const Builtin::u32; };
	#line 1318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getLeadingZeroCount($extension_Int32_1315_i32 const& $this ) -> const Builtin::u32;
	#line 1319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getLeadingOneCount($extension_Int32_1315_i32 const& $this ) -> const Builtin::u32;
	#line 1320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getPopCount($extension_Int32_1315_i32 const& $this ) -> const Builtin::u32;
	#line 1321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getZeroCount($extension_Int32_1315_i32 const& $this ) -> const Builtin::u32;
	#line 1322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getByteSwapped($extension_Int32_1315_i32 const& $this ) -> const $extension_Int32_1315_i32;
	#line 1323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getBigEndian($extension_Int32_1315_i32 const& $this ) -> const $extension_Int32_1315_i32;
	#line 1330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getLittleEndian($extension_Int32_1315_i32 const& $this ) -> const $extension_Int32_1315_i32;
	#line 1337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getReverseBits($extension_Int32_1315_i32 const& $this ) -> const $extension_Int32_1315_i32;
	#line 1339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getShortestBitLength($extension_Int32_1315_i32 const& $this ) -> const Builtin::u32;
	#line 1315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int32_1315_i32, IFixedWidthInteger, IFixedWidthInteger, $extension_Int32_1315_i32);
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
#line 1353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	using $extension_Int32_1353_i32 = Builtin::i32;
	#line 1353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE(IBinaryIntegerFormatInfo, IBinaryIntegerFormatInfo);
	#line 1361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto IsGreaterThanAsUnsigned($extension_Int32_1353_i32 const& $this LIFETIMEBOUND, $extension_Int32_1353_i32 rhs) noexcept -> const bool;
	#line 1354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class __TT> struct $static_getMaxDigitCount; template<> struct $static_getMaxDigitCount<$extension_Int32_1353_i32> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class __TT> struct $static_getMaxHexDigitCount; template<> struct $static_getMaxHexDigitCount<$extension_Int32_1353_i32> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class __TT> struct $static_getMaxValueDiv10; template<> struct $static_getMaxValueDiv10<$extension_Int32_1353_i32> { static inline constexpr auto get() -> const $extension_Int32_1353_i32; };
	#line 1358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getMultiplyBy10($extension_Int32_1353_i32 const& $this ) -> const $extension_Int32_1353_i32;
	#line 1359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getMultiplyBy16($extension_Int32_1353_i32 const& $this ) -> const $extension_Int32_1353_i32;
	#line 1353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int32_1353_i32, IBinaryIntegerFormatInfo, IBinaryIntegerFormatInfo, $extension_Int32_1353_i32);
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
#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto $static_getMinValue<$extension_Int32_14_i32>::get() -> const $extension_Int32_14_i32
	{
		#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(-2147483648)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto $static_getMaxValue<$extension_Int32_14_i32>::get() -> const $extension_Int32_14_i32
	{
		#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(+Builtin::i32(2147483647)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	
} namespace $extensions { using namespace System;
#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto operator<=>($extension_Int32_19_i32 const& $this LIFETIMEBOUND, Builtin::Nullable<$extension_Int32_19_i32> rhs) noexcept -> const Builtin::i32
	{
		#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		{
			#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			if ((!Builtin::Is(rhs, nullptr))) {
				#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				auto __tmp0 = *rhs; const auto& rhs = __tmp0;
				
				#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				return $this <=> rhs;
			}
		}
		#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return Builtin::i32(1);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_gt($extension_Int32_19_i32 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_Int32_19_i32
	{
		#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i32>(UnsafeCast<Builtin::u32>($this) >> amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_gt_eq($extension_Int32_19_i32 & $this , Builtin::i32 amount)  -> typename $extension_Int32_19_i32&
	{
		#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_gt_gt_gt)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_lt_lt_bsl($extension_Int32_19_i32 const& $this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename $extension_Int32_19_i32
	{
		#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if ((amount <=> ADV_USPCS(BitWidth, $extension_Int32_19_i32)()) >= 0) {
			#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return Builtin::i32(0);
		}
		#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return Builtin::UncheckedShiftLeft($this, Builtin::Cast<true, Builtin::i32>(amount));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_lt_lt_bsl_eq($extension_Int32_19_i32 & $this , Builtin::u32 amount) noexcept -> typename $extension_Int32_19_i32&
	{
		#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_lt_lt_bsl)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_bsl($extension_Int32_19_i32 const& $this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename $extension_Int32_19_i32
	{
		#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if ((amount <=> ADV_USPCS(BitWidth, $extension_Int32_19_i32)()) >= 0) {
			#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return ADV_UPCS(IsPositive)($this.$ref()) ? Builtin::i32(0) : Builtin::i32(-1);
		}
		#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return Builtin::UncheckedShiftRight($this, Builtin::Cast<true, Builtin::i32>(amount));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_bsl_eq($extension_Int32_19_i32 & $this , Builtin::u32 amount) noexcept -> typename $extension_Int32_19_i32&
	{
		#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_gt_gt_bsl)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getHashCode($extension_Int32_19_i32 const& $this ) -> const Builtin::u64
	{
		#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u64>($this)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	
} namespace $extensions { using namespace System;
#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToBoolean($extension_Int32_87_i32 const& $this LIFETIMEBOUND) noexcept -> const bool
	{
		#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this != Builtin::i32(0)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToInt8($extension_Int32_87_i32 const& $this LIFETIMEBOUND)  -> const Builtin::i8
	{
		#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (($this <=> Builtin::i32(0x7F)) > 0 || ($this <=> (Builtin::i32(-0x80))) < 0) {
			#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return Builtin::Cast<true, Builtin::i8>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 95 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToUInt8($extension_Int32_87_i32 const& $this LIFETIMEBOUND)  -> const Builtin::u8
	{
		#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (($this <=> Builtin::i32(0)) < 0 || ($this <=> Builtin::i32(0xFF)) > 0) {
			#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 99 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return Builtin::Cast<true, Builtin::u8>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToInt16($extension_Int32_87_i32 const& $this LIFETIMEBOUND)  -> const Builtin::i16
	{
		#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (($this <=> Builtin::i32(0x7FFF)) > 0 || ($this <=> (Builtin::i32(-0x8000))) < 0) {
			#line 103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return Builtin::Cast<true, Builtin::i16>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToUInt16($extension_Int32_87_i32 const& $this LIFETIMEBOUND)  -> const Builtin::u16
	{
		#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (($this <=> Builtin::i32(0)) < 0 || ($this <=> Builtin::i32(0xFFFF)) > 0) {
			#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return Builtin::Cast<true, Builtin::u16>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToInt32($extension_Int32_87_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i32
	{
		#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToUInt32($extension_Int32_87_i32 const& $this LIFETIMEBOUND)  -> const Builtin::u32
	{
		#line 115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (($this <=> Builtin::i32(0)) < 0) {
			#line 116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return Builtin::Cast<true, Builtin::u32>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToInt64($extension_Int32_87_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i64
	{
		#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToUInt64($extension_Int32_87_i32 const& $this LIFETIMEBOUND)  -> const Builtin::u64
	{
		#line 122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (($this <=> Builtin::i32(0)) < 0) {
			#line 123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return Builtin::Cast<true, Builtin::u64>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToInt128($extension_Int32_87_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i128
	{
		#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToUInt128($extension_Int32_87_i32 const& $this LIFETIMEBOUND)  -> const Builtin::u128
	{
		#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (($this <=> Builtin::i32(0)) < 0) {
			#line 130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return Builtin::Cast<true, Builtin::u128>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToIsize($extension_Int32_87_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::isize
	{
		#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToUsize($extension_Int32_87_i32 const& $this LIFETIMEBOUND)  -> const Builtin::usize
	{
		#line 136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (($this <=> Builtin::i32(0)) < 0) {
			#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return Builtin::Cast<true, Builtin::usize>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToFloat32($extension_Int32_87_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::f32
	{
		#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToFloat64($extension_Int32_87_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::f64
	{
		#line 142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToByte($extension_Int32_87_i32 const& $this LIFETIMEBOUND)  -> const Builtin::u8
	{
		#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(ToUInt8)($this.$ref())); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToChar($extension_Int32_87_i32 const& $this LIFETIMEBOUND)  -> const Builtin::char32
	{
		#line 145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (($this <=> Builtin::i32(0)) < 0) {
			#line 146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return Builtin::Cast<true, Builtin::char32>($this);
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	
} namespace $extensions { using namespace System;
#line 156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_div_mod($extension_Int32_154_i32 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_Int32_154_i32, $extension_Int32_154_i32>
	{
		#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator /% implemented only for integer types");
		#line 159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return std::make_tuple(ADV_UFCS(_operator_bsl)($this, rhs), $this % rhs);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_div_not($extension_Int32_154_i32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int32_154_i32
	{
		#line 164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Auto<decltype($this)> result = $this; 
		#line 165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		result /= rhs;
		#line 166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_div_not_eq($extension_Int32_154_i32 & $this , auto rhs)  -> typename $extension_Int32_154_i32&
	{
		#line 169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this /= rhs); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_div_lt($extension_Int32_154_i32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int32_154_i32
	{
		#line 173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if constexpr (Builtin::TypeIs<T, IBinaryInteger>()) {
			#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			const auto& [div, rem] = ADV_UFCS(_operator_div_mod)($this, rhs);
			#line 175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			if (rem == Builtin::i32(0)) {
				#line 176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				return div;
			}
			#line 178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			Builtin::Auto<decltype(($this ^ rhs) >> (ADV_USPCS(BitWidth, $extension_Int32_154_i32)() - Builtin::i32(1)))> correction = ($this ^ rhs) >> (ADV_USPCS(BitWidth, $extension_Int32_154_i32)() - Builtin::i32(1)); 
			#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return div + correction;
		} else {
			#line 180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			{
				#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				return Builtin::Cast<true, $extension_Int32_154_i32>((ADV_UFCS(_operator_div_lt)(Builtin::f64{$this}, rhs)));
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_div_lt_eq($extension_Int32_154_i32 & $this , auto rhs)  -> typename $extension_Int32_154_i32&
	{
		#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this = $extension_Int32_154_i32{ADV_UFCS(_operator_div_lt)($this, rhs)}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_div_gt($extension_Int32_154_i32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int32_154_i32
	{
		#line 189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if constexpr (Builtin::TypeIs<T, IBinaryInteger>()) {
			#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			const auto& [div, rem] = ADV_UFCS(_operator_div_mod)($this, rhs);
			#line 191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			if (rem == Builtin::i32(0)) {
				#line 192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				return div;
			}
			#line 194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			Builtin::Auto<decltype(Builtin::i32(1) + (($this ^ rhs) >> (ADV_USPCS(BitWidth, $extension_Int32_154_i32)() - Builtin::i32(1))))> correction = Builtin::i32(1) + (($this ^ rhs) >> (ADV_USPCS(BitWidth, $extension_Int32_154_i32)() - Builtin::i32(1))); 
			#line 195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return div + correction;
		} else {
			#line 196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			{
				#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				return Builtin::Cast<true, $extension_Int32_154_i32>((ADV_UFCS(_operator_div_gt)(Builtin::f64{$this}, rhs)));
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_div_gt_eq($extension_Int32_154_i32 & $this , auto rhs)  -> typename $extension_Int32_154_i32&
	{
		#line 201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this = $extension_Int32_154_i32{ADV_UFCS(_operator_div_gt)($this, rhs)}); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	
} namespace $extensions { using namespace System;
#line 206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl($extension_Int32_204_i32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int32_204_i32
	{
		#line 206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Div)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_eq($extension_Int32_204_i32 & $this , T rhs)  -> typename $extension_Int32_204_i32&
	{
		#line 208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(DivAssign)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl($extension_Int32_204_i32 const& $this LIFETIMEBOUND, T rhs)  -> const Builtin::Nullable<$extension_Int32_204_i32>
	{
		#line 215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\? implemented only for integer types");
		#line 216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_204_i32 result{}; 
		#line 217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (Builtin::DivExact($this, rhs, result)) {
			#line 218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return result;
		}
		#line 220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return nullptr;
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	
} namespace $extensions { using namespace System;
#line 227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor($extension_Int32_224_i32 const& $this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename $extension_Int32_224_i32
	{
		#line 229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return Builtin::i32(1);
		}
		#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Auto<decltype(Builtin::i32(1))> result = Builtin::i32(1); 
		#line 237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (std::is_constant_evaluated()) {
			#line 238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			while ((exp <=> Builtin::i32(1)) > 0) 
			{
				#line 239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
					#line 240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
					result *= base;
				}
				#line 242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
				#line 243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				base *= base;
			}
			#line 245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return result * base;
		} else {
			#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			{
				#line 247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				for (;;) 
				{
					#line 248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
					if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
						#line 249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
						result *= base;
						#line 250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
						if (exp == Builtin::i32(1)) {
							#line 251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
							return result;
						}
					}
					#line 253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
					ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
					#line 254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
					base *= base;
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor_eq($extension_Int32_224_i32 & $this , Builtin::u32 exp)  -> typename $extension_Int32_224_i32&
	{
		#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_xor_xor)($this, exp)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	
} namespace $extensions { using namespace System;
#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline auto MaxMagnitudeNumber($extension_Int32_262_i32 const& $this LIFETIMEBOUND, $extension_Int32_262_i32 rhs) noexcept -> const typename $extension_Int32_262_i32
	{
		#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(MaxMagnitude)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline auto MinMagnitudeNumber($extension_Int32_262_i32 const& $this LIFETIMEBOUND, $extension_Int32_262_i32 rhs) noexcept -> const typename $extension_Int32_262_i32
	{
		#line 346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(MinMagnitude)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToInt8($extension_Int32_262_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i8
	{
		#line 360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i8>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToUInt8($extension_Int32_262_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u8
	{
		#line 361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u8>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToInt16($extension_Int32_262_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i16
	{
		#line 362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i16>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToUInt16($extension_Int32_262_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u16
	{
		#line 363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u16>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToInt32($extension_Int32_262_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i32
	{
		#line 364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToUInt32($extension_Int32_262_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u32
	{
		#line 365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u32>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToInt64($extension_Int32_262_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i64
	{
		#line 366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToUInt64($extension_Int32_262_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u64
	{
		#line 367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u64>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToInt128($extension_Int32_262_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i128
	{
		#line 368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToUInt128($extension_Int32_262_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u128
	{
		#line 369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u128>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToIsize($extension_Int32_262_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::isize
	{
		#line 370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToUsize($extension_Int32_262_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::usize
	{
		#line 371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::usize>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto $static_getOne<$extension_Int32_262_i32>::get() -> const $extension_Int32_262_i32
	{
		#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(1)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto $static_getZero<$extension_Int32_262_i32>::get() -> const $extension_Int32_262_i32
	{
		#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(0)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto $static_getRadix<$extension_Int32_262_i32>::get() -> const Builtin::i32
	{
		#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(2)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getAbs($extension_Int32_262_i32 const& $this ) -> const $extension_Int32_262_i32
	{
		#line 267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)($this.$ref()) ? -$this : $this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsCanonical($extension_Int32_262_i32 const& $this ) -> const bool
	{
		#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsComplexNumber($extension_Int32_262_i32 const& $this ) -> const bool
	{
		#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsEvenInteger($extension_Int32_262_i32 const& $this ) -> const bool
	{
		#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(($this & Builtin::i32(1)) == Builtin::i32(0)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsFinite($extension_Int32_262_i32 const& $this ) -> const bool
	{
		#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsImaginaryNumber($extension_Int32_262_i32 const& $this ) -> const bool
	{
		#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsInfinity($extension_Int32_262_i32 const& $this ) -> const bool
	{
		#line 273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsInteger($extension_Int32_262_i32 const& $this ) -> const bool
	{
		#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsNaN($extension_Int32_262_i32 const& $this ) -> const bool
	{
		#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsNegative($extension_Int32_262_i32 const& $this ) -> const bool
	{
		#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(($this <=> Builtin::i32(0)) < 0); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsNegativeInfinity($extension_Int32_262_i32 const& $this ) -> const bool
	{
		#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsNormal($extension_Int32_262_i32 const& $this ) -> const bool
	{
		#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this != Builtin::i32(0)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsOddInteger($extension_Int32_262_i32 const& $this ) -> const bool
	{
		#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(($this & Builtin::i32(1)) != Builtin::i32(0)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsPositive($extension_Int32_262_i32 const& $this ) -> const bool
	{
		#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(($this <=> Builtin::i32(0)) >= 0); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsPositiveInfinity($extension_Int32_262_i32 const& $this ) -> const bool
	{
		#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsRealNumber($extension_Int32_262_i32 const& $this ) -> const bool
	{
		#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsSubnormal($extension_Int32_262_i32 const& $this ) -> const bool
	{
		#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsZero($extension_Int32_262_i32 const& $this ) -> const bool
	{
		#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this == Builtin::i32(0)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	
} namespace $extensions { using namespace System;
#line 375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto $static_getMinusOne<$extension_Int32_374_i32>::get() -> const $extension_Int32_374_i32
	{
		#line 375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(-1)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	
} namespace $extensions { using namespace System;
#line 399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto Max($extension_Int32_378_i32 const& $this LIFETIMEBOUND, $extension_Int32_378_i32 rhs) noexcept -> const typename $extension_Int32_378_i32
	{
		#line 399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultMax)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto MaxNumber($extension_Int32_378_i32 const& $this LIFETIMEBOUND, $extension_Int32_378_i32 rhs) noexcept -> const typename $extension_Int32_378_i32
	{
		#line 400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Max)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto Min($extension_Int32_378_i32 const& $this LIFETIMEBOUND, $extension_Int32_378_i32 rhs) noexcept -> const typename $extension_Int32_378_i32
	{
		#line 401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultMin)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto MinNumber($extension_Int32_378_i32 const& $this LIFETIMEBOUND, $extension_Int32_378_i32 rhs) noexcept -> const typename $extension_Int32_378_i32
	{
		#line 402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Min)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto Clamp($extension_Int32_378_i32 const& $this LIFETIMEBOUND, $extension_Int32_378_i32 min, $extension_Int32_378_i32 max)  -> const typename $extension_Int32_378_i32
	{
		#line 403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultClamp)($this, min, max)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getSign($extension_Int32_378_i32 const& $this ) -> const Builtin::i32
	{
		#line 379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultSign)($this)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	
} namespace $extensions { using namespace System;
#line 465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto CheckedLog($extension_Int32_406_i32 const& $this LIFETIMEBOUND, $extension_Int32_406_i32 base) noexcept -> const Builtin::Nullable<$extension_Int32_406_i32>
	{
		#line 467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (($this <=> Builtin::i32(0)) <= 0 || (base <=> Builtin::i32(1)) <= 0) {
			#line 468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return nullptr;
		}
		#line 471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (std::is_constant_evaluated()) {
			#line 472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			if (base == Builtin::i32(2)) {
				#line 473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				return ADV_UPCS(CheckedLog2)($this.$ref());
			}
			#line 475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			if (base == Builtin::i32(10)) {
				#line 476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				return ADV_UPCS(CheckedLog10)($this.$ref());
			}
		}
		#line 480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (($this <=> base) < 0) {
			#line 481 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return Builtin::i32(0);
		}
		#line 484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_406_i32 n = Builtin::i32(1); 
		#line 485 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Auto<decltype(base)> r = base; 
		#line 486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_bsl)($this, base))> baseRatio = ADV_UFCS(_operator_bsl)($this, base); 
		#line 487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		while ((r <=> baseRatio) <= 0) 
		{
			#line 488 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			++n;
			#line 489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			r *= base;
		}
		#line 492 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return n;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto Midpoint($extension_Int32_406_i32 const& $this LIFETIMEBOUND, $extension_Int32_406_i32 rhs) noexcept -> const typename $extension_Int32_406_i32
	{
		#line 510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		const Builtin::Auto<decltype((($this ^ rhs) >> Builtin::i32(1)) + ($this & rhs))> result = (($this ^ rhs) >> Builtin::i32(1)) + ($this & rhs); 
		#line 511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		const Builtin::Auto<decltype((result <=> Builtin::i32(0)) < 0)> correction = (result <=> Builtin::i32(0)) < 0; 
		#line 512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result + ((Builtin::Cast<true, $extension_Int32_406_i32>(correction)) & ($this ^ rhs));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 516 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto IsMultipleOf($extension_Int32_406_i32 const& $this LIFETIMEBOUND, $extension_Int32_406_i32 rhs) noexcept -> const bool
	{
		#line 518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (rhs == Builtin::i32(0)) {
			#line 519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return $this == Builtin::i32(0);
		}
		#line 522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (rhs == Builtin::i32(-1)) {
			#line 523 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return Builtin::Boolean(true);
		}
		#line 526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return $this % rhs == Builtin::i32(0);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto $static_getAllBitsSet<$extension_Int32_406_i32>::get() -> const $extension_Int32_406_i32
	{
		#line 408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(MinusOne, Builtin::i32)()); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsPow2($extension_Int32_406_i32 const& $this ) -> const bool
	{
		#line 411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsPositive)($this.$ref()) && ADV_UPCS(PopCount)($this.$ref()) == Builtin::i32(1)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getCheckedLog2($extension_Int32_406_i32 const& $this ) -> const Builtin::Nullable<$extension_Int32_406_i32>
	{
		#line 417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (($this <=> Builtin::i32(0)) <= 0) {
			#line 418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return nullptr;
		}
		#line 421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return Builtin::Cast<true, $extension_Int32_406_i32>((ADV_USPCS(BitWidth, $extension_Int32_406_i32)() - Builtin::i32(1) - ADV_UPCS(LeadingZeroCount)($this.$ref())));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getLog2($extension_Int32_406_i32 const& $this ) -> const $extension_Int32_406_i32
	{
		#line 427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (const auto result = ADV_UPCS(CheckedLog2)($this.$ref())) {
			{
				#line 427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				return result;
			}
		}
		#line 430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getCheckedLog10($extension_Int32_406_i32 const& $this ) -> const Builtin::Nullable<$extension_Int32_406_i32>
	{
		#line 437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (($this <=> Builtin::i32(0)) <= 0) {
			#line 438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return nullptr;
		}
		#line 441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Auto<decltype(Builtin::Cast<true, Builtin::u32>($this))> val = Builtin::Cast<true, Builtin::u32>($this); 
		#line 442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		constexpr Builtin::u32 C1 = Builtin::u32(0b01100000000000000000U) - Builtin::i32(10);
		#line 443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		constexpr Builtin::u32 C2 = Builtin::u32(0b10000000000000000000U) - Builtin::i32(100);
		#line 444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		constexpr Builtin::u32 C3 = Builtin::u32(0b11100000000000000000U) - Builtin::i32(1000);
		#line 445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		constexpr Builtin::u32 C4 = Builtin::u32(0b10000000000000000000U) - Builtin::i32(10000);
		#line 446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Auto<decltype(Builtin::i32(0))> log = Builtin::i32(0); 
		#line 447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if ((val <=> Builtin::i32(100000)) >= 0) {
			#line 448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			ADV_UFCS(DivAssign)(val.$ref(), Builtin::u32(100000U));
			#line 449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			log += Builtin::i32(5);
		}
		#line 451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return log + ((((val + C1) & (val + C2)) ^ ((val + C3) & (val + C4))) >> Builtin::i32(17));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getLog10($extension_Int32_406_i32 const& $this ) -> const $extension_Int32_406_i32
	{
		#line 457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (const auto result = ADV_UPCS(CheckedLog10)($this.$ref())) {
			{
				#line 457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				return result;
			}
		}
		#line 460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	
} namespace $extensions { using namespace System;
#line 533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_add_qst($extension_Int32_530_i32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int32_530_i32>
	{
		#line 535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +? implemented only for integer types");
		#line 536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_530_i32 result{}; 
		#line 537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (Builtin::SafeAdd($this, rhs, result)) {
			#line 538 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return result;
		}
		#line 540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_add_qst_eq($extension_Int32_530_i32 & $this , T rhs) noexcept -> typename $extension_Int32_530_i32&
	{
		#line 544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +?= implemented only for integer types");
		#line 545 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (const auto result = ADV_UFCS(_operator_add_qst)($this, rhs)) {
			{
				#line 545 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				$this = result;
			}
		}
		#line 548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_add_ne($extension_Int32_530_i32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int32_530_i32
	{
		#line 555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +! implemented only for integer types");
		#line 556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_530_i32 result{}; 
		#line 557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::StrictAdd($this, rhs, result);
		#line 558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_add_ne_eq($extension_Int32_530_i32 & $this , T rhs)  -> typename $extension_Int32_530_i32&
	{
		#line 560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_add_ne)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_add_mod($extension_Int32_530_i32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int32_530_i32
	{
		#line 566 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +% implemented only for integer types");
		#line 567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_530_i32 result{}; 
		#line 568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::WrappingAdd($this, rhs, result);
		#line 569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_add_mod_eq($extension_Int32_530_i32 & $this , T rhs) noexcept -> typename $extension_Int32_530_i32&
	{
		#line 571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_add_mod)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_add_or($extension_Int32_530_i32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int32_530_i32
	{
		#line 577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +| implemented only for integer types");
		#line 578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_530_i32 result{}; 
		#line 579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::SaturatingAdd($this, rhs, result);
		#line 580 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_add_or_eq($extension_Int32_530_i32 & $this , T rhs) noexcept -> typename $extension_Int32_530_i32&
	{
		#line 582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_add_or)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_add_mod_qst($extension_Int32_530_i32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_Int32_530_i32, bool>
	{
		#line 587 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +%? implemented only for integer types");
		#line 588 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_530_i32 result{}; 
		#line 589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Auto<decltype(!Builtin::SafeAdd($this, rhs, result))> overflowed = !Builtin::SafeAdd($this, rhs, result); 
		#line 590 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_add_add_qst($extension_Int32_530_i32 & $this )  -> typename $extension_Int32_530_i32&
	{
		#line 594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_qst_eq)($this, Builtin::i32(1))); 
	}
	inline constexpr auto _operator_add_add_qst_postfix($extension_Int32_530_i32 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_add_add_qst)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_add_add_ne($extension_Int32_530_i32 & $this )  -> typename $extension_Int32_530_i32&
	{
		#line 597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_ne_eq)($this, Builtin::i32(1))); 
	}
	inline constexpr auto _operator_add_add_ne_postfix($extension_Int32_530_i32 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_add_add_ne)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 600 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_add_add_mod($extension_Int32_530_i32 & $this )  -> typename $extension_Int32_530_i32&
	{
		#line 600 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_mod_eq)($this, Builtin::i32(1))); 
	}
	inline constexpr auto _operator_add_add_mod_postfix($extension_Int32_530_i32 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_add_add_mod)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 603 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_add_add_or($extension_Int32_530_i32 & $this )  -> typename $extension_Int32_530_i32&
	{
		#line 603 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_or_eq)($this, Builtin::i32(1))); 
	}
	inline constexpr auto _operator_add_add_or_postfix($extension_Int32_530_i32 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_add_add_or)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 607 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto CarryingAdd($extension_Int32_530_i32 const& $this LIFETIMEBOUND, $extension_Int32_530_i32 rhs, bool carry) noexcept -> const std::tuple<$extension_Int32_530_i32, bool>
	{
		#line 609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_530_i32 result{}; 
		#line 610 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Auto<decltype(Builtin::CarryingAdd($this, rhs, carry, result))> overflowed = Builtin::CarryingAdd($this, rhs, carry, result); 
		#line 611 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 616 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto BorrowingSub($extension_Int32_530_i32 const& $this LIFETIMEBOUND, $extension_Int32_530_i32 rhs, bool carry) noexcept -> const std::tuple<$extension_Int32_530_i32, bool>
	{
		#line 618 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_530_i32 result{}; 
		#line 619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Auto<decltype(Builtin::BorrowingSub($this, rhs, carry, result))> overflowed = Builtin::BorrowingSub($this, rhs, carry, result); 
		#line 620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 625 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_sub_qst($extension_Int32_530_i32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int32_530_i32>
	{
		#line 627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -? implemented only for integer types");
		#line 628 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_530_i32 result{}; 
		#line 629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (Builtin::SafeSubtract($this, rhs, result)) {
			#line 630 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return result;
		}
		#line 632 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_sub_qst_eq($extension_Int32_530_i32 & $this , T rhs) noexcept -> typename $extension_Int32_530_i32&
	{
		#line 636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -?= implemented only for integer types");
		#line 637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (const auto result = ADV_UFCS(_operator_sub_qst)($this, rhs)) {
			{
				#line 637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				$this = result;
			}
		}
		#line 640 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 645 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_sub_ne($extension_Int32_530_i32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int32_530_i32
	{
		#line 647 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -! implemented only for integer types");
		#line 648 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_530_i32 result{}; 
		#line 649 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::StrictSubtract($this, rhs, result);
		#line 650 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_sub_ne_eq($extension_Int32_530_i32 & $this , T rhs)  -> typename $extension_Int32_530_i32&
	{
		#line 652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_sub_ne)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 656 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_sub_mod($extension_Int32_530_i32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int32_530_i32
	{
		#line 658 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -% implemented only for integer types");
		#line 659 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_530_i32 result{}; 
		#line 660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::WrappingSubtract($this, rhs, result);
		#line 661 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 663 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_sub_mod_eq($extension_Int32_530_i32 & $this , T rhs) noexcept -> typename $extension_Int32_530_i32&
	{
		#line 663 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_sub_mod)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 667 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_sub_or($extension_Int32_530_i32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int32_530_i32
	{
		#line 669 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -| implemented only for integer types");
		#line 670 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_530_i32 result{}; 
		#line 671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::SaturatingSubtract($this, rhs, result);
		#line 672 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 674 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_sub_or_eq($extension_Int32_530_i32 & $this , T rhs) noexcept -> typename $extension_Int32_530_i32&
	{
		#line 674 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_sub_or)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_sub_mod_qst($extension_Int32_530_i32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_Int32_530_i32, bool>
	{
		#line 679 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -%? implemented only for integer types");
		#line 680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_530_i32 result{}; 
		#line 681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Auto<decltype(!Builtin::SafeSubtract($this, rhs, result))> overflowed = !Builtin::SafeSubtract($this, rhs, result); 
		#line 682 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_sub_sub_qst($extension_Int32_530_i32 & $this )  -> typename $extension_Int32_530_i32&
	{
		#line 686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_qst_eq)($this, Builtin::i32(1))); 
	}
	inline constexpr auto _operator_sub_sub_qst_postfix($extension_Int32_530_i32 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_sub_sub_qst)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_sub_sub_ne($extension_Int32_530_i32 & $this )  -> typename $extension_Int32_530_i32&
	{
		#line 689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_ne_eq)($this, Builtin::i32(1))); 
	}
	inline constexpr auto _operator_sub_sub_ne_postfix($extension_Int32_530_i32 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_sub_sub_ne)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 692 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_sub_sub_mod($extension_Int32_530_i32 & $this )  -> typename $extension_Int32_530_i32&
	{
		#line 692 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_mod_eq)($this, Builtin::i32(1))); 
	}
	inline constexpr auto _operator_sub_sub_mod_postfix($extension_Int32_530_i32 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_sub_sub_mod)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_sub_sub_or($extension_Int32_530_i32 & $this )  -> typename $extension_Int32_530_i32&
	{
		#line 695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_or_eq)($this, Builtin::i32(1))); 
	}
	inline constexpr auto _operator_sub_sub_or_postfix($extension_Int32_530_i32 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_sub_sub_or)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 699 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mul_qst($extension_Int32_530_i32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int32_530_i32>
	{
		#line 701 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *? implemented only for integer types");
		#line 702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_530_i32 result{}; 
		#line 703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (Builtin::SafeMultiply($this, rhs, result)) {
			#line 704 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return result;
		}
		#line 706 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 708 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mul_qst_eq($extension_Int32_530_i32 & $this , T rhs) noexcept -> typename $extension_Int32_530_i32&
	{
		#line 710 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *?= implemented only for integer types");
		#line 711 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (const auto result = ADV_UFCS(_operator_mul_qst)($this, rhs)) {
			{
				#line 711 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 712 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				$this = result;
			}
		}
		#line 714 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 719 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mul_ne($extension_Int32_530_i32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int32_530_i32
	{
		#line 721 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *! implemented only for integer types");
		#line 722 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_530_i32 result{}; 
		#line 723 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::StrictMultiply($this, rhs, result);
		#line 724 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 726 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mul_ne_eq($extension_Int32_530_i32 & $this , T rhs)  -> typename $extension_Int32_530_i32&
	{
		#line 726 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_mul_ne)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 730 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mul_mod($extension_Int32_530_i32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int32_530_i32
	{
		#line 732 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *% implemented only for integer types");
		#line 733 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_530_i32 result{}; 
		#line 734 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::WrappingMultiply($this, rhs, result);
		#line 735 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 737 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mul_mod_eq($extension_Int32_530_i32 & $this , T rhs) noexcept -> typename $extension_Int32_530_i32&
	{
		#line 737 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_mul_mod)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 741 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mul_or($extension_Int32_530_i32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int32_530_i32
	{
		#line 743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *| implemented only for integer types");
		#line 744 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_530_i32 result{}; 
		#line 745 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::SaturatingMultiply($this, rhs, result);
		#line 746 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 748 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mul_or_eq($extension_Int32_530_i32 & $this , T rhs) noexcept -> typename $extension_Int32_530_i32&
	{
		#line 748 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_mul_or)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 752 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mul_mod_qst($extension_Int32_530_i32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_Int32_530_i32, bool>
	{
		#line 753 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *%? implemented only for integer types");
		#line 754 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_530_i32 result{}; 
		#line 755 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Auto<decltype(!Builtin::SafeMultiply($this, rhs, result))> overflowed = !Builtin::SafeMultiply($this, rhs, result); 
		#line 756 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 761 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_mul_gt($extension_Int32_530_i32 const& $this LIFETIMEBOUND, $extension_Int32_530_i32 rhs) noexcept -> const std::tuple<Builtin::u32, Builtin::i32>
	{
		#line 763 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		const auto& [low, high] = Builtin::WideningMul32($this, rhs);
		#line 764 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return std::make_tuple(low, high);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 770 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto CarryingMul($extension_Int32_530_i32 const& $this LIFETIMEBOUND, $extension_Int32_530_i32 rhs, $extension_Int32_530_i32 carry) noexcept -> const std::tuple<Builtin::u32, Builtin::i32>
	{
		#line 772 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		const auto& [low, high] = Builtin::CarryingMul32($this, rhs, carry);
		#line 773 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return std::make_tuple(low, high);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 778 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_qst($extension_Int32_530_i32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int32_530_i32>
	{
		#line 780 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\? implemented only for integer types");
		#line 781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_530_i32 result{}; 
		#line 782 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (Builtin::SafeDivide($this, rhs, result)) {
			#line 783 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return result;
		}
		#line 785 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 787 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_qst_eq($extension_Int32_530_i32 & $this , T rhs) noexcept -> typename $extension_Int32_530_i32&
	{
		#line 789 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\?= implemented only for integer types");
		#line 790 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (const auto result = ADV_UFCS(_operator_bsl_qst)($this, rhs)) {
			{
				#line 790 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 791 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				$this = result;
			}
		}
		#line 793 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 799 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_ne($extension_Int32_530_i32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int32_530_i32
	{
		#line 801 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\! implemented only for integer types");
		#line 802 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_530_i32 result{}; 
		#line 803 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::StrictDivide($this, rhs, result);
		#line 804 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 806 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_ne_eq($extension_Int32_530_i32 & $this , T rhs)  -> typename $extension_Int32_530_i32&
	{
		#line 806 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_bsl_ne)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 811 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_mod($extension_Int32_530_i32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int32_530_i32
	{
		#line 813 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\% implemented only for integer types");
		#line 814 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_530_i32 result{}; 
		#line 815 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::WrappingDivide($this, rhs, result);
		#line 816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 818 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_eq($extension_Int32_530_i32 & $this , T rhs)  -> typename $extension_Int32_530_i32&
	{
		#line 818 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_bsl_mod)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 823 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_or($extension_Int32_530_i32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int32_530_i32
	{
		#line 825 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\| implemented only for integer types");
		#line 826 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_530_i32 result{}; 
		#line 827 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::SaturatingDivide($this, rhs, result);
		#line 828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_or_eq($extension_Int32_530_i32 & $this , T rhs)  -> typename $extension_Int32_530_i32&
	{
		#line 830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_bsl_or)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 835 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_qst($extension_Int32_530_i32 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_Int32_530_i32, bool>
	{
		#line 836 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\%? implemented only for integer types");
		#line 837 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_530_i32 result{}; 
		#line 838 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Auto<decltype(!Builtin::SafeDivide($this, rhs, result))> overflowed = !Builtin::SafeDivide($this, rhs, result); 
		#line 839 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 844 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst($extension_Int32_530_i32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int32_530_i32>
	{
		#line 846 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\? implemented only for integer types");
		#line 847 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_530_i32 result{}; 
		#line 848 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (Builtin::SafeDivExact($this, rhs, result)) {
			#line 849 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return result;
		}
		#line 851 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 854 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst_eq($extension_Int32_530_i32 & $this , T rhs) noexcept -> typename $extension_Int32_530_i32&
	{
		#line 856 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\?= implemented only for integer types");
		#line 857 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (const auto result = ADV_UFCS(_operator_bsl_bsl_qst)($this, rhs)) {
			{
				#line 857 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 858 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				$this = result;
			}
		}
		#line 860 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 865 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mod_qst($extension_Int32_530_i32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int32_530_i32>
	{
		#line 867 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %? implemented only for integer types");
		#line 868 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_530_i32 result{}; 
		#line 869 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (Builtin::SafeModulus($this, rhs, result)) {
			#line 870 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return result;
		}
		#line 872 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 874 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mod_qst_eq($extension_Int32_530_i32 & $this , T rhs) noexcept -> typename $extension_Int32_530_i32&
	{
		#line 876 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %?= implemented only for integer types");
		#line 877 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (const auto result = ADV_UFCS(_operator_mod_qst)($this, rhs)) {
			{
				#line 877 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 878 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				$this = result;
			}
		}
		#line 880 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 886 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mod_ne($extension_Int32_530_i32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int32_530_i32
	{
		#line 888 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %! implemented only for integer types");
		#line 889 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_530_i32 result{}; 
		#line 890 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::StrictModulus($this, rhs, result);
		#line 891 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 893 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mod_ne_eq($extension_Int32_530_i32 & $this , T rhs)  -> typename $extension_Int32_530_i32&
	{
		#line 893 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_mod_ne)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 898 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mod_mod($extension_Int32_530_i32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int32_530_i32
	{
		#line 900 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %% implemented only for integer types");
		#line 901 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_530_i32 result{}; 
		#line 902 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::WrappingModulus($this, rhs, result);
		#line 903 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 905 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mod_mod_eq($extension_Int32_530_i32 & $this , T rhs)  -> typename $extension_Int32_530_i32&
	{
		#line 905 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_mod_mod)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 910 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mod_mod_qst($extension_Int32_530_i32 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_Int32_530_i32, bool>
	{
		#line 911 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %%? implemented only for integer types");
		#line 912 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_530_i32 result{}; 
		#line 913 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Auto<decltype(!Builtin::SafeModulus($this, rhs, result))> overflowed = !Builtin::SafeModulus($this, rhs, result); 
		#line 914 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 919 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_sub_qst($extension_Int32_530_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::Nullable<$extension_Int32_530_i32>
	{
		#line 921 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_530_i32 result{}; 
		#line 922 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (Builtin::SafeNegate($this, result)) {
			#line 923 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return result;
		}
		#line 925 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 929 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_sub_ne($extension_Int32_530_i32 const& $this LIFETIMEBOUND)  -> const typename $extension_Int32_530_i32
	{
		#line 931 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_530_i32 result{}; 
		#line 932 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::StrictNegate($this, result);
		#line 933 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 936 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_sub_mod($extension_Int32_530_i32 const& $this LIFETIMEBOUND)  -> const typename $extension_Int32_530_i32
	{
		#line 938 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_530_i32 result{}; 
		#line 939 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::WrappingNegate($this, result);
		#line 940 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 944 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_sub_or($extension_Int32_530_i32 const& $this LIFETIMEBOUND)  -> const typename $extension_Int32_530_i32
	{
		#line 946 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_530_i32 result{}; 
		#line 947 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::SaturatingNegate($this, result);
		#line 948 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 952 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_sub_mod_qst($extension_Int32_530_i32 const& $this LIFETIMEBOUND)  -> const std::tuple<$extension_Int32_530_i32, bool>
	{
		#line 954 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_530_i32 result{}; 
		#line 955 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Auto<decltype(!Builtin::SafeNegate($this, result))> overflowed = !Builtin::SafeNegate($this, result); 
		#line 956 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 960 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_lt_lt_qst($extension_Int32_530_i32 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<$extension_Int32_530_i32>
	{
		#line 962 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_Int32_530_i32)()) < 0) {
			#line 963 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return Builtin::UncheckedShiftLeft($this, amount);
		}
		#line 965 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 968 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_lt_lt_qst_eq($extension_Int32_530_i32 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int32_530_i32&
	{
		#line 970 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_Int32_530_i32)()) < 0) {
			#line 971 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return $this <<= amount;
		}
		#line 973 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 976 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_lt_lt_ne($extension_Int32_530_i32 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_Int32_530_i32
	{
		#line 978 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_Int32_530_i32)()) < 0) {
			#line 979 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return Builtin::UncheckedShiftLeft($this, amount);
		}
		#line 981 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Throw(Builtin::IntegerOverflowException{});
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 984 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_lt_lt_ne_eq($extension_Int32_530_i32 & $this , Builtin::i32 amount)  -> typename $extension_Int32_530_i32&
	{
		#line 984 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_lt_lt_ne)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 986 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_lt_lt_mod($extension_Int32_530_i32 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename $extension_Int32_530_i32
	{
		#line 986 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::UncheckedShiftLeft($this, amount & (ADV_USPCS(BitWidth, $extension_Int32_530_i32)() - Builtin::i32(1)))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 989 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_lt_lt_mod_eq($extension_Int32_530_i32 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int32_530_i32&
	{
		#line 989 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_lt_lt_mod)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 991 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_lt_lt_mod_qst($extension_Int32_530_i32 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<$extension_Int32_530_i32, bool>
	{
		#line 991 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(std::make_tuple(ADV_UFCS(_operator_lt_lt_mod)($this, amount), (amount <=> Builtin::i32(0)) < 0 || (amount <=> ADV_USPCS(BitWidth, $extension_Int32_530_i32)()) >= 0)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 994 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_qst($extension_Int32_530_i32 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<$extension_Int32_530_i32>
	{
		#line 996 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_Int32_530_i32)()) < 0) {
			#line 997 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return $this >> amount;
		}
		#line 999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1002 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_qst_eq($extension_Int32_530_i32 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int32_530_i32&
	{
		#line 1004 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_Int32_530_i32)()) < 0) {
			#line 1005 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return $this >>= amount;
		}
		#line 1007 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1010 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_ne($extension_Int32_530_i32 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_Int32_530_i32
	{
		#line 1012 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_Int32_530_i32)()) < 0) {
			#line 1013 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return $this >> amount;
		}
		#line 1015 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Throw(Builtin::IntegerOverflowException{});
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1018 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_ne_eq($extension_Int32_530_i32 & $this , Builtin::i32 amount)  -> typename $extension_Int32_530_i32&
	{
		#line 1018 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_gt_gt_ne)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1020 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_mod($extension_Int32_530_i32 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename $extension_Int32_530_i32
	{
		#line 1020 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::UncheckedShiftRight($this, amount & (ADV_USPCS(BitWidth, $extension_Int32_530_i32)() - Builtin::i32(1)))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1023 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_mod_eq($extension_Int32_530_i32 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int32_530_i32&
	{
		#line 1023 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_gt_gt_mod)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1025 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_mod_qst($extension_Int32_530_i32 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<$extension_Int32_530_i32, bool>
	{
		#line 1025 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(std::make_tuple(ADV_UFCS(_operator_gt_gt_mod)($this, amount), (amount <=> Builtin::i32(0)) < 0 || (amount <=> ADV_USPCS(BitWidth, $extension_Int32_530_i32)()) >= 0)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1030 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor_qst($extension_Int32_530_i32 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const Builtin::Nullable<$extension_Int32_530_i32>
	{
		#line 1032 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1034 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return Builtin::i32(1);
		}
		#line 1037 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 1038 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Auto<decltype(Builtin::i32(1))> result = Builtin::i32(1); 
		#line 1040 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		for (;;) 
		{
			#line 1041 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 1042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				if (const auto mul = ADV_UFCS(_operator_mul_qst)(result, base)) {
					{
						#line 1042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
						auto __tmp0 = *mul; const auto& mul = __tmp0;
						
						#line 1043 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
						result = mul;
					}
				} else {
					#line 1044 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
					{
						#line 1045 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
						return nullptr;
					}
				}
				#line 1047 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				if (exp == Builtin::i32(1)) {
					#line 1048 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
					return result;
				}
			}
			#line 1050 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
			#line 1051 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			if (const auto mul = ADV_UFCS(_operator_mul_qst)(base, base)) {
				{
					#line 1051 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
					auto __tmp0 = *mul; const auto& mul = __tmp0;
					
					#line 1052 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
					base = mul;
				}
			} else {
				#line 1053 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				{
					#line 1054 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
					return nullptr;
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1059 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor_qst_eq($extension_Int32_530_i32 & $this , Builtin::u32 exp) noexcept -> typename $extension_Int32_530_i32&
	{
		#line 1061 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (auto result = ADV_UFCS(_operator_xor_xor_qst)($this, exp)) {
			{
				#line 1061 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 1062 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				return $this = result;
			}
		}
		#line 1064 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1067 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor_ne($extension_Int32_530_i32 const& $this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename $extension_Int32_530_i32
	{
		#line 1069 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1071 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return Builtin::i32(1);
		}
		#line 1074 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 1075 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Auto<decltype(Builtin::i32(1))> result = Builtin::i32(1); 
		#line 1077 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		for (;;) 
		{
			#line 1078 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 1079 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				ADV_UFCS(_operator_mul_ne_eq)(result, base);
				#line 1080 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				if (exp == Builtin::i32(1)) {
					#line 1081 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
					return result;
				}
			}
			#line 1083 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
			#line 1084 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			ADV_UFCS(_operator_mul_ne_eq)(base, base);
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1088 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor_ne_eq($extension_Int32_530_i32 & $this , Builtin::u32 exp)  -> typename $extension_Int32_530_i32&
	{
		#line 1088 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_xor_xor_ne)($this, exp)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1090 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor_mod($extension_Int32_530_i32 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename $extension_Int32_530_i32
	{
		#line 1092 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1094 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return Builtin::i32(1);
		}
		#line 1097 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 1098 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Auto<decltype(Builtin::i32(1))> result = Builtin::i32(1); 
		#line 1100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (std::is_constant_evaluated()) {
			#line 1101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			while ((exp <=> Builtin::i32(1)) > 0) 
			{
				#line 1102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
					#line 1103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
					ADV_UFCS(_operator_mul_mod_eq)(result, base);
				}
				#line 1105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
				#line 1106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				ADV_UFCS(_operator_mul_mod_eq)(base, base);
			}
			#line 1108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return ADV_UFCS(_operator_mul_mod)(result, base);
		} else {
			#line 1109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			{
				#line 1110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				for (;;) 
				{
					#line 1111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
					if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
						#line 1112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
						ADV_UFCS(_operator_mul_mod_eq)(result, base);
						#line 1113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
						if (exp == Builtin::i32(1)) {
							#line 1114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
							return result;
						}
					}
					#line 1116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
					ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
					#line 1117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
					ADV_UFCS(_operator_mul_mod_eq)(base, base);
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor_mod_eq($extension_Int32_530_i32 & $this , Builtin::u32 exp) noexcept -> typename $extension_Int32_530_i32&
	{
		#line 1122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_xor_xor_mod)($this, exp)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor_or($extension_Int32_530_i32 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename $extension_Int32_530_i32
	{
		#line 1126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (const auto result = ADV_UFCS(_operator_xor_xor_qst)($this, exp)) {
			{
				#line 1126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 1127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				return result;
			}
		}
		#line 1130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return (ADV_UPCS(IsNegative)($this.$ref()) && exp % Builtin::i32(2) == Builtin::i32(1)) ? ADV_USPCS(MinValue, $extension_Int32_530_i32)() : ADV_USPCS(MaxValue, $extension_Int32_530_i32)();
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor_or_eq($extension_Int32_530_i32 & $this , Builtin::u32 exp) noexcept -> typename $extension_Int32_530_i32&
	{
		#line 1133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_xor_xor_or)($this, exp)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor_mod_qst($extension_Int32_530_i32 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const std::tuple<$extension_Int32_530_i32, bool>
	{
		#line 1137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return std::make_tuple(Builtin::i32(1), Builtin::Boolean(false));
		}
		#line 1142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 1143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Auto<decltype(Builtin::i32(1))> result = Builtin::i32(1); 
		#line 1144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Auto<decltype(Builtin::Boolean(false))> overflowed = Builtin::Boolean(false); 
		#line 1145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Auto<decltype(std::make_tuple(Builtin::i32(0), Builtin::Boolean(false)))> tmp = std::make_tuple(Builtin::i32(0), Builtin::Boolean(false)); 
		#line 1147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		for (;;) 
		{
			#line 1148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 1149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				tmp = ADV_UFCS(_operator_mul_mod_qst)(result, base);
				#line 1150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				if (exp == Builtin::i32(1)) {
					#line 1151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
					std::get<1>(tmp) |= overflowed;
					#line 1152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
					return tmp;
				}
				#line 1154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				result = std::get<0>(tmp);
				#line 1155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				overflowed |= std::get<1>(tmp);
			}
			#line 1157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
			#line 1158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			tmp = ADV_UFCS(_operator_mul_mod_qst)(base, base);
			#line 1159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			base = std::get<0>(tmp);
			#line 1160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			overflowed |= std::get<1>(tmp);
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getCheckedAbs($extension_Int32_530_i32 const& $this ) -> const Builtin::Nullable<$extension_Int32_530_i32>
	{
		#line 1166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)($this.$ref()) ? ADV_UFCS(_operator_sub_qst)($this) : $this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getStrictAbs($extension_Int32_530_i32 const& $this ) -> const $extension_Int32_530_i32
	{
		#line 1169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)($this.$ref()) ? ADV_UFCS(_operator_sub_ne)($this) : $this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getWrappingAbs($extension_Int32_530_i32 const& $this ) -> const $extension_Int32_530_i32
	{
		#line 1172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)($this.$ref()) ? ADV_UFCS(_operator_sub_mod)($this) : $this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getSaturatingAbs($extension_Int32_530_i32 const& $this ) -> const $extension_Int32_530_i32
	{
		#line 1175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)($this.$ref()) ? ADV_UFCS(_operator_sub_or)($this) : $this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getOverflowingAbs($extension_Int32_530_i32 const& $this ) -> const std::tuple<$extension_Int32_530_i32, bool>
	{
		#line 1180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (ADV_UPCS(IsNegative)($this.$ref())) {
			#line 1181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return ADV_UFCS(_operator_sub_mod_qst)($this);
		}
		#line 1183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return std::make_tuple($this, Builtin::Boolean(false));
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	
} namespace $extensions { using namespace System;
#line 1232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NextMultipleOf($extension_Int32_1187_i32 const& $this LIFETIMEBOUND, $extension_Int32_1187_i32 rhs)  -> const typename $extension_Int32_1187_i32
	{
		#line 1234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (rhs == Builtin::i32(-1)) {
			#line 1235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return $this;
		}
		#line 1238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		const Builtin::Auto<decltype($this % rhs)> remainder = $this % rhs; 
		#line 1239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		const Builtin::Auto<decltype(((remainder <=> Builtin::i32(0)) > 0 && (rhs <=> Builtin::i32(0)) < 0) || ((remainder <=> Builtin::i32(0)) < 0 && (rhs <=> Builtin::i32(0)) > 0) ? remainder + rhs : remainder)> mod = ((remainder <=> Builtin::i32(0)) > 0 && (rhs <=> Builtin::i32(0)) < 0) || ((remainder <=> Builtin::i32(0)) < 0 && (rhs <=> Builtin::i32(0)) > 0) ? remainder + rhs : remainder; 
		#line 1242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return mod == Builtin::i32(0) ? $this : $this + (rhs - mod);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto CheckedNextMultipleOf($extension_Int32_1187_i32 const& $this LIFETIMEBOUND, $extension_Int32_1187_i32 rhs) noexcept -> const Builtin::Nullable<$extension_Int32_1187_i32>
	{
		#line 1250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (rhs == Builtin::i32(-1)) {
			#line 1251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return $this;
		}
		#line 1254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_1187_i32 remainder{}; 
		#line 1255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (const auto r = ADV_UFCS(_operator_mod_qst)($this, rhs)) {
			{
				#line 1255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				auto __tmp0 = *r; const auto& r = __tmp0;
				
				#line 1256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				remainder = r;
			}
		} else {
			#line 1257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return nullptr;
		}
		#line 1259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		const Builtin::Auto<decltype(((remainder <=> Builtin::i32(0)) > 0 && (rhs <=> Builtin::i32(0)) < 0) || ((remainder <=> Builtin::i32(0)) < 0 && (rhs <=> Builtin::i32(0)) > 0) ? remainder + rhs : remainder)> mod = ((remainder <=> Builtin::i32(0)) > 0 && (rhs <=> Builtin::i32(0)) < 0) || ((remainder <=> Builtin::i32(0)) < 0 && (rhs <=> Builtin::i32(0)) > 0) ? remainder + rhs : remainder; 
		#line 1262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (mod == Builtin::i32(0)) {
			#line 1263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return $this;
		}
		#line 1265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return ADV_UFCS(_operator_add_qst)($this, (rhs - mod));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto $static_getIsSigned<$extension_Int32_1187_i32>::get() -> const bool
	{
		#line 1188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getTrailingZeroCount($extension_Int32_1187_i32 const& $this ) -> const Builtin::u32
	{
		#line 1190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::TrailingZeroCount($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getTrailingOneCount($extension_Int32_1187_i32 const& $this ) -> const Builtin::u32
	{
		#line 1191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::TrailingZeroCount(ADV_UFCS(_operator_not)($this))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getByteCount($extension_Int32_1187_i32 const& $this ) -> const Builtin::u32
	{
		#line 1192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u32>(Builtin::usize(sizeof($extension_Int32_1187_i32)))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getMinimalBitWidth($extension_Int32_1187_i32 const& $this ) -> const Builtin::u32
	{
		#line 1193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(BitWidth, $extension_Int32_1187_i32)() - ADV_UPCS(LeadingZeroCount)($this.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline auto getIsqrt($extension_Int32_1187_i32 const& $this ) -> const $extension_Int32_1187_i32
	{
		#line 1210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (const auto result = ADV_UPCS(CheckedIsqrt)($this.$ref())) {
			{
				#line 1210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 1211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				return result;
			}
		}
		#line 1213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getLog2Ceiling($extension_Int32_1187_i32 const& $this ) -> const $extension_Int32_1187_i32
	{
		#line 1220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Auto<decltype(ADV_UPCS(Log2)($this.$ref()))> result = ADV_UPCS(Log2)($this.$ref()); 
		#line 1221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (ADV_UPCS(PopCount)($this.$ref()) != Builtin::i32(1)) {
			#line 1222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			++result;
		}
		#line 1225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getPrevPow2($extension_Int32_1187_i32 const& $this ) -> const $extension_Int32_1187_i32
	{
		#line 1271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (($this <=> Builtin::i32(1)) <= 0) {
			#line 1272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return Builtin::i32(0);
		}
		#line 1275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return ADV_USPCS(One, $extension_Int32_1187_i32)() << (ADV_UPCS(MinimalBitWidth)($this.$ref()) - Builtin::i32(1));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getNextPow2($extension_Int32_1187_i32 const& $this ) -> const $extension_Int32_1187_i32
	{
		#line 1282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (($this <=> Builtin::i32(1)) <= 0) {
			#line 1283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return Builtin::i32(0);
		}
		#line 1286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		const Builtin::Auto<decltype($this - Builtin::i32(1))> p = $this - Builtin::i32(1); 
		#line 1287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return (ADV_USPCS(AllBitsSet, $extension_Int32_1187_i32)() >> ADV_UPCS(LeadingZeroCount)(p.$ref())) + Builtin::i32(1);
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getCheckedNextPow2($extension_Int32_1187_i32 const& $this ) -> const Builtin::Nullable<$extension_Int32_1187_i32>
	{
		#line 1294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (($this <=> Builtin::i32(1)) <= 0) {
			#line 1295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return Builtin::i32(0);
		}
		#line 1298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		const Builtin::Auto<decltype($this - Builtin::i32(1))> p = $this - Builtin::i32(1); 
		#line 1299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return ADV_UFCS(_operator_add_qst)((ADV_USPCS(AllBitsSet, $extension_Int32_1187_i32)() >> ADV_UPCS(LeadingZeroCount)(p.$ref())), Builtin::i32(1));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getWrappingNextPow2($extension_Int32_1187_i32 const& $this ) -> const $extension_Int32_1187_i32
	{
		#line 1306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (($this <=> Builtin::i32(1)) <= 0) {
			#line 1307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return Builtin::i32(0);
		}
		#line 1310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		const Builtin::Auto<decltype($this - Builtin::i32(1))> p = $this - Builtin::i32(1); 
		#line 1311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return ADV_UFCS(_operator_add_mod)((ADV_USPCS(AllBitsSet, $extension_Int32_1187_i32)() >> ADV_UPCS(LeadingZeroCount)(p.$ref())), Builtin::i32(1));
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	
} namespace $extensions { using namespace System;
#line 1348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto RotateLeft($extension_Int32_1315_i32 const& $this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename $extension_Int32_1315_i32
	{
		#line 1348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::BitsRotateLeft($this, shiftAmount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto RotateRight($extension_Int32_1315_i32 const& $this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename $extension_Int32_1315_i32
	{
		#line 1349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::BitsRotateRight($this, shiftAmount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto $static_getBitWidth<$extension_Int32_1315_i32>::get() -> const Builtin::u32
	{
		#line 1316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(32U)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getLeadingZeroCount($extension_Int32_1315_i32 const& $this ) -> const Builtin::u32
	{
		#line 1318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::LeadingZeroCount($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getLeadingOneCount($extension_Int32_1315_i32 const& $this ) -> const Builtin::u32
	{
		#line 1319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::LeadingZeroCount(ADV_UFCS(_operator_not)($this))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getPopCount($extension_Int32_1315_i32 const& $this ) -> const Builtin::u32
	{
		#line 1320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::PopCount($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getZeroCount($extension_Int32_1315_i32 const& $this ) -> const Builtin::u32
	{
		#line 1321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::PopCount(ADV_UFCS(_operator_not)($this))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getByteSwapped($extension_Int32_1315_i32 const& $this ) -> const $extension_Int32_1315_i32
	{
		#line 1322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i32>(Builtin::ByteSwap32(ADV_UFCS(NarrowToUInt32)($this.$ref())))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getBigEndian($extension_Int32_1315_i32 const& $this ) -> const $extension_Int32_1315_i32
	{
		#line 1325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if constexpr (Builtin::IsLittleEndian()) {
			#line 1326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return ADV_UPCS(ByteSwapped)($this.$ref());
		}
		#line 1328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return $this;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getLittleEndian($extension_Int32_1315_i32 const& $this ) -> const $extension_Int32_1315_i32
	{
		#line 1332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if constexpr (Builtin::IsBigEndian()) {
			#line 1333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return ADV_UPCS(ByteSwapped)($this.$ref());
		}
		#line 1335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return $this;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getReverseBits($extension_Int32_1315_i32 const& $this ) -> const $extension_Int32_1315_i32
	{
		#line 1337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::ReverseBits32($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getShortestBitLength($extension_Int32_1315_i32 const& $this ) -> const Builtin::u32
	{
		#line 1341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (($this <=> Builtin::i32(0)) >= 0) {
			#line 1342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return ADV_USPCS(BitWidth, $extension_Int32_1315_i32)() - ADV_UPCS(LeadingZeroCount)($this.$ref());
		}
		#line 1345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return ADV_USPCS(BitWidth, $extension_Int32_1315_i32)() + Builtin::u32(1U) - ADV_UPCS(LeadingOneCount)($this.$ref());
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	
} namespace $extensions { using namespace System;
#line 1361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto IsGreaterThanAsUnsigned($extension_Int32_1353_i32 const& $this LIFETIMEBOUND, $extension_Int32_1353_i32 rhs) noexcept -> const bool
	{
		#line 1361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY((ADV_UFCS(NarrowToUInt32)($this.$ref()) <=> ADV_UFCS(NarrowToUInt32)(rhs.$ref())) > 0); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto $static_getMaxDigitCount<$extension_Int32_1353_i32>::get() -> const Builtin::i32
	{
		#line 1354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(10)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto $static_getMaxHexDigitCount<$extension_Int32_1353_i32>::get() -> const Builtin::i32
	{
		#line 1355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(8)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto $static_getMaxValueDiv10<$extension_Int32_1353_i32>::get() -> const $extension_Int32_1353_i32
	{
		#line 1356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl)(ADV_USPCS(MaxValue, Builtin::i32)(), Builtin::i32(10))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getMultiplyBy10($extension_Int32_1353_i32 const& $this ) -> const $extension_Int32_1353_i32
	{
		#line 1358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_mod)($this, Builtin::i32(10))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getMultiplyBy16($extension_Int32_1353_i32 const& $this ) -> const $extension_Int32_1353_i32
	{
		#line 1359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_mod)($this, Builtin::i32(16))); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	

}