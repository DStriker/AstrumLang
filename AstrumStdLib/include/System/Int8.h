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
namespace __Unsafe {} namespace __Int8_Protected__Unsafe {}
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
	} namespace __extensions { using namespace System;
#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	using __extension_Int8_15_i8 = Builtin::i8;
	#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE(IMinMaxValue, IMinMaxValue);
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class __TT> struct __static_getMinValue; template<> struct __static_getMinValue<__extension_Int8_15_i8> { static inline constexpr auto get() -> const __extension_Int8_15_i8; };
	#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class __TT> struct __static_getMaxValue; template<> struct __static_getMaxValue<__extension_Int8_15_i8> { static inline constexpr auto get() -> const __extension_Int8_15_i8; };
	#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i8, IMinMaxValue, IMinMaxValue, i8);
	} namespace System{
using __extensions::__static_getMinValue;
using __extensions::__static_getMaxValue;

		} namespace __extensions { using namespace System;
#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	using __extension_Int8_20_i8 = Builtin::i8;
	#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ASTRUMSTD_API auto _operator_eq_eq_mul(__extension_Int8_20_i8 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool;
	#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto operator<=>(__extension_Int8_20_i8 const& __this LIFETIMEBOUND, Builtin::Nullable<__extension_Int8_20_i8> rhs) noexcept -> const Builtin::i32;
	#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_gt_gt_gt(__extension_Int8_20_i8 const& __this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename __extension_Int8_20_i8;
	#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_gt_gt_gt_eq(__extension_Int8_20_i8 & __this , Builtin::i32 amount)  -> typename __extension_Int8_20_i8&;
	#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_lt_lt_bsl(__extension_Int8_20_i8 const& __this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename __extension_Int8_20_i8;
	#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_lt_lt_bsl_eq(__extension_Int8_20_i8 & __this , Builtin::u32 amount) noexcept -> typename __extension_Int8_20_i8&;
	#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_gt_gt_bsl(__extension_Int8_20_i8 const& __this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename __extension_Int8_20_i8;
	#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_gt_gt_bsl_eq(__extension_Int8_20_i8 & __this , Builtin::u32 amount) noexcept -> typename __extension_Int8_20_i8&;
	#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getHashCode(__extension_Int8_20_i8 const& __this ) -> const Builtin::u64;
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
#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	using __extension_Int8_73_i8 = Builtin::i8;
	#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE(IAbstractComparable, IAbstractComparable);
	#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ASTRUMSTD_API auto _operator_lt_eq_gt_mul(__extension_Int8_73_i8 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32;
	#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i8, IAbstractComparable, IAbstractComparable, i8);
	} namespace System{
using __extensions::_operator_lt_eq_gt_mul;

		} namespace __extensions { using namespace System;
#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	using __extension_Int8_88_i8 = Builtin::i8;
	#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE(IConvertible, IConvertible);
	#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToBoolean(__extension_Int8_88_i8 const& __this LIFETIMEBOUND) noexcept -> const bool;
	#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToInt8(__extension_Int8_88_i8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i8;
	#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToUInt8(__extension_Int8_88_i8 const& __this LIFETIMEBOUND)  -> const Builtin::u8;
	#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToInt16(__extension_Int8_88_i8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i16;
	#line 98 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToUInt16(__extension_Int8_88_i8 const& __this LIFETIMEBOUND)  -> const Builtin::u16;
	#line 104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToInt32(__extension_Int8_88_i8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i32;
	#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToUInt32(__extension_Int8_88_i8 const& __this LIFETIMEBOUND)  -> const Builtin::u32;
	#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToInt64(__extension_Int8_88_i8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i64;
	#line 112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToUInt64(__extension_Int8_88_i8 const& __this LIFETIMEBOUND)  -> const Builtin::u64;
	#line 118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToInt128(__extension_Int8_88_i8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i128;
	#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToUInt128(__extension_Int8_88_i8 const& __this LIFETIMEBOUND)  -> const Builtin::u128;
	#line 125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToIsize(__extension_Int8_88_i8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::isize;
	#line 126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToUsize(__extension_Int8_88_i8 const& __this LIFETIMEBOUND)  -> const Builtin::usize;
	#line 132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToFloat32(__extension_Int8_88_i8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::f32;
	#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToFloat64(__extension_Int8_88_i8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::f64;
	#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToByte(__extension_Int8_88_i8 const& __this LIFETIMEBOUND)  -> const Builtin::char8;
	#line 140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToChar(__extension_Int8_88_i8 const& __this LIFETIMEBOUND)  -> const Builtin::char16;
	#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i8, IConvertible, IConvertible, i8);
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
#line 150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	using __extension_Int8_150_i8 = Builtin::i8;
	#line 150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE(IDivisibleArithmetic, IDivisibleArithmetic);
	#line 152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_div_mod(__extension_Int8_150_i8 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_Int8_150_i8, __extension_Int8_150_i8>;
	#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_div_not(__extension_Int8_150_i8 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int8_150_i8;
	#line 165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_div_not_eq(__extension_Int8_150_i8 & __this , auto rhs)  -> typename __extension_Int8_150_i8&;
	#line 167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_div_lt(__extension_Int8_150_i8 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int8_150_i8;
	#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_div_lt_eq(__extension_Int8_150_i8 & __this , auto rhs)  -> typename __extension_Int8_150_i8&;
	#line 183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_div_gt(__extension_Int8_150_i8 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int8_150_i8;
	#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_div_gt_eq(__extension_Int8_150_i8 & __this , auto rhs)  -> typename __extension_Int8_150_i8&;
	#line 150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i8, IDivisibleArithmetic, IDivisibleArithmetic, i8);
	} namespace System{
using __extensions::_operator_div_mod;
using __extensions::_operator_div_not;
using __extensions::_operator_div_not_eq;
using __extensions::_operator_div_lt;
using __extensions::_operator_div_lt_eq;
using __extensions::_operator_div_gt;
using __extensions::_operator_div_gt_eq;

		} namespace __extensions { using namespace System;
#line 200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	using __extension_Int8_200_i8 = Builtin::i8;
	#line 200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE(IIntegerDivisibleArithmetic, IIntegerDivisibleArithmetic);
	#line 202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_bsl(__extension_Int8_200_i8 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int8_200_i8;
	#line 204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_bsl_eq(__extension_Int8_200_i8 & __this , T rhs)  -> typename __extension_Int8_200_i8&;
	#line 209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl(__extension_Int8_200_i8 const& __this LIFETIMEBOUND, T rhs)  -> const Builtin::Nullable<__extension_Int8_200_i8>;
	#line 200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i8, IIntegerDivisibleArithmetic, IIntegerDivisibleArithmetic, i8);
	} namespace System{
using __extensions::_operator_bsl;
using __extensions::_operator_bsl_eq;
using __extensions::_operator_bsl_bsl;

		} namespace __extensions { using namespace System;
#line 220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	using __extension_Int8_220_i8 = Builtin::i8;
	#line 220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE(IIntegerPowerArithmetic, IIntegerPowerArithmetic);
	#line 223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_xor_xor(__extension_Int8_220_i8 const& __this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename __extension_Int8_220_i8;
	#line 255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_xor_xor_eq(__extension_Int8_220_i8 & __this , Builtin::u32 exp)  -> typename __extension_Int8_220_i8&;
	#line 220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i8, IIntegerPowerArithmetic, IIntegerPowerArithmetic, i8);
	} namespace System{
using __extensions::_operator_xor_xor;
using __extensions::_operator_xor_xor_eq;

		} namespace __extensions { using namespace System;
#line 258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	using __extension_Int8_258_i8 = Builtin::i8;
	#line 258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE(INumberBase, INumberBase);
	#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ASTRUMSTD_API auto MaxMagnitude(__extension_Int8_258_i8 const& __this LIFETIMEBOUND, __extension_Int8_258_i8 rhs) noexcept -> const typename __extension_Int8_258_i8;
	#line 311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline auto MaxMagnitudeNumber(__extension_Int8_258_i8 const& __this LIFETIMEBOUND, __extension_Int8_258_i8 rhs) noexcept -> const typename __extension_Int8_258_i8;
	#line 313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ASTRUMSTD_API auto MinMagnitude(__extension_Int8_258_i8 const& __this LIFETIMEBOUND, __extension_Int8_258_i8 rhs) noexcept -> const typename __extension_Int8_258_i8;
	#line 342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline auto MinMagnitudeNumber(__extension_Int8_258_i8 const& __this LIFETIMEBOUND, __extension_Int8_258_i8 rhs) noexcept -> const typename __extension_Int8_258_i8;
	#line 344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ASTRUMSTD_API auto Parse(__extension_Int8_258_i8 const& __this LIFETIMEBOUND, Builtin::Str input)  -> const typename __extension_Int8_258_i8;
	#line 349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ASTRUMSTD_API auto TryParse(__extension_Int8_258_i8 const& __this LIFETIMEBOUND, Builtin::Str input) noexcept -> const Builtin::Nullable<__extension_Int8_258_i8>;
	#line 356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToInt8(__extension_Int8_258_i8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i8;
	#line 357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToUInt8(__extension_Int8_258_i8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u8;
	#line 358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToInt16(__extension_Int8_258_i8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i16;
	#line 359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToUInt16(__extension_Int8_258_i8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u16;
	#line 360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToInt32(__extension_Int8_258_i8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i32;
	#line 361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToUInt32(__extension_Int8_258_i8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u32;
	#line 362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToInt64(__extension_Int8_258_i8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i64;
	#line 363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToUInt64(__extension_Int8_258_i8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u64;
	#line 364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToInt128(__extension_Int8_258_i8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i128;
	#line 365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToUInt128(__extension_Int8_258_i8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u128;
	#line 366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToIsize(__extension_Int8_258_i8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::isize;
	#line 367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToUsize(__extension_Int8_258_i8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::usize;
	#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class __TT> struct __static_getOne; template<> struct __static_getOne<__extension_Int8_258_i8> { static inline constexpr auto get() -> const __extension_Int8_258_i8; };
	#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class __TT> struct __static_getZero; template<> struct __static_getZero<__extension_Int8_258_i8> { static inline constexpr auto get() -> const __extension_Int8_258_i8; };
	#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class __TT> struct __static_getRadix; template<> struct __static_getRadix<__extension_Int8_258_i8> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getAbs(__extension_Int8_258_i8 const& __this ) -> const __extension_Int8_258_i8;
	#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsCanonical(__extension_Int8_258_i8 const& __this ) -> const bool;
	#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsComplexNumber(__extension_Int8_258_i8 const& __this ) -> const bool;
	#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsEvenInteger(__extension_Int8_258_i8 const& __this ) -> const bool;
	#line 267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsFinite(__extension_Int8_258_i8 const& __this ) -> const bool;
	#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsImaginaryNumber(__extension_Int8_258_i8 const& __this ) -> const bool;
	#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsInfinity(__extension_Int8_258_i8 const& __this ) -> const bool;
	#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsInteger(__extension_Int8_258_i8 const& __this ) -> const bool;
	#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsNaN(__extension_Int8_258_i8 const& __this ) -> const bool;
	#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsNegative(__extension_Int8_258_i8 const& __this ) -> const bool;
	#line 273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsNegativeInfinity(__extension_Int8_258_i8 const& __this ) -> const bool;
	#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsNormal(__extension_Int8_258_i8 const& __this ) -> const bool;
	#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsOddInteger(__extension_Int8_258_i8 const& __this ) -> const bool;
	#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsPositive(__extension_Int8_258_i8 const& __this ) -> const bool;
	#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsPositiveInfinity(__extension_Int8_258_i8 const& __this ) -> const bool;
	#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsRealNumber(__extension_Int8_258_i8 const& __this ) -> const bool;
	#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsSubnormal(__extension_Int8_258_i8 const& __this ) -> const bool;
	#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsZero(__extension_Int8_258_i8 const& __this ) -> const bool;
	#line 258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i8, INumberBase, INumberBase, i8);
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
#line 370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	using __extension_Int8_370_i8 = Builtin::i8;
	#line 370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE(ISignedNumber, ISignedNumber);
	#line 371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class __TT> struct __static_getMinusOne; template<> struct __static_getMinusOne<__extension_Int8_370_i8> { static inline constexpr auto get() -> const __extension_Int8_370_i8; };
	#line 370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i8, ISignedNumber, ISignedNumber, i8);
	} namespace System{
using __extensions::__static_getMinusOne;

		} namespace __extensions { using namespace System;
#line 374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	using __extension_Int8_374_i8 = Builtin::i8;
	#line 374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE(INumber, INumber);
	#line 377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ASTRUMSTD_API auto CopySign(__extension_Int8_374_i8 const& __this LIFETIMEBOUND, __extension_Int8_374_i8 sign)  -> const typename __extension_Int8_374_i8;
	#line 395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto Max(__extension_Int8_374_i8 const& __this LIFETIMEBOUND, __extension_Int8_374_i8 rhs) noexcept -> const typename __extension_Int8_374_i8;
	#line 396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto MaxNumber(__extension_Int8_374_i8 const& __this LIFETIMEBOUND, __extension_Int8_374_i8 rhs) noexcept -> const typename __extension_Int8_374_i8;
	#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto Min(__extension_Int8_374_i8 const& __this LIFETIMEBOUND, __extension_Int8_374_i8 rhs) noexcept -> const typename __extension_Int8_374_i8;
	#line 398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto MinNumber(__extension_Int8_374_i8 const& __this LIFETIMEBOUND, __extension_Int8_374_i8 rhs) noexcept -> const typename __extension_Int8_374_i8;
	#line 399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto Clamp(__extension_Int8_374_i8 const& __this LIFETIMEBOUND, __extension_Int8_374_i8 min, __extension_Int8_374_i8 max)  -> const typename __extension_Int8_374_i8;
	#line 375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getSign(__extension_Int8_374_i8 const& __this ) -> const Builtin::i32;
	#line 374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i8, INumber, INumber, i8);
	} namespace System{
using __extensions::CopySign;
using __extensions::Max;
using __extensions::MaxNumber;
using __extensions::Min;
using __extensions::MinNumber;
using __extensions::Clamp;
using __extensions::getSign;

		} namespace __extensions { using namespace System;
#line 402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	using __extension_Int8_402_i8 = Builtin::i8;
	#line 402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE(IBinaryNumber, IBinaryNumber);
	#line 454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto CheckedLog(__extension_Int8_402_i8 const& __this LIFETIMEBOUND, __extension_Int8_402_i8 base) noexcept -> const Builtin::Nullable<__extension_Int8_402_i8>;
	#line 487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ASTRUMSTD_API auto Log(__extension_Int8_402_i8 const& __this LIFETIMEBOUND, __extension_Int8_402_i8 base)  -> const typename __extension_Int8_402_i8;
	#line 497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto Midpoint(__extension_Int8_402_i8 const& __this LIFETIMEBOUND, __extension_Int8_402_i8 rhs) noexcept -> const typename __extension_Int8_402_i8;
	#line 505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto IsMultipleOf(__extension_Int8_402_i8 const& __this LIFETIMEBOUND, __extension_Int8_402_i8 rhs) noexcept -> const bool;
	#line 404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class __TT> struct __static_getAllBitsSet; template<> struct __static_getAllBitsSet<__extension_Int8_402_i8> { static inline constexpr auto get() -> const __extension_Int8_402_i8; };
	#line 407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsPow2(__extension_Int8_402_i8 const& __this ) -> const bool;
	#line 411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getCheckedLog2(__extension_Int8_402_i8 const& __this ) -> const Builtin::Nullable<__extension_Int8_402_i8>;
	#line 421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getLog2(__extension_Int8_402_i8 const& __this ) -> const __extension_Int8_402_i8;
	#line 431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getCheckedLog10(__extension_Int8_402_i8 const& __this ) -> const Builtin::Nullable<__extension_Int8_402_i8>;
	#line 444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getLog10(__extension_Int8_402_i8 const& __this ) -> const __extension_Int8_402_i8;
	#line 402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i8, IBinaryNumber, IBinaryNumber, i8);
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
#line 519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	using __extension_Int8_519_i8 = Builtin::i8;
	#line 519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE(ICheckedArithmetic, ICheckedArithmetic);
	#line 522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_add_qst(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_Int8_519_i8>;
	#line 531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_add_qst_eq(__extension_Int8_519_i8 & __this , T rhs) noexcept -> typename __extension_Int8_519_i8&;
	#line 542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_add_ne(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int8_519_i8;
	#line 549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_add_ne_eq(__extension_Int8_519_i8 & __this , T rhs)  -> typename __extension_Int8_519_i8&;
	#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_add_mod(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_Int8_519_i8;
	#line 560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_add_mod_eq(__extension_Int8_519_i8 & __this , T rhs) noexcept -> typename __extension_Int8_519_i8&;
	#line 564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_add_or(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_Int8_519_i8;
	#line 571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_add_or_eq(__extension_Int8_519_i8 & __this , T rhs) noexcept -> typename __extension_Int8_519_i8&;
	#line 575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> auto _operator_add_mod_qst(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<__extension_Int8_519_i8, bool>;
	#line 583 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_qst(__extension_Int8_519_i8 & __this )  -> typename __extension_Int8_519_i8&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_qst_postfix(__extension_Int8_519_i8 & __this)  -> decltype(auto);
	#line 586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_ne(__extension_Int8_519_i8 & __this )  -> typename __extension_Int8_519_i8&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_ne_postfix(__extension_Int8_519_i8 & __this)  -> decltype(auto);
	#line 589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_mod(__extension_Int8_519_i8 & __this )  -> typename __extension_Int8_519_i8&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_mod_postfix(__extension_Int8_519_i8 & __this)  -> decltype(auto);
	#line 592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_or(__extension_Int8_519_i8 & __this )  -> typename __extension_Int8_519_i8&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_or_postfix(__extension_Int8_519_i8 & __this)  -> decltype(auto);
	#line 596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto CarryingAdd(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, __extension_Int8_519_i8 rhs, bool carry) noexcept -> const std::tuple<__extension_Int8_519_i8, bool>;
	#line 605 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto BorrowingSub(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, __extension_Int8_519_i8 rhs, bool carry) noexcept -> const std::tuple<__extension_Int8_519_i8, bool>;
	#line 614 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_sub_qst(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_Int8_519_i8>;
	#line 623 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_sub_qst_eq(__extension_Int8_519_i8 & __this , T rhs) noexcept -> typename __extension_Int8_519_i8&;
	#line 634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_sub_ne(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int8_519_i8;
	#line 641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_sub_ne_eq(__extension_Int8_519_i8 & __this , T rhs)  -> typename __extension_Int8_519_i8&;
	#line 645 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_sub_mod(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_Int8_519_i8;
	#line 652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_sub_mod_eq(__extension_Int8_519_i8 & __this , T rhs) noexcept -> typename __extension_Int8_519_i8&;
	#line 656 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_sub_or(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_Int8_519_i8;
	#line 663 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_sub_or_eq(__extension_Int8_519_i8 & __this , T rhs) noexcept -> typename __extension_Int8_519_i8&;
	#line 667 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> auto _operator_sub_mod_qst(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<__extension_Int8_519_i8, bool>;
	#line 675 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_qst(__extension_Int8_519_i8 & __this )  -> typename __extension_Int8_519_i8&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_qst_postfix(__extension_Int8_519_i8 & __this)  -> decltype(auto);
	#line 678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_ne(__extension_Int8_519_i8 & __this )  -> typename __extension_Int8_519_i8&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_ne_postfix(__extension_Int8_519_i8 & __this)  -> decltype(auto);
	#line 681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_mod(__extension_Int8_519_i8 & __this )  -> typename __extension_Int8_519_i8&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_mod_postfix(__extension_Int8_519_i8 & __this)  -> decltype(auto);
	#line 684 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_or(__extension_Int8_519_i8 & __this )  -> typename __extension_Int8_519_i8&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_or_postfix(__extension_Int8_519_i8 & __this)  -> decltype(auto);
	#line 688 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mul_qst(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_Int8_519_i8>;
	#line 697 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mul_qst_eq(__extension_Int8_519_i8 & __this , T rhs) noexcept -> typename __extension_Int8_519_i8&;
	#line 708 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mul_ne(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int8_519_i8;
	#line 715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mul_ne_eq(__extension_Int8_519_i8 & __this , T rhs)  -> typename __extension_Int8_519_i8&;
	#line 719 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mul_mod(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_Int8_519_i8;
	#line 726 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mul_mod_eq(__extension_Int8_519_i8 & __this , T rhs) noexcept -> typename __extension_Int8_519_i8&;
	#line 730 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mul_or(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_Int8_519_i8;
	#line 737 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mul_or_eq(__extension_Int8_519_i8 & __this , T rhs) noexcept -> typename __extension_Int8_519_i8&;
	#line 741 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> auto _operator_mul_mod_qst(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<__extension_Int8_519_i8, bool>;
	#line 750 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_mul_gt(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, __extension_Int8_519_i8 rhs) noexcept -> const std::tuple<Builtin::u8, Builtin::i8>;
	#line 759 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto CarryingMul(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, __extension_Int8_519_i8 rhs, __extension_Int8_519_i8 carry) noexcept -> const std::tuple<Builtin::u8, Builtin::i8>;
	#line 767 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_bsl_qst(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_Int8_519_i8>;
	#line 776 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_bsl_qst_eq(__extension_Int8_519_i8 & __this , T rhs) noexcept -> typename __extension_Int8_519_i8&;
	#line 788 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_bsl_ne(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int8_519_i8;
	#line 795 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_bsl_ne_eq(__extension_Int8_519_i8 & __this , T rhs)  -> typename __extension_Int8_519_i8&;
	#line 800 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_bsl_mod(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int8_519_i8;
	#line 807 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_eq(__extension_Int8_519_i8 & __this , T rhs)  -> typename __extension_Int8_519_i8&;
	#line 812 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_bsl_or(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int8_519_i8;
	#line 819 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_bsl_or_eq(__extension_Int8_519_i8 & __this , T rhs)  -> typename __extension_Int8_519_i8&;
	#line 824 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> auto _operator_bsl_mod_qst(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_Int8_519_i8, bool>;
	#line 833 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_Int8_519_i8>;
	#line 843 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst_eq(__extension_Int8_519_i8 & __this , T rhs) noexcept -> typename __extension_Int8_519_i8&;
	#line 854 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mod_qst(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_Int8_519_i8>;
	#line 863 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mod_qst_eq(__extension_Int8_519_i8 & __this , T rhs) noexcept -> typename __extension_Int8_519_i8&;
	#line 875 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mod_ne(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int8_519_i8;
	#line 882 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mod_ne_eq(__extension_Int8_519_i8 & __this , T rhs)  -> typename __extension_Int8_519_i8&;
	#line 887 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mod_mod(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int8_519_i8;
	#line 894 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mod_mod_eq(__extension_Int8_519_i8 & __this , T rhs)  -> typename __extension_Int8_519_i8&;
	#line 899 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> auto _operator_mod_mod_qst(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_Int8_519_i8, bool>;
	#line 908 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_sub_qst(__extension_Int8_519_i8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::Nullable<__extension_Int8_519_i8>;
	#line 918 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_sub_ne(__extension_Int8_519_i8 const& __this LIFETIMEBOUND)  -> const typename __extension_Int8_519_i8;
	#line 925 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_sub_mod(__extension_Int8_519_i8 const& __this LIFETIMEBOUND)  -> const typename __extension_Int8_519_i8;
	#line 933 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_sub_or(__extension_Int8_519_i8 const& __this LIFETIMEBOUND)  -> const typename __extension_Int8_519_i8;
	#line 941 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_sub_mod_qst(__extension_Int8_519_i8 const& __this LIFETIMEBOUND)  -> const std::tuple<__extension_Int8_519_i8, bool>;
	#line 949 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_lt_lt_qst(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<__extension_Int8_519_i8>;
	#line 957 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_lt_lt_qst_eq(__extension_Int8_519_i8 & __this , Builtin::i32 amount) noexcept -> typename __extension_Int8_519_i8&;
	#line 965 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_lt_lt_ne(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename __extension_Int8_519_i8;
	#line 973 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_lt_lt_ne_eq(__extension_Int8_519_i8 & __this , Builtin::i32 amount)  -> typename __extension_Int8_519_i8&;
	#line 975 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_lt_lt_mod(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename __extension_Int8_519_i8;
	#line 978 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_lt_lt_mod_eq(__extension_Int8_519_i8 & __this , Builtin::i32 amount) noexcept -> typename __extension_Int8_519_i8&;
	#line 980 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_lt_lt_mod_qst(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<__extension_Int8_519_i8, bool>;
	#line 983 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_gt_gt_qst(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<__extension_Int8_519_i8>;
	#line 991 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_gt_gt_qst_eq(__extension_Int8_519_i8 & __this , Builtin::i32 amount) noexcept -> typename __extension_Int8_519_i8&;
	#line 999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_gt_gt_ne(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename __extension_Int8_519_i8;
	#line 1007 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_gt_gt_ne_eq(__extension_Int8_519_i8 & __this , Builtin::i32 amount)  -> typename __extension_Int8_519_i8&;
	#line 1009 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_gt_gt_mod(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename __extension_Int8_519_i8;
	#line 1012 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_gt_gt_mod_eq(__extension_Int8_519_i8 & __this , Builtin::i32 amount) noexcept -> typename __extension_Int8_519_i8&;
	#line 1014 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_gt_gt_mod_qst(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<__extension_Int8_519_i8, bool>;
	#line 1020 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_xor_xor_qst(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const Builtin::Nullable<__extension_Int8_519_i8>;
	#line 1049 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_xor_xor_qst_eq(__extension_Int8_519_i8 & __this , Builtin::u32 exp) noexcept -> typename __extension_Int8_519_i8&;
	#line 1057 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_xor_xor_ne(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename __extension_Int8_519_i8;
	#line 1078 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_xor_xor_ne_eq(__extension_Int8_519_i8 & __this , Builtin::u32 exp)  -> typename __extension_Int8_519_i8&;
	#line 1080 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_xor_xor_mod(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename __extension_Int8_519_i8;
	#line 1112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_xor_xor_mod_eq(__extension_Int8_519_i8 & __this , Builtin::u32 exp) noexcept -> typename __extension_Int8_519_i8&;
	#line 1114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_xor_xor_or(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename __extension_Int8_519_i8;
	#line 1123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_xor_xor_or_eq(__extension_Int8_519_i8 & __this , Builtin::u32 exp) noexcept -> typename __extension_Int8_519_i8&;
	#line 1125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_xor_xor_mod_qst(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const std::tuple<__extension_Int8_519_i8, bool>;
	#line 1156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getCheckedAbs(__extension_Int8_519_i8 const& __this ) -> const Builtin::Nullable<__extension_Int8_519_i8>;
	#line 1159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getStrictAbs(__extension_Int8_519_i8 const& __this ) -> const __extension_Int8_519_i8;
	#line 1162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getWrappingAbs(__extension_Int8_519_i8 const& __this ) -> const __extension_Int8_519_i8;
	#line 1165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getSaturatingAbs(__extension_Int8_519_i8 const& __this ) -> const __extension_Int8_519_i8;
	#line 1168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getOverflowingAbs(__extension_Int8_519_i8 const& __this ) -> const std::tuple<__extension_Int8_519_i8, bool>;
	#line 519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i8, ICheckedArithmetic, ICheckedArithmetic, i8);
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
#line 1171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	using __extension_Int8_1171_i8 = Builtin::i8;
	#line 1171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE(IBinaryInteger, IBinaryInteger);
	#line 1216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NextMultipleOf(__extension_Int8_1171_i8 const& __this LIFETIMEBOUND, __extension_Int8_1171_i8 rhs)  -> const typename __extension_Int8_1171_i8;
	#line 1232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto CheckedNextMultipleOf(__extension_Int8_1171_i8 const& __this LIFETIMEBOUND, __extension_Int8_1171_i8 rhs) noexcept -> const Builtin::Nullable<__extension_Int8_1171_i8>;
	#line 1172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class __TT> struct __static_getIsSigned; template<> struct __static_getIsSigned<__extension_Int8_1171_i8> { static inline constexpr auto get() -> const bool; };
	#line 1174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getTrailingZeroCount(__extension_Int8_1171_i8 const& __this ) -> const Builtin::u32;
	#line 1175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getTrailingOneCount(__extension_Int8_1171_i8 const& __this ) -> const Builtin::u32;
	#line 1176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getByteCount(__extension_Int8_1171_i8 const& __this ) -> const Builtin::u32;
	#line 1177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getMinimalBitWidth(__extension_Int8_1171_i8 const& __this ) -> const Builtin::u32;
	#line 1181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ASTRUMSTD_API auto getCheckedIsqrt(__extension_Int8_1171_i8 const& __this ) -> const Builtin::Nullable<__extension_Int8_1171_i8>;
	#line 1193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline auto getIsqrt(__extension_Int8_1171_i8 const& __this ) -> const __extension_Int8_1171_i8;
	#line 1202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getLog2Ceiling(__extension_Int8_1171_i8 const& __this ) -> const __extension_Int8_1171_i8;
	#line 1253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getPrevPow2(__extension_Int8_1171_i8 const& __this ) -> const __extension_Int8_1171_i8;
	#line 1264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getNextPow2(__extension_Int8_1171_i8 const& __this ) -> const __extension_Int8_1171_i8;
	#line 1276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getCheckedNextPow2(__extension_Int8_1171_i8 const& __this ) -> const Builtin::Nullable<__extension_Int8_1171_i8>;
	#line 1288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getWrappingNextPow2(__extension_Int8_1171_i8 const& __this ) -> const __extension_Int8_1171_i8;
	#line 1171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i8, IBinaryInteger, IBinaryInteger, i8);
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
#line 1299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	using __extension_Int8_1299_i8 = Builtin::i8;
	#line 1299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE(IFixedWidthInteger, IFixedWidthInteger);
	#line 1320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto RotateLeft(__extension_Int8_1299_i8 const& __this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename __extension_Int8_1299_i8;
	#line 1321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto RotateRight(__extension_Int8_1299_i8 const& __this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename __extension_Int8_1299_i8;
	#line 1300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class __TT> struct __static_getBitWidth; template<> struct __static_getBitWidth<__extension_Int8_1299_i8> { static inline constexpr auto get() -> const Builtin::u32; };
	#line 1302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getLeadingZeroCount(__extension_Int8_1299_i8 const& __this ) -> const Builtin::u32;
	#line 1303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getLeadingOneCount(__extension_Int8_1299_i8 const& __this ) -> const Builtin::u32;
	#line 1304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getPopCount(__extension_Int8_1299_i8 const& __this ) -> const Builtin::u32;
	#line 1305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getZeroCount(__extension_Int8_1299_i8 const& __this ) -> const Builtin::u32;
	#line 1306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getByteSwapped(__extension_Int8_1299_i8 const& __this ) -> const __extension_Int8_1299_i8;
	#line 1307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getBigEndian(__extension_Int8_1299_i8 const& __this ) -> const __extension_Int8_1299_i8;
	#line 1308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getLittleEndian(__extension_Int8_1299_i8 const& __this ) -> const __extension_Int8_1299_i8;
	#line 1309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getReverseBits(__extension_Int8_1299_i8 const& __this ) -> const __extension_Int8_1299_i8;
	#line 1311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getShortestBitLength(__extension_Int8_1299_i8 const& __this ) -> const Builtin::u32;
	#line 1299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i8, IFixedWidthInteger, IFixedWidthInteger, i8);
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
#line 1325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	using __extension_Int8_1325_i8 = Builtin::i8;
	#line 1325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE(IBinaryIntegerFormatInfo, IBinaryIntegerFormatInfo);
	#line 1333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto IsGreaterThanAsUnsigned(__extension_Int8_1325_i8 const& __this LIFETIMEBOUND, __extension_Int8_1325_i8 rhs) noexcept -> const bool;
	#line 1326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class __TT> struct __static_getMaxDigitCount; template<> struct __static_getMaxDigitCount<__extension_Int8_1325_i8> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class __TT> struct __static_getMaxHexDigitCount; template<> struct __static_getMaxHexDigitCount<__extension_Int8_1325_i8> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class __TT> struct __static_getMaxValueDiv10; template<> struct __static_getMaxValueDiv10<__extension_Int8_1325_i8> { static inline constexpr auto get() -> const __extension_Int8_1325_i8; };
	#line 1330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getMultiplyBy10(__extension_Int8_1325_i8 const& __this ) -> const __extension_Int8_1325_i8;
	#line 1331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getMultiplyBy16(__extension_Int8_1325_i8 const& __this ) -> const __extension_Int8_1325_i8;
	#line 1325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i8, IBinaryIntegerFormatInfo, IBinaryIntegerFormatInfo, i8);
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
#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto __static_getMinValue<__extension_Int8_15_i8>::get() -> const __extension_Int8_1325_i8
	{
		#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::i8(-128)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto __static_getMaxValue<__extension_Int8_15_i8>::get() -> const __extension_Int8_1325_i8
	{
		#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(+Builtin::i8(127)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	
} namespace __extensions { using namespace System;
#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto operator<=>(__extension_Int8_20_i8 const& __this LIFETIMEBOUND, Builtin::Nullable<__extension_Int8_1325_i8> rhs) noexcept -> const Builtin::i32
	{
		#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		{
			#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			if ((!Builtin::Is(rhs, nullptr))) {
				#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				auto __tmp0 = *rhs; const auto& rhs = __tmp0;
				
				#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				return __this <=> rhs;
			}
		}
		#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return Builtin::i32(1);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_gt_gt_gt(__extension_Int8_20_i8 const& __this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename __extension_Int8_20_i8
	{
		#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i8>(UnsafeCast<Builtin::u8>(__this) >> amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_gt_gt_gt_eq(__extension_Int8_20_i8 & __this , Builtin::i32 amount)  -> typename __extension_Int8_20_i8&
	{
		#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_gt_gt_gt)(__this, amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_lt_lt_bsl(__extension_Int8_20_i8 const& __this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename __extension_Int8_20_i8
	{
		#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((amount <=> ADV_USPCS(BitWidth, __extension_Int8_1325_i8)()) >= 0) {
			#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return Builtin::i8(0);
		}
		#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return Builtin::UncheckedShiftLeft(__this, Builtin::Cast<true, Builtin::i32>(amount));
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_lt_lt_bsl_eq(__extension_Int8_20_i8 & __this , Builtin::u32 amount) noexcept -> typename __extension_Int8_20_i8&
	{
		#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_lt_lt_bsl)(__this, amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_gt_gt_bsl(__extension_Int8_20_i8 const& __this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename __extension_Int8_20_i8
	{
		#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((amount <=> ADV_USPCS(BitWidth, __extension_Int8_1325_i8)()) >= 0) {
			#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return ADV_UPCS(IsPositive)(__this.__ref()) ? Builtin::i8(0) : Builtin::i8(-1);
		}
		#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return Builtin::UncheckedShiftRight(__this, Builtin::Cast<true, Builtin::i32>(amount));
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_gt_gt_bsl_eq(__extension_Int8_20_i8 & __this , Builtin::u32 amount) noexcept -> typename __extension_Int8_20_i8&
	{
		#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_gt_gt_bsl)(__this, amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getHashCode(__extension_Int8_20_i8 const& __this ) -> const Builtin::u64
	{
		#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u64>(__this)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	
} namespace __extensions { using namespace System;
#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToBoolean(__extension_Int8_88_i8 const& __this LIFETIMEBOUND) noexcept -> const bool
	{
		#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this != Builtin::i32(0)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToInt8(__extension_Int8_88_i8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i8
	{
		#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToUInt8(__extension_Int8_88_i8 const& __this LIFETIMEBOUND)  -> const Builtin::u8
	{
		#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((__this <=> Builtin::u8((unsigned char)0)) < 0) {
			#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 95 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return Builtin::Cast<true, Builtin::u8>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToInt16(__extension_Int8_88_i8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i16
	{
		#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 98 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToUInt16(__extension_Int8_88_i8 const& __this LIFETIMEBOUND)  -> const Builtin::u16
	{
		#line 99 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((__this <=> Builtin::u16((unsigned short)0)) < 0) {
			#line 100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return Builtin::Cast<true, Builtin::u16>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToInt32(__extension_Int8_88_i8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i32
	{
		#line 104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToUInt32(__extension_Int8_88_i8 const& __this LIFETIMEBOUND)  -> const Builtin::u32
	{
		#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((__this <=> Builtin::u32(0U)) < 0) {
			#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return Builtin::Cast<true, Builtin::u32>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToInt64(__extension_Int8_88_i8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i64
	{
		#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToUInt64(__extension_Int8_88_i8 const& __this LIFETIMEBOUND)  -> const Builtin::u64
	{
		#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((__this <=> Builtin::u64(0ULL)) < 0) {
			#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return Builtin::Cast<true, Builtin::u64>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToInt128(__extension_Int8_88_i8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i128
	{
		#line 118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToUInt128(__extension_Int8_88_i8 const& __this LIFETIMEBOUND)  -> const Builtin::u128
	{
		#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((__this <=> Builtin::u128(0ULL)) < 0) {
			#line 121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return Builtin::Cast<true, Builtin::u128>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToIsize(__extension_Int8_88_i8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::isize
	{
		#line 125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToUsize(__extension_Int8_88_i8 const& __this LIFETIMEBOUND)  -> const Builtin::usize
	{
		#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((__this <=> Builtin::usize(0U)) < 0) {
			#line 128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return Builtin::Cast<true, Builtin::usize>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToFloat32(__extension_Int8_88_i8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::f32
	{
		#line 132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToFloat64(__extension_Int8_88_i8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::f64
	{
		#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToByte(__extension_Int8_88_i8 const& __this LIFETIMEBOUND)  -> const Builtin::char8
	{
		#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((__this <=> Builtin::i32(0)) < 0) {
			#line 136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return Builtin::Cast<true, Builtin::char8>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToChar(__extension_Int8_88_i8 const& __this LIFETIMEBOUND)  -> const Builtin::char16
	{
		#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((__this <=> Builtin::i32(0)) < 0) {
			#line 142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return Builtin::Cast<true, Builtin::char16>(__this);
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	
} namespace __extensions { using namespace System;
#line 152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_div_mod(__extension_Int8_150_i8 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_Int8_1325_i8, __extension_Int8_1325_i8>
	{
		#line 154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator /% implemented only for integer types");
		#line 155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return std::make_tuple(ADV_UFCS(_operator_bsl)(__this, rhs), __this % rhs);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_div_not(__extension_Int8_150_i8 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int8_150_i8
	{
		#line 160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		auto result = __this; 
		#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		result /= rhs;
		#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_div_not_eq(__extension_Int8_150_i8 & __this , auto rhs)  -> typename __extension_Int8_150_i8&
	{
		#line 165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this /= rhs); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_div_lt(__extension_Int8_150_i8 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int8_150_i8
	{
		#line 169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if constexpr (Builtin::TypeIs<T, IBinaryInteger>()) {
			#line 170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			const auto& [div, rem] = ADV_UFCS(_operator_div_mod)(__this, rhs);
			#line 171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			if (rem == Builtin::i32(0)) {
				#line 172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				return div;
			}
			#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			auto correction = (__this ^ rhs) >> (ADV_USPCS(BitWidth, __extension_Int8_1325_i8)() - Builtin::i32(1)); 
			#line 175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return div + correction;
		} else {
			#line 176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			{
				#line 177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				return Builtin::Cast<true, __extension_Int8_1325_i8>((ADV_UFCS(_operator_div_lt)(Builtin::f64{__this}, rhs)));
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_div_lt_eq(__extension_Int8_150_i8 & __this , auto rhs)  -> typename __extension_Int8_150_i8&
	{
		#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this = __extension_Int8_1325_i8{ADV_UFCS(_operator_div_lt)(__this, rhs)}); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_div_gt(__extension_Int8_150_i8 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int8_150_i8
	{
		#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if constexpr (Builtin::TypeIs<T, IBinaryInteger>()) {
			#line 186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			const auto& [div, rem] = ADV_UFCS(_operator_div_mod)(__this, rhs);
			#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			if (rem == Builtin::i32(0)) {
				#line 188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				return div;
			}
			#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			auto correction = Builtin::i8(1) + ((__this ^ rhs) >> (ADV_USPCS(BitWidth, __extension_Int8_1325_i8)() - Builtin::i32(1))); 
			#line 191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return div + correction;
		} else {
			#line 192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			{
				#line 193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				return Builtin::Cast<true, __extension_Int8_1325_i8>((ADV_UFCS(_operator_div_gt)(Builtin::f64{__this}, rhs)));
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_div_gt_eq(__extension_Int8_150_i8 & __this , auto rhs)  -> typename __extension_Int8_150_i8&
	{
		#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this = __extension_Int8_1325_i8{ADV_UFCS(_operator_div_gt)(__this, rhs)}); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	
} namespace __extensions { using namespace System;
#line 202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_bsl(__extension_Int8_200_i8 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int8_200_i8
	{
		#line 202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Div)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_bsl_eq(__extension_Int8_200_i8 & __this , T rhs)  -> typename __extension_Int8_200_i8&
	{
		#line 204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(DivAssign)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl(__extension_Int8_200_i8 const& __this LIFETIMEBOUND, T rhs)  -> const Builtin::Nullable<__extension_Int8_1325_i8>
	{
		#line 211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\? implemented only for integer types");
		#line 212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		__extension_Int8_1325_i8 result{}; 
		#line 213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (Builtin::DivExact(__this, rhs, result)) {
			#line 214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return result;
		}
		#line 216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return nullptr;
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	
} namespace __extensions { using namespace System;
#line 223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_xor_xor(__extension_Int8_220_i8 const& __this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename __extension_Int8_220_i8
	{
		#line 225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return Builtin::i8(1);
		}
		#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		auto base = __this; 
		#line 231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		auto result = Builtin::i8(1); 
		#line 233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (std::is_constant_evaluated()) {
			#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			while ((exp <=> Builtin::i32(1)) > 0) 
			{
				#line 235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
					#line 236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
					result *= base;
				}
				#line 238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
				#line 239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				base *= base;
			}
			#line 241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return result * base;
		} else {
			#line 242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			{
				#line 243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				for (;;) 
				{
					#line 244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
					if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
						#line 245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
						result *= base;
						#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
						if (exp == Builtin::i32(1)) {
							#line 247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
							return result;
						}
					}
					#line 249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
					ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
					#line 250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
					base *= base;
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_xor_xor_eq(__extension_Int8_220_i8 & __this , Builtin::u32 exp)  -> typename __extension_Int8_220_i8&
	{
		#line 255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_xor_xor)(__this, exp)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	
} namespace __extensions { using namespace System;
#line 311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline auto MaxMagnitudeNumber(__extension_Int8_258_i8 const& __this LIFETIMEBOUND, __extension_Int8_1325_i8 rhs) noexcept -> const typename __extension_Int8_258_i8
	{
		#line 311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(MaxMagnitude)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline auto MinMagnitudeNumber(__extension_Int8_258_i8 const& __this LIFETIMEBOUND, __extension_Int8_1325_i8 rhs) noexcept -> const typename __extension_Int8_258_i8
	{
		#line 342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(MinMagnitude)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToInt8(__extension_Int8_258_i8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i8
	{
		#line 356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToUInt8(__extension_Int8_258_i8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u8
	{
		#line 357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u8>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToInt16(__extension_Int8_258_i8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i16
	{
		#line 358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToUInt16(__extension_Int8_258_i8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u16
	{
		#line 359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u16>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToInt32(__extension_Int8_258_i8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i32
	{
		#line 360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToUInt32(__extension_Int8_258_i8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u32
	{
		#line 361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u32>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToInt64(__extension_Int8_258_i8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i64
	{
		#line 362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToUInt64(__extension_Int8_258_i8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u64
	{
		#line 363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u64>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToInt128(__extension_Int8_258_i8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i128
	{
		#line 364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToUInt128(__extension_Int8_258_i8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u128
	{
		#line 365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u128>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToIsize(__extension_Int8_258_i8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::isize
	{
		#line 366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToUsize(__extension_Int8_258_i8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::usize
	{
		#line 367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::usize>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto __static_getOne<__extension_Int8_258_i8>::get() -> const __extension_Int8_1325_i8
	{
		#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::i8(1)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto __static_getZero<__extension_Int8_258_i8>::get() -> const __extension_Int8_1325_i8
	{
		#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::i8(0)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto __static_getRadix<__extension_Int8_258_i8>::get() -> const Builtin::i32
	{
		#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(2)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getAbs(__extension_Int8_258_i8 const& __this ) -> const __extension_Int8_1325_i8
	{
		#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)(__this.__ref()) ? -__this : __this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsCanonical(__extension_Int8_258_i8 const& __this ) -> const bool
	{
		#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(true); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsComplexNumber(__extension_Int8_258_i8 const& __this ) -> const bool
	{
		#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(false); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsEvenInteger(__extension_Int8_258_i8 const& __this ) -> const bool
	{
		#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY((__this & Builtin::i8(1)) == Builtin::i32(0)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsFinite(__extension_Int8_258_i8 const& __this ) -> const bool
	{
		#line 267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(true); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsImaginaryNumber(__extension_Int8_258_i8 const& __this ) -> const bool
	{
		#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(false); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsInfinity(__extension_Int8_258_i8 const& __this ) -> const bool
	{
		#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(false); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsInteger(__extension_Int8_258_i8 const& __this ) -> const bool
	{
		#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(true); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsNaN(__extension_Int8_258_i8 const& __this ) -> const bool
	{
		#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(false); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsNegative(__extension_Int8_258_i8 const& __this ) -> const bool
	{
		#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY((__this <=> Builtin::i32(0)) < 0); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsNegativeInfinity(__extension_Int8_258_i8 const& __this ) -> const bool
	{
		#line 273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(false); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsNormal(__extension_Int8_258_i8 const& __this ) -> const bool
	{
		#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this != Builtin::i32(0)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsOddInteger(__extension_Int8_258_i8 const& __this ) -> const bool
	{
		#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY((__this & Builtin::i8(1)) != Builtin::i32(0)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsPositive(__extension_Int8_258_i8 const& __this ) -> const bool
	{
		#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY((__this <=> Builtin::i32(0)) >= 0); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsPositiveInfinity(__extension_Int8_258_i8 const& __this ) -> const bool
	{
		#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(false); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsRealNumber(__extension_Int8_258_i8 const& __this ) -> const bool
	{
		#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(true); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsSubnormal(__extension_Int8_258_i8 const& __this ) -> const bool
	{
		#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(false); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsZero(__extension_Int8_258_i8 const& __this ) -> const bool
	{
		#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this == Builtin::i32(0)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	
} namespace __extensions { using namespace System;
#line 371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto __static_getMinusOne<__extension_Int8_370_i8>::get() -> const __extension_Int8_1325_i8
	{
		#line 371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::i8(-1)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	
} namespace __extensions { using namespace System;
#line 395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto Max(__extension_Int8_374_i8 const& __this LIFETIMEBOUND, __extension_Int8_1325_i8 rhs) noexcept -> const typename __extension_Int8_374_i8
	{
		#line 395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultMax)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto MaxNumber(__extension_Int8_374_i8 const& __this LIFETIMEBOUND, __extension_Int8_1325_i8 rhs) noexcept -> const typename __extension_Int8_374_i8
	{
		#line 396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Max)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto Min(__extension_Int8_374_i8 const& __this LIFETIMEBOUND, __extension_Int8_1325_i8 rhs) noexcept -> const typename __extension_Int8_374_i8
	{
		#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultMin)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto MinNumber(__extension_Int8_374_i8 const& __this LIFETIMEBOUND, __extension_Int8_1325_i8 rhs) noexcept -> const typename __extension_Int8_374_i8
	{
		#line 398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Min)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto Clamp(__extension_Int8_374_i8 const& __this LIFETIMEBOUND, __extension_Int8_1325_i8 min, __extension_Int8_1325_i8 max)  -> const typename __extension_Int8_374_i8
	{
		#line 399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultClamp)(__this, min, max)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getSign(__extension_Int8_374_i8 const& __this ) -> const Builtin::i32
	{
		#line 375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultSign)(__this)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	
} namespace __extensions { using namespace System;
#line 454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto CheckedLog(__extension_Int8_402_i8 const& __this LIFETIMEBOUND, __extension_Int8_1325_i8 base) noexcept -> const Builtin::Nullable<__extension_Int8_1325_i8>
	{
		#line 456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((__this <=> Builtin::i32(0)) <= 0 || (base <=> Builtin::i32(1)) <= 0) {
			#line 457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return nullptr;
		}
		#line 460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (std::is_constant_evaluated()) {
			#line 461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			if (base == Builtin::i32(2)) {
				#line 462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				return ADV_UPCS(CheckedLog2)(__this.__ref());
			}
			#line 464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			if (base == Builtin::i32(10)) {
				#line 465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				return ADV_UPCS(CheckedLog10)(__this.__ref());
			}
		}
		#line 469 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((__this <=> base) < 0) {
			#line 470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return Builtin::i8(0);
		}
		#line 473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		__extension_Int8_1325_i8 n = Builtin::i8(1); 
		#line 474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		auto r = base; 
		#line 475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		const auto baseRatio = ADV_UFCS(_operator_bsl)(__this, base); 
		#line 476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		while ((r <=> baseRatio) <= 0) 
		{
			#line 477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			++n;
			#line 478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			r *= base;
		}
		#line 481 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return n;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto Midpoint(__extension_Int8_402_i8 const& __this LIFETIMEBOUND, __extension_Int8_1325_i8 rhs) noexcept -> const typename __extension_Int8_402_i8
	{
		#line 499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		const auto result = ((__this ^ rhs) >> Builtin::i32(1)) + (__this & rhs); 
		#line 500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		const auto correction = (result <=> Builtin::i32(0)) < 0; 
		#line 501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return result + ((Builtin::Cast<true, __extension_Int8_1325_i8>(correction)) & (__this ^ rhs));
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto IsMultipleOf(__extension_Int8_402_i8 const& __this LIFETIMEBOUND, __extension_Int8_1325_i8 rhs) noexcept -> const bool
	{
		#line 507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (rhs == Builtin::i32(0)) {
			#line 508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return __this == Builtin::i32(0);
		}
		#line 511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (rhs == Builtin::i32(-1)) {
			#line 512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return true;
		}
		#line 515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return __this % rhs == Builtin::i32(0);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto __static_getAllBitsSet<__extension_Int8_402_i8>::get() -> const __extension_Int8_1325_i8
	{
		#line 404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(MinusOne, Builtin::i8)()); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsPow2(__extension_Int8_402_i8 const& __this ) -> const bool
	{
		#line 407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsPositive)(__this.__ref()) && ADV_UPCS(PopCount)(__this.__ref()) == Builtin::i32(1)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getCheckedLog2(__extension_Int8_402_i8 const& __this ) -> const Builtin::Nullable<__extension_Int8_1325_i8>
	{
		#line 413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((__this <=> Builtin::i32(0)) <= 0) {
			#line 414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return nullptr;
		}
		#line 417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return Builtin::Cast<true, __extension_Int8_1325_i8>((ADV_USPCS(BitWidth, __extension_Int8_1325_i8)() - Builtin::i32(1) - ADV_UPCS(LeadingZeroCount)(__this.__ref())));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getLog2(__extension_Int8_402_i8 const& __this ) -> const __extension_Int8_1325_i8
	{
		#line 423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (const auto result = ADV_UPCS(CheckedLog2)(__this.__ref())) {
			{
				#line 423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				return result;
			}
		}
		#line 426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getCheckedLog10(__extension_Int8_402_i8 const& __this ) -> const Builtin::Nullable<__extension_Int8_1325_i8>
	{
		#line 433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((__this <=> Builtin::i32(0)) <= 0) {
			#line 434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return nullptr;
		}
		#line 437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		const auto val = Builtin::Cast<true, Builtin::u32>(__this); 
		#line 438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		constexpr Builtin::u32 C1 = Builtin::u32(0b1100000000U) - Builtin::u32(10U);
		#line 439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		constexpr Builtin::u32 C2 = Builtin::u32(0b1000000000U) - Builtin::u32(100U);
		#line 440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return Builtin::Cast<true, __extension_Int8_1325_i8>((((val + C1) & (val + C2)) >> Builtin::i32(8)));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getLog10(__extension_Int8_402_i8 const& __this ) -> const __extension_Int8_1325_i8
	{
		#line 446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (const auto result = ADV_UPCS(CheckedLog10)(__this.__ref())) {
			{
				#line 446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				return result;
			}
		}
		#line 449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	
} namespace __extensions { using namespace System;
#line 522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_add_qst(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_Int8_1325_i8>
	{
		#line 524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +? implemented only for integer types");
		#line 525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		__extension_Int8_1325_i8 result{}; 
		#line 526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (Builtin::SafeAdd(__this, rhs, result)) {
			#line 527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return result;
		}
		#line 529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_add_qst_eq(__extension_Int8_519_i8 & __this , T rhs) noexcept -> typename __extension_Int8_519_i8&
	{
		#line 533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +?= implemented only for integer types");
		#line 534 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (const auto result = ADV_UFCS(_operator_add_qst)(__this, rhs)) {
			{
				#line 534 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				__this = result;
			}
		}
		#line 537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_add_ne(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int8_519_i8
	{
		#line 544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +! implemented only for integer types");
		#line 545 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		__extension_Int8_1325_i8 result{}; 
		#line 546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::StrictAdd(__this, rhs, result);
		#line 547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_add_ne_eq(__extension_Int8_519_i8 & __this , T rhs)  -> typename __extension_Int8_519_i8&
	{
		#line 549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_add_ne)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_add_mod(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_Int8_519_i8
	{
		#line 555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +% implemented only for integer types");
		#line 556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		__extension_Int8_1325_i8 result{}; 
		#line 557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::WrappingAdd(__this, rhs, result);
		#line 558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_add_mod_eq(__extension_Int8_519_i8 & __this , T rhs) noexcept -> typename __extension_Int8_519_i8&
	{
		#line 560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_add_mod)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_add_or(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_Int8_519_i8
	{
		#line 566 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +| implemented only for integer types");
		#line 567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		__extension_Int8_1325_i8 result{}; 
		#line 568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::SaturatingAdd(__this, rhs, result);
		#line 569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_add_or_eq(__extension_Int8_519_i8 & __this , T rhs) noexcept -> typename __extension_Int8_519_i8&
	{
		#line 571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_add_or)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 583 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_add_add_qst(__extension_Int8_519_i8 & __this )  -> typename __extension_Int8_519_i8&
	{
		#line 583 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_qst_eq)(__this, Builtin::i8(1))); 
	}
	inline constexpr auto _operator_add_add_qst_postfix(__extension_Int8_519_i8 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_add_add_qst)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_add_add_ne(__extension_Int8_519_i8 & __this )  -> typename __extension_Int8_519_i8&
	{
		#line 586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_ne_eq)(__this, Builtin::i8(1))); 
	}
	inline constexpr auto _operator_add_add_ne_postfix(__extension_Int8_519_i8 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_add_add_ne)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_add_add_mod(__extension_Int8_519_i8 & __this )  -> typename __extension_Int8_519_i8&
	{
		#line 589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_mod_eq)(__this, Builtin::i8(1))); 
	}
	inline constexpr auto _operator_add_add_mod_postfix(__extension_Int8_519_i8 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_add_add_mod)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_add_add_or(__extension_Int8_519_i8 & __this )  -> typename __extension_Int8_519_i8&
	{
		#line 592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_or_eq)(__this, Builtin::i8(1))); 
	}
	inline constexpr auto _operator_add_add_or_postfix(__extension_Int8_519_i8 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_add_add_or)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto CarryingAdd(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, __extension_Int8_1325_i8 rhs, bool carry) noexcept -> const std::tuple<__extension_Int8_1325_i8, bool>
	{
		#line 598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		__extension_Int8_1325_i8 result{}; 
		#line 599 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		auto overflowed = Builtin::CarryingAdd(__this, rhs, carry, result); 
		#line 600 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 605 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto BorrowingSub(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, __extension_Int8_1325_i8 rhs, bool carry) noexcept -> const std::tuple<__extension_Int8_1325_i8, bool>
	{
		#line 607 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		__extension_Int8_1325_i8 result{}; 
		#line 608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		auto overflowed = Builtin::BorrowingSub(__this, rhs, carry, result); 
		#line 609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 614 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_sub_qst(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_Int8_1325_i8>
	{
		#line 616 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -? implemented only for integer types");
		#line 617 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		__extension_Int8_1325_i8 result{}; 
		#line 618 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (Builtin::SafeSubtract(__this, rhs, result)) {
			#line 619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return result;
		}
		#line 621 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 623 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_sub_qst_eq(__extension_Int8_519_i8 & __this , T rhs) noexcept -> typename __extension_Int8_519_i8&
	{
		#line 625 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -?= implemented only for integer types");
		#line 626 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (const auto result = ADV_UFCS(_operator_sub_qst)(__this, rhs)) {
			{
				#line 626 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				__this = result;
			}
		}
		#line 629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_sub_ne(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int8_519_i8
	{
		#line 636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -! implemented only for integer types");
		#line 637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		__extension_Int8_1325_i8 result{}; 
		#line 638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::StrictSubtract(__this, rhs, result);
		#line 639 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_sub_ne_eq(__extension_Int8_519_i8 & __this , T rhs)  -> typename __extension_Int8_519_i8&
	{
		#line 641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_sub_ne)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 645 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_sub_mod(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_Int8_519_i8
	{
		#line 647 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -% implemented only for integer types");
		#line 648 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		__extension_Int8_1325_i8 result{}; 
		#line 649 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::WrappingSubtract(__this, rhs, result);
		#line 650 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_sub_mod_eq(__extension_Int8_519_i8 & __this , T rhs) noexcept -> typename __extension_Int8_519_i8&
	{
		#line 652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_sub_mod)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 656 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_sub_or(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_Int8_519_i8
	{
		#line 658 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -| implemented only for integer types");
		#line 659 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		__extension_Int8_1325_i8 result{}; 
		#line 660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::SaturatingSubtract(__this, rhs, result);
		#line 661 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 663 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_sub_or_eq(__extension_Int8_519_i8 & __this , T rhs) noexcept -> typename __extension_Int8_519_i8&
	{
		#line 663 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_sub_or)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 675 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_sub_sub_qst(__extension_Int8_519_i8 & __this )  -> typename __extension_Int8_519_i8&
	{
		#line 675 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_qst_eq)(__this, Builtin::i8(1))); 
	}
	inline constexpr auto _operator_sub_sub_qst_postfix(__extension_Int8_519_i8 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_sub_sub_qst)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_sub_sub_ne(__extension_Int8_519_i8 & __this )  -> typename __extension_Int8_519_i8&
	{
		#line 678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_ne_eq)(__this, Builtin::i8(1))); 
	}
	inline constexpr auto _operator_sub_sub_ne_postfix(__extension_Int8_519_i8 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_sub_sub_ne)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_sub_sub_mod(__extension_Int8_519_i8 & __this )  -> typename __extension_Int8_519_i8&
	{
		#line 681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_mod_eq)(__this, Builtin::i8(1))); 
	}
	inline constexpr auto _operator_sub_sub_mod_postfix(__extension_Int8_519_i8 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_sub_sub_mod)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 684 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_sub_sub_or(__extension_Int8_519_i8 & __this )  -> typename __extension_Int8_519_i8&
	{
		#line 684 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_or_eq)(__this, Builtin::i8(1))); 
	}
	inline constexpr auto _operator_sub_sub_or_postfix(__extension_Int8_519_i8 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_sub_sub_or)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 688 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mul_qst(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_Int8_1325_i8>
	{
		#line 690 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *? implemented only for integer types");
		#line 691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		__extension_Int8_1325_i8 result{}; 
		#line 692 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (Builtin::SafeMultiply(__this, rhs, result)) {
			#line 693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return result;
		}
		#line 695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 697 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mul_qst_eq(__extension_Int8_519_i8 & __this , T rhs) noexcept -> typename __extension_Int8_519_i8&
	{
		#line 699 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *?= implemented only for integer types");
		#line 700 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (const auto result = ADV_UFCS(_operator_mul_qst)(__this, rhs)) {
			{
				#line 700 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 701 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				__this = result;
			}
		}
		#line 703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 708 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mul_ne(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int8_519_i8
	{
		#line 710 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *! implemented only for integer types");
		#line 711 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		__extension_Int8_1325_i8 result{}; 
		#line 712 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::StrictMultiply(__this, rhs, result);
		#line 713 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mul_ne_eq(__extension_Int8_519_i8 & __this , T rhs)  -> typename __extension_Int8_519_i8&
	{
		#line 715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_mul_ne)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 719 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mul_mod(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_Int8_519_i8
	{
		#line 721 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *% implemented only for integer types");
		#line 722 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		__extension_Int8_1325_i8 result{}; 
		#line 723 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::WrappingMultiply(__this, rhs, result);
		#line 724 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 726 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mul_mod_eq(__extension_Int8_519_i8 & __this , T rhs) noexcept -> typename __extension_Int8_519_i8&
	{
		#line 726 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_mul_mod)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 730 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mul_or(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_Int8_519_i8
	{
		#line 732 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *| implemented only for integer types");
		#line 733 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		__extension_Int8_1325_i8 result{}; 
		#line 734 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::SaturatingMultiply(__this, rhs, result);
		#line 735 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 737 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mul_or_eq(__extension_Int8_519_i8 & __this , T rhs) noexcept -> typename __extension_Int8_519_i8&
	{
		#line 737 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_mul_or)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 750 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_mul_gt(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, __extension_Int8_1325_i8 rhs) noexcept -> const std::tuple<Builtin::u8, Builtin::i8>
	{
		#line 752 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		const auto& [low, high] = Builtin::WideningMul8(__this, rhs);
		#line 753 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return std::make_tuple(low, high);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 759 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto CarryingMul(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, __extension_Int8_1325_i8 rhs, __extension_Int8_1325_i8 carry) noexcept -> const std::tuple<Builtin::u8, Builtin::i8>
	{
		#line 761 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		const auto& [low, high] = Builtin::CarryingMul8(__this, rhs, carry);
		#line 762 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return std::make_tuple(low, high);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 767 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_bsl_qst(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_Int8_1325_i8>
	{
		#line 769 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\? implemented only for integer types");
		#line 770 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		__extension_Int8_1325_i8 result{}; 
		#line 771 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (Builtin::SafeDivide(__this, rhs, result)) {
			#line 772 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return result;
		}
		#line 774 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 776 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_bsl_qst_eq(__extension_Int8_519_i8 & __this , T rhs) noexcept -> typename __extension_Int8_519_i8&
	{
		#line 778 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\?= implemented only for integer types");
		#line 779 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (const auto result = ADV_UFCS(_operator_bsl_qst)(__this, rhs)) {
			{
				#line 779 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 780 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				__this = result;
			}
		}
		#line 782 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 788 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_bsl_ne(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int8_519_i8
	{
		#line 790 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\! implemented only for integer types");
		#line 791 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		__extension_Int8_1325_i8 result{}; 
		#line 792 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::StrictDivide(__this, rhs, result);
		#line 793 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 795 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_bsl_ne_eq(__extension_Int8_519_i8 & __this , T rhs)  -> typename __extension_Int8_519_i8&
	{
		#line 795 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_bsl_ne)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 800 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_bsl_mod(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int8_519_i8
	{
		#line 802 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\% implemented only for integer types");
		#line 803 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		__extension_Int8_1325_i8 result{}; 
		#line 804 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::WrappingDivide(__this, rhs, result);
		#line 805 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 807 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_eq(__extension_Int8_519_i8 & __this , T rhs)  -> typename __extension_Int8_519_i8&
	{
		#line 807 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_bsl_mod)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 812 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_bsl_or(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int8_519_i8
	{
		#line 814 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\| implemented only for integer types");
		#line 815 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		__extension_Int8_1325_i8 result{}; 
		#line 816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::SaturatingDivide(__this, rhs, result);
		#line 817 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 819 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_bsl_or_eq(__extension_Int8_519_i8 & __this , T rhs)  -> typename __extension_Int8_519_i8&
	{
		#line 819 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_bsl_or)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 833 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_Int8_1325_i8>
	{
		#line 835 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\? implemented only for integer types");
		#line 836 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		__extension_Int8_1325_i8 result{}; 
		#line 837 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (Builtin::SafeDivExact(__this, rhs, result)) {
			#line 838 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return result;
		}
		#line 840 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 843 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst_eq(__extension_Int8_519_i8 & __this , T rhs) noexcept -> typename __extension_Int8_519_i8&
	{
		#line 845 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\?= implemented only for integer types");
		#line 846 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (const auto result = ADV_UFCS(_operator_bsl_bsl_qst)(__this, rhs)) {
			{
				#line 846 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 847 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				__this = result;
			}
		}
		#line 849 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 854 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mod_qst(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_Int8_1325_i8>
	{
		#line 856 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %? implemented only for integer types");
		#line 857 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		__extension_Int8_1325_i8 result{}; 
		#line 858 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (Builtin::SafeModulus(__this, rhs, result)) {
			#line 859 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return result;
		}
		#line 861 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 863 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mod_qst_eq(__extension_Int8_519_i8 & __this , T rhs) noexcept -> typename __extension_Int8_519_i8&
	{
		#line 865 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %?= implemented only for integer types");
		#line 866 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (const auto result = ADV_UFCS(_operator_mod_qst)(__this, rhs)) {
			{
				#line 866 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 867 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				__this = result;
			}
		}
		#line 869 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 875 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mod_ne(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int8_519_i8
	{
		#line 877 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %! implemented only for integer types");
		#line 878 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		__extension_Int8_1325_i8 result{}; 
		#line 879 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::StrictModulus(__this, rhs, result);
		#line 880 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 882 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mod_ne_eq(__extension_Int8_519_i8 & __this , T rhs)  -> typename __extension_Int8_519_i8&
	{
		#line 882 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_mod_ne)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 887 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mod_mod(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int8_519_i8
	{
		#line 889 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %% implemented only for integer types");
		#line 890 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		__extension_Int8_1325_i8 result{}; 
		#line 891 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::WrappingModulus(__this, rhs, result);
		#line 892 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 894 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> inline constexpr auto _operator_mod_mod_eq(__extension_Int8_519_i8 & __this , T rhs)  -> typename __extension_Int8_519_i8&
	{
		#line 894 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_mod_mod)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 908 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_sub_qst(__extension_Int8_519_i8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::Nullable<__extension_Int8_1325_i8>
	{
		#line 910 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		__extension_Int8_1325_i8 result{}; 
		#line 911 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (Builtin::SafeNegate(__this, result)) {
			#line 912 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return result;
		}
		#line 914 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 918 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_sub_ne(__extension_Int8_519_i8 const& __this LIFETIMEBOUND)  -> const typename __extension_Int8_519_i8
	{
		#line 920 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		__extension_Int8_1325_i8 result{}; 
		#line 921 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::StrictNegate(__this, result);
		#line 922 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 925 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_sub_mod(__extension_Int8_519_i8 const& __this LIFETIMEBOUND)  -> const typename __extension_Int8_519_i8
	{
		#line 927 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		__extension_Int8_1325_i8 result{}; 
		#line 928 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::WrappingNegate(__this, result);
		#line 929 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 933 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_sub_or(__extension_Int8_519_i8 const& __this LIFETIMEBOUND)  -> const typename __extension_Int8_519_i8
	{
		#line 935 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		__extension_Int8_1325_i8 result{}; 
		#line 936 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::SaturatingNegate(__this, result);
		#line 937 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 941 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_sub_mod_qst(__extension_Int8_519_i8 const& __this LIFETIMEBOUND)  -> const std::tuple<__extension_Int8_1325_i8, bool>
	{
		#line 943 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		__extension_Int8_1325_i8 result{}; 
		#line 944 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		auto overflowed = !Builtin::SafeNegate(__this, result); 
		#line 945 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 949 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_lt_lt_qst(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<__extension_Int8_1325_i8>
	{
		#line 951 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, __extension_Int8_1325_i8)()) < 0) {
			#line 952 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return Builtin::UncheckedShiftLeft(__this, amount);
		}
		#line 954 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 957 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_lt_lt_qst_eq(__extension_Int8_519_i8 & __this , Builtin::i32 amount) noexcept -> typename __extension_Int8_519_i8&
	{
		#line 959 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, __extension_Int8_1325_i8)()) < 0) {
			#line 960 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return __this <<= amount;
		}
		#line 962 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 965 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_lt_lt_ne(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename __extension_Int8_519_i8
	{
		#line 967 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, __extension_Int8_1325_i8)()) < 0) {
			#line 968 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return Builtin::UncheckedShiftLeft(__this, amount);
		}
		#line 970 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::Throw(Builtin::IntegerOverflowException{});
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 973 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_lt_lt_ne_eq(__extension_Int8_519_i8 & __this , Builtin::i32 amount)  -> typename __extension_Int8_519_i8&
	{
		#line 973 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_lt_lt_ne)(__this, amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 975 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_lt_lt_mod(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename __extension_Int8_519_i8
	{
		#line 975 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::UncheckedShiftLeft(__this, amount & (ADV_USPCS(BitWidth, __extension_Int8_1325_i8)() - Builtin::i32(1)))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 978 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_lt_lt_mod_eq(__extension_Int8_519_i8 & __this , Builtin::i32 amount) noexcept -> typename __extension_Int8_519_i8&
	{
		#line 978 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_lt_lt_mod)(__this, amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 980 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_lt_lt_mod_qst(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<__extension_Int8_1325_i8, bool>
	{
		#line 980 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(std::make_tuple(ADV_UFCS(_operator_lt_lt_mod)(__this, amount), (amount <=> Builtin::i32(0)) < 0 || (amount <=> ADV_USPCS(BitWidth, __extension_Int8_1325_i8)()) >= 0)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 983 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_gt_gt_qst(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<__extension_Int8_1325_i8>
	{
		#line 985 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, __extension_Int8_1325_i8)()) < 0) {
			#line 986 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return __this >> amount;
		}
		#line 988 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 991 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_gt_gt_qst_eq(__extension_Int8_519_i8 & __this , Builtin::i32 amount) noexcept -> typename __extension_Int8_519_i8&
	{
		#line 993 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, __extension_Int8_1325_i8)()) < 0) {
			#line 994 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return __this >>= amount;
		}
		#line 996 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_gt_gt_ne(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename __extension_Int8_519_i8
	{
		#line 1001 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, __extension_Int8_1325_i8)()) < 0) {
			#line 1002 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return __this >> amount;
		}
		#line 1004 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::Throw(Builtin::IntegerOverflowException{});
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1007 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_gt_gt_ne_eq(__extension_Int8_519_i8 & __this , Builtin::i32 amount)  -> typename __extension_Int8_519_i8&
	{
		#line 1007 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_gt_gt_ne)(__this, amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1009 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_gt_gt_mod(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename __extension_Int8_519_i8
	{
		#line 1009 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::UncheckedShiftRight(__this, amount & (ADV_USPCS(BitWidth, __extension_Int8_1325_i8)() - Builtin::i32(1)))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1012 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_gt_gt_mod_eq(__extension_Int8_519_i8 & __this , Builtin::i32 amount) noexcept -> typename __extension_Int8_519_i8&
	{
		#line 1012 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_gt_gt_mod)(__this, amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1014 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_gt_gt_mod_qst(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<__extension_Int8_1325_i8, bool>
	{
		#line 1014 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(std::make_tuple(ADV_UFCS(_operator_gt_gt_mod)(__this, amount), (amount <=> Builtin::i32(0)) < 0 || (amount <=> ADV_USPCS(BitWidth, __extension_Int8_1325_i8)()) >= 0)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1020 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_xor_xor_qst(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const Builtin::Nullable<__extension_Int8_1325_i8>
	{
		#line 1022 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1024 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return Builtin::i8(1);
		}
		#line 1027 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		auto base = __this; 
		#line 1028 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		auto result = Builtin::i8(1); 
		#line 1030 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		for (;;) 
		{
			#line 1031 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 1032 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				if (const auto mul = ADV_UFCS(_operator_mul_qst)(result, base)) {
					{
						#line 1032 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
						auto __tmp0 = *mul; const auto& mul = __tmp0;
						
						#line 1033 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
						result = mul;
					}
				} else {
					#line 1034 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
					{
						#line 1035 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
						return nullptr;
					}
				}
				#line 1037 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				if (exp == Builtin::i32(1)) {
					#line 1038 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
					return result;
				}
			}
			#line 1040 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
			#line 1041 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			if (const auto mul = ADV_UFCS(_operator_mul_qst)(base, base)) {
				{
					#line 1041 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
					auto __tmp0 = *mul; const auto& mul = __tmp0;
					
					#line 1042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
					base = mul;
				}
			} else {
				#line 1043 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				{
					#line 1044 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
					return nullptr;
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1049 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_xor_xor_qst_eq(__extension_Int8_519_i8 & __this , Builtin::u32 exp) noexcept -> typename __extension_Int8_519_i8&
	{
		#line 1051 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (auto result = ADV_UFCS(_operator_xor_xor_qst)(__this, exp)) {
			{
				#line 1051 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 1052 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				return __this = result;
			}
		}
		#line 1054 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1057 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_xor_xor_ne(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename __extension_Int8_519_i8
	{
		#line 1059 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1061 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return Builtin::i8(1);
		}
		#line 1064 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		auto base = __this; 
		#line 1065 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		auto result = Builtin::i8(1); 
		#line 1067 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		for (;;) 
		{
			#line 1068 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 1069 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				ADV_UFCS(_operator_mul_ne_eq)(result, base);
				#line 1070 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				if (exp == Builtin::i32(1)) {
					#line 1071 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
					return result;
				}
			}
			#line 1073 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
			#line 1074 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			ADV_UFCS(_operator_mul_ne_eq)(base, base);
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1078 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_xor_xor_ne_eq(__extension_Int8_519_i8 & __this , Builtin::u32 exp)  -> typename __extension_Int8_519_i8&
	{
		#line 1078 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_xor_xor_ne)(__this, exp)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1080 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_xor_xor_mod(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename __extension_Int8_519_i8
	{
		#line 1082 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1084 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return Builtin::i8(1);
		}
		#line 1087 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		auto base = __this; 
		#line 1088 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		auto result = Builtin::i8(1); 
		#line 1090 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (std::is_constant_evaluated()) {
			#line 1091 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			while ((exp <=> Builtin::i32(1)) > 0) 
			{
				#line 1092 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
					#line 1093 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
					ADV_UFCS(_operator_mul_mod_eq)(result, base);
				}
				#line 1095 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
				#line 1096 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				ADV_UFCS(_operator_mul_mod_eq)(base, base);
			}
			#line 1098 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return ADV_UFCS(_operator_mul_mod)(result, base);
		} else {
			#line 1099 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			{
				#line 1100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				for (;;) 
				{
					#line 1101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
					if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
						#line 1102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
						ADV_UFCS(_operator_mul_mod_eq)(result, base);
						#line 1103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
						if (exp == Builtin::i32(1)) {
							#line 1104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
							return result;
						}
					}
					#line 1106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
					ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
					#line 1107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
					ADV_UFCS(_operator_mul_mod_eq)(base, base);
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_xor_xor_mod_eq(__extension_Int8_519_i8 & __this , Builtin::u32 exp) noexcept -> typename __extension_Int8_519_i8&
	{
		#line 1112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_xor_xor_mod)(__this, exp)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_xor_xor_or(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename __extension_Int8_519_i8
	{
		#line 1116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (const auto result = ADV_UFCS(_operator_xor_xor_qst)(__this, exp)) {
			{
				#line 1116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 1117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				return result;
			}
		}
		#line 1120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return (ADV_UPCS(IsNegative)(__this.__ref()) && exp % Builtin::i32(2) == Builtin::i32(1)) ? ADV_USPCS(MinValue, __extension_Int8_1325_i8)() : ADV_USPCS(MaxValue, __extension_Int8_1325_i8)();
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_xor_xor_or_eq(__extension_Int8_519_i8 & __this , Builtin::u32 exp) noexcept -> typename __extension_Int8_519_i8&
	{
		#line 1123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_xor_xor_or)(__this, exp)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_xor_xor_mod_qst(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const std::tuple<__extension_Int8_1325_i8, bool>
	{
		#line 1127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return std::make_tuple(Builtin::i8(1), false);
		}
		#line 1132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		auto base = __this; 
		#line 1133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		auto result = Builtin::i8(1); 
		#line 1134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		auto overflowed = false; 
		#line 1135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		auto tmp = std::make_tuple(Builtin::i8(0), false); 
		#line 1137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		for (;;) 
		{
			#line 1138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 1139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				tmp = ADV_UFCS(_operator_mul_mod_qst)(result, base);
				#line 1140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				if (exp == Builtin::i32(1)) {
					#line 1141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
					std::get<1>(tmp) |= overflowed;
					#line 1142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
					return tmp;
				}
				#line 1144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				result = std::get<0>(tmp);
				#line 1145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				overflowed |= std::get<1>(tmp);
			}
			#line 1147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
			#line 1148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			tmp = ADV_UFCS(_operator_mul_mod_qst)(base, base);
			#line 1149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			base = std::get<0>(tmp);
			#line 1150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			overflowed |= std::get<1>(tmp);
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getCheckedAbs(__extension_Int8_519_i8 const& __this ) -> const Builtin::Nullable<__extension_Int8_1325_i8>
	{
		#line 1156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)(__this.__ref()) ? ADV_UFCS(_operator_sub_qst)(__this) : __this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getStrictAbs(__extension_Int8_519_i8 const& __this ) -> const __extension_Int8_1325_i8
	{
		#line 1159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)(__this.__ref()) ? ADV_UFCS(_operator_sub_ne)(__this) : __this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getWrappingAbs(__extension_Int8_519_i8 const& __this ) -> const __extension_Int8_1325_i8
	{
		#line 1162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)(__this.__ref()) ? ADV_UFCS(_operator_sub_mod)(__this) : __this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getSaturatingAbs(__extension_Int8_519_i8 const& __this ) -> const __extension_Int8_1325_i8
	{
		#line 1165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)(__this.__ref()) ? ADV_UFCS(_operator_sub_or)(__this) : __this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getOverflowingAbs(__extension_Int8_519_i8 const& __this ) -> const std::tuple<__extension_Int8_1325_i8, bool>
	{
		#line 1168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)(__this.__ref()) ? ADV_UFCS(_operator_sub_mod_qst)(__this) : std::make_tuple(__this, false)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	
} namespace __extensions { using namespace System;
#line 1216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NextMultipleOf(__extension_Int8_1171_i8 const& __this LIFETIMEBOUND, __extension_Int8_1325_i8 rhs)  -> const typename __extension_Int8_1171_i8
	{
		#line 1218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (rhs == Builtin::i32(-1)) {
			#line 1219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return __this;
		}
		#line 1222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		const auto remainder = __this % rhs; 
		#line 1223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		const auto mod = ((remainder <=> Builtin::i32(0)) > 0 && (rhs <=> Builtin::i32(0)) < 0) || ((remainder <=> Builtin::i32(0)) < 0 && (rhs <=> Builtin::i32(0)) > 0) ? remainder + rhs : remainder; 
		#line 1226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return mod == Builtin::i32(0) ? __this : __this + (rhs - mod);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto CheckedNextMultipleOf(__extension_Int8_1171_i8 const& __this LIFETIMEBOUND, __extension_Int8_1325_i8 rhs) noexcept -> const Builtin::Nullable<__extension_Int8_1325_i8>
	{
		#line 1234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (rhs == Builtin::i32(-1)) {
			#line 1235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return __this;
		}
		#line 1238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		__extension_Int8_1325_i8 remainder{}; 
		#line 1239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (const auto r = ADV_UFCS(_operator_mod_qst)(__this, rhs)) {
			{
				#line 1239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				auto __tmp0 = *r; const auto& r = __tmp0;
				
				#line 1240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				remainder = r;
			}
		} else {
			#line 1241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return nullptr;
		}
		#line 1243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		const auto mod = ((remainder <=> Builtin::i32(0)) > 0 && (rhs <=> Builtin::i32(0)) < 0) || ((remainder <=> Builtin::i32(0)) < 0 && (rhs <=> Builtin::i32(0)) > 0) ? remainder + rhs : remainder; 
		#line 1246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (mod == Builtin::i32(0)) {
			#line 1247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return __this;
		}
		#line 1249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return ADV_UFCS(_operator_add_qst)(__this, (rhs - mod));
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto __static_getIsSigned<__extension_Int8_1171_i8>::get() -> const bool
	{
		#line 1172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(true); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getTrailingZeroCount(__extension_Int8_1171_i8 const& __this ) -> const Builtin::u32
	{
		#line 1174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::TrailingZeroCount(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getTrailingOneCount(__extension_Int8_1171_i8 const& __this ) -> const Builtin::u32
	{
		#line 1175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::TrailingZeroCount(ADV_UFCS(_operator_not)(__this))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getByteCount(__extension_Int8_1171_i8 const& __this ) -> const Builtin::u32
	{
		#line 1176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u32>(Builtin::usize(sizeof(__extension_Int8_1325_i8)))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getMinimalBitWidth(__extension_Int8_1171_i8 const& __this ) -> const Builtin::u32
	{
		#line 1177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(BitWidth, __extension_Int8_1325_i8)() - ADV_UPCS(LeadingZeroCount)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline auto getIsqrt(__extension_Int8_1171_i8 const& __this ) -> const __extension_Int8_1325_i8
	{
		#line 1194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (const auto result = ADV_UPCS(CheckedIsqrt)(__this.__ref())) {
			{
				#line 1194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 1195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				return result;
			}
		}
		#line 1197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getLog2Ceiling(__extension_Int8_1171_i8 const& __this ) -> const __extension_Int8_1325_i8
	{
		#line 1204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		auto result = ADV_UPCS(Log2)(__this.__ref()); 
		#line 1205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (ADV_UPCS(PopCount)(__this.__ref()) != Builtin::i32(1)) {
			#line 1206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			++result;
		}
		#line 1209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return result;
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getPrevPow2(__extension_Int8_1171_i8 const& __this ) -> const __extension_Int8_1325_i8
	{
		#line 1255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((__this <=> Builtin::i32(1)) <= 0) {
			#line 1256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return Builtin::i8(0);
		}
		#line 1259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return ADV_USPCS(One, __extension_Int8_1325_i8)() << (ADV_UPCS(MinimalBitWidth)(__this.__ref()) - Builtin::u8(1U));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getNextPow2(__extension_Int8_1171_i8 const& __this ) -> const __extension_Int8_1325_i8
	{
		#line 1266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((__this <=> Builtin::i32(1)) <= 0) {
			#line 1267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return Builtin::i8(0);
		}
		#line 1270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		const auto p = __this - Builtin::i8(1); 
		#line 1271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return (ADV_USPCS(AllBitsSet, __extension_Int8_1325_i8)() >> ADV_UPCS(LeadingZeroCount)(p.__ref())) + Builtin::i8(1);
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getCheckedNextPow2(__extension_Int8_1171_i8 const& __this ) -> const Builtin::Nullable<__extension_Int8_1325_i8>
	{
		#line 1278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((__this <=> Builtin::i32(1)) <= 0) {
			#line 1279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return Builtin::i8(0);
		}
		#line 1282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		const auto p = __this - Builtin::i8(1); 
		#line 1283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return ADV_UFCS(_operator_add_qst)((ADV_USPCS(AllBitsSet, __extension_Int8_1325_i8)() >> ADV_UPCS(LeadingZeroCount)(p.__ref())), Builtin::i8(1));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getWrappingNextPow2(__extension_Int8_1171_i8 const& __this ) -> const __extension_Int8_1325_i8
	{
		#line 1290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((__this <=> Builtin::i32(1)) <= 0) {
			#line 1291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return Builtin::i8(0);
		}
		#line 1294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		const auto p = __this - Builtin::i8(1); 
		#line 1295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return ADV_UFCS(_operator_add_mod)((ADV_USPCS(AllBitsSet, __extension_Int8_1325_i8)() >> ADV_UPCS(LeadingZeroCount)(p.__ref())), Builtin::i8(1));
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	
} namespace __extensions { using namespace System;
#line 1320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto RotateLeft(__extension_Int8_1299_i8 const& __this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename __extension_Int8_1299_i8
	{
		#line 1320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::BitsRotateLeft(__this, shiftAmount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto RotateRight(__extension_Int8_1299_i8 const& __this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename __extension_Int8_1299_i8
	{
		#line 1321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::BitsRotateRight(__this, shiftAmount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto __static_getBitWidth<__extension_Int8_1299_i8>::get() -> const Builtin::u32
	{
		#line 1300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(8U)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getLeadingZeroCount(__extension_Int8_1299_i8 const& __this ) -> const Builtin::u32
	{
		#line 1302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::LeadingZeroCount(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getLeadingOneCount(__extension_Int8_1299_i8 const& __this ) -> const Builtin::u32
	{
		#line 1303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::LeadingZeroCount(ADV_UFCS(_operator_not)(__this))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getPopCount(__extension_Int8_1299_i8 const& __this ) -> const Builtin::u32
	{
		#line 1304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::PopCount(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getZeroCount(__extension_Int8_1299_i8 const& __this ) -> const Builtin::u32
	{
		#line 1305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::PopCount(ADV_UFCS(_operator_not)(__this))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getByteSwapped(__extension_Int8_1299_i8 const& __this ) -> const __extension_Int8_1325_i8
	{
		#line 1306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getBigEndian(__extension_Int8_1299_i8 const& __this ) -> const __extension_Int8_1325_i8
	{
		#line 1307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getLittleEndian(__extension_Int8_1299_i8 const& __this ) -> const __extension_Int8_1325_i8
	{
		#line 1308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getReverseBits(__extension_Int8_1299_i8 const& __this ) -> const __extension_Int8_1325_i8
	{
		#line 1309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::ReverseBits8(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getShortestBitLength(__extension_Int8_1299_i8 const& __this ) -> const Builtin::u32
	{
		#line 1313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((__this <=> Builtin::u32(0U)) >= 0) {
			#line 1314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return ADV_USPCS(BitWidth, __extension_Int8_1325_i8)() - ADV_UPCS(LeadingZeroCount)(__this.__ref());
		}
		#line 1317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return ADV_USPCS(BitWidth, __extension_Int8_1325_i8)() + Builtin::u32(1U) - ADV_UPCS(LeadingOneCount)(__this.__ref());
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	
} namespace __extensions { using namespace System;
#line 1333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto IsGreaterThanAsUnsigned(__extension_Int8_1325_i8 const& __this LIFETIMEBOUND, __extension_Int8_1325_i8 rhs) noexcept -> const bool
	{
		#line 1333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY((ADV_UFCS(NarrowToUInt8)(__this.__ref()) <=> ADV_UFCS(NarrowToUInt8)(rhs.__ref())) > 0); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto __static_getMaxDigitCount<__extension_Int8_1325_i8>::get() -> const Builtin::i32
	{
		#line 1326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(3)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto __static_getMaxHexDigitCount<__extension_Int8_1325_i8>::get() -> const Builtin::i32
	{
		#line 1327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(2)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto __static_getMaxValueDiv10<__extension_Int8_1325_i8>::get() -> const __extension_Int8_1325_i8
	{
		#line 1328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl)(ADV_USPCS(MaxValue, Builtin::i8)(), Builtin::i32(10))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getMultiplyBy10(__extension_Int8_1325_i8 const& __this ) -> const __extension_Int8_1325_i8
	{
		#line 1330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_mod)(__this, Builtin::i8(10))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getMultiplyBy16(__extension_Int8_1325_i8 const& __this ) -> const __extension_Int8_1325_i8
	{
		#line 1331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_mod)(__this, Builtin::i8(16))); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	

}