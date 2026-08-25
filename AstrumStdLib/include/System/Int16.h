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
	template<class T> inline constexpr auto _operator_mod_lt($extension_Int16_150_i16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int16_150_i16;
	#line 191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_mod_lt_eq($extension_Int16_150_i16 & $this , auto rhs)  -> typename $extension_Int16_150_i16&;
	#line 193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_div_gt($extension_Int16_150_i16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int16_150_i16;
	#line 207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_div_gt_eq($extension_Int16_150_i16 & $this , auto rhs)  -> typename $extension_Int16_150_i16&;
	#line 150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int16_150_i16, IDivisibleArithmetic, IDivisibleArithmetic, $extension_Int16_150_i16);
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
#line 210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	using $extension_Int16_210_i16 = Builtin::i16;
	#line 210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE(IIntegerDivisibleArithmetic, IIntegerDivisibleArithmetic);
	#line 212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl($extension_Int16_210_i16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int16_210_i16;
	#line 214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_eq($extension_Int16_210_i16 & $this , T rhs)  -> typename $extension_Int16_210_i16&;
	#line 219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl($extension_Int16_210_i16 const& $this LIFETIMEBOUND, T rhs)  -> const Builtin::Nullable<$extension_Int16_210_i16>;
	#line 210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int16_210_i16, IIntegerDivisibleArithmetic, IIntegerDivisibleArithmetic, $extension_Int16_210_i16);
	} namespace System{
using $extensions::_operator_bsl;
using $extensions::_operator_bsl_eq;
using $extensions::_operator_bsl_bsl;

		} namespace $extensions { using namespace System;
#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	using $extension_Int16_230_i16 = Builtin::i16;
	#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE(IIntegerPowerArithmetic, IIntegerPowerArithmetic);
	#line 233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor($extension_Int16_230_i16 const& $this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename $extension_Int16_230_i16;
	#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor_eq($extension_Int16_230_i16 & $this , Builtin::u32 exp)  -> typename $extension_Int16_230_i16&;
	#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int16_230_i16, IIntegerPowerArithmetic, IIntegerPowerArithmetic, $extension_Int16_230_i16);
	} namespace System{
using $extensions::_operator_xor_xor;
using $extensions::_operator_xor_xor_eq;

		} namespace $extensions { using namespace System;
#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	using $extension_Int16_268_i16 = Builtin::i16;
	#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE(INumberBase, INumberBase);
	#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ASTRUMSTD_API auto MaxMagnitude($extension_Int16_268_i16 const& $this LIFETIMEBOUND, $extension_Int16_268_i16 rhs) noexcept -> const typename $extension_Int16_268_i16;
	#line 321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline auto MaxMagnitudeNumber($extension_Int16_268_i16 const& $this LIFETIMEBOUND, $extension_Int16_268_i16 rhs) noexcept -> const typename $extension_Int16_268_i16;
	#line 323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ASTRUMSTD_API auto MinMagnitude($extension_Int16_268_i16 const& $this LIFETIMEBOUND, $extension_Int16_268_i16 rhs) noexcept -> const typename $extension_Int16_268_i16;
	#line 352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline auto MinMagnitudeNumber($extension_Int16_268_i16 const& $this LIFETIMEBOUND, $extension_Int16_268_i16 rhs) noexcept -> const typename $extension_Int16_268_i16;
	#line 354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ASTRUMSTD_API auto Parse($extension_Int16_268_i16 const& $this LIFETIMEBOUND, Builtin::Str input)  -> const typename $extension_Int16_268_i16;
	#line 359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ASTRUMSTD_API auto TryParse($extension_Int16_268_i16 const& $this LIFETIMEBOUND, Builtin::Str input) noexcept -> const Builtin::Nullable<$extension_Int16_268_i16>;
	#line 366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToInt8($extension_Int16_268_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i8;
	#line 367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToUInt8($extension_Int16_268_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u8;
	#line 368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToInt16($extension_Int16_268_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i16;
	#line 369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToUInt16($extension_Int16_268_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u16;
	#line 370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToInt32($extension_Int16_268_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i32;
	#line 371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToUInt32($extension_Int16_268_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u32;
	#line 372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToInt64($extension_Int16_268_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i64;
	#line 373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToUInt64($extension_Int16_268_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u64;
	#line 374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToInt128($extension_Int16_268_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i128;
	#line 375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToUInt128($extension_Int16_268_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u128;
	#line 376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToIsize($extension_Int16_268_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::isize;
	#line 377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToUsize($extension_Int16_268_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::usize;
	#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class __TT> struct $static_getOne; template<> struct $static_getOne<$extension_Int16_268_i16> { static inline constexpr auto get() -> const $extension_Int16_268_i16; };
	#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class __TT> struct $static_getZero; template<> struct $static_getZero<$extension_Int16_268_i16> { static inline constexpr auto get() -> const $extension_Int16_268_i16; };
	#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class __TT> struct $static_getRadix; template<> struct $static_getRadix<$extension_Int16_268_i16> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getAbs($extension_Int16_268_i16 const& $this ) -> const $extension_Int16_268_i16;
	#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsCanonical($extension_Int16_268_i16 const& $this ) -> const bool;
	#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsComplexNumber($extension_Int16_268_i16 const& $this ) -> const bool;
	#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsEvenInteger($extension_Int16_268_i16 const& $this ) -> const bool;
	#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsFinite($extension_Int16_268_i16 const& $this ) -> const bool;
	#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsImaginaryNumber($extension_Int16_268_i16 const& $this ) -> const bool;
	#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsInfinity($extension_Int16_268_i16 const& $this ) -> const bool;
	#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsInteger($extension_Int16_268_i16 const& $this ) -> const bool;
	#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsNaN($extension_Int16_268_i16 const& $this ) -> const bool;
	#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsNegative($extension_Int16_268_i16 const& $this ) -> const bool;
	#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsNegativeInfinity($extension_Int16_268_i16 const& $this ) -> const bool;
	#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsNormal($extension_Int16_268_i16 const& $this ) -> const bool;
	#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsOddInteger($extension_Int16_268_i16 const& $this ) -> const bool;
	#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsPositive($extension_Int16_268_i16 const& $this ) -> const bool;
	#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsPositiveInfinity($extension_Int16_268_i16 const& $this ) -> const bool;
	#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsRealNumber($extension_Int16_268_i16 const& $this ) -> const bool;
	#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsSubnormal($extension_Int16_268_i16 const& $this ) -> const bool;
	#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsZero($extension_Int16_268_i16 const& $this ) -> const bool;
	#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int16_268_i16, INumberBase, INumberBase, $extension_Int16_268_i16);
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
#line 380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	using $extension_Int16_380_i16 = Builtin::i16;
	#line 380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE(ISignedNumber, ISignedNumber);
	#line 381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class __TT> struct $static_getMinusOne; template<> struct $static_getMinusOne<$extension_Int16_380_i16> { static inline constexpr auto get() -> const $extension_Int16_380_i16; };
	#line 380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int16_380_i16, ISignedNumber, ISignedNumber, $extension_Int16_380_i16);
	} namespace System{
using $extensions::$static_getMinusOne;

		} namespace $extensions { using namespace System;
#line 384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	using $extension_Int16_384_i16 = Builtin::i16;
	#line 384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE(INumber, INumber);
	#line 387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ASTRUMSTD_API auto CopySign($extension_Int16_384_i16 const& $this LIFETIMEBOUND, $extension_Int16_384_i16 sign)  -> const typename $extension_Int16_384_i16;
	#line 405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto Max($extension_Int16_384_i16 const& $this LIFETIMEBOUND, $extension_Int16_384_i16 rhs) noexcept -> const typename $extension_Int16_384_i16;
	#line 406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto MaxNumber($extension_Int16_384_i16 const& $this LIFETIMEBOUND, $extension_Int16_384_i16 rhs) noexcept -> const typename $extension_Int16_384_i16;
	#line 407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto Min($extension_Int16_384_i16 const& $this LIFETIMEBOUND, $extension_Int16_384_i16 rhs) noexcept -> const typename $extension_Int16_384_i16;
	#line 408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto MinNumber($extension_Int16_384_i16 const& $this LIFETIMEBOUND, $extension_Int16_384_i16 rhs) noexcept -> const typename $extension_Int16_384_i16;
	#line 409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto Clamp($extension_Int16_384_i16 const& $this LIFETIMEBOUND, $extension_Int16_384_i16 min, $extension_Int16_384_i16 max)  -> const typename $extension_Int16_384_i16;
	#line 385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getSign($extension_Int16_384_i16 const& $this ) -> const Builtin::i32;
	#line 384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int16_384_i16, INumber, INumber, $extension_Int16_384_i16);
	} namespace System{
using $extensions::CopySign;
using $extensions::Max;
using $extensions::MaxNumber;
using $extensions::Min;
using $extensions::MinNumber;
using $extensions::Clamp;
using $extensions::getSign;

		} namespace $extensions { using namespace System;
#line 412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	using $extension_Int16_412_i16 = Builtin::i16;
	#line 412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE(IBinaryNumber, IBinaryNumber);
	#line 466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto CheckedLog($extension_Int16_412_i16 const& $this LIFETIMEBOUND, $extension_Int16_412_i16 base) noexcept -> const Builtin::Nullable<$extension_Int16_412_i16>;
	#line 499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ASTRUMSTD_API auto Log($extension_Int16_412_i16 const& $this LIFETIMEBOUND, $extension_Int16_412_i16 base)  -> const typename $extension_Int16_412_i16;
	#line 509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto Midpoint($extension_Int16_412_i16 const& $this LIFETIMEBOUND, $extension_Int16_412_i16 rhs) noexcept -> const typename $extension_Int16_412_i16;
	#line 517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto IsMultipleOf($extension_Int16_412_i16 const& $this LIFETIMEBOUND, $extension_Int16_412_i16 rhs) noexcept -> const bool;
	#line 414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class __TT> struct $static_getAllBitsSet; template<> struct $static_getAllBitsSet<$extension_Int16_412_i16> { static inline constexpr auto get() -> const $extension_Int16_412_i16; };
	#line 417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsPow2($extension_Int16_412_i16 const& $this ) -> const bool;
	#line 421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getCheckedLog2($extension_Int16_412_i16 const& $this ) -> const Builtin::Nullable<$extension_Int16_412_i16>;
	#line 431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getLog2($extension_Int16_412_i16 const& $this ) -> const $extension_Int16_412_i16;
	#line 441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getCheckedLog10($extension_Int16_412_i16 const& $this ) -> const Builtin::Nullable<$extension_Int16_412_i16>;
	#line 456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getLog10($extension_Int16_412_i16 const& $this ) -> const $extension_Int16_412_i16;
	#line 412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int16_412_i16, IBinaryNumber, IBinaryNumber, $extension_Int16_412_i16);
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
#line 531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	using $extension_Int16_531_i16 = Builtin::i16;
	#line 531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE(ICheckedArithmetic, ICheckedArithmetic);
	#line 534 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_add_qst($extension_Int16_531_i16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int16_531_i16>;
	#line 543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_add_qst_eq($extension_Int16_531_i16 & $this , T rhs) noexcept -> typename $extension_Int16_531_i16&;
	#line 554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_add_ne($extension_Int16_531_i16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int16_531_i16;
	#line 561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_add_ne_eq($extension_Int16_531_i16 & $this , T rhs)  -> typename $extension_Int16_531_i16&;
	#line 565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_add_mod($extension_Int16_531_i16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int16_531_i16;
	#line 572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_add_mod_eq($extension_Int16_531_i16 & $this , T rhs) noexcept -> typename $extension_Int16_531_i16&;
	#line 576 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_add_or($extension_Int16_531_i16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int16_531_i16;
	#line 583 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_add_or_eq($extension_Int16_531_i16 & $this , T rhs) noexcept -> typename $extension_Int16_531_i16&;
	#line 587 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_add_mod_qst($extension_Int16_531_i16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_Int16_531_i16, bool>;
	#line 595 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_qst($extension_Int16_531_i16 & $this )  -> typename $extension_Int16_531_i16&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_qst_postfix($extension_Int16_531_i16 & $this)  -> decltype(auto);
	#line 598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_ne($extension_Int16_531_i16 & $this )  -> typename $extension_Int16_531_i16&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_ne_postfix($extension_Int16_531_i16 & $this)  -> decltype(auto);
	#line 601 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_mod($extension_Int16_531_i16 & $this )  -> typename $extension_Int16_531_i16&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_mod_postfix($extension_Int16_531_i16 & $this)  -> decltype(auto);
	#line 604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_or($extension_Int16_531_i16 & $this )  -> typename $extension_Int16_531_i16&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_or_postfix($extension_Int16_531_i16 & $this)  -> decltype(auto);
	#line 608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto CarryingAdd($extension_Int16_531_i16 const& $this LIFETIMEBOUND, $extension_Int16_531_i16 rhs, bool carry) noexcept -> const std::tuple<$extension_Int16_531_i16, bool>;
	#line 617 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto BorrowingSub($extension_Int16_531_i16 const& $this LIFETIMEBOUND, $extension_Int16_531_i16 rhs, bool carry) noexcept -> const std::tuple<$extension_Int16_531_i16, bool>;
	#line 626 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_sub_qst($extension_Int16_531_i16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int16_531_i16>;
	#line 635 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_sub_qst_eq($extension_Int16_531_i16 & $this , T rhs) noexcept -> typename $extension_Int16_531_i16&;
	#line 646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_sub_ne($extension_Int16_531_i16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int16_531_i16;
	#line 653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_sub_ne_eq($extension_Int16_531_i16 & $this , T rhs)  -> typename $extension_Int16_531_i16&;
	#line 657 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_sub_mod($extension_Int16_531_i16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int16_531_i16;
	#line 664 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_sub_mod_eq($extension_Int16_531_i16 & $this , T rhs) noexcept -> typename $extension_Int16_531_i16&;
	#line 668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_sub_or($extension_Int16_531_i16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int16_531_i16;
	#line 675 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_sub_or_eq($extension_Int16_531_i16 & $this , T rhs) noexcept -> typename $extension_Int16_531_i16&;
	#line 679 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_sub_mod_qst($extension_Int16_531_i16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_Int16_531_i16, bool>;
	#line 687 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_qst($extension_Int16_531_i16 & $this )  -> typename $extension_Int16_531_i16&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_qst_postfix($extension_Int16_531_i16 & $this)  -> decltype(auto);
	#line 690 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_ne($extension_Int16_531_i16 & $this )  -> typename $extension_Int16_531_i16&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_ne_postfix($extension_Int16_531_i16 & $this)  -> decltype(auto);
	#line 693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_mod($extension_Int16_531_i16 & $this )  -> typename $extension_Int16_531_i16&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_mod_postfix($extension_Int16_531_i16 & $this)  -> decltype(auto);
	#line 696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_or($extension_Int16_531_i16 & $this )  -> typename $extension_Int16_531_i16&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_or_postfix($extension_Int16_531_i16 & $this)  -> decltype(auto);
	#line 700 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mul_qst($extension_Int16_531_i16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int16_531_i16>;
	#line 709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mul_qst_eq($extension_Int16_531_i16 & $this , T rhs) noexcept -> typename $extension_Int16_531_i16&;
	#line 720 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mul_ne($extension_Int16_531_i16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int16_531_i16;
	#line 727 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mul_ne_eq($extension_Int16_531_i16 & $this , T rhs)  -> typename $extension_Int16_531_i16&;
	#line 731 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mul_mod($extension_Int16_531_i16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int16_531_i16;
	#line 738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mul_mod_eq($extension_Int16_531_i16 & $this , T rhs) noexcept -> typename $extension_Int16_531_i16&;
	#line 742 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mul_or($extension_Int16_531_i16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int16_531_i16;
	#line 749 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mul_or_eq($extension_Int16_531_i16 & $this , T rhs) noexcept -> typename $extension_Int16_531_i16&;
	#line 753 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mul_mod_qst($extension_Int16_531_i16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_Int16_531_i16, bool>;
	#line 762 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_mul_gt($extension_Int16_531_i16 const& $this LIFETIMEBOUND, $extension_Int16_531_i16 rhs) noexcept -> const std::tuple<Builtin::u16, Builtin::i16>;
	#line 771 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto CarryingMul($extension_Int16_531_i16 const& $this LIFETIMEBOUND, $extension_Int16_531_i16 rhs, $extension_Int16_531_i16 carry) noexcept -> const std::tuple<Builtin::u16, Builtin::i16>;
	#line 779 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_qst($extension_Int16_531_i16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int16_531_i16>;
	#line 788 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_qst_eq($extension_Int16_531_i16 & $this , T rhs) noexcept -> typename $extension_Int16_531_i16&;
	#line 800 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_ne($extension_Int16_531_i16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int16_531_i16;
	#line 807 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_ne_eq($extension_Int16_531_i16 & $this , T rhs)  -> typename $extension_Int16_531_i16&;
	#line 812 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_mod($extension_Int16_531_i16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int16_531_i16;
	#line 819 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_eq($extension_Int16_531_i16 & $this , T rhs)  -> typename $extension_Int16_531_i16&;
	#line 824 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_or($extension_Int16_531_i16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int16_531_i16;
	#line 831 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_or_eq($extension_Int16_531_i16 & $this , T rhs)  -> typename $extension_Int16_531_i16&;
	#line 836 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_qst($extension_Int16_531_i16 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_Int16_531_i16, bool>;
	#line 845 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst($extension_Int16_531_i16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int16_531_i16>;
	#line 855 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst_eq($extension_Int16_531_i16 & $this , T rhs) noexcept -> typename $extension_Int16_531_i16&;
	#line 866 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mod_qst($extension_Int16_531_i16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int16_531_i16>;
	#line 875 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mod_qst_eq($extension_Int16_531_i16 & $this , T rhs) noexcept -> typename $extension_Int16_531_i16&;
	#line 887 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mod_ne($extension_Int16_531_i16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int16_531_i16;
	#line 894 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mod_ne_eq($extension_Int16_531_i16 & $this , T rhs)  -> typename $extension_Int16_531_i16&;
	#line 899 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mod_mod($extension_Int16_531_i16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int16_531_i16;
	#line 906 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mod_mod_eq($extension_Int16_531_i16 & $this , T rhs)  -> typename $extension_Int16_531_i16&;
	#line 911 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mod_mod_qst($extension_Int16_531_i16 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_Int16_531_i16, bool>;
	#line 920 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_sub_qst($extension_Int16_531_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::Nullable<$extension_Int16_531_i16>;
	#line 930 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_sub_ne($extension_Int16_531_i16 const& $this LIFETIMEBOUND)  -> const typename $extension_Int16_531_i16;
	#line 937 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_sub_mod($extension_Int16_531_i16 const& $this LIFETIMEBOUND)  -> const typename $extension_Int16_531_i16;
	#line 945 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_sub_or($extension_Int16_531_i16 const& $this LIFETIMEBOUND)  -> const typename $extension_Int16_531_i16;
	#line 953 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_sub_mod_qst($extension_Int16_531_i16 const& $this LIFETIMEBOUND)  -> const std::tuple<$extension_Int16_531_i16, bool>;
	#line 961 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_lt_lt_qst($extension_Int16_531_i16 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<$extension_Int16_531_i16>;
	#line 969 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_lt_lt_qst_eq($extension_Int16_531_i16 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int16_531_i16&;
	#line 977 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_lt_lt_ne($extension_Int16_531_i16 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_Int16_531_i16;
	#line 985 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_lt_lt_ne_eq($extension_Int16_531_i16 & $this , Builtin::i32 amount)  -> typename $extension_Int16_531_i16&;
	#line 987 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_lt_lt_mod($extension_Int16_531_i16 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename $extension_Int16_531_i16;
	#line 990 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_lt_lt_mod_eq($extension_Int16_531_i16 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int16_531_i16&;
	#line 992 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_lt_lt_mod_qst($extension_Int16_531_i16 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<$extension_Int16_531_i16, bool>;
	#line 995 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_gt_gt_qst($extension_Int16_531_i16 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<$extension_Int16_531_i16>;
	#line 1003 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_gt_gt_qst_eq($extension_Int16_531_i16 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int16_531_i16&;
	#line 1011 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_gt_gt_ne($extension_Int16_531_i16 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_Int16_531_i16;
	#line 1019 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_gt_gt_ne_eq($extension_Int16_531_i16 & $this , Builtin::i32 amount)  -> typename $extension_Int16_531_i16&;
	#line 1021 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_gt_gt_mod($extension_Int16_531_i16 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename $extension_Int16_531_i16;
	#line 1024 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_gt_gt_mod_eq($extension_Int16_531_i16 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int16_531_i16&;
	#line 1026 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_gt_gt_mod_qst($extension_Int16_531_i16 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<$extension_Int16_531_i16, bool>;
	#line 1032 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor_qst($extension_Int16_531_i16 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const Builtin::Nullable<$extension_Int16_531_i16>;
	#line 1061 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor_qst_eq($extension_Int16_531_i16 & $this , Builtin::u32 exp) noexcept -> typename $extension_Int16_531_i16&;
	#line 1069 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor_ne($extension_Int16_531_i16 const& $this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename $extension_Int16_531_i16;
	#line 1090 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor_ne_eq($extension_Int16_531_i16 & $this , Builtin::u32 exp)  -> typename $extension_Int16_531_i16&;
	#line 1092 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor_mod($extension_Int16_531_i16 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename $extension_Int16_531_i16;
	#line 1124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor_mod_eq($extension_Int16_531_i16 & $this , Builtin::u32 exp) noexcept -> typename $extension_Int16_531_i16&;
	#line 1126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor_or($extension_Int16_531_i16 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename $extension_Int16_531_i16;
	#line 1135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor_or_eq($extension_Int16_531_i16 & $this , Builtin::u32 exp) noexcept -> typename $extension_Int16_531_i16&;
	#line 1137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor_mod_qst($extension_Int16_531_i16 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const std::tuple<$extension_Int16_531_i16, bool>;
	#line 1168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getCheckedAbs($extension_Int16_531_i16 const& $this ) -> const Builtin::Nullable<$extension_Int16_531_i16>;
	#line 1171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getStrictAbs($extension_Int16_531_i16 const& $this ) -> const $extension_Int16_531_i16;
	#line 1174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getWrappingAbs($extension_Int16_531_i16 const& $this ) -> const $extension_Int16_531_i16;
	#line 1177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getSaturatingAbs($extension_Int16_531_i16 const& $this ) -> const $extension_Int16_531_i16;
	#line 1180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getOverflowingAbs($extension_Int16_531_i16 const& $this ) -> const std::tuple<$extension_Int16_531_i16, bool>;
	#line 531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int16_531_i16, ICheckedArithmetic, ICheckedArithmetic, $extension_Int16_531_i16);
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
#line 1189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	using $extension_Int16_1189_i16 = Builtin::i16;
	#line 1189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE(IBinaryInteger, IBinaryInteger);
	#line 1234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NextMultipleOf($extension_Int16_1189_i16 const& $this LIFETIMEBOUND, $extension_Int16_1189_i16 rhs)  -> const typename $extension_Int16_1189_i16;
	#line 1250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto CheckedNextMultipleOf($extension_Int16_1189_i16 const& $this LIFETIMEBOUND, $extension_Int16_1189_i16 rhs) noexcept -> const Builtin::Nullable<$extension_Int16_1189_i16>;
	#line 1190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class __TT> struct $static_getIsSigned; template<> struct $static_getIsSigned<$extension_Int16_1189_i16> { static inline constexpr auto get() -> const bool; };
	#line 1192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getTrailingZeroCount($extension_Int16_1189_i16 const& $this ) -> const Builtin::u32;
	#line 1193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getTrailingOneCount($extension_Int16_1189_i16 const& $this ) -> const Builtin::u32;
	#line 1194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getByteCount($extension_Int16_1189_i16 const& $this ) -> const Builtin::u32;
	#line 1195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getMinimalBitWidth($extension_Int16_1189_i16 const& $this ) -> const Builtin::u32;
	#line 1199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ASTRUMSTD_API auto getCheckedIsqrt($extension_Int16_1189_i16 const& $this ) -> const Builtin::Nullable<$extension_Int16_1189_i16>;
	#line 1211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline auto getIsqrt($extension_Int16_1189_i16 const& $this ) -> const $extension_Int16_1189_i16;
	#line 1220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getLog2Ceiling($extension_Int16_1189_i16 const& $this ) -> const $extension_Int16_1189_i16;
	#line 1271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getPrevPow2($extension_Int16_1189_i16 const& $this ) -> const $extension_Int16_1189_i16;
	#line 1282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getNextPow2($extension_Int16_1189_i16 const& $this ) -> const $extension_Int16_1189_i16;
	#line 1294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getCheckedNextPow2($extension_Int16_1189_i16 const& $this ) -> const Builtin::Nullable<$extension_Int16_1189_i16>;
	#line 1306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getWrappingNextPow2($extension_Int16_1189_i16 const& $this ) -> const $extension_Int16_1189_i16;
	#line 1189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int16_1189_i16, IBinaryInteger, IBinaryInteger, $extension_Int16_1189_i16);
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
#line 1317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	using $extension_Int16_1317_i16 = Builtin::i16;
	#line 1317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE(IFixedWidthInteger, IFixedWidthInteger);
	#line 1350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto RotateLeft($extension_Int16_1317_i16 const& $this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename $extension_Int16_1317_i16;
	#line 1351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto RotateRight($extension_Int16_1317_i16 const& $this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename $extension_Int16_1317_i16;
	#line 1318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class __TT> struct $static_getBitWidth; template<> struct $static_getBitWidth<$extension_Int16_1317_i16> { static inline constexpr auto get() -> const Builtin::u32; };
	#line 1320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getLeadingZeroCount($extension_Int16_1317_i16 const& $this ) -> const Builtin::u32;
	#line 1321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getLeadingOneCount($extension_Int16_1317_i16 const& $this ) -> const Builtin::u32;
	#line 1322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getPopCount($extension_Int16_1317_i16 const& $this ) -> const Builtin::u32;
	#line 1323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getZeroCount($extension_Int16_1317_i16 const& $this ) -> const Builtin::u32;
	#line 1324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getByteSwapped($extension_Int16_1317_i16 const& $this ) -> const $extension_Int16_1317_i16;
	#line 1325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getBigEndian($extension_Int16_1317_i16 const& $this ) -> const $extension_Int16_1317_i16;
	#line 1332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getLittleEndian($extension_Int16_1317_i16 const& $this ) -> const $extension_Int16_1317_i16;
	#line 1339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getReverseBits($extension_Int16_1317_i16 const& $this ) -> const $extension_Int16_1317_i16;
	#line 1341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getShortestBitLength($extension_Int16_1317_i16 const& $this ) -> const Builtin::u32;
	#line 1317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int16_1317_i16, IFixedWidthInteger, IFixedWidthInteger, $extension_Int16_1317_i16);
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
#line 1355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	using $extension_Int16_1355_i16 = Builtin::i16;
	#line 1355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE(IBinaryIntegerFormatInfo, IBinaryIntegerFormatInfo);
	#line 1363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto IsGreaterThanAsUnsigned($extension_Int16_1355_i16 const& $this LIFETIMEBOUND, $extension_Int16_1355_i16 rhs) noexcept -> const bool;
	#line 1356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class __TT> struct $static_getMaxDigitCount; template<> struct $static_getMaxDigitCount<$extension_Int16_1355_i16> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class __TT> struct $static_getMaxHexDigitCount; template<> struct $static_getMaxHexDigitCount<$extension_Int16_1355_i16> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class __TT> struct $static_getMaxValueDiv10; template<> struct $static_getMaxValueDiv10<$extension_Int16_1355_i16> { static inline constexpr auto get() -> const $extension_Int16_1355_i16; };
	#line 1360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getMultiplyBy10($extension_Int16_1355_i16 const& $this ) -> const $extension_Int16_1355_i16;
	#line 1361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getMultiplyBy16($extension_Int16_1355_i16 const& $this ) -> const $extension_Int16_1355_i16;
	#line 1355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int16_1355_i16, IBinaryIntegerFormatInfo, IBinaryIntegerFormatInfo, $extension_Int16_1355_i16);
	} namespace System{
using $extensions::IsGreaterThanAsUnsigned;
using $extensions::$static_getMaxDigitCount;
using $extensions::$static_getMaxHexDigitCount;
using $extensions::$static_getMaxValueDiv10;
using $extensions::getMultiplyBy10;
using $extensions::getMultiplyBy16;

	} namespace $extensions {
template<class __TT> struct $static_CheckedLog2;
template<class __TT> struct $static_getCheckedLog2;
template<class __TT> struct $static_IsPositive;
template<class __TT> struct $static_getIsPositive;
template<class __TT> struct $static_DefaultMin;
template<class __TT> struct $static_getDefaultMin;
template<class __TT> struct $static_ReverseBits16;
template<class __TT> struct $static_getReverseBits16;
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
template<class __TT> struct $static_Isqrt16;
template<class __TT> struct $static_getIsqrt16;
template<class __TT> struct $static_CheckedLog10;
template<class __TT> struct $static_getCheckedLog10;
template<class __TT> struct $static_TrailingZeroCount;
template<class __TT> struct $static_getTrailingZeroCount;
template<class __TT> struct $static_MaxValue;
template<class __TT> struct $static_getMaxValue;
template<class __TT> struct $static_SaturatingMultiply;
template<class __TT> struct $static_getSaturatingMultiply;
template<class __TT> struct $static_WrappingAbs;
template<class __TT> struct $static_getWrappingAbs;
template<class __TT> struct $static_ByteSwap16;
template<class __TT> struct $static_getByteSwap16;
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
template<class __TT> struct $static_UncheckedShiftLeft;
template<class __TT> struct $static_getUncheckedShiftLeft;
template<class __TT> struct $static_NarrowToUInt16;
template<class __TT> struct $static_getNarrowToUInt16;
template<class __TT> struct $static_IsLittleEndian;
template<class __TT> struct $static_getIsLittleEndian;
template<class __TT> struct $static_ByteCount;
template<class __TT> struct $static_getByteCount;
template<class __TT> struct $static_IsBigEndian;
template<class __TT> struct $static_getIsBigEndian;
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
template<class __TT> struct $static_UncheckedShiftRight;
template<class __TT> struct $static_getUncheckedShiftRight;
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
template<class __TT> struct $static_CarryingMul16;
template<class __TT> struct $static_getCarryingMul16;
template<class __TT> struct $static_Max;
template<class __TT> struct $static_getMax;
template<class __TT> struct $static_DivAssign;
template<class __TT> struct $static_getDivAssign;
template<class __TT> struct $static_SaturatingSubtract;
template<class __TT> struct $static_getSaturatingSubtract;
template<class __TT> struct $static_DivExact;
template<class __TT> struct $static_getDivExact;
template<class __TT> struct $static_MinMagnitude;
template<class __TT> struct $static_getMinMagnitude;
template<class __TT> struct $static_DefaultMax;
template<class __TT> struct $static_getDefaultMax;
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
template<class __TT> struct $static_WideningMul16;
template<class __TT> struct $static_getWideningMul16;
template<class __TT> struct $static_SafeDivide;
template<class __TT> struct $static_getSafeDivide;
template<class __TT> struct $static_StrictDivide;
template<class __TT> struct $static_getStrictDivide;
template<class __TT> struct $static_WrappingDivide;
template<class __TT> struct $static_getWrappingDivide;
template<class __TT> struct $static_SaturatingDivide;
template<class __TT> struct $static_getSaturatingDivide;
template<class __TT> struct $static_SafeModulus;
template<class __TT> struct $static_getSafeModulus;
template<class __TT> struct $static_StrictModulus;
template<class __TT> struct $static_getStrictModulus;
template<class __TT> struct $static_WrappingModulus;
template<class __TT> struct $static_getWrappingModulus;
template<class __TT> struct $static_SafeNegate;
template<class __TT> struct $static_getSafeNegate;
template<class __TT> struct $static_StrictNegate;
template<class __TT> struct $static_getStrictNegate;
template<class __TT> struct $static_WrappingNegate;
template<class __TT> struct $static_getWrappingNegate;
template<class __TT> struct $static_SaturatingNegate;
template<class __TT> struct $static_getSaturatingNegate;
template<class __TT> struct $static_BitsRotateLeft;
template<class __TT> struct $static_getBitsRotateLeft;
template<class __TT> struct $static_BitsRotateRight;
template<class __TT> struct $static_getBitsRotateRight;
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
template<class __TT> struct $static_SaturatingAbs;
template<class __TT> struct $static_getSaturatingAbs;
template<class __TT> struct $static_OverflowingAbs;
template<class __TT> struct $static_getOverflowingAbs;
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
	inline constexpr auto getHashCode($extension_Int16_20_i16 const & $this ) -> const Builtin::u64
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
	template<class T> inline constexpr auto _operator_mod_lt($extension_Int16_150_i16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int16_150_i16
	{
		#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		const Builtin::Auto<decltype($this % rhs)> result = $this % rhs; 
		#line 186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_gt_gt_gt)((result ^ rhs), Builtin::i32{ADV_USPCS(BitWidth, $extension_Int16_150_i16)() - Builtin::i32(1)}))> signDiff = ADV_UFCS(_operator_gt_gt_gt)((result ^ rhs), Builtin::i32{ADV_USPCS(BitWidth, $extension_Int16_150_i16)() - Builtin::i32(1)}); 
		#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		const Builtin::Auto<decltype((result != Builtin::i32(0)) & (signDiff != Builtin::i32(0)))> needAdjust = (result != Builtin::i32(0)) & (signDiff != Builtin::i32(0)); 
		#line 188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return result + (needAdjust ? rhs : T{});
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_mod_lt_eq($extension_Int16_150_i16 & $this , auto rhs)  -> typename $extension_Int16_150_i16&
	{
		#line 191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this = $extension_Int16_150_i16{ADV_UFCS(_operator_mod_lt)($this, rhs)}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_div_gt($extension_Int16_150_i16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int16_150_i16
	{
		#line 195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if constexpr (Builtin::TypeIs<T, IBinaryInteger>()) {
			#line 196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			const auto& [div, rem] = ADV_UFCS(_operator_div_mod)($this, rhs);
			#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			if (rem == Builtin::i32(0)) {
				#line 198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				return div;
			}
			#line 200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			Builtin::Auto<decltype(Builtin::i16(1) + (($this ^ rhs) >> (ADV_USPCS(BitWidth, $extension_Int16_150_i16)() - Builtin::i32(1))))> correction = Builtin::i16(1) + (($this ^ rhs) >> (ADV_USPCS(BitWidth, $extension_Int16_150_i16)() - Builtin::i32(1))); 
			#line 201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return div + correction;
		} else {
			#line 202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			{
				#line 203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				return Builtin::Cast<true, $extension_Int16_150_i16>((ADV_UFCS(_operator_div_gt)(Builtin::f64{$this}, rhs)));
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_div_gt_eq($extension_Int16_150_i16 & $this , auto rhs)  -> typename $extension_Int16_150_i16&
	{
		#line 207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this = $extension_Int16_150_i16{ADV_UFCS(_operator_div_gt)($this, rhs)}); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	
} namespace $extensions { using namespace System;
#line 212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl($extension_Int16_210_i16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int16_210_i16
	{
		#line 212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Div)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_eq($extension_Int16_210_i16 & $this , T rhs)  -> typename $extension_Int16_210_i16&
	{
		#line 214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(DivAssign)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl($extension_Int16_210_i16 const& $this LIFETIMEBOUND, T rhs)  -> const Builtin::Nullable<$extension_Int16_210_i16>
	{
		#line 221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\? implemented only for integer types");
		#line 222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_210_i16 result{}; 
		#line 223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (Builtin::DivExact($this, rhs, result)) {
			#line 224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return result;
		}
		#line 226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return nullptr;
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	
} namespace $extensions { using namespace System;
#line 233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor($extension_Int16_230_i16 const& $this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename $extension_Int16_230_i16
	{
		#line 235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return Builtin::i16(1);
		}
		#line 240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype(Builtin::i16(1))> result = Builtin::i16(1); 
		#line 243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (std::is_constant_evaluated()) {
			#line 244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			while ((exp <=> Builtin::i32(1)) > 0) 
			{
				#line 245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
					#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
					result *= base;
				}
				#line 248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
				#line 249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				base *= base;
			}
			#line 251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return result * base;
		} else {
			#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			{
				#line 253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				for (;;) 
				{
					#line 254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
					if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
						#line 255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
						result *= base;
						#line 256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
						if (exp == Builtin::i32(1)) {
							#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
							return result;
						}
					}
					#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
					ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
					#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
					base *= base;
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor_eq($extension_Int16_230_i16 & $this , Builtin::u32 exp)  -> typename $extension_Int16_230_i16&
	{
		#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_xor_xor)($this, exp)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	
} namespace $extensions { using namespace System;
#line 321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline auto MaxMagnitudeNumber($extension_Int16_268_i16 const& $this LIFETIMEBOUND, $extension_Int16_268_i16 rhs) noexcept -> const typename $extension_Int16_268_i16
	{
		#line 321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(MaxMagnitude)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline auto MinMagnitudeNumber($extension_Int16_268_i16 const& $this LIFETIMEBOUND, $extension_Int16_268_i16 rhs) noexcept -> const typename $extension_Int16_268_i16
	{
		#line 352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(MinMagnitude)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToInt8($extension_Int16_268_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i8
	{
		#line 366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i8>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToUInt8($extension_Int16_268_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u8
	{
		#line 367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u8>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToInt16($extension_Int16_268_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i16
	{
		#line 368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToUInt16($extension_Int16_268_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u16
	{
		#line 369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u16>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToInt32($extension_Int16_268_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i32
	{
		#line 370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToUInt32($extension_Int16_268_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u32
	{
		#line 371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u32>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToInt64($extension_Int16_268_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i64
	{
		#line 372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToUInt64($extension_Int16_268_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u64
	{
		#line 373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u64>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToInt128($extension_Int16_268_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i128
	{
		#line 374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToUInt128($extension_Int16_268_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u128
	{
		#line 375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u128>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToIsize($extension_Int16_268_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::isize
	{
		#line 376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToUsize($extension_Int16_268_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::usize
	{
		#line 377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::usize>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto $static_getOne<$extension_Int16_268_i16>::get() -> const $extension_Int16_268_i16
	{
		#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::i16(1)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto $static_getZero<$extension_Int16_268_i16>::get() -> const $extension_Int16_268_i16
	{
		#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::i16(0)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto $static_getRadix<$extension_Int16_268_i16>::get() -> const Builtin::i32
	{
		#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(2)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getAbs($extension_Int16_268_i16 const & $this ) -> const $extension_Int16_268_i16
	{
		#line 273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)($this.$ref()) ? -$this : $this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsCanonical($extension_Int16_268_i16 const & $this ) -> const bool
	{
		#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsComplexNumber($extension_Int16_268_i16 const & $this ) -> const bool
	{
		#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsEvenInteger($extension_Int16_268_i16 const & $this ) -> const bool
	{
		#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(($this & Builtin::i16(1)) == Builtin::i32(0)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsFinite($extension_Int16_268_i16 const & $this ) -> const bool
	{
		#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsImaginaryNumber($extension_Int16_268_i16 const & $this ) -> const bool
	{
		#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsInfinity($extension_Int16_268_i16 const & $this ) -> const bool
	{
		#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsInteger($extension_Int16_268_i16 const & $this ) -> const bool
	{
		#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsNaN($extension_Int16_268_i16 const & $this ) -> const bool
	{
		#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsNegative($extension_Int16_268_i16 const & $this ) -> const bool
	{
		#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(($this <=> Builtin::i32(0)) < 0); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsNegativeInfinity($extension_Int16_268_i16 const & $this ) -> const bool
	{
		#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsNormal($extension_Int16_268_i16 const & $this ) -> const bool
	{
		#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this != Builtin::i32(0)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsOddInteger($extension_Int16_268_i16 const & $this ) -> const bool
	{
		#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(($this & Builtin::i16(1)) != Builtin::i32(0)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsPositive($extension_Int16_268_i16 const & $this ) -> const bool
	{
		#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(($this <=> Builtin::i32(0)) >= 0); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsPositiveInfinity($extension_Int16_268_i16 const & $this ) -> const bool
	{
		#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsRealNumber($extension_Int16_268_i16 const & $this ) -> const bool
	{
		#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsSubnormal($extension_Int16_268_i16 const & $this ) -> const bool
	{
		#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsZero($extension_Int16_268_i16 const & $this ) -> const bool
	{
		#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this == Builtin::i32(0)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	
} namespace $extensions { using namespace System;
#line 381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto $static_getMinusOne<$extension_Int16_380_i16>::get() -> const $extension_Int16_380_i16
	{
		#line 381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::i16(-1)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	
} namespace $extensions { using namespace System;
#line 405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto Max($extension_Int16_384_i16 const& $this LIFETIMEBOUND, $extension_Int16_384_i16 rhs) noexcept -> const typename $extension_Int16_384_i16
	{
		#line 405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultMax)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto MaxNumber($extension_Int16_384_i16 const& $this LIFETIMEBOUND, $extension_Int16_384_i16 rhs) noexcept -> const typename $extension_Int16_384_i16
	{
		#line 406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Max)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto Min($extension_Int16_384_i16 const& $this LIFETIMEBOUND, $extension_Int16_384_i16 rhs) noexcept -> const typename $extension_Int16_384_i16
	{
		#line 407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultMin)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto MinNumber($extension_Int16_384_i16 const& $this LIFETIMEBOUND, $extension_Int16_384_i16 rhs) noexcept -> const typename $extension_Int16_384_i16
	{
		#line 408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Min)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto Clamp($extension_Int16_384_i16 const& $this LIFETIMEBOUND, $extension_Int16_384_i16 min, $extension_Int16_384_i16 max)  -> const typename $extension_Int16_384_i16
	{
		#line 409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultClamp)($this, min, max)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getSign($extension_Int16_384_i16 const & $this ) -> const Builtin::i32
	{
		#line 385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultSign)($this)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	
} namespace $extensions { using namespace System;
#line 466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto CheckedLog($extension_Int16_412_i16 const& $this LIFETIMEBOUND, $extension_Int16_412_i16 base) noexcept -> const Builtin::Nullable<$extension_Int16_412_i16>
	{
		#line 468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (($this <=> Builtin::i32(0)) <= 0 || (base <=> Builtin::i32(1)) <= 0) {
			#line 469 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return nullptr;
		}
		#line 472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (std::is_constant_evaluated()) {
			#line 473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			if (base == Builtin::i32(2)) {
				#line 474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				return ADV_UPCS(CheckedLog2)($this.$ref());
			}
			#line 476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			if (base == Builtin::i32(10)) {
				#line 477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				return ADV_UPCS(CheckedLog10)($this.$ref());
			}
		}
		#line 481 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (($this <=> base) < 0) {
			#line 482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return Builtin::i16(0);
		}
		#line 485 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_412_i16 n = Builtin::i16(1); 
		#line 486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype(base)> r = base; 
		#line 487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_bsl)($this, base))> baseRatio = ADV_UFCS(_operator_bsl)($this, base); 
		#line 488 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		while ((r <=> baseRatio) <= 0) 
		{
			#line 489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			++n;
			#line 490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			r *= base;
		}
		#line 493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return n;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto Midpoint($extension_Int16_412_i16 const& $this LIFETIMEBOUND, $extension_Int16_412_i16 rhs) noexcept -> const typename $extension_Int16_412_i16
	{
		#line 511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		const Builtin::Auto<decltype((($this ^ rhs) >> Builtin::i32(1)) + ($this & rhs))> result = (($this ^ rhs) >> Builtin::i32(1)) + ($this & rhs); 
		#line 512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		const Builtin::Auto<decltype((result <=> Builtin::i32(0)) < 0)> correction = (result <=> Builtin::i32(0)) < 0; 
		#line 513 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return result + ((Builtin::Cast<true, $extension_Int16_412_i16>(correction)) & ($this ^ rhs));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto IsMultipleOf($extension_Int16_412_i16 const& $this LIFETIMEBOUND, $extension_Int16_412_i16 rhs) noexcept -> const bool
	{
		#line 519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (rhs == Builtin::i32(0)) {
			#line 520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return $this == Builtin::i32(0);
		}
		#line 523 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (rhs == Builtin::i32(-1)) {
			#line 524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return Builtin::Boolean(true);
		}
		#line 527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return $this % rhs == Builtin::i32(0);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto $static_getAllBitsSet<$extension_Int16_412_i16>::get() -> const $extension_Int16_412_i16
	{
		#line 414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(MinusOne, Builtin::i16)()); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsPow2($extension_Int16_412_i16 const & $this ) -> const bool
	{
		#line 417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsPositive)($this.$ref()) && ADV_UPCS(PopCount)($this.$ref()) == Builtin::i32(1)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getCheckedLog2($extension_Int16_412_i16 const & $this ) -> const Builtin::Nullable<$extension_Int16_412_i16>
	{
		#line 423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (($this <=> Builtin::i32(0)) <= 0) {
			#line 424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return nullptr;
		}
		#line 427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return Builtin::Cast<true, $extension_Int16_412_i16>((ADV_USPCS(BitWidth, $extension_Int16_412_i16)() - Builtin::i32(1) - ADV_UPCS(LeadingZeroCount)($this.$ref())));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getLog2($extension_Int16_412_i16 const & $this ) -> const $extension_Int16_412_i16
	{
		#line 433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (const auto result = ADV_UPCS(CheckedLog2)($this.$ref())) {
			{
				#line 433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				return result;
			}
		}
		#line 436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getCheckedLog10($extension_Int16_412_i16 const & $this ) -> const Builtin::Nullable<$extension_Int16_412_i16>
	{
		#line 443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (($this <=> Builtin::i32(0)) <= 0) {
			#line 444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return nullptr;
		}
		#line 447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::u32>($this))> val = Builtin::Cast<true, Builtin::u32>($this); 
		#line 448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		constexpr Builtin::u32 C1 = Builtin::u32(0b01100000000000000000U) - Builtin::i32(10);
		#line 449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		constexpr Builtin::u32 C2 = Builtin::u32(0b10000000000000000000U) - Builtin::i32(100);
		#line 450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		constexpr Builtin::u32 C3 = Builtin::u32(0b11100000000000000000U) - Builtin::i32(1000);
		#line 451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		constexpr Builtin::u32 C4 = Builtin::u32(0b10000000000000000000U) - Builtin::i32(10000);
		#line 452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return Builtin::Cast<true, $extension_Int16_412_i16>(((((val + C1) & (val + C2)) ^ ((val + C3) & (val + C4))) >> Builtin::i32(17)));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getLog10($extension_Int16_412_i16 const & $this ) -> const $extension_Int16_412_i16
	{
		#line 458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (const auto result = ADV_UPCS(CheckedLog10)($this.$ref())) {
			{
				#line 458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				return result;
			}
		}
		#line 461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	
} namespace $extensions { using namespace System;
#line 534 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_add_qst($extension_Int16_531_i16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int16_531_i16>
	{
		#line 536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +? implemented only for integer types");
		#line 537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_531_i16 result{}; 
		#line 538 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (Builtin::SafeAdd($this, rhs, result)) {
			#line 539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return result;
		}
		#line 541 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_add_qst_eq($extension_Int16_531_i16 & $this , T rhs) noexcept -> typename $extension_Int16_531_i16&
	{
		#line 545 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +?= implemented only for integer types");
		#line 546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (const auto result = ADV_UFCS(_operator_add_qst)($this, rhs)) {
			{
				#line 546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				$this = result;
			}
		}
		#line 549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_add_ne($extension_Int16_531_i16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int16_531_i16
	{
		#line 556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +! implemented only for integer types");
		#line 557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_531_i16 result{}; 
		#line 558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::StrictAdd($this, rhs, result);
		#line 559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_add_ne_eq($extension_Int16_531_i16 & $this , T rhs)  -> typename $extension_Int16_531_i16&
	{
		#line 561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_add_ne)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_add_mod($extension_Int16_531_i16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int16_531_i16
	{
		#line 567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +% implemented only for integer types");
		#line 568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_531_i16 result{}; 
		#line 569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::WrappingAdd($this, rhs, result);
		#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_add_mod_eq($extension_Int16_531_i16 & $this , T rhs) noexcept -> typename $extension_Int16_531_i16&
	{
		#line 572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_add_mod)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 576 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_add_or($extension_Int16_531_i16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int16_531_i16
	{
		#line 578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +| implemented only for integer types");
		#line 579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_531_i16 result{}; 
		#line 580 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::SaturatingAdd($this, rhs, result);
		#line 581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 583 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_add_or_eq($extension_Int16_531_i16 & $this , T rhs) noexcept -> typename $extension_Int16_531_i16&
	{
		#line 583 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_add_or)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 587 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_add_mod_qst($extension_Int16_531_i16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_Int16_531_i16, bool>
	{
		#line 588 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +%? implemented only for integer types");
		#line 589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_531_i16 result{}; 
		#line 590 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype(!Builtin::SafeAdd($this, rhs, result))> overflowed = !Builtin::SafeAdd($this, rhs, result); 
		#line 591 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 595 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_add_add_qst($extension_Int16_531_i16 & $this )  -> typename $extension_Int16_531_i16&
	{
		#line 595 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_qst_eq)($this, Builtin::i16(1))); 
	}
	inline constexpr auto _operator_add_add_qst_postfix($extension_Int16_531_i16 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_add_add_qst)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_add_add_ne($extension_Int16_531_i16 & $this )  -> typename $extension_Int16_531_i16&
	{
		#line 598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_ne_eq)($this, Builtin::i16(1))); 
	}
	inline constexpr auto _operator_add_add_ne_postfix($extension_Int16_531_i16 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_add_add_ne)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 601 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_add_add_mod($extension_Int16_531_i16 & $this )  -> typename $extension_Int16_531_i16&
	{
		#line 601 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_mod_eq)($this, Builtin::i16(1))); 
	}
	inline constexpr auto _operator_add_add_mod_postfix($extension_Int16_531_i16 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_add_add_mod)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_add_add_or($extension_Int16_531_i16 & $this )  -> typename $extension_Int16_531_i16&
	{
		#line 604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_or_eq)($this, Builtin::i16(1))); 
	}
	inline constexpr auto _operator_add_add_or_postfix($extension_Int16_531_i16 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_add_add_or)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto CarryingAdd($extension_Int16_531_i16 const& $this LIFETIMEBOUND, $extension_Int16_531_i16 rhs, bool carry) noexcept -> const std::tuple<$extension_Int16_531_i16, bool>
	{
		#line 610 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_531_i16 result{}; 
		#line 611 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype(Builtin::CarryingAdd($this, rhs, carry, result))> overflowed = Builtin::CarryingAdd($this, rhs, carry, result); 
		#line 612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 617 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto BorrowingSub($extension_Int16_531_i16 const& $this LIFETIMEBOUND, $extension_Int16_531_i16 rhs, bool carry) noexcept -> const std::tuple<$extension_Int16_531_i16, bool>
	{
		#line 619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_531_i16 result{}; 
		#line 620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype(Builtin::BorrowingSub($this, rhs, carry, result))> overflowed = Builtin::BorrowingSub($this, rhs, carry, result); 
		#line 621 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 626 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_sub_qst($extension_Int16_531_i16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int16_531_i16>
	{
		#line 628 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -? implemented only for integer types");
		#line 629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_531_i16 result{}; 
		#line 630 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (Builtin::SafeSubtract($this, rhs, result)) {
			#line 631 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return result;
		}
		#line 633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 635 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_sub_qst_eq($extension_Int16_531_i16 & $this , T rhs) noexcept -> typename $extension_Int16_531_i16&
	{
		#line 637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -?= implemented only for integer types");
		#line 638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (const auto result = ADV_UFCS(_operator_sub_qst)($this, rhs)) {
			{
				#line 638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 639 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				$this = result;
			}
		}
		#line 641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_sub_ne($extension_Int16_531_i16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int16_531_i16
	{
		#line 648 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -! implemented only for integer types");
		#line 649 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_531_i16 result{}; 
		#line 650 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::StrictSubtract($this, rhs, result);
		#line 651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_sub_ne_eq($extension_Int16_531_i16 & $this , T rhs)  -> typename $extension_Int16_531_i16&
	{
		#line 653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_sub_ne)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 657 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_sub_mod($extension_Int16_531_i16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int16_531_i16
	{
		#line 659 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -% implemented only for integer types");
		#line 660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_531_i16 result{}; 
		#line 661 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::WrappingSubtract($this, rhs, result);
		#line 662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 664 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_sub_mod_eq($extension_Int16_531_i16 & $this , T rhs) noexcept -> typename $extension_Int16_531_i16&
	{
		#line 664 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_sub_mod)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_sub_or($extension_Int16_531_i16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int16_531_i16
	{
		#line 670 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -| implemented only for integer types");
		#line 671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_531_i16 result{}; 
		#line 672 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::SaturatingSubtract($this, rhs, result);
		#line 673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 675 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_sub_or_eq($extension_Int16_531_i16 & $this , T rhs) noexcept -> typename $extension_Int16_531_i16&
	{
		#line 675 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_sub_or)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 679 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_sub_mod_qst($extension_Int16_531_i16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_Int16_531_i16, bool>
	{
		#line 680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -%? implemented only for integer types");
		#line 681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_531_i16 result{}; 
		#line 682 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype(!Builtin::SafeSubtract($this, rhs, result))> overflowed = !Builtin::SafeSubtract($this, rhs, result); 
		#line 683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 687 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_sub_sub_qst($extension_Int16_531_i16 & $this )  -> typename $extension_Int16_531_i16&
	{
		#line 687 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_qst_eq)($this, Builtin::i16(1))); 
	}
	inline constexpr auto _operator_sub_sub_qst_postfix($extension_Int16_531_i16 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_sub_sub_qst)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 690 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_sub_sub_ne($extension_Int16_531_i16 & $this )  -> typename $extension_Int16_531_i16&
	{
		#line 690 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_ne_eq)($this, Builtin::i16(1))); 
	}
	inline constexpr auto _operator_sub_sub_ne_postfix($extension_Int16_531_i16 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_sub_sub_ne)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_sub_sub_mod($extension_Int16_531_i16 & $this )  -> typename $extension_Int16_531_i16&
	{
		#line 693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_mod_eq)($this, Builtin::i16(1))); 
	}
	inline constexpr auto _operator_sub_sub_mod_postfix($extension_Int16_531_i16 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_sub_sub_mod)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_sub_sub_or($extension_Int16_531_i16 & $this )  -> typename $extension_Int16_531_i16&
	{
		#line 696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_or_eq)($this, Builtin::i16(1))); 
	}
	inline constexpr auto _operator_sub_sub_or_postfix($extension_Int16_531_i16 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_sub_sub_or)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 700 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mul_qst($extension_Int16_531_i16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int16_531_i16>
	{
		#line 702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *? implemented only for integer types");
		#line 703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_531_i16 result{}; 
		#line 704 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (Builtin::SafeMultiply($this, rhs, result)) {
			#line 705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return result;
		}
		#line 707 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mul_qst_eq($extension_Int16_531_i16 & $this , T rhs) noexcept -> typename $extension_Int16_531_i16&
	{
		#line 711 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *?= implemented only for integer types");
		#line 712 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (const auto result = ADV_UFCS(_operator_mul_qst)($this, rhs)) {
			{
				#line 712 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 713 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				$this = result;
			}
		}
		#line 715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 720 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mul_ne($extension_Int16_531_i16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int16_531_i16
	{
		#line 722 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *! implemented only for integer types");
		#line 723 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_531_i16 result{}; 
		#line 724 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::StrictMultiply($this, rhs, result);
		#line 725 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 727 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mul_ne_eq($extension_Int16_531_i16 & $this , T rhs)  -> typename $extension_Int16_531_i16&
	{
		#line 727 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_mul_ne)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 731 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mul_mod($extension_Int16_531_i16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int16_531_i16
	{
		#line 733 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *% implemented only for integer types");
		#line 734 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_531_i16 result{}; 
		#line 735 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::WrappingMultiply($this, rhs, result);
		#line 736 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mul_mod_eq($extension_Int16_531_i16 & $this , T rhs) noexcept -> typename $extension_Int16_531_i16&
	{
		#line 738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_mul_mod)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 742 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mul_or($extension_Int16_531_i16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int16_531_i16
	{
		#line 744 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *| implemented only for integer types");
		#line 745 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_531_i16 result{}; 
		#line 746 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::SaturatingMultiply($this, rhs, result);
		#line 747 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 749 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mul_or_eq($extension_Int16_531_i16 & $this , T rhs) noexcept -> typename $extension_Int16_531_i16&
	{
		#line 749 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_mul_or)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 753 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mul_mod_qst($extension_Int16_531_i16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_Int16_531_i16, bool>
	{
		#line 754 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *%? implemented only for integer types");
		#line 755 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_531_i16 result{}; 
		#line 756 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype(!Builtin::SafeMultiply($this, rhs, result))> overflowed = !Builtin::SafeMultiply($this, rhs, result); 
		#line 757 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 762 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_mul_gt($extension_Int16_531_i16 const& $this LIFETIMEBOUND, $extension_Int16_531_i16 rhs) noexcept -> const std::tuple<Builtin::u16, Builtin::i16>
	{
		#line 764 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		const auto& [low, high] = Builtin::WideningMul16($this, rhs);
		#line 765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return std::make_tuple(low, high);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 771 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto CarryingMul($extension_Int16_531_i16 const& $this LIFETIMEBOUND, $extension_Int16_531_i16 rhs, $extension_Int16_531_i16 carry) noexcept -> const std::tuple<Builtin::u16, Builtin::i16>
	{
		#line 773 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		const auto& [low, high] = Builtin::CarryingMul16($this, rhs, carry);
		#line 774 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return std::make_tuple(low, high);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 779 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_qst($extension_Int16_531_i16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int16_531_i16>
	{
		#line 781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\? implemented only for integer types");
		#line 782 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_531_i16 result{}; 
		#line 783 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (Builtin::SafeDivide($this, rhs, result)) {
			#line 784 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return result;
		}
		#line 786 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 788 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_qst_eq($extension_Int16_531_i16 & $this , T rhs) noexcept -> typename $extension_Int16_531_i16&
	{
		#line 790 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\?= implemented only for integer types");
		#line 791 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (const auto result = ADV_UFCS(_operator_bsl_qst)($this, rhs)) {
			{
				#line 791 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 792 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				$this = result;
			}
		}
		#line 794 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 800 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_ne($extension_Int16_531_i16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int16_531_i16
	{
		#line 802 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\! implemented only for integer types");
		#line 803 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_531_i16 result{}; 
		#line 804 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::StrictDivide($this, rhs, result);
		#line 805 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 807 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_ne_eq($extension_Int16_531_i16 & $this , T rhs)  -> typename $extension_Int16_531_i16&
	{
		#line 807 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_bsl_ne)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 812 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_mod($extension_Int16_531_i16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int16_531_i16
	{
		#line 814 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\% implemented only for integer types");
		#line 815 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_531_i16 result{}; 
		#line 816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::WrappingDivide($this, rhs, result);
		#line 817 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 819 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_eq($extension_Int16_531_i16 & $this , T rhs)  -> typename $extension_Int16_531_i16&
	{
		#line 819 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_bsl_mod)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 824 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_or($extension_Int16_531_i16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int16_531_i16
	{
		#line 826 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\| implemented only for integer types");
		#line 827 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_531_i16 result{}; 
		#line 828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::SaturatingDivide($this, rhs, result);
		#line 829 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 831 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_or_eq($extension_Int16_531_i16 & $this , T rhs)  -> typename $extension_Int16_531_i16&
	{
		#line 831 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_bsl_or)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 836 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_qst($extension_Int16_531_i16 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_Int16_531_i16, bool>
	{
		#line 837 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\%? implemented only for integer types");
		#line 838 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_531_i16 result{}; 
		#line 839 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype(!Builtin::SafeDivide($this, rhs, result))> overflowed = !Builtin::SafeDivide($this, rhs, result); 
		#line 840 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 845 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst($extension_Int16_531_i16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int16_531_i16>
	{
		#line 847 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\? implemented only for integer types");
		#line 848 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_531_i16 result{}; 
		#line 849 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (Builtin::SafeDivExact($this, rhs, result)) {
			#line 850 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return result;
		}
		#line 852 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 855 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst_eq($extension_Int16_531_i16 & $this , T rhs) noexcept -> typename $extension_Int16_531_i16&
	{
		#line 857 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\?= implemented only for integer types");
		#line 858 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (const auto result = ADV_UFCS(_operator_bsl_bsl_qst)($this, rhs)) {
			{
				#line 858 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 859 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				$this = result;
			}
		}
		#line 861 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 866 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mod_qst($extension_Int16_531_i16 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int16_531_i16>
	{
		#line 868 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %? implemented only for integer types");
		#line 869 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_531_i16 result{}; 
		#line 870 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (Builtin::SafeModulus($this, rhs, result)) {
			#line 871 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return result;
		}
		#line 873 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 875 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mod_qst_eq($extension_Int16_531_i16 & $this , T rhs) noexcept -> typename $extension_Int16_531_i16&
	{
		#line 877 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %?= implemented only for integer types");
		#line 878 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (const auto result = ADV_UFCS(_operator_mod_qst)($this, rhs)) {
			{
				#line 878 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 879 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				$this = result;
			}
		}
		#line 881 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 887 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mod_ne($extension_Int16_531_i16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int16_531_i16
	{
		#line 889 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %! implemented only for integer types");
		#line 890 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_531_i16 result{}; 
		#line 891 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::StrictModulus($this, rhs, result);
		#line 892 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 894 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mod_ne_eq($extension_Int16_531_i16 & $this , T rhs)  -> typename $extension_Int16_531_i16&
	{
		#line 894 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_mod_ne)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 899 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mod_mod($extension_Int16_531_i16 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int16_531_i16
	{
		#line 901 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %% implemented only for integer types");
		#line 902 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_531_i16 result{}; 
		#line 903 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::WrappingModulus($this, rhs, result);
		#line 904 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 906 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mod_mod_eq($extension_Int16_531_i16 & $this , T rhs)  -> typename $extension_Int16_531_i16&
	{
		#line 906 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_mod_mod)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 911 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mod_mod_qst($extension_Int16_531_i16 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_Int16_531_i16, bool>
	{
		#line 912 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %%? implemented only for integer types");
		#line 913 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_531_i16 result{}; 
		#line 914 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype(!Builtin::SafeModulus($this, rhs, result))> overflowed = !Builtin::SafeModulus($this, rhs, result); 
		#line 915 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 920 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_sub_qst($extension_Int16_531_i16 const& $this LIFETIMEBOUND) noexcept -> const Builtin::Nullable<$extension_Int16_531_i16>
	{
		#line 922 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_531_i16 result{}; 
		#line 923 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (Builtin::SafeNegate($this, result)) {
			#line 924 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return result;
		}
		#line 926 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 930 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_sub_ne($extension_Int16_531_i16 const& $this LIFETIMEBOUND)  -> const typename $extension_Int16_531_i16
	{
		#line 932 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_531_i16 result{}; 
		#line 933 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::StrictNegate($this, result);
		#line 934 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 937 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_sub_mod($extension_Int16_531_i16 const& $this LIFETIMEBOUND)  -> const typename $extension_Int16_531_i16
	{
		#line 939 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_531_i16 result{}; 
		#line 940 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::WrappingNegate($this, result);
		#line 941 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 945 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_sub_or($extension_Int16_531_i16 const& $this LIFETIMEBOUND)  -> const typename $extension_Int16_531_i16
	{
		#line 947 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_531_i16 result{}; 
		#line 948 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::SaturatingNegate($this, result);
		#line 949 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 953 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_sub_mod_qst($extension_Int16_531_i16 const& $this LIFETIMEBOUND)  -> const std::tuple<$extension_Int16_531_i16, bool>
	{
		#line 955 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_531_i16 result{}; 
		#line 956 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype(!Builtin::SafeNegate($this, result))> overflowed = !Builtin::SafeNegate($this, result); 
		#line 957 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 961 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_lt_lt_qst($extension_Int16_531_i16 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<$extension_Int16_531_i16>
	{
		#line 963 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_Int16_531_i16)()) < 0) {
			#line 964 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return Builtin::UncheckedShiftLeft($this, amount);
		}
		#line 966 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 969 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_lt_lt_qst_eq($extension_Int16_531_i16 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int16_531_i16&
	{
		#line 971 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_Int16_531_i16)()) < 0) {
			#line 972 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return $this <<= amount;
		}
		#line 974 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 977 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_lt_lt_ne($extension_Int16_531_i16 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_Int16_531_i16
	{
		#line 979 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_Int16_531_i16)()) < 0) {
			#line 980 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return Builtin::UncheckedShiftLeft($this, amount);
		}
		#line 982 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Throw(Builtin::IntegerOverflowException{});
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 985 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_lt_lt_ne_eq($extension_Int16_531_i16 & $this , Builtin::i32 amount)  -> typename $extension_Int16_531_i16&
	{
		#line 985 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_lt_lt_ne)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 987 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_lt_lt_mod($extension_Int16_531_i16 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename $extension_Int16_531_i16
	{
		#line 987 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::UncheckedShiftLeft($this, amount & (ADV_USPCS(BitWidth, $extension_Int16_531_i16)() - Builtin::i32(1)))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 990 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_lt_lt_mod_eq($extension_Int16_531_i16 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int16_531_i16&
	{
		#line 990 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_lt_lt_mod)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 992 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_lt_lt_mod_qst($extension_Int16_531_i16 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<$extension_Int16_531_i16, bool>
	{
		#line 992 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(std::make_tuple(ADV_UFCS(_operator_lt_lt_mod)($this, amount), (amount <=> Builtin::i32(0)) < 0 || (amount <=> ADV_USPCS(BitWidth, $extension_Int16_531_i16)()) >= 0)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 995 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_gt_gt_qst($extension_Int16_531_i16 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<$extension_Int16_531_i16>
	{
		#line 997 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_Int16_531_i16)()) < 0) {
			#line 998 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return $this >> amount;
		}
		#line 1000 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1003 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_gt_gt_qst_eq($extension_Int16_531_i16 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int16_531_i16&
	{
		#line 1005 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_Int16_531_i16)()) < 0) {
			#line 1006 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return $this >>= amount;
		}
		#line 1008 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1011 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_gt_gt_ne($extension_Int16_531_i16 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_Int16_531_i16
	{
		#line 1013 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_Int16_531_i16)()) < 0) {
			#line 1014 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return $this >> amount;
		}
		#line 1016 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Throw(Builtin::IntegerOverflowException{});
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1019 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_gt_gt_ne_eq($extension_Int16_531_i16 & $this , Builtin::i32 amount)  -> typename $extension_Int16_531_i16&
	{
		#line 1019 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_gt_gt_ne)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1021 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_gt_gt_mod($extension_Int16_531_i16 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename $extension_Int16_531_i16
	{
		#line 1021 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::UncheckedShiftRight($this, amount & (ADV_USPCS(BitWidth, $extension_Int16_531_i16)() - Builtin::i32(1)))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1024 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_gt_gt_mod_eq($extension_Int16_531_i16 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int16_531_i16&
	{
		#line 1024 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_gt_gt_mod)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1026 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_gt_gt_mod_qst($extension_Int16_531_i16 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<$extension_Int16_531_i16, bool>
	{
		#line 1026 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(std::make_tuple(ADV_UFCS(_operator_gt_gt_mod)($this, amount), (amount <=> Builtin::i32(0)) < 0 || (amount <=> ADV_USPCS(BitWidth, $extension_Int16_531_i16)()) >= 0)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1032 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor_qst($extension_Int16_531_i16 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const Builtin::Nullable<$extension_Int16_531_i16>
	{
		#line 1034 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1036 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return Builtin::i16(1);
		}
		#line 1039 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 1040 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype(Builtin::i16(1))> result = Builtin::i16(1); 
		#line 1042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		for (;;) 
		{
			#line 1043 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 1044 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				if (const auto mul = ADV_UFCS(_operator_mul_qst)(result, base)) {
					{
						#line 1044 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
						auto __tmp0 = *mul; const auto& mul = __tmp0;
						
						#line 1045 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
						result = mul;
					}
				} else {
					#line 1046 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
					{
						#line 1047 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
						return nullptr;
					}
				}
				#line 1049 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				if (exp == Builtin::i32(1)) {
					#line 1050 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
					return result;
				}
			}
			#line 1052 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
			#line 1053 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			if (const auto mul = ADV_UFCS(_operator_mul_qst)(base, base)) {
				{
					#line 1053 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
					auto __tmp0 = *mul; const auto& mul = __tmp0;
					
					#line 1054 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
					base = mul;
				}
			} else {
				#line 1055 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				{
					#line 1056 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
					return nullptr;
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1061 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor_qst_eq($extension_Int16_531_i16 & $this , Builtin::u32 exp) noexcept -> typename $extension_Int16_531_i16&
	{
		#line 1063 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (auto result = ADV_UFCS(_operator_xor_xor_qst)($this, exp)) {
			{
				#line 1063 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 1064 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				return $this = result;
			}
		}
		#line 1066 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1069 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor_ne($extension_Int16_531_i16 const& $this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename $extension_Int16_531_i16
	{
		#line 1071 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1073 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return Builtin::i16(1);
		}
		#line 1076 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 1077 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype(Builtin::i16(1))> result = Builtin::i16(1); 
		#line 1079 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		for (;;) 
		{
			#line 1080 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 1081 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				ADV_UFCS(_operator_mul_ne_eq)(result, base);
				#line 1082 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				if (exp == Builtin::i32(1)) {
					#line 1083 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
					return result;
				}
			}
			#line 1085 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
			#line 1086 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			ADV_UFCS(_operator_mul_ne_eq)(base, base);
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1090 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor_ne_eq($extension_Int16_531_i16 & $this , Builtin::u32 exp)  -> typename $extension_Int16_531_i16&
	{
		#line 1090 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_xor_xor_ne)($this, exp)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1092 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor_mod($extension_Int16_531_i16 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename $extension_Int16_531_i16
	{
		#line 1094 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1096 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return Builtin::i16(1);
		}
		#line 1099 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 1100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype(Builtin::i16(1))> result = Builtin::i16(1); 
		#line 1102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (std::is_constant_evaluated()) {
			#line 1103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			while ((exp <=> Builtin::i32(1)) > 0) 
			{
				#line 1104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
					#line 1105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
					ADV_UFCS(_operator_mul_mod_eq)(result, base);
				}
				#line 1107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
				#line 1108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				ADV_UFCS(_operator_mul_mod_eq)(base, base);
			}
			#line 1110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return ADV_UFCS(_operator_mul_mod)(result, base);
		} else {
			#line 1111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			{
				#line 1112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				for (;;) 
				{
					#line 1113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
					if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
						#line 1114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
						ADV_UFCS(_operator_mul_mod_eq)(result, base);
						#line 1115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
						if (exp == Builtin::i32(1)) {
							#line 1116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
							return result;
						}
					}
					#line 1118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
					ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
					#line 1119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
					ADV_UFCS(_operator_mul_mod_eq)(base, base);
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor_mod_eq($extension_Int16_531_i16 & $this , Builtin::u32 exp) noexcept -> typename $extension_Int16_531_i16&
	{
		#line 1124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_xor_xor_mod)($this, exp)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor_or($extension_Int16_531_i16 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename $extension_Int16_531_i16
	{
		#line 1128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (const auto result = ADV_UFCS(_operator_xor_xor_qst)($this, exp)) {
			{
				#line 1128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 1129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				return result;
			}
		}
		#line 1132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return (ADV_UPCS(IsNegative)($this.$ref()) && exp % Builtin::i32(2) == Builtin::i32(1)) ? ADV_USPCS(MinValue, $extension_Int16_531_i16)() : ADV_USPCS(MaxValue, $extension_Int16_531_i16)();
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor_or_eq($extension_Int16_531_i16 & $this , Builtin::u32 exp) noexcept -> typename $extension_Int16_531_i16&
	{
		#line 1135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_xor_xor_or)($this, exp)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor_mod_qst($extension_Int16_531_i16 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const std::tuple<$extension_Int16_531_i16, bool>
	{
		#line 1139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return std::make_tuple(Builtin::i16(1), Builtin::Boolean(false));
		}
		#line 1144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 1145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype(Builtin::i16(1))> result = Builtin::i16(1); 
		#line 1146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype(Builtin::Boolean(false))> overflowed = Builtin::Boolean(false); 
		#line 1147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype(std::make_tuple(Builtin::i16(0), Builtin::Boolean(false)))> tmp = std::make_tuple(Builtin::i16(0), Builtin::Boolean(false)); 
		#line 1149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		for (;;) 
		{
			#line 1150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 1151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				tmp = ADV_UFCS(_operator_mul_mod_qst)(result, base);
				#line 1152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				if (exp == Builtin::i32(1)) {
					#line 1153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
					std::get<1>(tmp) |= overflowed;
					#line 1154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
					return tmp;
				}
				#line 1156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				result = std::get<0>(tmp);
				#line 1157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				overflowed |= std::get<1>(tmp);
			}
			#line 1159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
			#line 1160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			tmp = ADV_UFCS(_operator_mul_mod_qst)(base, base);
			#line 1161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			base = std::get<0>(tmp);
			#line 1162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			overflowed |= std::get<1>(tmp);
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getCheckedAbs($extension_Int16_531_i16 const & $this ) -> const Builtin::Nullable<$extension_Int16_531_i16>
	{
		#line 1168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)($this.$ref()) ? ADV_UFCS(_operator_sub_qst)($this) : $this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getStrictAbs($extension_Int16_531_i16 const & $this ) -> const $extension_Int16_531_i16
	{
		#line 1171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)($this.$ref()) ? ADV_UFCS(_operator_sub_ne)($this) : $this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getWrappingAbs($extension_Int16_531_i16 const & $this ) -> const $extension_Int16_531_i16
	{
		#line 1174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)($this.$ref()) ? ADV_UFCS(_operator_sub_mod)($this) : $this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getSaturatingAbs($extension_Int16_531_i16 const & $this ) -> const $extension_Int16_531_i16
	{
		#line 1177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)($this.$ref()) ? ADV_UFCS(_operator_sub_or)($this) : $this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getOverflowingAbs($extension_Int16_531_i16 const & $this ) -> const std::tuple<$extension_Int16_531_i16, bool>
	{
		#line 1182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (ADV_UPCS(IsNegative)($this.$ref())) {
			#line 1183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return ADV_UFCS(_operator_sub_mod_qst)($this);
		}
		#line 1185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return std::make_tuple($this, Builtin::Boolean(false));
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	
} namespace $extensions { using namespace System;
#line 1234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NextMultipleOf($extension_Int16_1189_i16 const& $this LIFETIMEBOUND, $extension_Int16_1189_i16 rhs)  -> const typename $extension_Int16_1189_i16
	{
		#line 1236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (rhs == Builtin::i32(-1)) {
			#line 1237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return $this;
		}
		#line 1240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		const Builtin::Auto<decltype($this % rhs)> remainder = $this % rhs; 
		#line 1241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		const Builtin::Auto<decltype(((remainder <=> Builtin::i32(0)) > 0 && (rhs <=> Builtin::i32(0)) < 0) || ((remainder <=> Builtin::i32(0)) < 0 && (rhs <=> Builtin::i32(0)) > 0) ? remainder + rhs : remainder)> mod = ((remainder <=> Builtin::i32(0)) > 0 && (rhs <=> Builtin::i32(0)) < 0) || ((remainder <=> Builtin::i32(0)) < 0 && (rhs <=> Builtin::i32(0)) > 0) ? remainder + rhs : remainder; 
		#line 1244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return mod == Builtin::i32(0) ? $this : $this + (rhs - mod);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto CheckedNextMultipleOf($extension_Int16_1189_i16 const& $this LIFETIMEBOUND, $extension_Int16_1189_i16 rhs) noexcept -> const Builtin::Nullable<$extension_Int16_1189_i16>
	{
		#line 1252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (rhs == Builtin::i32(-1)) {
			#line 1253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return $this;
		}
		#line 1256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		$extension_Int16_1189_i16 remainder{}; 
		#line 1257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (const auto r = ADV_UFCS(_operator_mod_qst)($this, rhs)) {
			{
				#line 1257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				auto __tmp0 = *r; const auto& r = __tmp0;
				
				#line 1258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				remainder = r;
			}
		} else {
			#line 1259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return nullptr;
		}
		#line 1261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		const Builtin::Auto<decltype(((remainder <=> Builtin::i32(0)) > 0 && (rhs <=> Builtin::i32(0)) < 0) || ((remainder <=> Builtin::i32(0)) < 0 && (rhs <=> Builtin::i32(0)) > 0) ? remainder + rhs : remainder)> mod = ((remainder <=> Builtin::i32(0)) > 0 && (rhs <=> Builtin::i32(0)) < 0) || ((remainder <=> Builtin::i32(0)) < 0 && (rhs <=> Builtin::i32(0)) > 0) ? remainder + rhs : remainder; 
		#line 1264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (mod == Builtin::i32(0)) {
			#line 1265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return $this;
		}
		#line 1267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return ADV_UFCS(_operator_add_qst)($this, (rhs - mod));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto $static_getIsSigned<$extension_Int16_1189_i16>::get() -> const bool
	{
		#line 1190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getTrailingZeroCount($extension_Int16_1189_i16 const & $this ) -> const Builtin::u32
	{
		#line 1192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::TrailingZeroCount($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getTrailingOneCount($extension_Int16_1189_i16 const & $this ) -> const Builtin::u32
	{
		#line 1193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::TrailingZeroCount(ADV_UFCS(_operator_not)($this))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getByteCount($extension_Int16_1189_i16 const & $this ) -> const Builtin::u32
	{
		#line 1194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u32>(Builtin::usize(sizeof($extension_Int16_1189_i16)))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getMinimalBitWidth($extension_Int16_1189_i16 const & $this ) -> const Builtin::u32
	{
		#line 1195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(BitWidth, $extension_Int16_1189_i16)() - ADV_UPCS(LeadingZeroCount)($this.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline auto getIsqrt($extension_Int16_1189_i16 const & $this ) -> const $extension_Int16_1189_i16
	{
		#line 1212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (const auto result = ADV_UPCS(CheckedIsqrt)($this.$ref())) {
			{
				#line 1212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 1213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				return result;
			}
		}
		#line 1215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getLog2Ceiling($extension_Int16_1189_i16 const & $this ) -> const $extension_Int16_1189_i16
	{
		#line 1222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype(ADV_UPCS(Log2)($this.$ref()))> result = ADV_UPCS(Log2)($this.$ref()); 
		#line 1223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (ADV_UPCS(PopCount)($this.$ref()) != Builtin::i32(1)) {
			#line 1224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			++result;
		}
		#line 1227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return result;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getPrevPow2($extension_Int16_1189_i16 const & $this ) -> const $extension_Int16_1189_i16
	{
		#line 1273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (($this <=> Builtin::i32(1)) <= 0) {
			#line 1274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return Builtin::i16(0);
		}
		#line 1277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return ADV_USPCS(One, $extension_Int16_1189_i16)() << (ADV_UPCS(MinimalBitWidth)($this.$ref()) - Builtin::u8(1U));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getNextPow2($extension_Int16_1189_i16 const & $this ) -> const $extension_Int16_1189_i16
	{
		#line 1284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (($this <=> Builtin::i32(1)) <= 0) {
			#line 1285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return Builtin::i16(0);
		}
		#line 1288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		const Builtin::Auto<decltype($this - Builtin::i16(1))> p = $this - Builtin::i16(1); 
		#line 1289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return (ADV_USPCS(AllBitsSet, $extension_Int16_1189_i16)() >> ADV_UPCS(LeadingZeroCount)(p.$ref())) + Builtin::i16(1);
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getCheckedNextPow2($extension_Int16_1189_i16 const & $this ) -> const Builtin::Nullable<$extension_Int16_1189_i16>
	{
		#line 1296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (($this <=> Builtin::i32(1)) <= 0) {
			#line 1297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return Builtin::i16(0);
		}
		#line 1300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		const Builtin::Auto<decltype($this - Builtin::i16(1))> p = $this - Builtin::i16(1); 
		#line 1301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return ADV_UFCS(_operator_add_qst)((ADV_USPCS(AllBitsSet, $extension_Int16_1189_i16)() >> ADV_UPCS(LeadingZeroCount)(p.$ref())), Builtin::i16(1));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getWrappingNextPow2($extension_Int16_1189_i16 const & $this ) -> const $extension_Int16_1189_i16
	{
		#line 1308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (($this <=> Builtin::i32(1)) <= 0) {
			#line 1309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return Builtin::i16(0);
		}
		#line 1312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		const Builtin::Auto<decltype($this - Builtin::i16(1))> p = $this - Builtin::i16(1); 
		#line 1313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return ADV_UFCS(_operator_add_mod)((ADV_USPCS(AllBitsSet, $extension_Int16_1189_i16)() >> ADV_UPCS(LeadingZeroCount)(p.$ref())), Builtin::i16(1));
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	
} namespace $extensions { using namespace System;
#line 1350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto RotateLeft($extension_Int16_1317_i16 const& $this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename $extension_Int16_1317_i16
	{
		#line 1350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::BitsRotateLeft($this, shiftAmount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto RotateRight($extension_Int16_1317_i16 const& $this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename $extension_Int16_1317_i16
	{
		#line 1351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::BitsRotateRight($this, shiftAmount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto $static_getBitWidth<$extension_Int16_1317_i16>::get() -> const Builtin::u32
	{
		#line 1318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(16U)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getLeadingZeroCount($extension_Int16_1317_i16 const & $this ) -> const Builtin::u32
	{
		#line 1320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::LeadingZeroCount($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getLeadingOneCount($extension_Int16_1317_i16 const & $this ) -> const Builtin::u32
	{
		#line 1321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::LeadingZeroCount(ADV_UFCS(_operator_not)($this))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getPopCount($extension_Int16_1317_i16 const & $this ) -> const Builtin::u32
	{
		#line 1322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::PopCount($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getZeroCount($extension_Int16_1317_i16 const & $this ) -> const Builtin::u32
	{
		#line 1323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::PopCount(ADV_UFCS(_operator_not)($this))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getByteSwapped($extension_Int16_1317_i16 const & $this ) -> const $extension_Int16_1317_i16
	{
		#line 1324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i16>(Builtin::ByteSwap16(ADV_UFCS(NarrowToUInt16)($this.$ref())))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getBigEndian($extension_Int16_1317_i16 const & $this ) -> const $extension_Int16_1317_i16
	{
		#line 1327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if constexpr (Builtin::IsLittleEndian()) {
			#line 1328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return ADV_UPCS(ByteSwapped)($this.$ref());
		}
		#line 1330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return $this;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getLittleEndian($extension_Int16_1317_i16 const & $this ) -> const $extension_Int16_1317_i16
	{
		#line 1334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if constexpr (Builtin::IsBigEndian()) {
			#line 1335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return ADV_UPCS(ByteSwapped)($this.$ref());
		}
		#line 1337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return $this;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getReverseBits($extension_Int16_1317_i16 const & $this ) -> const $extension_Int16_1317_i16
	{
		#line 1339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::ReverseBits16($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getShortestBitLength($extension_Int16_1317_i16 const & $this ) -> const Builtin::u32
	{
		#line 1343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (($this <=> Builtin::i32(0)) >= 0) {
			#line 1344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return ADV_USPCS(BitWidth, $extension_Int16_1317_i16)() - ADV_UPCS(LeadingZeroCount)($this.$ref());
		}
		#line 1347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return ADV_USPCS(BitWidth, $extension_Int16_1317_i16)() + Builtin::u32(1U) - ADV_UPCS(LeadingOneCount)($this.$ref());
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	
} namespace $extensions { using namespace System;
#line 1363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto IsGreaterThanAsUnsigned($extension_Int16_1355_i16 const& $this LIFETIMEBOUND, $extension_Int16_1355_i16 rhs) noexcept -> const bool
	{
		#line 1363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY((ADV_UFCS(NarrowToUInt16)($this.$ref()) <=> ADV_UFCS(NarrowToUInt16)(rhs.$ref())) > 0); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto $static_getMaxDigitCount<$extension_Int16_1355_i16>::get() -> const Builtin::i32
	{
		#line 1356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(5)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto $static_getMaxHexDigitCount<$extension_Int16_1355_i16>::get() -> const Builtin::i32
	{
		#line 1357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(4)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto $static_getMaxValueDiv10<$extension_Int16_1355_i16>::get() -> const $extension_Int16_1355_i16
	{
		#line 1358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl)(ADV_USPCS(MaxValue, Builtin::i16)(), Builtin::i32(10))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getMultiplyBy10($extension_Int16_1355_i16 const & $this ) -> const $extension_Int16_1355_i16
	{
		#line 1360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_mod)($this, Builtin::i16(10))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getMultiplyBy16($extension_Int16_1355_i16 const & $this ) -> const $extension_Int16_1355_i16
	{
		#line 1361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_mod)($this, Builtin::i16(16))); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	

}