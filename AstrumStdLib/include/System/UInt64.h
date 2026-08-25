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
namespace __Unsafe {} namespace __UInt64$Protected__Unsafe {}
//###############################################################################
//# Global type aliases
//###############################################################################
#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
using UInt64 = Builtin::u64;
#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
using ULong = Builtin::u64;
//###############################################################################
//# Type definitions
//###############################################################################
	} namespace $extensions { using namespace System;
#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	using $extension_UInt64_15_u64 = Builtin::u64;
	#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ADV_CHECK_INTERFACE(IMinMaxValue, IMinMaxValue);
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class __TT> struct $static_getMinValue; template<> struct $static_getMinValue<$extension_UInt64_15_u64> { static inline constexpr auto get() -> const $extension_UInt64_15_u64; };
	#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class __TT> struct $static_getMaxValue; template<> struct $static_getMaxValue<$extension_UInt64_15_u64> { static inline constexpr auto get() -> const $extension_UInt64_15_u64; };
	#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt64_15_u64, IMinMaxValue, IMinMaxValue, $extension_UInt64_15_u64);
	} namespace System{
using $extensions::$static_getMinValue;
using $extensions::$static_getMaxValue;

		} namespace $extensions { using namespace System;
#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	using $extension_UInt64_20_u64 = Builtin::u64;
	#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ASTRUMSTD_API auto _operator_eq_eq_mul($extension_UInt64_20_u64 const& $this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool;
	#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto operator<=>($extension_UInt64_20_u64 const& $this LIFETIMEBOUND, Builtin::Nullable<$extension_UInt64_20_u64> rhs) noexcept -> const Builtin::i32;
	#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_gt_gt_gt($extension_UInt64_20_u64 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_UInt64_20_u64;
	#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_gt_gt_gt_eq($extension_UInt64_20_u64 & $this , Builtin::i32 amount)  -> typename $extension_UInt64_20_u64&;
	#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_lt_lt_bsl($extension_UInt64_20_u64 const& $this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename $extension_UInt64_20_u64;
	#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_lt_lt_bsl_eq($extension_UInt64_20_u64 & $this , Builtin::u32 amount) noexcept -> typename $extension_UInt64_20_u64&;
	#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_gt_gt_bsl($extension_UInt64_20_u64 const& $this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename $extension_UInt64_20_u64;
	#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_gt_gt_bsl_eq($extension_UInt64_20_u64 & $this , Builtin::u32 amount) noexcept -> typename $extension_UInt64_20_u64&;
	#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getHashCode($extension_UInt64_20_u64 const& $this ) -> const Builtin::u64;
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
#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	using $extension_UInt64_73_u64 = Builtin::u64;
	#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ADV_CHECK_INTERFACE(IAbstractComparable, IAbstractComparable);
	#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ASTRUMSTD_API auto _operator_lt_eq_gt_mul($extension_UInt64_73_u64 const& $this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32;
	#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt64_73_u64, IAbstractComparable, IAbstractComparable, $extension_UInt64_73_u64);
	} namespace System{
using $extensions::_operator_lt_eq_gt_mul;

		} namespace $extensions { using namespace System;
#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	using $extension_UInt64_88_u64 = Builtin::u64;
	#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ADV_CHECK_INTERFACE(IConvertible, IConvertible);
	#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToBoolean($extension_UInt64_88_u64 const& $this LIFETIMEBOUND) noexcept -> const bool;
	#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToInt8($extension_UInt64_88_u64 const& $this LIFETIMEBOUND)  -> const Builtin::i8;
	#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToUInt8($extension_UInt64_88_u64 const& $this LIFETIMEBOUND)  -> const Builtin::u8;
	#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToInt16($extension_UInt64_88_u64 const& $this LIFETIMEBOUND)  -> const Builtin::i16;
	#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToUInt16($extension_UInt64_88_u64 const& $this LIFETIMEBOUND)  -> const Builtin::u16;
	#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToInt32($extension_UInt64_88_u64 const& $this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToUInt32($extension_UInt64_88_u64 const& $this LIFETIMEBOUND)  -> const Builtin::u32;
	#line 126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToInt64($extension_UInt64_88_u64 const& $this LIFETIMEBOUND)  -> const Builtin::i64;
	#line 132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToUInt64($extension_UInt64_88_u64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u64;
	#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToInt128($extension_UInt64_88_u64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i128;
	#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToUInt128($extension_UInt64_88_u64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u128;
	#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToIsize($extension_UInt64_88_u64 const& $this LIFETIMEBOUND)  -> const Builtin::isize;
	#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToUsize($extension_UInt64_88_u64 const& $this LIFETIMEBOUND)  -> const Builtin::usize;
	#line 151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToFloat32($extension_UInt64_88_u64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::f32;
	#line 152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToFloat64($extension_UInt64_88_u64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::f64;
	#line 153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToByte($extension_UInt64_88_u64 const& $this LIFETIMEBOUND)  -> const Builtin::u8;
	#line 159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToChar($extension_UInt64_88_u64 const& $this LIFETIMEBOUND)  -> const Builtin::char32;
	#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt64_88_u64, IConvertible, IConvertible, $extension_UInt64_88_u64);
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
#line 170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	using $extension_UInt64_170_u64 = Builtin::u64;
	#line 170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ADV_CHECK_INTERFACE(IDivisibleArithmetic, IDivisibleArithmetic);
	#line 172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_div_mod($extension_UInt64_170_u64 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_UInt64_170_u64, $extension_UInt64_170_u64>;
	#line 178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_div_not($extension_UInt64_170_u64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt64_170_u64;
	#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_div_not_eq($extension_UInt64_170_u64 & $this , auto rhs)  -> typename $extension_UInt64_170_u64&;
	#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_div_lt($extension_UInt64_170_u64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt64_170_u64;
	#line 196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_div_lt_eq($extension_UInt64_170_u64 & $this , auto rhs)  -> typename $extension_UInt64_170_u64&;
	#line 198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mod_lt($extension_UInt64_170_u64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt64_170_u64;
	#line 206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_mod_lt_eq($extension_UInt64_170_u64 & $this , auto rhs)  -> typename $extension_UInt64_170_u64&;
	#line 208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_div_gt($extension_UInt64_170_u64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt64_170_u64;
	#line 218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_div_gt_eq($extension_UInt64_170_u64 & $this , auto rhs)  -> typename $extension_UInt64_170_u64&;
	#line 170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt64_170_u64, IDivisibleArithmetic, IDivisibleArithmetic, $extension_UInt64_170_u64);
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
#line 221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	using $extension_UInt64_221_u64 = Builtin::u64;
	#line 221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ADV_CHECK_INTERFACE(IIntegerDivisibleArithmetic, IIntegerDivisibleArithmetic);
	#line 223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_bsl($extension_UInt64_221_u64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt64_221_u64;
	#line 225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_bsl_eq($extension_UInt64_221_u64 & $this , T rhs)  -> typename $extension_UInt64_221_u64&;
	#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl($extension_UInt64_221_u64 const& $this LIFETIMEBOUND, T rhs)  -> const Builtin::Nullable<$extension_UInt64_221_u64>;
	#line 221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt64_221_u64, IIntegerDivisibleArithmetic, IIntegerDivisibleArithmetic, $extension_UInt64_221_u64);
	} namespace System{
using $extensions::_operator_bsl;
using $extensions::_operator_bsl_eq;
using $extensions::_operator_bsl_bsl;

		} namespace $extensions { using namespace System;
#line 241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	using $extension_UInt64_241_u64 = Builtin::u64;
	#line 241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ADV_CHECK_INTERFACE(IIntegerPowerArithmetic, IIntegerPowerArithmetic);
	#line 244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_xor_xor($extension_UInt64_241_u64 const& $this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename $extension_UInt64_241_u64;
	#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_xor_xor_eq($extension_UInt64_241_u64 & $this , Builtin::u32 exp)  -> typename $extension_UInt64_241_u64&;
	#line 241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt64_241_u64, IIntegerPowerArithmetic, IIntegerPowerArithmetic, $extension_UInt64_241_u64);
	} namespace System{
using $extensions::_operator_xor_xor;
using $extensions::_operator_xor_xor_eq;

		} namespace $extensions { using namespace System;
#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	using $extension_UInt64_279_u64 = Builtin::u64;
	#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ADV_CHECK_INTERFACE(INumberBase, INumberBase);
	#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto MaxMagnitude($extension_UInt64_279_u64 const& $this LIFETIMEBOUND, $extension_UInt64_279_u64 rhs) noexcept -> const typename $extension_UInt64_279_u64;
	#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto MaxMagnitudeNumber($extension_UInt64_279_u64 const& $this LIFETIMEBOUND, $extension_UInt64_279_u64 rhs) noexcept -> const typename $extension_UInt64_279_u64;
	#line 306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto MinMagnitude($extension_UInt64_279_u64 const& $this LIFETIMEBOUND, $extension_UInt64_279_u64 rhs) noexcept -> const typename $extension_UInt64_279_u64;
	#line 307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto MinMagnitudeNumber($extension_UInt64_279_u64 const& $this LIFETIMEBOUND, $extension_UInt64_279_u64 rhs) noexcept -> const typename $extension_UInt64_279_u64;
	#line 309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ASTRUMSTD_API auto Parse($extension_UInt64_279_u64 const& $this LIFETIMEBOUND, Builtin::Str input)  -> const typename $extension_UInt64_279_u64;
	#line 314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ASTRUMSTD_API auto TryParse($extension_UInt64_279_u64 const& $this LIFETIMEBOUND, Builtin::Str input) noexcept -> const Builtin::Nullable<$extension_UInt64_279_u64>;
	#line 320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto NarrowToInt8($extension_UInt64_279_u64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i8;
	#line 321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto NarrowToUInt8($extension_UInt64_279_u64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u8;
	#line 322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto NarrowToInt16($extension_UInt64_279_u64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i16;
	#line 323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto NarrowToUInt16($extension_UInt64_279_u64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u16;
	#line 324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto NarrowToInt32($extension_UInt64_279_u64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i32;
	#line 325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto NarrowToUInt32($extension_UInt64_279_u64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u32;
	#line 326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto NarrowToInt64($extension_UInt64_279_u64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i64;
	#line 327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto NarrowToUInt64($extension_UInt64_279_u64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u64;
	#line 328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto NarrowToInt128($extension_UInt64_279_u64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i128;
	#line 329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto NarrowToUInt128($extension_UInt64_279_u64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u128;
	#line 330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto NarrowToIsize($extension_UInt64_279_u64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::isize;
	#line 331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto NarrowToUsize($extension_UInt64_279_u64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::usize;
	#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class __TT> struct $static_getOne; template<> struct $static_getOne<$extension_UInt64_279_u64> { static inline constexpr auto get() -> const $extension_UInt64_279_u64; };
	#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class __TT> struct $static_getZero; template<> struct $static_getZero<$extension_UInt64_279_u64> { static inline constexpr auto get() -> const $extension_UInt64_279_u64; };
	#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class __TT> struct $static_getRadix; template<> struct $static_getRadix<$extension_UInt64_279_u64> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getAbs($extension_UInt64_279_u64 const& $this ) -> const $extension_UInt64_279_u64;
	#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsCanonical($extension_UInt64_279_u64 const& $this ) -> const bool;
	#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsComplexNumber($extension_UInt64_279_u64 const& $this ) -> const bool;
	#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsEvenInteger($extension_UInt64_279_u64 const& $this ) -> const bool;
	#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsFinite($extension_UInt64_279_u64 const& $this ) -> const bool;
	#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsImaginaryNumber($extension_UInt64_279_u64 const& $this ) -> const bool;
	#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsInfinity($extension_UInt64_279_u64 const& $this ) -> const bool;
	#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsInteger($extension_UInt64_279_u64 const& $this ) -> const bool;
	#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsNaN($extension_UInt64_279_u64 const& $this ) -> const bool;
	#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsNegative($extension_UInt64_279_u64 const& $this ) -> const bool;
	#line 294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsNegativeInfinity($extension_UInt64_279_u64 const& $this ) -> const bool;
	#line 295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsNormal($extension_UInt64_279_u64 const& $this ) -> const bool;
	#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsOddInteger($extension_UInt64_279_u64 const& $this ) -> const bool;
	#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsPositive($extension_UInt64_279_u64 const& $this ) -> const bool;
	#line 298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsPositiveInfinity($extension_UInt64_279_u64 const& $this ) -> const bool;
	#line 299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsRealNumber($extension_UInt64_279_u64 const& $this ) -> const bool;
	#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsSubnormal($extension_UInt64_279_u64 const& $this ) -> const bool;
	#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsZero($extension_UInt64_279_u64 const& $this ) -> const bool;
	#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt64_279_u64, INumberBase, INumberBase, $extension_UInt64_279_u64);
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
#line 334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	using $extension_UInt64_334_u64 = Builtin::u64;
	#line 334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ADV_CHECK_INTERFACE(IUnsignedNumber, IUnsignedNumber);
	#line 335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class __TT> struct $static_getIsUnsigned; template<> struct $static_getIsUnsigned<$extension_UInt64_334_u64> { static inline constexpr auto get() -> const bool; };
	#line 334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt64_334_u64, IUnsignedNumber, IUnsignedNumber, $extension_UInt64_334_u64);
	} namespace System{
using $extensions::$static_getIsUnsigned;

		} namespace $extensions { using namespace System;
#line 338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	using $extension_UInt64_338_u64 = Builtin::u64;
	#line 338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ADV_CHECK_INTERFACE(INumber, INumber);
	#line 341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto CopySign($extension_UInt64_338_u64 const& $this LIFETIMEBOUND, $extension_UInt64_338_u64 sign) noexcept -> const typename $extension_UInt64_338_u64;
	#line 343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto Max($extension_UInt64_338_u64 const& $this LIFETIMEBOUND, $extension_UInt64_338_u64 rhs) noexcept -> const typename $extension_UInt64_338_u64;
	#line 344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto MaxNumber($extension_UInt64_338_u64 const& $this LIFETIMEBOUND, $extension_UInt64_338_u64 rhs) noexcept -> const typename $extension_UInt64_338_u64;
	#line 345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto Min($extension_UInt64_338_u64 const& $this LIFETIMEBOUND, $extension_UInt64_338_u64 rhs) noexcept -> const typename $extension_UInt64_338_u64;
	#line 346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto MinNumber($extension_UInt64_338_u64 const& $this LIFETIMEBOUND, $extension_UInt64_338_u64 rhs) noexcept -> const typename $extension_UInt64_338_u64;
	#line 347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto Clamp($extension_UInt64_338_u64 const& $this LIFETIMEBOUND, $extension_UInt64_338_u64 min, $extension_UInt64_338_u64 max)  -> const typename $extension_UInt64_338_u64;
	#line 339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getSign($extension_UInt64_338_u64 const& $this ) -> const Builtin::i32;
	#line 338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt64_338_u64, INumber, INumber, $extension_UInt64_338_u64);
	} namespace System{
using $extensions::CopySign;
using $extensions::Max;
using $extensions::MaxNumber;
using $extensions::Min;
using $extensions::MinNumber;
using $extensions::Clamp;
using $extensions::getSign;

		} namespace $extensions { using namespace System;
#line 350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	using $extension_UInt64_350_u64 = Builtin::u64;
	#line 350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ADV_CHECK_INTERFACE(IBinaryNumber, IBinaryNumber);
	#line 414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto CheckedLog($extension_UInt64_350_u64 const& $this LIFETIMEBOUND, $extension_UInt64_350_u64 base) noexcept -> const Builtin::Nullable<$extension_UInt64_350_u64>;
	#line 447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ASTRUMSTD_API auto Log($extension_UInt64_350_u64 const& $this LIFETIMEBOUND, $extension_UInt64_350_u64 base)  -> const typename $extension_UInt64_350_u64;
	#line 457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto Midpoint($extension_UInt64_350_u64 const& $this LIFETIMEBOUND, $extension_UInt64_350_u64 rhs) noexcept -> const typename $extension_UInt64_350_u64;
	#line 460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto IsMultipleOf($extension_UInt64_350_u64 const& $this LIFETIMEBOUND, $extension_UInt64_350_u64 rhs) noexcept -> const bool;
	#line 352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class __TT> struct $static_getAllBitsSet; template<> struct $static_getAllBitsSet<$extension_UInt64_350_u64> { static inline constexpr auto get() -> const $extension_UInt64_350_u64; };
	#line 355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsPow2($extension_UInt64_350_u64 const& $this ) -> const bool;
	#line 359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getCheckedLog2($extension_UInt64_350_u64 const& $this ) -> const Builtin::Nullable<$extension_UInt64_350_u64>;
	#line 369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getLog2($extension_UInt64_350_u64 const& $this ) -> const $extension_UInt64_350_u64;
	#line 379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getCheckedLog10($extension_UInt64_350_u64 const& $this ) -> const Builtin::Nullable<$extension_UInt64_350_u64>;
	#line 404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getLog10($extension_UInt64_350_u64 const& $this ) -> const $extension_UInt64_350_u64;
	#line 350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt64_350_u64, IBinaryNumber, IBinaryNumber, $extension_UInt64_350_u64);
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
#line 470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	using $extension_UInt64_470_u64 = Builtin::u64;
	#line 470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ADV_CHECK_INTERFACE(ICheckedArithmetic, ICheckedArithmetic);
	#line 473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_add_qst($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_UInt64_470_u64>;
	#line 482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_add_qst_eq($extension_UInt64_470_u64 & $this , T rhs) noexcept -> typename $extension_UInt64_470_u64&;
	#line 493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_add_ne($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt64_470_u64;
	#line 500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_add_ne_eq($extension_UInt64_470_u64 & $this , T rhs)  -> typename $extension_UInt64_470_u64&;
	#line 504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_add_mod($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_UInt64_470_u64;
	#line 511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_add_mod_eq($extension_UInt64_470_u64 & $this , T rhs) noexcept -> typename $extension_UInt64_470_u64&;
	#line 515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_add_or($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_UInt64_470_u64;
	#line 522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_add_or_eq($extension_UInt64_470_u64 & $this , T rhs) noexcept -> typename $extension_UInt64_470_u64&;
	#line 526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_add_mod_qst($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_UInt64_470_u64, bool>;
	#line 534 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_qst($extension_UInt64_470_u64 & $this )  -> typename $extension_UInt64_470_u64&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_qst_postfix($extension_UInt64_470_u64 & $this)  -> decltype(auto);
	#line 537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_ne($extension_UInt64_470_u64 & $this )  -> typename $extension_UInt64_470_u64&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_ne_postfix($extension_UInt64_470_u64 & $this)  -> decltype(auto);
	#line 540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_mod($extension_UInt64_470_u64 & $this )  -> typename $extension_UInt64_470_u64&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_mod_postfix($extension_UInt64_470_u64 & $this)  -> decltype(auto);
	#line 543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_or($extension_UInt64_470_u64 & $this )  -> typename $extension_UInt64_470_u64&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_or_postfix($extension_UInt64_470_u64 & $this)  -> decltype(auto);
	#line 547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto CarryingAdd($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, $extension_UInt64_470_u64 rhs, bool carry) noexcept -> const std::tuple<$extension_UInt64_470_u64, bool>;
	#line 556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto BorrowingSub($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, $extension_UInt64_470_u64 rhs, bool carry) noexcept -> const std::tuple<$extension_UInt64_470_u64, bool>;
	#line 565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_sub_qst($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_UInt64_470_u64>;
	#line 574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_sub_qst_eq($extension_UInt64_470_u64 & $this , T rhs) noexcept -> typename $extension_UInt64_470_u64&;
	#line 585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_sub_ne($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt64_470_u64;
	#line 592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_sub_ne_eq($extension_UInt64_470_u64 & $this , T rhs)  -> typename $extension_UInt64_470_u64&;
	#line 596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_sub_mod($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_UInt64_470_u64;
	#line 603 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_sub_mod_eq($extension_UInt64_470_u64 & $this , T rhs) noexcept -> typename $extension_UInt64_470_u64&;
	#line 607 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_sub_or($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_UInt64_470_u64;
	#line 614 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_sub_or_eq($extension_UInt64_470_u64 & $this , T rhs) noexcept -> typename $extension_UInt64_470_u64&;
	#line 618 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_sub_mod_qst($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_UInt64_470_u64, bool>;
	#line 626 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_qst($extension_UInt64_470_u64 & $this )  -> typename $extension_UInt64_470_u64&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_qst_postfix($extension_UInt64_470_u64 & $this)  -> decltype(auto);
	#line 629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_ne($extension_UInt64_470_u64 & $this )  -> typename $extension_UInt64_470_u64&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_ne_postfix($extension_UInt64_470_u64 & $this)  -> decltype(auto);
	#line 632 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_mod($extension_UInt64_470_u64 & $this )  -> typename $extension_UInt64_470_u64&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_mod_postfix($extension_UInt64_470_u64 & $this)  -> decltype(auto);
	#line 635 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_or($extension_UInt64_470_u64 & $this )  -> typename $extension_UInt64_470_u64&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_or_postfix($extension_UInt64_470_u64 & $this)  -> decltype(auto);
	#line 639 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mul_qst($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_UInt64_470_u64>;
	#line 648 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mul_qst_eq($extension_UInt64_470_u64 & $this , T rhs) noexcept -> typename $extension_UInt64_470_u64&;
	#line 659 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mul_ne($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt64_470_u64;
	#line 666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mul_ne_eq($extension_UInt64_470_u64 & $this , T rhs)  -> typename $extension_UInt64_470_u64&;
	#line 670 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mul_mod($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_UInt64_470_u64;
	#line 677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mul_mod_eq($extension_UInt64_470_u64 & $this , T rhs) noexcept -> typename $extension_UInt64_470_u64&;
	#line 681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mul_or($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_UInt64_470_u64;
	#line 688 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mul_or_eq($extension_UInt64_470_u64 & $this , T rhs) noexcept -> typename $extension_UInt64_470_u64&;
	#line 692 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mul_mod_qst($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_UInt64_470_u64, bool>;
	#line 701 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_mul_gt($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, $extension_UInt64_470_u64 rhs) noexcept -> const std::tuple<Builtin::u64, Builtin::u64>;
	#line 710 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto CarryingMul($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, $extension_UInt64_470_u64 rhs, $extension_UInt64_470_u64 carry) noexcept -> const std::tuple<Builtin::u64, Builtin::u64>;
	#line 718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_bsl_qst($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_UInt64_470_u64>;
	#line 727 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_bsl_qst_eq($extension_UInt64_470_u64 & $this , T rhs) noexcept -> typename $extension_UInt64_470_u64&;
	#line 738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_bsl_ne($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt64_470_u64;
	#line 739 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_bsl_ne_eq($extension_UInt64_470_u64 & $this , T rhs)  -> typename $extension_UInt64_470_u64&;
	#line 743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_bsl_mod($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt64_470_u64;
	#line 744 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_eq($extension_UInt64_470_u64 & $this , T rhs)  -> typename $extension_UInt64_470_u64&;
	#line 748 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_bsl_or($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt64_470_u64;
	#line 749 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_bsl_or_eq($extension_UInt64_470_u64 & $this , T rhs)  -> typename $extension_UInt64_470_u64&;
	#line 754 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_qst($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_UInt64_470_u64, bool>;
	#line 763 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_UInt64_470_u64>;
	#line 773 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst_eq($extension_UInt64_470_u64 & $this , T rhs) noexcept -> typename $extension_UInt64_470_u64&;
	#line 784 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mod_qst($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_UInt64_470_u64>;
	#line 793 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mod_qst_eq($extension_UInt64_470_u64 & $this , T rhs) noexcept -> typename $extension_UInt64_470_u64&;
	#line 804 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mod_ne($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt64_470_u64;
	#line 805 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mod_ne_eq($extension_UInt64_470_u64 & $this , T rhs)  -> typename $extension_UInt64_470_u64&;
	#line 809 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mod_mod($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt64_470_u64;
	#line 810 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mod_mod_eq($extension_UInt64_470_u64 & $this , T rhs)  -> typename $extension_UInt64_470_u64&;
	#line 815 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mod_mod_qst($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_UInt64_470_u64, bool>;
	#line 824 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_sub_qst($extension_UInt64_470_u64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::Nullable<$extension_UInt64_470_u64>;
	#line 827 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline auto _operator_sub_ne($extension_UInt64_470_u64 const& $this LIFETIMEBOUND)  -> const typename $extension_UInt64_470_u64;
	#line 832 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_sub_mod($extension_UInt64_470_u64 const& $this LIFETIMEBOUND)  -> const typename $extension_UInt64_470_u64;
	#line 840 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_sub_or($extension_UInt64_470_u64 const& $this LIFETIMEBOUND)  -> const typename $extension_UInt64_470_u64;
	#line 843 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_sub_mod_qst($extension_UInt64_470_u64 const& $this LIFETIMEBOUND)  -> const std::tuple<$extension_UInt64_470_u64, bool>;
	#line 851 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_lt_lt_qst($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<$extension_UInt64_470_u64>;
	#line 859 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_lt_lt_qst_eq($extension_UInt64_470_u64 & $this , Builtin::i32 amount) noexcept -> typename $extension_UInt64_470_u64&;
	#line 867 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_lt_lt_ne($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_UInt64_470_u64;
	#line 875 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_lt_lt_ne_eq($extension_UInt64_470_u64 & $this , Builtin::i32 amount)  -> typename $extension_UInt64_470_u64&;
	#line 877 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_lt_lt_mod($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename $extension_UInt64_470_u64;
	#line 880 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_lt_lt_mod_eq($extension_UInt64_470_u64 & $this , Builtin::i32 amount) noexcept -> typename $extension_UInt64_470_u64&;
	#line 882 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_lt_lt_mod_qst($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<$extension_UInt64_470_u64, bool>;
	#line 885 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_gt_gt_qst($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<$extension_UInt64_470_u64>;
	#line 893 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_gt_gt_qst_eq($extension_UInt64_470_u64 & $this , Builtin::i32 amount) noexcept -> typename $extension_UInt64_470_u64&;
	#line 901 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_gt_gt_ne($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_UInt64_470_u64;
	#line 909 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_gt_gt_ne_eq($extension_UInt64_470_u64 & $this , Builtin::i32 amount)  -> typename $extension_UInt64_470_u64&;
	#line 911 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_gt_gt_mod($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename $extension_UInt64_470_u64;
	#line 914 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_gt_gt_mod_eq($extension_UInt64_470_u64 & $this , Builtin::i32 amount) noexcept -> typename $extension_UInt64_470_u64&;
	#line 916 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_gt_gt_mod_qst($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<$extension_UInt64_470_u64, bool>;
	#line 921 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_xor_xor_qst($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const Builtin::Nullable<$extension_UInt64_470_u64>;
	#line 950 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_xor_xor_qst_eq($extension_UInt64_470_u64 & $this , Builtin::u32 exp) noexcept -> typename $extension_UInt64_470_u64&;
	#line 958 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_xor_xor_ne($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename $extension_UInt64_470_u64;
	#line 979 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_xor_xor_ne_eq($extension_UInt64_470_u64 & $this , Builtin::u32 exp)  -> typename $extension_UInt64_470_u64&;
	#line 981 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_xor_xor_mod($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename $extension_UInt64_470_u64;
	#line 1013 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_xor_xor_mod_eq($extension_UInt64_470_u64 & $this , Builtin::u32 exp) noexcept -> typename $extension_UInt64_470_u64&;
	#line 1015 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_xor_xor_or($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename $extension_UInt64_470_u64;
	#line 1024 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_xor_xor_or_eq($extension_UInt64_470_u64 & $this , Builtin::u32 exp) noexcept -> typename $extension_UInt64_470_u64&;
	#line 1026 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_xor_xor_mod_qst($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const std::tuple<$extension_UInt64_470_u64, bool>;
	#line 1056 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getCheckedAbs($extension_UInt64_470_u64 const& $this ) -> const Builtin::Nullable<$extension_UInt64_470_u64>;
	#line 1058 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getStrictAbs($extension_UInt64_470_u64 const& $this ) -> const $extension_UInt64_470_u64;
	#line 1060 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getWrappingAbs($extension_UInt64_470_u64 const& $this ) -> const $extension_UInt64_470_u64;
	#line 1062 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getSaturatingAbs($extension_UInt64_470_u64 const& $this ) -> const $extension_UInt64_470_u64;
	#line 1064 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getOverflowingAbs($extension_UInt64_470_u64 const& $this ) -> const std::tuple<$extension_UInt64_470_u64, bool>;
	#line 470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt64_470_u64, ICheckedArithmetic, ICheckedArithmetic, $extension_UInt64_470_u64);
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
#line 1067 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	using $extension_UInt64_1067_u64 = Builtin::u64;
	#line 1067 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ADV_CHECK_INTERFACE(IBinaryInteger, IBinaryInteger);
	#line 1106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto NextMultipleOf($extension_UInt64_1067_u64 const& $this LIFETIMEBOUND, $extension_UInt64_1067_u64 rhs)  -> const typename $extension_UInt64_1067_u64;
	#line 1114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto CheckedNextMultipleOf($extension_UInt64_1067_u64 const& $this LIFETIMEBOUND, $extension_UInt64_1067_u64 rhs) noexcept -> const Builtin::Nullable<$extension_UInt64_1067_u64>;
	#line 1068 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class __TT> struct $static_getIsSigned; template<> struct $static_getIsSigned<$extension_UInt64_1067_u64> { static inline constexpr auto get() -> const bool; };
	#line 1070 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getTrailingZeroCount($extension_UInt64_1067_u64 const& $this ) -> const Builtin::u32;
	#line 1071 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getTrailingOneCount($extension_UInt64_1067_u64 const& $this ) -> const Builtin::u32;
	#line 1072 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getByteCount($extension_UInt64_1067_u64 const& $this ) -> const Builtin::u32;
	#line 1073 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getMinimalBitWidth($extension_UInt64_1067_u64 const& $this ) -> const Builtin::u32;
	#line 1076 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ASTRUMSTD_API auto getCheckedIsqrt($extension_UInt64_1067_u64 const& $this ) -> const Builtin::Nullable<$extension_UInt64_1067_u64>;
	#line 1083 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline auto getIsqrt($extension_UInt64_1067_u64 const& $this ) -> const $extension_UInt64_1067_u64;
	#line 1092 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getLog2Ceiling($extension_UInt64_1067_u64 const& $this ) -> const $extension_UInt64_1067_u64;
	#line 1126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getPrevPow2($extension_UInt64_1067_u64 const& $this ) -> const $extension_UInt64_1067_u64;
	#line 1137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getNextPow2($extension_UInt64_1067_u64 const& $this ) -> const $extension_UInt64_1067_u64;
	#line 1149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getCheckedNextPow2($extension_UInt64_1067_u64 const& $this ) -> const Builtin::Nullable<$extension_UInt64_1067_u64>;
	#line 1161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getWrappingNextPow2($extension_UInt64_1067_u64 const& $this ) -> const $extension_UInt64_1067_u64;
	#line 1067 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt64_1067_u64, IBinaryInteger, IBinaryInteger, $extension_UInt64_1067_u64);
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
#line 1172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	using $extension_UInt64_1172_u64 = Builtin::u64;
	#line 1172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ADV_CHECK_INTERFACE(IFixedWidthInteger, IFixedWidthInteger);
	#line 1198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto RotateLeft($extension_UInt64_1172_u64 const& $this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename $extension_UInt64_1172_u64;
	#line 1199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto RotateRight($extension_UInt64_1172_u64 const& $this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename $extension_UInt64_1172_u64;
	#line 1173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class __TT> struct $static_getBitWidth; template<> struct $static_getBitWidth<$extension_UInt64_1172_u64> { static inline constexpr auto get() -> const Builtin::u32; };
	#line 1175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getLeadingZeroCount($extension_UInt64_1172_u64 const& $this ) -> const Builtin::u32;
	#line 1176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getLeadingOneCount($extension_UInt64_1172_u64 const& $this ) -> const Builtin::u32;
	#line 1177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getPopCount($extension_UInt64_1172_u64 const& $this ) -> const Builtin::u32;
	#line 1178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getZeroCount($extension_UInt64_1172_u64 const& $this ) -> const Builtin::u32;
	#line 1179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getByteSwapped($extension_UInt64_1172_u64 const& $this ) -> const $extension_UInt64_1172_u64;
	#line 1180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getBigEndian($extension_UInt64_1172_u64 const& $this ) -> const $extension_UInt64_1172_u64;
	#line 1187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getLittleEndian($extension_UInt64_1172_u64 const& $this ) -> const $extension_UInt64_1172_u64;
	#line 1194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getReverseBits($extension_UInt64_1172_u64 const& $this ) -> const $extension_UInt64_1172_u64;
	#line 1196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getShortestBitLength($extension_UInt64_1172_u64 const& $this ) -> const Builtin::u32;
	#line 1172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt64_1172_u64, IFixedWidthInteger, IFixedWidthInteger, $extension_UInt64_1172_u64);
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
#line 1203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	using $extension_UInt64_1203_u64 = Builtin::u64;
	#line 1203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ADV_CHECK_INTERFACE(IBinaryIntegerFormatInfo, IBinaryIntegerFormatInfo);
	#line 1211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto IsGreaterThanAsUnsigned($extension_UInt64_1203_u64 const& $this LIFETIMEBOUND, $extension_UInt64_1203_u64 rhs) noexcept -> const bool;
	#line 1204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class __TT> struct $static_getMaxDigitCount; template<> struct $static_getMaxDigitCount<$extension_UInt64_1203_u64> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class __TT> struct $static_getMaxHexDigitCount; template<> struct $static_getMaxHexDigitCount<$extension_UInt64_1203_u64> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class __TT> struct $static_getMaxValueDiv10; template<> struct $static_getMaxValueDiv10<$extension_UInt64_1203_u64> { static inline constexpr auto get() -> const $extension_UInt64_1203_u64; };
	#line 1208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getMultiplyBy10($extension_UInt64_1203_u64 const& $this ) -> const $extension_UInt64_1203_u64;
	#line 1209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getMultiplyBy16($extension_UInt64_1203_u64 const& $this ) -> const $extension_UInt64_1203_u64;
	#line 1203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt64_1203_u64, IBinaryIntegerFormatInfo, IBinaryIntegerFormatInfo, $extension_UInt64_1203_u64);
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
template<class __TT> struct $static_DefaultClamp;
template<class __TT> struct $static_getDefaultClamp;
template<class __TT> struct $static_CheckedLog10;
template<class __TT> struct $static_getCheckedLog10;
template<class __TT> struct $static_SafeNegate;
template<class __TT> struct $static_getSafeNegate;
template<class __TT> struct $static_TrailingZeroCount;
template<class __TT> struct $static_getTrailingZeroCount;
template<class __TT> struct $static_Isqrt64;
template<class __TT> struct $static_getIsqrt64;
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
template<class __TT> struct $static_SafeDivExact;
template<class __TT> struct $static_getSafeDivExact;
template<class __TT> struct $static_BorrowingSub;
template<class __TT> struct $static_getBorrowingSub;
template<class __TT> struct $static_ReverseBits64u;
template<class __TT> struct $static_getReverseBits64u;
template<class __TT> struct $static_ByteSwap64;
template<class __TT> struct $static_getByteSwap64;
template<class __TT> struct $static_IsLittleEndian;
template<class __TT> struct $static_getIsLittleEndian;
template<class __TT> struct $static_ByteCount;
template<class __TT> struct $static_getByteCount;
template<class __TT> struct $static_IsBigEndian;
template<class __TT> struct $static_getIsBigEndian;
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
template<class __TT> struct $static_NarrowToInt16;
template<class __TT> struct $static_getNarrowToInt16;
template<class __TT> struct $static_WideningMul64u;
template<class __TT> struct $static_getWideningMul64u;
template<class __TT> struct $static_ToInt64;
template<class __TT> struct $static_getToInt64;
template<class __TT> struct $static_ToUInt32;
template<class __TT> struct $static_getToUInt32;
template<class __TT> struct $static_StrictSubtract;
template<class __TT> struct $static_getStrictSubtract;
template<class __TT> struct $static_Div;
template<class __TT> struct $static_getDiv;
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
template<class __TT> struct $static_HashCode;
template<class __TT> struct $static_getHashCode;
template<class __TT> struct $static_CarryingMul64u;
template<class __TT> struct $static_getCarryingMul64u;
template<class __TT> struct $static_BitsRotateLeft;
template<class __TT> struct $static_getBitsRotateLeft;
template<class __TT> struct $static_SafeDivide;
template<class __TT> struct $static_getSafeDivide;
template<class __TT> struct $static_SafeModulus;
template<class __TT> struct $static_getSafeModulus;
template<class __TT> struct $static_Abs;
template<class __TT> struct $static_getAbs;
template<class __TT> struct $static_IsFinite;
template<class __TT> struct $static_getIsFinite;
template<class __TT> struct $static_IsInteger;
template<class __TT> struct $static_getIsInteger;
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
#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto $static_getMinValue<$extension_UInt64_15_u64>::get() -> const $extension_UInt64_15_u64
	{
		#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(Builtin::u64(0ULL)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto $static_getMaxValue<$extension_UInt64_15_u64>::get() -> const $extension_UInt64_15_u64
	{
		#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(Builtin::u64(18446744073709551615ULL)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	
} namespace $extensions { using namespace System;
#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto operator<=>($extension_UInt64_20_u64 const& $this LIFETIMEBOUND, Builtin::Nullable<$extension_UInt64_20_u64> rhs) noexcept -> const Builtin::i32
	{
		#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		{
			#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			if ((!Builtin::Is(rhs, nullptr))) {
				#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				auto __tmp0 = *rhs; const auto& rhs = __tmp0;
				
				#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				return $this <=> rhs;
			}
		}
		#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return Builtin::i32(1);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_gt_gt_gt($extension_UInt64_20_u64 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_UInt64_20_u64
	{
		#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY($this >> amount); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_gt_gt_gt_eq($extension_UInt64_20_u64 & $this , Builtin::i32 amount)  -> typename $extension_UInt64_20_u64&
	{
		#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY($this >>= amount); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_lt_lt_bsl($extension_UInt64_20_u64 const& $this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename $extension_UInt64_20_u64
	{
		#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if ((amount <=> ADV_USPCS(BitWidth, $extension_UInt64_20_u64)()) >= 0) {
			#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return Builtin::u64(0ULL);
		}
		#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return Builtin::UncheckedShiftLeft($this, Builtin::Cast<true, Builtin::i32>(amount));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_lt_lt_bsl_eq($extension_UInt64_20_u64 & $this , Builtin::u32 amount) noexcept -> typename $extension_UInt64_20_u64&
	{
		#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_lt_lt_bsl)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_gt_gt_bsl($extension_UInt64_20_u64 const& $this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename $extension_UInt64_20_u64
	{
		#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if ((amount <=> ADV_USPCS(BitWidth, $extension_UInt64_20_u64)()) >= 0) {
			#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return Builtin::u64(0ULL);
		}
		#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return Builtin::UncheckedShiftRight($this, Builtin::Cast<true, Builtin::i32>(amount));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_gt_gt_bsl_eq($extension_UInt64_20_u64 & $this , Builtin::u32 amount) noexcept -> typename $extension_UInt64_20_u64&
	{
		#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_gt_gt_bsl)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getHashCode($extension_UInt64_20_u64 const & $this ) -> const Builtin::u64
	{
		#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	
} namespace $extensions { using namespace System;
#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToBoolean($extension_UInt64_88_u64 const& $this LIFETIMEBOUND) noexcept -> const bool
	{
		#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY($this != Builtin::i32(0)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToInt8($extension_UInt64_88_u64 const& $this LIFETIMEBOUND)  -> const Builtin::i8
	{
		#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (($this <=> Builtin::i32(0x7F)) > 0) {
			#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return Builtin::Cast<true, Builtin::i8>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToUInt8($extension_UInt64_88_u64 const& $this LIFETIMEBOUND)  -> const Builtin::u8
	{
		#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (($this <=> Builtin::i32(0xFF)) > 0) {
			#line 98 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return Builtin::Cast<true, Builtin::u8>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToInt16($extension_UInt64_88_u64 const& $this LIFETIMEBOUND)  -> const Builtin::i16
	{
		#line 103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (($this <=> Builtin::i32(0x7FFF)) > 0) {
			#line 104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return Builtin::Cast<true, Builtin::i16>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToUInt16($extension_UInt64_88_u64 const& $this LIFETIMEBOUND)  -> const Builtin::u16
	{
		#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (($this <=> Builtin::i32(0xFFFF)) > 0) {
			#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return Builtin::Cast<true, Builtin::u16>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToInt32($extension_UInt64_88_u64 const& $this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (($this <=> Builtin::i32(0x7FFFFFFF)) > 0) {
			#line 116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return Builtin::Cast<true, Builtin::i32>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToUInt32($extension_UInt64_88_u64 const& $this LIFETIMEBOUND)  -> const Builtin::u32
	{
		#line 121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (($this <=> Builtin::i64(0xFFFFFFFFLL)) > 0) {
			#line 122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return Builtin::Cast<true, Builtin::u32>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToInt64($extension_UInt64_88_u64 const& $this LIFETIMEBOUND)  -> const Builtin::i64
	{
		#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (($this <=> Builtin::i64(0x7FFFFFFFFFFFFFFFLL)) > 0) {
			#line 128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return Builtin::Cast<true, Builtin::i64>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToUInt64($extension_UInt64_88_u64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u64
	{
		#line 132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToInt128($extension_UInt64_88_u64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i128
	{
		#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToUInt128($extension_UInt64_88_u64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u128
	{
		#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToIsize($extension_UInt64_88_u64 const& $this LIFETIMEBOUND)  -> const Builtin::isize
	{
		#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if constexpr (Builtin::usize(sizeof(Builtin::isize)) == Builtin::i32(32)) {
			#line 138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return ADV_UFCS(ToInt32)($this.$ref());
		} else {
			#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			{
				#line 140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				return ADV_UFCS(ToInt64)($this.$ref());
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToUsize($extension_UInt64_88_u64 const& $this LIFETIMEBOUND)  -> const Builtin::usize
	{
		#line 145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if constexpr (Builtin::usize(sizeof(Builtin::isize)) == Builtin::i32(32)) {
			#line 146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return ADV_UFCS(ToUInt32)($this.$ref());
		} else {
			#line 147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			{
				#line 148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				return $this;
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToFloat32($extension_UInt64_88_u64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::f32
	{
		#line 151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToFloat64($extension_UInt64_88_u64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::f64
	{
		#line 152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToByte($extension_UInt64_88_u64 const& $this LIFETIMEBOUND)  -> const Builtin::u8
	{
		#line 154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (($this <=> Builtin::i32(0xFF)) > 0) {
			#line 155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return Builtin::Cast<true, Builtin::u8>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToChar($extension_UInt64_88_u64 const& $this LIFETIMEBOUND)  -> const Builtin::char32
	{
		#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (($this <=> Builtin::u32(0x10FFFFU)) > 0) {
			#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return Builtin::char32{Builtin::Cast<true, Builtin::u32>($this)};
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	
} namespace $extensions { using namespace System;
#line 172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_div_mod($extension_UInt64_170_u64 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_UInt64_170_u64, $extension_UInt64_170_u64>
	{
		#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator /% implemented only for integer types");
		#line 175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return std::make_tuple(ADV_UFCS(_operator_bsl)($this, rhs), $this % rhs);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_div_not($extension_UInt64_170_u64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt64_170_u64
	{
		#line 180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::Auto<decltype($this)> result = $this; 
		#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		result /= rhs;
		#line 182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_div_not_eq($extension_UInt64_170_u64 & $this , auto rhs)  -> typename $extension_UInt64_170_u64&
	{
		#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY($this /= rhs); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_div_lt($extension_UInt64_170_u64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt64_170_u64
	{
		#line 189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if constexpr (Builtin::TypeIs<T, IBinaryInteger>()) {
			#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return ADV_UFCS(_operator_bsl)($this, rhs);
		} else {
			#line 191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			{
				#line 192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				return Builtin::Cast<true, $extension_UInt64_170_u64>((ADV_UFCS(_operator_div_lt)(Builtin::f64{$this}, rhs)));
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_div_lt_eq($extension_UInt64_170_u64 & $this , auto rhs)  -> typename $extension_UInt64_170_u64&
	{
		#line 196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY($this = $extension_UInt64_170_u64{ADV_UFCS(_operator_div_lt)($this, rhs)}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mod_lt($extension_UInt64_170_u64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt64_170_u64
	{
		#line 200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		const Builtin::Auto<decltype($this % rhs)> result = $this % rhs; 
		#line 201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_gt_gt_gt)((result ^ rhs), Builtin::i32{ADV_USPCS(BitWidth, $extension_UInt64_170_u64)() - Builtin::i32(1)}))> signDiff = ADV_UFCS(_operator_gt_gt_gt)((result ^ rhs), Builtin::i32{ADV_USPCS(BitWidth, $extension_UInt64_170_u64)() - Builtin::i32(1)}); 
		#line 202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		const Builtin::Auto<decltype((result != Builtin::i32(0)) & (signDiff != Builtin::i32(0)))> needAdjust = (result != Builtin::i32(0)) & (signDiff != Builtin::i32(0)); 
		#line 203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return result + (needAdjust ? rhs : T{});
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_mod_lt_eq($extension_UInt64_170_u64 & $this , auto rhs)  -> typename $extension_UInt64_170_u64&
	{
		#line 206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY($this = $extension_UInt64_170_u64{ADV_UFCS(_operator_mod_lt)($this, rhs)}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_div_gt($extension_UInt64_170_u64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt64_170_u64
	{
		#line 210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if constexpr (Builtin::TypeIs<T, IBinaryInteger>()) {
			#line 211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			const auto& [div, rem] = ADV_UFCS(_operator_div_mod)($this, rhs);
			#line 212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return (rem <=> Builtin::i32(0)) > 0 ? div + Builtin::i32(1) : div;
		} else {
			#line 213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			{
				#line 214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				return Builtin::Cast<true, $extension_UInt64_170_u64>((ADV_UFCS(_operator_div_gt)(Builtin::f64{$this}, rhs)));
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_div_gt_eq($extension_UInt64_170_u64 & $this , auto rhs)  -> typename $extension_UInt64_170_u64&
	{
		#line 218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY($this = $extension_UInt64_170_u64{ADV_UFCS(_operator_div_gt)($this, rhs)}); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	
} namespace $extensions { using namespace System;
#line 223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_bsl($extension_UInt64_221_u64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt64_221_u64
	{
		#line 223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Div)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_bsl_eq($extension_UInt64_221_u64 & $this , T rhs)  -> typename $extension_UInt64_221_u64&
	{
		#line 225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(DivAssign)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl($extension_UInt64_221_u64 const& $this LIFETIMEBOUND, T rhs)  -> const Builtin::Nullable<$extension_UInt64_221_u64>
	{
		#line 232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\? implemented only for integer types");
		#line 233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		$extension_UInt64_221_u64 result{}; 
		#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (Builtin::DivExact($this, rhs, result)) {
			#line 235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return result;
		}
		#line 237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return nullptr;
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	
} namespace $extensions { using namespace System;
#line 244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_xor_xor($extension_UInt64_241_u64 const& $this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename $extension_UInt64_241_u64
	{
		#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return Builtin::u64(1ULL);
		}
		#line 251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::Auto<decltype(Builtin::u64(1ULL))> result = Builtin::u64(1ULL); 
		#line 254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (std::is_constant_evaluated()) {
			#line 255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			while ((exp <=> Builtin::i32(1)) > 0) 
			{
				#line 256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
					#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
					result *= base;
				}
				#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
				#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				base *= base;
			}
			#line 262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return result * base;
		} else {
			#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			{
				#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				for (;;) 
				{
					#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
					if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
						#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
						result *= base;
						#line 267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
						if (exp == Builtin::i32(1)) {
							#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
							return result;
						}
					}
					#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
					ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
					#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
					base *= base;
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_xor_xor_eq($extension_UInt64_241_u64 & $this , Builtin::u32 exp)  -> typename $extension_UInt64_241_u64&
	{
		#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_xor_xor)($this, exp)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	
} namespace $extensions { using namespace System;
#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto MaxMagnitude($extension_UInt64_279_u64 const& $this LIFETIMEBOUND, $extension_UInt64_279_u64 rhs) noexcept -> const typename $extension_UInt64_279_u64
	{
		#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Max)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto MaxMagnitudeNumber($extension_UInt64_279_u64 const& $this LIFETIMEBOUND, $extension_UInt64_279_u64 rhs) noexcept -> const typename $extension_UInt64_279_u64
	{
		#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Max)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto MinMagnitude($extension_UInt64_279_u64 const& $this LIFETIMEBOUND, $extension_UInt64_279_u64 rhs) noexcept -> const typename $extension_UInt64_279_u64
	{
		#line 306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Min)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto MinMagnitudeNumber($extension_UInt64_279_u64 const& $this LIFETIMEBOUND, $extension_UInt64_279_u64 rhs) noexcept -> const typename $extension_UInt64_279_u64
	{
		#line 307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Min)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto NarrowToInt8($extension_UInt64_279_u64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i8
	{
		#line 320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i8>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto NarrowToUInt8($extension_UInt64_279_u64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u8
	{
		#line 321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u8>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto NarrowToInt16($extension_UInt64_279_u64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i16
	{
		#line 322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i16>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto NarrowToUInt16($extension_UInt64_279_u64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u16
	{
		#line 323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u16>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto NarrowToInt32($extension_UInt64_279_u64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i32
	{
		#line 324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i32>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto NarrowToUInt32($extension_UInt64_279_u64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u32
	{
		#line 325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u32>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto NarrowToInt64($extension_UInt64_279_u64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i64
	{
		#line 326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i64>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto NarrowToUInt64($extension_UInt64_279_u64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u64
	{
		#line 327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto NarrowToInt128($extension_UInt64_279_u64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i128
	{
		#line 328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto NarrowToUInt128($extension_UInt64_279_u64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u128
	{
		#line 329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto NarrowToIsize($extension_UInt64_279_u64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::isize
	{
		#line 330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::isize>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto NarrowToUsize($extension_UInt64_279_u64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::usize
	{
		#line 331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::usize>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto $static_getOne<$extension_UInt64_279_u64>::get() -> const $extension_UInt64_279_u64
	{
		#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(Builtin::u64(1ULL)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto $static_getZero<$extension_UInt64_279_u64>::get() -> const $extension_UInt64_279_u64
	{
		#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(Builtin::u64(0ULL)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto $static_getRadix<$extension_UInt64_279_u64>::get() -> const Builtin::i32
	{
		#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(2)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getAbs($extension_UInt64_279_u64 const & $this ) -> const $extension_UInt64_279_u64
	{
		#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsCanonical($extension_UInt64_279_u64 const & $this ) -> const bool
	{
		#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsComplexNumber($extension_UInt64_279_u64 const & $this ) -> const bool
	{
		#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsEvenInteger($extension_UInt64_279_u64 const & $this ) -> const bool
	{
		#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(($this & Builtin::u64(1ULL)) == Builtin::i32(0)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsFinite($extension_UInt64_279_u64 const & $this ) -> const bool
	{
		#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsImaginaryNumber($extension_UInt64_279_u64 const & $this ) -> const bool
	{
		#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsInfinity($extension_UInt64_279_u64 const & $this ) -> const bool
	{
		#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsInteger($extension_UInt64_279_u64 const & $this ) -> const bool
	{
		#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsNaN($extension_UInt64_279_u64 const & $this ) -> const bool
	{
		#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsNegative($extension_UInt64_279_u64 const & $this ) -> const bool
	{
		#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsNegativeInfinity($extension_UInt64_279_u64 const & $this ) -> const bool
	{
		#line 294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsNormal($extension_UInt64_279_u64 const & $this ) -> const bool
	{
		#line 295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY($this != Builtin::i32(0)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsOddInteger($extension_UInt64_279_u64 const & $this ) -> const bool
	{
		#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(($this & Builtin::u64(1ULL)) != Builtin::i32(0)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsPositive($extension_UInt64_279_u64 const & $this ) -> const bool
	{
		#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsPositiveInfinity($extension_UInt64_279_u64 const & $this ) -> const bool
	{
		#line 298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsRealNumber($extension_UInt64_279_u64 const & $this ) -> const bool
	{
		#line 299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsSubnormal($extension_UInt64_279_u64 const & $this ) -> const bool
	{
		#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsZero($extension_UInt64_279_u64 const & $this ) -> const bool
	{
		#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY($this == Builtin::i32(0)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	
} namespace $extensions { using namespace System;
#line 335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto $static_getIsUnsigned<$extension_UInt64_334_u64>::get() -> const bool
	{
		#line 335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	
} namespace $extensions { using namespace System;
#line 341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto CopySign($extension_UInt64_338_u64 const& $this LIFETIMEBOUND, $extension_UInt64_338_u64 sign) noexcept -> const typename $extension_UInt64_338_u64
	{
		#line 341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto Max($extension_UInt64_338_u64 const& $this LIFETIMEBOUND, $extension_UInt64_338_u64 rhs) noexcept -> const typename $extension_UInt64_338_u64
	{
		#line 343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultMax)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto MaxNumber($extension_UInt64_338_u64 const& $this LIFETIMEBOUND, $extension_UInt64_338_u64 rhs) noexcept -> const typename $extension_UInt64_338_u64
	{
		#line 344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Max)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto Min($extension_UInt64_338_u64 const& $this LIFETIMEBOUND, $extension_UInt64_338_u64 rhs) noexcept -> const typename $extension_UInt64_338_u64
	{
		#line 345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultMin)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto MinNumber($extension_UInt64_338_u64 const& $this LIFETIMEBOUND, $extension_UInt64_338_u64 rhs) noexcept -> const typename $extension_UInt64_338_u64
	{
		#line 346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Min)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto Clamp($extension_UInt64_338_u64 const& $this LIFETIMEBOUND, $extension_UInt64_338_u64 min, $extension_UInt64_338_u64 max)  -> const typename $extension_UInt64_338_u64
	{
		#line 347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultClamp)($this, min, max)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getSign($extension_UInt64_338_u64 const & $this ) -> const Builtin::i32
	{
		#line 339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY($this == Builtin::i32(0) ? Builtin::i32(0) : +Builtin::i32(1)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	
} namespace $extensions { using namespace System;
#line 414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto CheckedLog($extension_UInt64_350_u64 const& $this LIFETIMEBOUND, $extension_UInt64_350_u64 base) noexcept -> const Builtin::Nullable<$extension_UInt64_350_u64>
	{
		#line 416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if ($this == Builtin::i32(0) || (base <=> Builtin::i32(1)) <= 0) {
			#line 417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return nullptr;
		}
		#line 420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (std::is_constant_evaluated()) {
			#line 421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			if (base == Builtin::i32(2)) {
				#line 422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				return ADV_UPCS(CheckedLog2)($this.$ref());
			}
			#line 424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			if (base == Builtin::i32(10)) {
				#line 425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				return ADV_UPCS(CheckedLog10)($this.$ref());
			}
		}
		#line 429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (($this <=> base) < 0) {
			#line 430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return Builtin::u64(0ULL);
		}
		#line 433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		$extension_UInt64_350_u64 n = Builtin::u64(1ULL); 
		#line 434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::Auto<decltype(base)> r = base; 
		#line 435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_bsl)($this, base))> baseRatio = ADV_UFCS(_operator_bsl)($this, base); 
		#line 436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		while ((r <=> baseRatio) <= 0) 
		{
			#line 437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			++n;
			#line 438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			r *= base;
		}
		#line 441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return n;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto Midpoint($extension_UInt64_350_u64 const& $this LIFETIMEBOUND, $extension_UInt64_350_u64 rhs) noexcept -> const typename $extension_UInt64_350_u64
	{
		#line 457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY((($this ^ rhs) >> Builtin::i32(1)) + ($this & rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto IsMultipleOf($extension_UInt64_350_u64 const& $this LIFETIMEBOUND, $extension_UInt64_350_u64 rhs) noexcept -> const bool
	{
		#line 462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (rhs == Builtin::i32(0)) {
			#line 463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return $this == Builtin::i32(0);
		}
		#line 466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return $this % rhs == Builtin::i32(0);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto $static_getAllBitsSet<$extension_UInt64_350_u64>::get() -> const $extension_UInt64_350_u64
	{
		#line 352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(MaxValue, Builtin::u64)()); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsPow2($extension_UInt64_350_u64 const & $this ) -> const bool
	{
		#line 355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(PopCount)($this.$ref()) == Builtin::i32(1)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getCheckedLog2($extension_UInt64_350_u64 const & $this ) -> const Builtin::Nullable<$extension_UInt64_350_u64>
	{
		#line 361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if ($this == Builtin::i32(0)) {
			#line 362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return nullptr;
		}
		#line 365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return Builtin::Cast<true, $extension_UInt64_350_u64>((ADV_USPCS(BitWidth, $extension_UInt64_350_u64)() - Builtin::i32(1) - ADV_UPCS(LeadingZeroCount)($this.$ref())));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getLog2($extension_UInt64_350_u64 const & $this ) -> const $extension_UInt64_350_u64
	{
		#line 371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (const auto result = ADV_UPCS(CheckedLog2)($this.$ref())) {
			{
				#line 371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				return result;
			}
		}
		#line 374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getCheckedLog10($extension_UInt64_350_u64 const & $this ) -> const Builtin::Nullable<$extension_UInt64_350_u64>
	{
		#line 381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if ($this == Builtin::i32(0)) {
			#line 382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return nullptr;
		}
		#line 385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		constexpr Builtin::u32 C1 = Builtin::u32(0b01100000000000000000U) - Builtin::i32(10);
		#line 386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		constexpr Builtin::u32 C2 = Builtin::u32(0b10000000000000000000U) - Builtin::i32(100);
		#line 387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		constexpr Builtin::u32 C3 = Builtin::u32(0b11100000000000000000U) - Builtin::i32(1000);
		#line 388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		constexpr Builtin::u32 C4 = Builtin::u32(0b10000000000000000000U) - Builtin::i32(10000);
		#line 389 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::Auto<decltype(Builtin::u32(0U))> log = Builtin::u32(0U); 
		#line 390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::Auto<decltype($this)> val1 = $this; 
		#line 391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if ((val1 <=> Builtin::i64(10000000000LL)) >= 0) {
			#line 392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			ADV_UFCS(DivAssign)(val1.$ref(), Builtin::u64(10000000000ULL));
			#line 393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			log += Builtin::i32(10);
		}
		#line 395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if ((val1 <=> Builtin::i32(100000)) >= 0) {
			#line 396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			ADV_UFCS(DivAssign)(val1.$ref(), Builtin::u32(100000U));
			#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			log += Builtin::i32(5);
		}
		#line 399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::u32>(val1))> val = Builtin::Cast<true, Builtin::u32>(val1); 
		#line 400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return log + ((((val + C1) & (val + C2)) ^ ((val + C3) & (val + C4))) >> Builtin::i32(17));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getLog10($extension_UInt64_350_u64 const & $this ) -> const $extension_UInt64_350_u64
	{
		#line 406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (const auto result = ADV_UPCS(CheckedLog10)($this.$ref())) {
			{
				#line 406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				return result;
			}
		}
		#line 409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	
} namespace $extensions { using namespace System;
#line 473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_add_qst($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_UInt64_470_u64>
	{
		#line 475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +? implemented only for integer types");
		#line 476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		$extension_UInt64_470_u64 result{}; 
		#line 477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (Builtin::SafeAdd($this, rhs, result)) {
			#line 478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return result;
		}
		#line 480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_add_qst_eq($extension_UInt64_470_u64 & $this , T rhs) noexcept -> typename $extension_UInt64_470_u64&
	{
		#line 484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +?= implemented only for integer types");
		#line 485 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (const auto result = ADV_UFCS(_operator_add_qst)($this, rhs)) {
			{
				#line 485 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				$this = result;
			}
		}
		#line 488 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_add_ne($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt64_470_u64
	{
		#line 495 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +! implemented only for integer types");
		#line 496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		$extension_UInt64_470_u64 result{}; 
		#line 497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::StrictAdd($this, rhs, result);
		#line 498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_add_ne_eq($extension_UInt64_470_u64 & $this , T rhs)  -> typename $extension_UInt64_470_u64&
	{
		#line 500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_add_ne)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_add_mod($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_UInt64_470_u64
	{
		#line 506 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +% implemented only for integer types");
		#line 507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		$extension_UInt64_470_u64 result{}; 
		#line 508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::WrappingAdd($this, rhs, result);
		#line 509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_add_mod_eq($extension_UInt64_470_u64 & $this , T rhs) noexcept -> typename $extension_UInt64_470_u64&
	{
		#line 511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_add_mod)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_add_or($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_UInt64_470_u64
	{
		#line 517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +| implemented only for integer types");
		#line 518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		$extension_UInt64_470_u64 result{}; 
		#line 519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::SaturatingAdd($this, rhs, result);
		#line 520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_add_or_eq($extension_UInt64_470_u64 & $this , T rhs) noexcept -> typename $extension_UInt64_470_u64&
	{
		#line 522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_add_or)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_add_mod_qst($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_UInt64_470_u64, bool>
	{
		#line 527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +%? implemented only for integer types");
		#line 528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		$extension_UInt64_470_u64 result{}; 
		#line 529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::Auto<decltype(!Builtin::SafeAdd($this, rhs, result))> overflowed = !Builtin::SafeAdd($this, rhs, result); 
		#line 530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 534 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_add_add_qst($extension_UInt64_470_u64 & $this )  -> typename $extension_UInt64_470_u64&
	{
		#line 534 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_qst_eq)($this, Builtin::u64(1ULL))); 
	}
	inline constexpr auto _operator_add_add_qst_postfix($extension_UInt64_470_u64 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_add_add_qst)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_add_add_ne($extension_UInt64_470_u64 & $this )  -> typename $extension_UInt64_470_u64&
	{
		#line 537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_ne_eq)($this, Builtin::u64(1ULL))); 
	}
	inline constexpr auto _operator_add_add_ne_postfix($extension_UInt64_470_u64 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_add_add_ne)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_add_add_mod($extension_UInt64_470_u64 & $this )  -> typename $extension_UInt64_470_u64&
	{
		#line 540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_mod_eq)($this, Builtin::u64(1ULL))); 
	}
	inline constexpr auto _operator_add_add_mod_postfix($extension_UInt64_470_u64 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_add_add_mod)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_add_add_or($extension_UInt64_470_u64 & $this )  -> typename $extension_UInt64_470_u64&
	{
		#line 543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_or_eq)($this, Builtin::u64(1ULL))); 
	}
	inline constexpr auto _operator_add_add_or_postfix($extension_UInt64_470_u64 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_add_add_or)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto CarryingAdd($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, $extension_UInt64_470_u64 rhs, bool carry) noexcept -> const std::tuple<$extension_UInt64_470_u64, bool>
	{
		#line 549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		$extension_UInt64_470_u64 result{}; 
		#line 550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::Auto<decltype(Builtin::CarryingAdd($this, rhs, carry, result))> overflowed = Builtin::CarryingAdd($this, rhs, carry, result); 
		#line 551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto BorrowingSub($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, $extension_UInt64_470_u64 rhs, bool carry) noexcept -> const std::tuple<$extension_UInt64_470_u64, bool>
	{
		#line 558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		$extension_UInt64_470_u64 result{}; 
		#line 559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::Auto<decltype(Builtin::BorrowingSub($this, rhs, carry, result))> overflowed = Builtin::BorrowingSub($this, rhs, carry, result); 
		#line 560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_sub_qst($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_UInt64_470_u64>
	{
		#line 567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -? implemented only for integer types");
		#line 568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		$extension_UInt64_470_u64 result{}; 
		#line 569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (Builtin::SafeSubtract($this, rhs, result)) {
			#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return result;
		}
		#line 572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_sub_qst_eq($extension_UInt64_470_u64 & $this , T rhs) noexcept -> typename $extension_UInt64_470_u64&
	{
		#line 576 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -?= implemented only for integer types");
		#line 577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (const auto result = ADV_UFCS(_operator_sub_qst)($this, rhs)) {
			{
				#line 577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				$this = result;
			}
		}
		#line 580 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_sub_ne($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt64_470_u64
	{
		#line 587 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -! implemented only for integer types");
		#line 588 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		$extension_UInt64_470_u64 result{}; 
		#line 589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::StrictSubtract($this, rhs, result);
		#line 590 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_sub_ne_eq($extension_UInt64_470_u64 & $this , T rhs)  -> typename $extension_UInt64_470_u64&
	{
		#line 592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_sub_ne)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_sub_mod($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_UInt64_470_u64
	{
		#line 598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -% implemented only for integer types");
		#line 599 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		$extension_UInt64_470_u64 result{}; 
		#line 600 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::WrappingSubtract($this, rhs, result);
		#line 601 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 603 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_sub_mod_eq($extension_UInt64_470_u64 & $this , T rhs) noexcept -> typename $extension_UInt64_470_u64&
	{
		#line 603 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_sub_mod)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 607 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_sub_or($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_UInt64_470_u64
	{
		#line 609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -| implemented only for integer types");
		#line 610 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		$extension_UInt64_470_u64 result{}; 
		#line 611 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::SaturatingSubtract($this, rhs, result);
		#line 612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 614 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_sub_or_eq($extension_UInt64_470_u64 & $this , T rhs) noexcept -> typename $extension_UInt64_470_u64&
	{
		#line 614 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_sub_or)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 618 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_sub_mod_qst($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_UInt64_470_u64, bool>
	{
		#line 619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -%? implemented only for integer types");
		#line 620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		$extension_UInt64_470_u64 result{}; 
		#line 621 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::Auto<decltype(!Builtin::SafeSubtract($this, rhs, result))> overflowed = !Builtin::SafeSubtract($this, rhs, result); 
		#line 622 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 626 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_sub_sub_qst($extension_UInt64_470_u64 & $this )  -> typename $extension_UInt64_470_u64&
	{
		#line 626 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_qst_eq)($this, Builtin::u64(1ULL))); 
	}
	inline constexpr auto _operator_sub_sub_qst_postfix($extension_UInt64_470_u64 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_sub_sub_qst)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_sub_sub_ne($extension_UInt64_470_u64 & $this )  -> typename $extension_UInt64_470_u64&
	{
		#line 629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_ne_eq)($this, Builtin::u64(1ULL))); 
	}
	inline constexpr auto _operator_sub_sub_ne_postfix($extension_UInt64_470_u64 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_sub_sub_ne)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 632 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_sub_sub_mod($extension_UInt64_470_u64 & $this )  -> typename $extension_UInt64_470_u64&
	{
		#line 632 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_mod_eq)($this, Builtin::u64(1ULL))); 
	}
	inline constexpr auto _operator_sub_sub_mod_postfix($extension_UInt64_470_u64 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_sub_sub_mod)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 635 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_sub_sub_or($extension_UInt64_470_u64 & $this )  -> typename $extension_UInt64_470_u64&
	{
		#line 635 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_or_eq)($this, Builtin::u64(1ULL))); 
	}
	inline constexpr auto _operator_sub_sub_or_postfix($extension_UInt64_470_u64 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_sub_sub_or)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 639 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mul_qst($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_UInt64_470_u64>
	{
		#line 641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *? implemented only for integer types");
		#line 642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		$extension_UInt64_470_u64 result{}; 
		#line 643 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (Builtin::SafeMultiply($this, rhs, result)) {
			#line 644 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return result;
		}
		#line 646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 648 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mul_qst_eq($extension_UInt64_470_u64 & $this , T rhs) noexcept -> typename $extension_UInt64_470_u64&
	{
		#line 650 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *?= implemented only for integer types");
		#line 651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (const auto result = ADV_UFCS(_operator_mul_qst)($this, rhs)) {
			{
				#line 651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				$this = result;
			}
		}
		#line 654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 659 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mul_ne($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt64_470_u64
	{
		#line 661 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *! implemented only for integer types");
		#line 662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		$extension_UInt64_470_u64 result{}; 
		#line 663 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::StrictMultiply($this, rhs, result);
		#line 664 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mul_ne_eq($extension_UInt64_470_u64 & $this , T rhs)  -> typename $extension_UInt64_470_u64&
	{
		#line 666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_mul_ne)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 670 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mul_mod($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_UInt64_470_u64
	{
		#line 672 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *% implemented only for integer types");
		#line 673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		$extension_UInt64_470_u64 result{}; 
		#line 674 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::WrappingMultiply($this, rhs, result);
		#line 675 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mul_mod_eq($extension_UInt64_470_u64 & $this , T rhs) noexcept -> typename $extension_UInt64_470_u64&
	{
		#line 677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_mul_mod)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mul_or($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_UInt64_470_u64
	{
		#line 683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *| implemented only for integer types");
		#line 684 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		$extension_UInt64_470_u64 result{}; 
		#line 685 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::SaturatingMultiply($this, rhs, result);
		#line 686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 688 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mul_or_eq($extension_UInt64_470_u64 & $this , T rhs) noexcept -> typename $extension_UInt64_470_u64&
	{
		#line 688 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_mul_or)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 692 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mul_mod_qst($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_UInt64_470_u64, bool>
	{
		#line 693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *%? implemented only for integer types");
		#line 694 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		$extension_UInt64_470_u64 result{}; 
		#line 695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::Auto<decltype(!Builtin::SafeMultiply($this, rhs, result))> overflowed = !Builtin::SafeMultiply($this, rhs, result); 
		#line 696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 701 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_mul_gt($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, $extension_UInt64_470_u64 rhs) noexcept -> const std::tuple<Builtin::u64, Builtin::u64>
	{
		#line 703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		const auto& [low, high] = Builtin::WideningMul64u($this, rhs);
		#line 704 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return std::make_tuple(low, high);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 710 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto CarryingMul($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, $extension_UInt64_470_u64 rhs, $extension_UInt64_470_u64 carry) noexcept -> const std::tuple<Builtin::u64, Builtin::u64>
	{
		#line 712 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		const auto& [low, high] = Builtin::CarryingMul64u($this, rhs, carry);
		#line 713 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return std::make_tuple(low, high);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_bsl_qst($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_UInt64_470_u64>
	{
		#line 720 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\? implemented only for integer types");
		#line 721 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		$extension_UInt64_470_u64 result{}; 
		#line 722 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (Builtin::SafeDivide($this, rhs, result)) {
			#line 723 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return result;
		}
		#line 725 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 727 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_bsl_qst_eq($extension_UInt64_470_u64 & $this , T rhs) noexcept -> typename $extension_UInt64_470_u64&
	{
		#line 729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\?= implemented only for integer types");
		#line 730 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (const auto result = ADV_UFCS(_operator_bsl_qst)($this, rhs)) {
			{
				#line 730 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 731 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				$this = result;
			}
		}
		#line 733 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_bsl_ne($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt64_470_u64
	{
		#line 738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 739 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_bsl_ne_eq($extension_UInt64_470_u64 & $this , T rhs)  -> typename $extension_UInt64_470_u64&
	{
		#line 739 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl_eq)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_bsl_mod($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt64_470_u64
	{
		#line 743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 744 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_eq($extension_UInt64_470_u64 & $this , T rhs)  -> typename $extension_UInt64_470_u64&
	{
		#line 744 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl_eq)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 748 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_bsl_or($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt64_470_u64
	{
		#line 748 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 749 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_bsl_or_eq($extension_UInt64_470_u64 & $this , T rhs)  -> typename $extension_UInt64_470_u64&
	{
		#line 749 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl_eq)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 754 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_qst($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_UInt64_470_u64, bool>
	{
		#line 755 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\%? implemented only for integer types");
		#line 756 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		$extension_UInt64_470_u64 result{}; 
		#line 757 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::Auto<decltype(!Builtin::SafeDivide($this, rhs, result))> overflowed = !Builtin::SafeDivide($this, rhs, result); 
		#line 758 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 763 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_UInt64_470_u64>
	{
		#line 765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\? implemented only for integer types");
		#line 766 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		$extension_UInt64_470_u64 result{}; 
		#line 767 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (Builtin::SafeDivExact($this, rhs, result)) {
			#line 768 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return result;
		}
		#line 770 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 773 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst_eq($extension_UInt64_470_u64 & $this , T rhs) noexcept -> typename $extension_UInt64_470_u64&
	{
		#line 775 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\?= implemented only for integer types");
		#line 776 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (const auto result = ADV_UFCS(_operator_bsl_bsl_qst)($this, rhs)) {
			{
				#line 776 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 777 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				$this = result;
			}
		}
		#line 779 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 784 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mod_qst($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_UInt64_470_u64>
	{
		#line 786 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %? implemented only for integer types");
		#line 787 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		$extension_UInt64_470_u64 result{}; 
		#line 788 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (Builtin::SafeModulus($this, rhs, result)) {
			#line 789 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return result;
		}
		#line 791 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 793 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mod_qst_eq($extension_UInt64_470_u64 & $this , T rhs) noexcept -> typename $extension_UInt64_470_u64&
	{
		#line 795 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %?= implemented only for integer types");
		#line 796 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (const auto result = ADV_UFCS(_operator_mod_qst)($this, rhs)) {
			{
				#line 796 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 797 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				$this = result;
			}
		}
		#line 799 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 804 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mod_ne($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt64_470_u64
	{
		#line 804 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY($this % rhs); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 805 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mod_ne_eq($extension_UInt64_470_u64 & $this , T rhs)  -> typename $extension_UInt64_470_u64&
	{
		#line 805 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY($this %= rhs); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 809 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mod_mod($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt64_470_u64
	{
		#line 809 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY($this % rhs); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 810 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mod_mod_eq($extension_UInt64_470_u64 & $this , T rhs)  -> typename $extension_UInt64_470_u64&
	{
		#line 810 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY($this %= rhs); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 815 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mod_mod_qst($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_UInt64_470_u64, bool>
	{
		#line 816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %%? implemented only for integer types");
		#line 817 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		$extension_UInt64_470_u64 result{}; 
		#line 818 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::Auto<decltype(!Builtin::SafeModulus($this, rhs, result))> overflowed = !Builtin::SafeModulus($this, rhs, result); 
		#line 819 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 824 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_sub_qst($extension_UInt64_470_u64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::Nullable<$extension_UInt64_470_u64>
	{
		#line 824 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(nullptr); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 827 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline auto _operator_sub_ne($extension_UInt64_470_u64 const& $this LIFETIMEBOUND)  -> const typename $extension_UInt64_470_u64
	{
		#line 829 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::Throw(Builtin::IntegerOverflowException{});
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 832 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_sub_mod($extension_UInt64_470_u64 const& $this LIFETIMEBOUND)  -> const typename $extension_UInt64_470_u64
	{
		#line 834 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		$extension_UInt64_470_u64 result{}; 
		#line 835 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::WrappingNegate($this, result);
		#line 836 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 840 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_sub_or($extension_UInt64_470_u64 const& $this LIFETIMEBOUND)  -> const typename $extension_UInt64_470_u64
	{
		#line 840 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(Builtin::u64(0ULL)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 843 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_sub_mod_qst($extension_UInt64_470_u64 const& $this LIFETIMEBOUND)  -> const std::tuple<$extension_UInt64_470_u64, bool>
	{
		#line 845 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		$extension_UInt64_470_u64 result{}; 
		#line 846 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::Auto<decltype(Builtin::SafeNegate($this, result))> __var_846_8 = Builtin::SafeNegate($this, result); 
		#line 847 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return std::make_tuple(result, Builtin::Boolean(true));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 851 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_lt_lt_qst($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<$extension_UInt64_470_u64>
	{
		#line 853 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_UInt64_470_u64)()) < 0) {
			#line 854 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return Builtin::UncheckedShiftLeft($this, amount);
		}
		#line 856 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 859 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_lt_lt_qst_eq($extension_UInt64_470_u64 & $this , Builtin::i32 amount) noexcept -> typename $extension_UInt64_470_u64&
	{
		#line 861 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_UInt64_470_u64)()) < 0) {
			#line 862 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return $this <<= amount;
		}
		#line 864 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 867 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_lt_lt_ne($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_UInt64_470_u64
	{
		#line 869 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_UInt64_470_u64)()) < 0) {
			#line 870 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return Builtin::UncheckedShiftLeft($this, amount);
		}
		#line 872 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::Throw(Builtin::IntegerOverflowException{});
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 875 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_lt_lt_ne_eq($extension_UInt64_470_u64 & $this , Builtin::i32 amount)  -> typename $extension_UInt64_470_u64&
	{
		#line 875 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_lt_lt_ne)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 877 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_lt_lt_mod($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename $extension_UInt64_470_u64
	{
		#line 877 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(Builtin::UncheckedShiftLeft($this, amount & (ADV_USPCS(BitWidth, $extension_UInt64_470_u64)() - Builtin::i32(1)))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 880 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_lt_lt_mod_eq($extension_UInt64_470_u64 & $this , Builtin::i32 amount) noexcept -> typename $extension_UInt64_470_u64&
	{
		#line 880 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_lt_lt_mod)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 882 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_lt_lt_mod_qst($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<$extension_UInt64_470_u64, bool>
	{
		#line 882 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(std::make_tuple(ADV_UFCS(_operator_lt_lt_mod)($this, amount), (amount <=> Builtin::i32(0)) < 0 || (amount <=> ADV_USPCS(BitWidth, $extension_UInt64_470_u64)()) >= 0)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 885 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_gt_gt_qst($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<$extension_UInt64_470_u64>
	{
		#line 887 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_UInt64_470_u64)()) < 0) {
			#line 888 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return $this >> amount;
		}
		#line 890 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 893 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_gt_gt_qst_eq($extension_UInt64_470_u64 & $this , Builtin::i32 amount) noexcept -> typename $extension_UInt64_470_u64&
	{
		#line 895 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_UInt64_470_u64)()) < 0) {
			#line 896 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return $this >>= amount;
		}
		#line 898 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 901 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_gt_gt_ne($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_UInt64_470_u64
	{
		#line 903 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_UInt64_470_u64)()) < 0) {
			#line 904 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return $this >> amount;
		}
		#line 906 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::Throw(Builtin::IntegerOverflowException{});
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 909 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_gt_gt_ne_eq($extension_UInt64_470_u64 & $this , Builtin::i32 amount)  -> typename $extension_UInt64_470_u64&
	{
		#line 909 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_gt_gt_ne)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 911 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_gt_gt_mod($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename $extension_UInt64_470_u64
	{
		#line 911 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(Builtin::UncheckedShiftRight($this, amount & (ADV_USPCS(BitWidth, $extension_UInt64_470_u64)() - Builtin::i32(1)))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 914 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_gt_gt_mod_eq($extension_UInt64_470_u64 & $this , Builtin::i32 amount) noexcept -> typename $extension_UInt64_470_u64&
	{
		#line 914 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_gt_gt_mod)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 916 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_gt_gt_mod_qst($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<$extension_UInt64_470_u64, bool>
	{
		#line 916 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(std::make_tuple(ADV_UFCS(_operator_gt_gt_mod)($this, amount), (amount <=> Builtin::i32(0)) < 0 || (amount <=> ADV_USPCS(BitWidth, $extension_UInt64_470_u64)()) >= 0)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 921 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_xor_xor_qst($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const Builtin::Nullable<$extension_UInt64_470_u64>
	{
		#line 923 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 925 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return Builtin::u64(1ULL);
		}
		#line 928 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 929 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::Auto<decltype(Builtin::u64(1ULL))> result = Builtin::u64(1ULL); 
		#line 931 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		for (;;) 
		{
			#line 932 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 933 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				if (const auto mul = ADV_UFCS(_operator_mul_qst)(result, base)) {
					{
						#line 933 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
						auto __tmp0 = *mul; const auto& mul = __tmp0;
						
						#line 934 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
						result = mul;
					}
				} else {
					#line 935 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
					{
						#line 936 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
						return nullptr;
					}
				}
				#line 938 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				if (exp == Builtin::i32(1)) {
					#line 939 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
					return result;
				}
			}
			#line 941 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
			#line 942 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			if (const auto mul = ADV_UFCS(_operator_mul_qst)(base, base)) {
				{
					#line 942 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
					auto __tmp0 = *mul; const auto& mul = __tmp0;
					
					#line 943 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
					base = mul;
				}
			} else {
				#line 944 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				{
					#line 945 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
					return nullptr;
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 950 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_xor_xor_qst_eq($extension_UInt64_470_u64 & $this , Builtin::u32 exp) noexcept -> typename $extension_UInt64_470_u64&
	{
		#line 952 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (auto result = ADV_UFCS(_operator_xor_xor_qst)($this, exp)) {
			{
				#line 952 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 953 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				return $this = result;
			}
		}
		#line 955 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 958 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_xor_xor_ne($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename $extension_UInt64_470_u64
	{
		#line 960 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 962 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return Builtin::u64(1ULL);
		}
		#line 965 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 966 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::Auto<decltype(Builtin::u64(1ULL))> result = Builtin::u64(1ULL); 
		#line 968 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		for (;;) 
		{
			#line 969 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 970 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				ADV_UFCS(_operator_mul_ne_eq)(result, base);
				#line 971 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				if (exp == Builtin::i32(1)) {
					#line 972 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
					return result;
				}
			}
			#line 974 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
			#line 975 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			ADV_UFCS(_operator_mul_ne_eq)(base, base);
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 979 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_xor_xor_ne_eq($extension_UInt64_470_u64 & $this , Builtin::u32 exp)  -> typename $extension_UInt64_470_u64&
	{
		#line 979 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_xor_xor_ne)($this, exp)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 981 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_xor_xor_mod($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename $extension_UInt64_470_u64
	{
		#line 983 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 985 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return Builtin::u64(1ULL);
		}
		#line 988 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 989 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::Auto<decltype(Builtin::u64(1ULL))> result = Builtin::u64(1ULL); 
		#line 991 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (std::is_constant_evaluated()) {
			#line 992 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			while ((exp <=> Builtin::i32(1)) > 0) 
			{
				#line 993 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
					#line 994 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
					ADV_UFCS(_operator_mul_mod_eq)(result, base);
				}
				#line 996 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
				#line 997 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				ADV_UFCS(_operator_mul_mod_eq)(base, base);
			}
			#line 999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return ADV_UFCS(_operator_mul_mod)(result, base);
		} else {
			#line 1000 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			{
				#line 1001 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				for (;;) 
				{
					#line 1002 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
					if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
						#line 1003 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
						ADV_UFCS(_operator_mul_mod_eq)(result, base);
						#line 1004 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
						if (exp == Builtin::i32(1)) {
							#line 1005 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
							return result;
						}
					}
					#line 1007 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
					ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
					#line 1008 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
					ADV_UFCS(_operator_mul_mod_eq)(base, base);
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1013 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_xor_xor_mod_eq($extension_UInt64_470_u64 & $this , Builtin::u32 exp) noexcept -> typename $extension_UInt64_470_u64&
	{
		#line 1013 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_xor_xor_mod)($this, exp)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1015 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_xor_xor_or($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename $extension_UInt64_470_u64
	{
		#line 1017 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (const auto result = ADV_UFCS(_operator_xor_xor_qst)($this, exp)) {
			{
				#line 1017 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 1018 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				return result;
			}
		}
		#line 1021 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return ADV_USPCS(MaxValue, $extension_UInt64_470_u64)();
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1024 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_xor_xor_or_eq($extension_UInt64_470_u64 & $this , Builtin::u32 exp) noexcept -> typename $extension_UInt64_470_u64&
	{
		#line 1024 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_xor_xor_or)($this, exp)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1026 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_xor_xor_mod_qst($extension_UInt64_470_u64 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const std::tuple<$extension_UInt64_470_u64, bool>
	{
		#line 1028 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1030 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return std::make_tuple(Builtin::u64(1ULL), Builtin::Boolean(false));
		}
		#line 1033 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 1034 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::Auto<decltype(Builtin::u64(1ULL))> result = Builtin::u64(1ULL); 
		#line 1035 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::Auto<decltype(Builtin::Boolean(false))> overflowed = Builtin::Boolean(false); 
		#line 1036 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::Auto<decltype(std::make_tuple(Builtin::u64(0ULL), Builtin::Boolean(false)))> tmp = std::make_tuple(Builtin::u64(0ULL), Builtin::Boolean(false)); 
		#line 1038 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		for (;;) 
		{
			#line 1039 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 1040 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				tmp = ADV_UFCS(_operator_mul_mod_qst)(result, base);
				#line 1041 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				if (exp == Builtin::i32(1)) {
					#line 1042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
					std::get<1>(tmp) |= overflowed;
					#line 1043 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
					return tmp;
				}
				#line 1045 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				result = std::get<0>(tmp);
				#line 1046 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				overflowed |= std::get<1>(tmp);
			}
			#line 1048 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
			#line 1049 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			tmp = ADV_UFCS(_operator_mul_mod_qst)(base, base);
			#line 1050 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			base = std::get<0>(tmp);
			#line 1051 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			overflowed |= std::get<1>(tmp);
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1056 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getCheckedAbs($extension_UInt64_470_u64 const & $this ) -> const Builtin::Nullable<$extension_UInt64_470_u64>
	{
		#line 1056 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1058 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getStrictAbs($extension_UInt64_470_u64 const & $this ) -> const $extension_UInt64_470_u64
	{
		#line 1058 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1060 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getWrappingAbs($extension_UInt64_470_u64 const & $this ) -> const $extension_UInt64_470_u64
	{
		#line 1060 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1062 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getSaturatingAbs($extension_UInt64_470_u64 const & $this ) -> const $extension_UInt64_470_u64
	{
		#line 1062 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1064 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getOverflowingAbs($extension_UInt64_470_u64 const & $this ) -> const std::tuple<$extension_UInt64_470_u64, bool>
	{
		#line 1064 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(std::make_tuple($this, Builtin::Boolean(false))); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	
} namespace $extensions { using namespace System;
#line 1106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto NextMultipleOf($extension_UInt64_1067_u64 const& $this LIFETIMEBOUND, $extension_UInt64_1067_u64 rhs)  -> const typename $extension_UInt64_1067_u64
	{
		#line 1108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		const Builtin::Auto<decltype($this % rhs)> rem = $this % rhs; 
		#line 1109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return rem == Builtin::u32(0U) ? $this : $this + (rhs - rem);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto CheckedNextMultipleOf($extension_UInt64_1067_u64 const& $this LIFETIMEBOUND, $extension_UInt64_1067_u64 rhs) noexcept -> const Builtin::Nullable<$extension_UInt64_1067_u64>
	{
		#line 1116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (const auto rem = ADV_UFCS(_operator_mod_qst)($this, rhs)) {
			{
				#line 1116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				auto __tmp0 = *rem; const auto& rem = __tmp0;
				
				#line 1117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				if (rem == Builtin::u32(0U)) {
					#line 1118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
					return $this;
				}
				#line 1120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				return ADV_UFCS(_operator_add_qst)($this, (rhs - rem));
			}
		}
		#line 1122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1068 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto $static_getIsSigned<$extension_UInt64_1067_u64>::get() -> const bool
	{
		#line 1068 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1070 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getTrailingZeroCount($extension_UInt64_1067_u64 const & $this ) -> const Builtin::u32
	{
		#line 1070 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(Builtin::TrailingZeroCount($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1071 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getTrailingOneCount($extension_UInt64_1067_u64 const & $this ) -> const Builtin::u32
	{
		#line 1071 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(Builtin::TrailingZeroCount(ADV_UFCS(_operator_not)($this))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1072 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getByteCount($extension_UInt64_1067_u64 const & $this ) -> const Builtin::u32
	{
		#line 1072 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u32>(Builtin::usize(sizeof($extension_UInt64_1067_u64)))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1073 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getMinimalBitWidth($extension_UInt64_1067_u64 const & $this ) -> const Builtin::u32
	{
		#line 1073 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(BitWidth, $extension_UInt64_1067_u64)() - ADV_UPCS(LeadingZeroCount)($this.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1083 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline auto getIsqrt($extension_UInt64_1067_u64 const & $this ) -> const $extension_UInt64_1067_u64
	{
		#line 1084 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (const auto result = ADV_UPCS(CheckedIsqrt)($this.$ref())) {
			{
				#line 1084 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 1085 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				return result;
			}
		}
		#line 1087 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1092 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getLog2Ceiling($extension_UInt64_1067_u64 const & $this ) -> const $extension_UInt64_1067_u64
	{
		#line 1094 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::Auto<decltype(ADV_UPCS(Log2)($this.$ref()))> result = ADV_UPCS(Log2)($this.$ref()); 
		#line 1095 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (ADV_UPCS(PopCount)($this.$ref()) != Builtin::u32(1U)) {
			#line 1096 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			++result;
		}
		#line 1099 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return result;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getPrevPow2($extension_UInt64_1067_u64 const & $this ) -> const $extension_UInt64_1067_u64
	{
		#line 1128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (($this <=> Builtin::u32(1U)) <= 0) {
			#line 1129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return Builtin::u64(0ULL);
		}
		#line 1132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return ADV_USPCS(One, $extension_UInt64_1067_u64)() << (ADV_UPCS(MinimalBitWidth)($this.$ref()) - Builtin::u64(1ULL));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getNextPow2($extension_UInt64_1067_u64 const & $this ) -> const $extension_UInt64_1067_u64
	{
		#line 1139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (($this <=> Builtin::u32(1U)) <= 0) {
			#line 1140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return Builtin::u64(0ULL);
		}
		#line 1143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		const Builtin::Auto<decltype($this - Builtin::u64(1ULL))> p = $this - Builtin::u64(1ULL); 
		#line 1144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return (ADV_USPCS(AllBitsSet, $extension_UInt64_1067_u64)() >> ADV_UPCS(LeadingZeroCount)(p.$ref())) + Builtin::u64(1ULL);
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getCheckedNextPow2($extension_UInt64_1067_u64 const & $this ) -> const Builtin::Nullable<$extension_UInt64_1067_u64>
	{
		#line 1151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (($this <=> Builtin::u32(1U)) <= 0) {
			#line 1152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return Builtin::u64(0ULL);
		}
		#line 1155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		const Builtin::Auto<decltype($this - Builtin::u64(1ULL))> p = $this - Builtin::u64(1ULL); 
		#line 1156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return ADV_UFCS(_operator_add_qst)((ADV_USPCS(AllBitsSet, $extension_UInt64_1067_u64)() >> ADV_UPCS(LeadingZeroCount)(p.$ref())), Builtin::u64(1ULL));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getWrappingNextPow2($extension_UInt64_1067_u64 const & $this ) -> const $extension_UInt64_1067_u64
	{
		#line 1163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (($this <=> Builtin::u32(1U)) <= 0) {
			#line 1164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return Builtin::u64(0ULL);
		}
		#line 1167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		const Builtin::Auto<decltype($this - Builtin::u64(1ULL))> p = $this - Builtin::u64(1ULL); 
		#line 1168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return ADV_UFCS(_operator_add_mod)((ADV_USPCS(AllBitsSet, $extension_UInt64_1067_u64)() >> ADV_UPCS(LeadingZeroCount)(p.$ref())), Builtin::u64(1ULL));
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	
} namespace $extensions { using namespace System;
#line 1198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto RotateLeft($extension_UInt64_1172_u64 const& $this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename $extension_UInt64_1172_u64
	{
		#line 1198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(Builtin::BitsRotateLeft($this, shiftAmount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto RotateRight($extension_UInt64_1172_u64 const& $this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename $extension_UInt64_1172_u64
	{
		#line 1199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(Builtin::BitsRotateRight($this, shiftAmount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto $static_getBitWidth<$extension_UInt64_1172_u64>::get() -> const Builtin::u32
	{
		#line 1173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(64U)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getLeadingZeroCount($extension_UInt64_1172_u64 const & $this ) -> const Builtin::u32
	{
		#line 1175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(Builtin::LeadingZeroCount($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getLeadingOneCount($extension_UInt64_1172_u64 const & $this ) -> const Builtin::u32
	{
		#line 1176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(Builtin::LeadingZeroCount(ADV_UFCS(_operator_not)($this))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getPopCount($extension_UInt64_1172_u64 const & $this ) -> const Builtin::u32
	{
		#line 1177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(Builtin::PopCount($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getZeroCount($extension_UInt64_1172_u64 const & $this ) -> const Builtin::u32
	{
		#line 1178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(Builtin::PopCount(ADV_UFCS(_operator_not)($this))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getByteSwapped($extension_UInt64_1172_u64 const & $this ) -> const $extension_UInt64_1172_u64
	{
		#line 1179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(Builtin::ByteSwap64($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getBigEndian($extension_UInt64_1172_u64 const & $this ) -> const $extension_UInt64_1172_u64
	{
		#line 1182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if constexpr (Builtin::IsLittleEndian()) {
			#line 1183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return ADV_UPCS(ByteSwapped)($this.$ref());
		}
		#line 1185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return $this;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getLittleEndian($extension_UInt64_1172_u64 const & $this ) -> const $extension_UInt64_1172_u64
	{
		#line 1189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if constexpr (Builtin::IsBigEndian()) {
			#line 1190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return ADV_UPCS(ByteSwapped)($this.$ref());
		}
		#line 1192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return $this;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getReverseBits($extension_UInt64_1172_u64 const & $this ) -> const $extension_UInt64_1172_u64
	{
		#line 1194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(Builtin::ReverseBits64u($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getShortestBitLength($extension_UInt64_1172_u64 const & $this ) -> const Builtin::u32
	{
		#line 1196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(BitWidth, $extension_UInt64_1172_u64)() - ADV_UPCS(LeadingZeroCount)($this.$ref())); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	
} namespace $extensions { using namespace System;
#line 1211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto IsGreaterThanAsUnsigned($extension_UInt64_1203_u64 const& $this LIFETIMEBOUND, $extension_UInt64_1203_u64 rhs) noexcept -> const bool
	{
		#line 1211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(($this <=> rhs) > 0); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto $static_getMaxDigitCount<$extension_UInt64_1203_u64>::get() -> const Builtin::i32
	{
		#line 1204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(20)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto $static_getMaxHexDigitCount<$extension_UInt64_1203_u64>::get() -> const Builtin::i32
	{
		#line 1205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(16)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto $static_getMaxValueDiv10<$extension_UInt64_1203_u64>::get() -> const $extension_UInt64_1203_u64
	{
		#line 1206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl)(ADV_USPCS(MaxValue, Builtin::u64)(), Builtin::i32(10))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getMultiplyBy10($extension_UInt64_1203_u64 const & $this ) -> const $extension_UInt64_1203_u64
	{
		#line 1208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_mod)($this, Builtin::u64(10ULL))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getMultiplyBy16($extension_UInt64_1203_u64 const & $this ) -> const $extension_UInt64_1203_u64
	{
		#line 1209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_mod)($this, Builtin::u64(16ULL))); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	

}