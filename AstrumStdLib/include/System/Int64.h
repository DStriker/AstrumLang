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
namespace __Unsafe {} namespace __Int64_Protected__Unsafe {}
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
	} namespace __extensions { using namespace System;
#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	using __extension_Int64_15_i64 = Builtin::i64;
	#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE(IMinMaxValue, IMinMaxValue);
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class __TT> struct __static_getMinValue; template<> struct __static_getMinValue<__extension_Int64_15_i64> { static inline constexpr auto get() -> const __extension_Int64_15_i64; };
	#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class __TT> struct __static_getMaxValue; template<> struct __static_getMaxValue<__extension_Int64_15_i64> { static inline constexpr auto get() -> const __extension_Int64_15_i64; };
	#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i64, IMinMaxValue, IMinMaxValue, i64);
	} namespace System{
using __extensions::__static_getMinValue;
using __extensions::__static_getMaxValue;

		} namespace __extensions { using namespace System;
#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	using __extension_Int64_20_i64 = Builtin::i64;
	#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ASTRUMSTD_API auto _operator_eq_eq_mul(__extension_Int64_20_i64 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool;
	#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto operator<=>(__extension_Int64_20_i64 const& __this LIFETIMEBOUND, Builtin::Nullable<__extension_Int64_20_i64> rhs) noexcept -> const Builtin::i32;
	#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_gt_gt_gt(__extension_Int64_20_i64 const& __this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename __extension_Int64_20_i64;
	#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_gt_gt_gt_eq(__extension_Int64_20_i64 & __this , Builtin::i32 amount)  -> typename __extension_Int64_20_i64&;
	#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_lt_lt_bsl(__extension_Int64_20_i64 const& __this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename __extension_Int64_20_i64;
	#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_lt_lt_bsl_eq(__extension_Int64_20_i64 & __this , Builtin::u32 amount) noexcept -> typename __extension_Int64_20_i64&;
	#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_gt_gt_bsl(__extension_Int64_20_i64 const& __this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename __extension_Int64_20_i64;
	#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_gt_gt_bsl_eq(__extension_Int64_20_i64 & __this , Builtin::u32 amount) noexcept -> typename __extension_Int64_20_i64&;
	#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getHashCode(__extension_Int64_20_i64 const& __this ) -> const Builtin::u64;
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
#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	using __extension_Int64_73_i64 = Builtin::i64;
	#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE(IAbstractComparable, IAbstractComparable);
	#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ASTRUMSTD_API auto _operator_lt_eq_gt_mul(__extension_Int64_73_i64 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32;
	#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i64, IAbstractComparable, IAbstractComparable, i64);
	} namespace System{
using __extensions::_operator_lt_eq_gt_mul;

		} namespace __extensions { using namespace System;
#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	using __extension_Int64_88_i64 = Builtin::i64;
	#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE(IConvertible, IConvertible);
	#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToBoolean(__extension_Int64_88_i64 const& __this LIFETIMEBOUND) noexcept -> const bool;
	#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToInt8(__extension_Int64_88_i64 const& __this LIFETIMEBOUND)  -> const Builtin::i8;
	#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToUInt8(__extension_Int64_88_i64 const& __this LIFETIMEBOUND)  -> const Builtin::u8;
	#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToInt16(__extension_Int64_88_i64 const& __this LIFETIMEBOUND)  -> const Builtin::i16;
	#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToUInt16(__extension_Int64_88_i64 const& __this LIFETIMEBOUND)  -> const Builtin::u16;
	#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToInt32(__extension_Int64_88_i64 const& __this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToUInt32(__extension_Int64_88_i64 const& __this LIFETIMEBOUND)  -> const Builtin::u32;
	#line 126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToInt64(__extension_Int64_88_i64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i64;
	#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToUInt64(__extension_Int64_88_i64 const& __this LIFETIMEBOUND)  -> const Builtin::u64;
	#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToInt128(__extension_Int64_88_i64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i128;
	#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToUInt128(__extension_Int64_88_i64 const& __this LIFETIMEBOUND)  -> const Builtin::u128;
	#line 140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToIsize(__extension_Int64_88_i64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::isize;
	#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToUsize(__extension_Int64_88_i64 const& __this LIFETIMEBOUND)  -> const Builtin::usize;
	#line 152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToFloat32(__extension_Int64_88_i64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::f32;
	#line 153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToFloat64(__extension_Int64_88_i64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::f64;
	#line 154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToByte(__extension_Int64_88_i64 const& __this LIFETIMEBOUND)  -> const Builtin::char8;
	#line 155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToChar(__extension_Int64_88_i64 const& __this LIFETIMEBOUND)  -> const Builtin::char16;
	#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i64, IConvertible, IConvertible, i64);
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
#line 166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	using __extension_Int64_166_i64 = Builtin::i64;
	#line 166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE(IDivisibleArithmetic, IDivisibleArithmetic);
	#line 168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_div_mod(__extension_Int64_166_i64 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_Int64_166_i64, __extension_Int64_166_i64>;
	#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_div_not(__extension_Int64_166_i64 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int64_166_i64;
	#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_div_not_eq(__extension_Int64_166_i64 & __this , auto rhs)  -> typename __extension_Int64_166_i64&;
	#line 183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_div_lt(__extension_Int64_166_i64 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int64_166_i64;
	#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_div_lt_eq(__extension_Int64_166_i64 & __this , auto rhs)  -> typename __extension_Int64_166_i64&;
	#line 199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_div_gt(__extension_Int64_166_i64 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int64_166_i64;
	#line 213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_div_gt_eq(__extension_Int64_166_i64 & __this , auto rhs)  -> typename __extension_Int64_166_i64&;
	#line 166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i64, IDivisibleArithmetic, IDivisibleArithmetic, i64);
	} namespace System{
using __extensions::_operator_div_mod;
using __extensions::_operator_div_not;
using __extensions::_operator_div_not_eq;
using __extensions::_operator_div_lt;
using __extensions::_operator_div_lt_eq;
using __extensions::_operator_div_gt;
using __extensions::_operator_div_gt_eq;

		} namespace __extensions { using namespace System;
#line 216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	using __extension_Int64_216_i64 = Builtin::i64;
	#line 216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE(IIntegerDivisibleArithmetic, IIntegerDivisibleArithmetic);
	#line 218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl(__extension_Int64_216_i64 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int64_216_i64;
	#line 220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_eq(__extension_Int64_216_i64 & __this , T rhs)  -> typename __extension_Int64_216_i64&;
	#line 225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl(__extension_Int64_216_i64 const& __this LIFETIMEBOUND, T rhs)  -> const Builtin::Nullable<__extension_Int64_216_i64>;
	#line 216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i64, IIntegerDivisibleArithmetic, IIntegerDivisibleArithmetic, i64);
	} namespace System{
using __extensions::_operator_bsl;
using __extensions::_operator_bsl_eq;
using __extensions::_operator_bsl_bsl;

		} namespace __extensions { using namespace System;
#line 236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	using __extension_Int64_236_i64 = Builtin::i64;
	#line 236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE(IIntegerPowerArithmetic, IIntegerPowerArithmetic);
	#line 239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor(__extension_Int64_236_i64 const& __this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename __extension_Int64_236_i64;
	#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor_eq(__extension_Int64_236_i64 & __this , Builtin::u32 exp)  -> typename __extension_Int64_236_i64&;
	#line 236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i64, IIntegerPowerArithmetic, IIntegerPowerArithmetic, i64);
	} namespace System{
using __extensions::_operator_xor_xor;
using __extensions::_operator_xor_xor_eq;

		} namespace __extensions { using namespace System;
#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	using __extension_Int64_274_i64 = Builtin::i64;
	#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE(INumberBase, INumberBase);
	#line 298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ASTRUMSTD_API auto MaxMagnitude(__extension_Int64_274_i64 const& __this LIFETIMEBOUND, __extension_Int64_274_i64 rhs)  -> const typename __extension_Int64_274_i64;
	#line 327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline auto MaxMagnitudeNumber(__extension_Int64_274_i64 const& __this LIFETIMEBOUND, __extension_Int64_274_i64 rhs)  -> const typename __extension_Int64_274_i64;
	#line 329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ASTRUMSTD_API auto MinMagnitude(__extension_Int64_274_i64 const& __this LIFETIMEBOUND, __extension_Int64_274_i64 rhs)  -> const typename __extension_Int64_274_i64;
	#line 358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline auto MinMagnitudeNumber(__extension_Int64_274_i64 const& __this LIFETIMEBOUND, __extension_Int64_274_i64 rhs)  -> const typename __extension_Int64_274_i64;
	#line 360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ASTRUMSTD_API auto Parse(__extension_Int64_274_i64 const& __this LIFETIMEBOUND, Builtin::Str input)  -> const typename __extension_Int64_274_i64;
	#line 365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ASTRUMSTD_API auto TryParse(__extension_Int64_274_i64 const& __this LIFETIMEBOUND, Builtin::Str input) noexcept -> const Builtin::Nullable<__extension_Int64_274_i64>;
	#line 372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToInt8(__extension_Int64_274_i64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i8;
	#line 373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToUInt8(__extension_Int64_274_i64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u8;
	#line 374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToInt16(__extension_Int64_274_i64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i16;
	#line 375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToUInt16(__extension_Int64_274_i64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u16;
	#line 376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToInt32(__extension_Int64_274_i64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i32;
	#line 377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToUInt32(__extension_Int64_274_i64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u32;
	#line 378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToInt64(__extension_Int64_274_i64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i64;
	#line 379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToUInt64(__extension_Int64_274_i64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u64;
	#line 380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToInt128(__extension_Int64_274_i64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i128;
	#line 381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToUInt128(__extension_Int64_274_i64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u128;
	#line 382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToIsize(__extension_Int64_274_i64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::isize;
	#line 383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToUsize(__extension_Int64_274_i64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::usize;
	#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class __TT> struct __static_getOne; template<> struct __static_getOne<__extension_Int64_274_i64> { static inline constexpr auto get() -> const __extension_Int64_274_i64; };
	#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class __TT> struct __static_getZero; template<> struct __static_getZero<__extension_Int64_274_i64> { static inline constexpr auto get() -> const __extension_Int64_274_i64; };
	#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class __TT> struct __static_getRadix; template<> struct __static_getRadix<__extension_Int64_274_i64> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getAbs(__extension_Int64_274_i64 const& __this ) -> const __extension_Int64_274_i64;
	#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsCanonical(__extension_Int64_274_i64 const& __this ) -> const bool;
	#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsComplexNumber(__extension_Int64_274_i64 const& __this ) -> const bool;
	#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsEvenInteger(__extension_Int64_274_i64 const& __this ) -> const bool;
	#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsFinite(__extension_Int64_274_i64 const& __this ) -> const bool;
	#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsImaginaryNumber(__extension_Int64_274_i64 const& __this ) -> const bool;
	#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsInfinity(__extension_Int64_274_i64 const& __this ) -> const bool;
	#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsInteger(__extension_Int64_274_i64 const& __this ) -> const bool;
	#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsNaN(__extension_Int64_274_i64 const& __this ) -> const bool;
	#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsNegative(__extension_Int64_274_i64 const& __this ) -> const bool;
	#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsNegativeInfinity(__extension_Int64_274_i64 const& __this ) -> const bool;
	#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsNormal(__extension_Int64_274_i64 const& __this ) -> const bool;
	#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsOddInteger(__extension_Int64_274_i64 const& __this ) -> const bool;
	#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsPositive(__extension_Int64_274_i64 const& __this ) -> const bool;
	#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsPositiveInfinity(__extension_Int64_274_i64 const& __this ) -> const bool;
	#line 294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsRealNumber(__extension_Int64_274_i64 const& __this ) -> const bool;
	#line 295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsSubnormal(__extension_Int64_274_i64 const& __this ) -> const bool;
	#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsZero(__extension_Int64_274_i64 const& __this ) -> const bool;
	#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i64, INumberBase, INumberBase, i64);
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
#line 386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	using __extension_Int64_386_i64 = Builtin::i64;
	#line 386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE(ISignedNumber, ISignedNumber);
	#line 387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class __TT> struct __static_getMinusOne; template<> struct __static_getMinusOne<__extension_Int64_386_i64> { static inline constexpr auto get() -> const __extension_Int64_386_i64; };
	#line 386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i64, ISignedNumber, ISignedNumber, i64);
	} namespace System{
using __extensions::__static_getMinusOne;

		} namespace __extensions { using namespace System;
#line 390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	using __extension_Int64_390_i64 = Builtin::i64;
	#line 390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE(INumber, INumber);
	#line 393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ASTRUMSTD_API auto CopySign(__extension_Int64_390_i64 const& __this LIFETIMEBOUND, __extension_Int64_390_i64 sign)  -> const typename __extension_Int64_390_i64;
	#line 411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto Max(__extension_Int64_390_i64 const& __this LIFETIMEBOUND, __extension_Int64_390_i64 rhs) noexcept -> const typename __extension_Int64_390_i64;
	#line 412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto MaxNumber(__extension_Int64_390_i64 const& __this LIFETIMEBOUND, __extension_Int64_390_i64 rhs) noexcept -> const typename __extension_Int64_390_i64;
	#line 413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto Min(__extension_Int64_390_i64 const& __this LIFETIMEBOUND, __extension_Int64_390_i64 rhs) noexcept -> const typename __extension_Int64_390_i64;
	#line 414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto MinNumber(__extension_Int64_390_i64 const& __this LIFETIMEBOUND, __extension_Int64_390_i64 rhs) noexcept -> const typename __extension_Int64_390_i64;
	#line 415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto Clamp(__extension_Int64_390_i64 const& __this LIFETIMEBOUND, __extension_Int64_390_i64 min, __extension_Int64_390_i64 max)  -> const typename __extension_Int64_390_i64;
	#line 391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getSign(__extension_Int64_390_i64 const& __this ) -> const Builtin::i32;
	#line 390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i64, INumber, INumber, i64);
	} namespace System{
using __extensions::CopySign;
using __extensions::Max;
using __extensions::MaxNumber;
using __extensions::Min;
using __extensions::MinNumber;
using __extensions::Clamp;
using __extensions::getSign;

		} namespace __extensions { using namespace System;
#line 418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	using __extension_Int64_418_i64 = Builtin::i64;
	#line 418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE(IBinaryNumber, IBinaryNumber);
	#line 482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto CheckedLog(__extension_Int64_418_i64 const& __this LIFETIMEBOUND, __extension_Int64_418_i64 base) noexcept -> const Builtin::Nullable<__extension_Int64_418_i64>;
	#line 515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ASTRUMSTD_API auto Log(__extension_Int64_418_i64 const& __this LIFETIMEBOUND, __extension_Int64_418_i64 base)  -> const typename __extension_Int64_418_i64;
	#line 525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto Midpoint(__extension_Int64_418_i64 const& __this LIFETIMEBOUND, __extension_Int64_418_i64 rhs) noexcept -> const typename __extension_Int64_418_i64;
	#line 533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto IsMultipleOf(__extension_Int64_418_i64 const& __this LIFETIMEBOUND, __extension_Int64_418_i64 rhs) noexcept -> const bool;
	#line 420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class __TT> struct __static_getAllBitsSet; template<> struct __static_getAllBitsSet<__extension_Int64_418_i64> { static inline constexpr auto get() -> const __extension_Int64_418_i64; };
	#line 423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsPow2(__extension_Int64_418_i64 const& __this ) -> const bool;
	#line 427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getCheckedLog2(__extension_Int64_418_i64 const& __this ) -> const Builtin::Nullable<__extension_Int64_418_i64>;
	#line 437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getLog2(__extension_Int64_418_i64 const& __this ) -> const __extension_Int64_418_i64;
	#line 447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getCheckedLog10(__extension_Int64_418_i64 const& __this ) -> const Builtin::Nullable<__extension_Int64_418_i64>;
	#line 472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getLog10(__extension_Int64_418_i64 const& __this ) -> const __extension_Int64_418_i64;
	#line 418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i64, IBinaryNumber, IBinaryNumber, i64);
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
#line 547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	using __extension_Int64_547_i64 = Builtin::i64;
	#line 547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE(ICheckedArithmetic, ICheckedArithmetic);
	#line 550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_add_qst(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_Int64_547_i64>;
	#line 559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_add_qst_eq(__extension_Int64_547_i64 & __this , T rhs) noexcept -> typename __extension_Int64_547_i64&;
	#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_add_ne(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int64_547_i64;
	#line 577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_add_ne_eq(__extension_Int64_547_i64 & __this , T rhs)  -> typename __extension_Int64_547_i64&;
	#line 581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_add_mod(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_Int64_547_i64;
	#line 588 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_add_mod_eq(__extension_Int64_547_i64 & __this , T rhs) noexcept -> typename __extension_Int64_547_i64&;
	#line 592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_add_or(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_Int64_547_i64;
	#line 599 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_add_or_eq(__extension_Int64_547_i64 & __this , T rhs) noexcept -> typename __extension_Int64_547_i64&;
	#line 603 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_add_mod_qst(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<__extension_Int64_547_i64, bool>;
	#line 611 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_qst(__extension_Int64_547_i64 & __this )  -> typename __extension_Int64_547_i64&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_qst_postfix(__extension_Int64_547_i64 & __this)  -> decltype(auto);
	#line 614 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_ne(__extension_Int64_547_i64 & __this )  -> typename __extension_Int64_547_i64&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_ne_postfix(__extension_Int64_547_i64 & __this)  -> decltype(auto);
	#line 617 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_mod(__extension_Int64_547_i64 & __this )  -> typename __extension_Int64_547_i64&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_mod_postfix(__extension_Int64_547_i64 & __this)  -> decltype(auto);
	#line 620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_or(__extension_Int64_547_i64 & __this )  -> typename __extension_Int64_547_i64&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_or_postfix(__extension_Int64_547_i64 & __this)  -> decltype(auto);
	#line 624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto CarryingAdd(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, __extension_Int64_547_i64 rhs, bool carry) noexcept -> const std::tuple<__extension_Int64_547_i64, bool>;
	#line 633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto BorrowingSub(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, __extension_Int64_547_i64 rhs, bool carry) noexcept -> const std::tuple<__extension_Int64_547_i64, bool>;
	#line 642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_sub_qst(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_Int64_547_i64>;
	#line 651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_sub_qst_eq(__extension_Int64_547_i64 & __this , T rhs) noexcept -> typename __extension_Int64_547_i64&;
	#line 662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_sub_ne(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int64_547_i64;
	#line 669 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_sub_ne_eq(__extension_Int64_547_i64 & __this , T rhs)  -> typename __extension_Int64_547_i64&;
	#line 673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_sub_mod(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_Int64_547_i64;
	#line 680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_sub_mod_eq(__extension_Int64_547_i64 & __this , T rhs) noexcept -> typename __extension_Int64_547_i64&;
	#line 684 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_sub_or(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_Int64_547_i64;
	#line 691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_sub_or_eq(__extension_Int64_547_i64 & __this , T rhs) noexcept -> typename __extension_Int64_547_i64&;
	#line 695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_sub_mod_qst(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<__extension_Int64_547_i64, bool>;
	#line 703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_qst(__extension_Int64_547_i64 & __this )  -> typename __extension_Int64_547_i64&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_qst_postfix(__extension_Int64_547_i64 & __this)  -> decltype(auto);
	#line 706 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_ne(__extension_Int64_547_i64 & __this )  -> typename __extension_Int64_547_i64&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_ne_postfix(__extension_Int64_547_i64 & __this)  -> decltype(auto);
	#line 709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_mod(__extension_Int64_547_i64 & __this )  -> typename __extension_Int64_547_i64&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_mod_postfix(__extension_Int64_547_i64 & __this)  -> decltype(auto);
	#line 712 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_or(__extension_Int64_547_i64 & __this )  -> typename __extension_Int64_547_i64&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_or_postfix(__extension_Int64_547_i64 & __this)  -> decltype(auto);
	#line 716 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mul_qst(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_Int64_547_i64>;
	#line 725 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mul_qst_eq(__extension_Int64_547_i64 & __this , T rhs) noexcept -> typename __extension_Int64_547_i64&;
	#line 736 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mul_ne(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int64_547_i64;
	#line 743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mul_ne_eq(__extension_Int64_547_i64 & __this , T rhs)  -> typename __extension_Int64_547_i64&;
	#line 747 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mul_mod(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_Int64_547_i64;
	#line 754 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mul_mod_eq(__extension_Int64_547_i64 & __this , T rhs) noexcept -> typename __extension_Int64_547_i64&;
	#line 758 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mul_or(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_Int64_547_i64;
	#line 765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mul_or_eq(__extension_Int64_547_i64 & __this , T rhs) noexcept -> typename __extension_Int64_547_i64&;
	#line 769 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mul_mod_qst(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<__extension_Int64_547_i64, bool>;
	#line 778 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline auto _operator_mul_gt(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, __extension_Int64_547_i64 rhs) noexcept -> const std::tuple<Builtin::u64, Builtin::i64>;
	#line 787 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline auto CarryingMul(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, __extension_Int64_547_i64 rhs, __extension_Int64_547_i64 carry) noexcept -> const std::tuple<Builtin::u64, Builtin::i64>;
	#line 795 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_qst(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_Int64_547_i64>;
	#line 804 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_qst_eq(__extension_Int64_547_i64 & __this , T rhs) noexcept -> typename __extension_Int64_547_i64&;
	#line 816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_ne(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int64_547_i64;
	#line 823 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_ne_eq(__extension_Int64_547_i64 & __this , T rhs)  -> typename __extension_Int64_547_i64&;
	#line 828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_mod(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int64_547_i64;
	#line 835 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_eq(__extension_Int64_547_i64 & __this , T rhs)  -> typename __extension_Int64_547_i64&;
	#line 840 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_or(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int64_547_i64;
	#line 847 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_or_eq(__extension_Int64_547_i64 & __this , T rhs)  -> typename __extension_Int64_547_i64&;
	#line 852 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_qst(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_Int64_547_i64, bool>;
	#line 861 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_Int64_547_i64>;
	#line 871 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst_eq(__extension_Int64_547_i64 & __this , T rhs) noexcept -> typename __extension_Int64_547_i64&;
	#line 882 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mod_qst(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_Int64_547_i64>;
	#line 891 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mod_qst_eq(__extension_Int64_547_i64 & __this , T rhs) noexcept -> typename __extension_Int64_547_i64&;
	#line 903 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mod_ne(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int64_547_i64;
	#line 910 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mod_ne_eq(__extension_Int64_547_i64 & __this , T rhs)  -> typename __extension_Int64_547_i64&;
	#line 915 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mod_mod(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int64_547_i64;
	#line 922 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mod_mod_eq(__extension_Int64_547_i64 & __this , T rhs)  -> typename __extension_Int64_547_i64&;
	#line 927 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mod_mod_qst(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_Int64_547_i64, bool>;
	#line 936 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_sub_qst(__extension_Int64_547_i64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::Nullable<__extension_Int64_547_i64>;
	#line 946 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_sub_ne(__extension_Int64_547_i64 const& __this LIFETIMEBOUND)  -> const typename __extension_Int64_547_i64;
	#line 953 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_sub_mod(__extension_Int64_547_i64 const& __this LIFETIMEBOUND)  -> const typename __extension_Int64_547_i64;
	#line 961 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_sub_or(__extension_Int64_547_i64 const& __this LIFETIMEBOUND)  -> const typename __extension_Int64_547_i64;
	#line 969 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_sub_mod_qst(__extension_Int64_547_i64 const& __this LIFETIMEBOUND)  -> const std::tuple<__extension_Int64_547_i64, bool>;
	#line 977 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_lt_lt_qst(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<__extension_Int64_547_i64>;
	#line 985 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_lt_lt_qst_eq(__extension_Int64_547_i64 & __this , Builtin::i32 amount) noexcept -> typename __extension_Int64_547_i64&;
	#line 993 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_lt_lt_ne(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename __extension_Int64_547_i64;
	#line 1001 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_lt_lt_ne_eq(__extension_Int64_547_i64 & __this , Builtin::i32 amount)  -> typename __extension_Int64_547_i64&;
	#line 1003 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_lt_lt_mod(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename __extension_Int64_547_i64;
	#line 1006 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_lt_lt_mod_eq(__extension_Int64_547_i64 & __this , Builtin::i32 amount) noexcept -> typename __extension_Int64_547_i64&;
	#line 1008 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_lt_lt_mod_qst(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<__extension_Int64_547_i64, bool>;
	#line 1011 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_gt_gt_qst(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<__extension_Int64_547_i64>;
	#line 1019 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_gt_gt_qst_eq(__extension_Int64_547_i64 & __this , Builtin::i32 amount) noexcept -> typename __extension_Int64_547_i64&;
	#line 1027 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_gt_gt_ne(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename __extension_Int64_547_i64;
	#line 1035 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_gt_gt_ne_eq(__extension_Int64_547_i64 & __this , Builtin::i32 amount)  -> typename __extension_Int64_547_i64&;
	#line 1037 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_gt_gt_mod(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename __extension_Int64_547_i64;
	#line 1040 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_gt_gt_mod_eq(__extension_Int64_547_i64 & __this , Builtin::i32 amount) noexcept -> typename __extension_Int64_547_i64&;
	#line 1042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_gt_gt_mod_qst(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<__extension_Int64_547_i64, bool>;
	#line 1047 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor_qst(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const Builtin::Nullable<__extension_Int64_547_i64>;
	#line 1076 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor_qst_eq(__extension_Int64_547_i64 & __this , Builtin::u32 exp) noexcept -> typename __extension_Int64_547_i64&;
	#line 1084 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor_ne(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename __extension_Int64_547_i64;
	#line 1105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor_ne_eq(__extension_Int64_547_i64 & __this , Builtin::u32 exp)  -> typename __extension_Int64_547_i64&;
	#line 1107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor_mod(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename __extension_Int64_547_i64;
	#line 1139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor_mod_eq(__extension_Int64_547_i64 & __this , Builtin::u32 exp) noexcept -> typename __extension_Int64_547_i64&;
	#line 1141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor_or(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename __extension_Int64_547_i64;
	#line 1150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor_or_eq(__extension_Int64_547_i64 & __this , Builtin::u32 exp) noexcept -> typename __extension_Int64_547_i64&;
	#line 1152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor_mod_qst(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const std::tuple<__extension_Int64_547_i64, bool>;
	#line 1183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getCheckedAbs(__extension_Int64_547_i64 const& __this ) -> const Builtin::Nullable<__extension_Int64_547_i64>;
	#line 1186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getStrictAbs(__extension_Int64_547_i64 const& __this ) -> const __extension_Int64_547_i64;
	#line 1189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getWrappingAbs(__extension_Int64_547_i64 const& __this ) -> const __extension_Int64_547_i64;
	#line 1192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getSaturatingAbs(__extension_Int64_547_i64 const& __this ) -> const __extension_Int64_547_i64;
	#line 1195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getOverflowingAbs(__extension_Int64_547_i64 const& __this ) -> const std::tuple<__extension_Int64_547_i64, bool>;
	#line 547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i64, ICheckedArithmetic, ICheckedArithmetic, i64);
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
#line 1204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	using __extension_Int64_1204_i64 = Builtin::i64;
	#line 1204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE(IBinaryInteger, IBinaryInteger);
	#line 1249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NextMultipleOf(__extension_Int64_1204_i64 const& __this LIFETIMEBOUND, __extension_Int64_1204_i64 rhs)  -> const typename __extension_Int64_1204_i64;
	#line 1265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto CheckedNextMultipleOf(__extension_Int64_1204_i64 const& __this LIFETIMEBOUND, __extension_Int64_1204_i64 rhs) noexcept -> const Builtin::Nullable<__extension_Int64_1204_i64>;
	#line 1205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class __TT> struct __static_getIsSigned; template<> struct __static_getIsSigned<__extension_Int64_1204_i64> { static inline constexpr auto get() -> const bool; };
	#line 1207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getTrailingZeroCount(__extension_Int64_1204_i64 const& __this ) -> const Builtin::u32;
	#line 1208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getTrailingOneCount(__extension_Int64_1204_i64 const& __this ) -> const Builtin::u32;
	#line 1209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getByteCount(__extension_Int64_1204_i64 const& __this ) -> const Builtin::u32;
	#line 1210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getMinimalBitWidth(__extension_Int64_1204_i64 const& __this ) -> const Builtin::u32;
	#line 1214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ASTRUMSTD_API auto getCheckedIsqrt(__extension_Int64_1204_i64 const& __this ) -> const Builtin::Nullable<__extension_Int64_1204_i64>;
	#line 1226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline auto getIsqrt(__extension_Int64_1204_i64 const& __this ) -> const __extension_Int64_1204_i64;
	#line 1235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getLog2Ceiling(__extension_Int64_1204_i64 const& __this ) -> const __extension_Int64_1204_i64;
	#line 1286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getPrevPow2(__extension_Int64_1204_i64 const& __this ) -> const __extension_Int64_1204_i64;
	#line 1297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getNextPow2(__extension_Int64_1204_i64 const& __this ) -> const __extension_Int64_1204_i64;
	#line 1309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getCheckedNextPow2(__extension_Int64_1204_i64 const& __this ) -> const Builtin::Nullable<__extension_Int64_1204_i64>;
	#line 1321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getWrappingNextPow2(__extension_Int64_1204_i64 const& __this ) -> const __extension_Int64_1204_i64;
	#line 1204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i64, IBinaryInteger, IBinaryInteger, i64);
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
#line 1332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	using __extension_Int64_1332_i64 = Builtin::i64;
	#line 1332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE(IFixedWidthInteger, IFixedWidthInteger);
	#line 1365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto RotateLeft(__extension_Int64_1332_i64 const& __this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename __extension_Int64_1332_i64;
	#line 1366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto RotateRight(__extension_Int64_1332_i64 const& __this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename __extension_Int64_1332_i64;
	#line 1333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class __TT> struct __static_getBitWidth; template<> struct __static_getBitWidth<__extension_Int64_1332_i64> { static inline constexpr auto get() -> const Builtin::u32; };
	#line 1335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getLeadingZeroCount(__extension_Int64_1332_i64 const& __this ) -> const Builtin::u32;
	#line 1336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getLeadingOneCount(__extension_Int64_1332_i64 const& __this ) -> const Builtin::u32;
	#line 1337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getPopCount(__extension_Int64_1332_i64 const& __this ) -> const Builtin::u32;
	#line 1338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getZeroCount(__extension_Int64_1332_i64 const& __this ) -> const Builtin::u32;
	#line 1339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getByteSwapped(__extension_Int64_1332_i64 const& __this ) -> const __extension_Int64_1332_i64;
	#line 1340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getBigEndian(__extension_Int64_1332_i64 const& __this ) -> const __extension_Int64_1332_i64;
	#line 1347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getLittleEndian(__extension_Int64_1332_i64 const& __this ) -> const __extension_Int64_1332_i64;
	#line 1354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getReverseBits(__extension_Int64_1332_i64 const& __this ) -> const __extension_Int64_1332_i64;
	#line 1356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getShortestBitLength(__extension_Int64_1332_i64 const& __this ) -> const Builtin::u32;
	#line 1332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i64, IFixedWidthInteger, IFixedWidthInteger, i64);
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
#line 1370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	using __extension_Int64_1370_i64 = Builtin::i64;
	#line 1370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE(IBinaryIntegerFormatInfo, IBinaryIntegerFormatInfo);
	#line 1378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto IsGreaterThanAsUnsigned(__extension_Int64_1370_i64 const& __this LIFETIMEBOUND, __extension_Int64_1370_i64 rhs) noexcept -> const bool;
	#line 1371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class __TT> struct __static_getMaxDigitCount; template<> struct __static_getMaxDigitCount<__extension_Int64_1370_i64> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class __TT> struct __static_getMaxHexDigitCount; template<> struct __static_getMaxHexDigitCount<__extension_Int64_1370_i64> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class __TT> struct __static_getMaxValueDiv10; template<> struct __static_getMaxValueDiv10<__extension_Int64_1370_i64> { static inline constexpr auto get() -> const __extension_Int64_1370_i64; };
	#line 1375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getMultiplyBy10(__extension_Int64_1370_i64 const& __this ) -> const __extension_Int64_1370_i64;
	#line 1376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getMultiplyBy16(__extension_Int64_1370_i64 const& __this ) -> const __extension_Int64_1370_i64;
	#line 1370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i64, IBinaryIntegerFormatInfo, IBinaryIntegerFormatInfo, i64);
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
#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto __static_getMinValue<__extension_Int64_15_i64>::get() -> const __extension_Int64_1370_i64
	{
		#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::i64(-9223372036854775807LL - 1)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto __static_getMaxValue<__extension_Int64_15_i64>::get() -> const __extension_Int64_1370_i64
	{
		#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(+Builtin::i64(9223372036854775807LL)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	
} namespace __extensions { using namespace System;
#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto operator<=>(__extension_Int64_20_i64 const& __this LIFETIMEBOUND, Builtin::Nullable<__extension_Int64_1370_i64> rhs) noexcept -> const Builtin::i32
	{
		#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		{
			#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			if ((!Builtin::Is(rhs, nullptr))) {
				#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				auto __tmp0 = *rhs; const auto& rhs = __tmp0;
				
				#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				return __this <=> rhs;
			}
		}
		#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return Builtin::i32(1);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_gt_gt_gt(__extension_Int64_20_i64 const& __this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename __extension_Int64_20_i64
	{
		#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i64>(UnsafeCast<Builtin::u64>(__this) >> amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_gt_gt_gt_eq(__extension_Int64_20_i64 & __this , Builtin::i32 amount)  -> typename __extension_Int64_20_i64&
	{
		#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_gt_gt_gt)(__this, amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_lt_lt_bsl(__extension_Int64_20_i64 const& __this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename __extension_Int64_20_i64
	{
		#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((amount <=> ADV_USPCS(BitWidth, __extension_Int64_1370_i64)()) >= 0) {
			#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return Builtin::i32(0);
		}
		#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return Builtin::UncheckedShiftLeft(__this, Builtin::Cast<true, Builtin::i32>(amount));
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_lt_lt_bsl_eq(__extension_Int64_20_i64 & __this , Builtin::u32 amount) noexcept -> typename __extension_Int64_20_i64&
	{
		#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_lt_lt_bsl)(__this, amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_gt_gt_bsl(__extension_Int64_20_i64 const& __this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename __extension_Int64_20_i64
	{
		#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((amount <=> ADV_USPCS(BitWidth, __extension_Int64_1370_i64)()) >= 0) {
			#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return ADV_UPCS(IsPositive)(__this.__ref()) ? Builtin::i32(0) : Builtin::i32(-1);
		}
		#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return Builtin::UncheckedShiftRight(__this, Builtin::Cast<true, Builtin::i32>(amount));
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_gt_gt_bsl_eq(__extension_Int64_20_i64 & __this , Builtin::u32 amount) noexcept -> typename __extension_Int64_20_i64&
	{
		#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_gt_gt_bsl)(__this, amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getHashCode(__extension_Int64_20_i64 const& __this ) -> const Builtin::u64
	{
		#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u64>(__this)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	
} namespace __extensions { using namespace System;
#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToBoolean(__extension_Int64_88_i64 const& __this LIFETIMEBOUND) noexcept -> const bool
	{
		#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(__this != Builtin::i32(0)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToInt8(__extension_Int64_88_i64 const& __this LIFETIMEBOUND)  -> const Builtin::i8
	{
		#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((__this <=> Builtin::i32(0x7F)) > 0 || (__this <=> (Builtin::i32(-0x80))) < 0) {
			#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return Builtin::Cast<true, Builtin::i8>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToUInt8(__extension_Int64_88_i64 const& __this LIFETIMEBOUND)  -> const Builtin::u8
	{
		#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((__this <=> Builtin::i32(0)) < 0 || (__this <=> Builtin::i32(0xFF)) > 0) {
			#line 98 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return Builtin::Cast<true, Builtin::u8>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToInt16(__extension_Int64_88_i64 const& __this LIFETIMEBOUND)  -> const Builtin::i16
	{
		#line 103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((__this <=> Builtin::i32(0x7FFF)) > 0 || (__this <=> (Builtin::i32(-0x8000))) < 0) {
			#line 104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return Builtin::Cast<true, Builtin::i16>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToUInt16(__extension_Int64_88_i64 const& __this LIFETIMEBOUND)  -> const Builtin::u16
	{
		#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((__this <=> Builtin::i32(0)) < 0 || (__this <=> Builtin::i32(0xFFFF)) > 0) {
			#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return Builtin::Cast<true, Builtin::u16>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToInt32(__extension_Int64_88_i64 const& __this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((__this <=> Builtin::i32(0x7FFFFFFF)) > 0 || (__this <=> (Builtin::i64(-0x80000000LL))) < 0) {
			#line 116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return Builtin::Cast<true, Builtin::i32>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToUInt32(__extension_Int64_88_i64 const& __this LIFETIMEBOUND)  -> const Builtin::u32
	{
		#line 121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((__this <=> Builtin::i32(0)) < 0 || (__this <=> Builtin::i64(0xFFFFFFFFLL)) > 0) {
			#line 122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return Builtin::Cast<true, Builtin::u32>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToInt64(__extension_Int64_88_i64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i64
	{
		#line 126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToUInt64(__extension_Int64_88_i64 const& __this LIFETIMEBOUND)  -> const Builtin::u64
	{
		#line 128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((__this <=> Builtin::i32(0)) < 0) {
			#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return Builtin::Cast<true, Builtin::u64>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToInt128(__extension_Int64_88_i64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i128
	{
		#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToUInt128(__extension_Int64_88_i64 const& __this LIFETIMEBOUND)  -> const Builtin::u128
	{
		#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((__this <=> Builtin::i32(0)) < 0) {
			#line 136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return Builtin::Cast<true, Builtin::u128>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToIsize(__extension_Int64_88_i64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::isize
	{
		#line 140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToUsize(__extension_Int64_88_i64 const& __this LIFETIMEBOUND)  -> const Builtin::usize
	{
		#line 142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((__this <=> Builtin::i32(0)) < 0) {
			#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if constexpr ((Builtin::usize(sizeof(Builtin::usize)) <=> Builtin::i32(64)) < 0) {
			#line 146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			if ((__this <=> Builtin::i64(0xFFFFFFFFLL)) > 0) {
				#line 147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				Builtin::Throw(Builtin::IntegerOverflowException{});
			}
		}
		#line 150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return Builtin::Cast<true, Builtin::usize>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToFloat32(__extension_Int64_88_i64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::f32
	{
		#line 152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToFloat64(__extension_Int64_88_i64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::f64
	{
		#line 153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToByte(__extension_Int64_88_i64 const& __this LIFETIMEBOUND)  -> const Builtin::char8
	{
		#line 154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(ToUInt8)(__this.__ref())); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto ToChar(__extension_Int64_88_i64 const& __this LIFETIMEBOUND)  -> const Builtin::char16
	{
		#line 157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((__this <=> Builtin::i32(0)) < 0 || (__this <=> Builtin::i64(0xFFFFFFFFLL)) > 0) {
			#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return Builtin::Cast<true, Builtin::u16>(__this);
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	
} namespace __extensions { using namespace System;
#line 168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_div_mod(__extension_Int64_166_i64 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_Int64_1370_i64, __extension_Int64_1370_i64>
	{
		#line 170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator /% implemented only for integer types");
		#line 171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return std::make_tuple(ADV_UFCS(_operator_bsl)(__this, rhs), __this % rhs);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_div_not(__extension_Int64_166_i64 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int64_166_i64
	{
		#line 176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		auto result = __this; 
		#line 177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		result /= rhs;
		#line 178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_div_not_eq(__extension_Int64_166_i64 & __this , auto rhs)  -> typename __extension_Int64_166_i64&
	{
		#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(__this /= rhs); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_div_lt(__extension_Int64_166_i64 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int64_166_i64
	{
		#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if constexpr (Builtin::TypeIs<T, IBinaryInteger>()) {
			#line 186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			const auto& [div, rem] = ADV_UFCS(_operator_div_mod)(__this, rhs);
			#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			if (rem == Builtin::i32(0)) {
				#line 188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				return div;
			}
			#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			auto correction = (__this ^ rhs) >> (ADV_USPCS(BitWidth, __extension_Int64_1370_i64)() - Builtin::i32(1)); 
			#line 191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return div + correction;
		} else {
			#line 192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			{
				#line 193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				return Builtin::Cast<true, __extension_Int64_1370_i64>((ADV_UFCS(_operator_div_lt)(Builtin::f64{__this}, rhs)));
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_div_lt_eq(__extension_Int64_166_i64 & __this , auto rhs)  -> typename __extension_Int64_166_i64&
	{
		#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(__this = __extension_Int64_1370_i64{ADV_UFCS(_operator_div_lt)(__this, rhs)}); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_div_gt(__extension_Int64_166_i64 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int64_166_i64
	{
		#line 201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if constexpr (Builtin::TypeIs<T, IBinaryInteger>()) {
			#line 202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			const auto& [div, rem] = ADV_UFCS(_operator_div_mod)(__this, rhs);
			#line 203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			if (rem == Builtin::i32(0)) {
				#line 204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				return div;
			}
			#line 206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			auto correction = Builtin::i32(1) + ((__this ^ rhs) >> (ADV_USPCS(BitWidth, __extension_Int64_1370_i64)() - Builtin::i32(1))); 
			#line 207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return div + correction;
		} else {
			#line 208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			{
				#line 209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				return Builtin::Cast<true, __extension_Int64_1370_i64>((ADV_UFCS(_operator_div_gt)(Builtin::f64{__this}, rhs)));
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_div_gt_eq(__extension_Int64_166_i64 & __this , auto rhs)  -> typename __extension_Int64_166_i64&
	{
		#line 213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(__this = __extension_Int64_1370_i64{ADV_UFCS(_operator_div_gt)(__this, rhs)}); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	
} namespace __extensions { using namespace System;
#line 218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl(__extension_Int64_216_i64 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int64_216_i64
	{
		#line 218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Div)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_eq(__extension_Int64_216_i64 & __this , T rhs)  -> typename __extension_Int64_216_i64&
	{
		#line 220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(DivAssign)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl(__extension_Int64_216_i64 const& __this LIFETIMEBOUND, T rhs)  -> const Builtin::Nullable<__extension_Int64_1370_i64>
	{
		#line 227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\? implemented only for integer types");
		#line 228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		__extension_Int64_1370_i64 result{}; 
		#line 229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (Builtin::DivExact(__this, rhs, result)) {
			#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return result;
		}
		#line 232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return nullptr;
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	
} namespace __extensions { using namespace System;
#line 239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor(__extension_Int64_236_i64 const& __this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename __extension_Int64_236_i64
	{
		#line 241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return Builtin::i64(1LL);
		}
		#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		auto base = __this; 
		#line 247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		auto result = Builtin::i64(1LL); 
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
				ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
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
					ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
					#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
					base *= base;
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor_eq(__extension_Int64_236_i64 & __this , Builtin::u32 exp)  -> typename __extension_Int64_236_i64&
	{
		#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_xor_xor)(__this, exp)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	
} namespace __extensions { using namespace System;
#line 327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline auto MaxMagnitudeNumber(__extension_Int64_274_i64 const& __this LIFETIMEBOUND, __extension_Int64_1370_i64 rhs)  -> const typename __extension_Int64_274_i64
	{
		#line 327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(MaxMagnitude)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline auto MinMagnitudeNumber(__extension_Int64_274_i64 const& __this LIFETIMEBOUND, __extension_Int64_1370_i64 rhs)  -> const typename __extension_Int64_274_i64
	{
		#line 358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(MinMagnitude)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToInt8(__extension_Int64_274_i64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i8
	{
		#line 372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i8>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToUInt8(__extension_Int64_274_i64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u8
	{
		#line 373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u8>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToInt16(__extension_Int64_274_i64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i16
	{
		#line 374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i16>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToUInt16(__extension_Int64_274_i64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u16
	{
		#line 375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u16>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToInt32(__extension_Int64_274_i64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i32
	{
		#line 376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i32>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToUInt32(__extension_Int64_274_i64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u32
	{
		#line 377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u32>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToInt64(__extension_Int64_274_i64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i64
	{
		#line 378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToUInt64(__extension_Int64_274_i64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u64
	{
		#line 379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u64>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToInt128(__extension_Int64_274_i64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i128
	{
		#line 380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToUInt128(__extension_Int64_274_i64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u128
	{
		#line 381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u128>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToIsize(__extension_Int64_274_i64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::isize
	{
		#line 382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::isize>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NarrowToUsize(__extension_Int64_274_i64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::usize
	{
		#line 383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::usize>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto __static_getOne<__extension_Int64_274_i64>::get() -> const __extension_Int64_1370_i64
	{
		#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::i64(1LL)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto __static_getZero<__extension_Int64_274_i64>::get() -> const __extension_Int64_1370_i64
	{
		#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::i64(0LL)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto __static_getRadix<__extension_Int64_274_i64>::get() -> const Builtin::i32
	{
		#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(2)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getAbs(__extension_Int64_274_i64 const& __this ) -> const __extension_Int64_1370_i64
	{
		#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)(__this.__ref()) ? -__this : __this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsCanonical(__extension_Int64_274_i64 const& __this ) -> const bool
	{
		#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsComplexNumber(__extension_Int64_274_i64 const& __this ) -> const bool
	{
		#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsEvenInteger(__extension_Int64_274_i64 const& __this ) -> const bool
	{
		#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY((__this & Builtin::i64(1LL)) == Builtin::i32(0)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsFinite(__extension_Int64_274_i64 const& __this ) -> const bool
	{
		#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsImaginaryNumber(__extension_Int64_274_i64 const& __this ) -> const bool
	{
		#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsInfinity(__extension_Int64_274_i64 const& __this ) -> const bool
	{
		#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsInteger(__extension_Int64_274_i64 const& __this ) -> const bool
	{
		#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsNaN(__extension_Int64_274_i64 const& __this ) -> const bool
	{
		#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsNegative(__extension_Int64_274_i64 const& __this ) -> const bool
	{
		#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY((__this <=> Builtin::i32(0)) < 0); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsNegativeInfinity(__extension_Int64_274_i64 const& __this ) -> const bool
	{
		#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsNormal(__extension_Int64_274_i64 const& __this ) -> const bool
	{
		#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(__this != Builtin::i32(0)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsOddInteger(__extension_Int64_274_i64 const& __this ) -> const bool
	{
		#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY((__this & Builtin::i64(1LL)) != Builtin::i32(0)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsPositive(__extension_Int64_274_i64 const& __this ) -> const bool
	{
		#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY((__this <=> Builtin::i32(0)) >= 0); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsPositiveInfinity(__extension_Int64_274_i64 const& __this ) -> const bool
	{
		#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsRealNumber(__extension_Int64_274_i64 const& __this ) -> const bool
	{
		#line 294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsSubnormal(__extension_Int64_274_i64 const& __this ) -> const bool
	{
		#line 295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsZero(__extension_Int64_274_i64 const& __this ) -> const bool
	{
		#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(__this == Builtin::i32(0)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	
} namespace __extensions { using namespace System;
#line 387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto __static_getMinusOne<__extension_Int64_386_i64>::get() -> const __extension_Int64_1370_i64
	{
		#line 387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(-1)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	
} namespace __extensions { using namespace System;
#line 411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto Max(__extension_Int64_390_i64 const& __this LIFETIMEBOUND, __extension_Int64_1370_i64 rhs) noexcept -> const typename __extension_Int64_390_i64
	{
		#line 411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultMax)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto MaxNumber(__extension_Int64_390_i64 const& __this LIFETIMEBOUND, __extension_Int64_1370_i64 rhs) noexcept -> const typename __extension_Int64_390_i64
	{
		#line 412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Max)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto Min(__extension_Int64_390_i64 const& __this LIFETIMEBOUND, __extension_Int64_1370_i64 rhs) noexcept -> const typename __extension_Int64_390_i64
	{
		#line 413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultMin)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto MinNumber(__extension_Int64_390_i64 const& __this LIFETIMEBOUND, __extension_Int64_1370_i64 rhs) noexcept -> const typename __extension_Int64_390_i64
	{
		#line 414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Min)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto Clamp(__extension_Int64_390_i64 const& __this LIFETIMEBOUND, __extension_Int64_1370_i64 min, __extension_Int64_1370_i64 max)  -> const typename __extension_Int64_390_i64
	{
		#line 415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultClamp)(__this, min, max)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getSign(__extension_Int64_390_i64 const& __this ) -> const Builtin::i32
	{
		#line 391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultSign)(__this)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	
} namespace __extensions { using namespace System;
#line 482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto CheckedLog(__extension_Int64_418_i64 const& __this LIFETIMEBOUND, __extension_Int64_1370_i64 base) noexcept -> const Builtin::Nullable<__extension_Int64_1370_i64>
	{
		#line 484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((__this <=> Builtin::i32(0)) <= 0 || (base <=> Builtin::i32(1)) <= 0) {
			#line 485 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return nullptr;
		}
		#line 488 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (std::is_constant_evaluated()) {
			#line 489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			if (base == Builtin::i32(2)) {
				#line 490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				return ADV_UPCS(CheckedLog2)(__this.__ref());
			}
			#line 492 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			if (base == Builtin::i32(10)) {
				#line 493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				return ADV_UPCS(CheckedLog10)(__this.__ref());
			}
		}
		#line 497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((__this <=> base) < 0) {
			#line 498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return Builtin::i64(0LL);
		}
		#line 501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		__extension_Int64_1370_i64 n = Builtin::i64(1LL); 
		#line 502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		auto r = base; 
		#line 503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		const auto baseRatio = ADV_UFCS(_operator_bsl)(__this, base); 
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
} namespace __extensions { using namespace System;
#line 525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto Midpoint(__extension_Int64_418_i64 const& __this LIFETIMEBOUND, __extension_Int64_1370_i64 rhs) noexcept -> const typename __extension_Int64_418_i64
	{
		#line 527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		const auto result = ((__this ^ rhs) >> Builtin::i32(1)) + (__this & rhs); 
		#line 528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		const auto correction = (result <=> Builtin::i32(0)) < 0; 
		#line 529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result + ((Builtin::Cast<true, __extension_Int64_1370_i64>(correction)) & (__this ^ rhs));
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto IsMultipleOf(__extension_Int64_418_i64 const& __this LIFETIMEBOUND, __extension_Int64_1370_i64 rhs) noexcept -> const bool
	{
		#line 535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (rhs == Builtin::i32(0)) {
			#line 536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return __this == Builtin::i32(0);
		}
		#line 539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (rhs == Builtin::i32(-1)) {
			#line 540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return Builtin::Boolean(true);
		}
		#line 543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return __this % rhs == Builtin::i32(0);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto __static_getAllBitsSet<__extension_Int64_418_i64>::get() -> const __extension_Int64_1370_i64
	{
		#line 420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(MinusOne, Builtin::i64)()); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getIsPow2(__extension_Int64_418_i64 const& __this ) -> const bool
	{
		#line 423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsPositive)(__this.__ref()) && ADV_UPCS(PopCount)(__this.__ref()) == Builtin::i32(1)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getCheckedLog2(__extension_Int64_418_i64 const& __this ) -> const Builtin::Nullable<__extension_Int64_1370_i64>
	{
		#line 429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((__this <=> Builtin::i32(0)) <= 0) {
			#line 430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return nullptr;
		}
		#line 433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return Builtin::Cast<true, __extension_Int64_1370_i64>((ADV_USPCS(BitWidth, __extension_Int64_1370_i64)() - Builtin::i32(1) - ADV_UPCS(LeadingZeroCount)(__this.__ref())));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getLog2(__extension_Int64_418_i64 const& __this ) -> const __extension_Int64_1370_i64
	{
		#line 439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (const auto result = ADV_UPCS(CheckedLog2)(__this.__ref())) {
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
} namespace __extensions { using namespace System;
#line 447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getCheckedLog10(__extension_Int64_418_i64 const& __this ) -> const Builtin::Nullable<__extension_Int64_1370_i64>
	{
		#line 449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((__this <=> Builtin::i32(0)) <= 0) {
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
		auto log = Builtin::i32(0); 
		#line 458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		auto val1 = Builtin::Cast<true, Builtin::u64>(__this); 
		#line 459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((val1 <=> Builtin::i64(10000000000LL)) >= 0) {
			#line 460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			ADV_UFCS(DivAssign)(val1.__ref(), Builtin::u64(10000000000ULL));
			#line 461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			log += Builtin::i32(10);
		}
		#line 463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((val1 <=> Builtin::i32(100000)) >= 0) {
			#line 464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			ADV_UFCS(DivAssign)(val1.__ref(), Builtin::u32(100000U));
			#line 465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			log += Builtin::i32(5);
		}
		#line 467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		const auto val = Builtin::Cast<true, Builtin::u32>(val1); 
		#line 468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return log + ((((val + C1) & (val + C2)) ^ ((val + C3) & (val + C4))) >> Builtin::i32(17));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getLog10(__extension_Int64_418_i64 const& __this ) -> const __extension_Int64_1370_i64
	{
		#line 474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (const auto result = ADV_UPCS(CheckedLog10)(__this.__ref())) {
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
	
} namespace __extensions { using namespace System;
#line 550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_add_qst(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_Int64_1370_i64>
	{
		#line 552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +? implemented only for integer types");
		#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		__extension_Int64_1370_i64 result{}; 
		#line 554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (Builtin::SafeAdd(__this, rhs, result)) {
			#line 555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return result;
		}
		#line 557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_add_qst_eq(__extension_Int64_547_i64 & __this , T rhs) noexcept -> typename __extension_Int64_547_i64&
	{
		#line 561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +?= implemented only for integer types");
		#line 562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (const auto result = ADV_UFCS(_operator_add_qst)(__this, rhs)) {
			{
				#line 562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				__this = result;
			}
		}
		#line 565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_add_ne(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int64_547_i64
	{
		#line 572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +! implemented only for integer types");
		#line 573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		__extension_Int64_1370_i64 result{}; 
		#line 574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::StrictAdd(__this, rhs, result);
		#line 575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_add_ne_eq(__extension_Int64_547_i64 & __this , T rhs)  -> typename __extension_Int64_547_i64&
	{
		#line 577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_add_ne)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_add_mod(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_Int64_547_i64
	{
		#line 583 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +% implemented only for integer types");
		#line 584 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		__extension_Int64_1370_i64 result{}; 
		#line 585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::WrappingAdd(__this, rhs, result);
		#line 586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 588 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_add_mod_eq(__extension_Int64_547_i64 & __this , T rhs) noexcept -> typename __extension_Int64_547_i64&
	{
		#line 588 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_add_mod)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_add_or(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_Int64_547_i64
	{
		#line 594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +| implemented only for integer types");
		#line 595 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		__extension_Int64_1370_i64 result{}; 
		#line 596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::SaturatingAdd(__this, rhs, result);
		#line 597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 599 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_add_or_eq(__extension_Int64_547_i64 & __this , T rhs) noexcept -> typename __extension_Int64_547_i64&
	{
		#line 599 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_add_or)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 603 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_add_mod_qst(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<__extension_Int64_1370_i64, bool>
	{
		#line 604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +%? implemented only for integer types");
		#line 605 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		__extension_Int64_1370_i64 result{}; 
		#line 606 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		auto overflowed = !Builtin::SafeAdd(__this, rhs, result); 
		#line 607 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 611 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_add_add_qst(__extension_Int64_547_i64 & __this )  -> typename __extension_Int64_547_i64&
	{
		#line 611 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_qst_eq)(__this, Builtin::i64(1LL))); 
	}
	inline constexpr auto _operator_add_add_qst_postfix(__extension_Int64_547_i64 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_add_add_qst)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 614 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_add_add_ne(__extension_Int64_547_i64 & __this )  -> typename __extension_Int64_547_i64&
	{
		#line 614 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_ne_eq)(__this, Builtin::i64(1LL))); 
	}
	inline constexpr auto _operator_add_add_ne_postfix(__extension_Int64_547_i64 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_add_add_ne)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 617 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_add_add_mod(__extension_Int64_547_i64 & __this )  -> typename __extension_Int64_547_i64&
	{
		#line 617 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_mod_eq)(__this, Builtin::i64(1LL))); 
	}
	inline constexpr auto _operator_add_add_mod_postfix(__extension_Int64_547_i64 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_add_add_mod)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_add_add_or(__extension_Int64_547_i64 & __this )  -> typename __extension_Int64_547_i64&
	{
		#line 620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_or_eq)(__this, Builtin::i64(1LL))); 
	}
	inline constexpr auto _operator_add_add_or_postfix(__extension_Int64_547_i64 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_add_add_or)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto CarryingAdd(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, __extension_Int64_1370_i64 rhs, bool carry) noexcept -> const std::tuple<__extension_Int64_1370_i64, bool>
	{
		#line 626 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		__extension_Int64_1370_i64 result{}; 
		#line 627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		auto overflowed = Builtin::CarryingAdd(__this, rhs, carry, result); 
		#line 628 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto BorrowingSub(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, __extension_Int64_1370_i64 rhs, bool carry) noexcept -> const std::tuple<__extension_Int64_1370_i64, bool>
	{
		#line 635 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		__extension_Int64_1370_i64 result{}; 
		#line 636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		auto overflowed = Builtin::BorrowingSub(__this, rhs, carry, result); 
		#line 637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_sub_qst(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_Int64_1370_i64>
	{
		#line 644 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -? implemented only for integer types");
		#line 645 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		__extension_Int64_1370_i64 result{}; 
		#line 646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (Builtin::SafeSubtract(__this, rhs, result)) {
			#line 647 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return result;
		}
		#line 649 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_sub_qst_eq(__extension_Int64_547_i64 & __this , T rhs) noexcept -> typename __extension_Int64_547_i64&
	{
		#line 653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -?= implemented only for integer types");
		#line 654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (const auto result = ADV_UFCS(_operator_sub_qst)(__this, rhs)) {
			{
				#line 654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				__this = result;
			}
		}
		#line 657 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_sub_ne(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int64_547_i64
	{
		#line 664 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -! implemented only for integer types");
		#line 665 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		__extension_Int64_1370_i64 result{}; 
		#line 666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::StrictSubtract(__this, rhs, result);
		#line 667 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 669 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_sub_ne_eq(__extension_Int64_547_i64 & __this , T rhs)  -> typename __extension_Int64_547_i64&
	{
		#line 669 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_sub_ne)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_sub_mod(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_Int64_547_i64
	{
		#line 675 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -% implemented only for integer types");
		#line 676 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		__extension_Int64_1370_i64 result{}; 
		#line 677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::WrappingSubtract(__this, rhs, result);
		#line 678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_sub_mod_eq(__extension_Int64_547_i64 & __this , T rhs) noexcept -> typename __extension_Int64_547_i64&
	{
		#line 680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_sub_mod)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 684 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_sub_or(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_Int64_547_i64
	{
		#line 686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -| implemented only for integer types");
		#line 687 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		__extension_Int64_1370_i64 result{}; 
		#line 688 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::SaturatingSubtract(__this, rhs, result);
		#line 689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_sub_or_eq(__extension_Int64_547_i64 & __this , T rhs) noexcept -> typename __extension_Int64_547_i64&
	{
		#line 691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_sub_or)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_sub_mod_qst(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<__extension_Int64_1370_i64, bool>
	{
		#line 696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -%? implemented only for integer types");
		#line 697 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		__extension_Int64_1370_i64 result{}; 
		#line 698 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		auto overflowed = !Builtin::SafeSubtract(__this, rhs, result); 
		#line 699 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_sub_sub_qst(__extension_Int64_547_i64 & __this )  -> typename __extension_Int64_547_i64&
	{
		#line 703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_qst_eq)(__this, Builtin::i64(1LL))); 
	}
	inline constexpr auto _operator_sub_sub_qst_postfix(__extension_Int64_547_i64 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_sub_sub_qst)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 706 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_sub_sub_ne(__extension_Int64_547_i64 & __this )  -> typename __extension_Int64_547_i64&
	{
		#line 706 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_ne_eq)(__this, Builtin::i64(1LL))); 
	}
	inline constexpr auto _operator_sub_sub_ne_postfix(__extension_Int64_547_i64 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_sub_sub_ne)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_sub_sub_mod(__extension_Int64_547_i64 & __this )  -> typename __extension_Int64_547_i64&
	{
		#line 709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_mod_eq)(__this, Builtin::i64(1LL))); 
	}
	inline constexpr auto _operator_sub_sub_mod_postfix(__extension_Int64_547_i64 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_sub_sub_mod)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 712 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_sub_sub_or(__extension_Int64_547_i64 & __this )  -> typename __extension_Int64_547_i64&
	{
		#line 712 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_or_eq)(__this, Builtin::i64(1LL))); 
	}
	inline constexpr auto _operator_sub_sub_or_postfix(__extension_Int64_547_i64 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_sub_sub_or)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 716 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mul_qst(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_Int64_1370_i64>
	{
		#line 718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *? implemented only for integer types");
		#line 719 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		__extension_Int64_1370_i64 result{}; 
		#line 720 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (Builtin::SafeMultiply(__this, rhs, result)) {
			#line 721 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return result;
		}
		#line 723 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 725 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mul_qst_eq(__extension_Int64_547_i64 & __this , T rhs) noexcept -> typename __extension_Int64_547_i64&
	{
		#line 727 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *?= implemented only for integer types");
		#line 728 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (const auto result = ADV_UFCS(_operator_mul_qst)(__this, rhs)) {
			{
				#line 728 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				__this = result;
			}
		}
		#line 731 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 736 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mul_ne(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int64_547_i64
	{
		#line 738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *! implemented only for integer types");
		#line 739 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		__extension_Int64_1370_i64 result{}; 
		#line 740 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::StrictMultiply(__this, rhs, result);
		#line 741 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mul_ne_eq(__extension_Int64_547_i64 & __this , T rhs)  -> typename __extension_Int64_547_i64&
	{
		#line 743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_mul_ne)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 747 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mul_mod(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_Int64_547_i64
	{
		#line 749 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *% implemented only for integer types");
		#line 750 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		__extension_Int64_1370_i64 result{}; 
		#line 751 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::WrappingMultiply(__this, rhs, result);
		#line 752 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 754 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mul_mod_eq(__extension_Int64_547_i64 & __this , T rhs) noexcept -> typename __extension_Int64_547_i64&
	{
		#line 754 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_mul_mod)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 758 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mul_or(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_Int64_547_i64
	{
		#line 760 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *| implemented only for integer types");
		#line 761 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		__extension_Int64_1370_i64 result{}; 
		#line 762 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::SaturatingMultiply(__this, rhs, result);
		#line 763 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mul_or_eq(__extension_Int64_547_i64 & __this , T rhs) noexcept -> typename __extension_Int64_547_i64&
	{
		#line 765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_mul_or)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 769 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mul_mod_qst(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<__extension_Int64_1370_i64, bool>
	{
		#line 770 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *%? implemented only for integer types");
		#line 771 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		__extension_Int64_1370_i64 result{}; 
		#line 772 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		auto overflowed = !Builtin::SafeMultiply(__this, rhs, result); 
		#line 773 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 778 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline auto _operator_mul_gt(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, __extension_Int64_1370_i64 rhs) noexcept -> const std::tuple<Builtin::u64, Builtin::i64>
	{
		#line 780 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		const auto& [low, high] = Builtin::WideningMul64(__this, rhs);
		#line 781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return std::make_tuple(low, high);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 787 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline auto CarryingMul(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, __extension_Int64_1370_i64 rhs, __extension_Int64_1370_i64 carry) noexcept -> const std::tuple<Builtin::u64, Builtin::i64>
	{
		#line 789 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		const auto& [low, high] = Builtin::CarryingMul64(__this, rhs, carry);
		#line 790 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return std::make_tuple(low, high);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 795 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_qst(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_Int64_1370_i64>
	{
		#line 797 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\? implemented only for integer types");
		#line 798 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		__extension_Int64_1370_i64 result{}; 
		#line 799 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (Builtin::SafeDivide(__this, rhs, result)) {
			#line 800 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return result;
		}
		#line 802 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 804 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_qst_eq(__extension_Int64_547_i64 & __this , T rhs) noexcept -> typename __extension_Int64_547_i64&
	{
		#line 806 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\?= implemented only for integer types");
		#line 807 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (const auto result = ADV_UFCS(_operator_bsl_qst)(__this, rhs)) {
			{
				#line 807 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 808 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				__this = result;
			}
		}
		#line 810 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_ne(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int64_547_i64
	{
		#line 818 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\! implemented only for integer types");
		#line 819 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		__extension_Int64_1370_i64 result{}; 
		#line 820 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::StrictDivide(__this, rhs, result);
		#line 821 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 823 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_ne_eq(__extension_Int64_547_i64 & __this , T rhs)  -> typename __extension_Int64_547_i64&
	{
		#line 823 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_bsl_ne)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_mod(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int64_547_i64
	{
		#line 830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\% implemented only for integer types");
		#line 831 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		__extension_Int64_1370_i64 result{}; 
		#line 832 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::WrappingDivide(__this, rhs, result);
		#line 833 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 835 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_eq(__extension_Int64_547_i64 & __this , T rhs)  -> typename __extension_Int64_547_i64&
	{
		#line 835 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_bsl_mod)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 840 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_or(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int64_547_i64
	{
		#line 842 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\| implemented only for integer types");
		#line 843 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		__extension_Int64_1370_i64 result{}; 
		#line 844 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::SaturatingDivide(__this, rhs, result);
		#line 845 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 847 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_or_eq(__extension_Int64_547_i64 & __this , T rhs)  -> typename __extension_Int64_547_i64&
	{
		#line 847 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_bsl_or)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 852 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_qst(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_Int64_1370_i64, bool>
	{
		#line 853 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\%? implemented only for integer types");
		#line 854 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		__extension_Int64_1370_i64 result{}; 
		#line 855 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		auto overflowed = !Builtin::SafeDivide(__this, rhs, result); 
		#line 856 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 861 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_Int64_1370_i64>
	{
		#line 863 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\? implemented only for integer types");
		#line 864 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		__extension_Int64_1370_i64 result{}; 
		#line 865 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (Builtin::SafeDivExact(__this, rhs, result)) {
			#line 866 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return result;
		}
		#line 868 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 871 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst_eq(__extension_Int64_547_i64 & __this , T rhs) noexcept -> typename __extension_Int64_547_i64&
	{
		#line 873 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\?= implemented only for integer types");
		#line 874 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (const auto result = ADV_UFCS(_operator_bsl_bsl_qst)(__this, rhs)) {
			{
				#line 874 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 875 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				__this = result;
			}
		}
		#line 877 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 882 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mod_qst(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_Int64_1370_i64>
	{
		#line 884 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %? implemented only for integer types");
		#line 885 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		__extension_Int64_1370_i64 result{}; 
		#line 886 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (Builtin::SafeModulus(__this, rhs, result)) {
			#line 887 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return result;
		}
		#line 889 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 891 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mod_qst_eq(__extension_Int64_547_i64 & __this , T rhs) noexcept -> typename __extension_Int64_547_i64&
	{
		#line 893 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %?= implemented only for integer types");
		#line 894 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (const auto result = ADV_UFCS(_operator_mod_qst)(__this, rhs)) {
			{
				#line 894 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 895 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				__this = result;
			}
		}
		#line 897 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 903 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mod_ne(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int64_547_i64
	{
		#line 905 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %! implemented only for integer types");
		#line 906 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		__extension_Int64_1370_i64 result{}; 
		#line 907 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::StrictModulus(__this, rhs, result);
		#line 908 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 910 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mod_ne_eq(__extension_Int64_547_i64 & __this , T rhs)  -> typename __extension_Int64_547_i64&
	{
		#line 910 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_mod_ne)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 915 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mod_mod(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int64_547_i64
	{
		#line 917 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %% implemented only for integer types");
		#line 918 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		__extension_Int64_1370_i64 result{}; 
		#line 919 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::WrappingModulus(__this, rhs, result);
		#line 920 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 922 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mod_mod_eq(__extension_Int64_547_i64 & __this , T rhs)  -> typename __extension_Int64_547_i64&
	{
		#line 922 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_mod_mod)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 927 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	template<class T> inline constexpr auto _operator_mod_mod_qst(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_Int64_1370_i64, bool>
	{
		#line 928 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %%? implemented only for integer types");
		#line 929 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		__extension_Int64_1370_i64 result{}; 
		#line 930 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		auto overflowed = !Builtin::SafeModulus(__this, rhs, result); 
		#line 931 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 936 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_sub_qst(__extension_Int64_547_i64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::Nullable<__extension_Int64_1370_i64>
	{
		#line 938 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		__extension_Int64_1370_i64 result{}; 
		#line 939 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (Builtin::SafeNegate(__this, result)) {
			#line 940 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return result;
		}
		#line 942 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 946 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_sub_ne(__extension_Int64_547_i64 const& __this LIFETIMEBOUND)  -> const typename __extension_Int64_547_i64
	{
		#line 948 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		__extension_Int64_1370_i64 result{}; 
		#line 949 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::StrictNegate(__this, result);
		#line 950 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 953 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_sub_mod(__extension_Int64_547_i64 const& __this LIFETIMEBOUND)  -> const typename __extension_Int64_547_i64
	{
		#line 955 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		__extension_Int64_1370_i64 result{}; 
		#line 956 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::WrappingNegate(__this, result);
		#line 957 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 961 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_sub_or(__extension_Int64_547_i64 const& __this LIFETIMEBOUND)  -> const typename __extension_Int64_547_i64
	{
		#line 963 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		__extension_Int64_1370_i64 result{}; 
		#line 964 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::SaturatingNegate(__this, result);
		#line 965 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 969 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_sub_mod_qst(__extension_Int64_547_i64 const& __this LIFETIMEBOUND)  -> const std::tuple<__extension_Int64_1370_i64, bool>
	{
		#line 971 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		__extension_Int64_1370_i64 result{}; 
		#line 972 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		auto overflowed = !Builtin::SafeNegate(__this, result); 
		#line 973 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 977 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_lt_lt_qst(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<__extension_Int64_1370_i64>
	{
		#line 979 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, __extension_Int64_1370_i64)()) < 0) {
			#line 980 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return Builtin::UncheckedShiftLeft(__this, amount);
		}
		#line 982 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 985 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_lt_lt_qst_eq(__extension_Int64_547_i64 & __this , Builtin::i32 amount) noexcept -> typename __extension_Int64_547_i64&
	{
		#line 987 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, __extension_Int64_1370_i64)()) < 0) {
			#line 988 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return __this <<= amount;
		}
		#line 990 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 993 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_lt_lt_ne(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename __extension_Int64_547_i64
	{
		#line 995 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, __extension_Int64_1370_i64)()) < 0) {
			#line 996 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return Builtin::UncheckedShiftLeft(__this, amount);
		}
		#line 998 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Throw(Builtin::IntegerOverflowException{});
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1001 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_lt_lt_ne_eq(__extension_Int64_547_i64 & __this , Builtin::i32 amount)  -> typename __extension_Int64_547_i64&
	{
		#line 1001 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_lt_lt_ne)(__this, amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1003 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_lt_lt_mod(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename __extension_Int64_547_i64
	{
		#line 1003 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::UncheckedShiftLeft(__this, amount & (ADV_USPCS(BitWidth, __extension_Int64_1370_i64)() - Builtin::i32(1)))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1006 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_lt_lt_mod_eq(__extension_Int64_547_i64 & __this , Builtin::i32 amount) noexcept -> typename __extension_Int64_547_i64&
	{
		#line 1006 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_lt_lt_mod)(__this, amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1008 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_lt_lt_mod_qst(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<__extension_Int64_1370_i64, bool>
	{
		#line 1008 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(std::make_tuple(ADV_UFCS(_operator_lt_lt_mod)(__this, amount), (amount <=> Builtin::i32(0)) < 0 || (amount <=> ADV_USPCS(BitWidth, __extension_Int64_1370_i64)()) >= 0)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1011 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_gt_gt_qst(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<__extension_Int64_1370_i64>
	{
		#line 1013 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, __extension_Int64_1370_i64)()) < 0) {
			#line 1014 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return __this >> amount;
		}
		#line 1016 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1019 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_gt_gt_qst_eq(__extension_Int64_547_i64 & __this , Builtin::i32 amount) noexcept -> typename __extension_Int64_547_i64&
	{
		#line 1021 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, __extension_Int64_1370_i64)()) < 0) {
			#line 1022 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return __this >>= amount;
		}
		#line 1024 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1027 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_gt_gt_ne(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename __extension_Int64_547_i64
	{
		#line 1029 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, __extension_Int64_1370_i64)()) < 0) {
			#line 1030 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return __this >> amount;
		}
		#line 1032 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Throw(Builtin::IntegerOverflowException{});
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1035 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_gt_gt_ne_eq(__extension_Int64_547_i64 & __this , Builtin::i32 amount)  -> typename __extension_Int64_547_i64&
	{
		#line 1035 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_gt_gt_ne)(__this, amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1037 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_gt_gt_mod(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename __extension_Int64_547_i64
	{
		#line 1037 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::UncheckedShiftRight(__this, amount & (ADV_USPCS(BitWidth, __extension_Int64_1370_i64)() - Builtin::i32(1)))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1040 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_gt_gt_mod_eq(__extension_Int64_547_i64 & __this , Builtin::i32 amount) noexcept -> typename __extension_Int64_547_i64&
	{
		#line 1040 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_gt_gt_mod)(__this, amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_gt_gt_mod_qst(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<__extension_Int64_1370_i64, bool>
	{
		#line 1042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(std::make_tuple(ADV_UFCS(_operator_gt_gt_mod)(__this, amount), (amount <=> Builtin::i32(0)) < 0 || (amount <=> ADV_USPCS(BitWidth, __extension_Int64_1370_i64)()) >= 0)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1047 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor_qst(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const Builtin::Nullable<__extension_Int64_1370_i64>
	{
		#line 1049 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1051 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return Builtin::i64(1LL);
		}
		#line 1054 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		auto base = __this; 
		#line 1055 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		auto result = Builtin::i64(1LL); 
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
			ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
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
} namespace __extensions { using namespace System;
#line 1076 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor_qst_eq(__extension_Int64_547_i64 & __this , Builtin::u32 exp) noexcept -> typename __extension_Int64_547_i64&
	{
		#line 1078 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (auto result = ADV_UFCS(_operator_xor_xor_qst)(__this, exp)) {
			{
				#line 1078 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 1079 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				return __this = result;
			}
		}
		#line 1081 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1084 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor_ne(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename __extension_Int64_547_i64
	{
		#line 1086 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1088 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return Builtin::i32(1);
		}
		#line 1091 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		auto base = __this; 
		#line 1092 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		auto result = Builtin::i64(1LL); 
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
			ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
			#line 1101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			ADV_UFCS(_operator_mul_ne_eq)(base, base);
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor_ne_eq(__extension_Int64_547_i64 & __this , Builtin::u32 exp)  -> typename __extension_Int64_547_i64&
	{
		#line 1105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_xor_xor_ne)(__this, exp)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor_mod(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename __extension_Int64_547_i64
	{
		#line 1109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return Builtin::i64(1LL);
		}
		#line 1114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		auto base = __this; 
		#line 1115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		auto result = Builtin::i64(1LL); 
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
				ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
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
					ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
					#line 1134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
					ADV_UFCS(_operator_mul_mod_eq)(base, base);
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor_mod_eq(__extension_Int64_547_i64 & __this , Builtin::u32 exp) noexcept -> typename __extension_Int64_547_i64&
	{
		#line 1139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_xor_xor_mod)(__this, exp)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor_or(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename __extension_Int64_547_i64
	{
		#line 1143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (const auto result = ADV_UFCS(_operator_xor_xor_qst)(__this, exp)) {
			{
				#line 1143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 1144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				return result;
			}
		}
		#line 1147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return (ADV_UPCS(IsNegative)(__this.__ref()) && exp % Builtin::i32(2) == Builtin::i32(1)) ? ADV_USPCS(MinValue, __extension_Int64_1370_i64)() : ADV_USPCS(MaxValue, __extension_Int64_1370_i64)();
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor_or_eq(__extension_Int64_547_i64 & __this , Builtin::u32 exp) noexcept -> typename __extension_Int64_547_i64&
	{
		#line 1150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_xor_xor_or)(__this, exp)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto _operator_xor_xor_mod_qst(__extension_Int64_547_i64 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const std::tuple<__extension_Int64_1370_i64, bool>
	{
		#line 1154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return std::make_tuple(Builtin::i64(1LL), Builtin::Boolean(false));
		}
		#line 1159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		auto base = __this; 
		#line 1160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		auto result = Builtin::i64(1LL); 
		#line 1161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		auto overflowed = Builtin::Boolean(false); 
		#line 1162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		auto tmp = std::make_tuple(Builtin::i64(0LL), Builtin::Boolean(false)); 
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
			ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
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
} namespace __extensions { using namespace System;
#line 1183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getCheckedAbs(__extension_Int64_547_i64 const& __this ) -> const Builtin::Nullable<__extension_Int64_1370_i64>
	{
		#line 1183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)(__this.__ref()) ? ADV_UFCS(_operator_sub_qst)(__this) : __this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getStrictAbs(__extension_Int64_547_i64 const& __this ) -> const __extension_Int64_1370_i64
	{
		#line 1186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)(__this.__ref()) ? ADV_UFCS(_operator_sub_ne)(__this) : __this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getWrappingAbs(__extension_Int64_547_i64 const& __this ) -> const __extension_Int64_1370_i64
	{
		#line 1189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)(__this.__ref()) ? ADV_UFCS(_operator_sub_mod)(__this) : __this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getSaturatingAbs(__extension_Int64_547_i64 const& __this ) -> const __extension_Int64_1370_i64
	{
		#line 1192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)(__this.__ref()) ? ADV_UFCS(_operator_sub_or)(__this) : __this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getOverflowingAbs(__extension_Int64_547_i64 const& __this ) -> const std::tuple<__extension_Int64_1370_i64, bool>
	{
		#line 1197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (ADV_UPCS(IsNegative)(__this.__ref())) {
			#line 1198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return ADV_UFCS(_operator_sub_mod_qst)(__this);
		}
		#line 1200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return std::make_tuple(__this, Builtin::Boolean(false));
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	
} namespace __extensions { using namespace System;
#line 1249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto NextMultipleOf(__extension_Int64_1204_i64 const& __this LIFETIMEBOUND, __extension_Int64_1370_i64 rhs)  -> const typename __extension_Int64_1204_i64
	{
		#line 1251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (rhs == Builtin::i32(-1)) {
			#line 1252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return __this;
		}
		#line 1255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		const auto remainder = __this % rhs; 
		#line 1256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		const auto mod = ((remainder <=> Builtin::i32(0)) > 0 && (rhs <=> Builtin::i32(0)) < 0) || ((remainder <=> Builtin::i32(0)) < 0 && (rhs <=> Builtin::i32(0)) > 0) ? remainder + rhs : remainder; 
		#line 1259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return mod == Builtin::i32(0) ? __this : __this + (rhs - mod);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto CheckedNextMultipleOf(__extension_Int64_1204_i64 const& __this LIFETIMEBOUND, __extension_Int64_1370_i64 rhs) noexcept -> const Builtin::Nullable<__extension_Int64_1370_i64>
	{
		#line 1267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (rhs == Builtin::i32(-1)) {
			#line 1268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return __this;
		}
		#line 1271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		__extension_Int64_1370_i64 remainder{}; 
		#line 1272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (const auto r = ADV_UFCS(_operator_mod_qst)(__this, rhs)) {
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
		const auto mod = ((remainder <=> Builtin::i32(0)) > 0 && (rhs <=> Builtin::i32(0)) < 0) || ((remainder <=> Builtin::i32(0)) < 0 && (rhs <=> Builtin::i32(0)) > 0) ? remainder + rhs : remainder; 
		#line 1279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (mod == Builtin::i32(0)) {
			#line 1280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return __this;
		}
		#line 1282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return ADV_UFCS(_operator_add_qst)(__this, (rhs - mod));
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto __static_getIsSigned<__extension_Int64_1204_i64>::get() -> const bool
	{
		#line 1205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getTrailingZeroCount(__extension_Int64_1204_i64 const& __this ) -> const Builtin::u32
	{
		#line 1207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::TrailingZeroCount(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getTrailingOneCount(__extension_Int64_1204_i64 const& __this ) -> const Builtin::u32
	{
		#line 1208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::TrailingZeroCount(ADV_UFCS(_operator_not)(__this))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getByteCount(__extension_Int64_1204_i64 const& __this ) -> const Builtin::u32
	{
		#line 1209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u32>(Builtin::usize(sizeof(__extension_Int64_1370_i64)))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getMinimalBitWidth(__extension_Int64_1204_i64 const& __this ) -> const Builtin::u32
	{
		#line 1210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(BitWidth, __extension_Int64_1370_i64)() - ADV_UPCS(LeadingZeroCount)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline auto getIsqrt(__extension_Int64_1204_i64 const& __this ) -> const __extension_Int64_1370_i64
	{
		#line 1227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (const auto result = ADV_UPCS(CheckedIsqrt)(__this.__ref())) {
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
} namespace __extensions { using namespace System;
#line 1235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getLog2Ceiling(__extension_Int64_1204_i64 const& __this ) -> const __extension_Int64_1370_i64
	{
		#line 1237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		auto result = ADV_UPCS(Log2)(__this.__ref()); 
		#line 1238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (ADV_UPCS(PopCount)(__this.__ref()) != Builtin::i32(1)) {
			#line 1239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			++result;
		}
		#line 1242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result;
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getPrevPow2(__extension_Int64_1204_i64 const& __this ) -> const __extension_Int64_1370_i64
	{
		#line 1288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((__this <=> Builtin::i32(1)) <= 0) {
			#line 1289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return Builtin::i32(0);
		}
		#line 1292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return ADV_USPCS(One, __extension_Int64_1370_i64)() << (ADV_UPCS(MinimalBitWidth)(__this.__ref()) - Builtin::i32(1));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getNextPow2(__extension_Int64_1204_i64 const& __this ) -> const __extension_Int64_1370_i64
	{
		#line 1299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((__this <=> Builtin::i32(1)) <= 0) {
			#line 1300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return Builtin::i32(0);
		}
		#line 1303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		const auto p = __this - Builtin::i32(1); 
		#line 1304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return (ADV_USPCS(AllBitsSet, __extension_Int64_1370_i64)() >> ADV_UPCS(LeadingZeroCount)(p.__ref())) + Builtin::i32(1);
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getCheckedNextPow2(__extension_Int64_1204_i64 const& __this ) -> const Builtin::Nullable<__extension_Int64_1370_i64>
	{
		#line 1311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((__this <=> Builtin::i32(1)) <= 0) {
			#line 1312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return Builtin::i64(0LL);
		}
		#line 1315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		const auto p = __this - Builtin::i64(1LL); 
		#line 1316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return ADV_UFCS(_operator_add_qst)((ADV_USPCS(AllBitsSet, __extension_Int64_1370_i64)() >> ADV_UPCS(LeadingZeroCount)(p.__ref())), Builtin::i64(1LL));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getWrappingNextPow2(__extension_Int64_1204_i64 const& __this ) -> const __extension_Int64_1370_i64
	{
		#line 1323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((__this <=> Builtin::i32(1)) <= 0) {
			#line 1324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return Builtin::i64(0LL);
		}
		#line 1327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		const auto p = __this - Builtin::i64(1LL); 
		#line 1328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return ADV_UFCS(_operator_add_mod)((ADV_USPCS(AllBitsSet, __extension_Int64_1370_i64)() >> ADV_UPCS(LeadingZeroCount)(p.__ref())), Builtin::i64(1LL));
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	
} namespace __extensions { using namespace System;
#line 1365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto RotateLeft(__extension_Int64_1332_i64 const& __this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename __extension_Int64_1332_i64
	{
		#line 1365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::BitsRotateLeft(__this, shiftAmount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto RotateRight(__extension_Int64_1332_i64 const& __this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename __extension_Int64_1332_i64
	{
		#line 1366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::BitsRotateRight(__this, shiftAmount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto __static_getBitWidth<__extension_Int64_1332_i64>::get() -> const Builtin::u32
	{
		#line 1333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(64U)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getLeadingZeroCount(__extension_Int64_1332_i64 const& __this ) -> const Builtin::u32
	{
		#line 1335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::LeadingZeroCount(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getLeadingOneCount(__extension_Int64_1332_i64 const& __this ) -> const Builtin::u32
	{
		#line 1336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::LeadingZeroCount(ADV_UFCS(_operator_not)(__this))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getPopCount(__extension_Int64_1332_i64 const& __this ) -> const Builtin::u32
	{
		#line 1337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::PopCount(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getZeroCount(__extension_Int64_1332_i64 const& __this ) -> const Builtin::u32
	{
		#line 1338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::PopCount(ADV_UFCS(_operator_not)(__this))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getByteSwapped(__extension_Int64_1332_i64 const& __this ) -> const __extension_Int64_1370_i64
	{
		#line 1339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i64>(Builtin::ByteSwap64(ADV_UFCS(NarrowToUInt64)(__this.__ref())))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getBigEndian(__extension_Int64_1332_i64 const& __this ) -> const __extension_Int64_1370_i64
	{
		#line 1342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if constexpr (Builtin::IsLittleEndian()) {
			#line 1343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return ADV_UPCS(ByteSwapped)(__this.__ref());
		}
		#line 1345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return __this;
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getLittleEndian(__extension_Int64_1332_i64 const& __this ) -> const __extension_Int64_1370_i64
	{
		#line 1349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if constexpr (Builtin::IsBigEndian()) {
			#line 1350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return ADV_UPCS(ByteSwapped)(__this.__ref());
		}
		#line 1352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return __this;
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getReverseBits(__extension_Int64_1332_i64 const& __this ) -> const __extension_Int64_1370_i64
	{
		#line 1354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::ReverseBits64(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getShortestBitLength(__extension_Int64_1332_i64 const& __this ) -> const Builtin::u32
	{
		#line 1358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((__this <=> Builtin::i32(0)) >= 0) {
			#line 1359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return ADV_USPCS(BitWidth, __extension_Int64_1370_i64)() - ADV_UPCS(LeadingZeroCount)(__this.__ref());
		}
		#line 1362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return ADV_USPCS(BitWidth, __extension_Int64_1370_i64)() + Builtin::u32(1U) - ADV_UPCS(LeadingOneCount)(__this.__ref());
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	
} namespace __extensions { using namespace System;
#line 1378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto IsGreaterThanAsUnsigned(__extension_Int64_1370_i64 const& __this LIFETIMEBOUND, __extension_Int64_1370_i64 rhs) noexcept -> const bool
	{
		#line 1378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY((ADV_UFCS(NarrowToUInt64)(__this.__ref()) <=> ADV_UFCS(NarrowToUInt64)(rhs.__ref())) > 0); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto __static_getMaxDigitCount<__extension_Int64_1370_i64>::get() -> const Builtin::i32
	{
		#line 1371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(19)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto __static_getMaxHexDigitCount<__extension_Int64_1370_i64>::get() -> const Builtin::i32
	{
		#line 1372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(16)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto __static_getMaxValueDiv10<__extension_Int64_1370_i64>::get() -> const __extension_Int64_1370_i64
	{
		#line 1373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl)(ADV_USPCS(MaxValue, Builtin::i64)(), Builtin::i32(10))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getMultiplyBy10(__extension_Int64_1370_i64 const& __this ) -> const __extension_Int64_1370_i64
	{
		#line 1375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_mod)(__this, Builtin::i64(10LL))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	inline constexpr auto getMultiplyBy16(__extension_Int64_1370_i64 const& __this ) -> const __extension_Int64_1370_i64
	{
		#line 1376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_mod)(__this, Builtin::i64(16LL))); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	

}