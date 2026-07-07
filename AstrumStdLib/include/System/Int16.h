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
namespace __Unsafe {} namespace __Int16_Protected__Unsafe {}
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
	} namespace __extensions { using namespace System;
#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	using __extension_Int16_15_i16 = Builtin::i16;
	#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE(IMinMaxValue, IMinMaxValue);
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class __TT> struct __static_getMinValue; template<> struct __static_getMinValue<__extension_Int16_15_i16> { static inline constexpr auto get() -> const __extension_Int16_15_i16; };
	#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class __TT> struct __static_getMaxValue; template<> struct __static_getMaxValue<__extension_Int16_15_i16> { static inline constexpr auto get() -> const __extension_Int16_15_i16; };
	#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(__extension_Int16_15_i16, IMinMaxValue, IMinMaxValue, __extension_Int16_15_i16);
	} namespace System{
using __extensions::__static_getMinValue;
using __extensions::__static_getMaxValue;

		} namespace __extensions { using namespace System;
#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	using __extension_Int16_20_i16 = Builtin::i16;
	#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ASTRUMSTD_API auto _operator_eq_eq_mul(__extension_Int16_20_i16 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool;
	#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto operator<=>(__extension_Int16_20_i16 const& __this LIFETIMEBOUND, Builtin::Nullable<__extension_Int16_20_i16> rhs) noexcept -> const Builtin::i32;
	#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_gt_gt_gt(__extension_Int16_20_i16 const& __this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename __extension_Int16_20_i16;
	#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_gt_gt_gt_eq(__extension_Int16_20_i16 & __this , Builtin::i32 amount)  -> typename __extension_Int16_20_i16&;
	#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_lt_lt_bsl(__extension_Int16_20_i16 const& __this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename __extension_Int16_20_i16;
	#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_lt_lt_bsl_eq(__extension_Int16_20_i16 & __this , Builtin::u32 amount) noexcept -> typename __extension_Int16_20_i16&;
	#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_gt_gt_bsl(__extension_Int16_20_i16 const& __this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename __extension_Int16_20_i16;
	#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_gt_gt_bsl_eq(__extension_Int16_20_i16 & __this , Builtin::u32 amount) noexcept -> typename __extension_Int16_20_i16&;
	#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getHashCode(__extension_Int16_20_i16 const& __this ) -> const Builtin::u64;
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
#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	using __extension_Int16_73_i16 = Builtin::i16;
	#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE(IAbstractComparable, IAbstractComparable);
	#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ASTRUMSTD_API auto _operator_lt_eq_gt_mul(__extension_Int16_73_i16 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32;
	#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(__extension_Int16_73_i16, IAbstractComparable, IAbstractComparable, __extension_Int16_73_i16);
	} namespace System{
using __extensions::_operator_lt_eq_gt_mul;

		} namespace __extensions { using namespace System;
#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	using __extension_Int16_88_i16 = Builtin::i16;
	#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE(IConvertible, IConvertible);
	#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToBoolean(__extension_Int16_88_i16 const& __this LIFETIMEBOUND) noexcept -> const bool;
	#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToInt8(__extension_Int16_88_i16 const& __this LIFETIMEBOUND)  -> const Builtin::i8;
	#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToUInt8(__extension_Int16_88_i16 const& __this LIFETIMEBOUND)  -> const Builtin::u8;
	#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToInt16(__extension_Int16_88_i16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i16;
	#line 103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToUInt16(__extension_Int16_88_i16 const& __this LIFETIMEBOUND)  -> const Builtin::u16;
	#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToInt32(__extension_Int16_88_i16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i32;
	#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToUInt32(__extension_Int16_88_i16 const& __this LIFETIMEBOUND)  -> const Builtin::u32;
	#line 116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToInt64(__extension_Int16_88_i16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i64;
	#line 117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToUInt64(__extension_Int16_88_i16 const& __this LIFETIMEBOUND)  -> const Builtin::u64;
	#line 123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToInt128(__extension_Int16_88_i16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i128;
	#line 124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToUInt128(__extension_Int16_88_i16 const& __this LIFETIMEBOUND)  -> const Builtin::u128;
	#line 130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToIsize(__extension_Int16_88_i16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::isize;
	#line 131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToUsize(__extension_Int16_88_i16 const& __this LIFETIMEBOUND)  -> const Builtin::usize;
	#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToFloat32(__extension_Int16_88_i16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::f32;
	#line 138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToFloat64(__extension_Int16_88_i16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::f64;
	#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToByte(__extension_Int16_88_i16 const& __this LIFETIMEBOUND)  -> const Builtin::u8;
	#line 140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToChar(__extension_Int16_88_i16 const& __this LIFETIMEBOUND)  -> const Builtin::char32;
	#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(__extension_Int16_88_i16, IConvertible, IConvertible, __extension_Int16_88_i16);
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
#line 150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	using __extension_Int16_150_i16 = Builtin::i16;
	#line 150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE(IDivisibleArithmetic, IDivisibleArithmetic);
	#line 152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_div_mod(__extension_Int16_150_i16 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_Int16_150_i16, __extension_Int16_150_i16>;
	#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_div_not(__extension_Int16_150_i16 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int16_150_i16;
	#line 165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_div_not_eq(__extension_Int16_150_i16 & __this , auto rhs)  -> typename __extension_Int16_150_i16&;
	#line 167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_div_lt(__extension_Int16_150_i16 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int16_150_i16;
	#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_div_lt_eq(__extension_Int16_150_i16 & __this , auto rhs)  -> typename __extension_Int16_150_i16&;
	#line 183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_div_gt(__extension_Int16_150_i16 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int16_150_i16;
	#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_div_gt_eq(__extension_Int16_150_i16 & __this , auto rhs)  -> typename __extension_Int16_150_i16&;
	#line 150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(__extension_Int16_150_i16, IDivisibleArithmetic, IDivisibleArithmetic, __extension_Int16_150_i16);
	} namespace System{
using __extensions::_operator_div_mod;
using __extensions::_operator_div_not;
using __extensions::_operator_div_not_eq;
using __extensions::_operator_div_lt;
using __extensions::_operator_div_lt_eq;
using __extensions::_operator_div_gt;
using __extensions::_operator_div_gt_eq;

		} namespace __extensions { using namespace System;
#line 200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	using __extension_Int16_200_i16 = Builtin::i16;
	#line 200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE(IIntegerDivisibleArithmetic, IIntegerDivisibleArithmetic);
	#line 202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl(__extension_Int16_200_i16 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int16_200_i16;
	#line 204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_eq(__extension_Int16_200_i16 & __this , T rhs)  -> typename __extension_Int16_200_i16&;
	#line 209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl(__extension_Int16_200_i16 const& __this LIFETIMEBOUND, T rhs)  -> const Builtin::Nullable<__extension_Int16_200_i16>;
	#line 200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(__extension_Int16_200_i16, IIntegerDivisibleArithmetic, IIntegerDivisibleArithmetic, __extension_Int16_200_i16);
	} namespace System{
using __extensions::_operator_bsl;
using __extensions::_operator_bsl_eq;
using __extensions::_operator_bsl_bsl;

		} namespace __extensions { using namespace System;
#line 220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	using __extension_Int16_220_i16 = Builtin::i16;
	#line 220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE(IIntegerPowerArithmetic, IIntegerPowerArithmetic);
	#line 223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor(__extension_Int16_220_i16 const& __this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename __extension_Int16_220_i16;
	#line 255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor_eq(__extension_Int16_220_i16 & __this , Builtin::u32 exp)  -> typename __extension_Int16_220_i16&;
	#line 220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(__extension_Int16_220_i16, IIntegerPowerArithmetic, IIntegerPowerArithmetic, __extension_Int16_220_i16);
	} namespace System{
using __extensions::_operator_xor_xor;
using __extensions::_operator_xor_xor_eq;

		} namespace __extensions { using namespace System;
#line 258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	using __extension_Int16_258_i16 = Builtin::i16;
	#line 258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE(INumberBase, INumberBase);
	#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ASTRUMSTD_API auto MaxMagnitude(__extension_Int16_258_i16 const& __this LIFETIMEBOUND, __extension_Int16_258_i16 rhs) noexcept -> const typename __extension_Int16_258_i16;
	#line 311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline auto MaxMagnitudeNumber(__extension_Int16_258_i16 const& __this LIFETIMEBOUND, __extension_Int16_258_i16 rhs) noexcept -> const typename __extension_Int16_258_i16;
	#line 313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ASTRUMSTD_API auto MinMagnitude(__extension_Int16_258_i16 const& __this LIFETIMEBOUND, __extension_Int16_258_i16 rhs) noexcept -> const typename __extension_Int16_258_i16;
	#line 342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline auto MinMagnitudeNumber(__extension_Int16_258_i16 const& __this LIFETIMEBOUND, __extension_Int16_258_i16 rhs) noexcept -> const typename __extension_Int16_258_i16;
	#line 344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ASTRUMSTD_API auto Parse(__extension_Int16_258_i16 const& __this LIFETIMEBOUND, Builtin::Str input)  -> const typename __extension_Int16_258_i16;
	#line 349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ASTRUMSTD_API auto TryParse(__extension_Int16_258_i16 const& __this LIFETIMEBOUND, Builtin::Str input) noexcept -> const Builtin::Nullable<__extension_Int16_258_i16>;
	#line 356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToInt8(__extension_Int16_258_i16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i8;
	#line 357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToUInt8(__extension_Int16_258_i16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u8;
	#line 358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToInt16(__extension_Int16_258_i16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i16;
	#line 359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToUInt16(__extension_Int16_258_i16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u16;
	#line 360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToInt32(__extension_Int16_258_i16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i32;
	#line 361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToUInt32(__extension_Int16_258_i16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u32;
	#line 362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToInt64(__extension_Int16_258_i16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i64;
	#line 363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToUInt64(__extension_Int16_258_i16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u64;
	#line 364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToInt128(__extension_Int16_258_i16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i128;
	#line 365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToUInt128(__extension_Int16_258_i16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u128;
	#line 366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToIsize(__extension_Int16_258_i16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::isize;
	#line 367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToUsize(__extension_Int16_258_i16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::usize;
	#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class __TT> struct __static_getOne; template<> struct __static_getOne<__extension_Int16_258_i16> { static inline constexpr auto get() -> const __extension_Int16_258_i16; };
	#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class __TT> struct __static_getZero; template<> struct __static_getZero<__extension_Int16_258_i16> { static inline constexpr auto get() -> const __extension_Int16_258_i16; };
	#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class __TT> struct __static_getRadix; template<> struct __static_getRadix<__extension_Int16_258_i16> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getAbs(__extension_Int16_258_i16 const& __this ) -> const __extension_Int16_258_i16;
	#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsCanonical(__extension_Int16_258_i16 const& __this ) -> const bool;
	#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsComplexNumber(__extension_Int16_258_i16 const& __this ) -> const bool;
	#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsEvenInteger(__extension_Int16_258_i16 const& __this ) -> const bool;
	#line 267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsFinite(__extension_Int16_258_i16 const& __this ) -> const bool;
	#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsImaginaryNumber(__extension_Int16_258_i16 const& __this ) -> const bool;
	#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsInfinity(__extension_Int16_258_i16 const& __this ) -> const bool;
	#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsInteger(__extension_Int16_258_i16 const& __this ) -> const bool;
	#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsNaN(__extension_Int16_258_i16 const& __this ) -> const bool;
	#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsNegative(__extension_Int16_258_i16 const& __this ) -> const bool;
	#line 273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsNegativeInfinity(__extension_Int16_258_i16 const& __this ) -> const bool;
	#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsNormal(__extension_Int16_258_i16 const& __this ) -> const bool;
	#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsOddInteger(__extension_Int16_258_i16 const& __this ) -> const bool;
	#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsPositive(__extension_Int16_258_i16 const& __this ) -> const bool;
	#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsPositiveInfinity(__extension_Int16_258_i16 const& __this ) -> const bool;
	#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsRealNumber(__extension_Int16_258_i16 const& __this ) -> const bool;
	#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsSubnormal(__extension_Int16_258_i16 const& __this ) -> const bool;
	#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsZero(__extension_Int16_258_i16 const& __this ) -> const bool;
	#line 258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(__extension_Int16_258_i16, INumberBase, INumberBase, __extension_Int16_258_i16);
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
#line 370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	using __extension_Int16_370_i16 = Builtin::i16;
	#line 370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE(ISignedNumber, ISignedNumber);
	#line 371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class __TT> struct __static_getMinusOne; template<> struct __static_getMinusOne<__extension_Int16_370_i16> { static inline constexpr auto get() -> const __extension_Int16_370_i16; };
	#line 370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(__extension_Int16_370_i16, ISignedNumber, ISignedNumber, __extension_Int16_370_i16);
	} namespace System{
using __extensions::__static_getMinusOne;

		} namespace __extensions { using namespace System;
#line 374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	using __extension_Int16_374_i16 = Builtin::i16;
	#line 374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE(INumber, INumber);
	#line 377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ASTRUMSTD_API auto CopySign(__extension_Int16_374_i16 const& __this LIFETIMEBOUND, __extension_Int16_374_i16 sign)  -> const typename __extension_Int16_374_i16;
	#line 395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto Max(__extension_Int16_374_i16 const& __this LIFETIMEBOUND, __extension_Int16_374_i16 rhs) noexcept -> const typename __extension_Int16_374_i16;
	#line 396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto MaxNumber(__extension_Int16_374_i16 const& __this LIFETIMEBOUND, __extension_Int16_374_i16 rhs) noexcept -> const typename __extension_Int16_374_i16;
	#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto Min(__extension_Int16_374_i16 const& __this LIFETIMEBOUND, __extension_Int16_374_i16 rhs) noexcept -> const typename __extension_Int16_374_i16;
	#line 398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto MinNumber(__extension_Int16_374_i16 const& __this LIFETIMEBOUND, __extension_Int16_374_i16 rhs) noexcept -> const typename __extension_Int16_374_i16;
	#line 399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto Clamp(__extension_Int16_374_i16 const& __this LIFETIMEBOUND, __extension_Int16_374_i16 min, __extension_Int16_374_i16 max)  -> const typename __extension_Int16_374_i16;
	#line 375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getSign(__extension_Int16_374_i16 const& __this ) -> const Builtin::i32;
	#line 374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(__extension_Int16_374_i16, INumber, INumber, __extension_Int16_374_i16);
	} namespace System{
using __extensions::CopySign;
using __extensions::Max;
using __extensions::MaxNumber;
using __extensions::Min;
using __extensions::MinNumber;
using __extensions::Clamp;
using __extensions::getSign;

		} namespace __extensions { using namespace System;
#line 402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	using __extension_Int16_402_i16 = Builtin::i16;
	#line 402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE(IBinaryNumber, IBinaryNumber);
	#line 456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto CheckedLog(__extension_Int16_402_i16 const& __this LIFETIMEBOUND, __extension_Int16_402_i16 base) noexcept -> const Builtin::Nullable<__extension_Int16_402_i16>;
	#line 489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ASTRUMSTD_API auto Log(__extension_Int16_402_i16 const& __this LIFETIMEBOUND, __extension_Int16_402_i16 base)  -> const typename __extension_Int16_402_i16;
	#line 499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto Midpoint(__extension_Int16_402_i16 const& __this LIFETIMEBOUND, __extension_Int16_402_i16 rhs) noexcept -> const typename __extension_Int16_402_i16;
	#line 507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto IsMultipleOf(__extension_Int16_402_i16 const& __this LIFETIMEBOUND, __extension_Int16_402_i16 rhs) noexcept -> const bool;
	#line 404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class __TT> struct __static_getAllBitsSet; template<> struct __static_getAllBitsSet<__extension_Int16_402_i16> { static inline constexpr auto get() -> const __extension_Int16_402_i16; };
	#line 407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsPow2(__extension_Int16_402_i16 const& __this ) -> const bool;
	#line 411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getCheckedLog2(__extension_Int16_402_i16 const& __this ) -> const Builtin::Nullable<__extension_Int16_402_i16>;
	#line 421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getLog2(__extension_Int16_402_i16 const& __this ) -> const __extension_Int16_402_i16;
	#line 431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getCheckedLog10(__extension_Int16_402_i16 const& __this ) -> const Builtin::Nullable<__extension_Int16_402_i16>;
	#line 446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getLog10(__extension_Int16_402_i16 const& __this ) -> const __extension_Int16_402_i16;
	#line 402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(__extension_Int16_402_i16, IBinaryNumber, IBinaryNumber, __extension_Int16_402_i16);
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
#line 521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	using __extension_Int16_521_i16 = Builtin::i16;
	#line 521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE(ICheckedArithmetic, ICheckedArithmetic);
	#line 524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_add_qst(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_Int16_521_i16>;
	#line 533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_add_qst_eq(__extension_Int16_521_i16 & __this , T rhs) noexcept -> typename __extension_Int16_521_i16&;
	#line 544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_add_ne(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int16_521_i16;
	#line 551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_add_ne_eq(__extension_Int16_521_i16 & __this , T rhs)  -> typename __extension_Int16_521_i16&;
	#line 555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_add_mod(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_Int16_521_i16;
	#line 562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_add_mod_eq(__extension_Int16_521_i16 & __this , T rhs) noexcept -> typename __extension_Int16_521_i16&;
	#line 566 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_add_or(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_Int16_521_i16;
	#line 573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_add_or_eq(__extension_Int16_521_i16 & __this , T rhs) noexcept -> typename __extension_Int16_521_i16&;
	#line 577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_add_mod_qst(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<__extension_Int16_521_i16, bool>;
	#line 585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_qst(__extension_Int16_521_i16 & __this )  -> typename __extension_Int16_521_i16&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_qst_postfix(__extension_Int16_521_i16 & __this)  -> decltype(auto);
	#line 588 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_ne(__extension_Int16_521_i16 & __this )  -> typename __extension_Int16_521_i16&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_ne_postfix(__extension_Int16_521_i16 & __this)  -> decltype(auto);
	#line 591 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_mod(__extension_Int16_521_i16 & __this )  -> typename __extension_Int16_521_i16&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_mod_postfix(__extension_Int16_521_i16 & __this)  -> decltype(auto);
	#line 594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_or(__extension_Int16_521_i16 & __this )  -> typename __extension_Int16_521_i16&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_or_postfix(__extension_Int16_521_i16 & __this)  -> decltype(auto);
	#line 598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto CarryingAdd(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, __extension_Int16_521_i16 rhs, bool carry) noexcept -> const std::tuple<__extension_Int16_521_i16, bool>;
	#line 607 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto BorrowingSub(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, __extension_Int16_521_i16 rhs, bool carry) noexcept -> const std::tuple<__extension_Int16_521_i16, bool>;
	#line 616 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_sub_qst(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_Int16_521_i16>;
	#line 625 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_sub_qst_eq(__extension_Int16_521_i16 & __this , T rhs) noexcept -> typename __extension_Int16_521_i16&;
	#line 636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_sub_ne(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int16_521_i16;
	#line 643 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_sub_ne_eq(__extension_Int16_521_i16 & __this , T rhs)  -> typename __extension_Int16_521_i16&;
	#line 647 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_sub_mod(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_Int16_521_i16;
	#line 654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_sub_mod_eq(__extension_Int16_521_i16 & __this , T rhs) noexcept -> typename __extension_Int16_521_i16&;
	#line 658 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_sub_or(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_Int16_521_i16;
	#line 665 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_sub_or_eq(__extension_Int16_521_i16 & __this , T rhs) noexcept -> typename __extension_Int16_521_i16&;
	#line 669 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_sub_mod_qst(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<__extension_Int16_521_i16, bool>;
	#line 677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_qst(__extension_Int16_521_i16 & __this )  -> typename __extension_Int16_521_i16&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_qst_postfix(__extension_Int16_521_i16 & __this)  -> decltype(auto);
	#line 680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_ne(__extension_Int16_521_i16 & __this )  -> typename __extension_Int16_521_i16&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_ne_postfix(__extension_Int16_521_i16 & __this)  -> decltype(auto);
	#line 683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_mod(__extension_Int16_521_i16 & __this )  -> typename __extension_Int16_521_i16&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_mod_postfix(__extension_Int16_521_i16 & __this)  -> decltype(auto);
	#line 686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_or(__extension_Int16_521_i16 & __this )  -> typename __extension_Int16_521_i16&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_or_postfix(__extension_Int16_521_i16 & __this)  -> decltype(auto);
	#line 690 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mul_qst(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_Int16_521_i16>;
	#line 699 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mul_qst_eq(__extension_Int16_521_i16 & __this , T rhs) noexcept -> typename __extension_Int16_521_i16&;
	#line 710 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mul_ne(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int16_521_i16;
	#line 717 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mul_ne_eq(__extension_Int16_521_i16 & __this , T rhs)  -> typename __extension_Int16_521_i16&;
	#line 721 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mul_mod(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_Int16_521_i16;
	#line 728 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mul_mod_eq(__extension_Int16_521_i16 & __this , T rhs) noexcept -> typename __extension_Int16_521_i16&;
	#line 732 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mul_or(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_Int16_521_i16;
	#line 739 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mul_or_eq(__extension_Int16_521_i16 & __this , T rhs) noexcept -> typename __extension_Int16_521_i16&;
	#line 743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mul_mod_qst(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<__extension_Int16_521_i16, bool>;
	#line 752 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_mul_gt(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, __extension_Int16_521_i16 rhs) noexcept -> const std::tuple<Builtin::u16, Builtin::i16>;
	#line 761 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto CarryingMul(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, __extension_Int16_521_i16 rhs, __extension_Int16_521_i16 carry) noexcept -> const std::tuple<Builtin::u16, Builtin::i16>;
	#line 769 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_qst(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_Int16_521_i16>;
	#line 778 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_qst_eq(__extension_Int16_521_i16 & __this , T rhs) noexcept -> typename __extension_Int16_521_i16&;
	#line 790 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_ne(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int16_521_i16;
	#line 797 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_ne_eq(__extension_Int16_521_i16 & __this , T rhs)  -> typename __extension_Int16_521_i16&;
	#line 802 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_mod(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int16_521_i16;
	#line 809 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_eq(__extension_Int16_521_i16 & __this , T rhs)  -> typename __extension_Int16_521_i16&;
	#line 814 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_or(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int16_521_i16;
	#line 821 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_or_eq(__extension_Int16_521_i16 & __this , T rhs)  -> typename __extension_Int16_521_i16&;
	#line 826 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_qst(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_Int16_521_i16, bool>;
	#line 835 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_Int16_521_i16>;
	#line 845 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst_eq(__extension_Int16_521_i16 & __this , T rhs) noexcept -> typename __extension_Int16_521_i16&;
	#line 856 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mod_qst(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_Int16_521_i16>;
	#line 865 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mod_qst_eq(__extension_Int16_521_i16 & __this , T rhs) noexcept -> typename __extension_Int16_521_i16&;
	#line 877 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mod_ne(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int16_521_i16;
	#line 884 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mod_ne_eq(__extension_Int16_521_i16 & __this , T rhs)  -> typename __extension_Int16_521_i16&;
	#line 889 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mod_mod(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int16_521_i16;
	#line 896 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mod_mod_eq(__extension_Int16_521_i16 & __this , T rhs)  -> typename __extension_Int16_521_i16&;
	#line 901 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mod_mod_qst(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_Int16_521_i16, bool>;
	#line 910 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_sub_qst(__extension_Int16_521_i16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::Nullable<__extension_Int16_521_i16>;
	#line 920 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_sub_ne(__extension_Int16_521_i16 const& __this LIFETIMEBOUND)  -> const typename __extension_Int16_521_i16;
	#line 927 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_sub_mod(__extension_Int16_521_i16 const& __this LIFETIMEBOUND)  -> const typename __extension_Int16_521_i16;
	#line 935 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_sub_or(__extension_Int16_521_i16 const& __this LIFETIMEBOUND)  -> const typename __extension_Int16_521_i16;
	#line 943 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_sub_mod_qst(__extension_Int16_521_i16 const& __this LIFETIMEBOUND)  -> const std::tuple<__extension_Int16_521_i16, bool>;
	#line 951 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_lt_lt_qst(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<__extension_Int16_521_i16>;
	#line 959 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_lt_lt_qst_eq(__extension_Int16_521_i16 & __this , Builtin::i32 amount) noexcept -> typename __extension_Int16_521_i16&;
	#line 967 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_lt_lt_ne(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename __extension_Int16_521_i16;
	#line 975 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_lt_lt_ne_eq(__extension_Int16_521_i16 & __this , Builtin::i32 amount)  -> typename __extension_Int16_521_i16&;
	#line 977 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_lt_lt_mod(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename __extension_Int16_521_i16;
	#line 980 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_lt_lt_mod_eq(__extension_Int16_521_i16 & __this , Builtin::i32 amount) noexcept -> typename __extension_Int16_521_i16&;
	#line 982 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_lt_lt_mod_qst(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<__extension_Int16_521_i16, bool>;
	#line 985 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_gt_gt_qst(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<__extension_Int16_521_i16>;
	#line 993 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_gt_gt_qst_eq(__extension_Int16_521_i16 & __this , Builtin::i32 amount) noexcept -> typename __extension_Int16_521_i16&;
	#line 1001 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_gt_gt_ne(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename __extension_Int16_521_i16;
	#line 1009 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_gt_gt_ne_eq(__extension_Int16_521_i16 & __this , Builtin::i32 amount)  -> typename __extension_Int16_521_i16&;
	#line 1011 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_gt_gt_mod(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename __extension_Int16_521_i16;
	#line 1014 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_gt_gt_mod_eq(__extension_Int16_521_i16 & __this , Builtin::i32 amount) noexcept -> typename __extension_Int16_521_i16&;
	#line 1016 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_gt_gt_mod_qst(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<__extension_Int16_521_i16, bool>;
	#line 1022 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor_qst(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const Builtin::Nullable<__extension_Int16_521_i16>;
	#line 1051 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor_qst_eq(__extension_Int16_521_i16 & __this , Builtin::u32 exp) noexcept -> typename __extension_Int16_521_i16&;
	#line 1059 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor_ne(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename __extension_Int16_521_i16;
	#line 1080 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor_ne_eq(__extension_Int16_521_i16 & __this , Builtin::u32 exp)  -> typename __extension_Int16_521_i16&;
	#line 1082 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor_mod(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename __extension_Int16_521_i16;
	#line 1114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor_mod_eq(__extension_Int16_521_i16 & __this , Builtin::u32 exp) noexcept -> typename __extension_Int16_521_i16&;
	#line 1116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor_or(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename __extension_Int16_521_i16;
	#line 1125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor_or_eq(__extension_Int16_521_i16 & __this , Builtin::u32 exp) noexcept -> typename __extension_Int16_521_i16&;
	#line 1127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor_mod_qst(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const std::tuple<__extension_Int16_521_i16, bool>;
	#line 1158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getCheckedAbs(__extension_Int16_521_i16 const& __this ) -> const Builtin::Nullable<__extension_Int16_521_i16>;
	#line 1161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getStrictAbs(__extension_Int16_521_i16 const& __this ) -> const __extension_Int16_521_i16;
	#line 1164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getWrappingAbs(__extension_Int16_521_i16 const& __this ) -> const __extension_Int16_521_i16;
	#line 1167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getSaturatingAbs(__extension_Int16_521_i16 const& __this ) -> const __extension_Int16_521_i16;
	#line 1170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getOverflowingAbs(__extension_Int16_521_i16 const& __this ) -> const std::tuple<__extension_Int16_521_i16, bool>;
	#line 521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(__extension_Int16_521_i16, ICheckedArithmetic, ICheckedArithmetic, __extension_Int16_521_i16);
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
#line 1179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	using __extension_Int16_1179_i16 = Builtin::i16;
	#line 1179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE(IBinaryInteger, IBinaryInteger);
	#line 1224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NextMultipleOf(__extension_Int16_1179_i16 const& __this LIFETIMEBOUND, __extension_Int16_1179_i16 rhs)  -> const typename __extension_Int16_1179_i16;
	#line 1240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto CheckedNextMultipleOf(__extension_Int16_1179_i16 const& __this LIFETIMEBOUND, __extension_Int16_1179_i16 rhs) noexcept -> const Builtin::Nullable<__extension_Int16_1179_i16>;
	#line 1180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class __TT> struct __static_getIsSigned; template<> struct __static_getIsSigned<__extension_Int16_1179_i16> { static inline constexpr auto get() -> const bool; };
	#line 1182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getTrailingZeroCount(__extension_Int16_1179_i16 const& __this ) -> const Builtin::u32;
	#line 1183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getTrailingOneCount(__extension_Int16_1179_i16 const& __this ) -> const Builtin::u32;
	#line 1184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getByteCount(__extension_Int16_1179_i16 const& __this ) -> const Builtin::u32;
	#line 1185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getMinimalBitWidth(__extension_Int16_1179_i16 const& __this ) -> const Builtin::u32;
	#line 1189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ASTRUMSTD_API auto getCheckedIsqrt(__extension_Int16_1179_i16 const& __this ) -> const Builtin::Nullable<__extension_Int16_1179_i16>;
	#line 1201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline auto getIsqrt(__extension_Int16_1179_i16 const& __this ) -> const __extension_Int16_1179_i16;
	#line 1210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getLog2Ceiling(__extension_Int16_1179_i16 const& __this ) -> const __extension_Int16_1179_i16;
	#line 1261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getPrevPow2(__extension_Int16_1179_i16 const& __this ) -> const __extension_Int16_1179_i16;
	#line 1272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getNextPow2(__extension_Int16_1179_i16 const& __this ) -> const __extension_Int16_1179_i16;
	#line 1284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getCheckedNextPow2(__extension_Int16_1179_i16 const& __this ) -> const Builtin::Nullable<__extension_Int16_1179_i16>;
	#line 1296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getWrappingNextPow2(__extension_Int16_1179_i16 const& __this ) -> const __extension_Int16_1179_i16;
	#line 1179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(__extension_Int16_1179_i16, IBinaryInteger, IBinaryInteger, __extension_Int16_1179_i16);
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
#line 1307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	using __extension_Int16_1307_i16 = Builtin::i16;
	#line 1307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE(IFixedWidthInteger, IFixedWidthInteger);
	#line 1340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto RotateLeft(__extension_Int16_1307_i16 const& __this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename __extension_Int16_1307_i16;
	#line 1341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto RotateRight(__extension_Int16_1307_i16 const& __this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename __extension_Int16_1307_i16;
	#line 1308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class __TT> struct __static_getBitWidth; template<> struct __static_getBitWidth<__extension_Int16_1307_i16> { static inline constexpr auto get() -> const Builtin::u32; };
	#line 1310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getLeadingZeroCount(__extension_Int16_1307_i16 const& __this ) -> const Builtin::u32;
	#line 1311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getLeadingOneCount(__extension_Int16_1307_i16 const& __this ) -> const Builtin::u32;
	#line 1312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getPopCount(__extension_Int16_1307_i16 const& __this ) -> const Builtin::u32;
	#line 1313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getZeroCount(__extension_Int16_1307_i16 const& __this ) -> const Builtin::u32;
	#line 1314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getByteSwapped(__extension_Int16_1307_i16 const& __this ) -> const __extension_Int16_1307_i16;
	#line 1315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getBigEndian(__extension_Int16_1307_i16 const& __this ) -> const __extension_Int16_1307_i16;
	#line 1322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getLittleEndian(__extension_Int16_1307_i16 const& __this ) -> const __extension_Int16_1307_i16;
	#line 1329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getReverseBits(__extension_Int16_1307_i16 const& __this ) -> const __extension_Int16_1307_i16;
	#line 1331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getShortestBitLength(__extension_Int16_1307_i16 const& __this ) -> const Builtin::u32;
	#line 1307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(__extension_Int16_1307_i16, IFixedWidthInteger, IFixedWidthInteger, __extension_Int16_1307_i16);
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
#line 1345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	using __extension_Int16_1345_i16 = Builtin::i16;
	#line 1345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE(IBinaryIntegerFormatInfo, IBinaryIntegerFormatInfo);
	#line 1353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto IsGreaterThanAsUnsigned(__extension_Int16_1345_i16 const& __this LIFETIMEBOUND, __extension_Int16_1345_i16 rhs) noexcept -> const bool;
	#line 1346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class __TT> struct __static_getMaxDigitCount; template<> struct __static_getMaxDigitCount<__extension_Int16_1345_i16> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class __TT> struct __static_getMaxHexDigitCount; template<> struct __static_getMaxHexDigitCount<__extension_Int16_1345_i16> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class __TT> struct __static_getMaxValueDiv10; template<> struct __static_getMaxValueDiv10<__extension_Int16_1345_i16> { static inline constexpr auto get() -> const __extension_Int16_1345_i16; };
	#line 1350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getMultiplyBy10(__extension_Int16_1345_i16 const& __this ) -> const __extension_Int16_1345_i16;
	#line 1351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getMultiplyBy16(__extension_Int16_1345_i16 const& __this ) -> const __extension_Int16_1345_i16;
	#line 1345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(__extension_Int16_1345_i16, IBinaryIntegerFormatInfo, IBinaryIntegerFormatInfo, __extension_Int16_1345_i16);
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
#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto __static_getMinValue<__extension_Int16_15_i16>::get() -> const __extension_Int16_15_i16
	{
		#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::i16(-32768)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto __static_getMaxValue<__extension_Int16_15_i16>::get() -> const __extension_Int16_15_i16
	{
		#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(+Builtin::i16(32767)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	
} namespace __extensions { using namespace System;
#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto operator<=>(__extension_Int16_20_i16 const& __this LIFETIMEBOUND, Builtin::Nullable<__extension_Int16_20_i16> rhs) noexcept -> const Builtin::i32
	{
		#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		{
			#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			if ((!Builtin::Is(rhs, nullptr))) {
				#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				auto __tmp0 = *rhs; const auto& rhs = __tmp0;
				
				#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				return __this <=> rhs;
			}
		}
		#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return Builtin::i32(1);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_gt_gt_gt(__extension_Int16_20_i16 const& __this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename __extension_Int16_20_i16
	{
		#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i16>(UnsafeCast<Builtin::u16>(__this) >> amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_gt_gt_gt_eq(__extension_Int16_20_i16 & __this , Builtin::i32 amount)  -> typename __extension_Int16_20_i16&
	{
		#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_gt_gt_gt)(__this, amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_lt_lt_bsl(__extension_Int16_20_i16 const& __this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename __extension_Int16_20_i16
	{
		#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if ((amount <=> ADV_USPCS(BitWidth, __extension_Int16_20_i16)()) >= 0) {
			#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return Builtin::i16(0);
		}
		#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return Builtin::UncheckedShiftLeft(__this, Builtin::Cast<true, Builtin::i32>(amount));
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_lt_lt_bsl_eq(__extension_Int16_20_i16 & __this , Builtin::u32 amount) noexcept -> typename __extension_Int16_20_i16&
	{
		#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_lt_lt_bsl)(__this, amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_gt_gt_bsl(__extension_Int16_20_i16 const& __this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename __extension_Int16_20_i16
	{
		#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if ((amount <=> ADV_USPCS(BitWidth, __extension_Int16_20_i16)()) >= 0) {
			#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return ADV_UPCS(IsPositive)(__this.__ref()) ? Builtin::i16(0) : Builtin::i16(-1);
		}
		#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return Builtin::UncheckedShiftRight(__this, Builtin::Cast<true, Builtin::i32>(amount));
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_gt_gt_bsl_eq(__extension_Int16_20_i16 & __this , Builtin::u32 amount) noexcept -> typename __extension_Int16_20_i16&
	{
		#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_gt_gt_bsl)(__this, amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getHashCode(__extension_Int16_20_i16 const& __this ) -> const Builtin::u64
	{
		#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u64>(__this)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	
} namespace __extensions { using namespace System;
#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToBoolean(__extension_Int16_88_i16 const& __this LIFETIMEBOUND) noexcept -> const bool
	{
		#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(__this != Builtin::i32(0)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToInt8(__extension_Int16_88_i16 const& __this LIFETIMEBOUND)  -> const Builtin::i8
	{
		#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if ((__this <=> Builtin::i32(0x7F)) > 0 || (__this <=> (Builtin::i32(-0x80))) < 0) {
			#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return Builtin::Cast<true, Builtin::i8>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToUInt8(__extension_Int16_88_i16 const& __this LIFETIMEBOUND)  -> const Builtin::u8
	{
		#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if ((__this <=> Builtin::i32(0)) < 0 || (__this <=> Builtin::i32(0xFF)) > 0) {
			#line 98 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return Builtin::Cast<true, Builtin::u8>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToInt16(__extension_Int16_88_i16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i16
	{
		#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToUInt16(__extension_Int16_88_i16 const& __this LIFETIMEBOUND)  -> const Builtin::u16
	{
		#line 104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if ((__this <=> Builtin::i32(0)) < 0) {
			#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return Builtin::Cast<true, Builtin::u16>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToInt32(__extension_Int16_88_i16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i32
	{
		#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToUInt32(__extension_Int16_88_i16 const& __this LIFETIMEBOUND)  -> const Builtin::u32
	{
		#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if ((__this <=> Builtin::i32(0)) < 0) {
			#line 112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return Builtin::Cast<true, Builtin::u32>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToInt64(__extension_Int16_88_i16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i64
	{
		#line 116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToUInt64(__extension_Int16_88_i16 const& __this LIFETIMEBOUND)  -> const Builtin::u64
	{
		#line 118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if ((__this <=> Builtin::i32(0)) < 0) {
			#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return Builtin::Cast<true, Builtin::u64>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToInt128(__extension_Int16_88_i16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i128
	{
		#line 123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToUInt128(__extension_Int16_88_i16 const& __this LIFETIMEBOUND)  -> const Builtin::u128
	{
		#line 125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if ((__this <=> Builtin::i32(0)) < 0) {
			#line 126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return Builtin::Cast<true, Builtin::u128>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToIsize(__extension_Int16_88_i16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::isize
	{
		#line 130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToUsize(__extension_Int16_88_i16 const& __this LIFETIMEBOUND)  -> const Builtin::usize
	{
		#line 132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if ((__this <=> Builtin::i32(0)) < 0) {
			#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return Builtin::Cast<true, Builtin::usize>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToFloat32(__extension_Int16_88_i16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::f32
	{
		#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToFloat64(__extension_Int16_88_i16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::f64
	{
		#line 138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToByte(__extension_Int16_88_i16 const& __this LIFETIMEBOUND)  -> const Builtin::u8
	{
		#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(ToUInt8)(__this.__ref())); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto ToChar(__extension_Int16_88_i16 const& __this LIFETIMEBOUND)  -> const Builtin::char32
	{
		#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if ((__this <=> Builtin::i32(0)) < 0) {
			#line 142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return Builtin::Cast<true, Builtin::char32>(__this);
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	
} namespace __extensions { using namespace System;
#line 152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_div_mod(__extension_Int16_150_i16 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_Int16_150_i16, __extension_Int16_150_i16>
	{
		#line 154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator /% implemented only for integer types");
		#line 155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return std::make_tuple(ADV_UFCS(_operator_bsl)(__this, rhs), __this % rhs);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_div_not(__extension_Int16_150_i16 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int16_150_i16
	{
		#line 160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype(__this)> result = __this; 
		#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		result /= rhs;
		#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_div_not_eq(__extension_Int16_150_i16 & __this , auto rhs)  -> typename __extension_Int16_150_i16&
	{
		#line 165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(__this /= rhs); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_div_lt(__extension_Int16_150_i16 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int16_150_i16
	{
		#line 169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if constexpr (Builtin::TypeIs<T, IBinaryInteger>()) {
			#line 170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			const auto& [div, rem] = ADV_UFCS(_operator_div_mod)(__this, rhs);
			#line 171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			if (rem == Builtin::i32(0)) {
				#line 172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				return div;
			}
			#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			Builtin::Auto<decltype((__this ^ rhs) >> (ADV_USPCS(BitWidth, __extension_Int16_150_i16)() - Builtin::i32(1)))> correction = (__this ^ rhs) >> (ADV_USPCS(BitWidth, __extension_Int16_150_i16)() - Builtin::i32(1)); 
			#line 175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return div + correction;
		} else {
			#line 176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			{
				#line 177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				return Builtin::Cast<true, __extension_Int16_150_i16>((ADV_UFCS(_operator_div_lt)(Builtin::f64{__this}, rhs)));
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_div_lt_eq(__extension_Int16_150_i16 & __this , auto rhs)  -> typename __extension_Int16_150_i16&
	{
		#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(__this = __extension_Int16_150_i16{ADV_UFCS(_operator_div_lt)(__this, rhs)}); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_div_gt(__extension_Int16_150_i16 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int16_150_i16
	{
		#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if constexpr (Builtin::TypeIs<T, IBinaryInteger>()) {
			#line 186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			const auto& [div, rem] = ADV_UFCS(_operator_div_mod)(__this, rhs);
			#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			if (rem == Builtin::i32(0)) {
				#line 188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				return div;
			}
			#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			Builtin::Auto<decltype(Builtin::i16(1) + ((__this ^ rhs) >> (ADV_USPCS(BitWidth, __extension_Int16_150_i16)() - Builtin::i32(1))))> correction = Builtin::i16(1) + ((__this ^ rhs) >> (ADV_USPCS(BitWidth, __extension_Int16_150_i16)() - Builtin::i32(1))); 
			#line 191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return div + correction;
		} else {
			#line 192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			{
				#line 193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				return Builtin::Cast<true, __extension_Int16_150_i16>((ADV_UFCS(_operator_div_gt)(Builtin::f64{__this}, rhs)));
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_div_gt_eq(__extension_Int16_150_i16 & __this , auto rhs)  -> typename __extension_Int16_150_i16&
	{
		#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(__this = __extension_Int16_150_i16{ADV_UFCS(_operator_div_gt)(__this, rhs)}); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	
} namespace __extensions { using namespace System;
#line 202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl(__extension_Int16_200_i16 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int16_200_i16
	{
		#line 202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Div)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_eq(__extension_Int16_200_i16 & __this , T rhs)  -> typename __extension_Int16_200_i16&
	{
		#line 204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(DivAssign)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl(__extension_Int16_200_i16 const& __this LIFETIMEBOUND, T rhs)  -> const Builtin::Nullable<__extension_Int16_200_i16>
	{
		#line 211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\? implemented only for integer types");
		#line 212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		__extension_Int16_200_i16 result{}; 
		#line 213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (Builtin::DivExact(__this, rhs, result)) {
			#line 214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return result;
		}
		#line 216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return nullptr;
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	
} namespace __extensions { using namespace System;
#line 223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor(__extension_Int16_220_i16 const& __this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename __extension_Int16_220_i16
	{
		#line 225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return Builtin::i16(1);
		}
		#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype(__this)> base = __this; 
		#line 231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype(Builtin::i16(1))> result = Builtin::i16(1); 
		#line 233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (std::is_constant_evaluated()) {
			#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			while ((exp <=> Builtin::i32(1)) > 0) 
			{
				#line 235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
					#line 236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
					result *= base;
				}
				#line 238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
				#line 239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				base *= base;
			}
			#line 241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return result * base;
		} else {
			#line 242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			{
				#line 243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				for (;;) 
				{
					#line 244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
					if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
						#line 245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
						result *= base;
						#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
						if (exp == Builtin::i32(1)) {
							#line 247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
							return result;
						}
					}
					#line 249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
					ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
					#line 250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
					base *= base;
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor_eq(__extension_Int16_220_i16 & __this , Builtin::u32 exp)  -> typename __extension_Int16_220_i16&
	{
		#line 255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_xor_xor)(__this, exp)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	
} namespace __extensions { using namespace System;
#line 311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline auto MaxMagnitudeNumber(__extension_Int16_258_i16 const& __this LIFETIMEBOUND, __extension_Int16_258_i16 rhs) noexcept -> const typename __extension_Int16_258_i16
	{
		#line 311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(MaxMagnitude)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline auto MinMagnitudeNumber(__extension_Int16_258_i16 const& __this LIFETIMEBOUND, __extension_Int16_258_i16 rhs) noexcept -> const typename __extension_Int16_258_i16
	{
		#line 342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(MinMagnitude)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToInt8(__extension_Int16_258_i16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i8
	{
		#line 356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i8>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToUInt8(__extension_Int16_258_i16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u8
	{
		#line 357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u8>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToInt16(__extension_Int16_258_i16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i16
	{
		#line 358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToUInt16(__extension_Int16_258_i16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u16
	{
		#line 359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u16>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToInt32(__extension_Int16_258_i16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i32
	{
		#line 360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToUInt32(__extension_Int16_258_i16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u32
	{
		#line 361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u32>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToInt64(__extension_Int16_258_i16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i64
	{
		#line 362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToUInt64(__extension_Int16_258_i16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u64
	{
		#line 363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u64>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToInt128(__extension_Int16_258_i16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i128
	{
		#line 364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToUInt128(__extension_Int16_258_i16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u128
	{
		#line 365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u128>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToIsize(__extension_Int16_258_i16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::isize
	{
		#line 366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NarrowToUsize(__extension_Int16_258_i16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::usize
	{
		#line 367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::usize>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto __static_getOne<__extension_Int16_258_i16>::get() -> const __extension_Int16_258_i16
	{
		#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::i16(1)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto __static_getZero<__extension_Int16_258_i16>::get() -> const __extension_Int16_258_i16
	{
		#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::i16(0)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto __static_getRadix<__extension_Int16_258_i16>::get() -> const Builtin::i32
	{
		#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(2)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getAbs(__extension_Int16_258_i16 const& __this ) -> const __extension_Int16_258_i16
	{
		#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)(__this.__ref()) ? -__this : __this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsCanonical(__extension_Int16_258_i16 const& __this ) -> const bool
	{
		#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsComplexNumber(__extension_Int16_258_i16 const& __this ) -> const bool
	{
		#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsEvenInteger(__extension_Int16_258_i16 const& __this ) -> const bool
	{
		#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY((__this & Builtin::i16(1)) == Builtin::i32(0)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsFinite(__extension_Int16_258_i16 const& __this ) -> const bool
	{
		#line 267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsImaginaryNumber(__extension_Int16_258_i16 const& __this ) -> const bool
	{
		#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsInfinity(__extension_Int16_258_i16 const& __this ) -> const bool
	{
		#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsInteger(__extension_Int16_258_i16 const& __this ) -> const bool
	{
		#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsNaN(__extension_Int16_258_i16 const& __this ) -> const bool
	{
		#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsNegative(__extension_Int16_258_i16 const& __this ) -> const bool
	{
		#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY((__this <=> Builtin::i32(0)) < 0); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsNegativeInfinity(__extension_Int16_258_i16 const& __this ) -> const bool
	{
		#line 273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsNormal(__extension_Int16_258_i16 const& __this ) -> const bool
	{
		#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(__this != Builtin::i32(0)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsOddInteger(__extension_Int16_258_i16 const& __this ) -> const bool
	{
		#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY((__this & Builtin::i16(1)) != Builtin::i32(0)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsPositive(__extension_Int16_258_i16 const& __this ) -> const bool
	{
		#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY((__this <=> Builtin::i32(0)) >= 0); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsPositiveInfinity(__extension_Int16_258_i16 const& __this ) -> const bool
	{
		#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsRealNumber(__extension_Int16_258_i16 const& __this ) -> const bool
	{
		#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsSubnormal(__extension_Int16_258_i16 const& __this ) -> const bool
	{
		#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsZero(__extension_Int16_258_i16 const& __this ) -> const bool
	{
		#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(__this == Builtin::i32(0)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	
} namespace __extensions { using namespace System;
#line 371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto __static_getMinusOne<__extension_Int16_370_i16>::get() -> const __extension_Int16_370_i16
	{
		#line 371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::i16(-1)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	
} namespace __extensions { using namespace System;
#line 395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto Max(__extension_Int16_374_i16 const& __this LIFETIMEBOUND, __extension_Int16_374_i16 rhs) noexcept -> const typename __extension_Int16_374_i16
	{
		#line 395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultMax)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto MaxNumber(__extension_Int16_374_i16 const& __this LIFETIMEBOUND, __extension_Int16_374_i16 rhs) noexcept -> const typename __extension_Int16_374_i16
	{
		#line 396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Max)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto Min(__extension_Int16_374_i16 const& __this LIFETIMEBOUND, __extension_Int16_374_i16 rhs) noexcept -> const typename __extension_Int16_374_i16
	{
		#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultMin)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto MinNumber(__extension_Int16_374_i16 const& __this LIFETIMEBOUND, __extension_Int16_374_i16 rhs) noexcept -> const typename __extension_Int16_374_i16
	{
		#line 398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Min)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto Clamp(__extension_Int16_374_i16 const& __this LIFETIMEBOUND, __extension_Int16_374_i16 min, __extension_Int16_374_i16 max)  -> const typename __extension_Int16_374_i16
	{
		#line 399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultClamp)(__this, min, max)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getSign(__extension_Int16_374_i16 const& __this ) -> const Builtin::i32
	{
		#line 375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultSign)(__this)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	
} namespace __extensions { using namespace System;
#line 456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto CheckedLog(__extension_Int16_402_i16 const& __this LIFETIMEBOUND, __extension_Int16_402_i16 base) noexcept -> const Builtin::Nullable<__extension_Int16_402_i16>
	{
		#line 458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if ((__this <=> Builtin::i32(0)) <= 0 || (base <=> Builtin::i32(1)) <= 0) {
			#line 459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return nullptr;
		}
		#line 462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (std::is_constant_evaluated()) {
			#line 463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			if (base == Builtin::i32(2)) {
				#line 464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				return ADV_UPCS(CheckedLog2)(__this.__ref());
			}
			#line 466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			if (base == Builtin::i32(10)) {
				#line 467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				return ADV_UPCS(CheckedLog10)(__this.__ref());
			}
		}
		#line 471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if ((__this <=> base) < 0) {
			#line 472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return Builtin::i16(0);
		}
		#line 475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		__extension_Int16_402_i16 n = Builtin::i16(1); 
		#line 476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype(base)> r = base; 
		#line 477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_bsl)(__this, base))> baseRatio = ADV_UFCS(_operator_bsl)(__this, base); 
		#line 478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		while ((r <=> baseRatio) <= 0) 
		{
			#line 479 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			++n;
			#line 480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			r *= base;
		}
		#line 483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return n;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto Midpoint(__extension_Int16_402_i16 const& __this LIFETIMEBOUND, __extension_Int16_402_i16 rhs) noexcept -> const typename __extension_Int16_402_i16
	{
		#line 501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		const Builtin::Auto<decltype(((__this ^ rhs) >> Builtin::i32(1)) + (__this & rhs))> result = ((__this ^ rhs) >> Builtin::i32(1)) + (__this & rhs); 
		#line 502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		const Builtin::Auto<decltype((result <=> Builtin::i32(0)) < 0)> correction = (result <=> Builtin::i32(0)) < 0; 
		#line 503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return result + ((Builtin::Cast<true, __extension_Int16_402_i16>(correction)) & (__this ^ rhs));
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto IsMultipleOf(__extension_Int16_402_i16 const& __this LIFETIMEBOUND, __extension_Int16_402_i16 rhs) noexcept -> const bool
	{
		#line 509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (rhs == Builtin::i32(0)) {
			#line 510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return __this == Builtin::i32(0);
		}
		#line 513 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (rhs == Builtin::i32(-1)) {
			#line 514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return Builtin::Boolean(true);
		}
		#line 517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return __this % rhs == Builtin::i32(0);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto __static_getAllBitsSet<__extension_Int16_402_i16>::get() -> const __extension_Int16_402_i16
	{
		#line 404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(MinusOne, Builtin::i16)()); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getIsPow2(__extension_Int16_402_i16 const& __this ) -> const bool
	{
		#line 407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsPositive)(__this.__ref()) && ADV_UPCS(PopCount)(__this.__ref()) == Builtin::i32(1)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getCheckedLog2(__extension_Int16_402_i16 const& __this ) -> const Builtin::Nullable<__extension_Int16_402_i16>
	{
		#line 413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if ((__this <=> Builtin::i32(0)) <= 0) {
			#line 414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return nullptr;
		}
		#line 417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return Builtin::Cast<true, __extension_Int16_402_i16>((ADV_USPCS(BitWidth, __extension_Int16_402_i16)() - Builtin::i32(1) - ADV_UPCS(LeadingZeroCount)(__this.__ref())));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getLog2(__extension_Int16_402_i16 const& __this ) -> const __extension_Int16_402_i16
	{
		#line 423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (const auto result = ADV_UPCS(CheckedLog2)(__this.__ref())) {
			{
				#line 423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				return result;
			}
		}
		#line 426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getCheckedLog10(__extension_Int16_402_i16 const& __this ) -> const Builtin::Nullable<__extension_Int16_402_i16>
	{
		#line 433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if ((__this <=> Builtin::i32(0)) <= 0) {
			#line 434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return nullptr;
		}
		#line 437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::u32>(__this))> val = Builtin::Cast<true, Builtin::u32>(__this); 
		#line 438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		constexpr Builtin::u32 C1 = Builtin::u32(0b01100000000000000000U) - Builtin::i32(10);
		#line 439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		constexpr Builtin::u32 C2 = Builtin::u32(0b10000000000000000000U) - Builtin::i32(100);
		#line 440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		constexpr Builtin::u32 C3 = Builtin::u32(0b11100000000000000000U) - Builtin::i32(1000);
		#line 441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		constexpr Builtin::u32 C4 = Builtin::u32(0b10000000000000000000U) - Builtin::i32(10000);
		#line 442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return Builtin::Cast<true, __extension_Int16_402_i16>(((((val + C1) & (val + C2)) ^ ((val + C3) & (val + C4))) >> Builtin::i32(17)));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getLog10(__extension_Int16_402_i16 const& __this ) -> const __extension_Int16_402_i16
	{
		#line 448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (const auto result = ADV_UPCS(CheckedLog10)(__this.__ref())) {
			{
				#line 448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				return result;
			}
		}
		#line 451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	
} namespace __extensions { using namespace System;
#line 524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_add_qst(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_Int16_521_i16>
	{
		#line 526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +? implemented only for integer types");
		#line 527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		__extension_Int16_521_i16 result{}; 
		#line 528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (Builtin::SafeAdd(__this, rhs, result)) {
			#line 529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return result;
		}
		#line 531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_add_qst_eq(__extension_Int16_521_i16 & __this , T rhs) noexcept -> typename __extension_Int16_521_i16&
	{
		#line 535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +?= implemented only for integer types");
		#line 536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (const auto result = ADV_UFCS(_operator_add_qst)(__this, rhs)) {
			{
				#line 536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				__this = result;
			}
		}
		#line 539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_add_ne(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int16_521_i16
	{
		#line 546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +! implemented only for integer types");
		#line 547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		__extension_Int16_521_i16 result{}; 
		#line 548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::StrictAdd(__this, rhs, result);
		#line 549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_add_ne_eq(__extension_Int16_521_i16 & __this , T rhs)  -> typename __extension_Int16_521_i16&
	{
		#line 551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_add_ne)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_add_mod(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_Int16_521_i16
	{
		#line 557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +% implemented only for integer types");
		#line 558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		__extension_Int16_521_i16 result{}; 
		#line 559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::WrappingAdd(__this, rhs, result);
		#line 560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_add_mod_eq(__extension_Int16_521_i16 & __this , T rhs) noexcept -> typename __extension_Int16_521_i16&
	{
		#line 562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_add_mod)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 566 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_add_or(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_Int16_521_i16
	{
		#line 568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +| implemented only for integer types");
		#line 569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		__extension_Int16_521_i16 result{}; 
		#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::SaturatingAdd(__this, rhs, result);
		#line 571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_add_or_eq(__extension_Int16_521_i16 & __this , T rhs) noexcept -> typename __extension_Int16_521_i16&
	{
		#line 573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_add_or)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_add_mod_qst(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<__extension_Int16_521_i16, bool>
	{
		#line 578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +%? implemented only for integer types");
		#line 579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		__extension_Int16_521_i16 result{}; 
		#line 580 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype(!Builtin::SafeAdd(__this, rhs, result))> overflowed = !Builtin::SafeAdd(__this, rhs, result); 
		#line 581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_add_add_qst(__extension_Int16_521_i16 & __this )  -> typename __extension_Int16_521_i16&
	{
		#line 585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_qst_eq)(__this, Builtin::i16(1))); 
	}
	inline constexpr auto _operator_add_add_qst_postfix(__extension_Int16_521_i16 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_add_add_qst)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 588 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_add_add_ne(__extension_Int16_521_i16 & __this )  -> typename __extension_Int16_521_i16&
	{
		#line 588 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_ne_eq)(__this, Builtin::i16(1))); 
	}
	inline constexpr auto _operator_add_add_ne_postfix(__extension_Int16_521_i16 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_add_add_ne)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 591 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_add_add_mod(__extension_Int16_521_i16 & __this )  -> typename __extension_Int16_521_i16&
	{
		#line 591 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_mod_eq)(__this, Builtin::i16(1))); 
	}
	inline constexpr auto _operator_add_add_mod_postfix(__extension_Int16_521_i16 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_add_add_mod)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_add_add_or(__extension_Int16_521_i16 & __this )  -> typename __extension_Int16_521_i16&
	{
		#line 594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_or_eq)(__this, Builtin::i16(1))); 
	}
	inline constexpr auto _operator_add_add_or_postfix(__extension_Int16_521_i16 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_add_add_or)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto CarryingAdd(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, __extension_Int16_521_i16 rhs, bool carry) noexcept -> const std::tuple<__extension_Int16_521_i16, bool>
	{
		#line 600 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		__extension_Int16_521_i16 result{}; 
		#line 601 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype(Builtin::CarryingAdd(__this, rhs, carry, result))> overflowed = Builtin::CarryingAdd(__this, rhs, carry, result); 
		#line 602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 607 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto BorrowingSub(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, __extension_Int16_521_i16 rhs, bool carry) noexcept -> const std::tuple<__extension_Int16_521_i16, bool>
	{
		#line 609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		__extension_Int16_521_i16 result{}; 
		#line 610 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype(Builtin::BorrowingSub(__this, rhs, carry, result))> overflowed = Builtin::BorrowingSub(__this, rhs, carry, result); 
		#line 611 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 616 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_sub_qst(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_Int16_521_i16>
	{
		#line 618 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -? implemented only for integer types");
		#line 619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		__extension_Int16_521_i16 result{}; 
		#line 620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (Builtin::SafeSubtract(__this, rhs, result)) {
			#line 621 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return result;
		}
		#line 623 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 625 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_sub_qst_eq(__extension_Int16_521_i16 & __this , T rhs) noexcept -> typename __extension_Int16_521_i16&
	{
		#line 627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -?= implemented only for integer types");
		#line 628 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (const auto result = ADV_UFCS(_operator_sub_qst)(__this, rhs)) {
			{
				#line 628 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				__this = result;
			}
		}
		#line 631 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_sub_ne(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int16_521_i16
	{
		#line 638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -! implemented only for integer types");
		#line 639 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		__extension_Int16_521_i16 result{}; 
		#line 640 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::StrictSubtract(__this, rhs, result);
		#line 641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 643 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_sub_ne_eq(__extension_Int16_521_i16 & __this , T rhs)  -> typename __extension_Int16_521_i16&
	{
		#line 643 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_sub_ne)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 647 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_sub_mod(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_Int16_521_i16
	{
		#line 649 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -% implemented only for integer types");
		#line 650 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		__extension_Int16_521_i16 result{}; 
		#line 651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::WrappingSubtract(__this, rhs, result);
		#line 652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_sub_mod_eq(__extension_Int16_521_i16 & __this , T rhs) noexcept -> typename __extension_Int16_521_i16&
	{
		#line 654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_sub_mod)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 658 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_sub_or(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_Int16_521_i16
	{
		#line 660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -| implemented only for integer types");
		#line 661 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		__extension_Int16_521_i16 result{}; 
		#line 662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::SaturatingSubtract(__this, rhs, result);
		#line 663 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 665 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_sub_or_eq(__extension_Int16_521_i16 & __this , T rhs) noexcept -> typename __extension_Int16_521_i16&
	{
		#line 665 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_sub_or)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 669 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_sub_mod_qst(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<__extension_Int16_521_i16, bool>
	{
		#line 670 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -%? implemented only for integer types");
		#line 671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		__extension_Int16_521_i16 result{}; 
		#line 672 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype(!Builtin::SafeSubtract(__this, rhs, result))> overflowed = !Builtin::SafeSubtract(__this, rhs, result); 
		#line 673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_sub_sub_qst(__extension_Int16_521_i16 & __this )  -> typename __extension_Int16_521_i16&
	{
		#line 677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_qst_eq)(__this, Builtin::i16(1))); 
	}
	inline constexpr auto _operator_sub_sub_qst_postfix(__extension_Int16_521_i16 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_sub_sub_qst)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_sub_sub_ne(__extension_Int16_521_i16 & __this )  -> typename __extension_Int16_521_i16&
	{
		#line 680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_ne_eq)(__this, Builtin::i16(1))); 
	}
	inline constexpr auto _operator_sub_sub_ne_postfix(__extension_Int16_521_i16 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_sub_sub_ne)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_sub_sub_mod(__extension_Int16_521_i16 & __this )  -> typename __extension_Int16_521_i16&
	{
		#line 683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_mod_eq)(__this, Builtin::i16(1))); 
	}
	inline constexpr auto _operator_sub_sub_mod_postfix(__extension_Int16_521_i16 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_sub_sub_mod)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_sub_sub_or(__extension_Int16_521_i16 & __this )  -> typename __extension_Int16_521_i16&
	{
		#line 686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_or_eq)(__this, Builtin::i16(1))); 
	}
	inline constexpr auto _operator_sub_sub_or_postfix(__extension_Int16_521_i16 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_sub_sub_or)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 690 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mul_qst(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_Int16_521_i16>
	{
		#line 692 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *? implemented only for integer types");
		#line 693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		__extension_Int16_521_i16 result{}; 
		#line 694 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (Builtin::SafeMultiply(__this, rhs, result)) {
			#line 695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return result;
		}
		#line 697 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 699 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mul_qst_eq(__extension_Int16_521_i16 & __this , T rhs) noexcept -> typename __extension_Int16_521_i16&
	{
		#line 701 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *?= implemented only for integer types");
		#line 702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (const auto result = ADV_UFCS(_operator_mul_qst)(__this, rhs)) {
			{
				#line 702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				__this = result;
			}
		}
		#line 705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 710 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mul_ne(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int16_521_i16
	{
		#line 712 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *! implemented only for integer types");
		#line 713 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		__extension_Int16_521_i16 result{}; 
		#line 714 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::StrictMultiply(__this, rhs, result);
		#line 715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 717 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mul_ne_eq(__extension_Int16_521_i16 & __this , T rhs)  -> typename __extension_Int16_521_i16&
	{
		#line 717 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_mul_ne)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 721 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mul_mod(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_Int16_521_i16
	{
		#line 723 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *% implemented only for integer types");
		#line 724 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		__extension_Int16_521_i16 result{}; 
		#line 725 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::WrappingMultiply(__this, rhs, result);
		#line 726 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 728 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mul_mod_eq(__extension_Int16_521_i16 & __this , T rhs) noexcept -> typename __extension_Int16_521_i16&
	{
		#line 728 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_mul_mod)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 732 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mul_or(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_Int16_521_i16
	{
		#line 734 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *| implemented only for integer types");
		#line 735 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		__extension_Int16_521_i16 result{}; 
		#line 736 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::SaturatingMultiply(__this, rhs, result);
		#line 737 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 739 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mul_or_eq(__extension_Int16_521_i16 & __this , T rhs) noexcept -> typename __extension_Int16_521_i16&
	{
		#line 739 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_mul_or)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mul_mod_qst(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<__extension_Int16_521_i16, bool>
	{
		#line 744 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *%? implemented only for integer types");
		#line 745 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		__extension_Int16_521_i16 result{}; 
		#line 746 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype(!Builtin::SafeMultiply(__this, rhs, result))> overflowed = !Builtin::SafeMultiply(__this, rhs, result); 
		#line 747 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 752 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_mul_gt(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, __extension_Int16_521_i16 rhs) noexcept -> const std::tuple<Builtin::u16, Builtin::i16>
	{
		#line 754 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		const auto& [low, high] = Builtin::WideningMul16(__this, rhs);
		#line 755 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return std::make_tuple(low, high);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 761 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto CarryingMul(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, __extension_Int16_521_i16 rhs, __extension_Int16_521_i16 carry) noexcept -> const std::tuple<Builtin::u16, Builtin::i16>
	{
		#line 763 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		const auto& [low, high] = Builtin::CarryingMul16(__this, rhs, carry);
		#line 764 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return std::make_tuple(low, high);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 769 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_qst(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_Int16_521_i16>
	{
		#line 771 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\? implemented only for integer types");
		#line 772 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		__extension_Int16_521_i16 result{}; 
		#line 773 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (Builtin::SafeDivide(__this, rhs, result)) {
			#line 774 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return result;
		}
		#line 776 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 778 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_qst_eq(__extension_Int16_521_i16 & __this , T rhs) noexcept -> typename __extension_Int16_521_i16&
	{
		#line 780 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\?= implemented only for integer types");
		#line 781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (const auto result = ADV_UFCS(_operator_bsl_qst)(__this, rhs)) {
			{
				#line 781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 782 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				__this = result;
			}
		}
		#line 784 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 790 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_ne(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int16_521_i16
	{
		#line 792 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\! implemented only for integer types");
		#line 793 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		__extension_Int16_521_i16 result{}; 
		#line 794 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::StrictDivide(__this, rhs, result);
		#line 795 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 797 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_ne_eq(__extension_Int16_521_i16 & __this , T rhs)  -> typename __extension_Int16_521_i16&
	{
		#line 797 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_bsl_ne)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 802 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_mod(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int16_521_i16
	{
		#line 804 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\% implemented only for integer types");
		#line 805 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		__extension_Int16_521_i16 result{}; 
		#line 806 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::WrappingDivide(__this, rhs, result);
		#line 807 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 809 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_eq(__extension_Int16_521_i16 & __this , T rhs)  -> typename __extension_Int16_521_i16&
	{
		#line 809 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_bsl_mod)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 814 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_or(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int16_521_i16
	{
		#line 816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\| implemented only for integer types");
		#line 817 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		__extension_Int16_521_i16 result{}; 
		#line 818 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::SaturatingDivide(__this, rhs, result);
		#line 819 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 821 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_or_eq(__extension_Int16_521_i16 & __this , T rhs)  -> typename __extension_Int16_521_i16&
	{
		#line 821 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_bsl_or)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 826 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_qst(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_Int16_521_i16, bool>
	{
		#line 827 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\%? implemented only for integer types");
		#line 828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		__extension_Int16_521_i16 result{}; 
		#line 829 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype(!Builtin::SafeDivide(__this, rhs, result))> overflowed = !Builtin::SafeDivide(__this, rhs, result); 
		#line 830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 835 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_Int16_521_i16>
	{
		#line 837 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\? implemented only for integer types");
		#line 838 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		__extension_Int16_521_i16 result{}; 
		#line 839 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (Builtin::SafeDivExact(__this, rhs, result)) {
			#line 840 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return result;
		}
		#line 842 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 845 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst_eq(__extension_Int16_521_i16 & __this , T rhs) noexcept -> typename __extension_Int16_521_i16&
	{
		#line 847 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\?= implemented only for integer types");
		#line 848 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (const auto result = ADV_UFCS(_operator_bsl_bsl_qst)(__this, rhs)) {
			{
				#line 848 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 849 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				__this = result;
			}
		}
		#line 851 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 856 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mod_qst(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_Int16_521_i16>
	{
		#line 858 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %? implemented only for integer types");
		#line 859 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		__extension_Int16_521_i16 result{}; 
		#line 860 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (Builtin::SafeModulus(__this, rhs, result)) {
			#line 861 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return result;
		}
		#line 863 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 865 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mod_qst_eq(__extension_Int16_521_i16 & __this , T rhs) noexcept -> typename __extension_Int16_521_i16&
	{
		#line 867 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %?= implemented only for integer types");
		#line 868 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (const auto result = ADV_UFCS(_operator_mod_qst)(__this, rhs)) {
			{
				#line 868 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 869 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				__this = result;
			}
		}
		#line 871 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 877 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mod_ne(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int16_521_i16
	{
		#line 879 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %! implemented only for integer types");
		#line 880 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		__extension_Int16_521_i16 result{}; 
		#line 881 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::StrictModulus(__this, rhs, result);
		#line 882 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 884 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mod_ne_eq(__extension_Int16_521_i16 & __this , T rhs)  -> typename __extension_Int16_521_i16&
	{
		#line 884 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_mod_ne)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 889 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mod_mod(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int16_521_i16
	{
		#line 891 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %% implemented only for integer types");
		#line 892 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		__extension_Int16_521_i16 result{}; 
		#line 893 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::WrappingModulus(__this, rhs, result);
		#line 894 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 896 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mod_mod_eq(__extension_Int16_521_i16 & __this , T rhs)  -> typename __extension_Int16_521_i16&
	{
		#line 896 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_mod_mod)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 901 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> inline constexpr auto _operator_mod_mod_qst(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_Int16_521_i16, bool>
	{
		#line 902 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %%? implemented only for integer types");
		#line 903 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		__extension_Int16_521_i16 result{}; 
		#line 904 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype(!Builtin::SafeModulus(__this, rhs, result))> overflowed = !Builtin::SafeModulus(__this, rhs, result); 
		#line 905 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 910 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_sub_qst(__extension_Int16_521_i16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::Nullable<__extension_Int16_521_i16>
	{
		#line 912 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		__extension_Int16_521_i16 result{}; 
		#line 913 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (Builtin::SafeNegate(__this, result)) {
			#line 914 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return result;
		}
		#line 916 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 920 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_sub_ne(__extension_Int16_521_i16 const& __this LIFETIMEBOUND)  -> const typename __extension_Int16_521_i16
	{
		#line 922 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		__extension_Int16_521_i16 result{}; 
		#line 923 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::StrictNegate(__this, result);
		#line 924 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 927 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_sub_mod(__extension_Int16_521_i16 const& __this LIFETIMEBOUND)  -> const typename __extension_Int16_521_i16
	{
		#line 929 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		__extension_Int16_521_i16 result{}; 
		#line 930 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::WrappingNegate(__this, result);
		#line 931 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 935 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_sub_or(__extension_Int16_521_i16 const& __this LIFETIMEBOUND)  -> const typename __extension_Int16_521_i16
	{
		#line 937 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		__extension_Int16_521_i16 result{}; 
		#line 938 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::SaturatingNegate(__this, result);
		#line 939 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 943 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_sub_mod_qst(__extension_Int16_521_i16 const& __this LIFETIMEBOUND)  -> const std::tuple<__extension_Int16_521_i16, bool>
	{
		#line 945 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		__extension_Int16_521_i16 result{}; 
		#line 946 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype(!Builtin::SafeNegate(__this, result))> overflowed = !Builtin::SafeNegate(__this, result); 
		#line 947 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 951 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_lt_lt_qst(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<__extension_Int16_521_i16>
	{
		#line 953 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, __extension_Int16_521_i16)()) < 0) {
			#line 954 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return Builtin::UncheckedShiftLeft(__this, amount);
		}
		#line 956 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 959 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_lt_lt_qst_eq(__extension_Int16_521_i16 & __this , Builtin::i32 amount) noexcept -> typename __extension_Int16_521_i16&
	{
		#line 961 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, __extension_Int16_521_i16)()) < 0) {
			#line 962 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return __this <<= amount;
		}
		#line 964 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 967 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_lt_lt_ne(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename __extension_Int16_521_i16
	{
		#line 969 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, __extension_Int16_521_i16)()) < 0) {
			#line 970 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return Builtin::UncheckedShiftLeft(__this, amount);
		}
		#line 972 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Throw(Builtin::IntegerOverflowException{});
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 975 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_lt_lt_ne_eq(__extension_Int16_521_i16 & __this , Builtin::i32 amount)  -> typename __extension_Int16_521_i16&
	{
		#line 975 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_lt_lt_ne)(__this, amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 977 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_lt_lt_mod(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename __extension_Int16_521_i16
	{
		#line 977 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::UncheckedShiftLeft(__this, amount & (ADV_USPCS(BitWidth, __extension_Int16_521_i16)() - Builtin::i32(1)))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 980 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_lt_lt_mod_eq(__extension_Int16_521_i16 & __this , Builtin::i32 amount) noexcept -> typename __extension_Int16_521_i16&
	{
		#line 980 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_lt_lt_mod)(__this, amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 982 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_lt_lt_mod_qst(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<__extension_Int16_521_i16, bool>
	{
		#line 982 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(std::make_tuple(ADV_UFCS(_operator_lt_lt_mod)(__this, amount), (amount <=> Builtin::i32(0)) < 0 || (amount <=> ADV_USPCS(BitWidth, __extension_Int16_521_i16)()) >= 0)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 985 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_gt_gt_qst(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<__extension_Int16_521_i16>
	{
		#line 987 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, __extension_Int16_521_i16)()) < 0) {
			#line 988 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return __this >> amount;
		}
		#line 990 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 993 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_gt_gt_qst_eq(__extension_Int16_521_i16 & __this , Builtin::i32 amount) noexcept -> typename __extension_Int16_521_i16&
	{
		#line 995 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, __extension_Int16_521_i16)()) < 0) {
			#line 996 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return __this >>= amount;
		}
		#line 998 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1001 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_gt_gt_ne(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename __extension_Int16_521_i16
	{
		#line 1003 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, __extension_Int16_521_i16)()) < 0) {
			#line 1004 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return __this >> amount;
		}
		#line 1006 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Throw(Builtin::IntegerOverflowException{});
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1009 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_gt_gt_ne_eq(__extension_Int16_521_i16 & __this , Builtin::i32 amount)  -> typename __extension_Int16_521_i16&
	{
		#line 1009 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_gt_gt_ne)(__this, amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1011 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_gt_gt_mod(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename __extension_Int16_521_i16
	{
		#line 1011 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::UncheckedShiftRight(__this, amount & (ADV_USPCS(BitWidth, __extension_Int16_521_i16)() - Builtin::i32(1)))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1014 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_gt_gt_mod_eq(__extension_Int16_521_i16 & __this , Builtin::i32 amount) noexcept -> typename __extension_Int16_521_i16&
	{
		#line 1014 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_gt_gt_mod)(__this, amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1016 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_gt_gt_mod_qst(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<__extension_Int16_521_i16, bool>
	{
		#line 1016 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(std::make_tuple(ADV_UFCS(_operator_gt_gt_mod)(__this, amount), (amount <=> Builtin::i32(0)) < 0 || (amount <=> ADV_USPCS(BitWidth, __extension_Int16_521_i16)()) >= 0)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1022 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor_qst(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const Builtin::Nullable<__extension_Int16_521_i16>
	{
		#line 1024 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1026 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return Builtin::i16(1);
		}
		#line 1029 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype(__this)> base = __this; 
		#line 1030 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype(Builtin::i16(1))> result = Builtin::i16(1); 
		#line 1032 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		for (;;) 
		{
			#line 1033 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 1034 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				if (const auto mul = ADV_UFCS(_operator_mul_qst)(result, base)) {
					{
						#line 1034 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
						auto __tmp0 = *mul; const auto& mul = __tmp0;
						
						#line 1035 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
						result = mul;
					}
				} else {
					#line 1036 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
					{
						#line 1037 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
						return nullptr;
					}
				}
				#line 1039 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				if (exp == Builtin::i32(1)) {
					#line 1040 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
					return result;
				}
			}
			#line 1042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
			#line 1043 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			if (const auto mul = ADV_UFCS(_operator_mul_qst)(base, base)) {
				{
					#line 1043 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
					auto __tmp0 = *mul; const auto& mul = __tmp0;
					
					#line 1044 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
					base = mul;
				}
			} else {
				#line 1045 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				{
					#line 1046 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
					return nullptr;
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1051 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor_qst_eq(__extension_Int16_521_i16 & __this , Builtin::u32 exp) noexcept -> typename __extension_Int16_521_i16&
	{
		#line 1053 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (auto result = ADV_UFCS(_operator_xor_xor_qst)(__this, exp)) {
			{
				#line 1053 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 1054 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				return __this = result;
			}
		}
		#line 1056 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1059 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor_ne(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename __extension_Int16_521_i16
	{
		#line 1061 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1063 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return Builtin::i16(1);
		}
		#line 1066 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype(__this)> base = __this; 
		#line 1067 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype(Builtin::i16(1))> result = Builtin::i16(1); 
		#line 1069 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		for (;;) 
		{
			#line 1070 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 1071 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				ADV_UFCS(_operator_mul_ne_eq)(result, base);
				#line 1072 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				if (exp == Builtin::i32(1)) {
					#line 1073 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
					return result;
				}
			}
			#line 1075 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
			#line 1076 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			ADV_UFCS(_operator_mul_ne_eq)(base, base);
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1080 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor_ne_eq(__extension_Int16_521_i16 & __this , Builtin::u32 exp)  -> typename __extension_Int16_521_i16&
	{
		#line 1080 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_xor_xor_ne)(__this, exp)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1082 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor_mod(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename __extension_Int16_521_i16
	{
		#line 1084 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1086 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return Builtin::i16(1);
		}
		#line 1089 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype(__this)> base = __this; 
		#line 1090 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype(Builtin::i16(1))> result = Builtin::i16(1); 
		#line 1092 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (std::is_constant_evaluated()) {
			#line 1093 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			while ((exp <=> Builtin::i32(1)) > 0) 
			{
				#line 1094 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
					#line 1095 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
					ADV_UFCS(_operator_mul_mod_eq)(result, base);
				}
				#line 1097 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
				#line 1098 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				ADV_UFCS(_operator_mul_mod_eq)(base, base);
			}
			#line 1100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return ADV_UFCS(_operator_mul_mod)(result, base);
		} else {
			#line 1101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			{
				#line 1102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				for (;;) 
				{
					#line 1103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
					if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
						#line 1104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
						ADV_UFCS(_operator_mul_mod_eq)(result, base);
						#line 1105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
						if (exp == Builtin::i32(1)) {
							#line 1106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
							return result;
						}
					}
					#line 1108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
					ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
					#line 1109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
					ADV_UFCS(_operator_mul_mod_eq)(base, base);
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor_mod_eq(__extension_Int16_521_i16 & __this , Builtin::u32 exp) noexcept -> typename __extension_Int16_521_i16&
	{
		#line 1114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_xor_xor_mod)(__this, exp)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor_or(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename __extension_Int16_521_i16
	{
		#line 1118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (const auto result = ADV_UFCS(_operator_xor_xor_qst)(__this, exp)) {
			{
				#line 1118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 1119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				return result;
			}
		}
		#line 1122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return (ADV_UPCS(IsNegative)(__this.__ref()) && exp % Builtin::i32(2) == Builtin::i32(1)) ? ADV_USPCS(MinValue, __extension_Int16_521_i16)() : ADV_USPCS(MaxValue, __extension_Int16_521_i16)();
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor_or_eq(__extension_Int16_521_i16 & __this , Builtin::u32 exp) noexcept -> typename __extension_Int16_521_i16&
	{
		#line 1125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_xor_xor_or)(__this, exp)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto _operator_xor_xor_mod_qst(__extension_Int16_521_i16 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const std::tuple<__extension_Int16_521_i16, bool>
	{
		#line 1129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return std::make_tuple(Builtin::i16(1), Builtin::Boolean(false));
		}
		#line 1134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype(__this)> base = __this; 
		#line 1135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype(Builtin::i16(1))> result = Builtin::i16(1); 
		#line 1136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype(Builtin::Boolean(false))> overflowed = Builtin::Boolean(false); 
		#line 1137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype(std::make_tuple(Builtin::i16(0), Builtin::Boolean(false)))> tmp = std::make_tuple(Builtin::i16(0), Builtin::Boolean(false)); 
		#line 1139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		for (;;) 
		{
			#line 1140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 1141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				tmp = ADV_UFCS(_operator_mul_mod_qst)(result, base);
				#line 1142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				if (exp == Builtin::i32(1)) {
					#line 1143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
					std::get<1>(tmp) |= overflowed;
					#line 1144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
					return tmp;
				}
				#line 1146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				result = std::get<0>(tmp);
				#line 1147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				overflowed |= std::get<1>(tmp);
			}
			#line 1149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
			#line 1150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			tmp = ADV_UFCS(_operator_mul_mod_qst)(base, base);
			#line 1151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			base = std::get<0>(tmp);
			#line 1152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			overflowed |= std::get<1>(tmp);
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getCheckedAbs(__extension_Int16_521_i16 const& __this ) -> const Builtin::Nullable<__extension_Int16_521_i16>
	{
		#line 1158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)(__this.__ref()) ? ADV_UFCS(_operator_sub_qst)(__this) : __this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getStrictAbs(__extension_Int16_521_i16 const& __this ) -> const __extension_Int16_521_i16
	{
		#line 1161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)(__this.__ref()) ? ADV_UFCS(_operator_sub_ne)(__this) : __this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getWrappingAbs(__extension_Int16_521_i16 const& __this ) -> const __extension_Int16_521_i16
	{
		#line 1164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)(__this.__ref()) ? ADV_UFCS(_operator_sub_mod)(__this) : __this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getSaturatingAbs(__extension_Int16_521_i16 const& __this ) -> const __extension_Int16_521_i16
	{
		#line 1167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)(__this.__ref()) ? ADV_UFCS(_operator_sub_or)(__this) : __this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getOverflowingAbs(__extension_Int16_521_i16 const& __this ) -> const std::tuple<__extension_Int16_521_i16, bool>
	{
		#line 1172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (ADV_UPCS(IsNegative)(__this.__ref())) {
			#line 1173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return ADV_UFCS(_operator_sub_mod_qst)(__this);
		}
		#line 1175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return std::make_tuple(__this, Builtin::Boolean(false));
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	
} namespace __extensions { using namespace System;
#line 1224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto NextMultipleOf(__extension_Int16_1179_i16 const& __this LIFETIMEBOUND, __extension_Int16_1179_i16 rhs)  -> const typename __extension_Int16_1179_i16
	{
		#line 1226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (rhs == Builtin::i32(-1)) {
			#line 1227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return __this;
		}
		#line 1230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		const Builtin::Auto<decltype(__this % rhs)> remainder = __this % rhs; 
		#line 1231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		const Builtin::Auto<decltype(((remainder <=> Builtin::i32(0)) > 0 && (rhs <=> Builtin::i32(0)) < 0) || ((remainder <=> Builtin::i32(0)) < 0 && (rhs <=> Builtin::i32(0)) > 0) ? remainder + rhs : remainder)> mod = ((remainder <=> Builtin::i32(0)) > 0 && (rhs <=> Builtin::i32(0)) < 0) || ((remainder <=> Builtin::i32(0)) < 0 && (rhs <=> Builtin::i32(0)) > 0) ? remainder + rhs : remainder; 
		#line 1234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return mod == Builtin::i32(0) ? __this : __this + (rhs - mod);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto CheckedNextMultipleOf(__extension_Int16_1179_i16 const& __this LIFETIMEBOUND, __extension_Int16_1179_i16 rhs) noexcept -> const Builtin::Nullable<__extension_Int16_1179_i16>
	{
		#line 1242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (rhs == Builtin::i32(-1)) {
			#line 1243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return __this;
		}
		#line 1246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		__extension_Int16_1179_i16 remainder{}; 
		#line 1247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (const auto r = ADV_UFCS(_operator_mod_qst)(__this, rhs)) {
			{
				#line 1247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				auto __tmp0 = *r; const auto& r = __tmp0;
				
				#line 1248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				remainder = r;
			}
		} else {
			#line 1249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return nullptr;
		}
		#line 1251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		const Builtin::Auto<decltype(((remainder <=> Builtin::i32(0)) > 0 && (rhs <=> Builtin::i32(0)) < 0) || ((remainder <=> Builtin::i32(0)) < 0 && (rhs <=> Builtin::i32(0)) > 0) ? remainder + rhs : remainder)> mod = ((remainder <=> Builtin::i32(0)) > 0 && (rhs <=> Builtin::i32(0)) < 0) || ((remainder <=> Builtin::i32(0)) < 0 && (rhs <=> Builtin::i32(0)) > 0) ? remainder + rhs : remainder; 
		#line 1254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (mod == Builtin::i32(0)) {
			#line 1255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return __this;
		}
		#line 1257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return ADV_UFCS(_operator_add_qst)(__this, (rhs - mod));
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto __static_getIsSigned<__extension_Int16_1179_i16>::get() -> const bool
	{
		#line 1180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getTrailingZeroCount(__extension_Int16_1179_i16 const& __this ) -> const Builtin::u32
	{
		#line 1182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::TrailingZeroCount(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getTrailingOneCount(__extension_Int16_1179_i16 const& __this ) -> const Builtin::u32
	{
		#line 1183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::TrailingZeroCount(ADV_UFCS(_operator_not)(__this))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getByteCount(__extension_Int16_1179_i16 const& __this ) -> const Builtin::u32
	{
		#line 1184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u32>(Builtin::usize(sizeof(__extension_Int16_1179_i16)))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getMinimalBitWidth(__extension_Int16_1179_i16 const& __this ) -> const Builtin::u32
	{
		#line 1185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(BitWidth, __extension_Int16_1179_i16)() - ADV_UPCS(LeadingZeroCount)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline auto getIsqrt(__extension_Int16_1179_i16 const& __this ) -> const __extension_Int16_1179_i16
	{
		#line 1202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (const auto result = ADV_UPCS(CheckedIsqrt)(__this.__ref())) {
			{
				#line 1202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 1203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				return result;
			}
		}
		#line 1205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getLog2Ceiling(__extension_Int16_1179_i16 const& __this ) -> const __extension_Int16_1179_i16
	{
		#line 1212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Auto<decltype(ADV_UPCS(Log2)(__this.__ref()))> result = ADV_UPCS(Log2)(__this.__ref()); 
		#line 1213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (ADV_UPCS(PopCount)(__this.__ref()) != Builtin::i32(1)) {
			#line 1214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			++result;
		}
		#line 1217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return result;
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getPrevPow2(__extension_Int16_1179_i16 const& __this ) -> const __extension_Int16_1179_i16
	{
		#line 1263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if ((__this <=> Builtin::i32(1)) <= 0) {
			#line 1264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return Builtin::i16(0);
		}
		#line 1267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return ADV_USPCS(One, __extension_Int16_1179_i16)() << (ADV_UPCS(MinimalBitWidth)(__this.__ref()) - Builtin::u8(1U));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getNextPow2(__extension_Int16_1179_i16 const& __this ) -> const __extension_Int16_1179_i16
	{
		#line 1274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if ((__this <=> Builtin::i32(1)) <= 0) {
			#line 1275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return Builtin::i16(0);
		}
		#line 1278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		const Builtin::Auto<decltype(__this - Builtin::i16(1))> p = __this - Builtin::i16(1); 
		#line 1279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return (ADV_USPCS(AllBitsSet, __extension_Int16_1179_i16)() >> ADV_UPCS(LeadingZeroCount)(p.__ref())) + Builtin::i16(1);
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getCheckedNextPow2(__extension_Int16_1179_i16 const& __this ) -> const Builtin::Nullable<__extension_Int16_1179_i16>
	{
		#line 1286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if ((__this <=> Builtin::i32(1)) <= 0) {
			#line 1287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return Builtin::i16(0);
		}
		#line 1290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		const Builtin::Auto<decltype(__this - Builtin::i16(1))> p = __this - Builtin::i16(1); 
		#line 1291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return ADV_UFCS(_operator_add_qst)((ADV_USPCS(AllBitsSet, __extension_Int16_1179_i16)() >> ADV_UPCS(LeadingZeroCount)(p.__ref())), Builtin::i16(1));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getWrappingNextPow2(__extension_Int16_1179_i16 const& __this ) -> const __extension_Int16_1179_i16
	{
		#line 1298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if ((__this <=> Builtin::i32(1)) <= 0) {
			#line 1299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return Builtin::i16(0);
		}
		#line 1302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		const Builtin::Auto<decltype(__this - Builtin::i16(1))> p = __this - Builtin::i16(1); 
		#line 1303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return ADV_UFCS(_operator_add_mod)((ADV_USPCS(AllBitsSet, __extension_Int16_1179_i16)() >> ADV_UPCS(LeadingZeroCount)(p.__ref())), Builtin::i16(1));
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	
} namespace __extensions { using namespace System;
#line 1340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto RotateLeft(__extension_Int16_1307_i16 const& __this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename __extension_Int16_1307_i16
	{
		#line 1340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::BitsRotateLeft(__this, shiftAmount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto RotateRight(__extension_Int16_1307_i16 const& __this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename __extension_Int16_1307_i16
	{
		#line 1341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::BitsRotateRight(__this, shiftAmount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto __static_getBitWidth<__extension_Int16_1307_i16>::get() -> const Builtin::u32
	{
		#line 1308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(16U)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getLeadingZeroCount(__extension_Int16_1307_i16 const& __this ) -> const Builtin::u32
	{
		#line 1310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::LeadingZeroCount(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getLeadingOneCount(__extension_Int16_1307_i16 const& __this ) -> const Builtin::u32
	{
		#line 1311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::LeadingZeroCount(ADV_UFCS(_operator_not)(__this))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getPopCount(__extension_Int16_1307_i16 const& __this ) -> const Builtin::u32
	{
		#line 1312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::PopCount(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getZeroCount(__extension_Int16_1307_i16 const& __this ) -> const Builtin::u32
	{
		#line 1313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::PopCount(ADV_UFCS(_operator_not)(__this))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getByteSwapped(__extension_Int16_1307_i16 const& __this ) -> const __extension_Int16_1307_i16
	{
		#line 1314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i16>(Builtin::ByteSwap16(ADV_UFCS(NarrowToUInt16)(__this.__ref())))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getBigEndian(__extension_Int16_1307_i16 const& __this ) -> const __extension_Int16_1307_i16
	{
		#line 1317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if constexpr (Builtin::IsLittleEndian()) {
			#line 1318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return ADV_UPCS(ByteSwapped)(__this.__ref());
		}
		#line 1320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return __this;
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getLittleEndian(__extension_Int16_1307_i16 const& __this ) -> const __extension_Int16_1307_i16
	{
		#line 1324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if constexpr (Builtin::IsBigEndian()) {
			#line 1325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return ADV_UPCS(ByteSwapped)(__this.__ref());
		}
		#line 1327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return __this;
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getReverseBits(__extension_Int16_1307_i16 const& __this ) -> const __extension_Int16_1307_i16
	{
		#line 1329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::ReverseBits16(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getShortestBitLength(__extension_Int16_1307_i16 const& __this ) -> const Builtin::u32
	{
		#line 1333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if ((__this <=> Builtin::i32(0)) >= 0) {
			#line 1334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return ADV_USPCS(BitWidth, __extension_Int16_1307_i16)() - ADV_UPCS(LeadingZeroCount)(__this.__ref());
		}
		#line 1337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return ADV_USPCS(BitWidth, __extension_Int16_1307_i16)() + Builtin::u32(1U) - ADV_UPCS(LeadingOneCount)(__this.__ref());
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	
} namespace __extensions { using namespace System;
#line 1353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto IsGreaterThanAsUnsigned(__extension_Int16_1345_i16 const& __this LIFETIMEBOUND, __extension_Int16_1345_i16 rhs) noexcept -> const bool
	{
		#line 1353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY((ADV_UFCS(NarrowToUInt16)(__this.__ref()) <=> ADV_UFCS(NarrowToUInt16)(rhs.__ref())) > 0); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto __static_getMaxDigitCount<__extension_Int16_1345_i16>::get() -> const Builtin::i32
	{
		#line 1346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(5)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto __static_getMaxHexDigitCount<__extension_Int16_1345_i16>::get() -> const Builtin::i32
	{
		#line 1347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(4)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto __static_getMaxValueDiv10<__extension_Int16_1345_i16>::get() -> const __extension_Int16_1345_i16
	{
		#line 1348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl)(ADV_USPCS(MaxValue, Builtin::i16)(), Builtin::i32(10))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getMultiplyBy10(__extension_Int16_1345_i16 const& __this ) -> const __extension_Int16_1345_i16
	{
		#line 1350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_mod)(__this, Builtin::i16(10))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	inline constexpr auto getMultiplyBy16(__extension_Int16_1345_i16 const& __this ) -> const __extension_Int16_1345_i16
	{
		#line 1351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_mod)(__this, Builtin::i16(16))); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	

}