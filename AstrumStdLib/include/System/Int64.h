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
	template<class T> inline constexpr auto _operator_mod_lt($extension_Int64_166_i64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int64_166_i64;
	#line 207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_mod_lt_eq($extension_Int64_166_i64 & $this , auto rhs)  -> typename $extension_Int64_166_i64&;
	#line 209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_div_gt($extension_Int64_166_i64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int64_166_i64;
	#line 223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_div_gt_eq($extension_Int64_166_i64 & $this , auto rhs)  -> typename $extension_Int64_166_i64&;
	#line 166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int64_166_i64, IDivisibleArithmetic, IDivisibleArithmetic, $extension_Int64_166_i64);
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
#line 226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	using $extension_Int64_226_i64 = Builtin::i64;
	#line 226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE(IIntegerDivisibleArithmetic, IIntegerDivisibleArithmetic);
	#line 228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl($extension_Int64_226_i64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int64_226_i64;
	#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_eq($extension_Int64_226_i64 & $this , T rhs)  -> typename $extension_Int64_226_i64&;
	#line 235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl($extension_Int64_226_i64 const& $this LIFETIMEBOUND, T rhs)  -> const Builtin::Nullable<$extension_Int64_226_i64>;
	#line 226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int64_226_i64, IIntegerDivisibleArithmetic, IIntegerDivisibleArithmetic, $extension_Int64_226_i64);
	} namespace System{
using $extensions::_operator_bsl;
using $extensions::_operator_bsl_eq;
using $extensions::_operator_bsl_bsl;

		} namespace $extensions { using namespace System;
#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	using $extension_Int64_246_i64 = Builtin::i64;
	#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE(IIntegerPowerArithmetic, IIntegerPowerArithmetic);
	#line 249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor($extension_Int64_246_i64 const& $this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename $extension_Int64_246_i64;
	#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor_eq($extension_Int64_246_i64 & $this , Builtin::u32 exp)  -> typename $extension_Int64_246_i64&;
	#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int64_246_i64, IIntegerPowerArithmetic, IIntegerPowerArithmetic, $extension_Int64_246_i64);
	} namespace System{
using $extensions::_operator_xor_xor;
using $extensions::_operator_xor_xor_eq;

		} namespace $extensions { using namespace System;
#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	using $extension_Int64_284_i64 = Builtin::i64;
	#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE(INumberBase, INumberBase);
	#line 308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ASTRUMSTD_API auto MaxMagnitude($extension_Int64_284_i64 const& $this LIFETIMEBOUND, $extension_Int64_284_i64 rhs)  -> const typename $extension_Int64_284_i64;
	#line 337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline auto MaxMagnitudeNumber($extension_Int64_284_i64 const& $this LIFETIMEBOUND, $extension_Int64_284_i64 rhs)  -> const typename $extension_Int64_284_i64;
	#line 339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ASTRUMSTD_API auto MinMagnitude($extension_Int64_284_i64 const& $this LIFETIMEBOUND, $extension_Int64_284_i64 rhs)  -> const typename $extension_Int64_284_i64;
	#line 368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline auto MinMagnitudeNumber($extension_Int64_284_i64 const& $this LIFETIMEBOUND, $extension_Int64_284_i64 rhs)  -> const typename $extension_Int64_284_i64;
	#line 370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ASTRUMSTD_API auto Parse($extension_Int64_284_i64 const& $this LIFETIMEBOUND, Builtin::Str input)  -> const typename $extension_Int64_284_i64;
	#line 375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ASTRUMSTD_API auto TryParse($extension_Int64_284_i64 const& $this LIFETIMEBOUND, Builtin::Str input) noexcept -> const Builtin::Nullable<$extension_Int64_284_i64>;
	#line 382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToInt8($extension_Int64_284_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i8;
	#line 383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToUInt8($extension_Int64_284_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u8;
	#line 384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToInt16($extension_Int64_284_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i16;
	#line 385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToUInt16($extension_Int64_284_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u16;
	#line 386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToInt32($extension_Int64_284_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i32;
	#line 387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToUInt32($extension_Int64_284_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u32;
	#line 388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToInt64($extension_Int64_284_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i64;
	#line 389 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToUInt64($extension_Int64_284_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u64;
	#line 390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToInt128($extension_Int64_284_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i128;
	#line 391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToUInt128($extension_Int64_284_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u128;
	#line 392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToIsize($extension_Int64_284_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::isize;
	#line 393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToUsize($extension_Int64_284_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::usize;
	#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class __TT> struct $static_getOne; template<> struct $static_getOne<$extension_Int64_284_i64> { static inline constexpr auto get() -> const $extension_Int64_284_i64; };
	#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class __TT> struct $static_getZero; template<> struct $static_getZero<$extension_Int64_284_i64> { static inline constexpr auto get() -> const $extension_Int64_284_i64; };
	#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class __TT> struct $static_getRadix; template<> struct $static_getRadix<$extension_Int64_284_i64> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getAbs($extension_Int64_284_i64 const& $this ) -> const $extension_Int64_284_i64;
	#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsCanonical($extension_Int64_284_i64 const& $this ) -> const bool;
	#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsComplexNumber($extension_Int64_284_i64 const& $this ) -> const bool;
	#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsEvenInteger($extension_Int64_284_i64 const& $this ) -> const bool;
	#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsFinite($extension_Int64_284_i64 const& $this ) -> const bool;
	#line 294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsImaginaryNumber($extension_Int64_284_i64 const& $this ) -> const bool;
	#line 295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsInfinity($extension_Int64_284_i64 const& $this ) -> const bool;
	#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsInteger($extension_Int64_284_i64 const& $this ) -> const bool;
	#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsNaN($extension_Int64_284_i64 const& $this ) -> const bool;
	#line 298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsNegative($extension_Int64_284_i64 const& $this ) -> const bool;
	#line 299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsNegativeInfinity($extension_Int64_284_i64 const& $this ) -> const bool;
	#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsNormal($extension_Int64_284_i64 const& $this ) -> const bool;
	#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsOddInteger($extension_Int64_284_i64 const& $this ) -> const bool;
	#line 302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsPositive($extension_Int64_284_i64 const& $this ) -> const bool;
	#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsPositiveInfinity($extension_Int64_284_i64 const& $this ) -> const bool;
	#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsRealNumber($extension_Int64_284_i64 const& $this ) -> const bool;
	#line 305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsSubnormal($extension_Int64_284_i64 const& $this ) -> const bool;
	#line 306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsZero($extension_Int64_284_i64 const& $this ) -> const bool;
	#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int64_284_i64, INumberBase, INumberBase, $extension_Int64_284_i64);
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
#line 396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	using $extension_Int64_396_i64 = Builtin::i64;
	#line 396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE(ISignedNumber, ISignedNumber);
	#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class __TT> struct $static_getMinusOne; template<> struct $static_getMinusOne<$extension_Int64_396_i64> { static inline constexpr auto get() -> const $extension_Int64_396_i64; };
	#line 396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int64_396_i64, ISignedNumber, ISignedNumber, $extension_Int64_396_i64);
	} namespace System{
using $extensions::$static_getMinusOne;

		} namespace $extensions { using namespace System;
#line 400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	using $extension_Int64_400_i64 = Builtin::i64;
	#line 400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE(INumber, INumber);
	#line 403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ASTRUMSTD_API auto CopySign($extension_Int64_400_i64 const& $this LIFETIMEBOUND, $extension_Int64_400_i64 sign)  -> const typename $extension_Int64_400_i64;
	#line 421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto Max($extension_Int64_400_i64 const& $this LIFETIMEBOUND, $extension_Int64_400_i64 rhs) noexcept -> const typename $extension_Int64_400_i64;
	#line 422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto MaxNumber($extension_Int64_400_i64 const& $this LIFETIMEBOUND, $extension_Int64_400_i64 rhs) noexcept -> const typename $extension_Int64_400_i64;
	#line 423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto Min($extension_Int64_400_i64 const& $this LIFETIMEBOUND, $extension_Int64_400_i64 rhs) noexcept -> const typename $extension_Int64_400_i64;
	#line 424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto MinNumber($extension_Int64_400_i64 const& $this LIFETIMEBOUND, $extension_Int64_400_i64 rhs) noexcept -> const typename $extension_Int64_400_i64;
	#line 425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto Clamp($extension_Int64_400_i64 const& $this LIFETIMEBOUND, $extension_Int64_400_i64 min, $extension_Int64_400_i64 max)  -> const typename $extension_Int64_400_i64;
	#line 401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getSign($extension_Int64_400_i64 const& $this ) -> const Builtin::i32;
	#line 400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int64_400_i64, INumber, INumber, $extension_Int64_400_i64);
	} namespace System{
using $extensions::CopySign;
using $extensions::Max;
using $extensions::MaxNumber;
using $extensions::Min;
using $extensions::MinNumber;
using $extensions::Clamp;
using $extensions::getSign;

		} namespace $extensions { using namespace System;
#line 428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	using $extension_Int64_428_i64 = Builtin::i64;
	#line 428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE(IBinaryNumber, IBinaryNumber);
	#line 492 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto CheckedLog($extension_Int64_428_i64 const& $this LIFETIMEBOUND, $extension_Int64_428_i64 base) noexcept -> const Builtin::Nullable<$extension_Int64_428_i64>;
	#line 525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ASTRUMSTD_API auto Log($extension_Int64_428_i64 const& $this LIFETIMEBOUND, $extension_Int64_428_i64 base)  -> const typename $extension_Int64_428_i64;
	#line 535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto Midpoint($extension_Int64_428_i64 const& $this LIFETIMEBOUND, $extension_Int64_428_i64 rhs) noexcept -> const typename $extension_Int64_428_i64;
	#line 543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto IsMultipleOf($extension_Int64_428_i64 const& $this LIFETIMEBOUND, $extension_Int64_428_i64 rhs) noexcept -> const bool;
	#line 430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class __TT> struct $static_getAllBitsSet; template<> struct $static_getAllBitsSet<$extension_Int64_428_i64> { static inline constexpr auto get() -> const $extension_Int64_428_i64; };
	#line 433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsPow2($extension_Int64_428_i64 const& $this ) -> const bool;
	#line 437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getCheckedLog2($extension_Int64_428_i64 const& $this ) -> const Builtin::Nullable<$extension_Int64_428_i64>;
	#line 447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getLog2($extension_Int64_428_i64 const& $this ) -> const $extension_Int64_428_i64;
	#line 457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getCheckedLog10($extension_Int64_428_i64 const& $this ) -> const Builtin::Nullable<$extension_Int64_428_i64>;
	#line 482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getLog10($extension_Int64_428_i64 const& $this ) -> const $extension_Int64_428_i64;
	#line 428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int64_428_i64, IBinaryNumber, IBinaryNumber, $extension_Int64_428_i64);
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
#line 557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	using $extension_Int64_557_i64 = Builtin::i64;
	#line 557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE(ICheckedArithmetic, ICheckedArithmetic);
	#line 560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_add_qst($extension_Int64_557_i64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int64_557_i64>;
	#line 569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_add_qst_eq($extension_Int64_557_i64 & $this , T rhs) noexcept -> typename $extension_Int64_557_i64&;
	#line 580 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_add_ne($extension_Int64_557_i64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int64_557_i64;
	#line 587 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_add_ne_eq($extension_Int64_557_i64 & $this , T rhs)  -> typename $extension_Int64_557_i64&;
	#line 591 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_add_mod($extension_Int64_557_i64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int64_557_i64;
	#line 598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_add_mod_eq($extension_Int64_557_i64 & $this , T rhs) noexcept -> typename $extension_Int64_557_i64&;
	#line 602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_add_or($extension_Int64_557_i64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int64_557_i64;
	#line 609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_add_or_eq($extension_Int64_557_i64 & $this , T rhs) noexcept -> typename $extension_Int64_557_i64&;
	#line 613 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_add_mod_qst($extension_Int64_557_i64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_Int64_557_i64, bool>;
	#line 621 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_qst($extension_Int64_557_i64 & $this )  -> typename $extension_Int64_557_i64&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_qst_postfix($extension_Int64_557_i64 & $this)  -> decltype(auto);
	#line 624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_ne($extension_Int64_557_i64 & $this )  -> typename $extension_Int64_557_i64&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_ne_postfix($extension_Int64_557_i64 & $this)  -> decltype(auto);
	#line 627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_mod($extension_Int64_557_i64 & $this )  -> typename $extension_Int64_557_i64&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_mod_postfix($extension_Int64_557_i64 & $this)  -> decltype(auto);
	#line 630 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_or($extension_Int64_557_i64 & $this )  -> typename $extension_Int64_557_i64&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_or_postfix($extension_Int64_557_i64 & $this)  -> decltype(auto);
	#line 634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto CarryingAdd($extension_Int64_557_i64 const& $this LIFETIMEBOUND, $extension_Int64_557_i64 rhs, bool carry) noexcept -> const std::tuple<$extension_Int64_557_i64, bool>;
	#line 643 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto BorrowingSub($extension_Int64_557_i64 const& $this LIFETIMEBOUND, $extension_Int64_557_i64 rhs, bool carry) noexcept -> const std::tuple<$extension_Int64_557_i64, bool>;
	#line 652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_sub_qst($extension_Int64_557_i64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int64_557_i64>;
	#line 661 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_sub_qst_eq($extension_Int64_557_i64 & $this , T rhs) noexcept -> typename $extension_Int64_557_i64&;
	#line 672 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_sub_ne($extension_Int64_557_i64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int64_557_i64;
	#line 679 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_sub_ne_eq($extension_Int64_557_i64 & $this , T rhs)  -> typename $extension_Int64_557_i64&;
	#line 683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_sub_mod($extension_Int64_557_i64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int64_557_i64;
	#line 690 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_sub_mod_eq($extension_Int64_557_i64 & $this , T rhs) noexcept -> typename $extension_Int64_557_i64&;
	#line 694 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_sub_or($extension_Int64_557_i64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int64_557_i64;
	#line 701 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_sub_or_eq($extension_Int64_557_i64 & $this , T rhs) noexcept -> typename $extension_Int64_557_i64&;
	#line 705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_sub_mod_qst($extension_Int64_557_i64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_Int64_557_i64, bool>;
	#line 713 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_qst($extension_Int64_557_i64 & $this )  -> typename $extension_Int64_557_i64&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_qst_postfix($extension_Int64_557_i64 & $this)  -> decltype(auto);
	#line 716 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_ne($extension_Int64_557_i64 & $this )  -> typename $extension_Int64_557_i64&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_ne_postfix($extension_Int64_557_i64 & $this)  -> decltype(auto);
	#line 719 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_mod($extension_Int64_557_i64 & $this )  -> typename $extension_Int64_557_i64&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_mod_postfix($extension_Int64_557_i64 & $this)  -> decltype(auto);
	#line 722 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_or($extension_Int64_557_i64 & $this )  -> typename $extension_Int64_557_i64&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_or_postfix($extension_Int64_557_i64 & $this)  -> decltype(auto);
	#line 726 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mul_qst($extension_Int64_557_i64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int64_557_i64>;
	#line 735 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mul_qst_eq($extension_Int64_557_i64 & $this , T rhs) noexcept -> typename $extension_Int64_557_i64&;
	#line 746 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mul_ne($extension_Int64_557_i64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int64_557_i64;
	#line 753 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mul_ne_eq($extension_Int64_557_i64 & $this , T rhs)  -> typename $extension_Int64_557_i64&;
	#line 757 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mul_mod($extension_Int64_557_i64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int64_557_i64;
	#line 764 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mul_mod_eq($extension_Int64_557_i64 & $this , T rhs) noexcept -> typename $extension_Int64_557_i64&;
	#line 768 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mul_or($extension_Int64_557_i64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int64_557_i64;
	#line 775 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mul_or_eq($extension_Int64_557_i64 & $this , T rhs) noexcept -> typename $extension_Int64_557_i64&;
	#line 779 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mul_mod_qst($extension_Int64_557_i64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_Int64_557_i64, bool>;
	#line 788 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline auto _operator_mul_gt($extension_Int64_557_i64 const& $this LIFETIMEBOUND, $extension_Int64_557_i64 rhs) noexcept -> const std::tuple<Builtin::u64, Builtin::i64>;
	#line 797 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline auto CarryingMul($extension_Int64_557_i64 const& $this LIFETIMEBOUND, $extension_Int64_557_i64 rhs, $extension_Int64_557_i64 carry) noexcept -> const std::tuple<Builtin::u64, Builtin::i64>;
	#line 805 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_qst($extension_Int64_557_i64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int64_557_i64>;
	#line 814 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_qst_eq($extension_Int64_557_i64 & $this , T rhs) noexcept -> typename $extension_Int64_557_i64&;
	#line 826 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_ne($extension_Int64_557_i64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int64_557_i64;
	#line 833 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_ne_eq($extension_Int64_557_i64 & $this , T rhs)  -> typename $extension_Int64_557_i64&;
	#line 838 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_mod($extension_Int64_557_i64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int64_557_i64;
	#line 845 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_eq($extension_Int64_557_i64 & $this , T rhs)  -> typename $extension_Int64_557_i64&;
	#line 850 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_or($extension_Int64_557_i64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int64_557_i64;
	#line 857 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_or_eq($extension_Int64_557_i64 & $this , T rhs)  -> typename $extension_Int64_557_i64&;
	#line 862 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_qst($extension_Int64_557_i64 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_Int64_557_i64, bool>;
	#line 871 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst($extension_Int64_557_i64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int64_557_i64>;
	#line 881 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst_eq($extension_Int64_557_i64 & $this , T rhs) noexcept -> typename $extension_Int64_557_i64&;
	#line 892 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mod_qst($extension_Int64_557_i64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int64_557_i64>;
	#line 901 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mod_qst_eq($extension_Int64_557_i64 & $this , T rhs) noexcept -> typename $extension_Int64_557_i64&;
	#line 913 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mod_ne($extension_Int64_557_i64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int64_557_i64;
	#line 920 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mod_ne_eq($extension_Int64_557_i64 & $this , T rhs)  -> typename $extension_Int64_557_i64&;
	#line 925 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mod_mod($extension_Int64_557_i64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int64_557_i64;
	#line 932 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mod_mod_eq($extension_Int64_557_i64 & $this , T rhs)  -> typename $extension_Int64_557_i64&;
	#line 937 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mod_mod_qst($extension_Int64_557_i64 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_Int64_557_i64, bool>;
	#line 946 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_sub_qst($extension_Int64_557_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::Nullable<$extension_Int64_557_i64>;
	#line 956 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_sub_ne($extension_Int64_557_i64 const& $this LIFETIMEBOUND)  -> const typename $extension_Int64_557_i64;
	#line 963 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_sub_mod($extension_Int64_557_i64 const& $this LIFETIMEBOUND)  -> const typename $extension_Int64_557_i64;
	#line 971 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_sub_or($extension_Int64_557_i64 const& $this LIFETIMEBOUND)  -> const typename $extension_Int64_557_i64;
	#line 979 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_sub_mod_qst($extension_Int64_557_i64 const& $this LIFETIMEBOUND)  -> const std::tuple<$extension_Int64_557_i64, bool>;
	#line 987 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_lt_lt_qst($extension_Int64_557_i64 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<$extension_Int64_557_i64>;
	#line 995 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_lt_lt_qst_eq($extension_Int64_557_i64 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int64_557_i64&;
	#line 1003 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_lt_lt_ne($extension_Int64_557_i64 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_Int64_557_i64;
	#line 1011 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_lt_lt_ne_eq($extension_Int64_557_i64 & $this , Builtin::i32 amount)  -> typename $extension_Int64_557_i64&;
	#line 1013 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_lt_lt_mod($extension_Int64_557_i64 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename $extension_Int64_557_i64;
	#line 1016 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_lt_lt_mod_eq($extension_Int64_557_i64 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int64_557_i64&;
	#line 1018 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_lt_lt_mod_qst($extension_Int64_557_i64 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<$extension_Int64_557_i64, bool>;
	#line 1021 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_gt_gt_qst($extension_Int64_557_i64 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<$extension_Int64_557_i64>;
	#line 1029 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_gt_gt_qst_eq($extension_Int64_557_i64 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int64_557_i64&;
	#line 1037 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_gt_gt_ne($extension_Int64_557_i64 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_Int64_557_i64;
	#line 1045 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_gt_gt_ne_eq($extension_Int64_557_i64 & $this , Builtin::i32 amount)  -> typename $extension_Int64_557_i64&;
	#line 1047 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_gt_gt_mod($extension_Int64_557_i64 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename $extension_Int64_557_i64;
	#line 1050 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_gt_gt_mod_eq($extension_Int64_557_i64 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int64_557_i64&;
	#line 1052 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_gt_gt_mod_qst($extension_Int64_557_i64 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<$extension_Int64_557_i64, bool>;
	#line 1057 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor_qst($extension_Int64_557_i64 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const Builtin::Nullable<$extension_Int64_557_i64>;
	#line 1086 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor_qst_eq($extension_Int64_557_i64 & $this , Builtin::u32 exp) noexcept -> typename $extension_Int64_557_i64&;
	#line 1094 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor_ne($extension_Int64_557_i64 const& $this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename $extension_Int64_557_i64;
	#line 1115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor_ne_eq($extension_Int64_557_i64 & $this , Builtin::u32 exp)  -> typename $extension_Int64_557_i64&;
	#line 1117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor_mod($extension_Int64_557_i64 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename $extension_Int64_557_i64;
	#line 1149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor_mod_eq($extension_Int64_557_i64 & $this , Builtin::u32 exp) noexcept -> typename $extension_Int64_557_i64&;
	#line 1151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor_or($extension_Int64_557_i64 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename $extension_Int64_557_i64;
	#line 1160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor_or_eq($extension_Int64_557_i64 & $this , Builtin::u32 exp) noexcept -> typename $extension_Int64_557_i64&;
	#line 1162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor_mod_qst($extension_Int64_557_i64 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const std::tuple<$extension_Int64_557_i64, bool>;
	#line 1193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getCheckedAbs($extension_Int64_557_i64 const& $this ) -> const Builtin::Nullable<$extension_Int64_557_i64>;
	#line 1196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getStrictAbs($extension_Int64_557_i64 const& $this ) -> const $extension_Int64_557_i64;
	#line 1199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getWrappingAbs($extension_Int64_557_i64 const& $this ) -> const $extension_Int64_557_i64;
	#line 1202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getSaturatingAbs($extension_Int64_557_i64 const& $this ) -> const $extension_Int64_557_i64;
	#line 1205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getOverflowingAbs($extension_Int64_557_i64 const& $this ) -> const std::tuple<$extension_Int64_557_i64, bool>;
	#line 557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int64_557_i64, ICheckedArithmetic, ICheckedArithmetic, $extension_Int64_557_i64);
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
#line 1214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	using $extension_Int64_1214_i64 = Builtin::i64;
	#line 1214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE(IBinaryInteger, IBinaryInteger);
	#line 1259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NextMultipleOf($extension_Int64_1214_i64 const& $this LIFETIMEBOUND, $extension_Int64_1214_i64 rhs)  -> const typename $extension_Int64_1214_i64;
	#line 1275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto CheckedNextMultipleOf($extension_Int64_1214_i64 const& $this LIFETIMEBOUND, $extension_Int64_1214_i64 rhs) noexcept -> const Builtin::Nullable<$extension_Int64_1214_i64>;
	#line 1215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class __TT> struct $static_getIsSigned; template<> struct $static_getIsSigned<$extension_Int64_1214_i64> { static inline constexpr auto get() -> const bool; };
	#line 1217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getTrailingZeroCount($extension_Int64_1214_i64 const& $this ) -> const Builtin::u32;
	#line 1218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getTrailingOneCount($extension_Int64_1214_i64 const& $this ) -> const Builtin::u32;
	#line 1219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getByteCount($extension_Int64_1214_i64 const& $this ) -> const Builtin::u32;
	#line 1220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getMinimalBitWidth($extension_Int64_1214_i64 const& $this ) -> const Builtin::u32;
	#line 1224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ASTRUMSTD_API auto getCheckedIsqrt($extension_Int64_1214_i64 const& $this ) -> const Builtin::Nullable<$extension_Int64_1214_i64>;
	#line 1236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline auto getIsqrt($extension_Int64_1214_i64 const& $this ) -> const $extension_Int64_1214_i64;
	#line 1245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getLog2Ceiling($extension_Int64_1214_i64 const& $this ) -> const $extension_Int64_1214_i64;
	#line 1296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getPrevPow2($extension_Int64_1214_i64 const& $this ) -> const $extension_Int64_1214_i64;
	#line 1307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getNextPow2($extension_Int64_1214_i64 const& $this ) -> const $extension_Int64_1214_i64;
	#line 1319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getCheckedNextPow2($extension_Int64_1214_i64 const& $this ) -> const Builtin::Nullable<$extension_Int64_1214_i64>;
	#line 1331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getWrappingNextPow2($extension_Int64_1214_i64 const& $this ) -> const $extension_Int64_1214_i64;
	#line 1214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int64_1214_i64, IBinaryInteger, IBinaryInteger, $extension_Int64_1214_i64);
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
#line 1342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	using $extension_Int64_1342_i64 = Builtin::i64;
	#line 1342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE(IFixedWidthInteger, IFixedWidthInteger);
	#line 1375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto RotateLeft($extension_Int64_1342_i64 const& $this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename $extension_Int64_1342_i64;
	#line 1376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto RotateRight($extension_Int64_1342_i64 const& $this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename $extension_Int64_1342_i64;
	#line 1343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class __TT> struct $static_getBitWidth; template<> struct $static_getBitWidth<$extension_Int64_1342_i64> { static inline constexpr auto get() -> const Builtin::u32; };
	#line 1345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getLeadingZeroCount($extension_Int64_1342_i64 const& $this ) -> const Builtin::u32;
	#line 1346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getLeadingOneCount($extension_Int64_1342_i64 const& $this ) -> const Builtin::u32;
	#line 1347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getPopCount($extension_Int64_1342_i64 const& $this ) -> const Builtin::u32;
	#line 1348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getZeroCount($extension_Int64_1342_i64 const& $this ) -> const Builtin::u32;
	#line 1349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getByteSwapped($extension_Int64_1342_i64 const& $this ) -> const $extension_Int64_1342_i64;
	#line 1350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getBigEndian($extension_Int64_1342_i64 const& $this ) -> const $extension_Int64_1342_i64;
	#line 1357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getLittleEndian($extension_Int64_1342_i64 const& $this ) -> const $extension_Int64_1342_i64;
	#line 1364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getReverseBits($extension_Int64_1342_i64 const& $this ) -> const $extension_Int64_1342_i64;
	#line 1366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getShortestBitLength($extension_Int64_1342_i64 const& $this ) -> const Builtin::u32;
	#line 1342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int64_1342_i64, IFixedWidthInteger, IFixedWidthInteger, $extension_Int64_1342_i64);
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
#line 1380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	using $extension_Int64_1380_i64 = Builtin::i64;
	#line 1380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE(IBinaryIntegerFormatInfo, IBinaryIntegerFormatInfo);
	#line 1388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto IsGreaterThanAsUnsigned($extension_Int64_1380_i64 const& $this LIFETIMEBOUND, $extension_Int64_1380_i64 rhs) noexcept -> const bool;
	#line 1381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class __TT> struct $static_getMaxDigitCount; template<> struct $static_getMaxDigitCount<$extension_Int64_1380_i64> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class __TT> struct $static_getMaxHexDigitCount; template<> struct $static_getMaxHexDigitCount<$extension_Int64_1380_i64> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class __TT> struct $static_getMaxValueDiv10; template<> struct $static_getMaxValueDiv10<$extension_Int64_1380_i64> { static inline constexpr auto get() -> const $extension_Int64_1380_i64; };
	#line 1385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getMultiplyBy10($extension_Int64_1380_i64 const& $this ) -> const $extension_Int64_1380_i64;
	#line 1386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getMultiplyBy16($extension_Int64_1380_i64 const& $this ) -> const $extension_Int64_1380_i64;
	#line 1380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int64_1380_i64, IBinaryIntegerFormatInfo, IBinaryIntegerFormatInfo, $extension_Int64_1380_i64);
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
template<class __TT> struct $static_TrailingZeroCount;
template<class __TT> struct $static_getTrailingZeroCount;
template<class __TT> struct $static_Isqrt64;
template<class __TT> struct $static_getIsqrt64;
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
template<class __TT> struct $static_SafeDivExact;
template<class __TT> struct $static_getSafeDivExact;
template<class __TT> struct $static_BorrowingSub;
template<class __TT> struct $static_getBorrowingSub;
template<class __TT> struct $static_ByteSwap64;
template<class __TT> struct $static_getByteSwap64;
template<class __TT> struct $static_MultiplyBy10;
template<class __TT> struct $static_getMultiplyBy10;
template<class __TT> struct $static_WrappingSubtract;
template<class __TT> struct $static_getWrappingSubtract;
template<class __TT> struct $static_NarrowToUInt64;
template<class __TT> struct $static_getNarrowToUInt64;
template<class __TT> struct $static_IsLittleEndian;
template<class __TT> struct $static_getIsLittleEndian;
template<class __TT> struct $static_ByteCount;
template<class __TT> struct $static_getByteCount;
template<class __TT> struct $static_IsBigEndian;
template<class __TT> struct $static_getIsBigEndian;
template<class __TT> struct $static_CarryingAdd;
template<class __TT> struct $static_getCarryingAdd;
template<class __TT> struct $static_ReverseBits64;
template<class __TT> struct $static_getReverseBits64;
template<class __TT> struct $static_LeadingOneCount;
template<class __TT> struct $static_getLeadingOneCount;
template<class __TT> struct $static_CarryingMul64;
template<class __TT> struct $static_getCarryingMul64;
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
template<class __TT> struct $static_ToUInt8;
template<class __TT> struct $static_getToUInt8;
template<class __TT> struct $static_StrictSubtract;
template<class __TT> struct $static_getStrictSubtract;
template<class __TT> struct $static_Div;
template<class __TT> struct $static_getDiv;
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
template<class __TT> struct $static_WideningMul64;
template<class __TT> struct $static_getWideningMul64;
template<class __TT> struct $static_IsNormal;
template<class __TT> struct $static_getIsNormal;
template<class __TT> struct $static_SaturatingAdd;
template<class __TT> struct $static_getSaturatingAdd;
template<class __TT> struct $static_HashCode;
template<class __TT> struct $static_getHashCode;
template<class __TT> struct $static_SafeMultiply;
template<class __TT> struct $static_getSafeMultiply;
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
	inline constexpr auto getHashCode($extension_Int64_20_i64 const & $this ) -> const Builtin::u64
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
	template<class T> inline constexpr auto _operator_mod_lt($extension_Int64_166_i64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int64_166_i64
	{
		#line 201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		const Builtin::Auto<decltype($this % rhs)> result = $this % rhs; 
		#line 202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_gt_gt_gt)((result ^ rhs), Builtin::i32{ADV_USPCS(BitWidth, $extension_Int64_166_i64)() - Builtin::i32(1)}))> signDiff = ADV_UFCS(_operator_gt_gt_gt)((result ^ rhs), Builtin::i32{ADV_USPCS(BitWidth, $extension_Int64_166_i64)() - Builtin::i32(1)}); 
		#line 203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		const Builtin::Auto<decltype((result != Builtin::i32(0)) & (signDiff != Builtin::i32(0)))> needAdjust = (result != Builtin::i32(0)) & (signDiff != Builtin::i32(0)); 
		#line 204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result + (needAdjust ? rhs : T{});
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_mod_lt_eq($extension_Int64_166_i64 & $this , auto rhs)  -> typename $extension_Int64_166_i64&
	{
		#line 207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this = $extension_Int64_166_i64{ADV_UFCS(_operator_mod_lt)($this, rhs)}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_div_gt($extension_Int64_166_i64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int64_166_i64
	{
		#line 211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if constexpr (Builtin::TypeIs<T, IBinaryInteger>()) {
			#line 212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			const auto& [div, rem] = ADV_UFCS(_operator_div_mod)($this, rhs);
			#line 213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			if (rem == Builtin::i32(0)) {
				#line 214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				return div;
			}
			#line 216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			Builtin::Auto<decltype(Builtin::i32(1) + (($this ^ rhs) >> (ADV_USPCS(BitWidth, $extension_Int64_166_i64)() - Builtin::i32(1))))> correction = Builtin::i32(1) + (($this ^ rhs) >> (ADV_USPCS(BitWidth, $extension_Int64_166_i64)() - Builtin::i32(1))); 
			#line 217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return div + correction;
		} else {
			#line 218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			{
				#line 219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				return Builtin::Cast<true, $extension_Int64_166_i64>((ADV_UFCS(_operator_div_gt)(Builtin::f64{$this}, rhs)));
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_div_gt_eq($extension_Int64_166_i64 & $this , auto rhs)  -> typename $extension_Int64_166_i64&
	{
		#line 223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this = $extension_Int64_166_i64{ADV_UFCS(_operator_div_gt)($this, rhs)}); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	
} namespace $extensions { using namespace System;
#line 228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl($extension_Int64_226_i64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int64_226_i64
	{
		#line 228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Div)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_eq($extension_Int64_226_i64 & $this , T rhs)  -> typename $extension_Int64_226_i64&
	{
		#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(DivAssign)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl($extension_Int64_226_i64 const& $this LIFETIMEBOUND, T rhs)  -> const Builtin::Nullable<$extension_Int64_226_i64>
	{
		#line 237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\? implemented only for integer types");
		#line 238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_226_i64 result{}; 
		#line 239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (Builtin::DivExact($this, rhs, result)) {
			#line 240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return result;
		}
		#line 242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return nullptr;
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	
} namespace $extensions { using namespace System;
#line 249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor($extension_Int64_246_i64 const& $this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename $extension_Int64_246_i64
	{
		#line 251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return Builtin::i64(1LL);
		}
		#line 256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Auto<decltype(Builtin::i64(1LL))> result = Builtin::i64(1LL); 
		#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (std::is_constant_evaluated()) {
			#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			while ((exp <=> Builtin::i32(1)) > 0) 
			{
				#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
					#line 262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
					result *= base;
				}
				#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
				#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				base *= base;
			}
			#line 267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return result * base;
		} else {
			#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			{
				#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				for (;;) 
				{
					#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
					if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
						#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
						result *= base;
						#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
						if (exp == Builtin::i32(1)) {
							#line 273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
							return result;
						}
					}
					#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
					ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
					#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
					base *= base;
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor_eq($extension_Int64_246_i64 & $this , Builtin::u32 exp)  -> typename $extension_Int64_246_i64&
	{
		#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_xor_xor)($this, exp)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	
} namespace $extensions { using namespace System;
#line 337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline auto MaxMagnitudeNumber($extension_Int64_284_i64 const& $this LIFETIMEBOUND, $extension_Int64_284_i64 rhs)  -> const typename $extension_Int64_284_i64
	{
		#line 337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(MaxMagnitude)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline auto MinMagnitudeNumber($extension_Int64_284_i64 const& $this LIFETIMEBOUND, $extension_Int64_284_i64 rhs)  -> const typename $extension_Int64_284_i64
	{
		#line 368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(MinMagnitude)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToInt8($extension_Int64_284_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i8
	{
		#line 382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i8>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToUInt8($extension_Int64_284_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u8
	{
		#line 383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u8>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToInt16($extension_Int64_284_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i16
	{
		#line 384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i16>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToUInt16($extension_Int64_284_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u16
	{
		#line 385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u16>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToInt32($extension_Int64_284_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i32
	{
		#line 386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i32>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToUInt32($extension_Int64_284_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u32
	{
		#line 387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u32>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToInt64($extension_Int64_284_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i64
	{
		#line 388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 389 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToUInt64($extension_Int64_284_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u64
	{
		#line 389 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u64>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToInt128($extension_Int64_284_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i128
	{
		#line 390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToUInt128($extension_Int64_284_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u128
	{
		#line 391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u128>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToIsize($extension_Int64_284_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::isize
	{
		#line 392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::isize>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToUsize($extension_Int64_284_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::usize
	{
		#line 393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::usize>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto $static_getOne<$extension_Int64_284_i64>::get() -> const $extension_Int64_284_i64
	{
		#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::i64(1LL)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto $static_getZero<$extension_Int64_284_i64>::get() -> const $extension_Int64_284_i64
	{
		#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::i64(0LL)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto $static_getRadix<$extension_Int64_284_i64>::get() -> const Builtin::i32
	{
		#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(2)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getAbs($extension_Int64_284_i64 const & $this ) -> const $extension_Int64_284_i64
	{
		#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)($this.$ref()) ? -$this : $this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsCanonical($extension_Int64_284_i64 const & $this ) -> const bool
	{
		#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsComplexNumber($extension_Int64_284_i64 const & $this ) -> const bool
	{
		#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsEvenInteger($extension_Int64_284_i64 const & $this ) -> const bool
	{
		#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(($this & Builtin::i64(1LL)) == Builtin::i32(0)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsFinite($extension_Int64_284_i64 const & $this ) -> const bool
	{
		#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsImaginaryNumber($extension_Int64_284_i64 const & $this ) -> const bool
	{
		#line 294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsInfinity($extension_Int64_284_i64 const & $this ) -> const bool
	{
		#line 295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsInteger($extension_Int64_284_i64 const & $this ) -> const bool
	{
		#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsNaN($extension_Int64_284_i64 const & $this ) -> const bool
	{
		#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsNegative($extension_Int64_284_i64 const & $this ) -> const bool
	{
		#line 298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(($this <=> Builtin::i32(0)) < 0); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsNegativeInfinity($extension_Int64_284_i64 const & $this ) -> const bool
	{
		#line 299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsNormal($extension_Int64_284_i64 const & $this ) -> const bool
	{
		#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this != Builtin::i32(0)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsOddInteger($extension_Int64_284_i64 const & $this ) -> const bool
	{
		#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(($this & Builtin::i64(1LL)) != Builtin::i32(0)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsPositive($extension_Int64_284_i64 const & $this ) -> const bool
	{
		#line 302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(($this <=> Builtin::i32(0)) >= 0); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsPositiveInfinity($extension_Int64_284_i64 const & $this ) -> const bool
	{
		#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsRealNumber($extension_Int64_284_i64 const & $this ) -> const bool
	{
		#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsSubnormal($extension_Int64_284_i64 const & $this ) -> const bool
	{
		#line 305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsZero($extension_Int64_284_i64 const & $this ) -> const bool
	{
		#line 306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this == Builtin::i32(0)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	
} namespace $extensions { using namespace System;
#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto $static_getMinusOne<$extension_Int64_396_i64>::get() -> const $extension_Int64_396_i64
	{
		#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(-1)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	
} namespace $extensions { using namespace System;
#line 421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto Max($extension_Int64_400_i64 const& $this LIFETIMEBOUND, $extension_Int64_400_i64 rhs) noexcept -> const typename $extension_Int64_400_i64
	{
		#line 421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultMax)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto MaxNumber($extension_Int64_400_i64 const& $this LIFETIMEBOUND, $extension_Int64_400_i64 rhs) noexcept -> const typename $extension_Int64_400_i64
	{
		#line 422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Max)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto Min($extension_Int64_400_i64 const& $this LIFETIMEBOUND, $extension_Int64_400_i64 rhs) noexcept -> const typename $extension_Int64_400_i64
	{
		#line 423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultMin)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto MinNumber($extension_Int64_400_i64 const& $this LIFETIMEBOUND, $extension_Int64_400_i64 rhs) noexcept -> const typename $extension_Int64_400_i64
	{
		#line 424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Min)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto Clamp($extension_Int64_400_i64 const& $this LIFETIMEBOUND, $extension_Int64_400_i64 min, $extension_Int64_400_i64 max)  -> const typename $extension_Int64_400_i64
	{
		#line 425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultClamp)($this, min, max)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getSign($extension_Int64_400_i64 const & $this ) -> const Builtin::i32
	{
		#line 401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultSign)($this)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	
} namespace $extensions { using namespace System;
#line 492 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto CheckedLog($extension_Int64_428_i64 const& $this LIFETIMEBOUND, $extension_Int64_428_i64 base) noexcept -> const Builtin::Nullable<$extension_Int64_428_i64>
	{
		#line 494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (($this <=> Builtin::i32(0)) <= 0 || (base <=> Builtin::i32(1)) <= 0) {
			#line 495 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return nullptr;
		}
		#line 498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (std::is_constant_evaluated()) {
			#line 499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			if (base == Builtin::i32(2)) {
				#line 500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				return ADV_UPCS(CheckedLog2)($this.$ref());
			}
			#line 502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			if (base == Builtin::i32(10)) {
				#line 503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				return ADV_UPCS(CheckedLog10)($this.$ref());
			}
		}
		#line 507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (($this <=> base) < 0) {
			#line 508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return Builtin::i64(0LL);
		}
		#line 511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_428_i64 n = Builtin::i64(1LL); 
		#line 512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Auto<decltype(base)> r = base; 
		#line 513 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_bsl)($this, base))> baseRatio = ADV_UFCS(_operator_bsl)($this, base); 
		#line 514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		while ((r <=> baseRatio) <= 0) 
		{
			#line 515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			++n;
			#line 516 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			r *= base;
		}
		#line 519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return n;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto Midpoint($extension_Int64_428_i64 const& $this LIFETIMEBOUND, $extension_Int64_428_i64 rhs) noexcept -> const typename $extension_Int64_428_i64
	{
		#line 537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		const Builtin::Auto<decltype((($this ^ rhs) >> Builtin::i32(1)) + ($this & rhs))> result = (($this ^ rhs) >> Builtin::i32(1)) + ($this & rhs); 
		#line 538 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		const Builtin::Auto<decltype((result <=> Builtin::i32(0)) < 0)> correction = (result <=> Builtin::i32(0)) < 0; 
		#line 539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result + ((Builtin::Cast<true, $extension_Int64_428_i64>(correction)) & ($this ^ rhs));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto IsMultipleOf($extension_Int64_428_i64 const& $this LIFETIMEBOUND, $extension_Int64_428_i64 rhs) noexcept -> const bool
	{
		#line 545 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (rhs == Builtin::i32(0)) {
			#line 546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return $this == Builtin::i32(0);
		}
		#line 549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (rhs == Builtin::i32(-1)) {
			#line 550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return Builtin::Boolean(true);
		}
		#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return $this % rhs == Builtin::i32(0);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto $static_getAllBitsSet<$extension_Int64_428_i64>::get() -> const $extension_Int64_428_i64
	{
		#line 430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(MinusOne, Builtin::i64)()); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsPow2($extension_Int64_428_i64 const & $this ) -> const bool
	{
		#line 433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsPositive)($this.$ref()) && ADV_UPCS(PopCount)($this.$ref()) == Builtin::i32(1)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getCheckedLog2($extension_Int64_428_i64 const & $this ) -> const Builtin::Nullable<$extension_Int64_428_i64>
	{
		#line 439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (($this <=> Builtin::i32(0)) <= 0) {
			#line 440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return nullptr;
		}
		#line 443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return Builtin::Cast<true, $extension_Int64_428_i64>((ADV_USPCS(BitWidth, $extension_Int64_428_i64)() - Builtin::i32(1) - ADV_UPCS(LeadingZeroCount)($this.$ref())));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getLog2($extension_Int64_428_i64 const & $this ) -> const $extension_Int64_428_i64
	{
		#line 449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (const auto result = ADV_UPCS(CheckedLog2)($this.$ref())) {
			{
				#line 449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				return result;
			}
		}
		#line 452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getCheckedLog10($extension_Int64_428_i64 const & $this ) -> const Builtin::Nullable<$extension_Int64_428_i64>
	{
		#line 459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (($this <=> Builtin::i32(0)) <= 0) {
			#line 460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return nullptr;
		}
		#line 463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		constexpr Builtin::u32 C1 = Builtin::u32(0b01100000000000000000U) - Builtin::i32(10);
		#line 464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		constexpr Builtin::u32 C2 = Builtin::u32(0b10000000000000000000U) - Builtin::i32(100);
		#line 465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		constexpr Builtin::u32 C3 = Builtin::u32(0b11100000000000000000U) - Builtin::i32(1000);
		#line 466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		constexpr Builtin::u32 C4 = Builtin::u32(0b10000000000000000000U) - Builtin::i32(10000);
		#line 467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Auto<decltype(Builtin::i32(0))> log = Builtin::i32(0); 
		#line 468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Auto<decltype(Builtin::Cast<true, Builtin::u64>($this))> val1 = Builtin::Cast<true, Builtin::u64>($this); 
		#line 469 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((val1 <=> Builtin::i64(10000000000LL)) >= 0) {
			#line 470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			ADV_UFCS(DivAssign)(val1.$ref(), Builtin::u64(10000000000ULL));
			#line 471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			log += Builtin::i32(10);
		}
		#line 473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((val1 <=> Builtin::i32(100000)) >= 0) {
			#line 474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			ADV_UFCS(DivAssign)(val1.$ref(), Builtin::u32(100000U));
			#line 475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			log += Builtin::i32(5);
		}
		#line 477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::u32>(val1))> val = Builtin::Cast<true, Builtin::u32>(val1); 
		#line 478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return log + ((((val + C1) & (val + C2)) ^ ((val + C3) & (val + C4))) >> Builtin::i32(17));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getLog10($extension_Int64_428_i64 const & $this ) -> const $extension_Int64_428_i64
	{
		#line 484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (const auto result = ADV_UPCS(CheckedLog10)($this.$ref())) {
			{
				#line 484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 485 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				return result;
			}
		}
		#line 487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	
} namespace $extensions { using namespace System;
#line 560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_add_qst($extension_Int64_557_i64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int64_557_i64>
	{
		#line 562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +? implemented only for integer types");
		#line 563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_557_i64 result{}; 
		#line 564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (Builtin::SafeAdd($this, rhs, result)) {
			#line 565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return result;
		}
		#line 567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_add_qst_eq($extension_Int64_557_i64 & $this , T rhs) noexcept -> typename $extension_Int64_557_i64&
	{
		#line 571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +?= implemented only for integer types");
		#line 572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (const auto result = ADV_UFCS(_operator_add_qst)($this, rhs)) {
			{
				#line 572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				$this = result;
			}
		}
		#line 575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 580 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_add_ne($extension_Int64_557_i64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int64_557_i64
	{
		#line 582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +! implemented only for integer types");
		#line 583 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_557_i64 result{}; 
		#line 584 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::StrictAdd($this, rhs, result);
		#line 585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 587 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_add_ne_eq($extension_Int64_557_i64 & $this , T rhs)  -> typename $extension_Int64_557_i64&
	{
		#line 587 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_add_ne)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 591 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_add_mod($extension_Int64_557_i64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int64_557_i64
	{
		#line 593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +% implemented only for integer types");
		#line 594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_557_i64 result{}; 
		#line 595 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::WrappingAdd($this, rhs, result);
		#line 596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_add_mod_eq($extension_Int64_557_i64 & $this , T rhs) noexcept -> typename $extension_Int64_557_i64&
	{
		#line 598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_add_mod)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_add_or($extension_Int64_557_i64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int64_557_i64
	{
		#line 604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +| implemented only for integer types");
		#line 605 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_557_i64 result{}; 
		#line 606 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::SaturatingAdd($this, rhs, result);
		#line 607 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_add_or_eq($extension_Int64_557_i64 & $this , T rhs) noexcept -> typename $extension_Int64_557_i64&
	{
		#line 609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_add_or)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 613 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_add_mod_qst($extension_Int64_557_i64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_Int64_557_i64, bool>
	{
		#line 614 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +%? implemented only for integer types");
		#line 615 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_557_i64 result{}; 
		#line 616 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Auto<decltype(!Builtin::SafeAdd($this, rhs, result))> overflowed = !Builtin::SafeAdd($this, rhs, result); 
		#line 617 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 621 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_add_add_qst($extension_Int64_557_i64 & $this )  -> typename $extension_Int64_557_i64&
	{
		#line 621 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_qst_eq)($this, Builtin::i64(1LL))); 
	}
	inline constexpr auto _operator_add_add_qst_postfix($extension_Int64_557_i64 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_add_add_qst)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_add_add_ne($extension_Int64_557_i64 & $this )  -> typename $extension_Int64_557_i64&
	{
		#line 624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_ne_eq)($this, Builtin::i64(1LL))); 
	}
	inline constexpr auto _operator_add_add_ne_postfix($extension_Int64_557_i64 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_add_add_ne)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_add_add_mod($extension_Int64_557_i64 & $this )  -> typename $extension_Int64_557_i64&
	{
		#line 627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_mod_eq)($this, Builtin::i64(1LL))); 
	}
	inline constexpr auto _operator_add_add_mod_postfix($extension_Int64_557_i64 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_add_add_mod)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 630 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_add_add_or($extension_Int64_557_i64 & $this )  -> typename $extension_Int64_557_i64&
	{
		#line 630 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_or_eq)($this, Builtin::i64(1LL))); 
	}
	inline constexpr auto _operator_add_add_or_postfix($extension_Int64_557_i64 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_add_add_or)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto CarryingAdd($extension_Int64_557_i64 const& $this LIFETIMEBOUND, $extension_Int64_557_i64 rhs, bool carry) noexcept -> const std::tuple<$extension_Int64_557_i64, bool>
	{
		#line 636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_557_i64 result{}; 
		#line 637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Auto<decltype(Builtin::CarryingAdd($this, rhs, carry, result))> overflowed = Builtin::CarryingAdd($this, rhs, carry, result); 
		#line 638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 643 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto BorrowingSub($extension_Int64_557_i64 const& $this LIFETIMEBOUND, $extension_Int64_557_i64 rhs, bool carry) noexcept -> const std::tuple<$extension_Int64_557_i64, bool>
	{
		#line 645 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_557_i64 result{}; 
		#line 646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Auto<decltype(Builtin::BorrowingSub($this, rhs, carry, result))> overflowed = Builtin::BorrowingSub($this, rhs, carry, result); 
		#line 647 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_sub_qst($extension_Int64_557_i64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int64_557_i64>
	{
		#line 654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -? implemented only for integer types");
		#line 655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_557_i64 result{}; 
		#line 656 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (Builtin::SafeSubtract($this, rhs, result)) {
			#line 657 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return result;
		}
		#line 659 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 661 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_sub_qst_eq($extension_Int64_557_i64 & $this , T rhs) noexcept -> typename $extension_Int64_557_i64&
	{
		#line 663 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -?= implemented only for integer types");
		#line 664 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (const auto result = ADV_UFCS(_operator_sub_qst)($this, rhs)) {
			{
				#line 664 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 665 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				$this = result;
			}
		}
		#line 667 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 672 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_sub_ne($extension_Int64_557_i64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int64_557_i64
	{
		#line 674 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -! implemented only for integer types");
		#line 675 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_557_i64 result{}; 
		#line 676 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::StrictSubtract($this, rhs, result);
		#line 677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 679 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_sub_ne_eq($extension_Int64_557_i64 & $this , T rhs)  -> typename $extension_Int64_557_i64&
	{
		#line 679 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_sub_ne)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_sub_mod($extension_Int64_557_i64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int64_557_i64
	{
		#line 685 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -% implemented only for integer types");
		#line 686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_557_i64 result{}; 
		#line 687 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::WrappingSubtract($this, rhs, result);
		#line 688 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 690 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_sub_mod_eq($extension_Int64_557_i64 & $this , T rhs) noexcept -> typename $extension_Int64_557_i64&
	{
		#line 690 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_sub_mod)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 694 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_sub_or($extension_Int64_557_i64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int64_557_i64
	{
		#line 696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -| implemented only for integer types");
		#line 697 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_557_i64 result{}; 
		#line 698 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::SaturatingSubtract($this, rhs, result);
		#line 699 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 701 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_sub_or_eq($extension_Int64_557_i64 & $this , T rhs) noexcept -> typename $extension_Int64_557_i64&
	{
		#line 701 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_sub_or)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_sub_mod_qst($extension_Int64_557_i64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_Int64_557_i64, bool>
	{
		#line 706 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -%? implemented only for integer types");
		#line 707 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_557_i64 result{}; 
		#line 708 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Auto<decltype(!Builtin::SafeSubtract($this, rhs, result))> overflowed = !Builtin::SafeSubtract($this, rhs, result); 
		#line 709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 713 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_sub_sub_qst($extension_Int64_557_i64 & $this )  -> typename $extension_Int64_557_i64&
	{
		#line 713 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_qst_eq)($this, Builtin::i64(1LL))); 
	}
	inline constexpr auto _operator_sub_sub_qst_postfix($extension_Int64_557_i64 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_sub_sub_qst)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 716 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_sub_sub_ne($extension_Int64_557_i64 & $this )  -> typename $extension_Int64_557_i64&
	{
		#line 716 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_ne_eq)($this, Builtin::i64(1LL))); 
	}
	inline constexpr auto _operator_sub_sub_ne_postfix($extension_Int64_557_i64 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_sub_sub_ne)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 719 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_sub_sub_mod($extension_Int64_557_i64 & $this )  -> typename $extension_Int64_557_i64&
	{
		#line 719 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_mod_eq)($this, Builtin::i64(1LL))); 
	}
	inline constexpr auto _operator_sub_sub_mod_postfix($extension_Int64_557_i64 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_sub_sub_mod)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 722 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_sub_sub_or($extension_Int64_557_i64 & $this )  -> typename $extension_Int64_557_i64&
	{
		#line 722 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_or_eq)($this, Builtin::i64(1LL))); 
	}
	inline constexpr auto _operator_sub_sub_or_postfix($extension_Int64_557_i64 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_sub_sub_or)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 726 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mul_qst($extension_Int64_557_i64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int64_557_i64>
	{
		#line 728 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *? implemented only for integer types");
		#line 729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_557_i64 result{}; 
		#line 730 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (Builtin::SafeMultiply($this, rhs, result)) {
			#line 731 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return result;
		}
		#line 733 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 735 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mul_qst_eq($extension_Int64_557_i64 & $this , T rhs) noexcept -> typename $extension_Int64_557_i64&
	{
		#line 737 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *?= implemented only for integer types");
		#line 738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (const auto result = ADV_UFCS(_operator_mul_qst)($this, rhs)) {
			{
				#line 738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 739 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				$this = result;
			}
		}
		#line 741 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 746 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mul_ne($extension_Int64_557_i64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int64_557_i64
	{
		#line 748 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *! implemented only for integer types");
		#line 749 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_557_i64 result{}; 
		#line 750 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::StrictMultiply($this, rhs, result);
		#line 751 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 753 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mul_ne_eq($extension_Int64_557_i64 & $this , T rhs)  -> typename $extension_Int64_557_i64&
	{
		#line 753 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_mul_ne)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 757 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mul_mod($extension_Int64_557_i64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int64_557_i64
	{
		#line 759 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *% implemented only for integer types");
		#line 760 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_557_i64 result{}; 
		#line 761 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::WrappingMultiply($this, rhs, result);
		#line 762 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 764 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mul_mod_eq($extension_Int64_557_i64 & $this , T rhs) noexcept -> typename $extension_Int64_557_i64&
	{
		#line 764 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_mul_mod)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 768 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mul_or($extension_Int64_557_i64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int64_557_i64
	{
		#line 770 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *| implemented only for integer types");
		#line 771 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_557_i64 result{}; 
		#line 772 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::SaturatingMultiply($this, rhs, result);
		#line 773 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 775 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mul_or_eq($extension_Int64_557_i64 & $this , T rhs) noexcept -> typename $extension_Int64_557_i64&
	{
		#line 775 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_mul_or)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 779 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mul_mod_qst($extension_Int64_557_i64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_Int64_557_i64, bool>
	{
		#line 780 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *%? implemented only for integer types");
		#line 781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_557_i64 result{}; 
		#line 782 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Auto<decltype(!Builtin::SafeMultiply($this, rhs, result))> overflowed = !Builtin::SafeMultiply($this, rhs, result); 
		#line 783 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 788 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline auto _operator_mul_gt($extension_Int64_557_i64 const& $this LIFETIMEBOUND, $extension_Int64_557_i64 rhs) noexcept -> const std::tuple<Builtin::u64, Builtin::i64>
	{
		#line 790 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		const auto& [low, high] = Builtin::WideningMul64($this, rhs);
		#line 791 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return std::make_tuple(low, high);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 797 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline auto CarryingMul($extension_Int64_557_i64 const& $this LIFETIMEBOUND, $extension_Int64_557_i64 rhs, $extension_Int64_557_i64 carry) noexcept -> const std::tuple<Builtin::u64, Builtin::i64>
	{
		#line 799 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		const auto& [low, high] = Builtin::CarryingMul64($this, rhs, carry);
		#line 800 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return std::make_tuple(low, high);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 805 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_qst($extension_Int64_557_i64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int64_557_i64>
	{
		#line 807 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\? implemented only for integer types");
		#line 808 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_557_i64 result{}; 
		#line 809 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (Builtin::SafeDivide($this, rhs, result)) {
			#line 810 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return result;
		}
		#line 812 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 814 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_qst_eq($extension_Int64_557_i64 & $this , T rhs) noexcept -> typename $extension_Int64_557_i64&
	{
		#line 816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\?= implemented only for integer types");
		#line 817 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (const auto result = ADV_UFCS(_operator_bsl_qst)($this, rhs)) {
			{
				#line 817 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 818 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				$this = result;
			}
		}
		#line 820 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 826 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_ne($extension_Int64_557_i64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int64_557_i64
	{
		#line 828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\! implemented only for integer types");
		#line 829 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_557_i64 result{}; 
		#line 830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::StrictDivide($this, rhs, result);
		#line 831 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 833 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_ne_eq($extension_Int64_557_i64 & $this , T rhs)  -> typename $extension_Int64_557_i64&
	{
		#line 833 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_bsl_ne)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 838 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_mod($extension_Int64_557_i64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int64_557_i64
	{
		#line 840 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\% implemented only for integer types");
		#line 841 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_557_i64 result{}; 
		#line 842 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::WrappingDivide($this, rhs, result);
		#line 843 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 845 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_eq($extension_Int64_557_i64 & $this , T rhs)  -> typename $extension_Int64_557_i64&
	{
		#line 845 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_bsl_mod)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 850 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_or($extension_Int64_557_i64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int64_557_i64
	{
		#line 852 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\| implemented only for integer types");
		#line 853 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_557_i64 result{}; 
		#line 854 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::SaturatingDivide($this, rhs, result);
		#line 855 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 857 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_or_eq($extension_Int64_557_i64 & $this , T rhs)  -> typename $extension_Int64_557_i64&
	{
		#line 857 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_bsl_or)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 862 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_qst($extension_Int64_557_i64 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_Int64_557_i64, bool>
	{
		#line 863 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\%? implemented only for integer types");
		#line 864 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_557_i64 result{}; 
		#line 865 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Auto<decltype(!Builtin::SafeDivide($this, rhs, result))> overflowed = !Builtin::SafeDivide($this, rhs, result); 
		#line 866 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 871 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst($extension_Int64_557_i64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int64_557_i64>
	{
		#line 873 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\? implemented only for integer types");
		#line 874 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_557_i64 result{}; 
		#line 875 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (Builtin::SafeDivExact($this, rhs, result)) {
			#line 876 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return result;
		}
		#line 878 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 881 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst_eq($extension_Int64_557_i64 & $this , T rhs) noexcept -> typename $extension_Int64_557_i64&
	{
		#line 883 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\?= implemented only for integer types");
		#line 884 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (const auto result = ADV_UFCS(_operator_bsl_bsl_qst)($this, rhs)) {
			{
				#line 884 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 885 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				$this = result;
			}
		}
		#line 887 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 892 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mod_qst($extension_Int64_557_i64 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int64_557_i64>
	{
		#line 894 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %? implemented only for integer types");
		#line 895 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_557_i64 result{}; 
		#line 896 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (Builtin::SafeModulus($this, rhs, result)) {
			#line 897 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return result;
		}
		#line 899 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 901 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mod_qst_eq($extension_Int64_557_i64 & $this , T rhs) noexcept -> typename $extension_Int64_557_i64&
	{
		#line 903 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %?= implemented only for integer types");
		#line 904 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (const auto result = ADV_UFCS(_operator_mod_qst)($this, rhs)) {
			{
				#line 904 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 905 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				$this = result;
			}
		}
		#line 907 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 913 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mod_ne($extension_Int64_557_i64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int64_557_i64
	{
		#line 915 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %! implemented only for integer types");
		#line 916 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_557_i64 result{}; 
		#line 917 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::StrictModulus($this, rhs, result);
		#line 918 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 920 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mod_ne_eq($extension_Int64_557_i64 & $this , T rhs)  -> typename $extension_Int64_557_i64&
	{
		#line 920 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_mod_ne)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 925 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mod_mod($extension_Int64_557_i64 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int64_557_i64
	{
		#line 927 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %% implemented only for integer types");
		#line 928 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_557_i64 result{}; 
		#line 929 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::WrappingModulus($this, rhs, result);
		#line 930 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 932 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mod_mod_eq($extension_Int64_557_i64 & $this , T rhs)  -> typename $extension_Int64_557_i64&
	{
		#line 932 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_mod_mod)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 937 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mod_mod_qst($extension_Int64_557_i64 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_Int64_557_i64, bool>
	{
		#line 938 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %%? implemented only for integer types");
		#line 939 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_557_i64 result{}; 
		#line 940 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Auto<decltype(!Builtin::SafeModulus($this, rhs, result))> overflowed = !Builtin::SafeModulus($this, rhs, result); 
		#line 941 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 946 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_sub_qst($extension_Int64_557_i64 const& $this LIFETIMEBOUND) noexcept -> const Builtin::Nullable<$extension_Int64_557_i64>
	{
		#line 948 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_557_i64 result{}; 
		#line 949 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (Builtin::SafeNegate($this, result)) {
			#line 950 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return result;
		}
		#line 952 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 956 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_sub_ne($extension_Int64_557_i64 const& $this LIFETIMEBOUND)  -> const typename $extension_Int64_557_i64
	{
		#line 958 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_557_i64 result{}; 
		#line 959 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::StrictNegate($this, result);
		#line 960 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 963 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_sub_mod($extension_Int64_557_i64 const& $this LIFETIMEBOUND)  -> const typename $extension_Int64_557_i64
	{
		#line 965 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_557_i64 result{}; 
		#line 966 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::WrappingNegate($this, result);
		#line 967 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 971 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_sub_or($extension_Int64_557_i64 const& $this LIFETIMEBOUND)  -> const typename $extension_Int64_557_i64
	{
		#line 973 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_557_i64 result{}; 
		#line 974 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::SaturatingNegate($this, result);
		#line 975 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 979 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_sub_mod_qst($extension_Int64_557_i64 const& $this LIFETIMEBOUND)  -> const std::tuple<$extension_Int64_557_i64, bool>
	{
		#line 981 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_557_i64 result{}; 
		#line 982 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Auto<decltype(!Builtin::SafeNegate($this, result))> overflowed = !Builtin::SafeNegate($this, result); 
		#line 983 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 987 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_lt_lt_qst($extension_Int64_557_i64 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<$extension_Int64_557_i64>
	{
		#line 989 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_Int64_557_i64)()) < 0) {
			#line 990 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return Builtin::UncheckedShiftLeft($this, amount);
		}
		#line 992 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 995 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_lt_lt_qst_eq($extension_Int64_557_i64 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int64_557_i64&
	{
		#line 997 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_Int64_557_i64)()) < 0) {
			#line 998 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return $this <<= amount;
		}
		#line 1000 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1003 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_lt_lt_ne($extension_Int64_557_i64 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_Int64_557_i64
	{
		#line 1005 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_Int64_557_i64)()) < 0) {
			#line 1006 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return Builtin::UncheckedShiftLeft($this, amount);
		}
		#line 1008 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Throw(Builtin::IntegerOverflowException{});
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1011 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_lt_lt_ne_eq($extension_Int64_557_i64 & $this , Builtin::i32 amount)  -> typename $extension_Int64_557_i64&
	{
		#line 1011 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_lt_lt_ne)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1013 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_lt_lt_mod($extension_Int64_557_i64 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename $extension_Int64_557_i64
	{
		#line 1013 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::UncheckedShiftLeft($this, amount & (ADV_USPCS(BitWidth, $extension_Int64_557_i64)() - Builtin::i32(1)))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1016 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_lt_lt_mod_eq($extension_Int64_557_i64 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int64_557_i64&
	{
		#line 1016 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_lt_lt_mod)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1018 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_lt_lt_mod_qst($extension_Int64_557_i64 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<$extension_Int64_557_i64, bool>
	{
		#line 1018 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(std::make_tuple(ADV_UFCS(_operator_lt_lt_mod)($this, amount), (amount <=> Builtin::i32(0)) < 0 || (amount <=> ADV_USPCS(BitWidth, $extension_Int64_557_i64)()) >= 0)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1021 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_gt_gt_qst($extension_Int64_557_i64 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<$extension_Int64_557_i64>
	{
		#line 1023 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_Int64_557_i64)()) < 0) {
			#line 1024 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return $this >> amount;
		}
		#line 1026 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1029 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_gt_gt_qst_eq($extension_Int64_557_i64 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int64_557_i64&
	{
		#line 1031 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_Int64_557_i64)()) < 0) {
			#line 1032 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return $this >>= amount;
		}
		#line 1034 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1037 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_gt_gt_ne($extension_Int64_557_i64 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_Int64_557_i64
	{
		#line 1039 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_Int64_557_i64)()) < 0) {
			#line 1040 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return $this >> amount;
		}
		#line 1042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Throw(Builtin::IntegerOverflowException{});
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1045 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_gt_gt_ne_eq($extension_Int64_557_i64 & $this , Builtin::i32 amount)  -> typename $extension_Int64_557_i64&
	{
		#line 1045 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_gt_gt_ne)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1047 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_gt_gt_mod($extension_Int64_557_i64 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename $extension_Int64_557_i64
	{
		#line 1047 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::UncheckedShiftRight($this, amount & (ADV_USPCS(BitWidth, $extension_Int64_557_i64)() - Builtin::i32(1)))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1050 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_gt_gt_mod_eq($extension_Int64_557_i64 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int64_557_i64&
	{
		#line 1050 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_gt_gt_mod)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1052 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_gt_gt_mod_qst($extension_Int64_557_i64 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<$extension_Int64_557_i64, bool>
	{
		#line 1052 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(std::make_tuple(ADV_UFCS(_operator_gt_gt_mod)($this, amount), (amount <=> Builtin::i32(0)) < 0 || (amount <=> ADV_USPCS(BitWidth, $extension_Int64_557_i64)()) >= 0)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1057 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor_qst($extension_Int64_557_i64 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const Builtin::Nullable<$extension_Int64_557_i64>
	{
		#line 1059 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1061 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return Builtin::i64(1LL);
		}
		#line 1064 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 1065 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Auto<decltype(Builtin::i64(1LL))> result = Builtin::i64(1LL); 
		#line 1067 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		for (;;) 
		{
			#line 1068 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 1069 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				if (const auto mul = ADV_UFCS(_operator_mul_qst)(result, base)) {
					{
						#line 1069 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
						auto __tmp0 = *mul; const auto& mul = __tmp0;
						
						#line 1070 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
						result = mul;
					}
				} else {
					#line 1071 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
					{
						#line 1072 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
						return nullptr;
					}
				}
				#line 1074 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				if (exp == Builtin::i32(1)) {
					#line 1075 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
					return result;
				}
			}
			#line 1077 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
			#line 1078 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			if (const auto mul = ADV_UFCS(_operator_mul_qst)(base, base)) {
				{
					#line 1078 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
					auto __tmp0 = *mul; const auto& mul = __tmp0;
					
					#line 1079 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
					base = mul;
				}
			} else {
				#line 1080 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				{
					#line 1081 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
					return nullptr;
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1086 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor_qst_eq($extension_Int64_557_i64 & $this , Builtin::u32 exp) noexcept -> typename $extension_Int64_557_i64&
	{
		#line 1088 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (auto result = ADV_UFCS(_operator_xor_xor_qst)($this, exp)) {
			{
				#line 1088 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 1089 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				return $this = result;
			}
		}
		#line 1091 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1094 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor_ne($extension_Int64_557_i64 const& $this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename $extension_Int64_557_i64
	{
		#line 1096 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1098 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return Builtin::i32(1);
		}
		#line 1101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 1102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Auto<decltype(Builtin::i64(1LL))> result = Builtin::i64(1LL); 
		#line 1104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		for (;;) 
		{
			#line 1105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 1106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				ADV_UFCS(_operator_mul_ne_eq)(result, base);
				#line 1107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				if (exp == Builtin::i32(1)) {
					#line 1108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
					return result;
				}
			}
			#line 1110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
			#line 1111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			ADV_UFCS(_operator_mul_ne_eq)(base, base);
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor_ne_eq($extension_Int64_557_i64 & $this , Builtin::u32 exp)  -> typename $extension_Int64_557_i64&
	{
		#line 1115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_xor_xor_ne)($this, exp)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor_mod($extension_Int64_557_i64 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename $extension_Int64_557_i64
	{
		#line 1119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return Builtin::i64(1LL);
		}
		#line 1124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 1125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Auto<decltype(Builtin::i64(1LL))> result = Builtin::i64(1LL); 
		#line 1127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (std::is_constant_evaluated()) {
			#line 1128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			while ((exp <=> Builtin::i32(1)) > 0) 
			{
				#line 1129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
					#line 1130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
					ADV_UFCS(_operator_mul_mod_eq)(result, base);
				}
				#line 1132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
				#line 1133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				ADV_UFCS(_operator_mul_mod_eq)(base, base);
			}
			#line 1135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return ADV_UFCS(_operator_mul_mod)(result, base);
		} else {
			#line 1136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			{
				#line 1137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				for (;;) 
				{
					#line 1138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
					if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
						#line 1139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
						ADV_UFCS(_operator_mul_mod_eq)(result, base);
						#line 1140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
						if (exp == Builtin::i32(1)) {
							#line 1141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
							return result;
						}
					}
					#line 1143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
					ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
					#line 1144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
					ADV_UFCS(_operator_mul_mod_eq)(base, base);
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor_mod_eq($extension_Int64_557_i64 & $this , Builtin::u32 exp) noexcept -> typename $extension_Int64_557_i64&
	{
		#line 1149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_xor_xor_mod)($this, exp)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor_or($extension_Int64_557_i64 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename $extension_Int64_557_i64
	{
		#line 1153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (const auto result = ADV_UFCS(_operator_xor_xor_qst)($this, exp)) {
			{
				#line 1153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 1154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				return result;
			}
		}
		#line 1157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return (ADV_UPCS(IsNegative)($this.$ref()) && exp % Builtin::i32(2) == Builtin::i32(1)) ? ADV_USPCS(MinValue, $extension_Int64_557_i64)() : ADV_USPCS(MaxValue, $extension_Int64_557_i64)();
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor_or_eq($extension_Int64_557_i64 & $this , Builtin::u32 exp) noexcept -> typename $extension_Int64_557_i64&
	{
		#line 1160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_xor_xor_or)($this, exp)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor_mod_qst($extension_Int64_557_i64 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const std::tuple<$extension_Int64_557_i64, bool>
	{
		#line 1164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return std::make_tuple(Builtin::i64(1LL), Builtin::Boolean(false));
		}
		#line 1169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 1170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Auto<decltype(Builtin::i64(1LL))> result = Builtin::i64(1LL); 
		#line 1171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Auto<decltype(Builtin::Boolean(false))> overflowed = Builtin::Boolean(false); 
		#line 1172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Auto<decltype(std::make_tuple(Builtin::i64(0LL), Builtin::Boolean(false)))> tmp = std::make_tuple(Builtin::i64(0LL), Builtin::Boolean(false)); 
		#line 1174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		for (;;) 
		{
			#line 1175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 1176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				tmp = ADV_UFCS(_operator_mul_mod_qst)(result, base);
				#line 1177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				if (exp == Builtin::i32(1)) {
					#line 1178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
					std::get<1>(tmp) |= overflowed;
					#line 1179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
					return tmp;
				}
				#line 1181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				result = std::get<0>(tmp);
				#line 1182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				overflowed |= std::get<1>(tmp);
			}
			#line 1184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
			#line 1185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			tmp = ADV_UFCS(_operator_mul_mod_qst)(base, base);
			#line 1186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			base = std::get<0>(tmp);
			#line 1187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			overflowed |= std::get<1>(tmp);
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getCheckedAbs($extension_Int64_557_i64 const & $this ) -> const Builtin::Nullable<$extension_Int64_557_i64>
	{
		#line 1193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)($this.$ref()) ? ADV_UFCS(_operator_sub_qst)($this) : $this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getStrictAbs($extension_Int64_557_i64 const & $this ) -> const $extension_Int64_557_i64
	{
		#line 1196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)($this.$ref()) ? ADV_UFCS(_operator_sub_ne)($this) : $this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getWrappingAbs($extension_Int64_557_i64 const & $this ) -> const $extension_Int64_557_i64
	{
		#line 1199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)($this.$ref()) ? ADV_UFCS(_operator_sub_mod)($this) : $this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getSaturatingAbs($extension_Int64_557_i64 const & $this ) -> const $extension_Int64_557_i64
	{
		#line 1202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)($this.$ref()) ? ADV_UFCS(_operator_sub_or)($this) : $this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getOverflowingAbs($extension_Int64_557_i64 const & $this ) -> const std::tuple<$extension_Int64_557_i64, bool>
	{
		#line 1207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (ADV_UPCS(IsNegative)($this.$ref())) {
			#line 1208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return ADV_UFCS(_operator_sub_mod_qst)($this);
		}
		#line 1210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return std::make_tuple($this, Builtin::Boolean(false));
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	
} namespace $extensions { using namespace System;
#line 1259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NextMultipleOf($extension_Int64_1214_i64 const& $this LIFETIMEBOUND, $extension_Int64_1214_i64 rhs)  -> const typename $extension_Int64_1214_i64
	{
		#line 1261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (rhs == Builtin::i32(-1)) {
			#line 1262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return $this;
		}
		#line 1265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		const Builtin::Auto<decltype($this % rhs)> remainder = $this % rhs; 
		#line 1266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		const Builtin::Auto<decltype(((remainder <=> Builtin::i32(0)) > 0 && (rhs <=> Builtin::i32(0)) < 0) || ((remainder <=> Builtin::i32(0)) < 0 && (rhs <=> Builtin::i32(0)) > 0) ? remainder + rhs : remainder)> mod = ((remainder <=> Builtin::i32(0)) > 0 && (rhs <=> Builtin::i32(0)) < 0) || ((remainder <=> Builtin::i32(0)) < 0 && (rhs <=> Builtin::i32(0)) > 0) ? remainder + rhs : remainder; 
		#line 1269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return mod == Builtin::i32(0) ? $this : $this + (rhs - mod);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto CheckedNextMultipleOf($extension_Int64_1214_i64 const& $this LIFETIMEBOUND, $extension_Int64_1214_i64 rhs) noexcept -> const Builtin::Nullable<$extension_Int64_1214_i64>
	{
		#line 1277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (rhs == Builtin::i32(-1)) {
			#line 1278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return $this;
		}
		#line 1281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		$extension_Int64_1214_i64 remainder{}; 
		#line 1282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (const auto r = ADV_UFCS(_operator_mod_qst)($this, rhs)) {
			{
				#line 1282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				auto __tmp0 = *r; const auto& r = __tmp0;
				
				#line 1283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				remainder = r;
			}
		} else {
			#line 1284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return nullptr;
		}
		#line 1286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		const Builtin::Auto<decltype(((remainder <=> Builtin::i32(0)) > 0 && (rhs <=> Builtin::i32(0)) < 0) || ((remainder <=> Builtin::i32(0)) < 0 && (rhs <=> Builtin::i32(0)) > 0) ? remainder + rhs : remainder)> mod = ((remainder <=> Builtin::i32(0)) > 0 && (rhs <=> Builtin::i32(0)) < 0) || ((remainder <=> Builtin::i32(0)) < 0 && (rhs <=> Builtin::i32(0)) > 0) ? remainder + rhs : remainder; 
		#line 1289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (mod == Builtin::i32(0)) {
			#line 1290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return $this;
		}
		#line 1292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return ADV_UFCS(_operator_add_qst)($this, (rhs - mod));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto $static_getIsSigned<$extension_Int64_1214_i64>::get() -> const bool
	{
		#line 1215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getTrailingZeroCount($extension_Int64_1214_i64 const & $this ) -> const Builtin::u32
	{
		#line 1217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::TrailingZeroCount($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getTrailingOneCount($extension_Int64_1214_i64 const & $this ) -> const Builtin::u32
	{
		#line 1218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::TrailingZeroCount(ADV_UFCS(_operator_not)($this))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getByteCount($extension_Int64_1214_i64 const & $this ) -> const Builtin::u32
	{
		#line 1219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u32>(Builtin::usize(sizeof($extension_Int64_1214_i64)))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getMinimalBitWidth($extension_Int64_1214_i64 const & $this ) -> const Builtin::u32
	{
		#line 1220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(BitWidth, $extension_Int64_1214_i64)() - ADV_UPCS(LeadingZeroCount)($this.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline auto getIsqrt($extension_Int64_1214_i64 const & $this ) -> const $extension_Int64_1214_i64
	{
		#line 1237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (const auto result = ADV_UPCS(CheckedIsqrt)($this.$ref())) {
			{
				#line 1237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 1238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				return result;
			}
		}
		#line 1240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getLog2Ceiling($extension_Int64_1214_i64 const & $this ) -> const $extension_Int64_1214_i64
	{
		#line 1247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Auto<decltype(ADV_UPCS(Log2)($this.$ref()))> result = ADV_UPCS(Log2)($this.$ref()); 
		#line 1248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (ADV_UPCS(PopCount)($this.$ref()) != Builtin::i32(1)) {
			#line 1249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			++result;
		}
		#line 1252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getPrevPow2($extension_Int64_1214_i64 const & $this ) -> const $extension_Int64_1214_i64
	{
		#line 1298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (($this <=> Builtin::i32(1)) <= 0) {
			#line 1299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return Builtin::i32(0);
		}
		#line 1302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return ADV_USPCS(One, $extension_Int64_1214_i64)() << (ADV_UPCS(MinimalBitWidth)($this.$ref()) - Builtin::i32(1));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getNextPow2($extension_Int64_1214_i64 const & $this ) -> const $extension_Int64_1214_i64
	{
		#line 1309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (($this <=> Builtin::i32(1)) <= 0) {
			#line 1310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return Builtin::i32(0);
		}
		#line 1313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		const Builtin::Auto<decltype($this - Builtin::i32(1))> p = $this - Builtin::i32(1); 
		#line 1314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return (ADV_USPCS(AllBitsSet, $extension_Int64_1214_i64)() >> ADV_UPCS(LeadingZeroCount)(p.$ref())) + Builtin::i32(1);
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getCheckedNextPow2($extension_Int64_1214_i64 const & $this ) -> const Builtin::Nullable<$extension_Int64_1214_i64>
	{
		#line 1321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (($this <=> Builtin::i32(1)) <= 0) {
			#line 1322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return Builtin::i64(0LL);
		}
		#line 1325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		const Builtin::Auto<decltype($this - Builtin::i64(1LL))> p = $this - Builtin::i64(1LL); 
		#line 1326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return ADV_UFCS(_operator_add_qst)((ADV_USPCS(AllBitsSet, $extension_Int64_1214_i64)() >> ADV_UPCS(LeadingZeroCount)(p.$ref())), Builtin::i64(1LL));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getWrappingNextPow2($extension_Int64_1214_i64 const & $this ) -> const $extension_Int64_1214_i64
	{
		#line 1333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (($this <=> Builtin::i32(1)) <= 0) {
			#line 1334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return Builtin::i64(0LL);
		}
		#line 1337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		const Builtin::Auto<decltype($this - Builtin::i64(1LL))> p = $this - Builtin::i64(1LL); 
		#line 1338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return ADV_UFCS(_operator_add_mod)((ADV_USPCS(AllBitsSet, $extension_Int64_1214_i64)() >> ADV_UPCS(LeadingZeroCount)(p.$ref())), Builtin::i64(1LL));
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	
} namespace $extensions { using namespace System;
#line 1375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto RotateLeft($extension_Int64_1342_i64 const& $this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename $extension_Int64_1342_i64
	{
		#line 1375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::BitsRotateLeft($this, shiftAmount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto RotateRight($extension_Int64_1342_i64 const& $this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename $extension_Int64_1342_i64
	{
		#line 1376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::BitsRotateRight($this, shiftAmount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto $static_getBitWidth<$extension_Int64_1342_i64>::get() -> const Builtin::u32
	{
		#line 1343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(64U)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getLeadingZeroCount($extension_Int64_1342_i64 const & $this ) -> const Builtin::u32
	{
		#line 1345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::LeadingZeroCount($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getLeadingOneCount($extension_Int64_1342_i64 const & $this ) -> const Builtin::u32
	{
		#line 1346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::LeadingZeroCount(ADV_UFCS(_operator_not)($this))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getPopCount($extension_Int64_1342_i64 const & $this ) -> const Builtin::u32
	{
		#line 1347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::PopCount($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getZeroCount($extension_Int64_1342_i64 const & $this ) -> const Builtin::u32
	{
		#line 1348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::PopCount(ADV_UFCS(_operator_not)($this))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getByteSwapped($extension_Int64_1342_i64 const & $this ) -> const $extension_Int64_1342_i64
	{
		#line 1349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i64>(Builtin::ByteSwap64(ADV_UFCS(NarrowToUInt64)($this.$ref())))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getBigEndian($extension_Int64_1342_i64 const & $this ) -> const $extension_Int64_1342_i64
	{
		#line 1352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if constexpr (Builtin::IsLittleEndian()) {
			#line 1353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return ADV_UPCS(ByteSwapped)($this.$ref());
		}
		#line 1355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return $this;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getLittleEndian($extension_Int64_1342_i64 const & $this ) -> const $extension_Int64_1342_i64
	{
		#line 1359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if constexpr (Builtin::IsBigEndian()) {
			#line 1360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return ADV_UPCS(ByteSwapped)($this.$ref());
		}
		#line 1362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return $this;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getReverseBits($extension_Int64_1342_i64 const & $this ) -> const $extension_Int64_1342_i64
	{
		#line 1364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::ReverseBits64($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getShortestBitLength($extension_Int64_1342_i64 const & $this ) -> const Builtin::u32
	{
		#line 1368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (($this <=> Builtin::i32(0)) >= 0) {
			#line 1369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return ADV_USPCS(BitWidth, $extension_Int64_1342_i64)() - ADV_UPCS(LeadingZeroCount)($this.$ref());
		}
		#line 1372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return ADV_USPCS(BitWidth, $extension_Int64_1342_i64)() + Builtin::u32(1U) - ADV_UPCS(LeadingOneCount)($this.$ref());
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	
} namespace $extensions { using namespace System;
#line 1388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto IsGreaterThanAsUnsigned($extension_Int64_1380_i64 const& $this LIFETIMEBOUND, $extension_Int64_1380_i64 rhs) noexcept -> const bool
	{
		#line 1388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY((ADV_UFCS(NarrowToUInt64)($this.$ref()) <=> ADV_UFCS(NarrowToUInt64)(rhs.$ref())) > 0); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto $static_getMaxDigitCount<$extension_Int64_1380_i64>::get() -> const Builtin::i32
	{
		#line 1381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(19)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto $static_getMaxHexDigitCount<$extension_Int64_1380_i64>::get() -> const Builtin::i32
	{
		#line 1382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(16)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto $static_getMaxValueDiv10<$extension_Int64_1380_i64>::get() -> const $extension_Int64_1380_i64
	{
		#line 1383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl)(ADV_USPCS(MaxValue, Builtin::i64)(), Builtin::i32(10))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getMultiplyBy10($extension_Int64_1380_i64 const & $this ) -> const $extension_Int64_1380_i64
	{
		#line 1385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_mod)($this, Builtin::i64(10LL))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getMultiplyBy16($extension_Int64_1380_i64 const & $this ) -> const $extension_Int64_1380_i64
	{
		#line 1386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_mod)($this, Builtin::i64(16LL))); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	

}