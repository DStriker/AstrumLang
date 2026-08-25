#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "System/Numerics/IBinaryIntegerFormatInfo.h"
using namespace System::Numerics;
#include "System/Numerics/IUnsignedNumber.h"
using namespace System::Numerics;
#include "System/Numerics/IFixedWidthInteger.h"
using namespace System::Numerics;
#include "Optional.h"
#include "IConvertible.h"

namespace System {
namespace __Unsafe {} namespace __UInt16$Protected__Unsafe {}
//###############################################################################
//# Global type aliases
//###############################################################################
#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
using UInt16 = Builtin::u16;
#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
using UShort = Builtin::u16;
//###############################################################################
//# Type definitions
//###############################################################################
	} namespace $extensions { using namespace System;
#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	using $extension_UInt16_15_u16 = Builtin::u16;
	#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	ADV_CHECK_INTERFACE(IMinMaxValue, IMinMaxValue);
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class __TT> struct $static_getMinValue; template<> struct $static_getMinValue<$extension_UInt16_15_u16> { static inline constexpr auto get() -> const $extension_UInt16_15_u16; };
	#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class __TT> struct $static_getMaxValue; template<> struct $static_getMaxValue<$extension_UInt16_15_u16> { static inline constexpr auto get() -> const $extension_UInt16_15_u16; };
	#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt16_15_u16, IMinMaxValue, IMinMaxValue, $extension_UInt16_15_u16);
	} namespace System{
using $extensions::$static_getMinValue;
using $extensions::$static_getMaxValue;

		} namespace $extensions { using namespace System;
#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	using $extension_UInt16_20_u16 = Builtin::u16;
	#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	ASTRUMSTD_API auto _operator_eq_eq_mul($extension_UInt16_20_u16 const& $this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool;
	#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto operator<=>($extension_UInt16_20_u16 const& $this LIFETIMEBOUND, Builtin::Nullable<$extension_UInt16_20_u16> rhs) noexcept -> const Builtin::i32;
	#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_gt_gt_gt($extension_UInt16_20_u16 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_UInt16_20_u16;
	#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_gt_gt_gt_eq($extension_UInt16_20_u16 & $this , Builtin::i32 amount)  -> typename $extension_UInt16_20_u16&;
	#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_lt_lt_bsl($extension_UInt16_20_u16 const& $this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename $extension_UInt16_20_u16;
	#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_lt_lt_bsl_eq($extension_UInt16_20_u16 & $this , Builtin::u32 amount) noexcept -> typename $extension_UInt16_20_u16&;
	#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_gt_gt_bsl($extension_UInt16_20_u16 const& $this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename $extension_UInt16_20_u16;
	#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_gt_gt_bsl_eq($extension_UInt16_20_u16 & $this , Builtin::u32 amount) noexcept -> typename $extension_UInt16_20_u16&;
	#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getHashCode($extension_UInt16_20_u16 const& $this ) -> const Builtin::u64;
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
#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	using $extension_UInt16_73_u16 = Builtin::u16;
	#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	ADV_CHECK_INTERFACE(IAbstractComparable, IAbstractComparable);
	#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	ASTRUMSTD_API auto _operator_lt_eq_gt_mul($extension_UInt16_73_u16 const& $this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32;
	#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt16_73_u16, IAbstractComparable, IAbstractComparable, $extension_UInt16_73_u16);
	} namespace System{
using $extensions::_operator_lt_eq_gt_mul;

		} namespace $extensions { using namespace System;
#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	using $extension_UInt16_88_u16 = Builtin::u16;
	#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	ADV_CHECK_INTERFACE(IConvertible, IConvertible);
	#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto ToBoolean($extension_UInt16_88_u16 const& $this LIFETIMEBOUND) noexcept -> const bool;
	#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto ToInt8($extension_UInt16_88_u16 const& $this LIFETIMEBOUND)  -> const Builtin::i8;
	#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto ToUInt8($extension_UInt16_88_u16 const& $this LIFETIMEBOUND)  -> const Builtin::u8;
	#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto ToInt16($extension_UInt16_88_u16 const& $this LIFETIMEBOUND)  -> const Builtin::i16;
	#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto ToUInt16($extension_UInt16_88_u16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u16;
	#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto ToInt32($extension_UInt16_88_u16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i32;
	#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto ToUInt32($extension_UInt16_88_u16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u32;
	#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto ToInt64($extension_UInt16_88_u16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i64;
	#line 112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto ToUInt64($extension_UInt16_88_u16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u64;
	#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto ToInt128($extension_UInt16_88_u16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i128;
	#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto ToUInt128($extension_UInt16_88_u16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u128;
	#line 115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto ToIsize($extension_UInt16_88_u16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::isize;
	#line 116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto ToUsize($extension_UInt16_88_u16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::usize;
	#line 117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto ToFloat32($extension_UInt16_88_u16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::f32;
	#line 118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto ToFloat64($extension_UInt16_88_u16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::f64;
	#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto ToByte($extension_UInt16_88_u16 const& $this LIFETIMEBOUND)  -> const Builtin::u8;
	#line 125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto ToChar($extension_UInt16_88_u16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::char32;
	#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt16_88_u16, IConvertible, IConvertible, $extension_UInt16_88_u16);
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
#line 130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	using $extension_UInt16_130_u16 = Builtin::u16;
	#line 130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	ADV_CHECK_INTERFACE(IDivisibleArithmetic, IDivisibleArithmetic);
	#line 132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_div_mod($extension_UInt16_130_u16 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_UInt16_130_u16, $extension_UInt16_130_u16>;
	#line 138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_div_not($extension_UInt16_130_u16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt16_130_u16;
	#line 145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_div_not_eq($extension_UInt16_130_u16 & $this , auto rhs)  -> typename $extension_UInt16_130_u16&;
	#line 147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_div_lt($extension_UInt16_130_u16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt16_130_u16;
	#line 156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_div_lt_eq($extension_UInt16_130_u16 & $this , auto rhs)  -> typename $extension_UInt16_130_u16&;
	#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_mod_lt($extension_UInt16_130_u16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt16_130_u16;
	#line 166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_mod_lt_eq($extension_UInt16_130_u16 & $this , auto rhs)  -> typename $extension_UInt16_130_u16&;
	#line 168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_div_gt($extension_UInt16_130_u16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt16_130_u16;
	#line 178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_div_gt_eq($extension_UInt16_130_u16 & $this , auto rhs)  -> typename $extension_UInt16_130_u16&;
	#line 130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt16_130_u16, IDivisibleArithmetic, IDivisibleArithmetic, $extension_UInt16_130_u16);
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
#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	using $extension_UInt16_181_u16 = Builtin::u16;
	#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	ADV_CHECK_INTERFACE(IIntegerDivisibleArithmetic, IIntegerDivisibleArithmetic);
	#line 183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_bsl($extension_UInt16_181_u16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt16_181_u16;
	#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_bsl_eq($extension_UInt16_181_u16 & $this , T rhs)  -> typename $extension_UInt16_181_u16&;
	#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl($extension_UInt16_181_u16 const& $this LIFETIMEBOUND, T rhs)  -> const Builtin::Nullable<$extension_UInt16_181_u16>;
	#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt16_181_u16, IIntegerDivisibleArithmetic, IIntegerDivisibleArithmetic, $extension_UInt16_181_u16);
	} namespace System{
using $extensions::_operator_bsl;
using $extensions::_operator_bsl_eq;
using $extensions::_operator_bsl_bsl;

		} namespace $extensions { using namespace System;
#line 201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	using $extension_UInt16_201_u16 = Builtin::u16;
	#line 201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	ADV_CHECK_INTERFACE(IIntegerPowerArithmetic, IIntegerPowerArithmetic);
	#line 204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_xor_xor($extension_UInt16_201_u16 const& $this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename $extension_UInt16_201_u16;
	#line 236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_xor_xor_eq($extension_UInt16_201_u16 & $this , Builtin::u32 exp)  -> typename $extension_UInt16_201_u16&;
	#line 201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt16_201_u16, IIntegerPowerArithmetic, IIntegerPowerArithmetic, $extension_UInt16_201_u16);
	} namespace System{
using $extensions::_operator_xor_xor;
using $extensions::_operator_xor_xor_eq;

		} namespace $extensions { using namespace System;
#line 239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	using $extension_UInt16_239_u16 = Builtin::u16;
	#line 239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	ADV_CHECK_INTERFACE(INumberBase, INumberBase);
	#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto MaxMagnitude($extension_UInt16_239_u16 const& $this LIFETIMEBOUND, $extension_UInt16_239_u16 rhs) noexcept -> const typename $extension_UInt16_239_u16;
	#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto MaxMagnitudeNumber($extension_UInt16_239_u16 const& $this LIFETIMEBOUND, $extension_UInt16_239_u16 rhs) noexcept -> const typename $extension_UInt16_239_u16;
	#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto MinMagnitude($extension_UInt16_239_u16 const& $this LIFETIMEBOUND, $extension_UInt16_239_u16 rhs) noexcept -> const typename $extension_UInt16_239_u16;
	#line 267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto MinMagnitudeNumber($extension_UInt16_239_u16 const& $this LIFETIMEBOUND, $extension_UInt16_239_u16 rhs) noexcept -> const typename $extension_UInt16_239_u16;
	#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	ASTRUMSTD_API auto Parse($extension_UInt16_239_u16 const& $this LIFETIMEBOUND, Builtin::Str input)  -> const typename $extension_UInt16_239_u16;
	#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	ASTRUMSTD_API auto TryParse($extension_UInt16_239_u16 const& $this LIFETIMEBOUND, Builtin::Str input) noexcept -> const Builtin::Nullable<$extension_UInt16_239_u16>;
	#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto NarrowToInt8($extension_UInt16_239_u16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i8;
	#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto NarrowToUInt8($extension_UInt16_239_u16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u8;
	#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto NarrowToInt16($extension_UInt16_239_u16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i16;
	#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto NarrowToUInt16($extension_UInt16_239_u16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u16;
	#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto NarrowToInt32($extension_UInt16_239_u16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i32;
	#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto NarrowToUInt32($extension_UInt16_239_u16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u32;
	#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto NarrowToInt64($extension_UInt16_239_u16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i64;
	#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto NarrowToUInt64($extension_UInt16_239_u16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u64;
	#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto NarrowToInt128($extension_UInt16_239_u16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i128;
	#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto NarrowToUInt128($extension_UInt16_239_u16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u128;
	#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto NarrowToIsize($extension_UInt16_239_u16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::isize;
	#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto NarrowToUsize($extension_UInt16_239_u16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::usize;
	#line 240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class __TT> struct $static_getOne; template<> struct $static_getOne<$extension_UInt16_239_u16> { static inline constexpr auto get() -> const $extension_UInt16_239_u16; };
	#line 241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class __TT> struct $static_getZero; template<> struct $static_getZero<$extension_UInt16_239_u16> { static inline constexpr auto get() -> const $extension_UInt16_239_u16; };
	#line 242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class __TT> struct $static_getRadix; template<> struct $static_getRadix<$extension_UInt16_239_u16> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getAbs($extension_UInt16_239_u16 const& $this ) -> const $extension_UInt16_239_u16;
	#line 245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getIsCanonical($extension_UInt16_239_u16 const& $this ) -> const bool;
	#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getIsComplexNumber($extension_UInt16_239_u16 const& $this ) -> const bool;
	#line 247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getIsEvenInteger($extension_UInt16_239_u16 const& $this ) -> const bool;
	#line 248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getIsFinite($extension_UInt16_239_u16 const& $this ) -> const bool;
	#line 249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getIsImaginaryNumber($extension_UInt16_239_u16 const& $this ) -> const bool;
	#line 250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getIsInfinity($extension_UInt16_239_u16 const& $this ) -> const bool;
	#line 251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getIsInteger($extension_UInt16_239_u16 const& $this ) -> const bool;
	#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getIsNaN($extension_UInt16_239_u16 const& $this ) -> const bool;
	#line 253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getIsNegative($extension_UInt16_239_u16 const& $this ) -> const bool;
	#line 254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getIsNegativeInfinity($extension_UInt16_239_u16 const& $this ) -> const bool;
	#line 255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getIsNormal($extension_UInt16_239_u16 const& $this ) -> const bool;
	#line 256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getIsOddInteger($extension_UInt16_239_u16 const& $this ) -> const bool;
	#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getIsPositive($extension_UInt16_239_u16 const& $this ) -> const bool;
	#line 258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getIsPositiveInfinity($extension_UInt16_239_u16 const& $this ) -> const bool;
	#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getIsRealNumber($extension_UInt16_239_u16 const& $this ) -> const bool;
	#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getIsSubnormal($extension_UInt16_239_u16 const& $this ) -> const bool;
	#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getIsZero($extension_UInt16_239_u16 const& $this ) -> const bool;
	#line 239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt16_239_u16, INumberBase, INumberBase, $extension_UInt16_239_u16);
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
#line 294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	using $extension_UInt16_294_u16 = Builtin::u16;
	#line 294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	ADV_CHECK_INTERFACE(IUnsignedNumber, IUnsignedNumber);
	#line 295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class __TT> struct $static_getIsUnsigned; template<> struct $static_getIsUnsigned<$extension_UInt16_294_u16> { static inline constexpr auto get() -> const bool; };
	#line 294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt16_294_u16, IUnsignedNumber, IUnsignedNumber, $extension_UInt16_294_u16);
	} namespace System{
using $extensions::$static_getIsUnsigned;

		} namespace $extensions { using namespace System;
#line 298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	using $extension_UInt16_298_u16 = Builtin::u16;
	#line 298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	ADV_CHECK_INTERFACE(INumber, INumber);
	#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto CopySign($extension_UInt16_298_u16 const& $this LIFETIMEBOUND, $extension_UInt16_298_u16 sign) noexcept -> const typename $extension_UInt16_298_u16;
	#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto Max($extension_UInt16_298_u16 const& $this LIFETIMEBOUND, $extension_UInt16_298_u16 rhs) noexcept -> const typename $extension_UInt16_298_u16;
	#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto MaxNumber($extension_UInt16_298_u16 const& $this LIFETIMEBOUND, $extension_UInt16_298_u16 rhs) noexcept -> const typename $extension_UInt16_298_u16;
	#line 305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto Min($extension_UInt16_298_u16 const& $this LIFETIMEBOUND, $extension_UInt16_298_u16 rhs) noexcept -> const typename $extension_UInt16_298_u16;
	#line 306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto MinNumber($extension_UInt16_298_u16 const& $this LIFETIMEBOUND, $extension_UInt16_298_u16 rhs) noexcept -> const typename $extension_UInt16_298_u16;
	#line 307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto Clamp($extension_UInt16_298_u16 const& $this LIFETIMEBOUND, $extension_UInt16_298_u16 min, $extension_UInt16_298_u16 max)  -> const typename $extension_UInt16_298_u16;
	#line 299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getSign($extension_UInt16_298_u16 const& $this ) -> const Builtin::i32;
	#line 298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt16_298_u16, INumber, INumber, $extension_UInt16_298_u16);
	} namespace System{
using $extensions::CopySign;
using $extensions::Max;
using $extensions::MaxNumber;
using $extensions::Min;
using $extensions::MinNumber;
using $extensions::Clamp;
using $extensions::getSign;

		} namespace $extensions { using namespace System;
#line 310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	using $extension_UInt16_310_u16 = Builtin::u16;
	#line 310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	ADV_CHECK_INTERFACE(IBinaryNumber, IBinaryNumber);
	#line 364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto CheckedLog($extension_UInt16_310_u16 const& $this LIFETIMEBOUND, $extension_UInt16_310_u16 base) noexcept -> const Builtin::Nullable<$extension_UInt16_310_u16>;
	#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	ASTRUMSTD_API auto Log($extension_UInt16_310_u16 const& $this LIFETIMEBOUND, $extension_UInt16_310_u16 base)  -> const typename $extension_UInt16_310_u16;
	#line 407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto Midpoint($extension_UInt16_310_u16 const& $this LIFETIMEBOUND, $extension_UInt16_310_u16 rhs) noexcept -> const typename $extension_UInt16_310_u16;
	#line 410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto IsMultipleOf($extension_UInt16_310_u16 const& $this LIFETIMEBOUND, $extension_UInt16_310_u16 rhs) noexcept -> const bool;
	#line 312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class __TT> struct $static_getAllBitsSet; template<> struct $static_getAllBitsSet<$extension_UInt16_310_u16> { static inline constexpr auto get() -> const $extension_UInt16_310_u16; };
	#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getIsPow2($extension_UInt16_310_u16 const& $this ) -> const bool;
	#line 319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getCheckedLog2($extension_UInt16_310_u16 const& $this ) -> const Builtin::Nullable<$extension_UInt16_310_u16>;
	#line 329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getLog2($extension_UInt16_310_u16 const& $this ) -> const $extension_UInt16_310_u16;
	#line 339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getCheckedLog10($extension_UInt16_310_u16 const& $this ) -> const Builtin::Nullable<$extension_UInt16_310_u16>;
	#line 354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getLog10($extension_UInt16_310_u16 const& $this ) -> const $extension_UInt16_310_u16;
	#line 310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt16_310_u16, IBinaryNumber, IBinaryNumber, $extension_UInt16_310_u16);
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
#line 420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	using $extension_UInt16_420_u16 = Builtin::u16;
	#line 420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	ADV_CHECK_INTERFACE(ICheckedArithmetic, ICheckedArithmetic);
	#line 423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_add_qst($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_UInt16_420_u16>;
	#line 432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_add_qst_eq($extension_UInt16_420_u16 & $this , T rhs) noexcept -> typename $extension_UInt16_420_u16&;
	#line 443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_add_ne($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt16_420_u16;
	#line 450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_add_ne_eq($extension_UInt16_420_u16 & $this , T rhs)  -> typename $extension_UInt16_420_u16&;
	#line 454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_add_mod($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_UInt16_420_u16;
	#line 461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_add_mod_eq($extension_UInt16_420_u16 & $this , T rhs) noexcept -> typename $extension_UInt16_420_u16&;
	#line 465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_add_or($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_UInt16_420_u16;
	#line 472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_add_or_eq($extension_UInt16_420_u16 & $this , T rhs) noexcept -> typename $extension_UInt16_420_u16&;
	#line 476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_add_mod_qst($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_UInt16_420_u16, bool>;
	#line 484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_qst($extension_UInt16_420_u16 & $this )  -> typename $extension_UInt16_420_u16&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_qst_postfix($extension_UInt16_420_u16 & $this)  -> decltype(auto);
	#line 487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_ne($extension_UInt16_420_u16 & $this )  -> typename $extension_UInt16_420_u16&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_ne_postfix($extension_UInt16_420_u16 & $this)  -> decltype(auto);
	#line 490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_mod($extension_UInt16_420_u16 & $this )  -> typename $extension_UInt16_420_u16&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_mod_postfix($extension_UInt16_420_u16 & $this)  -> decltype(auto);
	#line 493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_or($extension_UInt16_420_u16 & $this )  -> typename $extension_UInt16_420_u16&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_or_postfix($extension_UInt16_420_u16 & $this)  -> decltype(auto);
	#line 497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto CarryingAdd($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, $extension_UInt16_420_u16 rhs, bool carry) noexcept -> const std::tuple<$extension_UInt16_420_u16, bool>;
	#line 506 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto BorrowingSub($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, $extension_UInt16_420_u16 rhs, bool carry) noexcept -> const std::tuple<$extension_UInt16_420_u16, bool>;
	#line 515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_sub_qst($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_UInt16_420_u16>;
	#line 524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_sub_qst_eq($extension_UInt16_420_u16 & $this , T rhs) noexcept -> typename $extension_UInt16_420_u16&;
	#line 535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_sub_ne($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt16_420_u16;
	#line 542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_sub_ne_eq($extension_UInt16_420_u16 & $this , T rhs)  -> typename $extension_UInt16_420_u16&;
	#line 546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_sub_mod($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_UInt16_420_u16;
	#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_sub_mod_eq($extension_UInt16_420_u16 & $this , T rhs) noexcept -> typename $extension_UInt16_420_u16&;
	#line 557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_sub_or($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_UInt16_420_u16;
	#line 564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_sub_or_eq($extension_UInt16_420_u16 & $this , T rhs) noexcept -> typename $extension_UInt16_420_u16&;
	#line 568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_sub_mod_qst($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_UInt16_420_u16, bool>;
	#line 576 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_qst($extension_UInt16_420_u16 & $this )  -> typename $extension_UInt16_420_u16&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_qst_postfix($extension_UInt16_420_u16 & $this)  -> decltype(auto);
	#line 579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_ne($extension_UInt16_420_u16 & $this )  -> typename $extension_UInt16_420_u16&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_ne_postfix($extension_UInt16_420_u16 & $this)  -> decltype(auto);
	#line 582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_mod($extension_UInt16_420_u16 & $this )  -> typename $extension_UInt16_420_u16&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_mod_postfix($extension_UInt16_420_u16 & $this)  -> decltype(auto);
	#line 585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_or($extension_UInt16_420_u16 & $this )  -> typename $extension_UInt16_420_u16&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_or_postfix($extension_UInt16_420_u16 & $this)  -> decltype(auto);
	#line 589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_mul_qst($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_UInt16_420_u16>;
	#line 598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_mul_qst_eq($extension_UInt16_420_u16 & $this , T rhs) noexcept -> typename $extension_UInt16_420_u16&;
	#line 609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_mul_ne($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt16_420_u16;
	#line 616 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_mul_ne_eq($extension_UInt16_420_u16 & $this , T rhs)  -> typename $extension_UInt16_420_u16&;
	#line 620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_mul_mod($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_UInt16_420_u16;
	#line 627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_mul_mod_eq($extension_UInt16_420_u16 & $this , T rhs) noexcept -> typename $extension_UInt16_420_u16&;
	#line 631 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_mul_or($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_UInt16_420_u16;
	#line 638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_mul_or_eq($extension_UInt16_420_u16 & $this , T rhs) noexcept -> typename $extension_UInt16_420_u16&;
	#line 642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_mul_mod_qst($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_UInt16_420_u16, bool>;
	#line 651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_mul_gt($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, $extension_UInt16_420_u16 rhs) noexcept -> const std::tuple<Builtin::u16, Builtin::u16>;
	#line 660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto CarryingMul($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, $extension_UInt16_420_u16 rhs, $extension_UInt16_420_u16 carry) noexcept -> const std::tuple<Builtin::u16, Builtin::u16>;
	#line 668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_bsl_qst($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_UInt16_420_u16>;
	#line 677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_bsl_qst_eq($extension_UInt16_420_u16 & $this , T rhs) noexcept -> typename $extension_UInt16_420_u16&;
	#line 688 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_bsl_ne($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt16_420_u16;
	#line 689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_bsl_ne_eq($extension_UInt16_420_u16 & $this , T rhs)  -> typename $extension_UInt16_420_u16&;
	#line 693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_bsl_mod($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt16_420_u16;
	#line 694 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_eq($extension_UInt16_420_u16 & $this , T rhs)  -> typename $extension_UInt16_420_u16&;
	#line 698 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_bsl_or($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt16_420_u16;
	#line 699 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_bsl_or_eq($extension_UInt16_420_u16 & $this , T rhs)  -> typename $extension_UInt16_420_u16&;
	#line 704 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_qst($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_UInt16_420_u16, bool>;
	#line 713 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_UInt16_420_u16>;
	#line 723 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst_eq($extension_UInt16_420_u16 & $this , T rhs) noexcept -> typename $extension_UInt16_420_u16&;
	#line 734 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_mod_qst($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_UInt16_420_u16>;
	#line 743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_mod_qst_eq($extension_UInt16_420_u16 & $this , T rhs) noexcept -> typename $extension_UInt16_420_u16&;
	#line 754 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_mod_ne($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt16_420_u16;
	#line 755 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_mod_ne_eq($extension_UInt16_420_u16 & $this , T rhs)  -> typename $extension_UInt16_420_u16&;
	#line 759 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_mod_mod($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt16_420_u16;
	#line 760 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_mod_mod_eq($extension_UInt16_420_u16 & $this , T rhs)  -> typename $extension_UInt16_420_u16&;
	#line 765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_mod_mod_qst($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_UInt16_420_u16, bool>;
	#line 774 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_sub_qst($extension_UInt16_420_u16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::Nullable<$extension_UInt16_420_u16>;
	#line 777 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline auto _operator_sub_ne($extension_UInt16_420_u16 const& $this LIFETIMEBOUND)  -> const typename $extension_UInt16_420_u16;
	#line 782 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_sub_mod($extension_UInt16_420_u16 const& $this LIFETIMEBOUND)  -> const typename $extension_UInt16_420_u16;
	#line 790 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_sub_or($extension_UInt16_420_u16 const& $this LIFETIMEBOUND)  -> const typename $extension_UInt16_420_u16;
	#line 793 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_sub_mod_qst($extension_UInt16_420_u16 const& $this LIFETIMEBOUND)  -> const std::tuple<$extension_UInt16_420_u16, bool>;
	#line 801 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_lt_lt_qst($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<$extension_UInt16_420_u16>;
	#line 809 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_lt_lt_qst_eq($extension_UInt16_420_u16 & $this , Builtin::i32 amount) noexcept -> typename $extension_UInt16_420_u16&;
	#line 817 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_lt_lt_ne($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_UInt16_420_u16;
	#line 825 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_lt_lt_ne_eq($extension_UInt16_420_u16 & $this , Builtin::i32 amount)  -> typename $extension_UInt16_420_u16&;
	#line 827 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_lt_lt_mod($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename $extension_UInt16_420_u16;
	#line 830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_lt_lt_mod_eq($extension_UInt16_420_u16 & $this , Builtin::i32 amount) noexcept -> typename $extension_UInt16_420_u16&;
	#line 832 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_lt_lt_mod_qst($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<$extension_UInt16_420_u16, bool>;
	#line 835 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_gt_gt_qst($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<$extension_UInt16_420_u16>;
	#line 843 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_gt_gt_qst_eq($extension_UInt16_420_u16 & $this , Builtin::i32 amount) noexcept -> typename $extension_UInt16_420_u16&;
	#line 851 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_gt_gt_ne($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_UInt16_420_u16;
	#line 859 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_gt_gt_ne_eq($extension_UInt16_420_u16 & $this , Builtin::i32 amount)  -> typename $extension_UInt16_420_u16&;
	#line 861 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_gt_gt_mod($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename $extension_UInt16_420_u16;
	#line 864 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_gt_gt_mod_eq($extension_UInt16_420_u16 & $this , Builtin::i32 amount) noexcept -> typename $extension_UInt16_420_u16&;
	#line 866 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_gt_gt_mod_qst($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<$extension_UInt16_420_u16, bool>;
	#line 871 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_xor_xor_qst($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const Builtin::Nullable<$extension_UInt16_420_u16>;
	#line 900 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_xor_xor_qst_eq($extension_UInt16_420_u16 & $this , Builtin::u32 exp) noexcept -> typename $extension_UInt16_420_u16&;
	#line 908 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_xor_xor_ne($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename $extension_UInt16_420_u16;
	#line 929 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_xor_xor_ne_eq($extension_UInt16_420_u16 & $this , Builtin::u32 exp)  -> typename $extension_UInt16_420_u16&;
	#line 931 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_xor_xor_mod($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename $extension_UInt16_420_u16;
	#line 963 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_xor_xor_mod_eq($extension_UInt16_420_u16 & $this , Builtin::u32 exp) noexcept -> typename $extension_UInt16_420_u16&;
	#line 965 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_xor_xor_or($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename $extension_UInt16_420_u16;
	#line 974 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_xor_xor_or_eq($extension_UInt16_420_u16 & $this , Builtin::u32 exp) noexcept -> typename $extension_UInt16_420_u16&;
	#line 976 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_xor_xor_mod_qst($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const std::tuple<$extension_UInt16_420_u16, bool>;
	#line 1006 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getCheckedAbs($extension_UInt16_420_u16 const& $this ) -> const Builtin::Nullable<$extension_UInt16_420_u16>;
	#line 1008 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getStrictAbs($extension_UInt16_420_u16 const& $this ) -> const $extension_UInt16_420_u16;
	#line 1010 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getWrappingAbs($extension_UInt16_420_u16 const& $this ) -> const $extension_UInt16_420_u16;
	#line 1012 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getSaturatingAbs($extension_UInt16_420_u16 const& $this ) -> const $extension_UInt16_420_u16;
	#line 1014 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getOverflowingAbs($extension_UInt16_420_u16 const& $this ) -> const std::tuple<$extension_UInt16_420_u16, bool>;
	#line 420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt16_420_u16, ICheckedArithmetic, ICheckedArithmetic, $extension_UInt16_420_u16);
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
#line 1017 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	using $extension_UInt16_1017_u16 = Builtin::u16;
	#line 1017 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	ADV_CHECK_INTERFACE(IBinaryInteger, IBinaryInteger);
	#line 1056 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto NextMultipleOf($extension_UInt16_1017_u16 const& $this LIFETIMEBOUND, $extension_UInt16_1017_u16 rhs)  -> const typename $extension_UInt16_1017_u16;
	#line 1064 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto CheckedNextMultipleOf($extension_UInt16_1017_u16 const& $this LIFETIMEBOUND, $extension_UInt16_1017_u16 rhs) noexcept -> const Builtin::Nullable<$extension_UInt16_1017_u16>;
	#line 1018 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class __TT> struct $static_getIsSigned; template<> struct $static_getIsSigned<$extension_UInt16_1017_u16> { static inline constexpr auto get() -> const bool; };
	#line 1020 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getTrailingZeroCount($extension_UInt16_1017_u16 const& $this ) -> const Builtin::u32;
	#line 1021 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getTrailingOneCount($extension_UInt16_1017_u16 const& $this ) -> const Builtin::u32;
	#line 1022 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getByteCount($extension_UInt16_1017_u16 const& $this ) -> const Builtin::u32;
	#line 1023 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getMinimalBitWidth($extension_UInt16_1017_u16 const& $this ) -> const Builtin::u32;
	#line 1026 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	ASTRUMSTD_API auto getCheckedIsqrt($extension_UInt16_1017_u16 const& $this ) -> const Builtin::Nullable<$extension_UInt16_1017_u16>;
	#line 1033 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline auto getIsqrt($extension_UInt16_1017_u16 const& $this ) -> const $extension_UInt16_1017_u16;
	#line 1042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getLog2Ceiling($extension_UInt16_1017_u16 const& $this ) -> const $extension_UInt16_1017_u16;
	#line 1076 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getPrevPow2($extension_UInt16_1017_u16 const& $this ) -> const $extension_UInt16_1017_u16;
	#line 1087 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getNextPow2($extension_UInt16_1017_u16 const& $this ) -> const $extension_UInt16_1017_u16;
	#line 1099 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getCheckedNextPow2($extension_UInt16_1017_u16 const& $this ) -> const Builtin::Nullable<$extension_UInt16_1017_u16>;
	#line 1111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getWrappingNextPow2($extension_UInt16_1017_u16 const& $this ) -> const $extension_UInt16_1017_u16;
	#line 1017 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt16_1017_u16, IBinaryInteger, IBinaryInteger, $extension_UInt16_1017_u16);
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
#line 1122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	using $extension_UInt16_1122_u16 = Builtin::u16;
	#line 1122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	ADV_CHECK_INTERFACE(IFixedWidthInteger, IFixedWidthInteger);
	#line 1148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto RotateLeft($extension_UInt16_1122_u16 const& $this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename $extension_UInt16_1122_u16;
	#line 1149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto RotateRight($extension_UInt16_1122_u16 const& $this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename $extension_UInt16_1122_u16;
	#line 1123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class __TT> struct $static_getBitWidth; template<> struct $static_getBitWidth<$extension_UInt16_1122_u16> { static inline constexpr auto get() -> const Builtin::u32; };
	#line 1125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getLeadingZeroCount($extension_UInt16_1122_u16 const& $this ) -> const Builtin::u32;
	#line 1126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getLeadingOneCount($extension_UInt16_1122_u16 const& $this ) -> const Builtin::u32;
	#line 1127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getPopCount($extension_UInt16_1122_u16 const& $this ) -> const Builtin::u32;
	#line 1128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getZeroCount($extension_UInt16_1122_u16 const& $this ) -> const Builtin::u32;
	#line 1129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getByteSwapped($extension_UInt16_1122_u16 const& $this ) -> const $extension_UInt16_1122_u16;
	#line 1130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getBigEndian($extension_UInt16_1122_u16 const& $this ) -> const $extension_UInt16_1122_u16;
	#line 1137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getLittleEndian($extension_UInt16_1122_u16 const& $this ) -> const $extension_UInt16_1122_u16;
	#line 1144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getReverseBits($extension_UInt16_1122_u16 const& $this ) -> const $extension_UInt16_1122_u16;
	#line 1146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getShortestBitLength($extension_UInt16_1122_u16 const& $this ) -> const Builtin::u32;
	#line 1122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt16_1122_u16, IFixedWidthInteger, IFixedWidthInteger, $extension_UInt16_1122_u16);
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
#line 1153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	using $extension_UInt16_1153_u16 = Builtin::u16;
	#line 1153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	ADV_CHECK_INTERFACE(IBinaryIntegerFormatInfo, IBinaryIntegerFormatInfo);
	#line 1161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto IsGreaterThanAsUnsigned($extension_UInt16_1153_u16 const& $this LIFETIMEBOUND, $extension_UInt16_1153_u16 rhs) noexcept -> const bool;
	#line 1154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class __TT> struct $static_getMaxDigitCount; template<> struct $static_getMaxDigitCount<$extension_UInt16_1153_u16> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class __TT> struct $static_getMaxHexDigitCount; template<> struct $static_getMaxHexDigitCount<$extension_UInt16_1153_u16> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class __TT> struct $static_getMaxValueDiv10; template<> struct $static_getMaxValueDiv10<$extension_UInt16_1153_u16> { static inline constexpr auto get() -> const $extension_UInt16_1153_u16; };
	#line 1158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getMultiplyBy10($extension_UInt16_1153_u16 const& $this ) -> const $extension_UInt16_1153_u16;
	#line 1159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getMultiplyBy16($extension_UInt16_1153_u16 const& $this ) -> const $extension_UInt16_1153_u16;
	#line 1153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt16_1153_u16, IBinaryIntegerFormatInfo, IBinaryIntegerFormatInfo, $extension_UInt16_1153_u16);
	} namespace System{
using $extensions::IsGreaterThanAsUnsigned;
using $extensions::$static_getMaxDigitCount;
using $extensions::$static_getMaxHexDigitCount;
using $extensions::$static_getMaxValueDiv10;
using $extensions::getMultiplyBy10;
using $extensions::getMultiplyBy16;

	} namespace $extensions {
template<class __TT> struct $static_LeadingZeroCount;
template<class __TT> struct $static_getLeadingZeroCount;
template<class __TT> struct $static_MaxValue;
template<class __TT> struct $static_getMaxValue;
template<class __TT> struct $static_PopCount;
template<class __TT> struct $static_getPopCount;
template<class __TT> struct $static_BitWidth;
template<class __TT> struct $static_getBitWidth;
template<class __TT> struct $static_AllBitsSet;
template<class __TT> struct $static_getAllBitsSet;
template<class __TT> struct $static_SafeNegate;
template<class __TT> struct $static_getSafeNegate;
template<class __TT> struct $static_TrailingZeroCount;
template<class __TT> struct $static_getTrailingZeroCount;
template<class __TT> struct $static_IsPositiveInfinity;
template<class __TT> struct $static_getIsPositiveInfinity;
template<class __TT> struct $static_InvalidOperationException;
template<class __TT> struct $static_getInvalidOperationException;
template<class __TT> struct $static_CheckedLog2;
template<class __TT> struct $static_getCheckedLog2;
template<class __TT> struct $static_IsInteger;
template<class __TT> struct $static_getIsInteger;
template<class __TT> struct $static_IsCanonical;
template<class __TT> struct $static_getIsCanonical;
template<class __TT> struct $static_DefaultClamp;
template<class __TT> struct $static_getDefaultClamp;
template<class __TT> struct $static_Isqrt16;
template<class __TT> struct $static_getIsqrt16;
template<class __TT> struct $static_CheckedLog10;
template<class __TT> struct $static_getCheckedLog10;
template<class __TT> struct $static_SaturatingMultiply;
template<class __TT> struct $static_getSaturatingMultiply;
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
template<class __TT> struct $static_MinimalBitWidth;
template<class __TT> struct $static_getMinimalBitWidth;
template<class __TT> struct $static_IsLittleEndian;
template<class __TT> struct $static_getIsLittleEndian;
template<class __TT> struct $static_ByteCount;
template<class __TT> struct $static_getByteCount;
template<class __TT> struct $static_IsBigEndian;
template<class __TT> struct $static_getIsBigEndian;
template<class __TT> struct $static_ReverseBits16u;
template<class __TT> struct $static_getReverseBits16u;
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
template<class __TT> struct $static_BitsRotateRight;
template<class __TT> struct $static_getBitsRotateRight;
template<class __TT> struct $static_CarryingMul16u;
template<class __TT> struct $static_getCarryingMul16u;
template<class __TT> struct $static_UncheckedShiftLeft;
template<class __TT> struct $static_getUncheckedShiftLeft;
template<class __TT> struct $static_UncheckedShiftRight;
template<class __TT> struct $static_getUncheckedShiftRight;
template<class __TT> struct $static_SafeSubtract;
template<class __TT> struct $static_getSafeSubtract;
template<class __TT> struct $static_IntegerOverflowException;
template<class __TT> struct $static_getIntegerOverflowException;
template<class __TT> struct $static_StrictSubtract;
template<class __TT> struct $static_getStrictSubtract;
template<class __TT> struct $static_Div;
template<class __TT> struct $static_getDiv;
template<class __TT> struct $static_Max;
template<class __TT> struct $static_getMax;
template<class __TT> struct $static_DivAssign;
template<class __TT> struct $static_getDivAssign;
template<class __TT> struct $static_SaturatingSubtract;
template<class __TT> struct $static_getSaturatingSubtract;
template<class __TT> struct $static_DivExact;
template<class __TT> struct $static_getDivExact;
template<class __TT> struct $static_WrappingNegate;
template<class __TT> struct $static_getWrappingNegate;
template<class __TT> struct $static_Min;
template<class __TT> struct $static_getMin;
template<class __TT> struct $static_DefaultMax;
template<class __TT> struct $static_getDefaultMax;
template<class __TT> struct $static_IsNegative;
template<class __TT> struct $static_getIsNegative;
template<class __TT> struct $static_IsPositive;
template<class __TT> struct $static_getIsPositive;
template<class __TT> struct $static_DefaultMin;
template<class __TT> struct $static_getDefaultMin;
template<class __TT> struct $static_CheckedLog;
template<class __TT> struct $static_getCheckedLog;
template<class __TT> struct $static_SafeAdd;
template<class __TT> struct $static_getSafeAdd;
template<class __TT> struct $static_StrictAdd;
template<class __TT> struct $static_getStrictAdd;
template<class __TT> struct $static_WideningMul16u;
template<class __TT> struct $static_getWideningMul16u;
template<class __TT> struct $static_WrappingAdd;
template<class __TT> struct $static_getWrappingAdd;
template<class __TT> struct $static_IsNormal;
template<class __TT> struct $static_getIsNormal;
template<class __TT> struct $static_SaturatingAdd;
template<class __TT> struct $static_getSaturatingAdd;
template<class __TT> struct $static_CarryingAdd;
template<class __TT> struct $static_getCarryingAdd;
template<class __TT> struct $static_SafeDivExact;
template<class __TT> struct $static_getSafeDivExact;
template<class __TT> struct $static_BorrowingSub;
template<class __TT> struct $static_getBorrowingSub;
template<class __TT> struct $static_MultiplyBy10;
template<class __TT> struct $static_getMultiplyBy10;
template<class __TT> struct $static_WrappingSubtract;
template<class __TT> struct $static_getWrappingSubtract;
template<class __TT> struct $static_SafeMultiply;
template<class __TT> struct $static_getSafeMultiply;
template<class __TT> struct $static_HashCode;
template<class __TT> struct $static_getHashCode;
template<class __TT> struct $static_SafeDivide;
template<class __TT> struct $static_getSafeDivide;
template<class __TT> struct $static_SafeModulus;
template<class __TT> struct $static_getSafeModulus;
template<class __TT> struct $static_BitsRotateLeft;
template<class __TT> struct $static_getBitsRotateLeft;
template<class __TT> struct $static_ToUInt32;
template<class __TT> struct $static_getToUInt32;
template<class __TT> struct $static_NarrowToInt16;
template<class __TT> struct $static_getNarrowToInt16;
template<class __TT> struct $static_Abs;
template<class __TT> struct $static_getAbs;
template<class __TT> struct $static_IsFinite;
template<class __TT> struct $static_getIsFinite;
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
#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto $static_getMinValue<$extension_UInt16_15_u16>::get() -> const $extension_UInt16_15_u16
	{
		#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(Builtin::u16(0U)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto $static_getMaxValue<$extension_UInt16_15_u16>::get() -> const $extension_UInt16_15_u16
	{
		#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(Builtin::u16(65535U)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	
} namespace $extensions { using namespace System;
#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto operator<=>($extension_UInt16_20_u16 const& $this LIFETIMEBOUND, Builtin::Nullable<$extension_UInt16_20_u16> rhs) noexcept -> const Builtin::i32
	{
		#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		{
			#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			if ((!Builtin::Is(rhs, nullptr))) {
				#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				auto __tmp0 = *rhs; const auto& rhs = __tmp0;
				
				#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				return $this <=> rhs;
			}
		}
		#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return Builtin::i32(1);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_gt_gt_gt($extension_UInt16_20_u16 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_UInt16_20_u16
	{
		#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY($this >> amount); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_gt_gt_gt_eq($extension_UInt16_20_u16 & $this , Builtin::i32 amount)  -> typename $extension_UInt16_20_u16&
	{
		#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY($this >>= amount); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_lt_lt_bsl($extension_UInt16_20_u16 const& $this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename $extension_UInt16_20_u16
	{
		#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		if ((amount <=> ADV_USPCS(BitWidth, $extension_UInt16_20_u16)()) >= 0) {
			#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			return Builtin::u16(0U);
		}
		#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return Builtin::UncheckedShiftLeft($this, Builtin::Cast<true, Builtin::i32>(amount));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_lt_lt_bsl_eq($extension_UInt16_20_u16 & $this , Builtin::u32 amount) noexcept -> typename $extension_UInt16_20_u16&
	{
		#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_lt_lt_bsl)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_gt_gt_bsl($extension_UInt16_20_u16 const& $this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename $extension_UInt16_20_u16
	{
		#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		if ((amount <=> ADV_USPCS(BitWidth, $extension_UInt16_20_u16)()) >= 0) {
			#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			return Builtin::u16(0U);
		}
		#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return Builtin::UncheckedShiftRight($this, Builtin::Cast<true, Builtin::i32>(amount));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_gt_gt_bsl_eq($extension_UInt16_20_u16 & $this , Builtin::u32 amount) noexcept -> typename $extension_UInt16_20_u16&
	{
		#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_gt_gt_bsl)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getHashCode($extension_UInt16_20_u16 const & $this ) -> const Builtin::u64
	{
		#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	
} namespace $extensions { using namespace System;
#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto ToBoolean($extension_UInt16_88_u16 const& $this LIFETIMEBOUND) noexcept -> const bool
	{
		#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY($this != Builtin::i32(0)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto ToInt8($extension_UInt16_88_u16 const& $this LIFETIMEBOUND)  -> const Builtin::i8
	{
		#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		if (($this <=> Builtin::i32(0x7F)) > 0) {
			#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return Builtin::Cast<true, Builtin::i8>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto ToUInt8($extension_UInt16_88_u16 const& $this LIFETIMEBOUND)  -> const Builtin::u8
	{
		#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		if (($this <=> Builtin::i32(0xFF)) > 0) {
			#line 98 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return Builtin::Cast<true, Builtin::u8>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto ToInt16($extension_UInt16_88_u16 const& $this LIFETIMEBOUND)  -> const Builtin::i16
	{
		#line 103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		if (($this <=> Builtin::i32(0x7FFF)) > 0) {
			#line 104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return Builtin::Cast<true, Builtin::i16>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto ToUInt16($extension_UInt16_88_u16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u16
	{
		#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto ToInt32($extension_UInt16_88_u16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i32
	{
		#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto ToUInt32($extension_UInt16_88_u16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u32
	{
		#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto ToInt64($extension_UInt16_88_u16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i64
	{
		#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto ToUInt64($extension_UInt16_88_u16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u64
	{
		#line 112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto ToInt128($extension_UInt16_88_u16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i128
	{
		#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto ToUInt128($extension_UInt16_88_u16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u128
	{
		#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto ToIsize($extension_UInt16_88_u16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::isize
	{
		#line 115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto ToUsize($extension_UInt16_88_u16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::usize
	{
		#line 116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto ToFloat32($extension_UInt16_88_u16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::f32
	{
		#line 117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto ToFloat64($extension_UInt16_88_u16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::f64
	{
		#line 118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto ToByte($extension_UInt16_88_u16 const& $this LIFETIMEBOUND)  -> const Builtin::u8
	{
		#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		if (($this <=> Builtin::i32(0xFF)) > 0) {
			#line 121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return Builtin::Cast<true, Builtin::u8>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto ToChar($extension_UInt16_88_u16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::char32
	{
		#line 125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	
} namespace $extensions { using namespace System;
#line 132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_div_mod($extension_UInt16_130_u16 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_UInt16_130_u16, $extension_UInt16_130_u16>
	{
		#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator /% implemented only for integer types");
		#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return std::make_tuple(ADV_UFCS(_operator_bsl)($this, rhs), $this % rhs);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_div_not($extension_UInt16_130_u16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt16_130_u16
	{
		#line 140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		Builtin::Auto<decltype($this)> result = $this; 
		#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		result /= rhs;
		#line 142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_div_not_eq($extension_UInt16_130_u16 & $this , auto rhs)  -> typename $extension_UInt16_130_u16&
	{
		#line 145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY($this /= rhs); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_div_lt($extension_UInt16_130_u16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt16_130_u16
	{
		#line 149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		if constexpr (Builtin::TypeIs<T, IBinaryInteger>()) {
			#line 150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			return ADV_UFCS(_operator_bsl)($this, rhs);
		} else {
			#line 151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			{
				#line 152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				return Builtin::Cast<true, $extension_UInt16_130_u16>((ADV_UFCS(_operator_div_lt)(Builtin::f64{$this}, rhs)));
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_div_lt_eq($extension_UInt16_130_u16 & $this , auto rhs)  -> typename $extension_UInt16_130_u16&
	{
		#line 156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY($this = $extension_UInt16_130_u16{ADV_UFCS(_operator_div_lt)($this, rhs)}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_mod_lt($extension_UInt16_130_u16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt16_130_u16
	{
		#line 160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		const Builtin::Auto<decltype($this % rhs)> result = $this % rhs; 
		#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_gt_gt_gt)((result ^ rhs), Builtin::i32{ADV_USPCS(BitWidth, $extension_UInt16_130_u16)() - Builtin::i32(1)}))> signDiff = ADV_UFCS(_operator_gt_gt_gt)((result ^ rhs), Builtin::i32{ADV_USPCS(BitWidth, $extension_UInt16_130_u16)() - Builtin::i32(1)}); 
		#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		const Builtin::Auto<decltype((result != Builtin::i32(0)) & (signDiff != Builtin::i32(0)))> needAdjust = (result != Builtin::i32(0)) & (signDiff != Builtin::i32(0)); 
		#line 163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return result + (needAdjust ? rhs : T{});
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_mod_lt_eq($extension_UInt16_130_u16 & $this , auto rhs)  -> typename $extension_UInt16_130_u16&
	{
		#line 166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY($this = $extension_UInt16_130_u16{ADV_UFCS(_operator_mod_lt)($this, rhs)}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_div_gt($extension_UInt16_130_u16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt16_130_u16
	{
		#line 170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		if constexpr (Builtin::TypeIs<T, IBinaryInteger>()) {
			#line 171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			const auto& [div, rem] = ADV_UFCS(_operator_div_mod)($this, rhs);
			#line 172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			return (rem <=> Builtin::i32(0)) > 0 ? div + Builtin::i32(1) : div;
		} else {
			#line 173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			{
				#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				return Builtin::Cast<true, $extension_UInt16_130_u16>((ADV_UFCS(_operator_div_gt)(Builtin::f64{$this}, rhs)));
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_div_gt_eq($extension_UInt16_130_u16 & $this , auto rhs)  -> typename $extension_UInt16_130_u16&
	{
		#line 178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY($this = $extension_UInt16_130_u16{ADV_UFCS(_operator_div_gt)($this, rhs)}); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	
} namespace $extensions { using namespace System;
#line 183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_bsl($extension_UInt16_181_u16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt16_181_u16
	{
		#line 183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Div)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_bsl_eq($extension_UInt16_181_u16 & $this , T rhs)  -> typename $extension_UInt16_181_u16&
	{
		#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(DivAssign)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl($extension_UInt16_181_u16 const& $this LIFETIMEBOUND, T rhs)  -> const Builtin::Nullable<$extension_UInt16_181_u16>
	{
		#line 192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\? implemented only for integer types");
		#line 193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		$extension_UInt16_181_u16 result{}; 
		#line 194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		if (Builtin::DivExact($this, rhs, result)) {
			#line 195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			return result;
		}
		#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return nullptr;
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	
} namespace $extensions { using namespace System;
#line 204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_xor_xor($extension_UInt16_201_u16 const& $this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename $extension_UInt16_201_u16
	{
		#line 206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			return Builtin::u16(1U);
		}
		#line 211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		Builtin::Auto<decltype(Builtin::u16(1U))> result = Builtin::u16(1U); 
		#line 214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		if (std::is_constant_evaluated()) {
			#line 215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			while ((exp <=> Builtin::i32(1)) > 0) 
			{
				#line 216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
					#line 217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
					result *= base;
				}
				#line 219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
				#line 220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				base *= base;
			}
			#line 222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			return result * base;
		} else {
			#line 223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			{
				#line 224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				for (;;) 
				{
					#line 225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
					if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
						#line 226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
						result *= base;
						#line 227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
						if (exp == Builtin::i32(1)) {
							#line 228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
							return result;
						}
					}
					#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
					ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
					#line 231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
					base *= base;
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_xor_xor_eq($extension_UInt16_201_u16 & $this , Builtin::u32 exp)  -> typename $extension_UInt16_201_u16&
	{
		#line 236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_xor_xor)($this, exp)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	
} namespace $extensions { using namespace System;
#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto MaxMagnitude($extension_UInt16_239_u16 const& $this LIFETIMEBOUND, $extension_UInt16_239_u16 rhs) noexcept -> const typename $extension_UInt16_239_u16
	{
		#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Max)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto MaxMagnitudeNumber($extension_UInt16_239_u16 const& $this LIFETIMEBOUND, $extension_UInt16_239_u16 rhs) noexcept -> const typename $extension_UInt16_239_u16
	{
		#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Max)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto MinMagnitude($extension_UInt16_239_u16 const& $this LIFETIMEBOUND, $extension_UInt16_239_u16 rhs) noexcept -> const typename $extension_UInt16_239_u16
	{
		#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Min)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto MinMagnitudeNumber($extension_UInt16_239_u16 const& $this LIFETIMEBOUND, $extension_UInt16_239_u16 rhs) noexcept -> const typename $extension_UInt16_239_u16
	{
		#line 267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Min)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto NarrowToInt8($extension_UInt16_239_u16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i8
	{
		#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i8>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto NarrowToUInt8($extension_UInt16_239_u16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u8
	{
		#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u8>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto NarrowToInt16($extension_UInt16_239_u16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i16
	{
		#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i16>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto NarrowToUInt16($extension_UInt16_239_u16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u16
	{
		#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto NarrowToInt32($extension_UInt16_239_u16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i32
	{
		#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto NarrowToUInt32($extension_UInt16_239_u16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u32
	{
		#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto NarrowToInt64($extension_UInt16_239_u16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i64
	{
		#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto NarrowToUInt64($extension_UInt16_239_u16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u64
	{
		#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto NarrowToInt128($extension_UInt16_239_u16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i128
	{
		#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto NarrowToUInt128($extension_UInt16_239_u16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u128
	{
		#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto NarrowToIsize($extension_UInt16_239_u16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::isize
	{
		#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto NarrowToUsize($extension_UInt16_239_u16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::usize
	{
		#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto $static_getOne<$extension_UInt16_239_u16>::get() -> const $extension_UInt16_239_u16
	{
		#line 240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(Builtin::u16(1U)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto $static_getZero<$extension_UInt16_239_u16>::get() -> const $extension_UInt16_239_u16
	{
		#line 241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(Builtin::u16(0U)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto $static_getRadix<$extension_UInt16_239_u16>::get() -> const Builtin::i32
	{
		#line 242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(2)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getAbs($extension_UInt16_239_u16 const & $this ) -> const $extension_UInt16_239_u16
	{
		#line 244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getIsCanonical($extension_UInt16_239_u16 const & $this ) -> const bool
	{
		#line 245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getIsComplexNumber($extension_UInt16_239_u16 const & $this ) -> const bool
	{
		#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getIsEvenInteger($extension_UInt16_239_u16 const & $this ) -> const bool
	{
		#line 247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(($this & Builtin::u16(1U)) == Builtin::i32(0)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getIsFinite($extension_UInt16_239_u16 const & $this ) -> const bool
	{
		#line 248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getIsImaginaryNumber($extension_UInt16_239_u16 const & $this ) -> const bool
	{
		#line 249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getIsInfinity($extension_UInt16_239_u16 const & $this ) -> const bool
	{
		#line 250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getIsInteger($extension_UInt16_239_u16 const & $this ) -> const bool
	{
		#line 251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getIsNaN($extension_UInt16_239_u16 const & $this ) -> const bool
	{
		#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getIsNegative($extension_UInt16_239_u16 const & $this ) -> const bool
	{
		#line 253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getIsNegativeInfinity($extension_UInt16_239_u16 const & $this ) -> const bool
	{
		#line 254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getIsNormal($extension_UInt16_239_u16 const & $this ) -> const bool
	{
		#line 255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY($this != Builtin::i32(0)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getIsOddInteger($extension_UInt16_239_u16 const & $this ) -> const bool
	{
		#line 256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(($this & Builtin::u16(1U)) != Builtin::i32(0)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getIsPositive($extension_UInt16_239_u16 const & $this ) -> const bool
	{
		#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getIsPositiveInfinity($extension_UInt16_239_u16 const & $this ) -> const bool
	{
		#line 258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getIsRealNumber($extension_UInt16_239_u16 const & $this ) -> const bool
	{
		#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getIsSubnormal($extension_UInt16_239_u16 const & $this ) -> const bool
	{
		#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getIsZero($extension_UInt16_239_u16 const & $this ) -> const bool
	{
		#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY($this == Builtin::i32(0)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	
} namespace $extensions { using namespace System;
#line 295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto $static_getIsUnsigned<$extension_UInt16_294_u16>::get() -> const bool
	{
		#line 295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	
} namespace $extensions { using namespace System;
#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto CopySign($extension_UInt16_298_u16 const& $this LIFETIMEBOUND, $extension_UInt16_298_u16 sign) noexcept -> const typename $extension_UInt16_298_u16
	{
		#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto Max($extension_UInt16_298_u16 const& $this LIFETIMEBOUND, $extension_UInt16_298_u16 rhs) noexcept -> const typename $extension_UInt16_298_u16
	{
		#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultMax)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto MaxNumber($extension_UInt16_298_u16 const& $this LIFETIMEBOUND, $extension_UInt16_298_u16 rhs) noexcept -> const typename $extension_UInt16_298_u16
	{
		#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Max)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto Min($extension_UInt16_298_u16 const& $this LIFETIMEBOUND, $extension_UInt16_298_u16 rhs) noexcept -> const typename $extension_UInt16_298_u16
	{
		#line 305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultMin)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto MinNumber($extension_UInt16_298_u16 const& $this LIFETIMEBOUND, $extension_UInt16_298_u16 rhs) noexcept -> const typename $extension_UInt16_298_u16
	{
		#line 306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Min)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto Clamp($extension_UInt16_298_u16 const& $this LIFETIMEBOUND, $extension_UInt16_298_u16 min, $extension_UInt16_298_u16 max)  -> const typename $extension_UInt16_298_u16
	{
		#line 307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultClamp)($this, min, max)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getSign($extension_UInt16_298_u16 const & $this ) -> const Builtin::i32
	{
		#line 299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY($this == Builtin::i32(0) ? Builtin::i32(0) : +Builtin::i32(1)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	
} namespace $extensions { using namespace System;
#line 364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto CheckedLog($extension_UInt16_310_u16 const& $this LIFETIMEBOUND, $extension_UInt16_310_u16 base) noexcept -> const Builtin::Nullable<$extension_UInt16_310_u16>
	{
		#line 366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		if ($this == Builtin::i32(0) || (base <=> Builtin::i32(1)) <= 0) {
			#line 367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			return nullptr;
		}
		#line 370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		if (std::is_constant_evaluated()) {
			#line 371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			if (base == Builtin::i32(2)) {
				#line 372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				return ADV_UPCS(CheckedLog2)($this.$ref());
			}
			#line 374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			if (base == Builtin::i32(10)) {
				#line 375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				return ADV_UPCS(CheckedLog10)($this.$ref());
			}
		}
		#line 379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		if (($this <=> base) < 0) {
			#line 380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			return Builtin::u16(0U);
		}
		#line 383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		$extension_UInt16_310_u16 n = Builtin::u16(1U); 
		#line 384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		Builtin::Auto<decltype(base)> r = base; 
		#line 385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_bsl)($this, base))> baseRatio = ADV_UFCS(_operator_bsl)($this, base); 
		#line 386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		while ((r <=> baseRatio) <= 0) 
		{
			#line 387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			++n;
			#line 388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			r *= base;
		}
		#line 391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return n;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto Midpoint($extension_UInt16_310_u16 const& $this LIFETIMEBOUND, $extension_UInt16_310_u16 rhs) noexcept -> const typename $extension_UInt16_310_u16
	{
		#line 407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY((($this ^ rhs) >> Builtin::i32(1)) + ($this & rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto IsMultipleOf($extension_UInt16_310_u16 const& $this LIFETIMEBOUND, $extension_UInt16_310_u16 rhs) noexcept -> const bool
	{
		#line 412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		if (rhs == Builtin::i32(0)) {
			#line 413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			return $this == Builtin::i32(0);
		}
		#line 416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return $this % rhs == Builtin::i32(0);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto $static_getAllBitsSet<$extension_UInt16_310_u16>::get() -> const $extension_UInt16_310_u16
	{
		#line 312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(MaxValue, Builtin::u16)()); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getIsPow2($extension_UInt16_310_u16 const & $this ) -> const bool
	{
		#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(PopCount)($this.$ref()) == Builtin::i32(1)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getCheckedLog2($extension_UInt16_310_u16 const & $this ) -> const Builtin::Nullable<$extension_UInt16_310_u16>
	{
		#line 321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		if ($this == Builtin::i32(0)) {
			#line 322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			return nullptr;
		}
		#line 325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return Builtin::Cast<true, $extension_UInt16_310_u16>((ADV_USPCS(BitWidth, $extension_UInt16_310_u16)() - Builtin::i32(1) - ADV_UPCS(LeadingZeroCount)($this.$ref())));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getLog2($extension_UInt16_310_u16 const & $this ) -> const $extension_UInt16_310_u16
	{
		#line 331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		if (const auto result = ADV_UPCS(CheckedLog2)($this.$ref())) {
			{
				#line 331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				return result;
			}
		}
		#line 334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getCheckedLog10($extension_UInt16_310_u16 const & $this ) -> const Builtin::Nullable<$extension_UInt16_310_u16>
	{
		#line 341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		if ($this == Builtin::i32(0)) {
			#line 342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			return nullptr;
		}
		#line 345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::u32>($this))> val = Builtin::Cast<true, Builtin::u32>($this); 
		#line 346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		constexpr Builtin::u32 C1 = Builtin::u32(0b01100000000000000000U) - Builtin::i32(10);
		#line 347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		constexpr Builtin::u32 C2 = Builtin::u32(0b10000000000000000000U) - Builtin::i32(100);
		#line 348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		constexpr Builtin::u32 C3 = Builtin::u32(0b11100000000000000000U) - Builtin::i32(1000);
		#line 349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		constexpr Builtin::u32 C4 = Builtin::u32(0b10000000000000000000U) - Builtin::i32(10000);
		#line 350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return Builtin::Cast<true, $extension_UInt16_310_u16>(((((val + C1) & (val + C2)) ^ ((val + C3) & (val + C4))) >> Builtin::i32(17)));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getLog10($extension_UInt16_310_u16 const & $this ) -> const $extension_UInt16_310_u16
	{
		#line 356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		if (const auto result = ADV_UPCS(CheckedLog10)($this.$ref())) {
			{
				#line 356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				return result;
			}
		}
		#line 359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	
} namespace $extensions { using namespace System;
#line 423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_add_qst($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_UInt16_420_u16>
	{
		#line 425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +? implemented only for integer types");
		#line 426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		$extension_UInt16_420_u16 result{}; 
		#line 427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		if (Builtin::SafeAdd($this, rhs, result)) {
			#line 428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			return result;
		}
		#line 430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_add_qst_eq($extension_UInt16_420_u16 & $this , T rhs) noexcept -> typename $extension_UInt16_420_u16&
	{
		#line 434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +?= implemented only for integer types");
		#line 435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		if (const auto result = ADV_UFCS(_operator_add_qst)($this, rhs)) {
			{
				#line 435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				$this = result;
			}
		}
		#line 438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_add_ne($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt16_420_u16
	{
		#line 445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +! implemented only for integer types");
		#line 446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		$extension_UInt16_420_u16 result{}; 
		#line 447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		Builtin::StrictAdd($this, rhs, result);
		#line 448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_add_ne_eq($extension_UInt16_420_u16 & $this , T rhs)  -> typename $extension_UInt16_420_u16&
	{
		#line 450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_add_ne)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_add_mod($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_UInt16_420_u16
	{
		#line 456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +% implemented only for integer types");
		#line 457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		$extension_UInt16_420_u16 result{}; 
		#line 458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		Builtin::WrappingAdd($this, rhs, result);
		#line 459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_add_mod_eq($extension_UInt16_420_u16 & $this , T rhs) noexcept -> typename $extension_UInt16_420_u16&
	{
		#line 461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_add_mod)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_add_or($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_UInt16_420_u16
	{
		#line 467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +| implemented only for integer types");
		#line 468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		$extension_UInt16_420_u16 result{}; 
		#line 469 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		Builtin::SaturatingAdd($this, rhs, result);
		#line 470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_add_or_eq($extension_UInt16_420_u16 & $this , T rhs) noexcept -> typename $extension_UInt16_420_u16&
	{
		#line 472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_add_or)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_add_mod_qst($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_UInt16_420_u16, bool>
	{
		#line 477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +%? implemented only for integer types");
		#line 478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		$extension_UInt16_420_u16 result{}; 
		#line 479 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		Builtin::Auto<decltype(!Builtin::SafeAdd($this, rhs, result))> overflowed = !Builtin::SafeAdd($this, rhs, result); 
		#line 480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_add_add_qst($extension_UInt16_420_u16 & $this )  -> typename $extension_UInt16_420_u16&
	{
		#line 484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_qst_eq)($this, Builtin::u16(1U))); 
	}
	inline constexpr auto _operator_add_add_qst_postfix($extension_UInt16_420_u16 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_add_add_qst)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_add_add_ne($extension_UInt16_420_u16 & $this )  -> typename $extension_UInt16_420_u16&
	{
		#line 487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_ne_eq)($this, Builtin::u16(1U))); 
	}
	inline constexpr auto _operator_add_add_ne_postfix($extension_UInt16_420_u16 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_add_add_ne)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_add_add_mod($extension_UInt16_420_u16 & $this )  -> typename $extension_UInt16_420_u16&
	{
		#line 490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_mod_eq)($this, Builtin::u16(1U))); 
	}
	inline constexpr auto _operator_add_add_mod_postfix($extension_UInt16_420_u16 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_add_add_mod)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_add_add_or($extension_UInt16_420_u16 & $this )  -> typename $extension_UInt16_420_u16&
	{
		#line 493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_or_eq)($this, Builtin::u16(1U))); 
	}
	inline constexpr auto _operator_add_add_or_postfix($extension_UInt16_420_u16 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_add_add_or)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto CarryingAdd($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, $extension_UInt16_420_u16 rhs, bool carry) noexcept -> const std::tuple<$extension_UInt16_420_u16, bool>
	{
		#line 499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		$extension_UInt16_420_u16 result{}; 
		#line 500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		Builtin::Auto<decltype(Builtin::CarryingAdd($this, rhs, carry, result))> overflowed = Builtin::CarryingAdd($this, rhs, carry, result); 
		#line 501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 506 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto BorrowingSub($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, $extension_UInt16_420_u16 rhs, bool carry) noexcept -> const std::tuple<$extension_UInt16_420_u16, bool>
	{
		#line 508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		$extension_UInt16_420_u16 result{}; 
		#line 509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		Builtin::Auto<decltype(Builtin::BorrowingSub($this, rhs, carry, result))> overflowed = Builtin::BorrowingSub($this, rhs, carry, result); 
		#line 510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_sub_qst($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_UInt16_420_u16>
	{
		#line 517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -? implemented only for integer types");
		#line 518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		$extension_UInt16_420_u16 result{}; 
		#line 519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		if (Builtin::SafeSubtract($this, rhs, result)) {
			#line 520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			return result;
		}
		#line 522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_sub_qst_eq($extension_UInt16_420_u16 & $this , T rhs) noexcept -> typename $extension_UInt16_420_u16&
	{
		#line 526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -?= implemented only for integer types");
		#line 527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		if (const auto result = ADV_UFCS(_operator_sub_qst)($this, rhs)) {
			{
				#line 527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				$this = result;
			}
		}
		#line 530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_sub_ne($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt16_420_u16
	{
		#line 537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -! implemented only for integer types");
		#line 538 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		$extension_UInt16_420_u16 result{}; 
		#line 539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		Builtin::StrictSubtract($this, rhs, result);
		#line 540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_sub_ne_eq($extension_UInt16_420_u16 & $this , T rhs)  -> typename $extension_UInt16_420_u16&
	{
		#line 542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_sub_ne)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_sub_mod($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_UInt16_420_u16
	{
		#line 548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -% implemented only for integer types");
		#line 549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		$extension_UInt16_420_u16 result{}; 
		#line 550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		Builtin::WrappingSubtract($this, rhs, result);
		#line 551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_sub_mod_eq($extension_UInt16_420_u16 & $this , T rhs) noexcept -> typename $extension_UInt16_420_u16&
	{
		#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_sub_mod)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_sub_or($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_UInt16_420_u16
	{
		#line 559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -| implemented only for integer types");
		#line 560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		$extension_UInt16_420_u16 result{}; 
		#line 561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		Builtin::SaturatingSubtract($this, rhs, result);
		#line 562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_sub_or_eq($extension_UInt16_420_u16 & $this , T rhs) noexcept -> typename $extension_UInt16_420_u16&
	{
		#line 564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_sub_or)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_sub_mod_qst($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_UInt16_420_u16, bool>
	{
		#line 569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -%? implemented only for integer types");
		#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		$extension_UInt16_420_u16 result{}; 
		#line 571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		Builtin::Auto<decltype(!Builtin::SafeSubtract($this, rhs, result))> overflowed = !Builtin::SafeSubtract($this, rhs, result); 
		#line 572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 576 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_sub_sub_qst($extension_UInt16_420_u16 & $this )  -> typename $extension_UInt16_420_u16&
	{
		#line 576 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_qst_eq)($this, Builtin::u16(1U))); 
	}
	inline constexpr auto _operator_sub_sub_qst_postfix($extension_UInt16_420_u16 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_sub_sub_qst)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_sub_sub_ne($extension_UInt16_420_u16 & $this )  -> typename $extension_UInt16_420_u16&
	{
		#line 579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_ne_eq)($this, Builtin::u16(1U))); 
	}
	inline constexpr auto _operator_sub_sub_ne_postfix($extension_UInt16_420_u16 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_sub_sub_ne)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_sub_sub_mod($extension_UInt16_420_u16 & $this )  -> typename $extension_UInt16_420_u16&
	{
		#line 582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_mod_eq)($this, Builtin::u16(1U))); 
	}
	inline constexpr auto _operator_sub_sub_mod_postfix($extension_UInt16_420_u16 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_sub_sub_mod)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_sub_sub_or($extension_UInt16_420_u16 & $this )  -> typename $extension_UInt16_420_u16&
	{
		#line 585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_or_eq)($this, Builtin::u16(1U))); 
	}
	inline constexpr auto _operator_sub_sub_or_postfix($extension_UInt16_420_u16 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_sub_sub_or)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_mul_qst($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_UInt16_420_u16>
	{
		#line 591 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *? implemented only for integer types");
		#line 592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		$extension_UInt16_420_u16 result{}; 
		#line 593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		if (Builtin::SafeMultiply($this, rhs, result)) {
			#line 594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			return result;
		}
		#line 596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_mul_qst_eq($extension_UInt16_420_u16 & $this , T rhs) noexcept -> typename $extension_UInt16_420_u16&
	{
		#line 600 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *?= implemented only for integer types");
		#line 601 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		if (const auto result = ADV_UFCS(_operator_mul_qst)($this, rhs)) {
			{
				#line 601 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				$this = result;
			}
		}
		#line 604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_mul_ne($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt16_420_u16
	{
		#line 611 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *! implemented only for integer types");
		#line 612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		$extension_UInt16_420_u16 result{}; 
		#line 613 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		Builtin::StrictMultiply($this, rhs, result);
		#line 614 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 616 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_mul_ne_eq($extension_UInt16_420_u16 & $this , T rhs)  -> typename $extension_UInt16_420_u16&
	{
		#line 616 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_mul_ne)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_mul_mod($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_UInt16_420_u16
	{
		#line 622 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *% implemented only for integer types");
		#line 623 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		$extension_UInt16_420_u16 result{}; 
		#line 624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		Builtin::WrappingMultiply($this, rhs, result);
		#line 625 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_mul_mod_eq($extension_UInt16_420_u16 & $this , T rhs) noexcept -> typename $extension_UInt16_420_u16&
	{
		#line 627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_mul_mod)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 631 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_mul_or($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_UInt16_420_u16
	{
		#line 633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *| implemented only for integer types");
		#line 634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		$extension_UInt16_420_u16 result{}; 
		#line 635 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		Builtin::SaturatingMultiply($this, rhs, result);
		#line 636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_mul_or_eq($extension_UInt16_420_u16 & $this , T rhs) noexcept -> typename $extension_UInt16_420_u16&
	{
		#line 638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_mul_or)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_mul_mod_qst($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_UInt16_420_u16, bool>
	{
		#line 643 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *%? implemented only for integer types");
		#line 644 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		$extension_UInt16_420_u16 result{}; 
		#line 645 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		Builtin::Auto<decltype(!Builtin::SafeMultiply($this, rhs, result))> overflowed = !Builtin::SafeMultiply($this, rhs, result); 
		#line 646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_mul_gt($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, $extension_UInt16_420_u16 rhs) noexcept -> const std::tuple<Builtin::u16, Builtin::u16>
	{
		#line 653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		const auto& [low, high] = Builtin::WideningMul16u($this, rhs);
		#line 654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return std::make_tuple(low, high);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto CarryingMul($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, $extension_UInt16_420_u16 rhs, $extension_UInt16_420_u16 carry) noexcept -> const std::tuple<Builtin::u16, Builtin::u16>
	{
		#line 662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		const auto& [low, high] = Builtin::CarryingMul16u($this, rhs, carry);
		#line 663 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return std::make_tuple(low, high);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_bsl_qst($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_UInt16_420_u16>
	{
		#line 670 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\? implemented only for integer types");
		#line 671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		$extension_UInt16_420_u16 result{}; 
		#line 672 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		if (Builtin::SafeDivide($this, rhs, result)) {
			#line 673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			return result;
		}
		#line 675 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_bsl_qst_eq($extension_UInt16_420_u16 & $this , T rhs) noexcept -> typename $extension_UInt16_420_u16&
	{
		#line 679 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\?= implemented only for integer types");
		#line 680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		if (const auto result = ADV_UFCS(_operator_bsl_qst)($this, rhs)) {
			{
				#line 680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				$this = result;
			}
		}
		#line 683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 688 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_bsl_ne($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt16_420_u16
	{
		#line 688 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_bsl_ne_eq($extension_UInt16_420_u16 & $this , T rhs)  -> typename $extension_UInt16_420_u16&
	{
		#line 689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl_eq)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_bsl_mod($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt16_420_u16
	{
		#line 693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 694 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_eq($extension_UInt16_420_u16 & $this , T rhs)  -> typename $extension_UInt16_420_u16&
	{
		#line 694 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl_eq)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 698 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_bsl_or($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt16_420_u16
	{
		#line 698 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 699 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_bsl_or_eq($extension_UInt16_420_u16 & $this , T rhs)  -> typename $extension_UInt16_420_u16&
	{
		#line 699 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl_eq)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 704 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_qst($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_UInt16_420_u16, bool>
	{
		#line 705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\%? implemented only for integer types");
		#line 706 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		$extension_UInt16_420_u16 result{}; 
		#line 707 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		Builtin::Auto<decltype(!Builtin::SafeDivide($this, rhs, result))> overflowed = !Builtin::SafeDivide($this, rhs, result); 
		#line 708 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 713 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_UInt16_420_u16>
	{
		#line 715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\? implemented only for integer types");
		#line 716 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		$extension_UInt16_420_u16 result{}; 
		#line 717 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		if (Builtin::SafeDivExact($this, rhs, result)) {
			#line 718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			return result;
		}
		#line 720 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 723 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst_eq($extension_UInt16_420_u16 & $this , T rhs) noexcept -> typename $extension_UInt16_420_u16&
	{
		#line 725 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\?= implemented only for integer types");
		#line 726 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		if (const auto result = ADV_UFCS(_operator_bsl_bsl_qst)($this, rhs)) {
			{
				#line 726 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 727 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				$this = result;
			}
		}
		#line 729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 734 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_mod_qst($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_UInt16_420_u16>
	{
		#line 736 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %? implemented only for integer types");
		#line 737 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		$extension_UInt16_420_u16 result{}; 
		#line 738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		if (Builtin::SafeModulus($this, rhs, result)) {
			#line 739 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			return result;
		}
		#line 741 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_mod_qst_eq($extension_UInt16_420_u16 & $this , T rhs) noexcept -> typename $extension_UInt16_420_u16&
	{
		#line 745 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %?= implemented only for integer types");
		#line 746 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		if (const auto result = ADV_UFCS(_operator_mod_qst)($this, rhs)) {
			{
				#line 746 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 747 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				$this = result;
			}
		}
		#line 749 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 754 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_mod_ne($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt16_420_u16
	{
		#line 754 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY($this % rhs); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 755 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_mod_ne_eq($extension_UInt16_420_u16 & $this , T rhs)  -> typename $extension_UInt16_420_u16&
	{
		#line 755 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY($this %= rhs); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 759 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_mod_mod($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt16_420_u16
	{
		#line 759 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY($this % rhs); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 760 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_mod_mod_eq($extension_UInt16_420_u16 & $this , T rhs)  -> typename $extension_UInt16_420_u16&
	{
		#line 760 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY($this %= rhs); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> inline constexpr auto _operator_mod_mod_qst($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_UInt16_420_u16, bool>
	{
		#line 766 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %%? implemented only for integer types");
		#line 767 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		$extension_UInt16_420_u16 result{}; 
		#line 768 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		Builtin::Auto<decltype(!Builtin::SafeModulus($this, rhs, result))> overflowed = !Builtin::SafeModulus($this, rhs, result); 
		#line 769 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 774 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_sub_qst($extension_UInt16_420_u16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::Nullable<$extension_UInt16_420_u16>
	{
		#line 774 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(nullptr); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 777 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline auto _operator_sub_ne($extension_UInt16_420_u16 const& $this LIFETIMEBOUND)  -> const typename $extension_UInt16_420_u16
	{
		#line 779 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		Builtin::Throw(Builtin::IntegerOverflowException{});
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 782 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_sub_mod($extension_UInt16_420_u16 const& $this LIFETIMEBOUND)  -> const typename $extension_UInt16_420_u16
	{
		#line 784 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		$extension_UInt16_420_u16 result{}; 
		#line 785 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		Builtin::WrappingNegate($this, result);
		#line 786 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 790 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_sub_or($extension_UInt16_420_u16 const& $this LIFETIMEBOUND)  -> const typename $extension_UInt16_420_u16
	{
		#line 790 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(Builtin::u16(0U)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 793 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_sub_mod_qst($extension_UInt16_420_u16 const& $this LIFETIMEBOUND)  -> const std::tuple<$extension_UInt16_420_u16, bool>
	{
		#line 795 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		$extension_UInt16_420_u16 result{}; 
		#line 796 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		Builtin::Auto<decltype(Builtin::SafeNegate($this, result))> __var_796_8 = Builtin::SafeNegate($this, result); 
		#line 797 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return std::make_tuple(result, Builtin::Boolean(true));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 801 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_lt_lt_qst($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<$extension_UInt16_420_u16>
	{
		#line 803 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_UInt16_420_u16)()) < 0) {
			#line 804 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			return Builtin::UncheckedShiftLeft($this, amount);
		}
		#line 806 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 809 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_lt_lt_qst_eq($extension_UInt16_420_u16 & $this , Builtin::i32 amount) noexcept -> typename $extension_UInt16_420_u16&
	{
		#line 811 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_UInt16_420_u16)()) < 0) {
			#line 812 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			return $this <<= amount;
		}
		#line 814 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 817 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_lt_lt_ne($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_UInt16_420_u16
	{
		#line 819 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_UInt16_420_u16)()) < 0) {
			#line 820 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			return Builtin::UncheckedShiftLeft($this, amount);
		}
		#line 822 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		Builtin::Throw(Builtin::IntegerOverflowException{});
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 825 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_lt_lt_ne_eq($extension_UInt16_420_u16 & $this , Builtin::i32 amount)  -> typename $extension_UInt16_420_u16&
	{
		#line 825 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_lt_lt_ne)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 827 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_lt_lt_mod($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename $extension_UInt16_420_u16
	{
		#line 827 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(Builtin::UncheckedShiftLeft($this, amount & (ADV_USPCS(BitWidth, $extension_UInt16_420_u16)() - Builtin::i32(1)))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_lt_lt_mod_eq($extension_UInt16_420_u16 & $this , Builtin::i32 amount) noexcept -> typename $extension_UInt16_420_u16&
	{
		#line 830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_lt_lt_mod)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 832 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_lt_lt_mod_qst($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<$extension_UInt16_420_u16, bool>
	{
		#line 832 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(std::make_tuple(ADV_UFCS(_operator_lt_lt_mod)($this, amount), (amount <=> Builtin::i32(0)) < 0 || (amount <=> ADV_USPCS(BitWidth, $extension_UInt16_420_u16)()) >= 0)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 835 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_gt_gt_qst($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<$extension_UInt16_420_u16>
	{
		#line 837 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_UInt16_420_u16)()) < 0) {
			#line 838 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			return $this >> amount;
		}
		#line 840 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 843 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_gt_gt_qst_eq($extension_UInt16_420_u16 & $this , Builtin::i32 amount) noexcept -> typename $extension_UInt16_420_u16&
	{
		#line 845 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_UInt16_420_u16)()) < 0) {
			#line 846 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			return $this >>= amount;
		}
		#line 848 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 851 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_gt_gt_ne($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_UInt16_420_u16
	{
		#line 853 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_UInt16_420_u16)()) < 0) {
			#line 854 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			return $this >> amount;
		}
		#line 856 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		Builtin::Throw(Builtin::IntegerOverflowException{});
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 859 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_gt_gt_ne_eq($extension_UInt16_420_u16 & $this , Builtin::i32 amount)  -> typename $extension_UInt16_420_u16&
	{
		#line 859 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_gt_gt_ne)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 861 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_gt_gt_mod($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename $extension_UInt16_420_u16
	{
		#line 861 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(Builtin::UncheckedShiftRight($this, amount & (ADV_USPCS(BitWidth, $extension_UInt16_420_u16)() - Builtin::i32(1)))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 864 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_gt_gt_mod_eq($extension_UInt16_420_u16 & $this , Builtin::i32 amount) noexcept -> typename $extension_UInt16_420_u16&
	{
		#line 864 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_gt_gt_mod)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 866 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_gt_gt_mod_qst($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<$extension_UInt16_420_u16, bool>
	{
		#line 866 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(std::make_tuple(ADV_UFCS(_operator_gt_gt_mod)($this, amount), (amount <=> Builtin::i32(0)) < 0 || (amount <=> ADV_USPCS(BitWidth, $extension_UInt16_420_u16)()) >= 0)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 871 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_xor_xor_qst($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const Builtin::Nullable<$extension_UInt16_420_u16>
	{
		#line 873 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 875 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			return Builtin::u16(1U);
		}
		#line 878 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 879 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		Builtin::Auto<decltype(Builtin::u16(1U))> result = Builtin::u16(1U); 
		#line 881 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		for (;;) 
		{
			#line 882 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 883 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				if (const auto mul = ADV_UFCS(_operator_mul_qst)(result, base)) {
					{
						#line 883 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
						auto __tmp0 = *mul; const auto& mul = __tmp0;
						
						#line 884 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
						result = mul;
					}
				} else {
					#line 885 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
					{
						#line 886 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
						return nullptr;
					}
				}
				#line 888 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				if (exp == Builtin::i32(1)) {
					#line 889 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
					return result;
				}
			}
			#line 891 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
			#line 892 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			if (const auto mul = ADV_UFCS(_operator_mul_qst)(base, base)) {
				{
					#line 892 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
					auto __tmp0 = *mul; const auto& mul = __tmp0;
					
					#line 893 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
					base = mul;
				}
			} else {
				#line 894 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				{
					#line 895 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
					return nullptr;
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 900 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_xor_xor_qst_eq($extension_UInt16_420_u16 & $this , Builtin::u32 exp) noexcept -> typename $extension_UInt16_420_u16&
	{
		#line 902 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		if (auto result = ADV_UFCS(_operator_xor_xor_qst)($this, exp)) {
			{
				#line 902 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 903 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				return $this = result;
			}
		}
		#line 905 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 908 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_xor_xor_ne($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename $extension_UInt16_420_u16
	{
		#line 910 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 912 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			return Builtin::u16(1U);
		}
		#line 915 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 916 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		Builtin::Auto<decltype(Builtin::u16(1U))> result = Builtin::u16(1U); 
		#line 918 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		for (;;) 
		{
			#line 919 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 920 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				ADV_UFCS(_operator_mul_ne_eq)(result, base);
				#line 921 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				if (exp == Builtin::i32(1)) {
					#line 922 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
					return result;
				}
			}
			#line 924 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
			#line 925 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			ADV_UFCS(_operator_mul_ne_eq)(base, base);
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 929 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_xor_xor_ne_eq($extension_UInt16_420_u16 & $this , Builtin::u32 exp)  -> typename $extension_UInt16_420_u16&
	{
		#line 929 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_xor_xor_ne)($this, exp)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 931 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_xor_xor_mod($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename $extension_UInt16_420_u16
	{
		#line 933 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 935 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			return Builtin::u16(1U);
		}
		#line 938 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 939 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		Builtin::Auto<decltype(Builtin::u16(1U))> result = Builtin::u16(1U); 
		#line 941 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		if (std::is_constant_evaluated()) {
			#line 942 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			while ((exp <=> Builtin::i32(1)) > 0) 
			{
				#line 943 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
					#line 944 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
					ADV_UFCS(_operator_mul_mod_eq)(result, base);
				}
				#line 946 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
				#line 947 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				ADV_UFCS(_operator_mul_mod_eq)(base, base);
			}
			#line 949 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			return ADV_UFCS(_operator_mul_mod)(result, base);
		} else {
			#line 950 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			{
				#line 951 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				for (;;) 
				{
					#line 952 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
					if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
						#line 953 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
						ADV_UFCS(_operator_mul_mod_eq)(result, base);
						#line 954 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
						if (exp == Builtin::i32(1)) {
							#line 955 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
							return result;
						}
					}
					#line 957 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
					ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
					#line 958 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
					ADV_UFCS(_operator_mul_mod_eq)(base, base);
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 963 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_xor_xor_mod_eq($extension_UInt16_420_u16 & $this , Builtin::u32 exp) noexcept -> typename $extension_UInt16_420_u16&
	{
		#line 963 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_xor_xor_mod)($this, exp)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 965 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_xor_xor_or($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename $extension_UInt16_420_u16
	{
		#line 967 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		if (const auto result = ADV_UFCS(_operator_xor_xor_qst)($this, exp)) {
			{
				#line 967 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 968 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				return result;
			}
		}
		#line 971 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return ADV_USPCS(MaxValue, $extension_UInt16_420_u16)();
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 974 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_xor_xor_or_eq($extension_UInt16_420_u16 & $this , Builtin::u32 exp) noexcept -> typename $extension_UInt16_420_u16&
	{
		#line 974 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_xor_xor_or)($this, exp)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 976 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto _operator_xor_xor_mod_qst($extension_UInt16_420_u16 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const std::tuple<$extension_UInt16_420_u16, bool>
	{
		#line 978 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 980 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			return std::make_tuple(Builtin::u16(1U), Builtin::Boolean(false));
		}
		#line 983 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 984 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		Builtin::Auto<decltype(Builtin::u16(1U))> result = Builtin::u16(1U); 
		#line 985 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		Builtin::Auto<decltype(Builtin::Boolean(false))> overflowed = Builtin::Boolean(false); 
		#line 986 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		Builtin::Auto<decltype(std::make_tuple(Builtin::u16(0U), Builtin::Boolean(false)))> tmp = std::make_tuple(Builtin::u16(0U), Builtin::Boolean(false)); 
		#line 988 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		for (;;) 
		{
			#line 989 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 990 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				tmp = ADV_UFCS(_operator_mul_mod_qst)(result, base);
				#line 991 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				if (exp == Builtin::i32(1)) {
					#line 992 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
					std::get<1>(tmp) |= overflowed;
					#line 993 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
					return tmp;
				}
				#line 995 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				result = std::get<0>(tmp);
				#line 996 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				overflowed |= std::get<1>(tmp);
			}
			#line 998 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
			#line 999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			tmp = ADV_UFCS(_operator_mul_mod_qst)(base, base);
			#line 1000 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			base = std::get<0>(tmp);
			#line 1001 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			overflowed |= std::get<1>(tmp);
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1006 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getCheckedAbs($extension_UInt16_420_u16 const & $this ) -> const Builtin::Nullable<$extension_UInt16_420_u16>
	{
		#line 1006 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1008 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getStrictAbs($extension_UInt16_420_u16 const & $this ) -> const $extension_UInt16_420_u16
	{
		#line 1008 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1010 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getWrappingAbs($extension_UInt16_420_u16 const & $this ) -> const $extension_UInt16_420_u16
	{
		#line 1010 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1012 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getSaturatingAbs($extension_UInt16_420_u16 const & $this ) -> const $extension_UInt16_420_u16
	{
		#line 1012 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1014 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getOverflowingAbs($extension_UInt16_420_u16 const & $this ) -> const std::tuple<$extension_UInt16_420_u16, bool>
	{
		#line 1014 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(std::make_tuple($this, Builtin::Boolean(false))); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	
} namespace $extensions { using namespace System;
#line 1056 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto NextMultipleOf($extension_UInt16_1017_u16 const& $this LIFETIMEBOUND, $extension_UInt16_1017_u16 rhs)  -> const typename $extension_UInt16_1017_u16
	{
		#line 1058 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		const Builtin::Auto<decltype($this % rhs)> rem = $this % rhs; 
		#line 1059 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return rem == Builtin::i32(0) ? $this : $this + (rhs - rem);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1064 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto CheckedNextMultipleOf($extension_UInt16_1017_u16 const& $this LIFETIMEBOUND, $extension_UInt16_1017_u16 rhs) noexcept -> const Builtin::Nullable<$extension_UInt16_1017_u16>
	{
		#line 1066 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		if (const auto rem = ADV_UFCS(_operator_mod_qst)($this, rhs)) {
			{
				#line 1066 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				auto __tmp0 = *rem; const auto& rem = __tmp0;
				
				#line 1067 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				if (rem == Builtin::i32(0)) {
					#line 1068 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
					return $this;
				}
				#line 1070 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				return ADV_UFCS(_operator_add_qst)($this, (rhs - rem));
			}
		}
		#line 1072 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1018 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto $static_getIsSigned<$extension_UInt16_1017_u16>::get() -> const bool
	{
		#line 1018 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1020 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getTrailingZeroCount($extension_UInt16_1017_u16 const & $this ) -> const Builtin::u32
	{
		#line 1020 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(Builtin::TrailingZeroCount($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1021 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getTrailingOneCount($extension_UInt16_1017_u16 const & $this ) -> const Builtin::u32
	{
		#line 1021 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(Builtin::TrailingZeroCount(ADV_UFCS(_operator_not)($this))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1022 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getByteCount($extension_UInt16_1017_u16 const & $this ) -> const Builtin::u32
	{
		#line 1022 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u32>(Builtin::usize(sizeof($extension_UInt16_1017_u16)))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1023 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getMinimalBitWidth($extension_UInt16_1017_u16 const & $this ) -> const Builtin::u32
	{
		#line 1023 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(BitWidth, $extension_UInt16_1017_u16)() - ADV_UPCS(LeadingZeroCount)($this.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1033 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline auto getIsqrt($extension_UInt16_1017_u16 const & $this ) -> const $extension_UInt16_1017_u16
	{
		#line 1034 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		if (const auto result = ADV_UPCS(CheckedIsqrt)($this.$ref())) {
			{
				#line 1034 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 1035 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				return result;
			}
		}
		#line 1037 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getLog2Ceiling($extension_UInt16_1017_u16 const & $this ) -> const $extension_UInt16_1017_u16
	{
		#line 1044 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		Builtin::Auto<decltype(ADV_UPCS(Log2)($this.$ref()))> result = ADV_UPCS(Log2)($this.$ref()); 
		#line 1045 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		if (ADV_UPCS(PopCount)($this.$ref()) != Builtin::i32(1)) {
			#line 1046 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			++result;
		}
		#line 1049 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return result;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1076 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getPrevPow2($extension_UInt16_1017_u16 const & $this ) -> const $extension_UInt16_1017_u16
	{
		#line 1078 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		if (($this <=> Builtin::i32(1)) <= 0) {
			#line 1079 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			return Builtin::u16(0U);
		}
		#line 1082 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return ADV_USPCS(One, $extension_UInt16_1017_u16)() << (ADV_UPCS(MinimalBitWidth)($this.$ref()) - Builtin::u16(1U));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1087 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getNextPow2($extension_UInt16_1017_u16 const & $this ) -> const $extension_UInt16_1017_u16
	{
		#line 1089 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		if (($this <=> Builtin::i32(1)) <= 0) {
			#line 1090 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			return Builtin::u16(0U);
		}
		#line 1093 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		const Builtin::Auto<decltype($this - Builtin::u16(1U))> p = $this - Builtin::u16(1U); 
		#line 1094 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return (ADV_USPCS(AllBitsSet, $extension_UInt16_1017_u16)() >> ADV_UPCS(LeadingZeroCount)(p.$ref())) + Builtin::u16(1U);
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1099 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getCheckedNextPow2($extension_UInt16_1017_u16 const & $this ) -> const Builtin::Nullable<$extension_UInt16_1017_u16>
	{
		#line 1101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		if (($this <=> Builtin::i32(1)) <= 0) {
			#line 1102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			return Builtin::u16(0U);
		}
		#line 1105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		const Builtin::Auto<decltype($this - Builtin::u16(1U))> p = $this - Builtin::u16(1U); 
		#line 1106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return ADV_UFCS(_operator_add_qst)((ADV_USPCS(AllBitsSet, $extension_UInt16_1017_u16)() >> ADV_UPCS(LeadingZeroCount)(p.$ref())), Builtin::u16(1U));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getWrappingNextPow2($extension_UInt16_1017_u16 const & $this ) -> const $extension_UInt16_1017_u16
	{
		#line 1113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		if (($this <=> Builtin::i32(1)) <= 0) {
			#line 1114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			return Builtin::u16(0U);
		}
		#line 1117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		const Builtin::Auto<decltype($this - Builtin::u16(1U))> p = $this - Builtin::u16(1U); 
		#line 1118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return ADV_UFCS(_operator_add_mod)((ADV_USPCS(AllBitsSet, $extension_UInt16_1017_u16)() >> ADV_UPCS(LeadingZeroCount)(p.$ref())), Builtin::u16(1U));
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	
} namespace $extensions { using namespace System;
#line 1148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto RotateLeft($extension_UInt16_1122_u16 const& $this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename $extension_UInt16_1122_u16
	{
		#line 1148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(Builtin::BitsRotateLeft($this, shiftAmount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto RotateRight($extension_UInt16_1122_u16 const& $this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename $extension_UInt16_1122_u16
	{
		#line 1149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(Builtin::BitsRotateRight($this, shiftAmount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto $static_getBitWidth<$extension_UInt16_1122_u16>::get() -> const Builtin::u32
	{
		#line 1123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(16U)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getLeadingZeroCount($extension_UInt16_1122_u16 const & $this ) -> const Builtin::u32
	{
		#line 1125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(Builtin::LeadingZeroCount($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getLeadingOneCount($extension_UInt16_1122_u16 const & $this ) -> const Builtin::u32
	{
		#line 1126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(Builtin::LeadingZeroCount(ADV_UFCS(_operator_not)($this))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getPopCount($extension_UInt16_1122_u16 const & $this ) -> const Builtin::u32
	{
		#line 1127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(Builtin::PopCount($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getZeroCount($extension_UInt16_1122_u16 const & $this ) -> const Builtin::u32
	{
		#line 1128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(Builtin::PopCount(ADV_UFCS(_operator_not)($this))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getByteSwapped($extension_UInt16_1122_u16 const & $this ) -> const $extension_UInt16_1122_u16
	{
		#line 1129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(Builtin::ByteSwap16($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getBigEndian($extension_UInt16_1122_u16 const & $this ) -> const $extension_UInt16_1122_u16
	{
		#line 1132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		if constexpr (Builtin::IsLittleEndian()) {
			#line 1133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			return ADV_UPCS(ByteSwapped)($this.$ref());
		}
		#line 1135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return $this;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getLittleEndian($extension_UInt16_1122_u16 const & $this ) -> const $extension_UInt16_1122_u16
	{
		#line 1139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		if constexpr (Builtin::IsBigEndian()) {
			#line 1140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			return ADV_UPCS(ByteSwapped)($this.$ref());
		}
		#line 1142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return $this;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getReverseBits($extension_UInt16_1122_u16 const & $this ) -> const $extension_UInt16_1122_u16
	{
		#line 1144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(Builtin::ReverseBits16u($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getShortestBitLength($extension_UInt16_1122_u16 const & $this ) -> const Builtin::u32
	{
		#line 1146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(BitWidth, $extension_UInt16_1122_u16)() - ADV_UPCS(LeadingZeroCount)($this.$ref())); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	
} namespace $extensions { using namespace System;
#line 1161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto IsGreaterThanAsUnsigned($extension_UInt16_1153_u16 const& $this LIFETIMEBOUND, $extension_UInt16_1153_u16 rhs) noexcept -> const bool
	{
		#line 1161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(($this <=> rhs) > 0); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto $static_getMaxDigitCount<$extension_UInt16_1153_u16>::get() -> const Builtin::i32
	{
		#line 1154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(5)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto $static_getMaxHexDigitCount<$extension_UInt16_1153_u16>::get() -> const Builtin::i32
	{
		#line 1155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(4)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto $static_getMaxValueDiv10<$extension_UInt16_1153_u16>::get() -> const $extension_UInt16_1153_u16
	{
		#line 1156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl)(ADV_USPCS(MaxValue, Builtin::u16)(), Builtin::i32(10))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getMultiplyBy10($extension_UInt16_1153_u16 const & $this ) -> const $extension_UInt16_1153_u16
	{
		#line 1158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_mod)($this, Builtin::u16(10U))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	inline constexpr auto getMultiplyBy16($extension_UInt16_1153_u16 const & $this ) -> const $extension_UInt16_1153_u16
	{
		#line 1159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_mod)($this, Builtin::u16(16U))); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	

}