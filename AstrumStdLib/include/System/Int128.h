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
namespace __Unsafe {} namespace __Int128_Protected__Unsafe {}
//###############################################################################
//# Global type aliases
//###############################################################################
#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
using Int128 = Builtin::i128;
//###############################################################################
//# Type definitions
//###############################################################################
	} namespace __extensions { using namespace System;
#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	using __extension_Int128_16_i128 = Builtin::i128;
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE(IMinMaxValue, IMinMaxValue);
	#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class __TT> struct __static_getMinValue; template<> struct __static_getMinValue<__extension_Int128_16_i128> { static inline constexpr auto get() -> const __extension_Int128_16_i128; };
	#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class __TT> struct __static_getMaxValue; template<> struct __static_getMaxValue<__extension_Int128_16_i128> { static inline constexpr auto get() -> const __extension_Int128_16_i128; };
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i128, IMinMaxValue, IMinMaxValue, i128);
	} namespace System{
using __extensions::__static_getMinValue;
using __extensions::__static_getMaxValue;

		} namespace __extensions { using namespace System;
#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	using __extension_Int128_21_i128 = Builtin::i128;
	#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ASTRUMSTD_API auto _operator_eq_eq_mul(__extension_Int128_21_i128 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool;
	#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto operator<=>(__extension_Int128_21_i128 const& __this LIFETIMEBOUND, Builtin::Nullable<__extension_Int128_21_i128> rhs) noexcept -> const Builtin::i32;
	#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_gt_gt_gt(__extension_Int128_21_i128 const& __this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename __extension_Int128_21_i128;
	#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_gt_gt_gt_eq(__extension_Int128_21_i128 & __this , Builtin::i32 amount)  -> typename __extension_Int128_21_i128&;
	#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_lt_lt_bsl(__extension_Int128_21_i128 const& __this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename __extension_Int128_21_i128;
	#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_lt_lt_bsl_eq(__extension_Int128_21_i128 & __this , Builtin::u32 amount) noexcept -> typename __extension_Int128_21_i128&;
	#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_gt_gt_bsl(__extension_Int128_21_i128 const& __this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename __extension_Int128_21_i128;
	#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_gt_gt_bsl_eq(__extension_Int128_21_i128 & __this , Builtin::u32 amount) noexcept -> typename __extension_Int128_21_i128&;
	#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getHashCode(__extension_Int128_21_i128 const& __this ) -> const Builtin::u64;
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
#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	using __extension_Int128_90_i128 = Builtin::i128;
	#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE(IAbstractComparable, IAbstractComparable);
	#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ASTRUMSTD_API auto _operator_lt_eq_gt_mul(__extension_Int128_90_i128 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32;
	#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i128, IAbstractComparable, IAbstractComparable, i128);
	} namespace System{
using __extensions::_operator_lt_eq_gt_mul;

		} namespace __extensions { using namespace System;
#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	using __extension_Int128_105_i128 = Builtin::i128;
	#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE(IConvertible, IConvertible);
	#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToBoolean(__extension_Int128_105_i128 const& __this LIFETIMEBOUND) noexcept -> const bool;
	#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToInt8(__extension_Int128_105_i128 const& __this LIFETIMEBOUND)  -> const Builtin::i8;
	#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToUInt8(__extension_Int128_105_i128 const& __this LIFETIMEBOUND)  -> const Builtin::u8;
	#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToInt16(__extension_Int128_105_i128 const& __this LIFETIMEBOUND)  -> const Builtin::i16;
	#line 125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToUInt16(__extension_Int128_105_i128 const& __this LIFETIMEBOUND)  -> const Builtin::u16;
	#line 131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToInt32(__extension_Int128_105_i128 const& __this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToUInt32(__extension_Int128_105_i128 const& __this LIFETIMEBOUND)  -> const Builtin::u32;
	#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToInt64(__extension_Int128_105_i128 const& __this LIFETIMEBOUND)  -> const Builtin::i64;
	#line 149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToUInt64(__extension_Int128_105_i128 const& __this LIFETIMEBOUND)  -> const Builtin::u64;
	#line 155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToInt128(__extension_Int128_105_i128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i128;
	#line 156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToUInt128(__extension_Int128_105_i128 const& __this LIFETIMEBOUND)  -> const Builtin::u128;
	#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToIsize(__extension_Int128_105_i128 const& __this LIFETIMEBOUND)  -> const Builtin::isize;
	#line 173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToUsize(__extension_Int128_105_i128 const& __this LIFETIMEBOUND)  -> const Builtin::usize;
	#line 184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToFloat32(__extension_Int128_105_i128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::f32;
	#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToFloat64(__extension_Int128_105_i128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::f64;
	#line 186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToByte(__extension_Int128_105_i128 const& __this LIFETIMEBOUND)  -> const Builtin::char8;
	#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToChar(__extension_Int128_105_i128 const& __this LIFETIMEBOUND)  -> const Builtin::char16;
	#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i128, IConvertible, IConvertible, i128);
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
#line 198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	using __extension_Int128_198_i128 = Builtin::i128;
	#line 198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE(IDivisibleArithmetic, IDivisibleArithmetic);
	#line 200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_div_mod(__extension_Int128_198_i128 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_Int128_198_i128, __extension_Int128_198_i128>;
	#line 206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_div_not(__extension_Int128_198_i128 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int128_198_i128;
	#line 213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_div_not_eq(__extension_Int128_198_i128 & __this , auto rhs)  -> typename __extension_Int128_198_i128&;
	#line 215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_div_lt(__extension_Int128_198_i128 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int128_198_i128;
	#line 229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_div_lt_eq(__extension_Int128_198_i128 & __this , auto rhs)  -> typename __extension_Int128_198_i128&;
	#line 231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_div_gt(__extension_Int128_198_i128 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int128_198_i128;
	#line 245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_div_gt_eq(__extension_Int128_198_i128 & __this , auto rhs)  -> typename __extension_Int128_198_i128&;
	#line 198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i128, IDivisibleArithmetic, IDivisibleArithmetic, i128);
	} namespace System{
using __extensions::_operator_div_mod;
using __extensions::_operator_div_not;
using __extensions::_operator_div_not_eq;
using __extensions::_operator_div_lt;
using __extensions::_operator_div_lt_eq;
using __extensions::_operator_div_gt;
using __extensions::_operator_div_gt_eq;

		} namespace __extensions { using namespace System;
#line 248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	using __extension_Int128_248_i128 = Builtin::i128;
	#line 248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE(IIntegerDivisibleArithmetic, IIntegerDivisibleArithmetic);
	#line 250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl(__extension_Int128_248_i128 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int128_248_i128;
	#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_eq(__extension_Int128_248_i128 & __this , T rhs)  -> typename __extension_Int128_248_i128&;
	#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl(__extension_Int128_248_i128 const& __this LIFETIMEBOUND, T rhs)  -> const Builtin::Nullable<__extension_Int128_248_i128>;
	#line 248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i128, IIntegerDivisibleArithmetic, IIntegerDivisibleArithmetic, i128);
	} namespace System{
using __extensions::_operator_bsl;
using __extensions::_operator_bsl_eq;
using __extensions::_operator_bsl_bsl;

		} namespace __extensions { using namespace System;
#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	using __extension_Int128_268_i128 = Builtin::i128;
	#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE(IIntegerPowerArithmetic, IIntegerPowerArithmetic);
	#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor(__extension_Int128_268_i128 const& __this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename __extension_Int128_268_i128;
	#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor_eq(__extension_Int128_268_i128 & __this , Builtin::u32 exp)  -> typename __extension_Int128_268_i128&;
	#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i128, IIntegerPowerArithmetic, IIntegerPowerArithmetic, i128);
	} namespace System{
using __extensions::_operator_xor_xor;
using __extensions::_operator_xor_xor_eq;

		} namespace __extensions { using namespace System;
#line 306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	using __extension_Int128_306_i128 = Builtin::i128;
	#line 306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE(INumberBase, INumberBase);
	#line 330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ASTRUMSTD_API auto MaxMagnitude(__extension_Int128_306_i128 const& __this LIFETIMEBOUND, __extension_Int128_306_i128 rhs)  -> const typename __extension_Int128_306_i128;
	#line 359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline auto MaxMagnitudeNumber(__extension_Int128_306_i128 const& __this LIFETIMEBOUND, __extension_Int128_306_i128 rhs)  -> const typename __extension_Int128_306_i128;
	#line 361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ASTRUMSTD_API auto MinMagnitude(__extension_Int128_306_i128 const& __this LIFETIMEBOUND, __extension_Int128_306_i128 rhs)  -> const typename __extension_Int128_306_i128;
	#line 390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline auto MinMagnitudeNumber(__extension_Int128_306_i128 const& __this LIFETIMEBOUND, __extension_Int128_306_i128 rhs)  -> const typename __extension_Int128_306_i128;
	#line 392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ASTRUMSTD_API auto Parse(__extension_Int128_306_i128 const& __this LIFETIMEBOUND, Builtin::Str input)  -> const typename __extension_Int128_306_i128;
	#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ASTRUMSTD_API auto TryParse(__extension_Int128_306_i128 const& __this LIFETIMEBOUND, Builtin::Str input) noexcept -> const Builtin::Nullable<__extension_Int128_306_i128>;
	#line 404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToInt8(__extension_Int128_306_i128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i8;
	#line 405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToUInt8(__extension_Int128_306_i128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u8;
	#line 406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToInt16(__extension_Int128_306_i128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i16;
	#line 407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToUInt16(__extension_Int128_306_i128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u16;
	#line 408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToInt32(__extension_Int128_306_i128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i32;
	#line 409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToUInt32(__extension_Int128_306_i128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u32;
	#line 410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToInt64(__extension_Int128_306_i128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i64;
	#line 411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToUInt64(__extension_Int128_306_i128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u64;
	#line 412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToInt128(__extension_Int128_306_i128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i128;
	#line 413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToUInt128(__extension_Int128_306_i128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u128;
	#line 414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToIsize(__extension_Int128_306_i128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::isize;
	#line 415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToUsize(__extension_Int128_306_i128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::usize;
	#line 307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class __TT> struct __static_getOne; template<> struct __static_getOne<__extension_Int128_306_i128> { static inline constexpr auto get() -> const __extension_Int128_306_i128; };
	#line 308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class __TT> struct __static_getZero; template<> struct __static_getZero<__extension_Int128_306_i128> { static inline constexpr auto get() -> const __extension_Int128_306_i128; };
	#line 309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class __TT> struct __static_getRadix; template<> struct __static_getRadix<__extension_Int128_306_i128> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getAbs(__extension_Int128_306_i128 const& __this ) -> const __extension_Int128_306_i128;
	#line 312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsCanonical(__extension_Int128_306_i128 const& __this ) -> const bool;
	#line 313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsComplexNumber(__extension_Int128_306_i128 const& __this ) -> const bool;
	#line 314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsEvenInteger(__extension_Int128_306_i128 const& __this ) -> const bool;
	#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsFinite(__extension_Int128_306_i128 const& __this ) -> const bool;
	#line 316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsImaginaryNumber(__extension_Int128_306_i128 const& __this ) -> const bool;
	#line 317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsInfinity(__extension_Int128_306_i128 const& __this ) -> const bool;
	#line 318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsInteger(__extension_Int128_306_i128 const& __this ) -> const bool;
	#line 319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsNaN(__extension_Int128_306_i128 const& __this ) -> const bool;
	#line 320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsNegative(__extension_Int128_306_i128 const& __this ) -> const bool;
	#line 321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsNegativeInfinity(__extension_Int128_306_i128 const& __this ) -> const bool;
	#line 322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsNormal(__extension_Int128_306_i128 const& __this ) -> const bool;
	#line 323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsOddInteger(__extension_Int128_306_i128 const& __this ) -> const bool;
	#line 324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsPositive(__extension_Int128_306_i128 const& __this ) -> const bool;
	#line 325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsPositiveInfinity(__extension_Int128_306_i128 const& __this ) -> const bool;
	#line 326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsRealNumber(__extension_Int128_306_i128 const& __this ) -> const bool;
	#line 327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsSubnormal(__extension_Int128_306_i128 const& __this ) -> const bool;
	#line 328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsZero(__extension_Int128_306_i128 const& __this ) -> const bool;
	#line 306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i128, INumberBase, INumberBase, i128);
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
#line 418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	using __extension_Int128_418_i128 = Builtin::i128;
	#line 418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE(ISignedNumber, ISignedNumber);
	#line 419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class __TT> struct __static_getMinusOne; template<> struct __static_getMinusOne<__extension_Int128_418_i128> { static inline constexpr auto get() -> const __extension_Int128_418_i128; };
	#line 418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i128, ISignedNumber, ISignedNumber, i128);
	} namespace System{
using __extensions::__static_getMinusOne;

		} namespace __extensions { using namespace System;
#line 422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	using __extension_Int128_422_i128 = Builtin::i128;
	#line 422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE(INumber, INumber);
	#line 436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ASTRUMSTD_API auto CopySign(__extension_Int128_422_i128 const& __this LIFETIMEBOUND, __extension_Int128_422_i128 sign)  -> const typename __extension_Int128_422_i128;
	#line 454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto Max(__extension_Int128_422_i128 const& __this LIFETIMEBOUND, __extension_Int128_422_i128 rhs) noexcept -> const typename __extension_Int128_422_i128;
	#line 455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto MaxNumber(__extension_Int128_422_i128 const& __this LIFETIMEBOUND, __extension_Int128_422_i128 rhs) noexcept -> const typename __extension_Int128_422_i128;
	#line 456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto Min(__extension_Int128_422_i128 const& __this LIFETIMEBOUND, __extension_Int128_422_i128 rhs) noexcept -> const typename __extension_Int128_422_i128;
	#line 457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto MinNumber(__extension_Int128_422_i128 const& __this LIFETIMEBOUND, __extension_Int128_422_i128 rhs) noexcept -> const typename __extension_Int128_422_i128;
	#line 458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto Clamp(__extension_Int128_422_i128 const& __this LIFETIMEBOUND, __extension_Int128_422_i128 min, __extension_Int128_422_i128 max)  -> const typename __extension_Int128_422_i128;
	#line 423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getSign(__extension_Int128_422_i128 const& __this ) -> const Builtin::i32;
	#line 422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i128, INumber, INumber, i128);
	} namespace System{
using __extensions::CopySign;
using __extensions::Max;
using __extensions::MaxNumber;
using __extensions::Min;
using __extensions::MinNumber;
using __extensions::Clamp;
using __extensions::getSign;

		} namespace __extensions { using namespace System;
#line 472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	using __extension_Int128_472_i128 = Builtin::i128;
	#line 472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE(IBinaryNumber, IBinaryNumber);
	#line 550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto CheckedLog(__extension_Int128_472_i128 const& __this LIFETIMEBOUND, __extension_Int128_472_i128 base) noexcept -> const Builtin::Nullable<__extension_Int128_472_i128>;
	#line 584 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ASTRUMSTD_API auto Log(__extension_Int128_472_i128 const& __this LIFETIMEBOUND, __extension_Int128_472_i128 base)  -> const typename __extension_Int128_472_i128;
	#line 594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto Midpoint(__extension_Int128_472_i128 const& __this LIFETIMEBOUND, __extension_Int128_472_i128 rhs) noexcept -> const typename __extension_Int128_472_i128;
	#line 602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto IsMultipleOf(__extension_Int128_472_i128 const& __this LIFETIMEBOUND, __extension_Int128_472_i128 rhs) noexcept -> const bool;
	#line 474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class __TT> struct __static_getAllBitsSet; template<> struct __static_getAllBitsSet<__extension_Int128_472_i128> { static inline constexpr auto get() -> const __extension_Int128_472_i128; };
	#line 477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsPow2(__extension_Int128_472_i128 const& __this ) -> const bool;
	#line 481 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getCheckedLog2(__extension_Int128_472_i128 const& __this ) -> const Builtin::Nullable<__extension_Int128_472_i128>;
	#line 491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getLog2(__extension_Int128_472_i128 const& __this ) -> const __extension_Int128_472_i128;
	#line 501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getCheckedLog10(__extension_Int128_472_i128 const& __this ) -> const Builtin::Nullable<__extension_Int128_472_i128>;
	#line 540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getLog10(__extension_Int128_472_i128 const& __this ) -> const __extension_Int128_472_i128;
	#line 472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i128, IBinaryNumber, IBinaryNumber, i128);
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
#line 616 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	using __extension_Int128_616_i128 = Builtin::i128;
	#line 616 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE(ICheckedArithmetic, ICheckedArithmetic);
	#line 619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_add_qst(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_Int128_616_i128>;
	#line 628 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_add_qst_eq(__extension_Int128_616_i128 & __this , T rhs) noexcept -> typename __extension_Int128_616_i128&;
	#line 639 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_add_ne(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int128_616_i128;
	#line 646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_add_ne_eq(__extension_Int128_616_i128 & __this , T rhs)  -> typename __extension_Int128_616_i128&;
	#line 650 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_add_mod(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_Int128_616_i128;
	#line 657 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_add_mod_eq(__extension_Int128_616_i128 & __this , T rhs) noexcept -> typename __extension_Int128_616_i128&;
	#line 661 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_add_or(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_Int128_616_i128;
	#line 668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_add_or_eq(__extension_Int128_616_i128 & __this , T rhs) noexcept -> typename __extension_Int128_616_i128&;
	#line 672 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_add_mod_qst(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<__extension_Int128_616_i128, bool>;
	#line 680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_qst(__extension_Int128_616_i128 & __this )  -> typename __extension_Int128_616_i128&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_qst_postfix(__extension_Int128_616_i128 & __this)  -> decltype(auto);
	#line 683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_ne(__extension_Int128_616_i128 & __this )  -> typename __extension_Int128_616_i128&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_ne_postfix(__extension_Int128_616_i128 & __this)  -> decltype(auto);
	#line 686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_mod(__extension_Int128_616_i128 & __this )  -> typename __extension_Int128_616_i128&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_mod_postfix(__extension_Int128_616_i128 & __this)  -> decltype(auto);
	#line 689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_or(__extension_Int128_616_i128 & __this )  -> typename __extension_Int128_616_i128&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_or_postfix(__extension_Int128_616_i128 & __this)  -> decltype(auto);
	#line 693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto CarryingAdd(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, __extension_Int128_616_i128 rhs, bool carry) noexcept -> const std::tuple<__extension_Int128_616_i128, bool>;
	#line 702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto BorrowingSub(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, __extension_Int128_616_i128 rhs, bool carry) noexcept -> const std::tuple<__extension_Int128_616_i128, bool>;
	#line 711 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_sub_qst(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_Int128_616_i128>;
	#line 720 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_sub_qst_eq(__extension_Int128_616_i128 & __this , T rhs) noexcept -> typename __extension_Int128_616_i128&;
	#line 731 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_sub_ne(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int128_616_i128;
	#line 738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_sub_ne_eq(__extension_Int128_616_i128 & __this , T rhs)  -> typename __extension_Int128_616_i128&;
	#line 742 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_sub_mod(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_Int128_616_i128;
	#line 749 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_sub_mod_eq(__extension_Int128_616_i128 & __this , T rhs) noexcept -> typename __extension_Int128_616_i128&;
	#line 753 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_sub_or(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_Int128_616_i128;
	#line 760 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_sub_or_eq(__extension_Int128_616_i128 & __this , T rhs) noexcept -> typename __extension_Int128_616_i128&;
	#line 764 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_sub_mod_qst(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<__extension_Int128_616_i128, bool>;
	#line 772 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_qst(__extension_Int128_616_i128 & __this )  -> typename __extension_Int128_616_i128&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_qst_postfix(__extension_Int128_616_i128 & __this)  -> decltype(auto);
	#line 775 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_ne(__extension_Int128_616_i128 & __this )  -> typename __extension_Int128_616_i128&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_ne_postfix(__extension_Int128_616_i128 & __this)  -> decltype(auto);
	#line 778 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_mod(__extension_Int128_616_i128 & __this )  -> typename __extension_Int128_616_i128&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_mod_postfix(__extension_Int128_616_i128 & __this)  -> decltype(auto);
	#line 781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_or(__extension_Int128_616_i128 & __this )  -> typename __extension_Int128_616_i128&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_or_postfix(__extension_Int128_616_i128 & __this)  -> decltype(auto);
	#line 785 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mul_qst(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_Int128_616_i128>;
	#line 794 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mul_qst_eq(__extension_Int128_616_i128 & __this , T rhs) noexcept -> typename __extension_Int128_616_i128&;
	#line 805 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mul_ne(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int128_616_i128;
	#line 812 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mul_ne_eq(__extension_Int128_616_i128 & __this , T rhs)  -> typename __extension_Int128_616_i128&;
	#line 816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mul_mod(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_Int128_616_i128;
	#line 823 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mul_mod_eq(__extension_Int128_616_i128 & __this , T rhs) noexcept -> typename __extension_Int128_616_i128&;
	#line 827 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mul_or(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_Int128_616_i128;
	#line 834 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mul_or_eq(__extension_Int128_616_i128 & __this , T rhs) noexcept -> typename __extension_Int128_616_i128&;
	#line 838 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mul_mod_qst(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<__extension_Int128_616_i128, bool>;
	#line 847 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline auto _operator_mul_gt(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, __extension_Int128_616_i128 rhs) noexcept -> const std::tuple<Builtin::u128, Builtin::i128>;
	#line 856 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline auto CarryingMul(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, __extension_Int128_616_i128 rhs, __extension_Int128_616_i128 carry) noexcept -> const std::tuple<Builtin::u128, Builtin::i128>;
	#line 864 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_qst(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_Int128_616_i128>;
	#line 873 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_qst_eq(__extension_Int128_616_i128 & __this , T rhs) noexcept -> typename __extension_Int128_616_i128&;
	#line 885 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_ne(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int128_616_i128;
	#line 892 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_ne_eq(__extension_Int128_616_i128 & __this , T rhs)  -> typename __extension_Int128_616_i128&;
	#line 897 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_mod(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int128_616_i128;
	#line 904 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_eq(__extension_Int128_616_i128 & __this , T rhs)  -> typename __extension_Int128_616_i128&;
	#line 909 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_or(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int128_616_i128;
	#line 916 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_or_eq(__extension_Int128_616_i128 & __this , T rhs)  -> typename __extension_Int128_616_i128&;
	#line 921 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_qst(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_Int128_616_i128, bool>;
	#line 930 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_Int128_616_i128>;
	#line 940 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst_eq(__extension_Int128_616_i128 & __this , T rhs) noexcept -> typename __extension_Int128_616_i128&;
	#line 951 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mod_qst(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_Int128_616_i128>;
	#line 960 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mod_qst_eq(__extension_Int128_616_i128 & __this , T rhs) noexcept -> typename __extension_Int128_616_i128&;
	#line 972 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mod_ne(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int128_616_i128;
	#line 979 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mod_ne_eq(__extension_Int128_616_i128 & __this , T rhs)  -> typename __extension_Int128_616_i128&;
	#line 984 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mod_mod(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int128_616_i128;
	#line 991 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mod_mod_eq(__extension_Int128_616_i128 & __this , T rhs)  -> typename __extension_Int128_616_i128&;
	#line 996 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mod_mod_qst(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_Int128_616_i128, bool>;
	#line 1005 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_sub_qst(__extension_Int128_616_i128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::Nullable<__extension_Int128_616_i128>;
	#line 1015 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_sub_ne(__extension_Int128_616_i128 const& __this LIFETIMEBOUND)  -> const typename __extension_Int128_616_i128;
	#line 1022 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_sub_mod(__extension_Int128_616_i128 const& __this LIFETIMEBOUND)  -> const typename __extension_Int128_616_i128;
	#line 1030 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_sub_or(__extension_Int128_616_i128 const& __this LIFETIMEBOUND)  -> const typename __extension_Int128_616_i128;
	#line 1038 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_sub_mod_qst(__extension_Int128_616_i128 const& __this LIFETIMEBOUND)  -> const std::tuple<__extension_Int128_616_i128, bool>;
	#line 1046 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_lt_lt_qst(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<__extension_Int128_616_i128>;
	#line 1054 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_lt_lt_qst_eq(__extension_Int128_616_i128 & __this , Builtin::i32 amount) noexcept -> typename __extension_Int128_616_i128&;
	#line 1062 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_lt_lt_ne(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename __extension_Int128_616_i128;
	#line 1070 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_lt_lt_ne_eq(__extension_Int128_616_i128 & __this , Builtin::i32 amount)  -> typename __extension_Int128_616_i128&;
	#line 1072 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_lt_lt_mod(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename __extension_Int128_616_i128;
	#line 1075 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_lt_lt_mod_eq(__extension_Int128_616_i128 & __this , Builtin::i32 amount) noexcept -> typename __extension_Int128_616_i128&;
	#line 1077 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_lt_lt_mod_qst(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<__extension_Int128_616_i128, bool>;
	#line 1080 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_gt_gt_qst(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<__extension_Int128_616_i128>;
	#line 1088 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_gt_gt_qst_eq(__extension_Int128_616_i128 & __this , Builtin::i32 amount) noexcept -> typename __extension_Int128_616_i128&;
	#line 1096 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_gt_gt_ne(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename __extension_Int128_616_i128;
	#line 1104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_gt_gt_ne_eq(__extension_Int128_616_i128 & __this , Builtin::i32 amount)  -> typename __extension_Int128_616_i128&;
	#line 1106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_gt_gt_mod(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename __extension_Int128_616_i128;
	#line 1109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_gt_gt_mod_eq(__extension_Int128_616_i128 & __this , Builtin::i32 amount) noexcept -> typename __extension_Int128_616_i128&;
	#line 1111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_gt_gt_mod_qst(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<__extension_Int128_616_i128, bool>;
	#line 1116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor_qst(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const Builtin::Nullable<__extension_Int128_616_i128>;
	#line 1145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor_qst_eq(__extension_Int128_616_i128 & __this , Builtin::u32 exp) noexcept -> typename __extension_Int128_616_i128&;
	#line 1153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor_ne(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename __extension_Int128_616_i128;
	#line 1174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor_ne_eq(__extension_Int128_616_i128 & __this , Builtin::u32 exp)  -> typename __extension_Int128_616_i128&;
	#line 1176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor_mod(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename __extension_Int128_616_i128;
	#line 1208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor_mod_eq(__extension_Int128_616_i128 & __this , Builtin::u32 exp) noexcept -> typename __extension_Int128_616_i128&;
	#line 1210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor_or(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename __extension_Int128_616_i128;
	#line 1219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor_or_eq(__extension_Int128_616_i128 & __this , Builtin::u32 exp) noexcept -> typename __extension_Int128_616_i128&;
	#line 1221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor_mod_qst(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const std::tuple<__extension_Int128_616_i128, bool>;
	#line 1252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getCheckedAbs(__extension_Int128_616_i128 const& __this ) -> const Builtin::Nullable<__extension_Int128_616_i128>;
	#line 1255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getStrictAbs(__extension_Int128_616_i128 const& __this ) -> const __extension_Int128_616_i128;
	#line 1258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getWrappingAbs(__extension_Int128_616_i128 const& __this ) -> const __extension_Int128_616_i128;
	#line 1261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getSaturatingAbs(__extension_Int128_616_i128 const& __this ) -> const __extension_Int128_616_i128;
	#line 1264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getOverflowingAbs(__extension_Int128_616_i128 const& __this ) -> const std::tuple<__extension_Int128_616_i128, bool>;
	#line 616 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i128, ICheckedArithmetic, ICheckedArithmetic, i128);
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
#line 1273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	using __extension_Int128_1273_i128 = Builtin::i128;
	#line 1273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE(IBinaryInteger, IBinaryInteger);
	#line 1324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NextMultipleOf(__extension_Int128_1273_i128 const& __this LIFETIMEBOUND, __extension_Int128_1273_i128 rhs)  -> const typename __extension_Int128_1273_i128;
	#line 1340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto CheckedNextMultipleOf(__extension_Int128_1273_i128 const& __this LIFETIMEBOUND, __extension_Int128_1273_i128 rhs) noexcept -> const Builtin::Nullable<__extension_Int128_1273_i128>;
	#line 1274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class __TT> struct __static_getIsSigned; template<> struct __static_getIsSigned<__extension_Int128_1273_i128> { static inline constexpr auto get() -> const bool; };
	#line 1276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getTrailingZeroCount(__extension_Int128_1273_i128 const& __this ) -> const Builtin::u32;
	#line 1283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getTrailingOneCount(__extension_Int128_1273_i128 const& __this ) -> const Builtin::u32;
	#line 1284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getByteCount(__extension_Int128_1273_i128 const& __this ) -> const Builtin::u32;
	#line 1285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getMinimalBitWidth(__extension_Int128_1273_i128 const& __this ) -> const Builtin::u32;
	#line 1289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ASTRUMSTD_API auto getCheckedIsqrt(__extension_Int128_1273_i128 const& __this ) -> const Builtin::Nullable<__extension_Int128_1273_i128>;
	#line 1301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline auto getIsqrt(__extension_Int128_1273_i128 const& __this ) -> const __extension_Int128_1273_i128;
	#line 1310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getLog2Ceiling(__extension_Int128_1273_i128 const& __this ) -> const __extension_Int128_1273_i128;
	#line 1361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getPrevPow2(__extension_Int128_1273_i128 const& __this ) -> const __extension_Int128_1273_i128;
	#line 1372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getNextPow2(__extension_Int128_1273_i128 const& __this ) -> const __extension_Int128_1273_i128;
	#line 1384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getCheckedNextPow2(__extension_Int128_1273_i128 const& __this ) -> const Builtin::Nullable<__extension_Int128_1273_i128>;
	#line 1396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getWrappingNextPow2(__extension_Int128_1273_i128 const& __this ) -> const __extension_Int128_1273_i128;
	#line 1273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i128, IBinaryInteger, IBinaryInteger, i128);
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
#line 1407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	using __extension_Int128_1407_i128 = Builtin::i128;
	#line 1407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE(IFixedWidthInteger, IFixedWidthInteger);
	#line 1447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto RotateLeft(__extension_Int128_1407_i128 const& __this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename __extension_Int128_1407_i128;
	#line 1448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto RotateRight(__extension_Int128_1407_i128 const& __this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename __extension_Int128_1407_i128;
	#line 1408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class __TT> struct __static_getBitWidth; template<> struct __static_getBitWidth<__extension_Int128_1407_i128> { static inline constexpr auto get() -> const Builtin::u32; };
	#line 1410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getLeadingZeroCount(__extension_Int128_1407_i128 const& __this ) -> const Builtin::u32;
	#line 1418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getLeadingOneCount(__extension_Int128_1407_i128 const& __this ) -> const Builtin::u32;
	#line 1419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getPopCount(__extension_Int128_1407_i128 const& __this ) -> const Builtin::u32;
	#line 1420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getZeroCount(__extension_Int128_1407_i128 const& __this ) -> const Builtin::u32;
	#line 1421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getByteSwapped(__extension_Int128_1407_i128 const& __this ) -> const __extension_Int128_1407_i128;
	#line 1422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getBigEndian(__extension_Int128_1407_i128 const& __this ) -> const __extension_Int128_1407_i128;
	#line 1429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getLittleEndian(__extension_Int128_1407_i128 const& __this ) -> const __extension_Int128_1407_i128;
	#line 1436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getReverseBits(__extension_Int128_1407_i128 const& __this ) -> const __extension_Int128_1407_i128;
	#line 1438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getShortestBitLength(__extension_Int128_1407_i128 const& __this ) -> const Builtin::u32;
	#line 1407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i128, IFixedWidthInteger, IFixedWidthInteger, i128);
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
#line 1452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	using __extension_Int128_1452_i128 = Builtin::i128;
	#line 1452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE(IBinaryIntegerFormatInfo, IBinaryIntegerFormatInfo);
	#line 1460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto IsGreaterThanAsUnsigned(__extension_Int128_1452_i128 const& __this LIFETIMEBOUND, __extension_Int128_1452_i128 rhs) noexcept -> const bool;
	#line 1453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class __TT> struct __static_getMaxDigitCount; template<> struct __static_getMaxDigitCount<__extension_Int128_1452_i128> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class __TT> struct __static_getMaxHexDigitCount; template<> struct __static_getMaxHexDigitCount<__extension_Int128_1452_i128> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class __TT> struct __static_getMaxValueDiv10; template<> struct __static_getMaxValueDiv10<__extension_Int128_1452_i128> { static inline constexpr auto get() -> const __extension_Int128_1452_i128; };
	#line 1457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getMultiplyBy10(__extension_Int128_1452_i128 const& __this ) -> const __extension_Int128_1452_i128;
	#line 1458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getMultiplyBy16(__extension_Int128_1452_i128 const& __this ) -> const __extension_Int128_1452_i128;
	#line 1452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i128, IBinaryIntegerFormatInfo, IBinaryIntegerFormatInfo, i128);
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
#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto __static_getMinValue<__extension_Int128_16_i128>::get() -> const __extension_Int128_1452_i128
	{
		#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(INT128_MIN); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto __static_getMaxValue<__extension_Int128_16_i128>::get() -> const __extension_Int128_1452_i128
	{
		#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(+Builtin::ParseInt128("170141183460469231731687303715884105727")); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	
} namespace __extensions { using namespace System;
#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto operator<=>(__extension_Int128_21_i128 const& __this LIFETIMEBOUND, Builtin::Nullable<__extension_Int128_1452_i128> rhs) noexcept -> const Builtin::i32
	{
		#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		{
			#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			if ((!Builtin::Is(rhs, nullptr))) {
				#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				auto __tmp0 = *rhs; const auto& rhs = __tmp0;
				
				#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				return __this <=> rhs;
			}
		}
		#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return Builtin::i32(1);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_gt_gt_gt(__extension_Int128_21_i128 const& __this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename __extension_Int128_21_i128
	{
		#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i128>(UnsafeCast<Builtin::u128>(__this) >> amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_gt_gt_gt_eq(__extension_Int128_21_i128 & __this , Builtin::i32 amount)  -> typename __extension_Int128_21_i128&
	{
		#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_gt_gt_gt)(__this, amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_lt_lt_bsl(__extension_Int128_21_i128 const& __this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename __extension_Int128_21_i128
	{
		#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((amount <=> ADV_USPCS(BitWidth, __extension_Int128_1452_i128)()) >= 0) {
			#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return Builtin::i32(0);
		}
		#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return __this << amount;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_lt_lt_bsl_eq(__extension_Int128_21_i128 & __this , Builtin::u32 amount) noexcept -> typename __extension_Int128_21_i128&
	{
		#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_lt_lt_bsl)(__this, amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_gt_gt_bsl(__extension_Int128_21_i128 const& __this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename __extension_Int128_21_i128
	{
		#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((amount <=> ADV_USPCS(BitWidth, __extension_Int128_1452_i128)()) >= 0) {
			#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return ADV_UPCS(IsPositive)(__this.__ref()) ? Builtin::i32(0) : Builtin::i32(-1);
		}
		#line 62 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return __this >> amount;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_gt_gt_bsl_eq(__extension_Int128_21_i128 & __this , Builtin::u32 amount) noexcept -> typename __extension_Int128_21_i128&
	{
		#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_gt_gt_bsl)(__this, amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getHashCode(__extension_Int128_21_i128 const& __this ) -> const Builtin::u64
	{
		#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		auto finalize = [] (Builtin::u64 input) 
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
		const auto lowHash = finalize(ADV_UFCS(Low64)(__this.__ref())); 
		#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		const auto highHash = finalize(UnsafeCast<Builtin::u64>(ADV_UFCS(High64)(__this.__ref()))); 
		#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return lowHash ^ (ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_add_mod)(highHash, Builtin::u32(0x9e3779b9U)), (lowHash << Builtin::i32(6))), (lowHash >> Builtin::i32(2))));
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	
} namespace __extensions { using namespace System;
#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToBoolean(__extension_Int128_105_i128 const& __this LIFETIMEBOUND) noexcept -> const bool
	{
		#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(__this != Builtin::i32(0)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToInt8(__extension_Int128_105_i128 const& __this LIFETIMEBOUND)  -> const Builtin::i8
	{
		#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((__this <=> ADV_USPCS(MaxValue, Builtin::i8)()) > 0 || (__this <=> ADV_USPCS(MinValue, Builtin::i8)()) < 0) {
			#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return Builtin::Cast<true, Builtin::i8>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToUInt8(__extension_Int128_105_i128 const& __this LIFETIMEBOUND)  -> const Builtin::u8
	{
		#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((__this <=> Builtin::i32(0)) < 0 || (__this <=> ADV_USPCS(MaxValue, Builtin::u8)()) > 0) {
			#line 115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return Builtin::Cast<true, Builtin::u8>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToInt16(__extension_Int128_105_i128 const& __this LIFETIMEBOUND)  -> const Builtin::i16
	{
		#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((__this <=> ADV_USPCS(MaxValue, Builtin::i16)()) > 0 || (__this <=> ADV_USPCS(MinValue, Builtin::i16)()) < 0) {
			#line 121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return Builtin::Cast<true, Builtin::i16>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToUInt16(__extension_Int128_105_i128 const& __this LIFETIMEBOUND)  -> const Builtin::u16
	{
		#line 126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((__this <=> Builtin::i32(0)) < 0 || (__this <=> ADV_USPCS(MaxValue, Builtin::u16)()) > 0) {
			#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return Builtin::Cast<true, Builtin::u16>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToInt32(__extension_Int128_105_i128 const& __this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((__this <=> ADV_USPCS(MaxValue, Builtin::i32)()) > 0 || (__this <=> ADV_USPCS(MinValue, Builtin::i32)()) < 0) {
			#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return Builtin::Cast<true, Builtin::i32>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToUInt32(__extension_Int128_105_i128 const& __this LIFETIMEBOUND)  -> const Builtin::u32
	{
		#line 138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((__this <=> Builtin::i32(0)) < 0 || (__this <=> ADV_USPCS(MaxValue, Builtin::u32)()) > 0) {
			#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return Builtin::Cast<true, Builtin::u32>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToInt64(__extension_Int128_105_i128 const& __this LIFETIMEBOUND)  -> const Builtin::i64
	{
		#line 144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((__this <=> ADV_USPCS(MaxValue, Builtin::i64)()) > 0 || (__this <=> ADV_USPCS(MinValue, Builtin::i64)()) < 0) {
			#line 145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return Builtin::Cast<true, Builtin::i64>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToUInt64(__extension_Int128_105_i128 const& __this LIFETIMEBOUND)  -> const Builtin::u64
	{
		#line 150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((__this <=> Builtin::i32(0)) < 0 || (__this <=> ADV_USPCS(MaxValue, Builtin::u64)()) > 0) {
			#line 151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return Builtin::Cast<true, Builtin::u64>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToInt128(__extension_Int128_105_i128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i128
	{
		#line 155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToUInt128(__extension_Int128_105_i128 const& __this LIFETIMEBOUND)  -> const Builtin::u128
	{
		#line 157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((__this <=> Builtin::i32(0)) < 0) {
			#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return Builtin::Cast<true, Builtin::u128>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToIsize(__extension_Int128_105_i128 const& __this LIFETIMEBOUND)  -> const Builtin::isize
	{
		#line 163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((__this <=> ADV_USPCS(MinValue, Builtin::i64)()) < 0 || (__this <=> ADV_USPCS(MaxValue, Builtin::i64)()) > 0) {
			#line 164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if constexpr ((Builtin::usize(sizeof(Builtin::isize)) <=> Builtin::i32(64)) < 0) {
			#line 167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			if ((__this <=> ADV_USPCS(MinValue, Builtin::i32)()) < 0 || (__this <=> ADV_USPCS(MaxValue, Builtin::i32)()) > 0) {
				#line 168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				Builtin::Throw(Builtin::IntegerOverflowException{});
			}
		}
		#line 171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return Builtin::Cast<true, Builtin::isize>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToUsize(__extension_Int128_105_i128 const& __this LIFETIMEBOUND)  -> const Builtin::usize
	{
		#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((__this <=> Builtin::i32(0)) < 0 || (__this <=> ADV_USPCS(MaxValue, Builtin::u64)()) > 0) {
			#line 175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if constexpr ((Builtin::usize(sizeof(Builtin::usize)) <=> Builtin::i32(64)) < 0) {
			#line 178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			if ((__this <=> ADV_USPCS(MaxValue, Builtin::u32)()) > 0) {
				#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				Builtin::Throw(Builtin::IntegerOverflowException{});
			}
		}
		#line 182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return Builtin::Cast<true, Builtin::usize>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToFloat32(__extension_Int128_105_i128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::f32
	{
		#line 184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToFloat64(__extension_Int128_105_i128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::f64
	{
		#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToByte(__extension_Int128_105_i128 const& __this LIFETIMEBOUND)  -> const Builtin::char8
	{
		#line 186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(ToUInt8)(__this.__ref())); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto ToChar(__extension_Int128_105_i128 const& __this LIFETIMEBOUND)  -> const Builtin::char16
	{
		#line 189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((__this <=> Builtin::i32(0)) < 0 || (__this <=> Builtin::i64(0xFFFFFFFFLL)) > 0) {
			#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return Builtin::Cast<true, Builtin::u16>(__this);
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	
} namespace __extensions { using namespace System;
#line 200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_div_mod(__extension_Int128_198_i128 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_Int128_1452_i128, __extension_Int128_1452_i128>
	{
		#line 203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return std::make_tuple(ADV_UFCS(_operator_bsl)(__this, rhs), __this % rhs);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_div_not(__extension_Int128_198_i128 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int128_198_i128
	{
		#line 208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		auto result = __this; 
		#line 209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		result /= rhs;
		#line 210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_div_not_eq(__extension_Int128_198_i128 & __this , auto rhs)  -> typename __extension_Int128_198_i128&
	{
		#line 213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(__this /= rhs); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_div_lt(__extension_Int128_198_i128 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int128_198_i128
	{
		#line 217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if constexpr (Builtin::TypeIs<T, IBinaryInteger>()) {
			#line 218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			const auto& [div, rem] = ADV_UFCS(_operator_div_mod)(__this, rhs);
			#line 219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			if (rem == Builtin::i32(0)) {
				#line 220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				return div;
			}
			#line 222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			auto correction = (__this ^ rhs) >> (ADV_USPCS(BitWidth, __extension_Int128_1452_i128)() - Builtin::i32(1)); 
			#line 223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return div + correction;
		} else {
			#line 224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			{
				#line 225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				return Builtin::Cast<true, __extension_Int128_1452_i128>((ADV_UFCS(_operator_div_lt)(Builtin::f64{__this}, rhs)));
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_div_lt_eq(__extension_Int128_198_i128 & __this , auto rhs)  -> typename __extension_Int128_198_i128&
	{
		#line 229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(__this = __extension_Int128_1452_i128{ADV_UFCS(_operator_div_lt)(__this, rhs)}); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_div_gt(__extension_Int128_198_i128 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int128_198_i128
	{
		#line 233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if constexpr (Builtin::TypeIs<T, IBinaryInteger>()) {
			#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			const auto& [div, rem] = ADV_UFCS(_operator_div_mod)(__this, rhs);
			#line 235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			if (rem == Builtin::i32(0)) {
				#line 236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				return div;
			}
			#line 238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			auto correction = Builtin::i32(1) + ((__this ^ rhs) >> (ADV_USPCS(BitWidth, __extension_Int128_1452_i128)() - Builtin::i32(1))); 
			#line 239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return div + correction;
		} else {
			#line 240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			{
				#line 241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				return Builtin::Cast<true, __extension_Int128_1452_i128>((ADV_UFCS(_operator_div_gt)(Builtin::f64{__this}, rhs)));
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_div_gt_eq(__extension_Int128_198_i128 & __this , auto rhs)  -> typename __extension_Int128_198_i128&
	{
		#line 245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(__this = __extension_Int128_1452_i128{ADV_UFCS(_operator_div_gt)(__this, rhs)}); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	
} namespace __extensions { using namespace System;
#line 250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl(__extension_Int128_248_i128 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int128_248_i128
	{
		#line 250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Div)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_eq(__extension_Int128_248_i128 & __this , T rhs)  -> typename __extension_Int128_248_i128&
	{
		#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(DivAssign)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl(__extension_Int128_248_i128 const& __this LIFETIMEBOUND, T rhs)  -> const Builtin::Nullable<__extension_Int128_1452_i128>
	{
		#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		__extension_Int128_1452_i128 result{}; 
		#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (Builtin::DivExact(__this, rhs, result)) {
			#line 262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return result;
		}
		#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return nullptr;
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	
} namespace __extensions { using namespace System;
#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor(__extension_Int128_268_i128 const& __this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename __extension_Int128_268_i128
	{
		#line 273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return Builtin::i32(1);
		}
		#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		auto base = __this; 
		#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		auto result = Builtin::i128(1LL); 
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
				ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
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
					ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
					#line 298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
					base *= base;
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor_eq(__extension_Int128_268_i128 & __this , Builtin::u32 exp)  -> typename __extension_Int128_268_i128&
	{
		#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_xor_xor)(__this, exp)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	
} namespace __extensions { using namespace System;
#line 359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline auto MaxMagnitudeNumber(__extension_Int128_306_i128 const& __this LIFETIMEBOUND, __extension_Int128_1452_i128 rhs)  -> const typename __extension_Int128_306_i128
	{
		#line 359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(MaxMagnitude)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline auto MinMagnitudeNumber(__extension_Int128_306_i128 const& __this LIFETIMEBOUND, __extension_Int128_1452_i128 rhs)  -> const typename __extension_Int128_306_i128
	{
		#line 390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(MinMagnitude)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToInt8(__extension_Int128_306_i128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i8
	{
		#line 404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i8>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToUInt8(__extension_Int128_306_i128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u8
	{
		#line 405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u8>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToInt16(__extension_Int128_306_i128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i16
	{
		#line 406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i16>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToUInt16(__extension_Int128_306_i128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u16
	{
		#line 407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u16>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToInt32(__extension_Int128_306_i128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i32
	{
		#line 408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i32>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToUInt32(__extension_Int128_306_i128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u32
	{
		#line 409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u32>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToInt64(__extension_Int128_306_i128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i64
	{
		#line 410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i64>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToUInt64(__extension_Int128_306_i128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u64
	{
		#line 411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u64>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToInt128(__extension_Int128_306_i128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i128
	{
		#line 412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToUInt128(__extension_Int128_306_i128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u128
	{
		#line 413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u128>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToIsize(__extension_Int128_306_i128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::isize
	{
		#line 414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::isize>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NarrowToUsize(__extension_Int128_306_i128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::usize
	{
		#line 415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::usize>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto __static_getOne<__extension_Int128_306_i128>::get() -> const __extension_Int128_1452_i128
	{
		#line 307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::i128(1LL)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto __static_getZero<__extension_Int128_306_i128>::get() -> const __extension_Int128_1452_i128
	{
		#line 308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::i128(0LL)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto __static_getRadix<__extension_Int128_306_i128>::get() -> const Builtin::i32
	{
		#line 309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(2)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getAbs(__extension_Int128_306_i128 const& __this ) -> const __extension_Int128_1452_i128
	{
		#line 311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)(__this.__ref()) ? -__this : __this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsCanonical(__extension_Int128_306_i128 const& __this ) -> const bool
	{
		#line 312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsComplexNumber(__extension_Int128_306_i128 const& __this ) -> const bool
	{
		#line 313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsEvenInteger(__extension_Int128_306_i128 const& __this ) -> const bool
	{
		#line 314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY((ADV_UFCS(Low64)(__this.__ref()) & Builtin::u32(1U)) == Builtin::i32(0)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsFinite(__extension_Int128_306_i128 const& __this ) -> const bool
	{
		#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsImaginaryNumber(__extension_Int128_306_i128 const& __this ) -> const bool
	{
		#line 316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsInfinity(__extension_Int128_306_i128 const& __this ) -> const bool
	{
		#line 317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsInteger(__extension_Int128_306_i128 const& __this ) -> const bool
	{
		#line 318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsNaN(__extension_Int128_306_i128 const& __this ) -> const bool
	{
		#line 319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsNegative(__extension_Int128_306_i128 const& __this ) -> const bool
	{
		#line 320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY((ADV_UFCS(High64)(__this.__ref()) <=> Builtin::i32(0)) < 0); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsNegativeInfinity(__extension_Int128_306_i128 const& __this ) -> const bool
	{
		#line 321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsNormal(__extension_Int128_306_i128 const& __this ) -> const bool
	{
		#line 322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(__this != Builtin::i32(0)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsOddInteger(__extension_Int128_306_i128 const& __this ) -> const bool
	{
		#line 323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY((ADV_UFCS(Low64)(__this.__ref()) & Builtin::u32(1U)) != Builtin::i32(0)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsPositive(__extension_Int128_306_i128 const& __this ) -> const bool
	{
		#line 324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY((ADV_UFCS(High64)(__this.__ref()) <=> Builtin::i32(0)) >= 0); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsPositiveInfinity(__extension_Int128_306_i128 const& __this ) -> const bool
	{
		#line 325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsRealNumber(__extension_Int128_306_i128 const& __this ) -> const bool
	{
		#line 326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsSubnormal(__extension_Int128_306_i128 const& __this ) -> const bool
	{
		#line 327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsZero(__extension_Int128_306_i128 const& __this ) -> const bool
	{
		#line 328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(__this == Builtin::i32(0)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	
} namespace __extensions { using namespace System;
#line 419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto __static_getMinusOne<__extension_Int128_418_i128>::get() -> const __extension_Int128_1452_i128
	{
		#line 419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::i128(-1LL)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	
} namespace __extensions { using namespace System;
#line 454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto Max(__extension_Int128_422_i128 const& __this LIFETIMEBOUND, __extension_Int128_1452_i128 rhs) noexcept -> const typename __extension_Int128_422_i128
	{
		#line 454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(((__this <=> rhs) >= 0) ? __this : rhs); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto MaxNumber(__extension_Int128_422_i128 const& __this LIFETIMEBOUND, __extension_Int128_1452_i128 rhs) noexcept -> const typename __extension_Int128_422_i128
	{
		#line 455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Max)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto Min(__extension_Int128_422_i128 const& __this LIFETIMEBOUND, __extension_Int128_1452_i128 rhs) noexcept -> const typename __extension_Int128_422_i128
	{
		#line 456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(((__this <=> rhs) <= 0) ? __this : rhs); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto MinNumber(__extension_Int128_422_i128 const& __this LIFETIMEBOUND, __extension_Int128_1452_i128 rhs) noexcept -> const typename __extension_Int128_422_i128
	{
		#line 457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Min)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto Clamp(__extension_Int128_422_i128 const& __this LIFETIMEBOUND, __extension_Int128_1452_i128 min, __extension_Int128_1452_i128 max)  -> const typename __extension_Int128_422_i128
	{
		#line 460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((min <=> max) > 0) {
			#line 461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			Builtin::Throw(Builtin::InvalidOperationException{});
		}
		#line 464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		auto result = __this; 
		#line 465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		result = ADV_UFCS(Max)(result.__ref(), min);
		#line 466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		result = ADV_UFCS(Min)(result.__ref(), max);
		#line 468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getSign(__extension_Int128_422_i128 const& __this ) -> const Builtin::i32
	{
		#line 425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (ADV_UPCS(IsNegative)(__this.__ref())) {
			#line 426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return Builtin::i32(-1);
		}
		#line 429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (ADV_UPCS(IsNormal)(__this.__ref())) {
			#line 430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return Builtin::i32(1);
		}
		#line 433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return Builtin::i32(0);
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	
} namespace __extensions { using namespace System;
#line 550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto CheckedLog(__extension_Int128_472_i128 const& __this LIFETIMEBOUND, __extension_Int128_1452_i128 base) noexcept -> const Builtin::Nullable<__extension_Int128_1452_i128>
	{
		#line 552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((__this <=> Builtin::i32(0)) <= 0 || (base <=> Builtin::i32(1)) <= 0) {
			#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return nullptr;
		}
		#line 556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (std::is_constant_evaluated()) {
			#line 557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			if (base == Builtin::i32(2)) {
				#line 558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				return ADV_UPCS(CheckedLog2)(__this.__ref());
			}
			#line 560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			if (base == Builtin::i32(10)) {
				#line 561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				return ADV_UPCS(CheckedLog10)(__this.__ref());
			}
		}
		#line 565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((__this <=> base) < 0) {
			#line 566 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return Builtin::i32(0);
		}
		#line 569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		auto n = ADV_UFCS(_operator_bsl)(ADV_UPCS(Log2)(__this.__ref()), (ADV_UPCS(Log2)(base.__ref()) + Builtin::i32(1))); 
		#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		auto r = ADV_UFCS(_operator_xor_xor)(base, (Builtin::Cast<true, Builtin::u32>(n))); 
		#line 572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		const auto baseRatio = ADV_UFCS(_operator_bsl)(__this, base); 
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
} namespace __extensions { using namespace System;
#line 594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto Midpoint(__extension_Int128_472_i128 const& __this LIFETIMEBOUND, __extension_Int128_1452_i128 rhs) noexcept -> const typename __extension_Int128_472_i128
	{
		#line 596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		const auto result = ((__this ^ rhs) >> Builtin::i32(1)) + (__this & rhs); 
		#line 597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		const auto correction = (result <=> Builtin::i32(0)) < 0; 
		#line 598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result + ((Builtin::Cast<true, __extension_Int128_1452_i128>(correction)) & (__this ^ rhs));
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto IsMultipleOf(__extension_Int128_472_i128 const& __this LIFETIMEBOUND, __extension_Int128_1452_i128 rhs) noexcept -> const bool
	{
		#line 604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (rhs == Builtin::i32(0)) {
			#line 605 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return __this == Builtin::i32(0);
		}
		#line 608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (rhs == Builtin::i32(-1)) {
			#line 609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return Builtin::Boolean(true);
		}
		#line 612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return __this % rhs == Builtin::i32(0);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto __static_getAllBitsSet<__extension_Int128_472_i128>::get() -> const __extension_Int128_1452_i128
	{
		#line 474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(MinusOne, Builtin::i128)()); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getIsPow2(__extension_Int128_472_i128 const& __this ) -> const bool
	{
		#line 477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsPositive)(__this.__ref()) && ADV_UPCS(PopCount)(__this.__ref()) == Builtin::i32(1)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 481 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getCheckedLog2(__extension_Int128_472_i128 const& __this ) -> const Builtin::Nullable<__extension_Int128_1452_i128>
	{
		#line 483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((__this <=> Builtin::i32(0)) <= 0) {
			#line 484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return nullptr;
		}
		#line 487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return Builtin::Cast<true, __extension_Int128_1452_i128>((ADV_USPCS(BitWidth, __extension_Int128_1452_i128)() - Builtin::i32(1) - ADV_UPCS(LeadingZeroCount)(__this.__ref())));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getLog2(__extension_Int128_472_i128 const& __this ) -> const __extension_Int128_1452_i128
	{
		#line 493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (const auto result = ADV_UPCS(CheckedLog2)(__this.__ref())) {
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
} namespace __extensions { using namespace System;
#line 501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getCheckedLog10(__extension_Int128_472_i128 const& __this ) -> const Builtin::Nullable<__extension_Int128_1452_i128>
	{
		#line 503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((__this <=> Builtin::i32(0)) <= 0) {
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
		auto log = Builtin::i32(0); 
		#line 512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		auto val1 = Builtin::Cast<true, Builtin::u128>(__this); 
		#line 513 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((val1 <=> Builtin::ParseInt128("100000000000000000000000000000000")) >= 0) {
			#line 514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_UFCS(DivAssign)(val1.__ref(), Builtin::ParseUInt128("100000000000000000000000000000000"));
			#line 515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			log += Builtin::i32(32);
			#line 516 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			if ((val1 <=> Builtin::i32(100000)) >= 0) {
				#line 517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				ADV_UFCS(DivAssign)(val1.__ref(), Builtin::u32(100000U));
				#line 518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				log += Builtin::i32(5);
			}
			#line 520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			const auto val = Builtin::Cast<true, Builtin::u32>(val1); 
			#line 521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return log + ((((val + C1) & (val + C2)) ^ ((val + C3) & (val + C4))) >> Builtin::i32(17));
		}
		#line 523 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((val1 <=> Builtin::i64(10000000000000000LL)) >= 0) {
			#line 524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_UFCS(DivAssign)(val1.__ref(), Builtin::u64(10000000000000000ULL));
			#line 525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			log += Builtin::i32(16);
		}
		#line 527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((val1 <=> Builtin::i64(10000000000LL)) >= 0) {
			#line 528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_UFCS(DivAssign)(val1.__ref(), Builtin::u64(10000000000ULL));
			#line 529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			log += Builtin::i32(10);
		}
		#line 531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((val1 <=> Builtin::i32(100000)) >= 0) {
			#line 532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_UFCS(DivAssign)(val1.__ref(), Builtin::u32(100000U));
			#line 533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			log += Builtin::i32(5);
		}
		#line 535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		const auto val = Builtin::Cast<true, Builtin::u32>(val1); 
		#line 536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return log + ((((val + C1) & (val + C2)) ^ ((val + C3) & (val + C4))) >> Builtin::i32(17));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getLog10(__extension_Int128_472_i128 const& __this ) -> const __extension_Int128_1452_i128
	{
		#line 542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (const auto result = ADV_UPCS(CheckedLog10)(__this.__ref())) {
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
	
} namespace __extensions { using namespace System;
#line 619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_add_qst(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_Int128_1452_i128>
	{
		#line 621 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +? implemented only for integer types");
		#line 622 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		__extension_Int128_1452_i128 result{}; 
		#line 623 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (Builtin::SafeAdd(__this, rhs, result)) {
			#line 624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return result;
		}
		#line 626 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 628 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_add_qst_eq(__extension_Int128_616_i128 & __this , T rhs) noexcept -> typename __extension_Int128_616_i128&
	{
		#line 630 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +?= implemented only for integer types");
		#line 631 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (const auto result = ADV_UFCS(_operator_add_qst)(__this, rhs)) {
			{
				#line 631 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 632 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				__this = result;
			}
		}
		#line 634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 639 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_add_ne(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int128_616_i128
	{
		#line 641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +! implemented only for integer types");
		#line 642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		__extension_Int128_1452_i128 result{}; 
		#line 643 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::StrictAdd(__this, rhs, result);
		#line 644 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_add_ne_eq(__extension_Int128_616_i128 & __this , T rhs)  -> typename __extension_Int128_616_i128&
	{
		#line 646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_add_ne)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 650 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_add_mod(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_Int128_616_i128
	{
		#line 652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +% implemented only for integer types");
		#line 653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		__extension_Int128_1452_i128 result{}; 
		#line 654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::WrappingAdd(__this, rhs, result);
		#line 655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 657 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_add_mod_eq(__extension_Int128_616_i128 & __this , T rhs) noexcept -> typename __extension_Int128_616_i128&
	{
		#line 657 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_add_mod)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 661 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_add_or(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_Int128_616_i128
	{
		#line 663 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +| implemented only for integer types");
		#line 664 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		__extension_Int128_1452_i128 result{}; 
		#line 665 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::SaturatingAdd(__this, rhs, result);
		#line 666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_add_or_eq(__extension_Int128_616_i128 & __this , T rhs) noexcept -> typename __extension_Int128_616_i128&
	{
		#line 668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_add_or)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 672 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_add_mod_qst(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<__extension_Int128_1452_i128, bool>
	{
		#line 673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +%? implemented only for integer types");
		#line 674 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		__extension_Int128_1452_i128 result{}; 
		#line 675 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		auto overflowed = !Builtin::SafeAdd(__this, rhs, result); 
		#line 676 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_add_add_qst(__extension_Int128_616_i128 & __this )  -> typename __extension_Int128_616_i128&
	{
		#line 680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_qst_eq)(__this, Builtin::i128(1LL))); 
	}
	inline constexpr auto _operator_add_add_qst_postfix(__extension_Int128_616_i128 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_add_add_qst)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_add_add_ne(__extension_Int128_616_i128 & __this )  -> typename __extension_Int128_616_i128&
	{
		#line 683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_ne_eq)(__this, Builtin::i128(1LL))); 
	}
	inline constexpr auto _operator_add_add_ne_postfix(__extension_Int128_616_i128 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_add_add_ne)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_add_add_mod(__extension_Int128_616_i128 & __this )  -> typename __extension_Int128_616_i128&
	{
		#line 686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_mod_eq)(__this, Builtin::i128(1LL))); 
	}
	inline constexpr auto _operator_add_add_mod_postfix(__extension_Int128_616_i128 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_add_add_mod)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_add_add_or(__extension_Int128_616_i128 & __this )  -> typename __extension_Int128_616_i128&
	{
		#line 689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_or_eq)(__this, Builtin::i128(1LL))); 
	}
	inline constexpr auto _operator_add_add_or_postfix(__extension_Int128_616_i128 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_add_add_or)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto CarryingAdd(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, __extension_Int128_1452_i128 rhs, bool carry) noexcept -> const std::tuple<__extension_Int128_1452_i128, bool>
	{
		#line 695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		__extension_Int128_1452_i128 result{}; 
		#line 696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		auto overflowed = Builtin::CarryingAdd(__this, rhs, carry, result); 
		#line 697 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto BorrowingSub(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, __extension_Int128_1452_i128 rhs, bool carry) noexcept -> const std::tuple<__extension_Int128_1452_i128, bool>
	{
		#line 704 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		__extension_Int128_1452_i128 result{}; 
		#line 705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		auto overflowed = Builtin::BorrowingSub(__this, rhs, carry, result); 
		#line 706 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 711 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_sub_qst(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_Int128_1452_i128>
	{
		#line 713 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -? implemented only for integer types");
		#line 714 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		__extension_Int128_1452_i128 result{}; 
		#line 715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (Builtin::SafeSubtract(__this, rhs, result)) {
			#line 716 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return result;
		}
		#line 718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 720 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_sub_qst_eq(__extension_Int128_616_i128 & __this , T rhs) noexcept -> typename __extension_Int128_616_i128&
	{
		#line 722 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -?= implemented only for integer types");
		#line 723 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (const auto result = ADV_UFCS(_operator_sub_qst)(__this, rhs)) {
			{
				#line 723 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 724 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				__this = result;
			}
		}
		#line 726 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 731 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_sub_ne(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int128_616_i128
	{
		#line 733 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -! implemented only for integer types");
		#line 734 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		__extension_Int128_1452_i128 result{}; 
		#line 735 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::StrictSubtract(__this, rhs, result);
		#line 736 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_sub_ne_eq(__extension_Int128_616_i128 & __this , T rhs)  -> typename __extension_Int128_616_i128&
	{
		#line 738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_sub_ne)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 742 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_sub_mod(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_Int128_616_i128
	{
		#line 744 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -% implemented only for integer types");
		#line 745 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		__extension_Int128_1452_i128 result{}; 
		#line 746 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::WrappingSubtract(__this, rhs, result);
		#line 747 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 749 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_sub_mod_eq(__extension_Int128_616_i128 & __this , T rhs) noexcept -> typename __extension_Int128_616_i128&
	{
		#line 749 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_sub_mod)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 753 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_sub_or(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_Int128_616_i128
	{
		#line 755 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -| implemented only for integer types");
		#line 756 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		__extension_Int128_1452_i128 result{}; 
		#line 757 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::SaturatingSubtract(__this, rhs, result);
		#line 758 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 760 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_sub_or_eq(__extension_Int128_616_i128 & __this , T rhs) noexcept -> typename __extension_Int128_616_i128&
	{
		#line 760 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_sub_or)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 764 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_sub_mod_qst(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<__extension_Int128_1452_i128, bool>
	{
		#line 765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -%? implemented only for integer types");
		#line 766 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		__extension_Int128_1452_i128 result{}; 
		#line 767 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		auto overflowed = !Builtin::SafeSubtract(__this, rhs, result); 
		#line 768 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 772 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_sub_sub_qst(__extension_Int128_616_i128 & __this )  -> typename __extension_Int128_616_i128&
	{
		#line 772 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_qst_eq)(__this, Builtin::i128(1LL))); 
	}
	inline constexpr auto _operator_sub_sub_qst_postfix(__extension_Int128_616_i128 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_sub_sub_qst)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 775 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_sub_sub_ne(__extension_Int128_616_i128 & __this )  -> typename __extension_Int128_616_i128&
	{
		#line 775 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_ne_eq)(__this, Builtin::i128(1LL))); 
	}
	inline constexpr auto _operator_sub_sub_ne_postfix(__extension_Int128_616_i128 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_sub_sub_ne)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 778 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_sub_sub_mod(__extension_Int128_616_i128 & __this )  -> typename __extension_Int128_616_i128&
	{
		#line 778 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_mod_eq)(__this, Builtin::i128(1LL))); 
	}
	inline constexpr auto _operator_sub_sub_mod_postfix(__extension_Int128_616_i128 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_sub_sub_mod)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_sub_sub_or(__extension_Int128_616_i128 & __this )  -> typename __extension_Int128_616_i128&
	{
		#line 781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_or_eq)(__this, Builtin::i128(1LL))); 
	}
	inline constexpr auto _operator_sub_sub_or_postfix(__extension_Int128_616_i128 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_sub_sub_or)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 785 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mul_qst(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_Int128_1452_i128>
	{
		#line 787 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *? implemented only for integer types");
		#line 788 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		__extension_Int128_1452_i128 result{}; 
		#line 789 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (Builtin::SafeMultiply(__this, rhs, result)) {
			#line 790 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return result;
		}
		#line 792 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 794 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mul_qst_eq(__extension_Int128_616_i128 & __this , T rhs) noexcept -> typename __extension_Int128_616_i128&
	{
		#line 796 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *?= implemented only for integer types");
		#line 797 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (const auto result = ADV_UFCS(_operator_mul_qst)(__this, rhs)) {
			{
				#line 797 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 798 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				__this = result;
			}
		}
		#line 800 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 805 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mul_ne(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int128_616_i128
	{
		#line 807 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *! implemented only for integer types");
		#line 808 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		__extension_Int128_1452_i128 result{}; 
		#line 809 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::StrictMultiply(__this, rhs, result);
		#line 810 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 812 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mul_ne_eq(__extension_Int128_616_i128 & __this , T rhs)  -> typename __extension_Int128_616_i128&
	{
		#line 812 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_mul_ne)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mul_mod(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_Int128_616_i128
	{
		#line 818 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *% implemented only for integer types");
		#line 819 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		__extension_Int128_1452_i128 result{}; 
		#line 820 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::WrappingMultiply(__this, rhs, result);
		#line 821 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 823 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mul_mod_eq(__extension_Int128_616_i128 & __this , T rhs) noexcept -> typename __extension_Int128_616_i128&
	{
		#line 823 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_mul_mod)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 827 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mul_or(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_Int128_616_i128
	{
		#line 829 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *| implemented only for integer types");
		#line 830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		__extension_Int128_1452_i128 result{}; 
		#line 831 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::SaturatingMultiply(__this, rhs, result);
		#line 832 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 834 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mul_or_eq(__extension_Int128_616_i128 & __this , T rhs) noexcept -> typename __extension_Int128_616_i128&
	{
		#line 834 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_mul_or)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 838 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mul_mod_qst(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<__extension_Int128_1452_i128, bool>
	{
		#line 839 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *%? implemented only for integer types");
		#line 840 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		__extension_Int128_1452_i128 result{}; 
		#line 841 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		auto overflowed = !Builtin::SafeMultiply(__this, rhs, result); 
		#line 842 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 847 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline auto _operator_mul_gt(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, __extension_Int128_1452_i128 rhs) noexcept -> const std::tuple<Builtin::u128, Builtin::i128>
	{
		#line 849 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		const auto& [low, high] = Builtin::WideningMul128(__this, rhs);
		#line 850 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return std::make_tuple(low, high);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 856 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline auto CarryingMul(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, __extension_Int128_1452_i128 rhs, __extension_Int128_1452_i128 carry) noexcept -> const std::tuple<Builtin::u128, Builtin::i128>
	{
		#line 858 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		const auto& [low, high] = Builtin::CarryingMul128(__this, rhs, carry);
		#line 859 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return std::make_tuple(low, high);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 864 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_qst(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_Int128_1452_i128>
	{
		#line 866 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\? implemented only for integer types");
		#line 867 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		__extension_Int128_1452_i128 result{}; 
		#line 868 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (Builtin::SafeDivide(__this, rhs, result)) {
			#line 869 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return result;
		}
		#line 871 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 873 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_qst_eq(__extension_Int128_616_i128 & __this , T rhs) noexcept -> typename __extension_Int128_616_i128&
	{
		#line 875 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\?= implemented only for integer types");
		#line 876 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (const auto result = ADV_UFCS(_operator_bsl_qst)(__this, rhs)) {
			{
				#line 876 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 877 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				__this = result;
			}
		}
		#line 879 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 885 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_ne(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int128_616_i128
	{
		#line 887 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\! implemented only for integer types");
		#line 888 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		__extension_Int128_1452_i128 result{}; 
		#line 889 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::StrictDivide(__this, rhs, result);
		#line 890 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 892 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_ne_eq(__extension_Int128_616_i128 & __this , T rhs)  -> typename __extension_Int128_616_i128&
	{
		#line 892 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_bsl_ne)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 897 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_mod(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int128_616_i128
	{
		#line 899 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\% implemented only for integer types");
		#line 900 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		__extension_Int128_1452_i128 result{}; 
		#line 901 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::WrappingDivide(__this, rhs, result);
		#line 902 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 904 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_eq(__extension_Int128_616_i128 & __this , T rhs)  -> typename __extension_Int128_616_i128&
	{
		#line 904 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_bsl_mod)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 909 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_or(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int128_616_i128
	{
		#line 911 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\| implemented only for integer types");
		#line 912 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		__extension_Int128_1452_i128 result{}; 
		#line 913 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::SaturatingDivide(__this, rhs, result);
		#line 914 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 916 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_or_eq(__extension_Int128_616_i128 & __this , T rhs)  -> typename __extension_Int128_616_i128&
	{
		#line 916 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_bsl_or)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 921 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_qst(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_Int128_1452_i128, bool>
	{
		#line 922 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\%? implemented only for integer types");
		#line 923 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		__extension_Int128_1452_i128 result{}; 
		#line 924 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		auto overflowed = !Builtin::SafeDivide(__this, rhs, result); 
		#line 925 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 930 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_Int128_1452_i128>
	{
		#line 932 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\? implemented only for integer types");
		#line 933 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		__extension_Int128_1452_i128 result{}; 
		#line 934 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (Builtin::SafeDivExact(__this, rhs, result)) {
			#line 935 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return result;
		}
		#line 937 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 940 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst_eq(__extension_Int128_616_i128 & __this , T rhs) noexcept -> typename __extension_Int128_616_i128&
	{
		#line 942 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\?= implemented only for integer types");
		#line 943 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (const auto result = ADV_UFCS(_operator_bsl_bsl_qst)(__this, rhs)) {
			{
				#line 943 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 944 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				__this = result;
			}
		}
		#line 946 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 951 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mod_qst(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_Int128_1452_i128>
	{
		#line 953 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %? implemented only for integer types");
		#line 954 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		__extension_Int128_1452_i128 result{}; 
		#line 955 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (Builtin::SafeModulus(__this, rhs, result)) {
			#line 956 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return result;
		}
		#line 958 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 960 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mod_qst_eq(__extension_Int128_616_i128 & __this , T rhs) noexcept -> typename __extension_Int128_616_i128&
	{
		#line 962 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %?= implemented only for integer types");
		#line 963 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (const auto result = ADV_UFCS(_operator_mod_qst)(__this, rhs)) {
			{
				#line 963 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 964 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				__this = result;
			}
		}
		#line 966 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 972 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mod_ne(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int128_616_i128
	{
		#line 974 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %! implemented only for integer types");
		#line 975 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		__extension_Int128_1452_i128 result{}; 
		#line 976 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::StrictModulus(__this, rhs, result);
		#line 977 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 979 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mod_ne_eq(__extension_Int128_616_i128 & __this , T rhs)  -> typename __extension_Int128_616_i128&
	{
		#line 979 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_mod_ne)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 984 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mod_mod(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int128_616_i128
	{
		#line 986 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %% implemented only for integer types");
		#line 987 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		__extension_Int128_1452_i128 result{}; 
		#line 988 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::WrappingModulus(__this, rhs, result);
		#line 989 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 991 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mod_mod_eq(__extension_Int128_616_i128 & __this , T rhs)  -> typename __extension_Int128_616_i128&
	{
		#line 991 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_mod_mod)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 996 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	template<class T> inline constexpr auto _operator_mod_mod_qst(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_Int128_1452_i128, bool>
	{
		#line 997 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %%? implemented only for integer types");
		#line 998 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		__extension_Int128_1452_i128 result{}; 
		#line 999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		auto overflowed = !Builtin::SafeModulus(__this, rhs, result); 
		#line 1000 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1005 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_sub_qst(__extension_Int128_616_i128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::Nullable<__extension_Int128_1452_i128>
	{
		#line 1007 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		__extension_Int128_1452_i128 result{}; 
		#line 1008 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (Builtin::SafeNegate(__this, result)) {
			#line 1009 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return result;
		}
		#line 1011 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1015 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_sub_ne(__extension_Int128_616_i128 const& __this LIFETIMEBOUND)  -> const typename __extension_Int128_616_i128
	{
		#line 1017 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		__extension_Int128_1452_i128 result{}; 
		#line 1018 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::StrictNegate(__this, result);
		#line 1019 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1022 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_sub_mod(__extension_Int128_616_i128 const& __this LIFETIMEBOUND)  -> const typename __extension_Int128_616_i128
	{
		#line 1024 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		__extension_Int128_1452_i128 result{}; 
		#line 1025 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::WrappingNegate(__this, result);
		#line 1026 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1030 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_sub_or(__extension_Int128_616_i128 const& __this LIFETIMEBOUND)  -> const typename __extension_Int128_616_i128
	{
		#line 1032 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		__extension_Int128_1452_i128 result{}; 
		#line 1033 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::SaturatingNegate(__this, result);
		#line 1034 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1038 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_sub_mod_qst(__extension_Int128_616_i128 const& __this LIFETIMEBOUND)  -> const std::tuple<__extension_Int128_1452_i128, bool>
	{
		#line 1040 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		__extension_Int128_1452_i128 result{}; 
		#line 1041 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		auto overflowed = !Builtin::SafeNegate(__this, result); 
		#line 1042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1046 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_lt_lt_qst(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<__extension_Int128_1452_i128>
	{
		#line 1048 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, __extension_Int128_1452_i128)()) < 0) {
			#line 1049 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return Builtin::UncheckedShiftLeft(__this, amount);
		}
		#line 1051 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1054 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_lt_lt_qst_eq(__extension_Int128_616_i128 & __this , Builtin::i32 amount) noexcept -> typename __extension_Int128_616_i128&
	{
		#line 1056 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, __extension_Int128_1452_i128)()) < 0) {
			#line 1057 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return __this <<= amount;
		}
		#line 1059 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1062 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_lt_lt_ne(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename __extension_Int128_616_i128
	{
		#line 1064 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, __extension_Int128_1452_i128)()) < 0) {
			#line 1065 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return Builtin::UncheckedShiftLeft(__this, amount);
		}
		#line 1067 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Throw(Builtin::IntegerOverflowException{});
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1070 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_lt_lt_ne_eq(__extension_Int128_616_i128 & __this , Builtin::i32 amount)  -> typename __extension_Int128_616_i128&
	{
		#line 1070 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_lt_lt_ne)(__this, amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1072 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_lt_lt_mod(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename __extension_Int128_616_i128
	{
		#line 1072 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::UncheckedShiftLeft(__this, amount & (ADV_USPCS(BitWidth, __extension_Int128_1452_i128)() - Builtin::i32(1)))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1075 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_lt_lt_mod_eq(__extension_Int128_616_i128 & __this , Builtin::i32 amount) noexcept -> typename __extension_Int128_616_i128&
	{
		#line 1075 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_lt_lt_mod)(__this, amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1077 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_lt_lt_mod_qst(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<__extension_Int128_1452_i128, bool>
	{
		#line 1077 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(std::make_tuple(ADV_UFCS(_operator_lt_lt_mod)(__this, amount), (amount <=> Builtin::i32(0)) < 0 || (amount <=> ADV_USPCS(BitWidth, __extension_Int128_1452_i128)()) >= 0)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1080 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_gt_gt_qst(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<__extension_Int128_1452_i128>
	{
		#line 1082 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, __extension_Int128_1452_i128)()) < 0) {
			#line 1083 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return __this >> amount;
		}
		#line 1085 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1088 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_gt_gt_qst_eq(__extension_Int128_616_i128 & __this , Builtin::i32 amount) noexcept -> typename __extension_Int128_616_i128&
	{
		#line 1090 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, __extension_Int128_1452_i128)()) < 0) {
			#line 1091 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return __this >>= amount;
		}
		#line 1093 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1096 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_gt_gt_ne(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename __extension_Int128_616_i128
	{
		#line 1098 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, __extension_Int128_1452_i128)()) < 0) {
			#line 1099 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return __this >> amount;
		}
		#line 1101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Throw(Builtin::IntegerOverflowException{});
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_gt_gt_ne_eq(__extension_Int128_616_i128 & __this , Builtin::i32 amount)  -> typename __extension_Int128_616_i128&
	{
		#line 1104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_gt_gt_ne)(__this, amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_gt_gt_mod(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename __extension_Int128_616_i128
	{
		#line 1106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::UncheckedShiftRight(__this, amount & (ADV_USPCS(BitWidth, __extension_Int128_1452_i128)() - Builtin::i32(1)))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_gt_gt_mod_eq(__extension_Int128_616_i128 & __this , Builtin::i32 amount) noexcept -> typename __extension_Int128_616_i128&
	{
		#line 1109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_gt_gt_mod)(__this, amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_gt_gt_mod_qst(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<__extension_Int128_1452_i128, bool>
	{
		#line 1111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(std::make_tuple(ADV_UFCS(_operator_gt_gt_mod)(__this, amount), (amount <=> Builtin::i32(0)) < 0 || (amount <=> ADV_USPCS(BitWidth, __extension_Int128_1452_i128)()) >= 0)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor_qst(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const Builtin::Nullable<__extension_Int128_1452_i128>
	{
		#line 1118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return Builtin::i128(1LL);
		}
		#line 1123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		auto base = __this; 
		#line 1124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		auto result = Builtin::i128(1LL); 
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
			ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
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
} namespace __extensions { using namespace System;
#line 1145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor_qst_eq(__extension_Int128_616_i128 & __this , Builtin::u32 exp) noexcept -> typename __extension_Int128_616_i128&
	{
		#line 1147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (auto result = ADV_UFCS(_operator_xor_xor_qst)(__this, exp)) {
			{
				#line 1147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 1148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				return __this = result;
			}
		}
		#line 1150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor_ne(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename __extension_Int128_616_i128
	{
		#line 1155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return Builtin::i32(1);
		}
		#line 1160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		auto base = __this; 
		#line 1161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		auto result = Builtin::i128(1LL); 
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
			ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
			#line 1170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_UFCS(_operator_mul_ne_eq)(base, base);
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor_ne_eq(__extension_Int128_616_i128 & __this , Builtin::u32 exp)  -> typename __extension_Int128_616_i128&
	{
		#line 1174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_xor_xor_ne)(__this, exp)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor_mod(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename __extension_Int128_616_i128
	{
		#line 1178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return Builtin::i128(1LL);
		}
		#line 1183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		auto base = __this; 
		#line 1184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		auto result = Builtin::i128(1LL); 
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
				ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
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
					ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
					#line 1203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
					ADV_UFCS(_operator_mul_mod_eq)(base, base);
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor_mod_eq(__extension_Int128_616_i128 & __this , Builtin::u32 exp) noexcept -> typename __extension_Int128_616_i128&
	{
		#line 1208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_xor_xor_mod)(__this, exp)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor_or(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename __extension_Int128_616_i128
	{
		#line 1212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (const auto result = ADV_UFCS(_operator_xor_xor_qst)(__this, exp)) {
			{
				#line 1212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 1213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				return result;
			}
		}
		#line 1216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return (ADV_UPCS(IsNegative)(__this.__ref()) && exp % Builtin::i32(2) == Builtin::i32(1)) ? ADV_USPCS(MinValue, __extension_Int128_1452_i128)() : ADV_USPCS(MaxValue, __extension_Int128_1452_i128)();
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor_or_eq(__extension_Int128_616_i128 & __this , Builtin::u32 exp) noexcept -> typename __extension_Int128_616_i128&
	{
		#line 1219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_xor_xor_or)(__this, exp)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto _operator_xor_xor_mod_qst(__extension_Int128_616_i128 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const std::tuple<__extension_Int128_1452_i128, bool>
	{
		#line 1223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return std::make_tuple(Builtin::i128(1LL), Builtin::Boolean(false));
		}
		#line 1228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		auto base = __this; 
		#line 1229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		auto result = Builtin::i128(1LL); 
		#line 1230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		auto overflowed = Builtin::Boolean(false); 
		#line 1231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		auto tmp = std::make_tuple(Builtin::i128(0LL), Builtin::Boolean(false)); 
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
			ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
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
} namespace __extensions { using namespace System;
#line 1252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getCheckedAbs(__extension_Int128_616_i128 const& __this ) -> const Builtin::Nullable<__extension_Int128_1452_i128>
	{
		#line 1252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)(__this.__ref()) ? ADV_UFCS(_operator_sub_qst)(__this) : __this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getStrictAbs(__extension_Int128_616_i128 const& __this ) -> const __extension_Int128_1452_i128
	{
		#line 1255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)(__this.__ref()) ? ADV_UFCS(_operator_sub_ne)(__this) : __this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getWrappingAbs(__extension_Int128_616_i128 const& __this ) -> const __extension_Int128_1452_i128
	{
		#line 1258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)(__this.__ref()) ? ADV_UFCS(_operator_sub_mod)(__this) : __this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getSaturatingAbs(__extension_Int128_616_i128 const& __this ) -> const __extension_Int128_1452_i128
	{
		#line 1261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)(__this.__ref()) ? ADV_UFCS(_operator_sub_or)(__this) : __this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getOverflowingAbs(__extension_Int128_616_i128 const& __this ) -> const std::tuple<__extension_Int128_1452_i128, bool>
	{
		#line 1266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (ADV_UPCS(IsNegative)(__this.__ref())) {
			#line 1267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return ADV_UFCS(_operator_sub_mod_qst)(__this);
		}
		#line 1269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return std::make_tuple(__this, Builtin::Boolean(false));
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	
} namespace __extensions { using namespace System;
#line 1324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto NextMultipleOf(__extension_Int128_1273_i128 const& __this LIFETIMEBOUND, __extension_Int128_1452_i128 rhs)  -> const typename __extension_Int128_1273_i128
	{
		#line 1326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (rhs == Builtin::i32(-1)) {
			#line 1327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return __this;
		}
		#line 1330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		const auto remainder = __this % rhs; 
		#line 1331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		const auto mod = ((remainder <=> Builtin::i32(0)) > 0 && (rhs <=> Builtin::i32(0)) < 0) || ((remainder <=> Builtin::i32(0)) < 0 && (rhs <=> Builtin::i32(0)) > 0) ? remainder + rhs : remainder; 
		#line 1334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return mod == Builtin::i32(0) ? __this : __this + (rhs - mod);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto CheckedNextMultipleOf(__extension_Int128_1273_i128 const& __this LIFETIMEBOUND, __extension_Int128_1452_i128 rhs) noexcept -> const Builtin::Nullable<__extension_Int128_1452_i128>
	{
		#line 1342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (rhs == Builtin::i32(-1)) {
			#line 1343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return __this;
		}
		#line 1346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		__extension_Int128_1452_i128 remainder{}; 
		#line 1347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (const auto r = ADV_UFCS(_operator_mod_qst)(__this, rhs)) {
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
		const auto mod = ((remainder <=> Builtin::i32(0)) > 0 && (rhs <=> Builtin::i32(0)) < 0) || ((remainder <=> Builtin::i32(0)) < 0 && (rhs <=> Builtin::i32(0)) > 0) ? remainder + rhs : remainder; 
		#line 1354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (mod == Builtin::i32(0)) {
			#line 1355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return __this;
		}
		#line 1357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return ADV_UFCS(_operator_add_qst)(__this, (rhs - mod));
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto __static_getIsSigned<__extension_Int128_1273_i128>::get() -> const bool
	{
		#line 1274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getTrailingZeroCount(__extension_Int128_1273_i128 const& __this ) -> const Builtin::u32
	{
		#line 1278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (ADV_UFCS(Low64)(__this.__ref()) == Builtin::i32(0)) {
			#line 1279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return ADV_UPCS(TrailingZeroCount)(ADV_UFCS(High64)(__this.__ref()).__ref()) + Builtin::u32(64U);
		}
		#line 1281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return ADV_UPCS(TrailingZeroCount)(ADV_UFCS(Low64)(__this.__ref()).__ref());
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getTrailingOneCount(__extension_Int128_1273_i128 const& __this ) -> const Builtin::u32
	{
		#line 1283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(TrailingZeroCount)((ADV_UFCS(_operator_not)(__this)).__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getByteCount(__extension_Int128_1273_i128 const& __this ) -> const Builtin::u32
	{
		#line 1284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u32>(Builtin::usize(sizeof(__extension_Int128_1452_i128)))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getMinimalBitWidth(__extension_Int128_1273_i128 const& __this ) -> const Builtin::u32
	{
		#line 1285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(BitWidth, __extension_Int128_1452_i128)() - ADV_UPCS(LeadingZeroCount)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline auto getIsqrt(__extension_Int128_1273_i128 const& __this ) -> const __extension_Int128_1452_i128
	{
		#line 1302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (const auto result = ADV_UPCS(CheckedIsqrt)(__this.__ref())) {
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
} namespace __extensions { using namespace System;
#line 1310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getLog2Ceiling(__extension_Int128_1273_i128 const& __this ) -> const __extension_Int128_1452_i128
	{
		#line 1312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		auto result = ADV_UPCS(Log2)(__this.__ref()); 
		#line 1313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (ADV_UPCS(PopCount)(__this.__ref()) != Builtin::i32(1)) {
			#line 1314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			++result;
		}
		#line 1317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result;
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getPrevPow2(__extension_Int128_1273_i128 const& __this ) -> const __extension_Int128_1452_i128
	{
		#line 1363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((__this <=> Builtin::i32(1)) <= 0) {
			#line 1364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return Builtin::i32(0);
		}
		#line 1367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return ADV_USPCS(One, __extension_Int128_1452_i128)() << (ADV_UPCS(MinimalBitWidth)(__this.__ref()) - Builtin::i32(1));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getNextPow2(__extension_Int128_1273_i128 const& __this ) -> const __extension_Int128_1452_i128
	{
		#line 1374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((__this <=> Builtin::i32(1)) <= 0) {
			#line 1375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return Builtin::i32(0);
		}
		#line 1378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		const auto p = __this - Builtin::i32(1); 
		#line 1379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return (ADV_USPCS(AllBitsSet, __extension_Int128_1452_i128)() >> ADV_UPCS(LeadingZeroCount)(p.__ref())) + Builtin::i32(1);
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getCheckedNextPow2(__extension_Int128_1273_i128 const& __this ) -> const Builtin::Nullable<__extension_Int128_1452_i128>
	{
		#line 1386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((__this <=> Builtin::i32(1)) <= 0) {
			#line 1387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return Builtin::i128(0LL);
		}
		#line 1390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		const auto p = __this - Builtin::i32(1); 
		#line 1391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return ADV_UFCS(_operator_add_qst)((ADV_USPCS(AllBitsSet, __extension_Int128_1452_i128)() >> ADV_UPCS(LeadingZeroCount)(p.__ref())), Builtin::i128(1LL));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getWrappingNextPow2(__extension_Int128_1273_i128 const& __this ) -> const __extension_Int128_1452_i128
	{
		#line 1398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((__this <=> Builtin::i32(1)) <= 0) {
			#line 1399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return Builtin::i32(0);
		}
		#line 1402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		const auto p = __this - Builtin::i32(1); 
		#line 1403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return ADV_UFCS(_operator_add_mod)((ADV_USPCS(AllBitsSet, __extension_Int128_1452_i128)() >> ADV_UPCS(LeadingZeroCount)(p.__ref())), Builtin::i128(1LL));
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	
} namespace __extensions { using namespace System;
#line 1447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto RotateLeft(__extension_Int128_1407_i128 const& __this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename __extension_Int128_1407_i128
	{
		#line 1447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY((__this << shiftAmount) | (ADV_UFCS(_operator_gt_gt_gt)(__this, Builtin::i32{ADV_USPCS(BitWidth, __extension_Int128_1452_i128)() - shiftAmount}))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto RotateRight(__extension_Int128_1407_i128 const& __this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename __extension_Int128_1407_i128
	{
		#line 1448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY((ADV_UFCS(_operator_gt_gt_gt)(__this, Builtin::i32{shiftAmount})) | (__this << (ADV_USPCS(BitWidth, __extension_Int128_1452_i128)() - shiftAmount))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto __static_getBitWidth<__extension_Int128_1407_i128>::get() -> const Builtin::u32
	{
		#line 1408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(128U)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getLeadingZeroCount(__extension_Int128_1407_i128 const& __this ) -> const Builtin::u32
	{
		#line 1412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (ADV_UFCS(High64)(__this.__ref()) == Builtin::i32(0)) {
			#line 1413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return Builtin::u32(64U) + Builtin::LeadingZeroCount(ADV_UFCS(Low64)(__this.__ref()));
		}
		#line 1416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return Builtin::LeadingZeroCount(ADV_UFCS(High64)(__this.__ref()));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getLeadingOneCount(__extension_Int128_1407_i128 const& __this ) -> const Builtin::u32
	{
		#line 1418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(LeadingZeroCount)((ADV_UFCS(_operator_not)(__this)).__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getPopCount(__extension_Int128_1407_i128 const& __this ) -> const Builtin::u32
	{
		#line 1419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::PopCount(ADV_UFCS(High64)(__this.__ref())) + Builtin::PopCount(ADV_UFCS(Low64)(__this.__ref()))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getZeroCount(__extension_Int128_1407_i128 const& __this ) -> const Builtin::u32
	{
		#line 1420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(PopCount)((ADV_UFCS(_operator_not)(__this)).__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getByteSwapped(__extension_Int128_1407_i128 const& __this ) -> const __extension_Int128_1452_i128
	{
		#line 1421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::i128{Builtin::Cast<true, Builtin::i64>(ADV_UPCS(ByteSwapped)(ADV_UFCS(Low64)(__this.__ref()).__ref())), Builtin::Cast<true, Builtin::u64>(ADV_UPCS(ByteSwapped)(ADV_UFCS(High64)(__this.__ref()).__ref()))}); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getBigEndian(__extension_Int128_1407_i128 const& __this ) -> const __extension_Int128_1452_i128
	{
		#line 1424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if constexpr (Builtin::IsLittleEndian()) {
			#line 1425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return ADV_UPCS(ByteSwapped)(__this.__ref());
		}
		#line 1427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return __this;
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getLittleEndian(__extension_Int128_1407_i128 const& __this ) -> const __extension_Int128_1452_i128
	{
		#line 1431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if constexpr (Builtin::IsBigEndian()) {
			#line 1432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return ADV_UPCS(ByteSwapped)(__this.__ref());
		}
		#line 1434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return __this;
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getReverseBits(__extension_Int128_1407_i128 const& __this ) -> const __extension_Int128_1452_i128
	{
		#line 1436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::i128{Builtin::Cast<true, Builtin::i64>(Builtin::ReverseBits64u(ADV_UFCS(Low64)(__this.__ref()))), Builtin::Cast<true, Builtin::u64>(Builtin::ReverseBits64(ADV_UFCS(High64)(__this.__ref())))}); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getShortestBitLength(__extension_Int128_1407_i128 const& __this ) -> const Builtin::u32
	{
		#line 1440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((__this <=> Builtin::i32(0)) >= 0) {
			#line 1441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return ADV_USPCS(BitWidth, __extension_Int128_1452_i128)() - ADV_UPCS(LeadingZeroCount)(__this.__ref());
		}
		#line 1444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return ADV_USPCS(BitWidth, __extension_Int128_1452_i128)() + Builtin::u32(1U) - ADV_UPCS(LeadingOneCount)(__this.__ref());
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	
} namespace __extensions { using namespace System;
#line 1460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto IsGreaterThanAsUnsigned(__extension_Int128_1452_i128 const& __this LIFETIMEBOUND, __extension_Int128_1452_i128 rhs) noexcept -> const bool
	{
		#line 1460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY((ADV_UFCS(NarrowToUInt128)(__this.__ref()) <=> ADV_UFCS(NarrowToUInt128)(rhs.__ref())) > 0); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto __static_getMaxDigitCount<__extension_Int128_1452_i128>::get() -> const Builtin::i32
	{
		#line 1453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(39)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto __static_getMaxHexDigitCount<__extension_Int128_1452_i128>::get() -> const Builtin::i32
	{
		#line 1454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(32)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto __static_getMaxValueDiv10<__extension_Int128_1452_i128>::get() -> const __extension_Int128_1452_i128
	{
		#line 1455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl)(ADV_USPCS(MaxValue, Builtin::i128)(), Builtin::i32(10))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getMultiplyBy10(__extension_Int128_1452_i128 const& __this ) -> const __extension_Int128_1452_i128
	{
		#line 1457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_mod)(__this, Builtin::i128(10LL))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	inline constexpr auto getMultiplyBy16(__extension_Int128_1452_i128 const& __this ) -> const __extension_Int128_1452_i128
	{
		#line 1458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_mod)(__this, Builtin::i128(16LL))); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	

}