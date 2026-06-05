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
namespace __Unsafe {} namespace __UInt128_Protected__Unsafe {}
//###############################################################################
//# Global type aliases
//###############################################################################
#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
using UInt128 = Builtin::u128;
//###############################################################################
//# Type definitions
//###############################################################################
	} namespace __extensions { using namespace System;
#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	using __extension_UInt128_16_u128 = Builtin::u128;
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ADV_CHECK_INTERFACE(IMinMaxValue, IMinMaxValue);
	#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class __TT> struct __static_getMinValue; template<> struct __static_getMinValue<__extension_UInt128_16_u128> { static inline constexpr auto get() -> const __extension_UInt128_16_u128; };
	#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class __TT> struct __static_getMaxValue; template<> struct __static_getMaxValue<__extension_UInt128_16_u128> { static inline constexpr auto get() -> const __extension_UInt128_16_u128; };
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(u128, IMinMaxValue, IMinMaxValue, u128);
	} namespace System{
using __extensions::__static_getMinValue;
using __extensions::__static_getMaxValue;

		} namespace __extensions { using namespace System;
#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	using __extension_UInt128_21_u128 = Builtin::u128;
	#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ASTRUMSTD_API auto _operator_eq_eq_mul(__extension_UInt128_21_u128 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool;
	#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto operator<=>(__extension_UInt128_21_u128 const& __this LIFETIMEBOUND, Builtin::Nullable<__extension_UInt128_21_u128> rhs) noexcept -> const Builtin::i32;
	#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_gt_gt_gt(__extension_UInt128_21_u128 const& __this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename __extension_UInt128_21_u128;
	#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_gt_gt_gt_eq(__extension_UInt128_21_u128 & __this , Builtin::i32 amount)  -> typename __extension_UInt128_21_u128&;
	#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_lt_lt_bsl(__extension_UInt128_21_u128 const& __this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename __extension_UInt128_21_u128;
	#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_lt_lt_bsl_eq(__extension_UInt128_21_u128 & __this , Builtin::u32 amount) noexcept -> typename __extension_UInt128_21_u128&;
	#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_gt_gt_bsl(__extension_UInt128_21_u128 const& __this LIFETIMEBOUND, Builtin::u128 amount) noexcept -> const typename __extension_UInt128_21_u128;
	#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_gt_gt_bsl_eq(__extension_UInt128_21_u128 & __this , Builtin::u128 amount) noexcept -> typename __extension_UInt128_21_u128&;
	#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getHashCode(__extension_UInt128_21_u128 const& __this ) -> const Builtin::u64;
	} namespace System{
using __extensions::_operator_eq_eq_mul;
using __extensions::operator<=>;
using __extensions::_operator_gt_gt_gt;
using __extensions::_operator_gt_gt_gt_eq;
using __extensions::_operator_lt_lt_bsl;
using __extensions::_operator_lt_lt_bsl_eq;
using __extensions::_operator_gt_gt_bsl;
using __extensions::_operator_gt_gt_bsl_eq;
using __extensions::getHashCode;

		} namespace __extensions { using namespace System;
#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	using __extension_UInt128_90_u128 = Builtin::u128;
	#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ADV_CHECK_INTERFACE(IAbstractComparable, IAbstractComparable);
	#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ASTRUMSTD_API auto _operator_lt_eq_gt_mul(__extension_UInt128_90_u128 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32;
	#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(u128, IAbstractComparable, IAbstractComparable, u128);
	} namespace System{
using __extensions::_operator_lt_eq_gt_mul;

		} namespace __extensions { using namespace System;
#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	using __extension_UInt128_105_u128 = Builtin::u128;
	#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ADV_CHECK_INTERFACE(IConvertible, IConvertible);
	#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToBoolean(__extension_UInt128_105_u128 const& __this LIFETIMEBOUND) noexcept -> const bool;
	#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToInt8(__extension_UInt128_105_u128 const& __this LIFETIMEBOUND)  -> const Builtin::i8;
	#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToUInt8(__extension_UInt128_105_u128 const& __this LIFETIMEBOUND)  -> const Builtin::u8;
	#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToInt16(__extension_UInt128_105_u128 const& __this LIFETIMEBOUND)  -> const Builtin::i16;
	#line 125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToUInt16(__extension_UInt128_105_u128 const& __this LIFETIMEBOUND)  -> const Builtin::u16;
	#line 131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToInt32(__extension_UInt128_105_u128 const& __this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToUInt32(__extension_UInt128_105_u128 const& __this LIFETIMEBOUND)  -> const Builtin::u32;
	#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToInt64(__extension_UInt128_105_u128 const& __this LIFETIMEBOUND)  -> const Builtin::i64;
	#line 149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToUInt64(__extension_UInt128_105_u128 const& __this LIFETIMEBOUND)  -> const Builtin::u64;
	#line 155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToInt128(__extension_UInt128_105_u128 const& __this LIFETIMEBOUND)  -> const Builtin::i128;
	#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToUInt128(__extension_UInt128_105_u128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u128;
	#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToIsize(__extension_UInt128_105_u128 const& __this LIFETIMEBOUND)  -> const Builtin::isize;
	#line 170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToUsize(__extension_UInt128_105_u128 const& __this LIFETIMEBOUND)  -> const Builtin::usize;
	#line 178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToFloat32(__extension_UInt128_105_u128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::f32;
	#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToFloat64(__extension_UInt128_105_u128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::f64;
	#line 180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToByte(__extension_UInt128_105_u128 const& __this LIFETIMEBOUND)  -> const Builtin::char8;
	#line 186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToChar(__extension_UInt128_105_u128 const& __this LIFETIMEBOUND)  -> const Builtin::char16;
	#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(u128, IConvertible, IConvertible, u128);
	} namespace System{
using __extensions::ToBoolean;
using __extensions::ToInt8;
using __extensions::ToUInt8;
using __extensions::ToInt16;
using __extensions::ToUInt16;
using __extensions::ToInt32;
using __extensions::ToUInt32;
using __extensions::ToInt64;
using __extensions::ToUInt64;
using __extensions::ToInt128;
using __extensions::ToUInt128;
using __extensions::ToIsize;
using __extensions::ToUsize;
using __extensions::ToFloat32;
using __extensions::ToFloat64;
using __extensions::ToByte;
using __extensions::ToChar;

		} namespace __extensions { using namespace System;
#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	using __extension_UInt128_197_u128 = Builtin::u128;
	#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ADV_CHECK_INTERFACE(IDivisibleArithmetic, IDivisibleArithmetic);
	#line 199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_div_mod(__extension_UInt128_197_u128 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_UInt128_197_u128, __extension_UInt128_197_u128>;
	#line 205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_div_not(__extension_UInt128_197_u128 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt128_197_u128;
	#line 212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_div_not_eq(__extension_UInt128_197_u128 & __this , auto rhs)  -> typename __extension_UInt128_197_u128&;
	#line 214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_div_lt(__extension_UInt128_197_u128 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt128_197_u128;
	#line 223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_div_lt_eq(__extension_UInt128_197_u128 & __this , auto rhs)  -> typename __extension_UInt128_197_u128&;
	#line 225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_div_gt(__extension_UInt128_197_u128 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt128_197_u128;
	#line 235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_div_gt_eq(__extension_UInt128_197_u128 & __this , auto rhs)  -> typename __extension_UInt128_197_u128&;
	#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(u128, IDivisibleArithmetic, IDivisibleArithmetic, u128);
	} namespace System{
using __extensions::_operator_div_mod;
using __extensions::_operator_div_not;
using __extensions::_operator_div_not_eq;
using __extensions::_operator_div_lt;
using __extensions::_operator_div_lt_eq;
using __extensions::_operator_div_gt;
using __extensions::_operator_div_gt_eq;

		} namespace __extensions { using namespace System;
#line 238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	using __extension_UInt128_238_u128 = Builtin::u128;
	#line 238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ADV_CHECK_INTERFACE(IIntegerDivisibleArithmetic, IIntegerDivisibleArithmetic);
	#line 240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_bsl(__extension_UInt128_238_u128 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt128_238_u128;
	#line 242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_bsl_eq(__extension_UInt128_238_u128 & __this , T rhs)  -> typename __extension_UInt128_238_u128&;
	#line 247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl(__extension_UInt128_238_u128 const& __this LIFETIMEBOUND, T rhs)  -> const Builtin::Nullable<__extension_UInt128_238_u128>;
	#line 238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(u128, IIntegerDivisibleArithmetic, IIntegerDivisibleArithmetic, u128);
	} namespace System{
using __extensions::_operator_bsl;
using __extensions::_operator_bsl_eq;
using __extensions::_operator_bsl_bsl;

		} namespace __extensions { using namespace System;
#line 258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	using __extension_UInt128_258_u128 = Builtin::u128;
	#line 258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ADV_CHECK_INTERFACE(IIntegerPowerArithmetic, IIntegerPowerArithmetic);
	#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_xor_xor(__extension_UInt128_258_u128 const& __this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename __extension_UInt128_258_u128;
	#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_xor_xor_eq(__extension_UInt128_258_u128 & __this , Builtin::u32 exp)  -> typename __extension_UInt128_258_u128&;
	#line 258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(u128, IIntegerPowerArithmetic, IIntegerPowerArithmetic, u128);
	} namespace System{
using __extensions::_operator_xor_xor;
using __extensions::_operator_xor_xor_eq;

		} namespace __extensions { using namespace System;
#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	using __extension_UInt128_296_u128 = Builtin::u128;
	#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ADV_CHECK_INTERFACE(INumberBase, INumberBase);
	#line 320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto MaxMagnitude(__extension_UInt128_296_u128 const& __this LIFETIMEBOUND, __extension_UInt128_296_u128 rhs) noexcept -> const typename __extension_UInt128_296_u128;
	#line 321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto MaxMagnitudeNumber(__extension_UInt128_296_u128 const& __this LIFETIMEBOUND, __extension_UInt128_296_u128 rhs) noexcept -> const typename __extension_UInt128_296_u128;
	#line 323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto MinMagnitude(__extension_UInt128_296_u128 const& __this LIFETIMEBOUND, __extension_UInt128_296_u128 rhs) noexcept -> const typename __extension_UInt128_296_u128;
	#line 324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto MinMagnitudeNumber(__extension_UInt128_296_u128 const& __this LIFETIMEBOUND, __extension_UInt128_296_u128 rhs) noexcept -> const typename __extension_UInt128_296_u128;
	#line 326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ASTRUMSTD_API auto Parse(__extension_UInt128_296_u128 const& __this LIFETIMEBOUND, Builtin::Str input)  -> const typename __extension_UInt128_296_u128;
	#line 331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ASTRUMSTD_API auto TryParse(__extension_UInt128_296_u128 const& __this LIFETIMEBOUND, Builtin::Str input) noexcept -> const Builtin::Nullable<__extension_UInt128_296_u128>;
	#line 337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto NarrowToInt8(__extension_UInt128_296_u128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i8;
	#line 338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto NarrowToUInt8(__extension_UInt128_296_u128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u8;
	#line 339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto NarrowToInt16(__extension_UInt128_296_u128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i16;
	#line 340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto NarrowToUInt16(__extension_UInt128_296_u128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u16;
	#line 341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto NarrowToInt32(__extension_UInt128_296_u128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i32;
	#line 342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto NarrowToUInt32(__extension_UInt128_296_u128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u32;
	#line 343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto NarrowToInt64(__extension_UInt128_296_u128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i64;
	#line 344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto NarrowToUInt64(__extension_UInt128_296_u128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u64;
	#line 345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto NarrowToInt128(__extension_UInt128_296_u128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i128;
	#line 346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto NarrowToUInt128(__extension_UInt128_296_u128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u128;
	#line 347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto NarrowToIsize(__extension_UInt128_296_u128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::isize;
	#line 348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto NarrowToUsize(__extension_UInt128_296_u128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::usize;
	#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class __TT> struct __static_getOne; template<> struct __static_getOne<__extension_UInt128_296_u128> { static inline constexpr auto get() -> const __extension_UInt128_296_u128; };
	#line 298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class __TT> struct __static_getZero; template<> struct __static_getZero<__extension_UInt128_296_u128> { static inline constexpr auto get() -> const __extension_UInt128_296_u128; };
	#line 299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class __TT> struct __static_getRadix; template<> struct __static_getRadix<__extension_UInt128_296_u128> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getAbs(__extension_UInt128_296_u128 const& __this ) -> const __extension_UInt128_296_u128;
	#line 302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsCanonical(__extension_UInt128_296_u128 const& __this ) -> const bool;
	#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsComplexNumber(__extension_UInt128_296_u128 const& __this ) -> const bool;
	#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsEvenInteger(__extension_UInt128_296_u128 const& __this ) -> const bool;
	#line 305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsFinite(__extension_UInt128_296_u128 const& __this ) -> const bool;
	#line 306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsImaginaryNumber(__extension_UInt128_296_u128 const& __this ) -> const bool;
	#line 307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsInfinity(__extension_UInt128_296_u128 const& __this ) -> const bool;
	#line 308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsInteger(__extension_UInt128_296_u128 const& __this ) -> const bool;
	#line 309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsNaN(__extension_UInt128_296_u128 const& __this ) -> const bool;
	#line 310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsNegative(__extension_UInt128_296_u128 const& __this ) -> const bool;
	#line 311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsNegativeInfinity(__extension_UInt128_296_u128 const& __this ) -> const bool;
	#line 312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsNormal(__extension_UInt128_296_u128 const& __this ) -> const bool;
	#line 313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsOddInteger(__extension_UInt128_296_u128 const& __this ) -> const bool;
	#line 314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsPositive(__extension_UInt128_296_u128 const& __this ) -> const bool;
	#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsPositiveInfinity(__extension_UInt128_296_u128 const& __this ) -> const bool;
	#line 316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsRealNumber(__extension_UInt128_296_u128 const& __this ) -> const bool;
	#line 317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsSubnormal(__extension_UInt128_296_u128 const& __this ) -> const bool;
	#line 318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsZero(__extension_UInt128_296_u128 const& __this ) -> const bool;
	#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(u128, INumberBase, INumberBase, u128);
	} namespace System{
using __extensions::MaxMagnitude;
using __extensions::MaxMagnitudeNumber;
using __extensions::MinMagnitude;
using __extensions::MinMagnitudeNumber;
using __extensions::Parse;
using __extensions::TryParse;
using __extensions::NarrowToInt8;
using __extensions::NarrowToUInt8;
using __extensions::NarrowToInt16;
using __extensions::NarrowToUInt16;
using __extensions::NarrowToInt32;
using __extensions::NarrowToUInt32;
using __extensions::NarrowToInt64;
using __extensions::NarrowToUInt64;
using __extensions::NarrowToInt128;
using __extensions::NarrowToUInt128;
using __extensions::NarrowToIsize;
using __extensions::NarrowToUsize;
using __extensions::__static_getOne;
using __extensions::__static_getZero;
using __extensions::__static_getRadix;
using __extensions::getAbs;
using __extensions::getIsCanonical;
using __extensions::getIsComplexNumber;
using __extensions::getIsEvenInteger;
using __extensions::getIsFinite;
using __extensions::getIsImaginaryNumber;
using __extensions::getIsInfinity;
using __extensions::getIsInteger;
using __extensions::getIsNaN;
using __extensions::getIsNegative;
using __extensions::getIsNegativeInfinity;
using __extensions::getIsNormal;
using __extensions::getIsOddInteger;
using __extensions::getIsPositive;
using __extensions::getIsPositiveInfinity;
using __extensions::getIsRealNumber;
using __extensions::getIsSubnormal;
using __extensions::getIsZero;

		} namespace __extensions { using namespace System;
#line 351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	using __extension_UInt128_351_u128 = Builtin::u128;
	#line 351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ADV_CHECK_INTERFACE(IUnsignedNumber, IUnsignedNumber);
	#line 351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(u128, IUnsignedNumber, IUnsignedNumber, u128);
	} namespace System{

		} namespace __extensions { using namespace System;
#line 355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	using __extension_UInt128_355_u128 = Builtin::u128;
	#line 355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ADV_CHECK_INTERFACE(INumber, INumber);
	#line 358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto CopySign(__extension_UInt128_355_u128 const& __this LIFETIMEBOUND, __extension_UInt128_355_u128 sign) noexcept -> const typename __extension_UInt128_355_u128;
	#line 360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto Max(__extension_UInt128_355_u128 const& __this LIFETIMEBOUND, __extension_UInt128_355_u128 rhs) noexcept -> const typename __extension_UInt128_355_u128;
	#line 361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto MaxNumber(__extension_UInt128_355_u128 const& __this LIFETIMEBOUND, __extension_UInt128_355_u128 rhs) noexcept -> const typename __extension_UInt128_355_u128;
	#line 362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto Min(__extension_UInt128_355_u128 const& __this LIFETIMEBOUND, __extension_UInt128_355_u128 rhs) noexcept -> const typename __extension_UInt128_355_u128;
	#line 363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto MinNumber(__extension_UInt128_355_u128 const& __this LIFETIMEBOUND, __extension_UInt128_355_u128 rhs) noexcept -> const typename __extension_UInt128_355_u128;
	#line 364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto Clamp(__extension_UInt128_355_u128 const& __this LIFETIMEBOUND, __extension_UInt128_355_u128 min, __extension_UInt128_355_u128 max)  -> const typename __extension_UInt128_355_u128;
	#line 356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getSign(__extension_UInt128_355_u128 const& __this ) -> const Builtin::i32;
	#line 355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(u128, INumber, INumber, u128);
	} namespace System{
using __extensions::CopySign;
using __extensions::Max;
using __extensions::MaxNumber;
using __extensions::Min;
using __extensions::MinNumber;
using __extensions::Clamp;
using __extensions::getSign;

		} namespace __extensions { using namespace System;
#line 378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	using __extension_UInt128_378_u128 = Builtin::u128;
	#line 378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ADV_CHECK_INTERFACE(IBinaryNumber, IBinaryNumber);
	#line 456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto CheckedLog(__extension_UInt128_378_u128 const& __this LIFETIMEBOUND, __extension_UInt128_378_u128 base) noexcept -> const Builtin::Nullable<__extension_UInt128_378_u128>;
	#line 489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ASTRUMSTD_API auto Log(__extension_UInt128_378_u128 const& __this LIFETIMEBOUND, __extension_UInt128_378_u128 base)  -> const typename __extension_UInt128_378_u128;
	#line 499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto Midpoint(__extension_UInt128_378_u128 const& __this LIFETIMEBOUND, __extension_UInt128_378_u128 rhs) noexcept -> const typename __extension_UInt128_378_u128;
	#line 502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto IsMultipleOf(__extension_UInt128_378_u128 const& __this LIFETIMEBOUND, __extension_UInt128_378_u128 rhs) noexcept -> const bool;
	#line 380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class __TT> struct __static_getAllBitsSet; template<> struct __static_getAllBitsSet<__extension_UInt128_378_u128> { static inline constexpr auto get() -> const __extension_UInt128_378_u128; };
	#line 383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsPow2(__extension_UInt128_378_u128 const& __this ) -> const bool;
	#line 387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getCheckedLog2(__extension_UInt128_378_u128 const& __this ) -> const Builtin::Nullable<__extension_UInt128_378_u128>;
	#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getLog2(__extension_UInt128_378_u128 const& __this ) -> const __extension_UInt128_378_u128;
	#line 407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getCheckedLog10(__extension_UInt128_378_u128 const& __this ) -> const Builtin::Nullable<__extension_UInt128_378_u128>;
	#line 446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getLog10(__extension_UInt128_378_u128 const& __this ) -> const __extension_UInt128_378_u128;
	#line 378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(u128, IBinaryNumber, IBinaryNumber, u128);
	} namespace System{
using __extensions::CheckedLog;
using __extensions::Log;
using __extensions::Midpoint;
using __extensions::IsMultipleOf;
using __extensions::__static_getAllBitsSet;
using __extensions::getIsPow2;
using __extensions::getCheckedLog2;
using __extensions::getLog2;
using __extensions::getCheckedLog10;
using __extensions::getLog10;

		} namespace __extensions { using namespace System;
#line 512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	using __extension_UInt128_512_u128 = Builtin::u128;
	#line 512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ADV_CHECK_INTERFACE(ICheckedArithmetic, ICheckedArithmetic);
	#line 515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_add_qst(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_UInt128_512_u128>;
	#line 524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_add_qst_eq(__extension_UInt128_512_u128 & __this , T rhs) noexcept -> typename __extension_UInt128_512_u128&;
	#line 535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_add_ne(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt128_512_u128;
	#line 542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_add_ne_eq(__extension_UInt128_512_u128 & __this , T rhs)  -> typename __extension_UInt128_512_u128&;
	#line 546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_add_mod(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_UInt128_512_u128;
	#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_add_mod_eq(__extension_UInt128_512_u128 & __this , T rhs) noexcept -> typename __extension_UInt128_512_u128&;
	#line 557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_add_or(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_UInt128_512_u128;
	#line 564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_add_or_eq(__extension_UInt128_512_u128 & __this , T rhs) noexcept -> typename __extension_UInt128_512_u128&;
	#line 568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_add_mod_qst(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<__extension_UInt128_512_u128, bool>;
	#line 576 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_qst(__extension_UInt128_512_u128 & __this )  -> typename __extension_UInt128_512_u128&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_qst_postfix(__extension_UInt128_512_u128 & __this)  -> decltype(auto);
	#line 579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_ne(__extension_UInt128_512_u128 & __this )  -> typename __extension_UInt128_512_u128&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_ne_postfix(__extension_UInt128_512_u128 & __this)  -> decltype(auto);
	#line 582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_mod(__extension_UInt128_512_u128 & __this )  -> typename __extension_UInt128_512_u128&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_mod_postfix(__extension_UInt128_512_u128 & __this)  -> decltype(auto);
	#line 585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_or(__extension_UInt128_512_u128 & __this )  -> typename __extension_UInt128_512_u128&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_or_postfix(__extension_UInt128_512_u128 & __this)  -> decltype(auto);
	#line 589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto CarryingAdd(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, __extension_UInt128_512_u128 rhs, bool carry) noexcept -> const std::tuple<__extension_UInt128_512_u128, bool>;
	#line 598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto BorrowingSub(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, __extension_UInt128_512_u128 rhs, bool carry) noexcept -> const std::tuple<__extension_UInt128_512_u128, bool>;
	#line 607 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_sub_qst(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_UInt128_512_u128>;
	#line 616 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_sub_qst_eq(__extension_UInt128_512_u128 & __this , T rhs) noexcept -> typename __extension_UInt128_512_u128&;
	#line 627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_sub_ne(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt128_512_u128;
	#line 634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_sub_ne_eq(__extension_UInt128_512_u128 & __this , T rhs)  -> typename __extension_UInt128_512_u128&;
	#line 638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_sub_mod(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_UInt128_512_u128;
	#line 645 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_sub_mod_eq(__extension_UInt128_512_u128 & __this , T rhs) noexcept -> typename __extension_UInt128_512_u128&;
	#line 649 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_sub_or(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_UInt128_512_u128;
	#line 656 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_sub_or_eq(__extension_UInt128_512_u128 & __this , T rhs) noexcept -> typename __extension_UInt128_512_u128&;
	#line 660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_sub_mod_qst(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<__extension_UInt128_512_u128, bool>;
	#line 668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_qst(__extension_UInt128_512_u128 & __this )  -> typename __extension_UInt128_512_u128&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_qst_postfix(__extension_UInt128_512_u128 & __this)  -> decltype(auto);
	#line 671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_ne(__extension_UInt128_512_u128 & __this )  -> typename __extension_UInt128_512_u128&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_ne_postfix(__extension_UInt128_512_u128 & __this)  -> decltype(auto);
	#line 674 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_mod(__extension_UInt128_512_u128 & __this )  -> typename __extension_UInt128_512_u128&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_mod_postfix(__extension_UInt128_512_u128 & __this)  -> decltype(auto);
	#line 677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_or(__extension_UInt128_512_u128 & __this )  -> typename __extension_UInt128_512_u128&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_or_postfix(__extension_UInt128_512_u128 & __this)  -> decltype(auto);
	#line 681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mul_qst(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_UInt128_512_u128>;
	#line 690 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mul_qst_eq(__extension_UInt128_512_u128 & __this , T rhs) noexcept -> typename __extension_UInt128_512_u128&;
	#line 701 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mul_ne(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt128_512_u128;
	#line 708 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mul_ne_eq(__extension_UInt128_512_u128 & __this , T rhs)  -> typename __extension_UInt128_512_u128&;
	#line 712 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mul_mod(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_UInt128_512_u128;
	#line 719 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mul_mod_eq(__extension_UInt128_512_u128 & __this , T rhs) noexcept -> typename __extension_UInt128_512_u128&;
	#line 723 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mul_or(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_UInt128_512_u128;
	#line 730 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mul_or_eq(__extension_UInt128_512_u128 & __this , T rhs) noexcept -> typename __extension_UInt128_512_u128&;
	#line 734 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mul_mod_qst(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<__extension_UInt128_512_u128, bool>;
	#line 743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_mul_gt(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, __extension_UInt128_512_u128 rhs) noexcept -> const std::tuple<Builtin::u128, Builtin::u128>;
	#line 752 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto CarryingMul(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, __extension_UInt128_512_u128 rhs, __extension_UInt128_512_u128 carry) noexcept -> const std::tuple<Builtin::u128, Builtin::u128>;
	#line 760 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_bsl_qst(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_UInt128_512_u128>;
	#line 769 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_bsl_qst_eq(__extension_UInt128_512_u128 & __this , T rhs) noexcept -> typename __extension_UInt128_512_u128&;
	#line 780 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_bsl_ne(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt128_512_u128;
	#line 781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_bsl_ne_eq(__extension_UInt128_512_u128 & __this , T rhs)  -> typename __extension_UInt128_512_u128&;
	#line 785 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_bsl_mod(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt128_512_u128;
	#line 786 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_eq(__extension_UInt128_512_u128 & __this , T rhs)  -> typename __extension_UInt128_512_u128&;
	#line 790 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_bsl_or(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt128_512_u128;
	#line 791 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_bsl_or_eq(__extension_UInt128_512_u128 & __this , T rhs)  -> typename __extension_UInt128_512_u128&;
	#line 796 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> auto _operator_bsl_mod_qst(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_UInt128_512_u128, bool>;
	#line 805 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_UInt128_512_u128>;
	#line 815 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst_eq(__extension_UInt128_512_u128 & __this , T rhs) noexcept -> typename __extension_UInt128_512_u128&;
	#line 826 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mod_qst(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_UInt128_512_u128>;
	#line 835 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mod_qst_eq(__extension_UInt128_512_u128 & __this , T rhs) noexcept -> typename __extension_UInt128_512_u128&;
	#line 846 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mod_ne(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt128_512_u128;
	#line 847 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mod_ne_eq(__extension_UInt128_512_u128 & __this , T rhs)  -> typename __extension_UInt128_512_u128&;
	#line 851 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mod_mod(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt128_512_u128;
	#line 852 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mod_mod_eq(__extension_UInt128_512_u128 & __this , T rhs)  -> typename __extension_UInt128_512_u128&;
	#line 857 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mod_mod_qst(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_UInt128_512_u128, bool>;
	#line 866 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_sub_qst(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::Nullable<__extension_UInt128_512_u128>;
	#line 869 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline auto _operator_sub_ne(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND)  -> const typename __extension_UInt128_512_u128;
	#line 874 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_sub_mod(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND)  -> const typename __extension_UInt128_512_u128;
	#line 882 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_sub_or(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND)  -> const typename __extension_UInt128_512_u128;
	#line 885 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_sub_mod_qst(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND)  -> const std::tuple<__extension_UInt128_512_u128, bool>;
	#line 893 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_lt_lt_qst(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<__extension_UInt128_512_u128>;
	#line 901 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_lt_lt_qst_eq(__extension_UInt128_512_u128 & __this , Builtin::i32 amount) noexcept -> typename __extension_UInt128_512_u128&;
	#line 909 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_lt_lt_ne(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename __extension_UInt128_512_u128;
	#line 917 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_lt_lt_ne_eq(__extension_UInt128_512_u128 & __this , Builtin::i32 amount)  -> typename __extension_UInt128_512_u128&;
	#line 919 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_lt_lt_mod(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename __extension_UInt128_512_u128;
	#line 922 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_lt_lt_mod_eq(__extension_UInt128_512_u128 & __this , Builtin::i32 amount) noexcept -> typename __extension_UInt128_512_u128&;
	#line 924 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_lt_lt_mod_qst(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<__extension_UInt128_512_u128, bool>;
	#line 927 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_gt_gt_qst(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<__extension_UInt128_512_u128>;
	#line 935 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_gt_gt_qst_eq(__extension_UInt128_512_u128 & __this , Builtin::i32 amount) noexcept -> typename __extension_UInt128_512_u128&;
	#line 943 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_gt_gt_ne(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename __extension_UInt128_512_u128;
	#line 951 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_gt_gt_ne_eq(__extension_UInt128_512_u128 & __this , Builtin::i32 amount)  -> typename __extension_UInt128_512_u128&;
	#line 953 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_gt_gt_mod(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename __extension_UInt128_512_u128;
	#line 956 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_gt_gt_mod_eq(__extension_UInt128_512_u128 & __this , Builtin::i32 amount) noexcept -> typename __extension_UInt128_512_u128&;
	#line 958 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_gt_gt_mod_qst(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<__extension_UInt128_512_u128, bool>;
	#line 963 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_xor_xor_qst(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const Builtin::Nullable<__extension_UInt128_512_u128>;
	#line 992 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_xor_xor_qst_eq(__extension_UInt128_512_u128 & __this , Builtin::u32 exp) noexcept -> typename __extension_UInt128_512_u128&;
	#line 1000 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_xor_xor_ne(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename __extension_UInt128_512_u128;
	#line 1021 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_xor_xor_ne_eq(__extension_UInt128_512_u128 & __this , Builtin::u32 exp)  -> typename __extension_UInt128_512_u128&;
	#line 1023 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_xor_xor_mod(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename __extension_UInt128_512_u128;
	#line 1055 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_xor_xor_mod_eq(__extension_UInt128_512_u128 & __this , Builtin::u32 exp) noexcept -> typename __extension_UInt128_512_u128&;
	#line 1057 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_xor_xor_or(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename __extension_UInt128_512_u128;
	#line 1066 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_xor_xor_or_eq(__extension_UInt128_512_u128 & __this , Builtin::u32 exp) noexcept -> typename __extension_UInt128_512_u128&;
	#line 1068 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_xor_xor_mod_qst(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const std::tuple<__extension_UInt128_512_u128, bool>;
	#line 1098 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getCheckedAbs(__extension_UInt128_512_u128 const& __this ) -> const Builtin::Nullable<__extension_UInt128_512_u128>;
	#line 1100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getStrictAbs(__extension_UInt128_512_u128 const& __this ) -> const __extension_UInt128_512_u128;
	#line 1102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getWrappingAbs(__extension_UInt128_512_u128 const& __this ) -> const __extension_UInt128_512_u128;
	#line 1104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getSaturatingAbs(__extension_UInt128_512_u128 const& __this ) -> const __extension_UInt128_512_u128;
	#line 1106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getOverflowingAbs(__extension_UInt128_512_u128 const& __this ) -> const std::tuple<__extension_UInt128_512_u128, bool>;
	#line 512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(u128, ICheckedArithmetic, ICheckedArithmetic, u128);
	} namespace System{
using __extensions::_operator_add_qst;
using __extensions::_operator_add_qst_eq;
using __extensions::_operator_add_ne;
using __extensions::_operator_add_ne_eq;
using __extensions::_operator_add_mod;
using __extensions::_operator_add_mod_eq;
using __extensions::_operator_add_or;
using __extensions::_operator_add_or_eq;
using __extensions::_operator_add_mod_qst;
using __extensions::_operator_add_add_qst;
using __extensions::_operator_add_add_ne;
using __extensions::_operator_add_add_mod;
using __extensions::_operator_add_add_or;
using __extensions::CarryingAdd;
using __extensions::BorrowingSub;
using __extensions::_operator_sub_qst;
using __extensions::_operator_sub_qst_eq;
using __extensions::_operator_sub_ne;
using __extensions::_operator_sub_ne_eq;
using __extensions::_operator_sub_mod;
using __extensions::_operator_sub_mod_eq;
using __extensions::_operator_sub_or;
using __extensions::_operator_sub_or_eq;
using __extensions::_operator_sub_mod_qst;
using __extensions::_operator_sub_sub_qst;
using __extensions::_operator_sub_sub_ne;
using __extensions::_operator_sub_sub_mod;
using __extensions::_operator_sub_sub_or;
using __extensions::_operator_mul_qst;
using __extensions::_operator_mul_qst_eq;
using __extensions::_operator_mul_ne;
using __extensions::_operator_mul_ne_eq;
using __extensions::_operator_mul_mod;
using __extensions::_operator_mul_mod_eq;
using __extensions::_operator_mul_or;
using __extensions::_operator_mul_or_eq;
using __extensions::_operator_mul_mod_qst;
using __extensions::_operator_mul_gt;
using __extensions::CarryingMul;
using __extensions::_operator_bsl_qst;
using __extensions::_operator_bsl_qst_eq;
using __extensions::_operator_bsl_ne;
using __extensions::_operator_bsl_ne_eq;
using __extensions::_operator_bsl_mod;
using __extensions::_operator_bsl_mod_eq;
using __extensions::_operator_bsl_or;
using __extensions::_operator_bsl_or_eq;
using __extensions::_operator_bsl_mod_qst;
using __extensions::_operator_bsl_bsl_qst;
using __extensions::_operator_bsl_bsl_qst_eq;
using __extensions::_operator_mod_qst;
using __extensions::_operator_mod_qst_eq;
using __extensions::_operator_mod_ne;
using __extensions::_operator_mod_ne_eq;
using __extensions::_operator_mod_mod;
using __extensions::_operator_mod_mod_eq;
using __extensions::_operator_mod_mod_qst;
using __extensions::_operator_sub_qst;
using __extensions::_operator_sub_ne;
using __extensions::_operator_sub_mod;
using __extensions::_operator_sub_or;
using __extensions::_operator_sub_mod_qst;
using __extensions::_operator_lt_lt_qst;
using __extensions::_operator_lt_lt_qst_eq;
using __extensions::_operator_lt_lt_ne;
using __extensions::_operator_lt_lt_ne_eq;
using __extensions::_operator_lt_lt_mod;
using __extensions::_operator_lt_lt_mod_eq;
using __extensions::_operator_lt_lt_mod_qst;
using __extensions::_operator_gt_gt_qst;
using __extensions::_operator_gt_gt_qst_eq;
using __extensions::_operator_gt_gt_ne;
using __extensions::_operator_gt_gt_ne_eq;
using __extensions::_operator_gt_gt_mod;
using __extensions::_operator_gt_gt_mod_eq;
using __extensions::_operator_gt_gt_mod_qst;
using __extensions::_operator_xor_xor_qst;
using __extensions::_operator_xor_xor_qst_eq;
using __extensions::_operator_xor_xor_ne;
using __extensions::_operator_xor_xor_ne_eq;
using __extensions::_operator_xor_xor_mod;
using __extensions::_operator_xor_xor_mod_eq;
using __extensions::_operator_xor_xor_or;
using __extensions::_operator_xor_xor_or_eq;
using __extensions::_operator_xor_xor_mod_qst;
using __extensions::getCheckedAbs;
using __extensions::getStrictAbs;
using __extensions::getWrappingAbs;
using __extensions::getSaturatingAbs;
using __extensions::getOverflowingAbs;

		} namespace __extensions { using namespace System;
#line 1109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	using __extension_UInt128_1109_u128 = Builtin::u128;
	#line 1109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ADV_CHECK_INTERFACE(IBinaryInteger, IBinaryInteger);
	#line 1154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto NextMultipleOf(__extension_UInt128_1109_u128 const& __this LIFETIMEBOUND, __extension_UInt128_1109_u128 rhs)  -> const typename __extension_UInt128_1109_u128;
	#line 1162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto CheckedNextMultipleOf(__extension_UInt128_1109_u128 const& __this LIFETIMEBOUND, __extension_UInt128_1109_u128 rhs) noexcept -> const Builtin::Nullable<__extension_UInt128_1109_u128>;
	#line 1110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class __TT> struct __static_getIsSigned; template<> struct __static_getIsSigned<__extension_UInt128_1109_u128> { static inline constexpr auto get() -> const bool; };
	#line 1112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getTrailingZeroCount(__extension_UInt128_1109_u128 const& __this ) -> const Builtin::u32;
	#line 1119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getTrailingOneCount(__extension_UInt128_1109_u128 const& __this ) -> const Builtin::u32;
	#line 1120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getByteCount(__extension_UInt128_1109_u128 const& __this ) -> const Builtin::u32;
	#line 1121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getMinimalBitWidth(__extension_UInt128_1109_u128 const& __this ) -> const Builtin::u32;
	#line 1124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ASTRUMSTD_API auto getCheckedIsqrt(__extension_UInt128_1109_u128 const& __this ) -> const Builtin::Nullable<__extension_UInt128_1109_u128>;
	#line 1131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline auto getIsqrt(__extension_UInt128_1109_u128 const& __this ) -> const __extension_UInt128_1109_u128;
	#line 1140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getLog2Ceiling(__extension_UInt128_1109_u128 const& __this ) -> const __extension_UInt128_1109_u128;
	#line 1174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getPrevPow2(__extension_UInt128_1109_u128 const& __this ) -> const __extension_UInt128_1109_u128;
	#line 1185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getNextPow2(__extension_UInt128_1109_u128 const& __this ) -> const __extension_UInt128_1109_u128;
	#line 1197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getCheckedNextPow2(__extension_UInt128_1109_u128 const& __this ) -> const Builtin::Nullable<__extension_UInt128_1109_u128>;
	#line 1209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getWrappingNextPow2(__extension_UInt128_1109_u128 const& __this ) -> const __extension_UInt128_1109_u128;
	#line 1109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(u128, IBinaryInteger, IBinaryInteger, u128);
	} namespace System{
using __extensions::NextMultipleOf;
using __extensions::CheckedNextMultipleOf;
using __extensions::__static_getIsSigned;
using __extensions::getTrailingZeroCount;
using __extensions::getTrailingOneCount;
using __extensions::getByteCount;
using __extensions::getMinimalBitWidth;
using __extensions::getCheckedIsqrt;
using __extensions::getIsqrt;
using __extensions::getLog2Ceiling;
using __extensions::getPrevPow2;
using __extensions::getNextPow2;
using __extensions::getCheckedNextPow2;
using __extensions::getWrappingNextPow2;

		} namespace __extensions { using namespace System;
#line 1220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	using __extension_UInt128_1220_u128 = Builtin::u128;
	#line 1220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ADV_CHECK_INTERFACE(IFixedWidthInteger, IFixedWidthInteger);
	#line 1253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto RotateLeft(__extension_UInt128_1220_u128 const& __this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename __extension_UInt128_1220_u128;
	#line 1254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto RotateRight(__extension_UInt128_1220_u128 const& __this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename __extension_UInt128_1220_u128;
	#line 1221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class __TT> struct __static_getBitWidth; template<> struct __static_getBitWidth<__extension_UInt128_1220_u128> { static inline constexpr auto get() -> const Builtin::u32; };
	#line 1223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getLeadingZeroCount(__extension_UInt128_1220_u128 const& __this ) -> const Builtin::u32;
	#line 1231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getLeadingOneCount(__extension_UInt128_1220_u128 const& __this ) -> const Builtin::u32;
	#line 1232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getPopCount(__extension_UInt128_1220_u128 const& __this ) -> const Builtin::u32;
	#line 1233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getZeroCount(__extension_UInt128_1220_u128 const& __this ) -> const Builtin::u32;
	#line 1234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getByteSwapped(__extension_UInt128_1220_u128 const& __this ) -> const __extension_UInt128_1220_u128;
	#line 1235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getBigEndian(__extension_UInt128_1220_u128 const& __this ) -> const __extension_UInt128_1220_u128;
	#line 1242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getLittleEndian(__extension_UInt128_1220_u128 const& __this ) -> const __extension_UInt128_1220_u128;
	#line 1249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getReverseBits(__extension_UInt128_1220_u128 const& __this ) -> const __extension_UInt128_1220_u128;
	#line 1251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getShortestBitLength(__extension_UInt128_1220_u128 const& __this ) -> const Builtin::u32;
	#line 1220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(u128, IFixedWidthInteger, IFixedWidthInteger, u128);
	} namespace System{
using __extensions::RotateLeft;
using __extensions::RotateRight;
using __extensions::__static_getBitWidth;
using __extensions::getLeadingZeroCount;
using __extensions::getLeadingOneCount;
using __extensions::getPopCount;
using __extensions::getZeroCount;
using __extensions::getByteSwapped;
using __extensions::getBigEndian;
using __extensions::getLittleEndian;
using __extensions::getReverseBits;
using __extensions::getShortestBitLength;

		} namespace __extensions { using namespace System;
#line 1258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	using __extension_UInt128_1258_u128 = Builtin::u128;
	#line 1258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ADV_CHECK_INTERFACE(IBinaryIntegerFormatInfo, IBinaryIntegerFormatInfo);
	#line 1266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto IsGreaterThanAsUnsigned(__extension_UInt128_1258_u128 const& __this LIFETIMEBOUND, __extension_UInt128_1258_u128 rhs) noexcept -> const bool;
	#line 1259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class __TT> struct __static_getMaxDigitCount; template<> struct __static_getMaxDigitCount<__extension_UInt128_1258_u128> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class __TT> struct __static_getMaxHexDigitCount; template<> struct __static_getMaxHexDigitCount<__extension_UInt128_1258_u128> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class __TT> struct __static_getMaxValueDiv10; template<> struct __static_getMaxValueDiv10<__extension_UInt128_1258_u128> { static inline constexpr auto get() -> const __extension_UInt128_1258_u128; };
	#line 1263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getMultiplyBy10(__extension_UInt128_1258_u128 const& __this ) -> const __extension_UInt128_1258_u128;
	#line 1264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getMultiplyBy16(__extension_UInt128_1258_u128 const& __this ) -> const __extension_UInt128_1258_u128;
	#line 1258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(u128, IBinaryIntegerFormatInfo, IBinaryIntegerFormatInfo, u128);
	} namespace System{
using __extensions::IsGreaterThanAsUnsigned;
using __extensions::__static_getMaxDigitCount;
using __extensions::__static_getMaxHexDigitCount;
using __extensions::__static_getMaxValueDiv10;
using __extensions::getMultiplyBy10;
using __extensions::getMultiplyBy16;

	//###############################################################################
//# Function definitions
//###############################################################################

} namespace __extensions { using namespace System;
#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto __static_getMinValue<__extension_UInt128_16_u128>::get() -> const __extension_UInt128_1258_u128
	{
		#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(Builtin::u128(0ULL)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto __static_getMaxValue<__extension_UInt128_16_u128>::get() -> const __extension_UInt128_1258_u128
	{
		#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(Builtin::ParseUInt128("340282366920938463463374607431768211455")); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	
} namespace __extensions { using namespace System;
#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto operator<=>(__extension_UInt128_21_u128 const& __this LIFETIMEBOUND, Builtin::Nullable<__extension_UInt128_1258_u128> rhs) noexcept -> const Builtin::i32
	{
		#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		{
			#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			if ((!Builtin::Is(rhs, nullptr))) {
				#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				auto __tmp0 = *rhs; const auto& rhs = __tmp0;
				
				#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				return __this <=> rhs;
			}
		}
		#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return Builtin::i32(1);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_gt_gt_gt(__extension_UInt128_21_u128 const& __this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename __extension_UInt128_21_u128
	{
		#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(__this >> amount); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_gt_gt_gt_eq(__extension_UInt128_21_u128 & __this , Builtin::i32 amount)  -> typename __extension_UInt128_21_u128&
	{
		#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(__this >>= amount); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_lt_lt_bsl(__extension_UInt128_21_u128 const& __this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename __extension_UInt128_21_u128
	{
		#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if ((amount <=> ADV_USPCS(BitWidth, __extension_UInt128_1258_u128)()) >= 0) {
			#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return Builtin::u128(0ULL);
		}
		#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return Builtin::UncheckedShiftLeft(__this, Builtin::Cast<true, Builtin::i32>(amount));
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_lt_lt_bsl_eq(__extension_UInt128_21_u128 & __this , Builtin::u32 amount) noexcept -> typename __extension_UInt128_21_u128&
	{
		#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_lt_lt_bsl)(__this, amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_gt_gt_bsl(__extension_UInt128_21_u128 const& __this LIFETIMEBOUND, Builtin::u128 amount) noexcept -> const typename __extension_UInt128_21_u128
	{
		#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if ((amount <=> ADV_USPCS(BitWidth, __extension_UInt128_1258_u128)()) >= 0) {
			#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return Builtin::u128(0ULL);
		}
		#line 62 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return Builtin::UncheckedShiftRight(__this, Builtin::Cast<true, Builtin::i32>(amount));
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_gt_gt_bsl_eq(__extension_UInt128_21_u128 & __this , Builtin::u128 amount) noexcept -> typename __extension_UInt128_21_u128&
	{
		#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_gt_gt_bsl)(__this, amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getHashCode(__extension_UInt128_21_u128 const& __this ) -> const Builtin::u64
	{
		#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		auto finalize = [] (Builtin::u64 input) 
		{
			#line 71 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			input ^= input >> Builtin::i32(30);
			#line 72 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			ADV_UFCS(_operator_mul_mod_eq)(input, Builtin::u64(0xbf58476d1ce4e5b9ULL));
			#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			input ^= input >> Builtin::i32(27);
			#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			ADV_UFCS(_operator_mul_mod_eq)(input, Builtin::u64(0x94d049bb133111ebULL));
			#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			input ^= input >> Builtin::i32(31);
			#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return input;
		}; 
		#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		const auto lowHash = finalize(ADV_UFCS(Low64)(__this.__ref())); 
		#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		const auto highHash = finalize(ADV_UFCS(High64)(__this.__ref())); 
		#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return lowHash ^ (ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_add_mod)(highHash, Builtin::u32(0x9e3779b9U)), (lowHash << Builtin::i32(6))), (lowHash >> Builtin::i32(2))));
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	
} namespace __extensions { using namespace System;
#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToBoolean(__extension_UInt128_105_u128 const& __this LIFETIMEBOUND) noexcept -> const bool
	{
		#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(__this != Builtin::i32(0)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToInt8(__extension_UInt128_105_u128 const& __this LIFETIMEBOUND)  -> const Builtin::i8
	{
		#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if ((__this <=> ADV_USPCS(MaxValue, Builtin::i8)()) > 0) {
			#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return Builtin::Cast<true, Builtin::i8>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToUInt8(__extension_UInt128_105_u128 const& __this LIFETIMEBOUND)  -> const Builtin::u8
	{
		#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if ((__this <=> ADV_USPCS(MaxValue, Builtin::u8)()) > 0) {
			#line 115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return Builtin::Cast<true, Builtin::u8>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToInt16(__extension_UInt128_105_u128 const& __this LIFETIMEBOUND)  -> const Builtin::i16
	{
		#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if ((__this <=> ADV_USPCS(MaxValue, Builtin::i16)()) > 0) {
			#line 121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return Builtin::Cast<true, Builtin::i16>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToUInt16(__extension_UInt128_105_u128 const& __this LIFETIMEBOUND)  -> const Builtin::u16
	{
		#line 126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if ((__this <=> ADV_USPCS(MaxValue, Builtin::u16)()) > 0) {
			#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return Builtin::Cast<true, Builtin::u16>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToInt32(__extension_UInt128_105_u128 const& __this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if ((__this <=> ADV_USPCS(MaxValue, Builtin::i32)()) > 0) {
			#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return Builtin::Cast<true, Builtin::i32>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToUInt32(__extension_UInt128_105_u128 const& __this LIFETIMEBOUND)  -> const Builtin::u32
	{
		#line 138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if ((__this <=> ADV_USPCS(MaxValue, Builtin::u32)()) > 0) {
			#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return Builtin::Cast<true, Builtin::u32>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToInt64(__extension_UInt128_105_u128 const& __this LIFETIMEBOUND)  -> const Builtin::i64
	{
		#line 144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if ((__this <=> ADV_USPCS(MaxValue, Builtin::i64)()) > 0) {
			#line 145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return Builtin::Cast<true, Builtin::i64>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToUInt64(__extension_UInt128_105_u128 const& __this LIFETIMEBOUND)  -> const Builtin::u64
	{
		#line 150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if ((__this <=> ADV_USPCS(MaxValue, Builtin::u64)()) > 0) {
			#line 151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return Builtin::Cast<true, Builtin::u64>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToInt128(__extension_UInt128_105_u128 const& __this LIFETIMEBOUND)  -> const Builtin::i128
	{
		#line 156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if ((__this <=> Builtin::ParseUInt128("0x7FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF")) > 0) {
			#line 157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return Builtin::Cast<true, Builtin::i128>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToUInt128(__extension_UInt128_105_u128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u128
	{
		#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToIsize(__extension_UInt128_105_u128 const& __this LIFETIMEBOUND)  -> const Builtin::isize
	{
		#line 164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if constexpr (Builtin::usize(sizeof(Builtin::isize)) == Builtin::i32(32)) {
			#line 165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return ADV_UFCS(ToInt32)(__this.__ref());
		} else {
			#line 166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			{
				#line 167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				return ADV_UFCS(ToInt64)(__this.__ref());
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToUsize(__extension_UInt128_105_u128 const& __this LIFETIMEBOUND)  -> const Builtin::usize
	{
		#line 172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if constexpr (Builtin::usize(sizeof(Builtin::isize)) == Builtin::i32(32)) {
			#line 173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return ADV_UFCS(ToUInt32)(__this.__ref());
		} else {
			#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			{
				#line 175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				return ADV_UFCS(ToUInt64)(__this.__ref());
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToFloat32(__extension_UInt128_105_u128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::f32
	{
		#line 178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToFloat64(__extension_UInt128_105_u128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::f64
	{
		#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToByte(__extension_UInt128_105_u128 const& __this LIFETIMEBOUND)  -> const Builtin::char8
	{
		#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if ((__this <=> Builtin::i32(0xFF)) > 0) {
			#line 182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return Builtin::Cast<true, Builtin::u8>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto ToChar(__extension_UInt128_105_u128 const& __this LIFETIMEBOUND)  -> const Builtin::char16
	{
		#line 188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if ((__this <=> Builtin::i64(0xFFFFFFFFLL)) > 0) {
			#line 189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return Builtin::Cast<true, Builtin::u16>(__this);
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	
} namespace __extensions { using namespace System;
#line 199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_div_mod(__extension_UInt128_197_u128 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_UInt128_1258_u128, __extension_UInt128_1258_u128>
	{
		#line 201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator /% implemented only for integer types");
		#line 202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return std::make_tuple(ADV_UFCS(_operator_bsl)(__this, rhs), __this % rhs);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_div_not(__extension_UInt128_197_u128 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt128_197_u128
	{
		#line 207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		auto result = __this; 
		#line 208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		result /= rhs;
		#line 209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_div_not_eq(__extension_UInt128_197_u128 & __this , auto rhs)  -> typename __extension_UInt128_197_u128&
	{
		#line 212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(__this /= rhs); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_div_lt(__extension_UInt128_197_u128 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt128_197_u128
	{
		#line 216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if constexpr (Builtin::TypeIs<T, IBinaryInteger>()) {
			#line 217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return ADV_UFCS(_operator_bsl)(__this, rhs);
		} else {
			#line 218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			{
				#line 219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				return Builtin::Cast<true, __extension_UInt128_1258_u128>((ADV_UFCS(_operator_div_lt)(Builtin::f64{__this}, rhs)));
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_div_lt_eq(__extension_UInt128_197_u128 & __this , auto rhs)  -> typename __extension_UInt128_197_u128&
	{
		#line 223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(__this = __extension_UInt128_1258_u128{ADV_UFCS(_operator_div_lt)(__this, rhs)}); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_div_gt(__extension_UInt128_197_u128 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt128_197_u128
	{
		#line 227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if constexpr (Builtin::TypeIs<T, IBinaryInteger>()) {
			#line 228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			const auto& [div, rem] = ADV_UFCS(_operator_div_mod)(__this, rhs);
			#line 229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return (rem <=> Builtin::i32(0)) > 0 ? div + Builtin::i32(1) : div;
		} else {
			#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			{
				#line 231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				return Builtin::Cast<true, __extension_UInt128_1258_u128>((ADV_UFCS(_operator_div_gt)(Builtin::f64{__this}, rhs)));
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_div_gt_eq(__extension_UInt128_197_u128 & __this , auto rhs)  -> typename __extension_UInt128_197_u128&
	{
		#line 235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(__this = __extension_UInt128_1258_u128{ADV_UFCS(_operator_div_gt)(__this, rhs)}); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	
} namespace __extensions { using namespace System;
#line 240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_bsl(__extension_UInt128_238_u128 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt128_238_u128
	{
		#line 240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Div)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_bsl_eq(__extension_UInt128_238_u128 & __this , T rhs)  -> typename __extension_UInt128_238_u128&
	{
		#line 242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(DivAssign)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl(__extension_UInt128_238_u128 const& __this LIFETIMEBOUND, T rhs)  -> const Builtin::Nullable<__extension_UInt128_1258_u128>
	{
		#line 249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\? implemented only for integer types");
		#line 250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		__extension_UInt128_1258_u128 result{}; 
		#line 251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (Builtin::DivExact(__this, rhs, result)) {
			#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return result;
		}
		#line 254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return nullptr;
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	
} namespace __extensions { using namespace System;
#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_xor_xor(__extension_UInt128_258_u128 const& __this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename __extension_UInt128_258_u128
	{
		#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return Builtin::u128(1ULL);
		}
		#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		auto base = __this; 
		#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		auto result = Builtin::u128(1ULL); 
		#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (std::is_constant_evaluated()) {
			#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			while ((exp <=> Builtin::i32(1)) > 0) 
			{
				#line 273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
					#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
					result *= base;
				}
				#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
				#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				base *= base;
			}
			#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return result * base;
		} else {
			#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			{
				#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				for (;;) 
				{
					#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
					if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
						#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
						result *= base;
						#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
						if (exp == Builtin::i32(1)) {
							#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
							return result;
						}
					}
					#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
					ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
					#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
					base *= base;
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_xor_xor_eq(__extension_UInt128_258_u128 & __this , Builtin::u32 exp)  -> typename __extension_UInt128_258_u128&
	{
		#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_xor_xor)(__this, exp)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	
} namespace __extensions { using namespace System;
#line 320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto MaxMagnitude(__extension_UInt128_296_u128 const& __this LIFETIMEBOUND, __extension_UInt128_1258_u128 rhs) noexcept -> const typename __extension_UInt128_296_u128
	{
		#line 320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Max)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto MaxMagnitudeNumber(__extension_UInt128_296_u128 const& __this LIFETIMEBOUND, __extension_UInt128_1258_u128 rhs) noexcept -> const typename __extension_UInt128_296_u128
	{
		#line 321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Max)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto MinMagnitude(__extension_UInt128_296_u128 const& __this LIFETIMEBOUND, __extension_UInt128_1258_u128 rhs) noexcept -> const typename __extension_UInt128_296_u128
	{
		#line 323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Min)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto MinMagnitudeNumber(__extension_UInt128_296_u128 const& __this LIFETIMEBOUND, __extension_UInt128_1258_u128 rhs) noexcept -> const typename __extension_UInt128_296_u128
	{
		#line 324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Min)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto NarrowToInt8(__extension_UInt128_296_u128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i8
	{
		#line 337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i8>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto NarrowToUInt8(__extension_UInt128_296_u128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u8
	{
		#line 338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u8>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto NarrowToInt16(__extension_UInt128_296_u128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i16
	{
		#line 339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i16>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto NarrowToUInt16(__extension_UInt128_296_u128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u16
	{
		#line 340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u16>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto NarrowToInt32(__extension_UInt128_296_u128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i32
	{
		#line 341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i32>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto NarrowToUInt32(__extension_UInt128_296_u128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u32
	{
		#line 342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u32>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto NarrowToInt64(__extension_UInt128_296_u128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i64
	{
		#line 343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i64>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto NarrowToUInt64(__extension_UInt128_296_u128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u64
	{
		#line 344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u64>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto NarrowToInt128(__extension_UInt128_296_u128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i128
	{
		#line 345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i128>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto NarrowToUInt128(__extension_UInt128_296_u128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u128
	{
		#line 346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto NarrowToIsize(__extension_UInt128_296_u128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::isize
	{
		#line 347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::isize>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto NarrowToUsize(__extension_UInt128_296_u128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::usize
	{
		#line 348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::usize>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto __static_getOne<__extension_UInt128_296_u128>::get() -> const __extension_UInt128_1258_u128
	{
		#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(Builtin::u128(1ULL)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto __static_getZero<__extension_UInt128_296_u128>::get() -> const __extension_UInt128_1258_u128
	{
		#line 298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(Builtin::u128(0ULL)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto __static_getRadix<__extension_UInt128_296_u128>::get() -> const Builtin::i32
	{
		#line 299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(2)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getAbs(__extension_UInt128_296_u128 const& __this ) -> const __extension_UInt128_1258_u128
	{
		#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsCanonical(__extension_UInt128_296_u128 const& __this ) -> const bool
	{
		#line 302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsComplexNumber(__extension_UInt128_296_u128 const& __this ) -> const bool
	{
		#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsEvenInteger(__extension_UInt128_296_u128 const& __this ) -> const bool
	{
		#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY((ADV_UFCS(Low64)(__this.__ref()) & Builtin::u32(1U)) == Builtin::i32(0)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsFinite(__extension_UInt128_296_u128 const& __this ) -> const bool
	{
		#line 305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsImaginaryNumber(__extension_UInt128_296_u128 const& __this ) -> const bool
	{
		#line 306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsInfinity(__extension_UInt128_296_u128 const& __this ) -> const bool
	{
		#line 307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsInteger(__extension_UInt128_296_u128 const& __this ) -> const bool
	{
		#line 308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsNaN(__extension_UInt128_296_u128 const& __this ) -> const bool
	{
		#line 309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsNegative(__extension_UInt128_296_u128 const& __this ) -> const bool
	{
		#line 310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsNegativeInfinity(__extension_UInt128_296_u128 const& __this ) -> const bool
	{
		#line 311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsNormal(__extension_UInt128_296_u128 const& __this ) -> const bool
	{
		#line 312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(__this != Builtin::i32(0)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsOddInteger(__extension_UInt128_296_u128 const& __this ) -> const bool
	{
		#line 313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY((ADV_UFCS(Low64)(__this.__ref()) & Builtin::u32(1U)) != Builtin::i32(0)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsPositive(__extension_UInt128_296_u128 const& __this ) -> const bool
	{
		#line 314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsPositiveInfinity(__extension_UInt128_296_u128 const& __this ) -> const bool
	{
		#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsRealNumber(__extension_UInt128_296_u128 const& __this ) -> const bool
	{
		#line 316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsSubnormal(__extension_UInt128_296_u128 const& __this ) -> const bool
	{
		#line 317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsZero(__extension_UInt128_296_u128 const& __this ) -> const bool
	{
		#line 318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(__this == Builtin::i32(0)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	
} namespace __extensions { using namespace System;
#line 358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto CopySign(__extension_UInt128_355_u128 const& __this LIFETIMEBOUND, __extension_UInt128_1258_u128 sign) noexcept -> const typename __extension_UInt128_355_u128
	{
		#line 358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto Max(__extension_UInt128_355_u128 const& __this LIFETIMEBOUND, __extension_UInt128_1258_u128 rhs) noexcept -> const typename __extension_UInt128_355_u128
	{
		#line 360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(((__this <=> rhs) >= 0) ? __this : rhs); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto MaxNumber(__extension_UInt128_355_u128 const& __this LIFETIMEBOUND, __extension_UInt128_1258_u128 rhs) noexcept -> const typename __extension_UInt128_355_u128
	{
		#line 361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Max)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto Min(__extension_UInt128_355_u128 const& __this LIFETIMEBOUND, __extension_UInt128_1258_u128 rhs) noexcept -> const typename __extension_UInt128_355_u128
	{
		#line 362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(((__this <=> rhs) <= 0) ? __this : rhs); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto MinNumber(__extension_UInt128_355_u128 const& __this LIFETIMEBOUND, __extension_UInt128_1258_u128 rhs) noexcept -> const typename __extension_UInt128_355_u128
	{
		#line 363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Min)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto Clamp(__extension_UInt128_355_u128 const& __this LIFETIMEBOUND, __extension_UInt128_1258_u128 min, __extension_UInt128_1258_u128 max)  -> const typename __extension_UInt128_355_u128
	{
		#line 366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if ((min <=> max) > 0) {
			#line 367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			Builtin::Throw(Builtin::InvalidOperationException{});
		}
		#line 370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		auto result = __this; 
		#line 371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		result = ADV_UFCS(Max)(result.__ref(), min);
		#line 372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		result = ADV_UFCS(Min)(result.__ref(), max);
		#line 374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getSign(__extension_UInt128_355_u128 const& __this ) -> const Builtin::i32
	{
		#line 356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(__this == Builtin::i32(0) ? Builtin::i32(0) : +Builtin::i32(1)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	
} namespace __extensions { using namespace System;
#line 456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto CheckedLog(__extension_UInt128_378_u128 const& __this LIFETIMEBOUND, __extension_UInt128_1258_u128 base) noexcept -> const Builtin::Nullable<__extension_UInt128_1258_u128>
	{
		#line 458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (__this == Builtin::i32(0) || (base <=> Builtin::i32(1)) <= 0) {
			#line 459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return nullptr;
		}
		#line 462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (std::is_constant_evaluated()) {
			#line 463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			if (base == Builtin::i32(2)) {
				#line 464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				return ADV_UPCS(CheckedLog2)(__this.__ref());
			}
			#line 466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			if (base == Builtin::i32(10)) {
				#line 467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				return ADV_UPCS(CheckedLog10)(__this.__ref());
			}
		}
		#line 471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if ((__this <=> base) < 0) {
			#line 472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return Builtin::u128(0ULL);
		}
		#line 475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		__extension_UInt128_1258_u128 n = Builtin::u128(1ULL); 
		#line 476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		auto r = base; 
		#line 477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		const auto baseRatio = ADV_UFCS(_operator_bsl)(__this, base); 
		#line 478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		while ((r <=> baseRatio) <= 0) 
		{
			#line 479 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			++n;
			#line 480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			r *= base;
		}
		#line 483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return n;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto Midpoint(__extension_UInt128_378_u128 const& __this LIFETIMEBOUND, __extension_UInt128_1258_u128 rhs) noexcept -> const typename __extension_UInt128_378_u128
	{
		#line 499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(((__this ^ rhs) >> Builtin::i32(1)) + (__this & rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto IsMultipleOf(__extension_UInt128_378_u128 const& __this LIFETIMEBOUND, __extension_UInt128_1258_u128 rhs) noexcept -> const bool
	{
		#line 504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (rhs == Builtin::i32(0)) {
			#line 505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return __this == Builtin::i32(0);
		}
		#line 508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return __this % rhs == Builtin::i32(0);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto __static_getAllBitsSet<__extension_UInt128_378_u128>::get() -> const __extension_UInt128_1258_u128
	{
		#line 380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(MaxValue, Builtin::u128)()); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getIsPow2(__extension_UInt128_378_u128 const& __this ) -> const bool
	{
		#line 383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(PopCount)(__this.__ref()) == Builtin::i32(1)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getCheckedLog2(__extension_UInt128_378_u128 const& __this ) -> const Builtin::Nullable<__extension_UInt128_1258_u128>
	{
		#line 389 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (__this == Builtin::i32(0)) {
			#line 390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return nullptr;
		}
		#line 393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return Builtin::Cast<true, __extension_UInt128_1258_u128>((ADV_USPCS(BitWidth, __extension_UInt128_1258_u128)() - Builtin::i32(1) - ADV_UPCS(LeadingZeroCount)(__this.__ref())));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getLog2(__extension_UInt128_378_u128 const& __this ) -> const __extension_UInt128_1258_u128
	{
		#line 399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (const auto result = ADV_UPCS(CheckedLog2)(__this.__ref())) {
			{
				#line 399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				return result;
			}
		}
		#line 402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getCheckedLog10(__extension_UInt128_378_u128 const& __this ) -> const Builtin::Nullable<__extension_UInt128_1258_u128>
	{
		#line 409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (__this == Builtin::i32(0)) {
			#line 410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return nullptr;
		}
		#line 413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		constexpr Builtin::u32 C1 = Builtin::u32(0b01100000000000000000U) - Builtin::i32(10);
		#line 414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		constexpr Builtin::u32 C2 = Builtin::u32(0b10000000000000000000U) - Builtin::i32(100);
		#line 415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		constexpr Builtin::u32 C3 = Builtin::u32(0b11100000000000000000U) - Builtin::i32(1000);
		#line 416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		constexpr Builtin::u32 C4 = Builtin::u32(0b10000000000000000000U) - Builtin::i32(10000);
		#line 417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		auto log = Builtin::i32(0); 
		#line 418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		auto val1 = __this; 
		#line 419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if ((val1 <=> Builtin::ParseInt128("100000000000000000000000000000000")) >= 0) {
			#line 420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			ADV_UFCS(DivAssign)(val1.__ref(), Builtin::ParseUInt128("100000000000000000000000000000000"));
			#line 421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			log += Builtin::i32(32);
			#line 422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			if ((val1 <=> Builtin::i32(100000)) >= 0) {
				#line 423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				ADV_UFCS(DivAssign)(val1.__ref(), Builtin::u32(100000U));
				#line 424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				log += Builtin::i32(5);
			}
			#line 426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			const auto val = Builtin::Cast<true, Builtin::u32>(val1); 
			#line 427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return Builtin::Cast<true, Builtin::u128>((log + ((((val + C1) & (val + C2)) ^ ((val + C3) & (val + C4))) >> Builtin::i32(17))));
		}
		#line 429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if ((val1 <=> Builtin::i64(10000000000000000LL)) >= 0) {
			#line 430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			ADV_UFCS(DivAssign)(val1.__ref(), Builtin::u64(10000000000000000ULL));
			#line 431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			log += Builtin::i32(16);
		}
		#line 433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if ((val1 <=> Builtin::i64(10000000000LL)) >= 0) {
			#line 434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			ADV_UFCS(DivAssign)(val1.__ref(), Builtin::u64(10000000000ULL));
			#line 435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			log += Builtin::i32(10);
		}
		#line 437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if ((val1 <=> Builtin::i32(100000)) >= 0) {
			#line 438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			ADV_UFCS(DivAssign)(val1.__ref(), Builtin::u32(100000U));
			#line 439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			log += Builtin::i32(5);
		}
		#line 441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		const auto val = Builtin::Cast<true, Builtin::u32>(val1); 
		#line 442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return Builtin::Cast<true, Builtin::u128>((log + ((((val + C1) & (val + C2)) ^ ((val + C3) & (val + C4))) >> Builtin::i32(17))));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getLog10(__extension_UInt128_378_u128 const& __this ) -> const __extension_UInt128_1258_u128
	{
		#line 448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (const auto result = ADV_UPCS(CheckedLog10)(__this.__ref())) {
			{
				#line 448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				return result;
			}
		}
		#line 451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	
} namespace __extensions { using namespace System;
#line 515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_add_qst(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_UInt128_1258_u128>
	{
		#line 517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +? implemented only for integer types");
		#line 518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		__extension_UInt128_1258_u128 result{}; 
		#line 519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (Builtin::SafeAdd(__this, rhs, result)) {
			#line 520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return result;
		}
		#line 522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_add_qst_eq(__extension_UInt128_512_u128 & __this , T rhs) noexcept -> typename __extension_UInt128_512_u128&
	{
		#line 526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +?= implemented only for integer types");
		#line 527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (const auto result = ADV_UFCS(_operator_add_qst)(__this, rhs)) {
			{
				#line 527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				__this = result;
			}
		}
		#line 530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_add_ne(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt128_512_u128
	{
		#line 537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +! implemented only for integer types");
		#line 538 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		__extension_UInt128_1258_u128 result{}; 
		#line 539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::StrictAdd(__this, rhs, result);
		#line 540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_add_ne_eq(__extension_UInt128_512_u128 & __this , T rhs)  -> typename __extension_UInt128_512_u128&
	{
		#line 542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_add_ne)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_add_mod(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_UInt128_512_u128
	{
		#line 548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +% implemented only for integer types");
		#line 549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		__extension_UInt128_1258_u128 result{}; 
		#line 550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::WrappingAdd(__this, rhs, result);
		#line 551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_add_mod_eq(__extension_UInt128_512_u128 & __this , T rhs) noexcept -> typename __extension_UInt128_512_u128&
	{
		#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_add_mod)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_add_or(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_UInt128_512_u128
	{
		#line 559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +| implemented only for integer types");
		#line 560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		__extension_UInt128_1258_u128 result{}; 
		#line 561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::SaturatingAdd(__this, rhs, result);
		#line 562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_add_or_eq(__extension_UInt128_512_u128 & __this , T rhs) noexcept -> typename __extension_UInt128_512_u128&
	{
		#line 564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_add_or)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_add_mod_qst(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<__extension_UInt128_1258_u128, bool>
	{
		#line 569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +%? implemented only for integer types");
		#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		__extension_UInt128_1258_u128 result{}; 
		#line 571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		auto overflowed = !Builtin::SafeAdd(__this, rhs, result); 
		#line 572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 576 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_add_add_qst(__extension_UInt128_512_u128 & __this )  -> typename __extension_UInt128_512_u128&
	{
		#line 576 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_qst_eq)(__this, Builtin::u128(1ULL))); 
	}
	inline constexpr auto _operator_add_add_qst_postfix(__extension_UInt128_512_u128 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_add_add_qst)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_add_add_ne(__extension_UInt128_512_u128 & __this )  -> typename __extension_UInt128_512_u128&
	{
		#line 579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_ne_eq)(__this, Builtin::u128(1ULL))); 
	}
	inline constexpr auto _operator_add_add_ne_postfix(__extension_UInt128_512_u128 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_add_add_ne)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_add_add_mod(__extension_UInt128_512_u128 & __this )  -> typename __extension_UInt128_512_u128&
	{
		#line 582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_mod_eq)(__this, Builtin::u128(1ULL))); 
	}
	inline constexpr auto _operator_add_add_mod_postfix(__extension_UInt128_512_u128 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_add_add_mod)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_add_add_or(__extension_UInt128_512_u128 & __this )  -> typename __extension_UInt128_512_u128&
	{
		#line 585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_or_eq)(__this, Builtin::u128(1ULL))); 
	}
	inline constexpr auto _operator_add_add_or_postfix(__extension_UInt128_512_u128 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_add_add_or)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto CarryingAdd(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, __extension_UInt128_1258_u128 rhs, bool carry) noexcept -> const std::tuple<__extension_UInt128_1258_u128, bool>
	{
		#line 591 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		__extension_UInt128_1258_u128 result{}; 
		#line 592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		auto overflowed = Builtin::CarryingAdd(__this, rhs, carry, result); 
		#line 593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto BorrowingSub(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, __extension_UInt128_1258_u128 rhs, bool carry) noexcept -> const std::tuple<__extension_UInt128_1258_u128, bool>
	{
		#line 600 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		__extension_UInt128_1258_u128 result{}; 
		#line 601 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		auto overflowed = Builtin::BorrowingSub(__this, rhs, carry, result); 
		#line 602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 607 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_sub_qst(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_UInt128_1258_u128>
	{
		#line 609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -? implemented only for integer types");
		#line 610 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		__extension_UInt128_1258_u128 result{}; 
		#line 611 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (Builtin::SafeSubtract(__this, rhs, result)) {
			#line 612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return result;
		}
		#line 614 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 616 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_sub_qst_eq(__extension_UInt128_512_u128 & __this , T rhs) noexcept -> typename __extension_UInt128_512_u128&
	{
		#line 618 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -?= implemented only for integer types");
		#line 619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (const auto result = ADV_UFCS(_operator_sub_qst)(__this, rhs)) {
			{
				#line 619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				__this = result;
			}
		}
		#line 622 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_sub_ne(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt128_512_u128
	{
		#line 629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -! implemented only for integer types");
		#line 630 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		__extension_UInt128_1258_u128 result{}; 
		#line 631 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::StrictSubtract(__this, rhs, result);
		#line 632 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_sub_ne_eq(__extension_UInt128_512_u128 & __this , T rhs)  -> typename __extension_UInt128_512_u128&
	{
		#line 634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_sub_ne)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_sub_mod(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_UInt128_512_u128
	{
		#line 640 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -% implemented only for integer types");
		#line 641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		__extension_UInt128_1258_u128 result{}; 
		#line 642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::WrappingSubtract(__this, rhs, result);
		#line 643 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 645 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_sub_mod_eq(__extension_UInt128_512_u128 & __this , T rhs) noexcept -> typename __extension_UInt128_512_u128&
	{
		#line 645 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_sub_mod)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 649 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_sub_or(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_UInt128_512_u128
	{
		#line 651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -| implemented only for integer types");
		#line 652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		__extension_UInt128_1258_u128 result{}; 
		#line 653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::SaturatingSubtract(__this, rhs, result);
		#line 654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 656 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_sub_or_eq(__extension_UInt128_512_u128 & __this , T rhs) noexcept -> typename __extension_UInt128_512_u128&
	{
		#line 656 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_sub_or)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_sub_mod_qst(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<__extension_UInt128_1258_u128, bool>
	{
		#line 661 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -%? implemented only for integer types");
		#line 662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		__extension_UInt128_1258_u128 result{}; 
		#line 663 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		auto overflowed = !Builtin::SafeSubtract(__this, rhs, result); 
		#line 664 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_sub_sub_qst(__extension_UInt128_512_u128 & __this )  -> typename __extension_UInt128_512_u128&
	{
		#line 668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_qst_eq)(__this, Builtin::u128(1ULL))); 
	}
	inline constexpr auto _operator_sub_sub_qst_postfix(__extension_UInt128_512_u128 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_sub_sub_qst)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_sub_sub_ne(__extension_UInt128_512_u128 & __this )  -> typename __extension_UInt128_512_u128&
	{
		#line 671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_ne_eq)(__this, Builtin::u128(1ULL))); 
	}
	inline constexpr auto _operator_sub_sub_ne_postfix(__extension_UInt128_512_u128 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_sub_sub_ne)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 674 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_sub_sub_mod(__extension_UInt128_512_u128 & __this )  -> typename __extension_UInt128_512_u128&
	{
		#line 674 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_mod_eq)(__this, Builtin::u128(1ULL))); 
	}
	inline constexpr auto _operator_sub_sub_mod_postfix(__extension_UInt128_512_u128 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_sub_sub_mod)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_sub_sub_or(__extension_UInt128_512_u128 & __this )  -> typename __extension_UInt128_512_u128&
	{
		#line 677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_or_eq)(__this, Builtin::u128(1ULL))); 
	}
	inline constexpr auto _operator_sub_sub_or_postfix(__extension_UInt128_512_u128 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_sub_sub_or)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mul_qst(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_UInt128_1258_u128>
	{
		#line 683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *? implemented only for integer types");
		#line 684 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		__extension_UInt128_1258_u128 result{}; 
		#line 685 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (Builtin::SafeMultiply(__this, rhs, result)) {
			#line 686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return result;
		}
		#line 688 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 690 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mul_qst_eq(__extension_UInt128_512_u128 & __this , T rhs) noexcept -> typename __extension_UInt128_512_u128&
	{
		#line 692 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *?= implemented only for integer types");
		#line 693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (const auto result = ADV_UFCS(_operator_mul_qst)(__this, rhs)) {
			{
				#line 693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 694 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				__this = result;
			}
		}
		#line 696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 701 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mul_ne(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt128_512_u128
	{
		#line 703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *! implemented only for integer types");
		#line 704 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		__extension_UInt128_1258_u128 result{}; 
		#line 705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::StrictMultiply(__this, rhs, result);
		#line 706 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 708 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mul_ne_eq(__extension_UInt128_512_u128 & __this , T rhs)  -> typename __extension_UInt128_512_u128&
	{
		#line 708 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_mul_ne)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 712 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mul_mod(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_UInt128_512_u128
	{
		#line 714 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *% implemented only for integer types");
		#line 715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		__extension_UInt128_1258_u128 result{}; 
		#line 716 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::WrappingMultiply(__this, rhs, result);
		#line 717 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 719 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mul_mod_eq(__extension_UInt128_512_u128 & __this , T rhs) noexcept -> typename __extension_UInt128_512_u128&
	{
		#line 719 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_mul_mod)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 723 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mul_or(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_UInt128_512_u128
	{
		#line 725 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *| implemented only for integer types");
		#line 726 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		__extension_UInt128_1258_u128 result{}; 
		#line 727 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::SaturatingMultiply(__this, rhs, result);
		#line 728 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 730 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mul_or_eq(__extension_UInt128_512_u128 & __this , T rhs) noexcept -> typename __extension_UInt128_512_u128&
	{
		#line 730 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_mul_or)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 734 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mul_mod_qst(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<__extension_UInt128_1258_u128, bool>
	{
		#line 735 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *%? implemented only for integer types");
		#line 736 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		__extension_UInt128_1258_u128 result{}; 
		#line 737 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		auto overflowed = !Builtin::SafeMultiply(__this, rhs, result); 
		#line 738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_mul_gt(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, __extension_UInt128_1258_u128 rhs) noexcept -> const std::tuple<Builtin::u128, Builtin::u128>
	{
		#line 745 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		const auto& [low, high] = Builtin::WideningMul128u(__this, rhs);
		#line 746 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return std::make_tuple(low, high);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 752 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto CarryingMul(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, __extension_UInt128_1258_u128 rhs, __extension_UInt128_1258_u128 carry) noexcept -> const std::tuple<Builtin::u128, Builtin::u128>
	{
		#line 754 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		const auto& [low, high] = Builtin::CarryingMul128u(__this, rhs, carry);
		#line 755 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return std::make_tuple(low, high);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 760 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_bsl_qst(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_UInt128_1258_u128>
	{
		#line 762 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\? implemented only for integer types");
		#line 763 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		__extension_UInt128_1258_u128 result{}; 
		#line 764 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (Builtin::SafeDivide(__this, rhs, result)) {
			#line 765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return result;
		}
		#line 767 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 769 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_bsl_qst_eq(__extension_UInt128_512_u128 & __this , T rhs) noexcept -> typename __extension_UInt128_512_u128&
	{
		#line 771 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\?= implemented only for integer types");
		#line 772 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (const auto result = ADV_UFCS(_operator_bsl_qst)(__this, rhs)) {
			{
				#line 772 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 773 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				__this = result;
			}
		}
		#line 775 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 780 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_bsl_ne(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt128_512_u128
	{
		#line 780 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_bsl_ne_eq(__extension_UInt128_512_u128 & __this , T rhs)  -> typename __extension_UInt128_512_u128&
	{
		#line 781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl_eq)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 785 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_bsl_mod(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt128_512_u128
	{
		#line 785 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 786 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_eq(__extension_UInt128_512_u128 & __this , T rhs)  -> typename __extension_UInt128_512_u128&
	{
		#line 786 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl_eq)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 790 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_bsl_or(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt128_512_u128
	{
		#line 790 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 791 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_bsl_or_eq(__extension_UInt128_512_u128 & __this , T rhs)  -> typename __extension_UInt128_512_u128&
	{
		#line 791 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl_eq)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 805 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_UInt128_1258_u128>
	{
		#line 807 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\? implemented only for integer types");
		#line 808 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		__extension_UInt128_1258_u128 result{}; 
		#line 809 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (Builtin::SafeDivExact(__this, rhs, result)) {
			#line 810 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return result;
		}
		#line 812 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 815 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst_eq(__extension_UInt128_512_u128 & __this , T rhs) noexcept -> typename __extension_UInt128_512_u128&
	{
		#line 817 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\?= implemented only for integer types");
		#line 818 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (const auto result = ADV_UFCS(_operator_bsl_bsl_qst)(__this, rhs)) {
			{
				#line 818 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 819 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				__this = result;
			}
		}
		#line 821 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 826 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mod_qst(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_UInt128_1258_u128>
	{
		#line 828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %? implemented only for integer types");
		#line 829 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		__extension_UInt128_1258_u128 result{}; 
		#line 830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (Builtin::SafeModulus(__this, rhs, result)) {
			#line 831 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return result;
		}
		#line 833 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 835 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mod_qst_eq(__extension_UInt128_512_u128 & __this , T rhs) noexcept -> typename __extension_UInt128_512_u128&
	{
		#line 837 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %?= implemented only for integer types");
		#line 838 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (const auto result = ADV_UFCS(_operator_mod_qst)(__this, rhs)) {
			{
				#line 838 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 839 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				__this = result;
			}
		}
		#line 841 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 846 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mod_ne(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt128_512_u128
	{
		#line 846 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(__this % rhs); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 847 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mod_ne_eq(__extension_UInt128_512_u128 & __this , T rhs)  -> typename __extension_UInt128_512_u128&
	{
		#line 847 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(__this %= rhs); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 851 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mod_mod(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt128_512_u128
	{
		#line 851 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(__this % rhs); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 852 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mod_mod_eq(__extension_UInt128_512_u128 & __this , T rhs)  -> typename __extension_UInt128_512_u128&
	{
		#line 852 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(__this %= rhs); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 857 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> inline constexpr auto _operator_mod_mod_qst(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_UInt128_1258_u128, bool>
	{
		#line 858 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %%? implemented only for integer types");
		#line 859 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		__extension_UInt128_1258_u128 result{}; 
		#line 860 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		auto overflowed = !Builtin::SafeModulus(__this, rhs, result); 
		#line 861 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 866 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_sub_qst(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::Nullable<__extension_UInt128_1258_u128>
	{
		#line 866 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(nullptr); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 869 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline auto _operator_sub_ne(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND)  -> const typename __extension_UInt128_512_u128
	{
		#line 871 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::Throw(Builtin::IntegerOverflowException{});
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 874 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_sub_mod(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND)  -> const typename __extension_UInt128_512_u128
	{
		#line 876 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		__extension_UInt128_1258_u128 result{}; 
		#line 877 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::WrappingNegate(__this, result);
		#line 878 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 882 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_sub_or(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND)  -> const typename __extension_UInt128_512_u128
	{
		#line 882 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(Builtin::u128(0ULL)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 885 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_sub_mod_qst(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND)  -> const std::tuple<__extension_UInt128_1258_u128, bool>
	{
		#line 887 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		__extension_UInt128_1258_u128 result{}; 
		#line 888 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		auto __var_888_8 = Builtin::SafeNegate(__this, result); 
		#line 889 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return std::make_tuple(result, Builtin::Boolean(true));
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 893 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_lt_lt_qst(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<__extension_UInt128_1258_u128>
	{
		#line 895 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, __extension_UInt128_1258_u128)()) < 0) {
			#line 896 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return Builtin::UncheckedShiftLeft(__this, amount);
		}
		#line 898 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 901 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_lt_lt_qst_eq(__extension_UInt128_512_u128 & __this , Builtin::i32 amount) noexcept -> typename __extension_UInt128_512_u128&
	{
		#line 903 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, __extension_UInt128_1258_u128)()) < 0) {
			#line 904 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return __this <<= amount;
		}
		#line 906 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 909 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_lt_lt_ne(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename __extension_UInt128_512_u128
	{
		#line 911 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, __extension_UInt128_1258_u128)()) < 0) {
			#line 912 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return Builtin::UncheckedShiftLeft(__this, amount);
		}
		#line 914 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::Throw(Builtin::IntegerOverflowException{});
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 917 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_lt_lt_ne_eq(__extension_UInt128_512_u128 & __this , Builtin::i32 amount)  -> typename __extension_UInt128_512_u128&
	{
		#line 917 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_lt_lt_ne)(__this, amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 919 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_lt_lt_mod(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename __extension_UInt128_512_u128
	{
		#line 919 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(Builtin::UncheckedShiftLeft(__this, amount & (ADV_USPCS(BitWidth, __extension_UInt128_1258_u128)() - Builtin::i32(1)))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 922 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_lt_lt_mod_eq(__extension_UInt128_512_u128 & __this , Builtin::i32 amount) noexcept -> typename __extension_UInt128_512_u128&
	{
		#line 922 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_lt_lt_mod)(__this, amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 924 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_lt_lt_mod_qst(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<__extension_UInt128_1258_u128, bool>
	{
		#line 924 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(std::make_tuple(ADV_UFCS(_operator_lt_lt_mod)(__this, amount), (amount <=> Builtin::i32(0)) < 0 || (amount <=> ADV_USPCS(BitWidth, __extension_UInt128_1258_u128)()) >= 0)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 927 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_gt_gt_qst(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<__extension_UInt128_1258_u128>
	{
		#line 929 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, __extension_UInt128_1258_u128)()) < 0) {
			#line 930 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return __this >> amount;
		}
		#line 932 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 935 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_gt_gt_qst_eq(__extension_UInt128_512_u128 & __this , Builtin::i32 amount) noexcept -> typename __extension_UInt128_512_u128&
	{
		#line 937 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, __extension_UInt128_1258_u128)()) < 0) {
			#line 938 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return __this >>= amount;
		}
		#line 940 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 943 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_gt_gt_ne(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename __extension_UInt128_512_u128
	{
		#line 945 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, __extension_UInt128_1258_u128)()) < 0) {
			#line 946 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return __this >> amount;
		}
		#line 948 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::Throw(Builtin::IntegerOverflowException{});
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 951 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_gt_gt_ne_eq(__extension_UInt128_512_u128 & __this , Builtin::i32 amount)  -> typename __extension_UInt128_512_u128&
	{
		#line 951 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_gt_gt_ne)(__this, amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 953 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_gt_gt_mod(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename __extension_UInt128_512_u128
	{
		#line 953 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(Builtin::UncheckedShiftRight(__this, amount & (ADV_USPCS(BitWidth, __extension_UInt128_1258_u128)() - Builtin::i32(1)))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 956 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_gt_gt_mod_eq(__extension_UInt128_512_u128 & __this , Builtin::i32 amount) noexcept -> typename __extension_UInt128_512_u128&
	{
		#line 956 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_gt_gt_mod)(__this, amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 958 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_gt_gt_mod_qst(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<__extension_UInt128_1258_u128, bool>
	{
		#line 958 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(std::make_tuple(ADV_UFCS(_operator_gt_gt_mod)(__this, amount), (amount <=> Builtin::i32(0)) < 0 || (amount <=> ADV_USPCS(BitWidth, __extension_UInt128_1258_u128)()) >= 0)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 963 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_xor_xor_qst(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const Builtin::Nullable<__extension_UInt128_1258_u128>
	{
		#line 965 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 967 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return Builtin::u128(1ULL);
		}
		#line 970 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		auto base = __this; 
		#line 971 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		auto result = Builtin::u128(1ULL); 
		#line 973 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		for (;;) 
		{
			#line 974 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 975 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				if (const auto mul = ADV_UFCS(_operator_mul_qst)(result, base)) {
					{
						#line 975 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
						auto __tmp0 = *mul; const auto& mul = __tmp0;
						
						#line 976 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
						result = mul;
					}
				} else {
					#line 977 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
					{
						#line 978 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
						return nullptr;
					}
				}
				#line 980 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				if (exp == Builtin::i32(1)) {
					#line 981 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
					return result;
				}
			}
			#line 983 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
			#line 984 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			if (const auto mul = ADV_UFCS(_operator_mul_qst)(base, base)) {
				{
					#line 984 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
					auto __tmp0 = *mul; const auto& mul = __tmp0;
					
					#line 985 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
					base = mul;
				}
			} else {
				#line 986 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				{
					#line 987 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
					return nullptr;
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 992 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_xor_xor_qst_eq(__extension_UInt128_512_u128 & __this , Builtin::u32 exp) noexcept -> typename __extension_UInt128_512_u128&
	{
		#line 994 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (auto result = ADV_UFCS(_operator_xor_xor_qst)(__this, exp)) {
			{
				#line 994 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 995 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				return __this = result;
			}
		}
		#line 997 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1000 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_xor_xor_ne(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename __extension_UInt128_512_u128
	{
		#line 1002 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1004 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return Builtin::u128(1ULL);
		}
		#line 1007 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		auto base = __this; 
		#line 1008 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		auto result = Builtin::u128(1ULL); 
		#line 1010 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		for (;;) 
		{
			#line 1011 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 1012 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				ADV_UFCS(_operator_mul_ne_eq)(result, base);
				#line 1013 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				if (exp == Builtin::i32(1)) {
					#line 1014 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
					return result;
				}
			}
			#line 1016 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
			#line 1017 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			ADV_UFCS(_operator_mul_ne_eq)(base, base);
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1021 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_xor_xor_ne_eq(__extension_UInt128_512_u128 & __this , Builtin::u32 exp)  -> typename __extension_UInt128_512_u128&
	{
		#line 1021 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_xor_xor_ne)(__this, exp)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1023 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_xor_xor_mod(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename __extension_UInt128_512_u128
	{
		#line 1025 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1027 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return Builtin::u128(1ULL);
		}
		#line 1030 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		auto base = __this; 
		#line 1031 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		auto result = Builtin::u128(1ULL); 
		#line 1033 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (std::is_constant_evaluated()) {
			#line 1034 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			while ((exp <=> Builtin::i32(1)) > 0) 
			{
				#line 1035 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
					#line 1036 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
					ADV_UFCS(_operator_mul_mod_eq)(result, base);
				}
				#line 1038 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
				#line 1039 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				ADV_UFCS(_operator_mul_mod_eq)(base, base);
			}
			#line 1041 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return ADV_UFCS(_operator_mul_mod)(result, base);
		} else {
			#line 1042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			{
				#line 1043 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				for (;;) 
				{
					#line 1044 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
					if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
						#line 1045 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
						ADV_UFCS(_operator_mul_mod_eq)(result, base);
						#line 1046 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
						if (exp == Builtin::i32(1)) {
							#line 1047 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
							return result;
						}
					}
					#line 1049 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
					ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
					#line 1050 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
					ADV_UFCS(_operator_mul_mod_eq)(base, base);
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1055 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_xor_xor_mod_eq(__extension_UInt128_512_u128 & __this , Builtin::u32 exp) noexcept -> typename __extension_UInt128_512_u128&
	{
		#line 1055 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_xor_xor_mod)(__this, exp)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1057 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_xor_xor_or(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename __extension_UInt128_512_u128
	{
		#line 1059 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (const auto result = ADV_UFCS(_operator_xor_xor_qst)(__this, exp)) {
			{
				#line 1059 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 1060 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				return result;
			}
		}
		#line 1063 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return ADV_USPCS(MaxValue, __extension_UInt128_1258_u128)();
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1066 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_xor_xor_or_eq(__extension_UInt128_512_u128 & __this , Builtin::u32 exp) noexcept -> typename __extension_UInt128_512_u128&
	{
		#line 1066 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_xor_xor_or)(__this, exp)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1068 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto _operator_xor_xor_mod_qst(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const std::tuple<__extension_UInt128_1258_u128, bool>
	{
		#line 1070 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1072 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return std::make_tuple(Builtin::u128(1ULL), Builtin::Boolean(false));
		}
		#line 1075 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		auto base = __this; 
		#line 1076 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		auto result = Builtin::u128(1ULL); 
		#line 1077 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		auto overflowed = Builtin::Boolean(false); 
		#line 1078 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		auto tmp = std::make_tuple(Builtin::u128(0ULL), Builtin::Boolean(false)); 
		#line 1080 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		for (;;) 
		{
			#line 1081 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 1082 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				tmp = ADV_UFCS(_operator_mul_mod_qst)(result, base);
				#line 1083 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				if (exp == Builtin::i32(1)) {
					#line 1084 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
					std::get<1>(tmp) |= overflowed;
					#line 1085 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
					return tmp;
				}
				#line 1087 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				result = std::get<0>(tmp);
				#line 1088 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				overflowed |= std::get<1>(tmp);
			}
			#line 1090 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
			#line 1091 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			tmp = ADV_UFCS(_operator_mul_mod_qst)(base, base);
			#line 1092 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			base = std::get<0>(tmp);
			#line 1093 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			overflowed |= std::get<1>(tmp);
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1098 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getCheckedAbs(__extension_UInt128_512_u128 const& __this ) -> const Builtin::Nullable<__extension_UInt128_1258_u128>
	{
		#line 1098 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getStrictAbs(__extension_UInt128_512_u128 const& __this ) -> const __extension_UInt128_1258_u128
	{
		#line 1100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getWrappingAbs(__extension_UInt128_512_u128 const& __this ) -> const __extension_UInt128_1258_u128
	{
		#line 1102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getSaturatingAbs(__extension_UInt128_512_u128 const& __this ) -> const __extension_UInt128_1258_u128
	{
		#line 1104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getOverflowingAbs(__extension_UInt128_512_u128 const& __this ) -> const std::tuple<__extension_UInt128_1258_u128, bool>
	{
		#line 1106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(std::make_tuple(__this, Builtin::Boolean(false))); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	
} namespace __extensions { using namespace System;
#line 1154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto NextMultipleOf(__extension_UInt128_1109_u128 const& __this LIFETIMEBOUND, __extension_UInt128_1258_u128 rhs)  -> const typename __extension_UInt128_1109_u128
	{
		#line 1156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		const auto rem = __this % rhs; 
		#line 1157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return rem == Builtin::u32(0U) ? __this : __this + (rhs - rem);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto CheckedNextMultipleOf(__extension_UInt128_1109_u128 const& __this LIFETIMEBOUND, __extension_UInt128_1258_u128 rhs) noexcept -> const Builtin::Nullable<__extension_UInt128_1258_u128>
	{
		#line 1164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (const auto rem = ADV_UFCS(_operator_mod_qst)(__this, rhs)) {
			{
				#line 1164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				auto __tmp0 = *rem; const auto& rem = __tmp0;
				
				#line 1165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				if (rem == Builtin::u32(0U)) {
					#line 1166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
					return __this;
				}
				#line 1168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				return ADV_UFCS(_operator_add_qst)(__this, (rhs - rem));
			}
		}
		#line 1170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto __static_getIsSigned<__extension_UInt128_1109_u128>::get() -> const bool
	{
		#line 1110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getTrailingZeroCount(__extension_UInt128_1109_u128 const& __this ) -> const Builtin::u32
	{
		#line 1114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (ADV_UFCS(Low64)(__this.__ref()) == Builtin::i32(0)) {
			#line 1115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return ADV_UPCS(TrailingZeroCount)(ADV_UFCS(High64)(__this.__ref()).__ref()) + Builtin::u32(64U);
		}
		#line 1117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return ADV_UPCS(TrailingZeroCount)(ADV_UFCS(Low64)(__this.__ref()).__ref());
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getTrailingOneCount(__extension_UInt128_1109_u128 const& __this ) -> const Builtin::u32
	{
		#line 1119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(TrailingZeroCount)((ADV_UFCS(_operator_not)(__this)).__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getByteCount(__extension_UInt128_1109_u128 const& __this ) -> const Builtin::u32
	{
		#line 1120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u32>(Builtin::usize(sizeof(__extension_UInt128_1258_u128)))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getMinimalBitWidth(__extension_UInt128_1109_u128 const& __this ) -> const Builtin::u32
	{
		#line 1121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(BitWidth, __extension_UInt128_1258_u128)() - ADV_UPCS(LeadingZeroCount)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline auto getIsqrt(__extension_UInt128_1109_u128 const& __this ) -> const __extension_UInt128_1258_u128
	{
		#line 1132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (const auto result = ADV_UPCS(CheckedIsqrt)(__this.__ref())) {
			{
				#line 1132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 1133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				return result;
			}
		}
		#line 1135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getLog2Ceiling(__extension_UInt128_1109_u128 const& __this ) -> const __extension_UInt128_1258_u128
	{
		#line 1142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		auto result = ADV_UPCS(Log2)(__this.__ref()); 
		#line 1143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (ADV_UPCS(PopCount)(__this.__ref()) != Builtin::u32(1U)) {
			#line 1144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			++result;
		}
		#line 1147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return result;
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getPrevPow2(__extension_UInt128_1109_u128 const& __this ) -> const __extension_UInt128_1258_u128
	{
		#line 1176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if ((__this <=> Builtin::u32(1U)) <= 0) {
			#line 1177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return Builtin::u128(0ULL);
		}
		#line 1180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return ADV_USPCS(One, __extension_UInt128_1258_u128)() << (ADV_UPCS(MinimalBitWidth)(__this.__ref()) - Builtin::u128(1ULL));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getNextPow2(__extension_UInt128_1109_u128 const& __this ) -> const __extension_UInt128_1258_u128
	{
		#line 1187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if ((__this <=> Builtin::u32(1U)) <= 0) {
			#line 1188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return Builtin::u128(0ULL);
		}
		#line 1191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		const auto p = __this - Builtin::u128(1ULL); 
		#line 1192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return (ADV_USPCS(AllBitsSet, __extension_UInt128_1258_u128)() >> ADV_UPCS(LeadingZeroCount)(p.__ref())) + Builtin::u128(1ULL);
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getCheckedNextPow2(__extension_UInt128_1109_u128 const& __this ) -> const Builtin::Nullable<__extension_UInt128_1258_u128>
	{
		#line 1199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if ((__this <=> Builtin::u32(1U)) <= 0) {
			#line 1200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return Builtin::u128(0ULL);
		}
		#line 1203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		const auto p = __this - Builtin::u128(1ULL); 
		#line 1204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return ADV_UFCS(_operator_add_qst)((ADV_USPCS(AllBitsSet, __extension_UInt128_1258_u128)() >> ADV_UPCS(LeadingZeroCount)(p.__ref())), Builtin::u128(1ULL));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getWrappingNextPow2(__extension_UInt128_1109_u128 const& __this ) -> const __extension_UInt128_1258_u128
	{
		#line 1211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if ((__this <=> Builtin::u32(1U)) <= 0) {
			#line 1212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return Builtin::u128(0ULL);
		}
		#line 1215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		const auto p = __this - Builtin::u128(1ULL); 
		#line 1216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return ADV_UFCS(_operator_add_mod)((ADV_USPCS(AllBitsSet, __extension_UInt128_1258_u128)() >> ADV_UPCS(LeadingZeroCount)(p.__ref())), Builtin::u128(1ULL));
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	
} namespace __extensions { using namespace System;
#line 1253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto RotateLeft(__extension_UInt128_1220_u128 const& __this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename __extension_UInt128_1220_u128
	{
		#line 1253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY((__this << shiftAmount) | (__this >> Builtin::i32{ADV_USPCS(BitWidth, __extension_UInt128_1258_u128)() - shiftAmount})); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto RotateRight(__extension_UInt128_1220_u128 const& __this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename __extension_UInt128_1220_u128
	{
		#line 1254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY((__this >> Builtin::i32{shiftAmount}) | (__this << (ADV_USPCS(BitWidth, __extension_UInt128_1258_u128)() - shiftAmount))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto __static_getBitWidth<__extension_UInt128_1220_u128>::get() -> const Builtin::u32
	{
		#line 1221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(128U)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getLeadingZeroCount(__extension_UInt128_1220_u128 const& __this ) -> const Builtin::u32
	{
		#line 1225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (ADV_UFCS(High64)(__this.__ref()) == Builtin::i32(0)) {
			#line 1226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return Builtin::u32(64U) + Builtin::LeadingZeroCount(ADV_UFCS(Low64)(__this.__ref()));
		}
		#line 1229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return Builtin::LeadingZeroCount(ADV_UFCS(High64)(__this.__ref()));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getLeadingOneCount(__extension_UInt128_1220_u128 const& __this ) -> const Builtin::u32
	{
		#line 1231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(LeadingZeroCount)((ADV_UFCS(_operator_not)(__this)).__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getPopCount(__extension_UInt128_1220_u128 const& __this ) -> const Builtin::u32
	{
		#line 1232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(Builtin::PopCount(ADV_UFCS(High64)(__this.__ref())) + Builtin::PopCount(ADV_UFCS(Low64)(__this.__ref()))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getZeroCount(__extension_UInt128_1220_u128 const& __this ) -> const Builtin::u32
	{
		#line 1233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(PopCount)((ADV_UFCS(_operator_not)(__this)).__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getByteSwapped(__extension_UInt128_1220_u128 const& __this ) -> const __extension_UInt128_1258_u128
	{
		#line 1234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(Builtin::u128{ADV_UPCS(ByteSwapped)(ADV_UFCS(Low64)(__this.__ref()).__ref()), ADV_UPCS(ByteSwapped)(ADV_UFCS(High64)(__this.__ref()).__ref())}); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getBigEndian(__extension_UInt128_1220_u128 const& __this ) -> const __extension_UInt128_1258_u128
	{
		#line 1237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if constexpr (Builtin::IsLittleEndian()) {
			#line 1238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return ADV_UPCS(ByteSwapped)(__this.__ref());
		}
		#line 1240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return __this;
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getLittleEndian(__extension_UInt128_1220_u128 const& __this ) -> const __extension_UInt128_1258_u128
	{
		#line 1244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if constexpr (Builtin::IsBigEndian()) {
			#line 1245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			return ADV_UPCS(ByteSwapped)(__this.__ref());
		}
		#line 1247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return __this;
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getReverseBits(__extension_UInt128_1220_u128 const& __this ) -> const __extension_UInt128_1258_u128
	{
		#line 1249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(Builtin::u128{Builtin::ReverseBits64u(ADV_UFCS(Low64)(__this.__ref())), Builtin::ReverseBits64u(ADV_UFCS(High64)(__this.__ref()))}); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getShortestBitLength(__extension_UInt128_1220_u128 const& __this ) -> const Builtin::u32
	{
		#line 1251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(BitWidth, __extension_UInt128_1258_u128)() - ADV_UPCS(LeadingZeroCount)(__this.__ref())); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	
} namespace __extensions { using namespace System;
#line 1266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto IsGreaterThanAsUnsigned(__extension_UInt128_1258_u128 const& __this LIFETIMEBOUND, __extension_UInt128_1258_u128 rhs) noexcept -> const bool
	{
		#line 1266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY((__this <=> rhs) > 0); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto __static_getMaxDigitCount<__extension_UInt128_1258_u128>::get() -> const Builtin::i32
	{
		#line 1259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(39)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto __static_getMaxHexDigitCount<__extension_UInt128_1258_u128>::get() -> const Builtin::i32
	{
		#line 1260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(32)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto __static_getMaxValueDiv10<__extension_UInt128_1258_u128>::get() -> const __extension_UInt128_1258_u128
	{
		#line 1261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl)(ADV_USPCS(MaxValue, Builtin::u128)(), Builtin::i32(10))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getMultiplyBy10(__extension_UInt128_1258_u128 const& __this ) -> const __extension_UInt128_1258_u128
	{
		#line 1263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_mod)(__this, Builtin::u128(10ULL))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	inline constexpr auto getMultiplyBy16(__extension_UInt128_1258_u128 const& __this ) -> const __extension_UInt128_1258_u128
	{
		#line 1264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_mod)(__this, Builtin::u128(16ULL))); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	

}