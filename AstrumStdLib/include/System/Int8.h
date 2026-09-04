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
namespace __Unsafe {} namespace __Int8$Protected__Unsafe {}
//###############################################################################
//# Global type aliases
//###############################################################################
#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
using Int8 = Builtin::i8;
#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
using SByte = Builtin::i8;
//###############################################################################
//# Type definitions
//###############################################################################
	} namespace $extensions { using namespace System;
#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	using $extension_Int8_15_i8 = Builtin::i8;
	#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE(IMinMaxValue, IMinMaxValue);
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class __TT> struct $static_getMinValue; template<> struct $static_getMinValue<$extension_Int8_15_i8> { static inline constexpr auto get() -> const $extension_Int8_15_i8; };
	#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class __TT> struct $static_getMaxValue; template<> struct $static_getMaxValue<$extension_Int8_15_i8> { static inline constexpr auto get() -> const $extension_Int8_15_i8; };
	#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int8_15_i8, IMinMaxValue, IMinMaxValue, $extension_Int8_15_i8);
	} namespace System{
using $extensions::$static_getMinValue;
using $extensions::$static_getMaxValue;

		} namespace $extensions { using namespace System;
#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	using $extension_Int8_20_i8 = Builtin::i8;
	#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ASTRUMSTD_API auto _operator_eq_eq_mul($extension_Int8_20_i8 const& $this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool;
	#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto operator<=>($extension_Int8_20_i8 const& $this LIFETIMEBOUND, Builtin::Nullable<$extension_Int8_20_i8> rhs) noexcept -> const Builtin::i32;
	#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_gt_gt_gt($extension_Int8_20_i8 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_Int8_20_i8;
	#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_gt_gt_gt_eq($extension_Int8_20_i8 & $this , Builtin::i32 amount)  -> typename $extension_Int8_20_i8&;
	#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_lt_lt_bsl($extension_Int8_20_i8 const& $this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename $extension_Int8_20_i8;
	#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_lt_lt_bsl_eq($extension_Int8_20_i8 & $this , Builtin::u32 amount) noexcept -> typename $extension_Int8_20_i8&;
	#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_gt_gt_bsl($extension_Int8_20_i8 const& $this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename $extension_Int8_20_i8;
	#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_gt_gt_bsl_eq($extension_Int8_20_i8 & $this , Builtin::u32 amount) noexcept -> typename $extension_Int8_20_i8&;
	#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getHashCode($extension_Int8_20_i8 const& $this ) -> const Builtin::u64;
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
#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	using $extension_Int8_73_i8 = Builtin::i8;
	#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE(IAbstractComparable, IAbstractComparable);
	#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ASTRUMSTD_API auto _operator_lt_eq_gt_mul($extension_Int8_73_i8 const& $this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32;
	#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int8_73_i8, IAbstractComparable, IAbstractComparable, $extension_Int8_73_i8);
	} namespace System{
using $extensions::_operator_lt_eq_gt_mul;

		} namespace $extensions { using namespace System;
#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	using $extension_Int8_88_i8 = Builtin::i8;
	#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE(IConvertible, IConvertible);
	#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToBoolean($extension_Int8_88_i8 const& $this LIFETIMEBOUND) noexcept -> const bool;
	#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToInt8($extension_Int8_88_i8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i8;
	#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToUInt8($extension_Int8_88_i8 const& $this LIFETIMEBOUND)  -> const Builtin::u8;
	#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToInt16($extension_Int8_88_i8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i16;
	#line 98 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToUInt16($extension_Int8_88_i8 const& $this LIFETIMEBOUND)  -> const Builtin::u16;
	#line 104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToInt32($extension_Int8_88_i8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i32;
	#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToUInt32($extension_Int8_88_i8 const& $this LIFETIMEBOUND)  -> const Builtin::u32;
	#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToInt64($extension_Int8_88_i8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i64;
	#line 112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToUInt64($extension_Int8_88_i8 const& $this LIFETIMEBOUND)  -> const Builtin::u64;
	#line 118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToInt128($extension_Int8_88_i8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i128;
	#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToUInt128($extension_Int8_88_i8 const& $this LIFETIMEBOUND)  -> const Builtin::u128;
	#line 125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToIsize($extension_Int8_88_i8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::isize;
	#line 126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToUsize($extension_Int8_88_i8 const& $this LIFETIMEBOUND)  -> const Builtin::usize;
	#line 132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToFloat32($extension_Int8_88_i8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::f32;
	#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToFloat64($extension_Int8_88_i8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::f64;
	#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToByte($extension_Int8_88_i8 const& $this LIFETIMEBOUND)  -> const Builtin::u8;
	#line 140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToChar($extension_Int8_88_i8 const& $this LIFETIMEBOUND)  -> const Builtin::char32;
	#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int8_88_i8, IConvertible, IConvertible, $extension_Int8_88_i8);
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
#line 150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	using $extension_Int8_150_i8 = Builtin::i8;
	#line 150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE(IDivisibleArithmetic, IDivisibleArithmetic);
	#line 152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_div_mod($extension_Int8_150_i8 const& $this LIFETIMEBOUND, T rhs)  -> const Builtin::Tuple<$extension_Int8_150_i8, $extension_Int8_150_i8>;
	#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_div_not($extension_Int8_150_i8 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int8_150_i8;
	#line 165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_div_not_eq($extension_Int8_150_i8 & $this , auto rhs)  -> typename $extension_Int8_150_i8&;
	#line 167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_div_lt($extension_Int8_150_i8 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int8_150_i8;
	#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_div_lt_eq($extension_Int8_150_i8 & $this , auto rhs)  -> typename $extension_Int8_150_i8&;
	#line 183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mod_lt($extension_Int8_150_i8 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int8_150_i8;
	#line 191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_mod_lt_eq($extension_Int8_150_i8 & $this , auto rhs)  -> typename $extension_Int8_150_i8&;
	#line 193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_div_gt($extension_Int8_150_i8 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int8_150_i8;
	#line 207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_div_gt_eq($extension_Int8_150_i8 & $this , auto rhs)  -> typename $extension_Int8_150_i8&;
	#line 150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int8_150_i8, IDivisibleArithmetic, IDivisibleArithmetic, $extension_Int8_150_i8);
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
#line 210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	using $extension_Int8_210_i8 = Builtin::i8;
	#line 210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE(IIntegerDivisibleArithmetic, IIntegerDivisibleArithmetic);
	#line 212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_bsl($extension_Int8_210_i8 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int8_210_i8;
	#line 214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_bsl_eq($extension_Int8_210_i8 & $this , T rhs)  -> typename $extension_Int8_210_i8&;
	#line 219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl($extension_Int8_210_i8 const& $this LIFETIMEBOUND, T rhs)  -> const Builtin::Nullable<$extension_Int8_210_i8>;
	#line 210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int8_210_i8, IIntegerDivisibleArithmetic, IIntegerDivisibleArithmetic, $extension_Int8_210_i8);
	} namespace System{
using $extensions::_operator_bsl;
using $extensions::_operator_bsl_eq;
using $extensions::_operator_bsl_bsl;

		} namespace $extensions { using namespace System;
#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	using $extension_Int8_230_i8 = Builtin::i8;
	#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE(IIntegerPowerArithmetic, IIntegerPowerArithmetic);
	#line 233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_xor_xor($extension_Int8_230_i8 const& $this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename $extension_Int8_230_i8;
	#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_xor_xor_eq($extension_Int8_230_i8 & $this , Builtin::u32 exp)  -> typename $extension_Int8_230_i8&;
	#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int8_230_i8, IIntegerPowerArithmetic, IIntegerPowerArithmetic, $extension_Int8_230_i8);
	} namespace System{
using $extensions::_operator_xor_xor;
using $extensions::_operator_xor_xor_eq;

		} namespace $extensions { using namespace System;
#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	using $extension_Int8_268_i8 = Builtin::i8;
	#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE(INumberBase, INumberBase);
	#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ASTRUMSTD_API auto MaxMagnitude($extension_Int8_268_i8 const& $this LIFETIMEBOUND, $extension_Int8_268_i8 rhs) noexcept -> const typename $extension_Int8_268_i8;
	#line 321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline auto MaxMagnitudeNumber($extension_Int8_268_i8 const& $this LIFETIMEBOUND, $extension_Int8_268_i8 rhs) noexcept -> const typename $extension_Int8_268_i8;
	#line 323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ASTRUMSTD_API auto MinMagnitude($extension_Int8_268_i8 const& $this LIFETIMEBOUND, $extension_Int8_268_i8 rhs) noexcept -> const typename $extension_Int8_268_i8;
	#line 352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline auto MinMagnitudeNumber($extension_Int8_268_i8 const& $this LIFETIMEBOUND, $extension_Int8_268_i8 rhs) noexcept -> const typename $extension_Int8_268_i8;
	#line 354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ASTRUMSTD_API auto Parse($extension_Int8_268_i8 const& $this LIFETIMEBOUND, Builtin::Str input)  -> const typename $extension_Int8_268_i8;
	#line 359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ASTRUMSTD_API auto TryParse($extension_Int8_268_i8 const& $this LIFETIMEBOUND, Builtin::Str input) noexcept -> const Builtin::Nullable<$extension_Int8_268_i8>;
	#line 366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToInt8($extension_Int8_268_i8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i8;
	#line 367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToUInt8($extension_Int8_268_i8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u8;
	#line 368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToInt16($extension_Int8_268_i8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i16;
	#line 369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToUInt16($extension_Int8_268_i8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u16;
	#line 370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToInt32($extension_Int8_268_i8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i32;
	#line 371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToUInt32($extension_Int8_268_i8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u32;
	#line 372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToInt64($extension_Int8_268_i8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i64;
	#line 373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToUInt64($extension_Int8_268_i8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u64;
	#line 374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToInt128($extension_Int8_268_i8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i128;
	#line 375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToUInt128($extension_Int8_268_i8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u128;
	#line 376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToIsize($extension_Int8_268_i8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::isize;
	#line 377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToUsize($extension_Int8_268_i8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::usize;
	#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class __TT> struct $static_getOne; template<> struct $static_getOne<$extension_Int8_268_i8> { static inline constexpr auto get() -> const $extension_Int8_268_i8; };
	#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class __TT> struct $static_getZero; template<> struct $static_getZero<$extension_Int8_268_i8> { static inline constexpr auto get() -> const $extension_Int8_268_i8; };
	#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class __TT> struct $static_getRadix; template<> struct $static_getRadix<$extension_Int8_268_i8> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getAbs($extension_Int8_268_i8 const& $this ) -> const $extension_Int8_268_i8;
	#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsCanonical($extension_Int8_268_i8 const& $this ) -> const bool;
	#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsComplexNumber($extension_Int8_268_i8 const& $this ) -> const bool;
	#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsEvenInteger($extension_Int8_268_i8 const& $this ) -> const bool;
	#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsFinite($extension_Int8_268_i8 const& $this ) -> const bool;
	#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsImaginaryNumber($extension_Int8_268_i8 const& $this ) -> const bool;
	#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsInfinity($extension_Int8_268_i8 const& $this ) -> const bool;
	#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsInteger($extension_Int8_268_i8 const& $this ) -> const bool;
	#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsNaN($extension_Int8_268_i8 const& $this ) -> const bool;
	#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsNegative($extension_Int8_268_i8 const& $this ) -> const bool;
	#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsNegativeInfinity($extension_Int8_268_i8 const& $this ) -> const bool;
	#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsNormal($extension_Int8_268_i8 const& $this ) -> const bool;
	#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsOddInteger($extension_Int8_268_i8 const& $this ) -> const bool;
	#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsPositive($extension_Int8_268_i8 const& $this ) -> const bool;
	#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsPositiveInfinity($extension_Int8_268_i8 const& $this ) -> const bool;
	#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsRealNumber($extension_Int8_268_i8 const& $this ) -> const bool;
	#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsSubnormal($extension_Int8_268_i8 const& $this ) -> const bool;
	#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsZero($extension_Int8_268_i8 const& $this ) -> const bool;
	#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int8_268_i8, INumberBase, INumberBase, $extension_Int8_268_i8);
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
#line 380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	using $extension_Int8_380_i8 = Builtin::i8;
	#line 380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE(ISignedNumber, ISignedNumber);
	#line 381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class __TT> struct $static_getMinusOne; template<> struct $static_getMinusOne<$extension_Int8_380_i8> { static inline constexpr auto get() -> const $extension_Int8_380_i8; };
	#line 380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int8_380_i8, ISignedNumber, ISignedNumber, $extension_Int8_380_i8);
	} namespace System{
using $extensions::$static_getMinusOne;

		} namespace $extensions { using namespace System;
#line 384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	using $extension_Int8_384_i8 = Builtin::i8;
	#line 384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE(INumber, INumber);
	#line 387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ASTRUMSTD_API auto CopySign($extension_Int8_384_i8 const& $this LIFETIMEBOUND, $extension_Int8_384_i8 sign)  -> const typename $extension_Int8_384_i8;
	#line 405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto Max($extension_Int8_384_i8 const& $this LIFETIMEBOUND, $extension_Int8_384_i8 rhs) noexcept -> const typename $extension_Int8_384_i8;
	#line 406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto MaxNumber($extension_Int8_384_i8 const& $this LIFETIMEBOUND, $extension_Int8_384_i8 rhs) noexcept -> const typename $extension_Int8_384_i8;
	#line 407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto Min($extension_Int8_384_i8 const& $this LIFETIMEBOUND, $extension_Int8_384_i8 rhs) noexcept -> const typename $extension_Int8_384_i8;
	#line 408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto MinNumber($extension_Int8_384_i8 const& $this LIFETIMEBOUND, $extension_Int8_384_i8 rhs) noexcept -> const typename $extension_Int8_384_i8;
	#line 409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto Clamp($extension_Int8_384_i8 const& $this LIFETIMEBOUND, $extension_Int8_384_i8 min, $extension_Int8_384_i8 max)  -> const typename $extension_Int8_384_i8;
	#line 385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getSign($extension_Int8_384_i8 const& $this ) -> const Builtin::i32;
	#line 384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int8_384_i8, INumber, INumber, $extension_Int8_384_i8);
	} namespace System{
using $extensions::CopySign;
using $extensions::Max;
using $extensions::MaxNumber;
using $extensions::Min;
using $extensions::MinNumber;
using $extensions::Clamp;
using $extensions::getSign;

		} namespace $extensions { using namespace System;
#line 412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	using $extension_Int8_412_i8 = Builtin::i8;
	#line 412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE(IBinaryNumber, IBinaryNumber);
	#line 464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto CheckedLog($extension_Int8_412_i8 const& $this LIFETIMEBOUND, $extension_Int8_412_i8 base) noexcept -> const Builtin::Nullable<$extension_Int8_412_i8>;
	#line 497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ASTRUMSTD_API auto Log($extension_Int8_412_i8 const& $this LIFETIMEBOUND, $extension_Int8_412_i8 base)  -> const typename $extension_Int8_412_i8;
	#line 507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto Midpoint($extension_Int8_412_i8 const& $this LIFETIMEBOUND, $extension_Int8_412_i8 rhs) noexcept -> const typename $extension_Int8_412_i8;
	#line 515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto IsMultipleOf($extension_Int8_412_i8 const& $this LIFETIMEBOUND, $extension_Int8_412_i8 rhs) noexcept -> const bool;
	#line 414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class __TT> struct $static_getAllBitsSet; template<> struct $static_getAllBitsSet<$extension_Int8_412_i8> { static inline constexpr auto get() -> const $extension_Int8_412_i8; };
	#line 417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsPow2($extension_Int8_412_i8 const& $this ) -> const bool;
	#line 421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getCheckedLog2($extension_Int8_412_i8 const& $this ) -> const Builtin::Nullable<$extension_Int8_412_i8>;
	#line 431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getLog2($extension_Int8_412_i8 const& $this ) -> const $extension_Int8_412_i8;
	#line 441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getCheckedLog10($extension_Int8_412_i8 const& $this ) -> const Builtin::Nullable<$extension_Int8_412_i8>;
	#line 454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getLog10($extension_Int8_412_i8 const& $this ) -> const $extension_Int8_412_i8;
	#line 412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int8_412_i8, IBinaryNumber, IBinaryNumber, $extension_Int8_412_i8);
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
#line 529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	using $extension_Int8_529_i8 = Builtin::i8;
	#line 529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE(ICheckedArithmetic, ICheckedArithmetic);
	#line 532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_add_qst($extension_Int8_529_i8 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int8_529_i8>;
	#line 541 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_add_qst_eq($extension_Int8_529_i8 & $this , T rhs) noexcept -> typename $extension_Int8_529_i8&;
	#line 552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_add_ne($extension_Int8_529_i8 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int8_529_i8;
	#line 559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_add_ne_eq($extension_Int8_529_i8 & $this , T rhs)  -> typename $extension_Int8_529_i8&;
	#line 563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_add_mod($extension_Int8_529_i8 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int8_529_i8;
	#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_add_mod_eq($extension_Int8_529_i8 & $this , T rhs) noexcept -> typename $extension_Int8_529_i8&;
	#line 574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_add_or($extension_Int8_529_i8 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int8_529_i8;
	#line 581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_add_or_eq($extension_Int8_529_i8 & $this , T rhs) noexcept -> typename $extension_Int8_529_i8&;
	#line 585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_add_mod_qst($extension_Int8_529_i8 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Tuple<$extension_Int8_529_i8, bool>;
	#line 593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_qst($extension_Int8_529_i8 & $this )  -> typename $extension_Int8_529_i8&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_qst_postfix($extension_Int8_529_i8 & $this)  -> decltype(auto);
	#line 596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_ne($extension_Int8_529_i8 & $this )  -> typename $extension_Int8_529_i8&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_ne_postfix($extension_Int8_529_i8 & $this)  -> decltype(auto);
	#line 599 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_mod($extension_Int8_529_i8 & $this )  -> typename $extension_Int8_529_i8&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_mod_postfix($extension_Int8_529_i8 & $this)  -> decltype(auto);
	#line 602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_or($extension_Int8_529_i8 & $this )  -> typename $extension_Int8_529_i8&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_or_postfix($extension_Int8_529_i8 & $this)  -> decltype(auto);
	#line 606 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto CarryingAdd($extension_Int8_529_i8 const& $this LIFETIMEBOUND, $extension_Int8_529_i8 rhs, bool carry) noexcept -> const Builtin::Tuple<$extension_Int8_529_i8, bool>;
	#line 615 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto BorrowingSub($extension_Int8_529_i8 const& $this LIFETIMEBOUND, $extension_Int8_529_i8 rhs, bool carry) noexcept -> const Builtin::Tuple<$extension_Int8_529_i8, bool>;
	#line 624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_sub_qst($extension_Int8_529_i8 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int8_529_i8>;
	#line 633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_sub_qst_eq($extension_Int8_529_i8 & $this , T rhs) noexcept -> typename $extension_Int8_529_i8&;
	#line 644 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_sub_ne($extension_Int8_529_i8 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int8_529_i8;
	#line 651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_sub_ne_eq($extension_Int8_529_i8 & $this , T rhs)  -> typename $extension_Int8_529_i8&;
	#line 655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_sub_mod($extension_Int8_529_i8 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int8_529_i8;
	#line 662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_sub_mod_eq($extension_Int8_529_i8 & $this , T rhs) noexcept -> typename $extension_Int8_529_i8&;
	#line 666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_sub_or($extension_Int8_529_i8 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int8_529_i8;
	#line 673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_sub_or_eq($extension_Int8_529_i8 & $this , T rhs) noexcept -> typename $extension_Int8_529_i8&;
	#line 677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_sub_mod_qst($extension_Int8_529_i8 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Tuple<$extension_Int8_529_i8, bool>;
	#line 685 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_qst($extension_Int8_529_i8 & $this )  -> typename $extension_Int8_529_i8&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_qst_postfix($extension_Int8_529_i8 & $this)  -> decltype(auto);
	#line 688 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_ne($extension_Int8_529_i8 & $this )  -> typename $extension_Int8_529_i8&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_ne_postfix($extension_Int8_529_i8 & $this)  -> decltype(auto);
	#line 691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_mod($extension_Int8_529_i8 & $this )  -> typename $extension_Int8_529_i8&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_mod_postfix($extension_Int8_529_i8 & $this)  -> decltype(auto);
	#line 694 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_or($extension_Int8_529_i8 & $this )  -> typename $extension_Int8_529_i8&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_or_postfix($extension_Int8_529_i8 & $this)  -> decltype(auto);
	#line 698 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mul_qst($extension_Int8_529_i8 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int8_529_i8>;
	#line 707 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mul_qst_eq($extension_Int8_529_i8 & $this , T rhs) noexcept -> typename $extension_Int8_529_i8&;
	#line 718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mul_ne($extension_Int8_529_i8 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int8_529_i8;
	#line 725 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mul_ne_eq($extension_Int8_529_i8 & $this , T rhs)  -> typename $extension_Int8_529_i8&;
	#line 729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mul_mod($extension_Int8_529_i8 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int8_529_i8;
	#line 736 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mul_mod_eq($extension_Int8_529_i8 & $this , T rhs) noexcept -> typename $extension_Int8_529_i8&;
	#line 740 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mul_or($extension_Int8_529_i8 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int8_529_i8;
	#line 747 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mul_or_eq($extension_Int8_529_i8 & $this , T rhs) noexcept -> typename $extension_Int8_529_i8&;
	#line 751 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mul_mod_qst($extension_Int8_529_i8 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Tuple<$extension_Int8_529_i8, bool>;
	#line 760 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_mul_gt($extension_Int8_529_i8 const& $this LIFETIMEBOUND, $extension_Int8_529_i8 rhs) noexcept -> const Builtin::Tuple<Builtin::u8, Builtin::i8>;
	#line 769 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto CarryingMul($extension_Int8_529_i8 const& $this LIFETIMEBOUND, $extension_Int8_529_i8 rhs, $extension_Int8_529_i8 carry) noexcept -> const Builtin::Tuple<Builtin::u8, Builtin::i8>;
	#line 777 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_bsl_qst($extension_Int8_529_i8 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int8_529_i8>;
	#line 786 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_bsl_qst_eq($extension_Int8_529_i8 & $this , T rhs) noexcept -> typename $extension_Int8_529_i8&;
	#line 798 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_bsl_ne($extension_Int8_529_i8 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int8_529_i8;
	#line 805 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_bsl_ne_eq($extension_Int8_529_i8 & $this , T rhs)  -> typename $extension_Int8_529_i8&;
	#line 810 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_bsl_mod($extension_Int8_529_i8 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int8_529_i8;
	#line 817 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_eq($extension_Int8_529_i8 & $this , T rhs)  -> typename $extension_Int8_529_i8&;
	#line 822 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_bsl_or($extension_Int8_529_i8 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int8_529_i8;
	#line 829 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_bsl_or_eq($extension_Int8_529_i8 & $this , T rhs)  -> typename $extension_Int8_529_i8&;
	#line 834 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_qst($extension_Int8_529_i8 const& $this LIFETIMEBOUND, T rhs)  -> const Builtin::Tuple<$extension_Int8_529_i8, bool>;
	#line 843 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst($extension_Int8_529_i8 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int8_529_i8>;
	#line 853 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst_eq($extension_Int8_529_i8 & $this , T rhs) noexcept -> typename $extension_Int8_529_i8&;
	#line 864 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mod_qst($extension_Int8_529_i8 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int8_529_i8>;
	#line 873 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mod_qst_eq($extension_Int8_529_i8 & $this , T rhs) noexcept -> typename $extension_Int8_529_i8&;
	#line 885 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mod_ne($extension_Int8_529_i8 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int8_529_i8;
	#line 892 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mod_ne_eq($extension_Int8_529_i8 & $this , T rhs)  -> typename $extension_Int8_529_i8&;
	#line 897 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mod_mod($extension_Int8_529_i8 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int8_529_i8;
	#line 904 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mod_mod_eq($extension_Int8_529_i8 & $this , T rhs)  -> typename $extension_Int8_529_i8&;
	#line 909 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mod_mod_qst($extension_Int8_529_i8 const& $this LIFETIMEBOUND, T rhs)  -> const Builtin::Tuple<$extension_Int8_529_i8, bool>;
	#line 918 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_sub_qst($extension_Int8_529_i8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::Nullable<$extension_Int8_529_i8>;
	#line 928 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_sub_ne($extension_Int8_529_i8 const& $this LIFETIMEBOUND)  -> const typename $extension_Int8_529_i8;
	#line 935 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_sub_mod($extension_Int8_529_i8 const& $this LIFETIMEBOUND)  -> const typename $extension_Int8_529_i8;
	#line 943 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_sub_or($extension_Int8_529_i8 const& $this LIFETIMEBOUND)  -> const typename $extension_Int8_529_i8;
	#line 951 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_sub_mod_qst($extension_Int8_529_i8 const& $this LIFETIMEBOUND)  -> const Builtin::Tuple<$extension_Int8_529_i8, bool>;
	#line 959 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_lt_lt_qst($extension_Int8_529_i8 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<$extension_Int8_529_i8>;
	#line 967 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_lt_lt_qst_eq($extension_Int8_529_i8 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int8_529_i8&;
	#line 975 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_lt_lt_ne($extension_Int8_529_i8 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_Int8_529_i8;
	#line 983 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_lt_lt_ne_eq($extension_Int8_529_i8 & $this , Builtin::i32 amount)  -> typename $extension_Int8_529_i8&;
	#line 985 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_lt_lt_mod($extension_Int8_529_i8 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename $extension_Int8_529_i8;
	#line 988 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_lt_lt_mod_eq($extension_Int8_529_i8 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int8_529_i8&;
	#line 990 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_lt_lt_mod_qst($extension_Int8_529_i8 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Tuple<$extension_Int8_529_i8, bool>;
	#line 993 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_gt_gt_qst($extension_Int8_529_i8 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<$extension_Int8_529_i8>;
	#line 1001 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_gt_gt_qst_eq($extension_Int8_529_i8 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int8_529_i8&;
	#line 1009 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_gt_gt_ne($extension_Int8_529_i8 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_Int8_529_i8;
	#line 1017 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_gt_gt_ne_eq($extension_Int8_529_i8 & $this , Builtin::i32 amount)  -> typename $extension_Int8_529_i8&;
	#line 1019 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_gt_gt_mod($extension_Int8_529_i8 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename $extension_Int8_529_i8;
	#line 1022 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_gt_gt_mod_eq($extension_Int8_529_i8 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int8_529_i8&;
	#line 1024 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_gt_gt_mod_qst($extension_Int8_529_i8 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Tuple<$extension_Int8_529_i8, bool>;
	#line 1030 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_xor_xor_qst($extension_Int8_529_i8 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const Builtin::Nullable<$extension_Int8_529_i8>;
	#line 1059 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_xor_xor_qst_eq($extension_Int8_529_i8 & $this , Builtin::u32 exp) noexcept -> typename $extension_Int8_529_i8&;
	#line 1067 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_xor_xor_ne($extension_Int8_529_i8 const& $this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename $extension_Int8_529_i8;
	#line 1088 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_xor_xor_ne_eq($extension_Int8_529_i8 & $this , Builtin::u32 exp)  -> typename $extension_Int8_529_i8&;
	#line 1090 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_xor_xor_mod($extension_Int8_529_i8 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename $extension_Int8_529_i8;
	#line 1122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_xor_xor_mod_eq($extension_Int8_529_i8 & $this , Builtin::u32 exp) noexcept -> typename $extension_Int8_529_i8&;
	#line 1124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_xor_xor_or($extension_Int8_529_i8 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename $extension_Int8_529_i8;
	#line 1133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_xor_xor_or_eq($extension_Int8_529_i8 & $this , Builtin::u32 exp) noexcept -> typename $extension_Int8_529_i8&;
	#line 1135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_xor_xor_mod_qst($extension_Int8_529_i8 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const Builtin::Tuple<$extension_Int8_529_i8, bool>;
	#line 1166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getCheckedAbs($extension_Int8_529_i8 const& $this ) -> const Builtin::Nullable<$extension_Int8_529_i8>;
	#line 1169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getStrictAbs($extension_Int8_529_i8 const& $this ) -> const $extension_Int8_529_i8;
	#line 1172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getWrappingAbs($extension_Int8_529_i8 const& $this ) -> const $extension_Int8_529_i8;
	#line 1175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getSaturatingAbs($extension_Int8_529_i8 const& $this ) -> const $extension_Int8_529_i8;
	#line 1178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getOverflowingAbs($extension_Int8_529_i8 const& $this ) -> const Builtin::Tuple<$extension_Int8_529_i8, bool>;
	#line 529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int8_529_i8, ICheckedArithmetic, ICheckedArithmetic, $extension_Int8_529_i8);
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
#line 1187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	using $extension_Int8_1187_i8 = Builtin::i8;
	#line 1187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE(IBinaryInteger, IBinaryInteger);
	#line 1232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NextMultipleOf($extension_Int8_1187_i8 const& $this LIFETIMEBOUND, $extension_Int8_1187_i8 rhs)  -> const typename $extension_Int8_1187_i8;
	#line 1248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto CheckedNextMultipleOf($extension_Int8_1187_i8 const& $this LIFETIMEBOUND, $extension_Int8_1187_i8 rhs) noexcept -> const Builtin::Nullable<$extension_Int8_1187_i8>;
	#line 1188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class __TT> struct $static_getIsSigned; template<> struct $static_getIsSigned<$extension_Int8_1187_i8> { static inline constexpr auto get() -> const bool; };
	#line 1190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getTrailingZeroCount($extension_Int8_1187_i8 const& $this ) -> const Builtin::u32;
	#line 1191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getTrailingOneCount($extension_Int8_1187_i8 const& $this ) -> const Builtin::u32;
	#line 1192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getByteCount($extension_Int8_1187_i8 const& $this ) -> const Builtin::u32;
	#line 1193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getMinimalBitWidth($extension_Int8_1187_i8 const& $this ) -> const Builtin::u32;
	#line 1197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ASTRUMSTD_API auto getCheckedIsqrt($extension_Int8_1187_i8 const& $this ) -> const Builtin::Nullable<$extension_Int8_1187_i8>;
	#line 1209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline auto getIsqrt($extension_Int8_1187_i8 const& $this ) -> const $extension_Int8_1187_i8;
	#line 1218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getLog2Ceiling($extension_Int8_1187_i8 const& $this ) -> const $extension_Int8_1187_i8;
	#line 1269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getPrevPow2($extension_Int8_1187_i8 const& $this ) -> const $extension_Int8_1187_i8;
	#line 1280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getNextPow2($extension_Int8_1187_i8 const& $this ) -> const $extension_Int8_1187_i8;
	#line 1292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getCheckedNextPow2($extension_Int8_1187_i8 const& $this ) -> const Builtin::Nullable<$extension_Int8_1187_i8>;
	#line 1304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getWrappingNextPow2($extension_Int8_1187_i8 const& $this ) -> const $extension_Int8_1187_i8;
	#line 1187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int8_1187_i8, IBinaryInteger, IBinaryInteger, $extension_Int8_1187_i8);
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
#line 1315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	using $extension_Int8_1315_i8 = Builtin::i8;
	#line 1315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE(IFixedWidthInteger, IFixedWidthInteger);
	#line 1336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto RotateLeft($extension_Int8_1315_i8 const& $this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename $extension_Int8_1315_i8;
	#line 1337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto RotateRight($extension_Int8_1315_i8 const& $this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename $extension_Int8_1315_i8;
	#line 1316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class __TT> struct $static_getBitWidth; template<> struct $static_getBitWidth<$extension_Int8_1315_i8> { static inline constexpr auto get() -> const Builtin::u32; };
	#line 1318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getLeadingZeroCount($extension_Int8_1315_i8 const& $this ) -> const Builtin::u32;
	#line 1319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getLeadingOneCount($extension_Int8_1315_i8 const& $this ) -> const Builtin::u32;
	#line 1320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getPopCount($extension_Int8_1315_i8 const& $this ) -> const Builtin::u32;
	#line 1321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getZeroCount($extension_Int8_1315_i8 const& $this ) -> const Builtin::u32;
	#line 1322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getByteSwapped($extension_Int8_1315_i8 const& $this ) -> const $extension_Int8_1315_i8;
	#line 1323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getBigEndian($extension_Int8_1315_i8 const& $this ) -> const $extension_Int8_1315_i8;
	#line 1324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getLittleEndian($extension_Int8_1315_i8 const& $this ) -> const $extension_Int8_1315_i8;
	#line 1325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getReverseBits($extension_Int8_1315_i8 const& $this ) -> const $extension_Int8_1315_i8;
	#line 1327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getShortestBitLength($extension_Int8_1315_i8 const& $this ) -> const Builtin::u32;
	#line 1315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int8_1315_i8, IFixedWidthInteger, IFixedWidthInteger, $extension_Int8_1315_i8);
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
#line 1341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	using $extension_Int8_1341_i8 = Builtin::i8;
	#line 1341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE(IBinaryIntegerFormatInfo, IBinaryIntegerFormatInfo);
	#line 1349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto IsGreaterThanAsUnsigned($extension_Int8_1341_i8 const& $this LIFETIMEBOUND, $extension_Int8_1341_i8 rhs) noexcept -> const bool;
	#line 1342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class __TT> struct $static_getMaxDigitCount; template<> struct $static_getMaxDigitCount<$extension_Int8_1341_i8> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class __TT> struct $static_getMaxHexDigitCount; template<> struct $static_getMaxHexDigitCount<$extension_Int8_1341_i8> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class __TT> struct $static_getMaxValueDiv10; template<> struct $static_getMaxValueDiv10<$extension_Int8_1341_i8> { static inline constexpr auto get() -> const $extension_Int8_1341_i8; };
	#line 1346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getMultiplyBy10($extension_Int8_1341_i8 const& $this ) -> const $extension_Int8_1341_i8;
	#line 1347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getMultiplyBy16($extension_Int8_1341_i8 const& $this ) -> const $extension_Int8_1341_i8;
	#line 1341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int8_1341_i8, IBinaryIntegerFormatInfo, IBinaryIntegerFormatInfo, $extension_Int8_1341_i8);
	} namespace System{
using $extensions::IsGreaterThanAsUnsigned;
using $extensions::$static_getMaxDigitCount;
using $extensions::$static_getMaxHexDigitCount;
using $extensions::$static_getMaxValueDiv10;
using $extensions::getMultiplyBy10;
using $extensions::getMultiplyBy16;

	} namespace $extensions {
template<class __TT> struct $static_CarryingMul8;
template<class __TT> struct $static_getCarryingMul8;
template<class __TT> struct $static_CheckedLog2;
template<class __TT> struct $static_getCheckedLog2;
template<class __TT> struct $static_IsPositive;
template<class __TT> struct $static_getIsPositive;
template<class __TT> struct $static_DefaultMin;
template<class __TT> struct $static_getDefaultMin;
template<class __TT> struct $static_IsNegative;
template<class __TT> struct $static_getIsNegative;
template<class __TT> struct $static_SafeAdd;
template<class __TT> struct $static_getSafeAdd;
template<class __TT> struct $static_DefaultSign;
template<class __TT> struct $static_getDefaultSign;
template<class __TT> struct $static_MinimalBitWidth;
template<class __TT> struct $static_getMinimalBitWidth;
template<class __TT> struct $static_MinusOne;
template<class __TT> struct $static_getMinusOne;
template<class __TT> struct $static_PopCount;
template<class __TT> struct $static_getPopCount;
template<class __TT> struct $static_BitWidth;
template<class __TT> struct $static_getBitWidth;
template<class __TT> struct $static_AllBitsSet;
template<class __TT> struct $static_getAllBitsSet;
template<class __TT> struct $static_LeadingZeroCount;
template<class __TT> struct $static_getLeadingZeroCount;
template<class __TT> struct $static_IsPositiveInfinity;
template<class __TT> struct $static_getIsPositiveInfinity;
template<class __TT> struct $static_InvalidOperationException;
template<class __TT> struct $static_getInvalidOperationException;
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
template<class __TT> struct $static_StrictNegate;
template<class __TT> struct $static_getStrictNegate;
template<class __TT> struct $static_Isqrt8;
template<class __TT> struct $static_getIsqrt8;
template<class __TT> struct $static_WideningMul8;
template<class __TT> struct $static_getWideningMul8;
template<class __TT> struct $static_MaxValue;
template<class __TT> struct $static_getMaxValue;
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
template<class __TT> struct $static_MinMagnitude;
template<class __TT> struct $static_getMinMagnitude;
template<class __TT> struct $static_OverflowingAbs;
template<class __TT> struct $static_getOverflowingAbs;
template<class __TT> struct $static_ReverseBits8;
template<class __TT> struct $static_getReverseBits8;
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
template<class __TT> struct $static_DefaultMax;
template<class __TT> struct $static_getDefaultMax;
template<class __TT> struct $static_WrappingNegate;
template<class __TT> struct $static_getWrappingNegate;
template<class __TT> struct $static_Min;
template<class __TT> struct $static_getMin;
template<class __TT> struct $static_CheckedLog;
template<class __TT> struct $static_getCheckedLog;
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
template<class __TT> struct $static_SafeDivExact;
template<class __TT> struct $static_getSafeDivExact;
template<class __TT> struct $static_BorrowingSub;
template<class __TT> struct $static_getBorrowingSub;
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
template<class __TT> struct $static_SaturatingNegate;
template<class __TT> struct $static_getSaturatingNegate;
template<class __TT> struct $static_BitsRotateLeft;
template<class __TT> struct $static_getBitsRotateLeft;
template<class __TT> struct $static_BitsRotateRight;
template<class __TT> struct $static_getBitsRotateRight;
template<class __TT> struct $static_NarrowToUInt8;
template<class __TT> struct $static_getNarrowToUInt8;
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
template<class __TT> struct $static_IsFinite;
template<class __TT> struct $static_getIsFinite;
template<class __TT> struct $static_IsInteger;
template<class __TT> struct $static_getIsInteger;
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
template<class __TT> struct $static_ByteCount;
template<class __TT> struct $static_getByteCount;
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
#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto $static_getMinValue<$extension_Int8_15_i8>::get() -> const $extension_Int8_15_i8
	{
		#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::i8(-128)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto $static_getMaxValue<$extension_Int8_15_i8>::get() -> const $extension_Int8_15_i8
	{
		#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(+Builtin::i8(127)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	
} namespace $extensions { using namespace System;
#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto operator<=>($extension_Int8_20_i8 const& $this LIFETIMEBOUND, Builtin::Nullable<$extension_Int8_20_i8> rhs) noexcept -> const Builtin::i32
	{
		#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		{
			#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			if ((!Builtin::Is(rhs, nullptr))) {
				#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				auto __tmp0 = *rhs; const auto& rhs = __tmp0;
				
				#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				return $this <=> rhs;
			}
		}
		#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return Builtin::i32(1);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_gt_gt_gt($extension_Int8_20_i8 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_Int8_20_i8
	{
		#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i8>(UnsafeCast<Builtin::u8>($this) >> amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_gt_gt_gt_eq($extension_Int8_20_i8 & $this , Builtin::i32 amount)  -> typename $extension_Int8_20_i8&
	{
		#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_gt_gt_gt)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_lt_lt_bsl($extension_Int8_20_i8 const& $this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename $extension_Int8_20_i8
	{
		#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((amount <=> ADV_USPCS(BitWidth, $extension_Int8_20_i8)()) >= 0) {
			#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return Builtin::i8(0);
		}
		#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return Builtin::UncheckedShiftLeft($this, Builtin::Cast<true, Builtin::i32>(amount));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_lt_lt_bsl_eq($extension_Int8_20_i8 & $this , Builtin::u32 amount) noexcept -> typename $extension_Int8_20_i8&
	{
		#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_lt_lt_bsl)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_gt_gt_bsl($extension_Int8_20_i8 const& $this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename $extension_Int8_20_i8
	{
		#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((amount <=> ADV_USPCS(BitWidth, $extension_Int8_20_i8)()) >= 0) {
			#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return ADV_UPCS(IsPositive)($this.$ref()) ? Builtin::i8(0) : Builtin::i8(-1);
		}
		#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return Builtin::UncheckedShiftRight($this, Builtin::Cast<true, Builtin::i32>(amount));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_gt_gt_bsl_eq($extension_Int8_20_i8 & $this , Builtin::u32 amount) noexcept -> typename $extension_Int8_20_i8&
	{
		#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_gt_gt_bsl)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getHashCode($extension_Int8_20_i8 const & $this ) -> const Builtin::u64
	{
		#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u64>($this)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	
} namespace $extensions { using namespace System;
#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToBoolean($extension_Int8_88_i8 const& $this LIFETIMEBOUND) noexcept -> const bool
	{
		#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY($this != Builtin::i32(0)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToInt8($extension_Int8_88_i8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i8
	{
		#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToUInt8($extension_Int8_88_i8 const& $this LIFETIMEBOUND)  -> const Builtin::u8
	{
		#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (($this <=> Builtin::i32(0)) < 0) {
			#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 95 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return Builtin::Cast<true, Builtin::u8>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToInt16($extension_Int8_88_i8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i16
	{
		#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 98 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToUInt16($extension_Int8_88_i8 const& $this LIFETIMEBOUND)  -> const Builtin::u16
	{
		#line 99 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (($this <=> Builtin::i32(0)) < 0) {
			#line 100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return Builtin::Cast<true, Builtin::u16>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToInt32($extension_Int8_88_i8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i32
	{
		#line 104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToUInt32($extension_Int8_88_i8 const& $this LIFETIMEBOUND)  -> const Builtin::u32
	{
		#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (($this <=> Builtin::i32(0)) < 0) {
			#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return Builtin::Cast<true, Builtin::u32>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToInt64($extension_Int8_88_i8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i64
	{
		#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToUInt64($extension_Int8_88_i8 const& $this LIFETIMEBOUND)  -> const Builtin::u64
	{
		#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (($this <=> Builtin::i32(0)) < 0) {
			#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return Builtin::Cast<true, Builtin::u64>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToInt128($extension_Int8_88_i8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i128
	{
		#line 118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToUInt128($extension_Int8_88_i8 const& $this LIFETIMEBOUND)  -> const Builtin::u128
	{
		#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (($this <=> Builtin::i32(0)) < 0) {
			#line 121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return Builtin::Cast<true, Builtin::u128>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToIsize($extension_Int8_88_i8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::isize
	{
		#line 125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToUsize($extension_Int8_88_i8 const& $this LIFETIMEBOUND)  -> const Builtin::usize
	{
		#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (($this <=> Builtin::i32(0)) < 0) {
			#line 128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return Builtin::Cast<true, Builtin::usize>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToFloat32($extension_Int8_88_i8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::f32
	{
		#line 132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToFloat64($extension_Int8_88_i8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::f64
	{
		#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToByte($extension_Int8_88_i8 const& $this LIFETIMEBOUND)  -> const Builtin::u8
	{
		#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (($this <=> Builtin::i32(0)) < 0) {
			#line 136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return Builtin::Cast<true, Builtin::u8>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToChar($extension_Int8_88_i8 const& $this LIFETIMEBOUND)  -> const Builtin::char32
	{
		#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (($this <=> Builtin::i32(0)) < 0) {
			#line 142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return Builtin::Cast<true, Builtin::char32>($this);
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	
} namespace $extensions { using namespace System;
#line 152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_div_mod($extension_Int8_150_i8 const& $this LIFETIMEBOUND, T rhs)  -> const Builtin::Tuple<$extension_Int8_150_i8, $extension_Int8_150_i8>
	{
		#line 154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator /% implemented only for integer types");
		#line 155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return Builtin::MakeTuple(ADV_UFCS(_operator_bsl)($this, rhs), $this % rhs);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_div_not($extension_Int8_150_i8 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int8_150_i8
	{
		#line 160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::Auto<decltype($this)> result = $this; 
		#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		result /= rhs;
		#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_div_not_eq($extension_Int8_150_i8 & $this , auto rhs)  -> typename $extension_Int8_150_i8&
	{
		#line 165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY($this /= rhs); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_div_lt($extension_Int8_150_i8 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int8_150_i8
	{
		#line 169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if constexpr (Builtin::TypeIs<T, IBinaryInteger>()) {
			#line 170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			const auto& [div, rem] = ADV_UFCS(_operator_div_mod)($this, rhs);
			#line 171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			if (rem == Builtin::i32(0)) {
				#line 172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				return div;
			}
			#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			Builtin::Auto<decltype(($this ^ rhs) >> (ADV_USPCS(BitWidth, $extension_Int8_150_i8)() - Builtin::i32(1)))> correction = ($this ^ rhs) >> (ADV_USPCS(BitWidth, $extension_Int8_150_i8)() - Builtin::i32(1)); 
			#line 175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return div + correction;
		} else {
			#line 176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			{
				#line 177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				return Builtin::Cast<true, $extension_Int8_150_i8>((ADV_UFCS(_operator_div_lt)(Builtin::f64{$this}, rhs)));
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_div_lt_eq($extension_Int8_150_i8 & $this , auto rhs)  -> typename $extension_Int8_150_i8&
	{
		#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY($this = $extension_Int8_150_i8{ADV_UFCS(_operator_div_lt)($this, rhs)}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mod_lt($extension_Int8_150_i8 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int8_150_i8
	{
		#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		const Builtin::Auto<decltype($this % rhs)> result = $this % rhs; 
		#line 186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_gt_gt_gt)((result ^ rhs), Builtin::i32{ADV_USPCS(BitWidth, $extension_Int8_150_i8)() - Builtin::i32(1)}))> signDiff = ADV_UFCS(_operator_gt_gt_gt)((result ^ rhs), Builtin::i32{ADV_USPCS(BitWidth, $extension_Int8_150_i8)() - Builtin::i32(1)}); 
		#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		const Builtin::Auto<decltype((result != Builtin::i32(0)) & (signDiff != Builtin::i32(0)))> needAdjust = (result != Builtin::i32(0)) & (signDiff != Builtin::i32(0)); 
		#line 188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return result + (needAdjust ? rhs : T{});
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_mod_lt_eq($extension_Int8_150_i8 & $this , auto rhs)  -> typename $extension_Int8_150_i8&
	{
		#line 191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY($this = $extension_Int8_150_i8{ADV_UFCS(_operator_mod_lt)($this, rhs)}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_div_gt($extension_Int8_150_i8 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int8_150_i8
	{
		#line 195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if constexpr (Builtin::TypeIs<T, IBinaryInteger>()) {
			#line 196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			const auto& [div, rem] = ADV_UFCS(_operator_div_mod)($this, rhs);
			#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			if (rem == Builtin::i32(0)) {
				#line 198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				return div;
			}
			#line 200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			Builtin::Auto<decltype(Builtin::i8(1) + (($this ^ rhs) >> (ADV_USPCS(BitWidth, $extension_Int8_150_i8)() - Builtin::i32(1))))> correction = Builtin::i8(1) + (($this ^ rhs) >> (ADV_USPCS(BitWidth, $extension_Int8_150_i8)() - Builtin::i32(1))); 
			#line 201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return div + correction;
		} else {
			#line 202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			{
				#line 203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				return Builtin::Cast<true, $extension_Int8_150_i8>((ADV_UFCS(_operator_div_gt)(Builtin::f64{$this}, rhs)));
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_div_gt_eq($extension_Int8_150_i8 & $this , auto rhs)  -> typename $extension_Int8_150_i8&
	{
		#line 207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY($this = $extension_Int8_150_i8{ADV_UFCS(_operator_div_gt)($this, rhs)}); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	
} namespace $extensions { using namespace System;
#line 212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_bsl($extension_Int8_210_i8 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int8_210_i8
	{
		#line 212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Div)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_bsl_eq($extension_Int8_210_i8 & $this , T rhs)  -> typename $extension_Int8_210_i8&
	{
		#line 214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(DivAssign)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl($extension_Int8_210_i8 const& $this LIFETIMEBOUND, T rhs)  -> const Builtin::Nullable<$extension_Int8_210_i8>
	{
		#line 221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\? implemented only for integer types");
		#line 222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		$extension_Int8_210_i8 result{}; 
		#line 223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (Builtin::DivExact($this, rhs, result)) {
			#line 224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return result;
		}
		#line 226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return nullptr;
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	
} namespace $extensions { using namespace System;
#line 233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_xor_xor($extension_Int8_230_i8 const& $this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename $extension_Int8_230_i8
	{
		#line 235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return Builtin::i8(1);
		}
		#line 240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::Auto<decltype(Builtin::i8(1))> result = Builtin::i8(1); 
		#line 243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (std::is_constant_evaluated()) {
			#line 244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			while ((exp <=> Builtin::i32(1)) > 0) 
			{
				#line 245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
					#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
					result *= base;
				}
				#line 248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
				#line 249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				base *= base;
			}
			#line 251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return result * base;
		} else {
			#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			{
				#line 253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				for (;;) 
				{
					#line 254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
					if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
						#line 255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
						result *= base;
						#line 256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
						if (exp == Builtin::i32(1)) {
							#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
							return result;
						}
					}
					#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
					ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
					#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
					base *= base;
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_xor_xor_eq($extension_Int8_230_i8 & $this , Builtin::u32 exp)  -> typename $extension_Int8_230_i8&
	{
		#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_xor_xor)($this, exp)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	
} namespace $extensions { using namespace System;
#line 321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline auto MaxMagnitudeNumber($extension_Int8_268_i8 const& $this LIFETIMEBOUND, $extension_Int8_268_i8 rhs) noexcept -> const typename $extension_Int8_268_i8
	{
		#line 321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(MaxMagnitude)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline auto MinMagnitudeNumber($extension_Int8_268_i8 const& $this LIFETIMEBOUND, $extension_Int8_268_i8 rhs) noexcept -> const typename $extension_Int8_268_i8
	{
		#line 352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(MinMagnitude)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToInt8($extension_Int8_268_i8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i8
	{
		#line 366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToUInt8($extension_Int8_268_i8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u8
	{
		#line 367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u8>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToInt16($extension_Int8_268_i8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i16
	{
		#line 368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToUInt16($extension_Int8_268_i8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u16
	{
		#line 369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u16>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToInt32($extension_Int8_268_i8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i32
	{
		#line 370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToUInt32($extension_Int8_268_i8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u32
	{
		#line 371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u32>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToInt64($extension_Int8_268_i8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i64
	{
		#line 372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToUInt64($extension_Int8_268_i8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u64
	{
		#line 373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u64>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToInt128($extension_Int8_268_i8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i128
	{
		#line 374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToUInt128($extension_Int8_268_i8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u128
	{
		#line 375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u128>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToIsize($extension_Int8_268_i8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::isize
	{
		#line 376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToUsize($extension_Int8_268_i8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::usize
	{
		#line 377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::usize>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto $static_getOne<$extension_Int8_268_i8>::get() -> const $extension_Int8_268_i8
	{
		#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::i8(1)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto $static_getZero<$extension_Int8_268_i8>::get() -> const $extension_Int8_268_i8
	{
		#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::i8(0)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto $static_getRadix<$extension_Int8_268_i8>::get() -> const Builtin::i32
	{
		#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(2)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getAbs($extension_Int8_268_i8 const & $this ) -> const $extension_Int8_268_i8
	{
		#line 273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)($this.$ref()) ? -$this : $this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsCanonical($extension_Int8_268_i8 const & $this ) -> const bool
	{
		#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsComplexNumber($extension_Int8_268_i8 const & $this ) -> const bool
	{
		#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsEvenInteger($extension_Int8_268_i8 const & $this ) -> const bool
	{
		#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(($this & Builtin::i8(1)) == Builtin::i32(0)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsFinite($extension_Int8_268_i8 const & $this ) -> const bool
	{
		#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsImaginaryNumber($extension_Int8_268_i8 const & $this ) -> const bool
	{
		#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsInfinity($extension_Int8_268_i8 const & $this ) -> const bool
	{
		#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsInteger($extension_Int8_268_i8 const & $this ) -> const bool
	{
		#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsNaN($extension_Int8_268_i8 const & $this ) -> const bool
	{
		#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsNegative($extension_Int8_268_i8 const & $this ) -> const bool
	{
		#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(($this <=> Builtin::i32(0)) < 0); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsNegativeInfinity($extension_Int8_268_i8 const & $this ) -> const bool
	{
		#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsNormal($extension_Int8_268_i8 const & $this ) -> const bool
	{
		#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY($this != Builtin::i32(0)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsOddInteger($extension_Int8_268_i8 const & $this ) -> const bool
	{
		#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(($this & Builtin::i8(1)) != Builtin::i32(0)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsPositive($extension_Int8_268_i8 const & $this ) -> const bool
	{
		#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(($this <=> Builtin::i32(0)) >= 0); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsPositiveInfinity($extension_Int8_268_i8 const & $this ) -> const bool
	{
		#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsRealNumber($extension_Int8_268_i8 const & $this ) -> const bool
	{
		#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsSubnormal($extension_Int8_268_i8 const & $this ) -> const bool
	{
		#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsZero($extension_Int8_268_i8 const & $this ) -> const bool
	{
		#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY($this == Builtin::i32(0)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	
} namespace $extensions { using namespace System;
#line 381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto $static_getMinusOne<$extension_Int8_380_i8>::get() -> const $extension_Int8_380_i8
	{
		#line 381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::i8(-1)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	
} namespace $extensions { using namespace System;
#line 405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto Max($extension_Int8_384_i8 const& $this LIFETIMEBOUND, $extension_Int8_384_i8 rhs) noexcept -> const typename $extension_Int8_384_i8
	{
		#line 405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultMax)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto MaxNumber($extension_Int8_384_i8 const& $this LIFETIMEBOUND, $extension_Int8_384_i8 rhs) noexcept -> const typename $extension_Int8_384_i8
	{
		#line 406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Max)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto Min($extension_Int8_384_i8 const& $this LIFETIMEBOUND, $extension_Int8_384_i8 rhs) noexcept -> const typename $extension_Int8_384_i8
	{
		#line 407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultMin)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto MinNumber($extension_Int8_384_i8 const& $this LIFETIMEBOUND, $extension_Int8_384_i8 rhs) noexcept -> const typename $extension_Int8_384_i8
	{
		#line 408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Min)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto Clamp($extension_Int8_384_i8 const& $this LIFETIMEBOUND, $extension_Int8_384_i8 min, $extension_Int8_384_i8 max)  -> const typename $extension_Int8_384_i8
	{
		#line 409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultClamp)($this, min, max)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getSign($extension_Int8_384_i8 const & $this ) -> const Builtin::i32
	{
		#line 385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultSign)($this)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	
} namespace $extensions { using namespace System;
#line 464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto CheckedLog($extension_Int8_412_i8 const& $this LIFETIMEBOUND, $extension_Int8_412_i8 base) noexcept -> const Builtin::Nullable<$extension_Int8_412_i8>
	{
		#line 466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (($this <=> Builtin::i32(0)) <= 0 || (base <=> Builtin::i32(1)) <= 0) {
			#line 467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return nullptr;
		}
		#line 470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (std::is_constant_evaluated()) {
			#line 471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			if (base == Builtin::i32(2)) {
				#line 472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				return ADV_UPCS(CheckedLog2)($this.$ref());
			}
			#line 474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			if (base == Builtin::i32(10)) {
				#line 475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				return ADV_UPCS(CheckedLog10)($this.$ref());
			}
		}
		#line 479 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (($this <=> base) < 0) {
			#line 480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return Builtin::i8(0);
		}
		#line 483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		$extension_Int8_412_i8 n = Builtin::i8(1); 
		#line 484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::Auto<decltype(base)> r = base; 
		#line 485 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_bsl)($this, base))> baseRatio = ADV_UFCS(_operator_bsl)($this, base); 
		#line 486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		while ((r <=> baseRatio) <= 0) 
		{
			#line 487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			++n;
			#line 488 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			r *= base;
		}
		#line 491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return n;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto Midpoint($extension_Int8_412_i8 const& $this LIFETIMEBOUND, $extension_Int8_412_i8 rhs) noexcept -> const typename $extension_Int8_412_i8
	{
		#line 509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		const Builtin::Auto<decltype((($this ^ rhs) >> Builtin::i32(1)) + ($this & rhs))> result = (($this ^ rhs) >> Builtin::i32(1)) + ($this & rhs); 
		#line 510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		const Builtin::Auto<decltype((result <=> Builtin::i32(0)) < 0)> correction = (result <=> Builtin::i32(0)) < 0; 
		#line 511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return result + ((Builtin::Cast<true, $extension_Int8_412_i8>(correction)) & ($this ^ rhs));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto IsMultipleOf($extension_Int8_412_i8 const& $this LIFETIMEBOUND, $extension_Int8_412_i8 rhs) noexcept -> const bool
	{
		#line 517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (rhs == Builtin::i32(0)) {
			#line 518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return $this == Builtin::i32(0);
		}
		#line 521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (rhs == Builtin::i32(-1)) {
			#line 522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return Builtin::Boolean(true);
		}
		#line 525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return $this % rhs == Builtin::i32(0);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto $static_getAllBitsSet<$extension_Int8_412_i8>::get() -> const $extension_Int8_412_i8
	{
		#line 414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(MinusOne, Builtin::i8)()); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsPow2($extension_Int8_412_i8 const & $this ) -> const bool
	{
		#line 417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsPositive)($this.$ref()) && ADV_UPCS(PopCount)($this.$ref()) == Builtin::i32(1)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getCheckedLog2($extension_Int8_412_i8 const & $this ) -> const Builtin::Nullable<$extension_Int8_412_i8>
	{
		#line 423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (($this <=> Builtin::i32(0)) <= 0) {
			#line 424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return nullptr;
		}
		#line 427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return Builtin::Cast<true, $extension_Int8_412_i8>((ADV_USPCS(BitWidth, $extension_Int8_412_i8)() - Builtin::i32(1) - ADV_UPCS(LeadingZeroCount)($this.$ref())));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getLog2($extension_Int8_412_i8 const & $this ) -> const $extension_Int8_412_i8
	{
		#line 433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (const auto result = ADV_UPCS(CheckedLog2)($this.$ref())) {
			{
				#line 433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				return result;
			}
		}
		#line 436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getCheckedLog10($extension_Int8_412_i8 const & $this ) -> const Builtin::Nullable<$extension_Int8_412_i8>
	{
		#line 443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (($this <=> Builtin::i32(0)) <= 0) {
			#line 444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return nullptr;
		}
		#line 447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::u32>($this))> val = Builtin::Cast<true, Builtin::u32>($this); 
		#line 448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		constexpr Builtin::u32 C1 = Builtin::u32(0b1100000000U) - Builtin::i32(10);
		#line 449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		constexpr Builtin::u32 C2 = Builtin::u32(0b1000000000U) - Builtin::i32(100);
		#line 450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return Builtin::Cast<true, $extension_Int8_412_i8>((((val + C1) & (val + C2)) >> Builtin::i32(8)));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getLog10($extension_Int8_412_i8 const & $this ) -> const $extension_Int8_412_i8
	{
		#line 456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (const auto result = ADV_UPCS(CheckedLog10)($this.$ref())) {
			{
				#line 456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				return result;
			}
		}
		#line 459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	
} namespace $extensions { using namespace System;
#line 532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_add_qst($extension_Int8_529_i8 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int8_529_i8>
	{
		#line 534 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +? implemented only for integer types");
		#line 535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		$extension_Int8_529_i8 result{}; 
		#line 536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (Builtin::SafeAdd($this, rhs, result)) {
			#line 537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return result;
		}
		#line 539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 541 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_add_qst_eq($extension_Int8_529_i8 & $this , T rhs) noexcept -> typename $extension_Int8_529_i8&
	{
		#line 543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +?= implemented only for integer types");
		#line 544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (const auto result = ADV_UFCS(_operator_add_qst)($this, rhs)) {
			{
				#line 544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 545 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				$this = result;
			}
		}
		#line 547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_add_ne($extension_Int8_529_i8 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int8_529_i8
	{
		#line 554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +! implemented only for integer types");
		#line 555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		$extension_Int8_529_i8 result{}; 
		#line 556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::StrictAdd($this, rhs, result);
		#line 557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_add_ne_eq($extension_Int8_529_i8 & $this , T rhs)  -> typename $extension_Int8_529_i8&
	{
		#line 559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_add_ne)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_add_mod($extension_Int8_529_i8 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int8_529_i8
	{
		#line 565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +% implemented only for integer types");
		#line 566 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		$extension_Int8_529_i8 result{}; 
		#line 567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::WrappingAdd($this, rhs, result);
		#line 568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_add_mod_eq($extension_Int8_529_i8 & $this , T rhs) noexcept -> typename $extension_Int8_529_i8&
	{
		#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_add_mod)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_add_or($extension_Int8_529_i8 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int8_529_i8
	{
		#line 576 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +| implemented only for integer types");
		#line 577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		$extension_Int8_529_i8 result{}; 
		#line 578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::SaturatingAdd($this, rhs, result);
		#line 579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_add_or_eq($extension_Int8_529_i8 & $this , T rhs) noexcept -> typename $extension_Int8_529_i8&
	{
		#line 581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_add_or)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_add_mod_qst($extension_Int8_529_i8 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Tuple<$extension_Int8_529_i8, bool>
	{
		#line 586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +%? implemented only for integer types");
		#line 587 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		$extension_Int8_529_i8 result{}; 
		#line 588 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::Auto<decltype(!Builtin::SafeAdd($this, rhs, result))> overflowed = !Builtin::SafeAdd($this, rhs, result); 
		#line 589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return Builtin::MakeTuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_add_add_qst($extension_Int8_529_i8 & $this )  -> typename $extension_Int8_529_i8&
	{
		#line 593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_qst_eq)($this, Builtin::i8(1))); 
	}
	inline constexpr auto _operator_add_add_qst_postfix($extension_Int8_529_i8 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_add_add_qst)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_add_add_ne($extension_Int8_529_i8 & $this )  -> typename $extension_Int8_529_i8&
	{
		#line 596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_ne_eq)($this, Builtin::i8(1))); 
	}
	inline constexpr auto _operator_add_add_ne_postfix($extension_Int8_529_i8 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_add_add_ne)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 599 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_add_add_mod($extension_Int8_529_i8 & $this )  -> typename $extension_Int8_529_i8&
	{
		#line 599 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_mod_eq)($this, Builtin::i8(1))); 
	}
	inline constexpr auto _operator_add_add_mod_postfix($extension_Int8_529_i8 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_add_add_mod)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_add_add_or($extension_Int8_529_i8 & $this )  -> typename $extension_Int8_529_i8&
	{
		#line 602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_or_eq)($this, Builtin::i8(1))); 
	}
	inline constexpr auto _operator_add_add_or_postfix($extension_Int8_529_i8 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_add_add_or)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 606 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto CarryingAdd($extension_Int8_529_i8 const& $this LIFETIMEBOUND, $extension_Int8_529_i8 rhs, bool carry) noexcept -> const Builtin::Tuple<$extension_Int8_529_i8, bool>
	{
		#line 608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		$extension_Int8_529_i8 result{}; 
		#line 609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::Auto<decltype(Builtin::CarryingAdd($this, rhs, carry, result))> overflowed = Builtin::CarryingAdd($this, rhs, carry, result); 
		#line 610 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return Builtin::MakeTuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 615 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto BorrowingSub($extension_Int8_529_i8 const& $this LIFETIMEBOUND, $extension_Int8_529_i8 rhs, bool carry) noexcept -> const Builtin::Tuple<$extension_Int8_529_i8, bool>
	{
		#line 617 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		$extension_Int8_529_i8 result{}; 
		#line 618 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::Auto<decltype(Builtin::BorrowingSub($this, rhs, carry, result))> overflowed = Builtin::BorrowingSub($this, rhs, carry, result); 
		#line 619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return Builtin::MakeTuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_sub_qst($extension_Int8_529_i8 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int8_529_i8>
	{
		#line 626 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -? implemented only for integer types");
		#line 627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		$extension_Int8_529_i8 result{}; 
		#line 628 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (Builtin::SafeSubtract($this, rhs, result)) {
			#line 629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return result;
		}
		#line 631 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_sub_qst_eq($extension_Int8_529_i8 & $this , T rhs) noexcept -> typename $extension_Int8_529_i8&
	{
		#line 635 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -?= implemented only for integer types");
		#line 636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (const auto result = ADV_UFCS(_operator_sub_qst)($this, rhs)) {
			{
				#line 636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				$this = result;
			}
		}
		#line 639 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 644 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_sub_ne($extension_Int8_529_i8 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int8_529_i8
	{
		#line 646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -! implemented only for integer types");
		#line 647 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		$extension_Int8_529_i8 result{}; 
		#line 648 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::StrictSubtract($this, rhs, result);
		#line 649 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_sub_ne_eq($extension_Int8_529_i8 & $this , T rhs)  -> typename $extension_Int8_529_i8&
	{
		#line 651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_sub_ne)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_sub_mod($extension_Int8_529_i8 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int8_529_i8
	{
		#line 657 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -% implemented only for integer types");
		#line 658 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		$extension_Int8_529_i8 result{}; 
		#line 659 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::WrappingSubtract($this, rhs, result);
		#line 660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_sub_mod_eq($extension_Int8_529_i8 & $this , T rhs) noexcept -> typename $extension_Int8_529_i8&
	{
		#line 662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_sub_mod)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_sub_or($extension_Int8_529_i8 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int8_529_i8
	{
		#line 668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -| implemented only for integer types");
		#line 669 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		$extension_Int8_529_i8 result{}; 
		#line 670 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::SaturatingSubtract($this, rhs, result);
		#line 671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_sub_or_eq($extension_Int8_529_i8 & $this , T rhs) noexcept -> typename $extension_Int8_529_i8&
	{
		#line 673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_sub_or)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_sub_mod_qst($extension_Int8_529_i8 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Tuple<$extension_Int8_529_i8, bool>
	{
		#line 678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -%? implemented only for integer types");
		#line 679 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		$extension_Int8_529_i8 result{}; 
		#line 680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::Auto<decltype(!Builtin::SafeSubtract($this, rhs, result))> overflowed = !Builtin::SafeSubtract($this, rhs, result); 
		#line 681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return Builtin::MakeTuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 685 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_sub_sub_qst($extension_Int8_529_i8 & $this )  -> typename $extension_Int8_529_i8&
	{
		#line 685 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_qst_eq)($this, Builtin::i8(1))); 
	}
	inline constexpr auto _operator_sub_sub_qst_postfix($extension_Int8_529_i8 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_sub_sub_qst)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 688 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_sub_sub_ne($extension_Int8_529_i8 & $this )  -> typename $extension_Int8_529_i8&
	{
		#line 688 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_ne_eq)($this, Builtin::i8(1))); 
	}
	inline constexpr auto _operator_sub_sub_ne_postfix($extension_Int8_529_i8 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_sub_sub_ne)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_sub_sub_mod($extension_Int8_529_i8 & $this )  -> typename $extension_Int8_529_i8&
	{
		#line 691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_mod_eq)($this, Builtin::i8(1))); 
	}
	inline constexpr auto _operator_sub_sub_mod_postfix($extension_Int8_529_i8 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_sub_sub_mod)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 694 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_sub_sub_or($extension_Int8_529_i8 & $this )  -> typename $extension_Int8_529_i8&
	{
		#line 694 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_or_eq)($this, Builtin::i8(1))); 
	}
	inline constexpr auto _operator_sub_sub_or_postfix($extension_Int8_529_i8 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_sub_sub_or)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 698 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mul_qst($extension_Int8_529_i8 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int8_529_i8>
	{
		#line 700 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *? implemented only for integer types");
		#line 701 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		$extension_Int8_529_i8 result{}; 
		#line 702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (Builtin::SafeMultiply($this, rhs, result)) {
			#line 703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return result;
		}
		#line 705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 707 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mul_qst_eq($extension_Int8_529_i8 & $this , T rhs) noexcept -> typename $extension_Int8_529_i8&
	{
		#line 709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *?= implemented only for integer types");
		#line 710 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (const auto result = ADV_UFCS(_operator_mul_qst)($this, rhs)) {
			{
				#line 710 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 711 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				$this = result;
			}
		}
		#line 713 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mul_ne($extension_Int8_529_i8 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int8_529_i8
	{
		#line 720 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *! implemented only for integer types");
		#line 721 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		$extension_Int8_529_i8 result{}; 
		#line 722 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::StrictMultiply($this, rhs, result);
		#line 723 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 725 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mul_ne_eq($extension_Int8_529_i8 & $this , T rhs)  -> typename $extension_Int8_529_i8&
	{
		#line 725 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_mul_ne)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mul_mod($extension_Int8_529_i8 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int8_529_i8
	{
		#line 731 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *% implemented only for integer types");
		#line 732 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		$extension_Int8_529_i8 result{}; 
		#line 733 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::WrappingMultiply($this, rhs, result);
		#line 734 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 736 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mul_mod_eq($extension_Int8_529_i8 & $this , T rhs) noexcept -> typename $extension_Int8_529_i8&
	{
		#line 736 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_mul_mod)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 740 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mul_or($extension_Int8_529_i8 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int8_529_i8
	{
		#line 742 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *| implemented only for integer types");
		#line 743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		$extension_Int8_529_i8 result{}; 
		#line 744 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::SaturatingMultiply($this, rhs, result);
		#line 745 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 747 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mul_or_eq($extension_Int8_529_i8 & $this , T rhs) noexcept -> typename $extension_Int8_529_i8&
	{
		#line 747 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_mul_or)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 751 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mul_mod_qst($extension_Int8_529_i8 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Tuple<$extension_Int8_529_i8, bool>
	{
		#line 752 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *%? implemented only for integer types");
		#line 753 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		$extension_Int8_529_i8 result{}; 
		#line 754 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::Auto<decltype(!Builtin::SafeMultiply($this, rhs, result))> overflowed = !Builtin::SafeMultiply($this, rhs, result); 
		#line 755 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return Builtin::MakeTuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 760 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_mul_gt($extension_Int8_529_i8 const& $this LIFETIMEBOUND, $extension_Int8_529_i8 rhs) noexcept -> const Builtin::Tuple<Builtin::u8, Builtin::i8>
	{
		#line 762 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		const auto& [low, high] = Builtin::WideningMul8($this, rhs);
		#line 763 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return Builtin::MakeTuple(low, high);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 769 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto CarryingMul($extension_Int8_529_i8 const& $this LIFETIMEBOUND, $extension_Int8_529_i8 rhs, $extension_Int8_529_i8 carry) noexcept -> const Builtin::Tuple<Builtin::u8, Builtin::i8>
	{
		#line 771 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		const auto& [low, high] = Builtin::CarryingMul8($this, rhs, carry);
		#line 772 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return Builtin::MakeTuple(low, high);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 777 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_bsl_qst($extension_Int8_529_i8 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int8_529_i8>
	{
		#line 779 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\? implemented only for integer types");
		#line 780 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		$extension_Int8_529_i8 result{}; 
		#line 781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (Builtin::SafeDivide($this, rhs, result)) {
			#line 782 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return result;
		}
		#line 784 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 786 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_bsl_qst_eq($extension_Int8_529_i8 & $this , T rhs) noexcept -> typename $extension_Int8_529_i8&
	{
		#line 788 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\?= implemented only for integer types");
		#line 789 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (const auto result = ADV_UFCS(_operator_bsl_qst)($this, rhs)) {
			{
				#line 789 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 790 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				$this = result;
			}
		}
		#line 792 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 798 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_bsl_ne($extension_Int8_529_i8 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int8_529_i8
	{
		#line 800 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\! implemented only for integer types");
		#line 801 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		$extension_Int8_529_i8 result{}; 
		#line 802 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::StrictDivide($this, rhs, result);
		#line 803 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 805 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_bsl_ne_eq($extension_Int8_529_i8 & $this , T rhs)  -> typename $extension_Int8_529_i8&
	{
		#line 805 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_bsl_ne)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 810 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_bsl_mod($extension_Int8_529_i8 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int8_529_i8
	{
		#line 812 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\% implemented only for integer types");
		#line 813 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		$extension_Int8_529_i8 result{}; 
		#line 814 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::WrappingDivide($this, rhs, result);
		#line 815 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 817 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_eq($extension_Int8_529_i8 & $this , T rhs)  -> typename $extension_Int8_529_i8&
	{
		#line 817 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_bsl_mod)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 822 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_bsl_or($extension_Int8_529_i8 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int8_529_i8
	{
		#line 824 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\| implemented only for integer types");
		#line 825 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		$extension_Int8_529_i8 result{}; 
		#line 826 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::SaturatingDivide($this, rhs, result);
		#line 827 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 829 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_bsl_or_eq($extension_Int8_529_i8 & $this , T rhs)  -> typename $extension_Int8_529_i8&
	{
		#line 829 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_bsl_or)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 834 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_qst($extension_Int8_529_i8 const& $this LIFETIMEBOUND, T rhs)  -> const Builtin::Tuple<$extension_Int8_529_i8, bool>
	{
		#line 835 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\%? implemented only for integer types");
		#line 836 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		$extension_Int8_529_i8 result{}; 
		#line 837 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::Auto<decltype(!Builtin::SafeDivide($this, rhs, result))> overflowed = !Builtin::SafeDivide($this, rhs, result); 
		#line 838 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return Builtin::MakeTuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 843 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst($extension_Int8_529_i8 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int8_529_i8>
	{
		#line 845 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\? implemented only for integer types");
		#line 846 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		$extension_Int8_529_i8 result{}; 
		#line 847 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (Builtin::SafeDivExact($this, rhs, result)) {
			#line 848 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return result;
		}
		#line 850 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 853 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst_eq($extension_Int8_529_i8 & $this , T rhs) noexcept -> typename $extension_Int8_529_i8&
	{
		#line 855 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\?= implemented only for integer types");
		#line 856 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (const auto result = ADV_UFCS(_operator_bsl_bsl_qst)($this, rhs)) {
			{
				#line 856 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 857 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				$this = result;
			}
		}
		#line 859 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 864 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mod_qst($extension_Int8_529_i8 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int8_529_i8>
	{
		#line 866 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %? implemented only for integer types");
		#line 867 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		$extension_Int8_529_i8 result{}; 
		#line 868 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (Builtin::SafeModulus($this, rhs, result)) {
			#line 869 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return result;
		}
		#line 871 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 873 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mod_qst_eq($extension_Int8_529_i8 & $this , T rhs) noexcept -> typename $extension_Int8_529_i8&
	{
		#line 875 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %?= implemented only for integer types");
		#line 876 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (const auto result = ADV_UFCS(_operator_mod_qst)($this, rhs)) {
			{
				#line 876 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 877 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				$this = result;
			}
		}
		#line 879 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 885 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mod_ne($extension_Int8_529_i8 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int8_529_i8
	{
		#line 887 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %! implemented only for integer types");
		#line 888 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		$extension_Int8_529_i8 result{}; 
		#line 889 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::StrictModulus($this, rhs, result);
		#line 890 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 892 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mod_ne_eq($extension_Int8_529_i8 & $this , T rhs)  -> typename $extension_Int8_529_i8&
	{
		#line 892 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_mod_ne)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 897 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mod_mod($extension_Int8_529_i8 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int8_529_i8
	{
		#line 899 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %% implemented only for integer types");
		#line 900 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		$extension_Int8_529_i8 result{}; 
		#line 901 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::WrappingModulus($this, rhs, result);
		#line 902 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 904 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mod_mod_eq($extension_Int8_529_i8 & $this , T rhs)  -> typename $extension_Int8_529_i8&
	{
		#line 904 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_mod_mod)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 909 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mod_mod_qst($extension_Int8_529_i8 const& $this LIFETIMEBOUND, T rhs)  -> const Builtin::Tuple<$extension_Int8_529_i8, bool>
	{
		#line 910 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %%? implemented only for integer types");
		#line 911 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		$extension_Int8_529_i8 result{}; 
		#line 912 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::Auto<decltype(!Builtin::SafeModulus($this, rhs, result))> overflowed = !Builtin::SafeModulus($this, rhs, result); 
		#line 913 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return Builtin::MakeTuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 918 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_sub_qst($extension_Int8_529_i8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::Nullable<$extension_Int8_529_i8>
	{
		#line 920 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		$extension_Int8_529_i8 result{}; 
		#line 921 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (Builtin::SafeNegate($this, result)) {
			#line 922 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return result;
		}
		#line 924 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 928 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_sub_ne($extension_Int8_529_i8 const& $this LIFETIMEBOUND)  -> const typename $extension_Int8_529_i8
	{
		#line 930 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		$extension_Int8_529_i8 result{}; 
		#line 931 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::StrictNegate($this, result);
		#line 932 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 935 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_sub_mod($extension_Int8_529_i8 const& $this LIFETIMEBOUND)  -> const typename $extension_Int8_529_i8
	{
		#line 937 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		$extension_Int8_529_i8 result{}; 
		#line 938 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::WrappingNegate($this, result);
		#line 939 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 943 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_sub_or($extension_Int8_529_i8 const& $this LIFETIMEBOUND)  -> const typename $extension_Int8_529_i8
	{
		#line 945 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		$extension_Int8_529_i8 result{}; 
		#line 946 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::SaturatingNegate($this, result);
		#line 947 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 951 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_sub_mod_qst($extension_Int8_529_i8 const& $this LIFETIMEBOUND)  -> const Builtin::Tuple<$extension_Int8_529_i8, bool>
	{
		#line 953 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		$extension_Int8_529_i8 result{}; 
		#line 954 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::Auto<decltype(!Builtin::SafeNegate($this, result))> overflowed = !Builtin::SafeNegate($this, result); 
		#line 955 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return Builtin::MakeTuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 959 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_lt_lt_qst($extension_Int8_529_i8 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<$extension_Int8_529_i8>
	{
		#line 961 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_Int8_529_i8)()) < 0) {
			#line 962 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return Builtin::UncheckedShiftLeft($this, amount);
		}
		#line 964 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 967 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_lt_lt_qst_eq($extension_Int8_529_i8 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int8_529_i8&
	{
		#line 969 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_Int8_529_i8)()) < 0) {
			#line 970 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return $this <<= amount;
		}
		#line 972 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 975 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_lt_lt_ne($extension_Int8_529_i8 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_Int8_529_i8
	{
		#line 977 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_Int8_529_i8)()) < 0) {
			#line 978 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return Builtin::UncheckedShiftLeft($this, amount);
		}
		#line 980 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::Throw(Builtin::IntegerOverflowException{});
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 983 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_lt_lt_ne_eq($extension_Int8_529_i8 & $this , Builtin::i32 amount)  -> typename $extension_Int8_529_i8&
	{
		#line 983 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_lt_lt_ne)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 985 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_lt_lt_mod($extension_Int8_529_i8 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename $extension_Int8_529_i8
	{
		#line 985 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::UncheckedShiftLeft($this, amount & (ADV_USPCS(BitWidth, $extension_Int8_529_i8)() - Builtin::i32(1)))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 988 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_lt_lt_mod_eq($extension_Int8_529_i8 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int8_529_i8&
	{
		#line 988 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_lt_lt_mod)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 990 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_lt_lt_mod_qst($extension_Int8_529_i8 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Tuple<$extension_Int8_529_i8, bool>
	{
		#line 990 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::MakeTuple(ADV_UFCS(_operator_lt_lt_mod)($this, amount), (amount <=> Builtin::i32(0)) < 0 || (amount <=> ADV_USPCS(BitWidth, $extension_Int8_529_i8)()) >= 0)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 993 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_gt_gt_qst($extension_Int8_529_i8 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<$extension_Int8_529_i8>
	{
		#line 995 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_Int8_529_i8)()) < 0) {
			#line 996 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return $this >> amount;
		}
		#line 998 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1001 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_gt_gt_qst_eq($extension_Int8_529_i8 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int8_529_i8&
	{
		#line 1003 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_Int8_529_i8)()) < 0) {
			#line 1004 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return $this >>= amount;
		}
		#line 1006 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1009 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_gt_gt_ne($extension_Int8_529_i8 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_Int8_529_i8
	{
		#line 1011 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_Int8_529_i8)()) < 0) {
			#line 1012 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return $this >> amount;
		}
		#line 1014 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::Throw(Builtin::IntegerOverflowException{});
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1017 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_gt_gt_ne_eq($extension_Int8_529_i8 & $this , Builtin::i32 amount)  -> typename $extension_Int8_529_i8&
	{
		#line 1017 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_gt_gt_ne)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1019 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_gt_gt_mod($extension_Int8_529_i8 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename $extension_Int8_529_i8
	{
		#line 1019 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::UncheckedShiftRight($this, amount & (ADV_USPCS(BitWidth, $extension_Int8_529_i8)() - Builtin::i32(1)))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1022 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_gt_gt_mod_eq($extension_Int8_529_i8 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int8_529_i8&
	{
		#line 1022 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_gt_gt_mod)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1024 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_gt_gt_mod_qst($extension_Int8_529_i8 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Tuple<$extension_Int8_529_i8, bool>
	{
		#line 1024 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::MakeTuple(ADV_UFCS(_operator_gt_gt_mod)($this, amount), (amount <=> Builtin::i32(0)) < 0 || (amount <=> ADV_USPCS(BitWidth, $extension_Int8_529_i8)()) >= 0)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1030 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_xor_xor_qst($extension_Int8_529_i8 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const Builtin::Nullable<$extension_Int8_529_i8>
	{
		#line 1032 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1034 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return Builtin::i8(1);
		}
		#line 1037 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 1038 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::Auto<decltype(Builtin::i8(1))> result = Builtin::i8(1); 
		#line 1040 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		for (;;) 
		{
			#line 1041 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 1042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				if (const auto mul = ADV_UFCS(_operator_mul_qst)(result, base)) {
					{
						#line 1042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
						auto __tmp0 = *mul; const auto& mul = __tmp0;
						
						#line 1043 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
						result = mul;
					}
				} else {
					#line 1044 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
					{
						#line 1045 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
						return nullptr;
					}
				}
				#line 1047 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				if (exp == Builtin::i32(1)) {
					#line 1048 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
					return result;
				}
			}
			#line 1050 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
			#line 1051 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			if (const auto mul = ADV_UFCS(_operator_mul_qst)(base, base)) {
				{
					#line 1051 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
					auto __tmp0 = *mul; const auto& mul = __tmp0;
					
					#line 1052 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
					base = mul;
				}
			} else {
				#line 1053 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				{
					#line 1054 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
					return nullptr;
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1059 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_xor_xor_qst_eq($extension_Int8_529_i8 & $this , Builtin::u32 exp) noexcept -> typename $extension_Int8_529_i8&
	{
		#line 1061 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (auto result = ADV_UFCS(_operator_xor_xor_qst)($this, exp)) {
			{
				#line 1061 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 1062 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				return $this = result;
			}
		}
		#line 1064 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1067 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_xor_xor_ne($extension_Int8_529_i8 const& $this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename $extension_Int8_529_i8
	{
		#line 1069 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1071 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return Builtin::i8(1);
		}
		#line 1074 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 1075 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::Auto<decltype(Builtin::i8(1))> result = Builtin::i8(1); 
		#line 1077 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		for (;;) 
		{
			#line 1078 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 1079 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				ADV_UFCS(_operator_mul_ne_eq)(result, base);
				#line 1080 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				if (exp == Builtin::i32(1)) {
					#line 1081 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
					return result;
				}
			}
			#line 1083 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
			#line 1084 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			ADV_UFCS(_operator_mul_ne_eq)(base, base);
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1088 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_xor_xor_ne_eq($extension_Int8_529_i8 & $this , Builtin::u32 exp)  -> typename $extension_Int8_529_i8&
	{
		#line 1088 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_xor_xor_ne)($this, exp)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1090 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_xor_xor_mod($extension_Int8_529_i8 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename $extension_Int8_529_i8
	{
		#line 1092 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1094 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return Builtin::i8(1);
		}
		#line 1097 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 1098 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::Auto<decltype(Builtin::i8(1))> result = Builtin::i8(1); 
		#line 1100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (std::is_constant_evaluated()) {
			#line 1101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			while ((exp <=> Builtin::i32(1)) > 0) 
			{
				#line 1102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
					#line 1103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
					ADV_UFCS(_operator_mul_mod_eq)(result, base);
				}
				#line 1105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
				#line 1106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				ADV_UFCS(_operator_mul_mod_eq)(base, base);
			}
			#line 1108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return ADV_UFCS(_operator_mul_mod)(result, base);
		} else {
			#line 1109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			{
				#line 1110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				for (;;) 
				{
					#line 1111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
					if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
						#line 1112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
						ADV_UFCS(_operator_mul_mod_eq)(result, base);
						#line 1113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
						if (exp == Builtin::i32(1)) {
							#line 1114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
							return result;
						}
					}
					#line 1116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
					ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
					#line 1117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
					ADV_UFCS(_operator_mul_mod_eq)(base, base);
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_xor_xor_mod_eq($extension_Int8_529_i8 & $this , Builtin::u32 exp) noexcept -> typename $extension_Int8_529_i8&
	{
		#line 1122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_xor_xor_mod)($this, exp)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_xor_xor_or($extension_Int8_529_i8 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename $extension_Int8_529_i8
	{
		#line 1126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (const auto result = ADV_UFCS(_operator_xor_xor_qst)($this, exp)) {
			{
				#line 1126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 1127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				return result;
			}
		}
		#line 1130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return (ADV_UPCS(IsNegative)($this.$ref()) && exp % Builtin::i32(2) == Builtin::i32(1)) ? ADV_USPCS(MinValue, $extension_Int8_529_i8)() : ADV_USPCS(MaxValue, $extension_Int8_529_i8)();
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_xor_xor_or_eq($extension_Int8_529_i8 & $this , Builtin::u32 exp) noexcept -> typename $extension_Int8_529_i8&
	{
		#line 1133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_xor_xor_or)($this, exp)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_xor_xor_mod_qst($extension_Int8_529_i8 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const Builtin::Tuple<$extension_Int8_529_i8, bool>
	{
		#line 1137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return Builtin::MakeTuple(Builtin::i8(1), Builtin::Boolean(false));
		}
		#line 1142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 1143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::Auto<decltype(Builtin::i8(1))> result = Builtin::i8(1); 
		#line 1144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::Auto<decltype(Builtin::Boolean(false))> overflowed = Builtin::Boolean(false); 
		#line 1145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::Auto<decltype(Builtin::MakeTuple(Builtin::i8(0), Builtin::Boolean(false)))> tmp = Builtin::MakeTuple(Builtin::i8(0), Builtin::Boolean(false)); 
		#line 1147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		for (;;) 
		{
			#line 1148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 1149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				tmp = ADV_UFCS(_operator_mul_mod_qst)(result, base);
				#line 1150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				if (exp == Builtin::i32(1)) {
					#line 1151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
					get<1>(tmp) |= overflowed;
					#line 1152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
					return tmp;
				}
				#line 1154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				result = get<0>(tmp);
				#line 1155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				overflowed |= get<1>(tmp);
			}
			#line 1157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
			#line 1158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			tmp = ADV_UFCS(_operator_mul_mod_qst)(base, base);
			#line 1159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			base = get<0>(tmp);
			#line 1160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			overflowed |= get<1>(tmp);
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getCheckedAbs($extension_Int8_529_i8 const & $this ) -> const Builtin::Nullable<$extension_Int8_529_i8>
	{
		#line 1166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)($this.$ref()) ? ADV_UFCS(_operator_sub_qst)($this) : $this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getStrictAbs($extension_Int8_529_i8 const & $this ) -> const $extension_Int8_529_i8
	{
		#line 1169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)($this.$ref()) ? ADV_UFCS(_operator_sub_ne)($this) : $this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getWrappingAbs($extension_Int8_529_i8 const & $this ) -> const $extension_Int8_529_i8
	{
		#line 1172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)($this.$ref()) ? ADV_UFCS(_operator_sub_mod)($this) : $this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getSaturatingAbs($extension_Int8_529_i8 const & $this ) -> const $extension_Int8_529_i8
	{
		#line 1175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)($this.$ref()) ? ADV_UFCS(_operator_sub_or)($this) : $this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getOverflowingAbs($extension_Int8_529_i8 const & $this ) -> const Builtin::Tuple<$extension_Int8_529_i8, bool>
	{
		#line 1180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (ADV_UPCS(IsNegative)($this.$ref())) {
			#line 1181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return ADV_UFCS(_operator_sub_mod_qst)($this);
		}
		#line 1183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return Builtin::MakeTuple($this, Builtin::Boolean(false));
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	
} namespace $extensions { using namespace System;
#line 1232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NextMultipleOf($extension_Int8_1187_i8 const& $this LIFETIMEBOUND, $extension_Int8_1187_i8 rhs)  -> const typename $extension_Int8_1187_i8
	{
		#line 1234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (rhs == Builtin::i32(-1)) {
			#line 1235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return $this;
		}
		#line 1238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		const Builtin::Auto<decltype($this % rhs)> remainder = $this % rhs; 
		#line 1239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		const Builtin::Auto<decltype(((remainder <=> Builtin::i32(0)) > 0 && (rhs <=> Builtin::i32(0)) < 0) || ((remainder <=> Builtin::i32(0)) < 0 && (rhs <=> Builtin::i32(0)) > 0) ? remainder + rhs : remainder)> mod = ((remainder <=> Builtin::i32(0)) > 0 && (rhs <=> Builtin::i32(0)) < 0) || ((remainder <=> Builtin::i32(0)) < 0 && (rhs <=> Builtin::i32(0)) > 0) ? remainder + rhs : remainder; 
		#line 1242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return mod == Builtin::i32(0) ? $this : $this + (rhs - mod);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto CheckedNextMultipleOf($extension_Int8_1187_i8 const& $this LIFETIMEBOUND, $extension_Int8_1187_i8 rhs) noexcept -> const Builtin::Nullable<$extension_Int8_1187_i8>
	{
		#line 1250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (rhs == Builtin::i32(-1)) {
			#line 1251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return $this;
		}
		#line 1254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		$extension_Int8_1187_i8 remainder{}; 
		#line 1255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (const auto r = ADV_UFCS(_operator_mod_qst)($this, rhs)) {
			{
				#line 1255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				auto __tmp0 = *r; const auto& r = __tmp0;
				
				#line 1256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				remainder = r;
			}
		} else {
			#line 1257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return nullptr;
		}
		#line 1259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		const Builtin::Auto<decltype(((remainder <=> Builtin::i32(0)) > 0 && (rhs <=> Builtin::i32(0)) < 0) || ((remainder <=> Builtin::i32(0)) < 0 && (rhs <=> Builtin::i32(0)) > 0) ? remainder + rhs : remainder)> mod = ((remainder <=> Builtin::i32(0)) > 0 && (rhs <=> Builtin::i32(0)) < 0) || ((remainder <=> Builtin::i32(0)) < 0 && (rhs <=> Builtin::i32(0)) > 0) ? remainder + rhs : remainder; 
		#line 1262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (mod == Builtin::i32(0)) {
			#line 1263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return $this;
		}
		#line 1265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return ADV_UFCS(_operator_add_qst)($this, (rhs - mod));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto $static_getIsSigned<$extension_Int8_1187_i8>::get() -> const bool
	{
		#line 1188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getTrailingZeroCount($extension_Int8_1187_i8 const & $this ) -> const Builtin::u32
	{
		#line 1190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::TrailingZeroCount($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getTrailingOneCount($extension_Int8_1187_i8 const & $this ) -> const Builtin::u32
	{
		#line 1191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::TrailingZeroCount(ADV_UFCS(_operator_not)($this))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getByteCount($extension_Int8_1187_i8 const & $this ) -> const Builtin::u32
	{
		#line 1192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u32>(Builtin::usize(sizeof($extension_Int8_1187_i8)))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getMinimalBitWidth($extension_Int8_1187_i8 const & $this ) -> const Builtin::u32
	{
		#line 1193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(BitWidth, $extension_Int8_1187_i8)() - ADV_UPCS(LeadingZeroCount)($this.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline auto getIsqrt($extension_Int8_1187_i8 const & $this ) -> const $extension_Int8_1187_i8
	{
		#line 1210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (const auto result = ADV_UPCS(CheckedIsqrt)($this.$ref())) {
			{
				#line 1210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 1211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				return result;
			}
		}
		#line 1213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getLog2Ceiling($extension_Int8_1187_i8 const & $this ) -> const $extension_Int8_1187_i8
	{
		#line 1220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::Auto<decltype(ADV_UPCS(Log2)($this.$ref()))> result = ADV_UPCS(Log2)($this.$ref()); 
		#line 1221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (ADV_UPCS(PopCount)($this.$ref()) != Builtin::i32(1)) {
			#line 1222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			++result;
		}
		#line 1225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return result;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getPrevPow2($extension_Int8_1187_i8 const & $this ) -> const $extension_Int8_1187_i8
	{
		#line 1271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (($this <=> Builtin::i32(1)) <= 0) {
			#line 1272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return Builtin::i8(0);
		}
		#line 1275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return ADV_USPCS(One, $extension_Int8_1187_i8)() << (ADV_UPCS(MinimalBitWidth)($this.$ref()) - Builtin::u8(1U));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getNextPow2($extension_Int8_1187_i8 const & $this ) -> const $extension_Int8_1187_i8
	{
		#line 1282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (($this <=> Builtin::i32(1)) <= 0) {
			#line 1283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return Builtin::i8(0);
		}
		#line 1286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		const Builtin::Auto<decltype($this - Builtin::i8(1))> p = $this - Builtin::i8(1); 
		#line 1287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return (ADV_USPCS(AllBitsSet, $extension_Int8_1187_i8)() >> ADV_UPCS(LeadingZeroCount)(p.$ref())) + Builtin::i8(1);
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getCheckedNextPow2($extension_Int8_1187_i8 const & $this ) -> const Builtin::Nullable<$extension_Int8_1187_i8>
	{
		#line 1294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (($this <=> Builtin::i32(1)) <= 0) {
			#line 1295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return Builtin::i8(0);
		}
		#line 1298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		const Builtin::Auto<decltype($this - Builtin::i8(1))> p = $this - Builtin::i8(1); 
		#line 1299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return ADV_UFCS(_operator_add_qst)((ADV_USPCS(AllBitsSet, $extension_Int8_1187_i8)() >> ADV_UPCS(LeadingZeroCount)(p.$ref())), Builtin::i8(1));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getWrappingNextPow2($extension_Int8_1187_i8 const & $this ) -> const $extension_Int8_1187_i8
	{
		#line 1306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (($this <=> Builtin::i32(1)) <= 0) {
			#line 1307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return Builtin::i8(0);
		}
		#line 1310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		const Builtin::Auto<decltype($this - Builtin::i8(1))> p = $this - Builtin::i8(1); 
		#line 1311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return ADV_UFCS(_operator_add_mod)((ADV_USPCS(AllBitsSet, $extension_Int8_1187_i8)() >> ADV_UPCS(LeadingZeroCount)(p.$ref())), Builtin::i8(1));
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	
} namespace $extensions { using namespace System;
#line 1336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto RotateLeft($extension_Int8_1315_i8 const& $this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename $extension_Int8_1315_i8
	{
		#line 1336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::BitsRotateLeft($this, shiftAmount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto RotateRight($extension_Int8_1315_i8 const& $this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename $extension_Int8_1315_i8
	{
		#line 1337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::BitsRotateRight($this, shiftAmount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto $static_getBitWidth<$extension_Int8_1315_i8>::get() -> const Builtin::u32
	{
		#line 1316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(8U)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getLeadingZeroCount($extension_Int8_1315_i8 const & $this ) -> const Builtin::u32
	{
		#line 1318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::LeadingZeroCount($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getLeadingOneCount($extension_Int8_1315_i8 const & $this ) -> const Builtin::u32
	{
		#line 1319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::LeadingZeroCount(ADV_UFCS(_operator_not)($this))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getPopCount($extension_Int8_1315_i8 const & $this ) -> const Builtin::u32
	{
		#line 1320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::PopCount($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getZeroCount($extension_Int8_1315_i8 const & $this ) -> const Builtin::u32
	{
		#line 1321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::PopCount(ADV_UFCS(_operator_not)($this))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getByteSwapped($extension_Int8_1315_i8 const & $this ) -> const $extension_Int8_1315_i8
	{
		#line 1322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getBigEndian($extension_Int8_1315_i8 const & $this ) -> const $extension_Int8_1315_i8
	{
		#line 1323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getLittleEndian($extension_Int8_1315_i8 const & $this ) -> const $extension_Int8_1315_i8
	{
		#line 1324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getReverseBits($extension_Int8_1315_i8 const & $this ) -> const $extension_Int8_1315_i8
	{
		#line 1325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::ReverseBits8($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getShortestBitLength($extension_Int8_1315_i8 const & $this ) -> const Builtin::u32
	{
		#line 1329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (($this <=> Builtin::i32(0)) >= 0) {
			#line 1330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return ADV_USPCS(BitWidth, $extension_Int8_1315_i8)() - ADV_UPCS(LeadingZeroCount)($this.$ref());
		}
		#line 1333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return ADV_USPCS(BitWidth, $extension_Int8_1315_i8)() + Builtin::u32(1U) - ADV_UPCS(LeadingOneCount)($this.$ref());
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	
} namespace $extensions { using namespace System;
#line 1349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto IsGreaterThanAsUnsigned($extension_Int8_1341_i8 const& $this LIFETIMEBOUND, $extension_Int8_1341_i8 rhs) noexcept -> const bool
	{
		#line 1349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY((ADV_UFCS(NarrowToUInt8)($this.$ref()) <=> ADV_UFCS(NarrowToUInt8)(rhs.$ref())) > 0); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto $static_getMaxDigitCount<$extension_Int8_1341_i8>::get() -> const Builtin::i32
	{
		#line 1342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(3)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto $static_getMaxHexDigitCount<$extension_Int8_1341_i8>::get() -> const Builtin::i32
	{
		#line 1343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(2)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto $static_getMaxValueDiv10<$extension_Int8_1341_i8>::get() -> const $extension_Int8_1341_i8
	{
		#line 1344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl)(ADV_USPCS(MaxValue, Builtin::i8)(), Builtin::i32(10))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getMultiplyBy10($extension_Int8_1341_i8 const & $this ) -> const $extension_Int8_1341_i8
	{
		#line 1346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_mod)($this, Builtin::i8(10))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getMultiplyBy16($extension_Int8_1341_i8 const & $this ) -> const $extension_Int8_1341_i8
	{
		#line 1347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_mod)($this, Builtin::i8(16))); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	

}