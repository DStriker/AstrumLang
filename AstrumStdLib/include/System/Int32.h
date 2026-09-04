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
namespace __Unsafe {} namespace __Int32$Protected__Unsafe {}
//###############################################################################
//# Global type aliases
//###############################################################################
#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
using Int32 = Builtin::i32;
//###############################################################################
//# Type definitions
//###############################################################################
	} namespace $extensions { using namespace System;
#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	using $extension_Int32_14_i32 = Builtin::i32;
	#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE(IMinMaxValue, IMinMaxValue);
	#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class __TT> struct $static_getMinValue; template<> struct $static_getMinValue<$extension_Int32_14_i32> { static inline constexpr auto get() -> const $extension_Int32_14_i32; };
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class __TT> struct $static_getMaxValue; template<> struct $static_getMaxValue<$extension_Int32_14_i32> { static inline constexpr auto get() -> const $extension_Int32_14_i32; };
	#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int32_14_i32, IMinMaxValue, IMinMaxValue, $extension_Int32_14_i32);
	} namespace System{
using $extensions::$static_getMinValue;
using $extensions::$static_getMaxValue;

		} namespace $extensions { using namespace System;
#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	using $extension_Int32_19_i32 = Builtin::i32;
	#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ASTRUMSTD_API auto _operator_eq_eq_mul($extension_Int32_19_i32 const& $this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool;
	#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto operator<=>($extension_Int32_19_i32 const& $this LIFETIMEBOUND, Builtin::Nullable<$extension_Int32_19_i32> rhs) noexcept -> const Builtin::i32;
	#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_gt($extension_Int32_19_i32 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_Int32_19_i32;
	#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_gt_eq($extension_Int32_19_i32 & $this , Builtin::i32 amount)  -> typename $extension_Int32_19_i32&;
	#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_lt_lt_bsl($extension_Int32_19_i32 const& $this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename $extension_Int32_19_i32;
	#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_lt_lt_bsl_eq($extension_Int32_19_i32 & $this , Builtin::u32 amount) noexcept -> typename $extension_Int32_19_i32&;
	#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_bsl($extension_Int32_19_i32 const& $this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename $extension_Int32_19_i32;
	#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_bsl_eq($extension_Int32_19_i32 & $this , Builtin::u32 amount) noexcept -> typename $extension_Int32_19_i32&;
	#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getHashCode($extension_Int32_19_i32 const& $this ) -> const Builtin::u64;
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
#line 72 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	using $extension_Int32_72_i32 = Builtin::i32;
	#line 72 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE(IAbstractComparable, IAbstractComparable);
	#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ASTRUMSTD_API auto _operator_lt_eq_gt_mul($extension_Int32_72_i32 const& $this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32;
	#line 72 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int32_72_i32, IAbstractComparable, IAbstractComparable, $extension_Int32_72_i32);
	} namespace System{
using $extensions::_operator_lt_eq_gt_mul;

		} namespace $extensions { using namespace System;
#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	using $extension_Int32_87_i32 = Builtin::i32;
	#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE(IConvertible, IConvertible);
	#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToBoolean($extension_Int32_87_i32 const& $this LIFETIMEBOUND) noexcept -> const bool;
	#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToInt8($extension_Int32_87_i32 const& $this LIFETIMEBOUND)  -> const Builtin::i8;
	#line 95 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToUInt8($extension_Int32_87_i32 const& $this LIFETIMEBOUND)  -> const Builtin::u8;
	#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToInt16($extension_Int32_87_i32 const& $this LIFETIMEBOUND)  -> const Builtin::i16;
	#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToUInt16($extension_Int32_87_i32 const& $this LIFETIMEBOUND)  -> const Builtin::u16;
	#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToInt32($extension_Int32_87_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i32;
	#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToUInt32($extension_Int32_87_i32 const& $this LIFETIMEBOUND)  -> const Builtin::u32;
	#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToInt64($extension_Int32_87_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i64;
	#line 121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToUInt64($extension_Int32_87_i32 const& $this LIFETIMEBOUND)  -> const Builtin::u64;
	#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToInt128($extension_Int32_87_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i128;
	#line 128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToUInt128($extension_Int32_87_i32 const& $this LIFETIMEBOUND)  -> const Builtin::u128;
	#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToIsize($extension_Int32_87_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::isize;
	#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToUsize($extension_Int32_87_i32 const& $this LIFETIMEBOUND)  -> const Builtin::usize;
	#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToFloat32($extension_Int32_87_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::f32;
	#line 142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToFloat64($extension_Int32_87_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::f64;
	#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToByte($extension_Int32_87_i32 const& $this LIFETIMEBOUND)  -> const Builtin::u8;
	#line 144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToChar($extension_Int32_87_i32 const& $this LIFETIMEBOUND)  -> const Builtin::char32;
	#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int32_87_i32, IConvertible, IConvertible, $extension_Int32_87_i32);
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
#line 154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	using $extension_Int32_154_i32 = Builtin::i32;
	#line 154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE(IDivisibleArithmetic, IDivisibleArithmetic);
	#line 156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_div_mod($extension_Int32_154_i32 const& $this LIFETIMEBOUND, T rhs)  -> const Builtin::Tuple<$extension_Int32_154_i32, $extension_Int32_154_i32>;
	#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_div_not($extension_Int32_154_i32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int32_154_i32;
	#line 169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_div_not_eq($extension_Int32_154_i32 & $this , auto rhs)  -> typename $extension_Int32_154_i32&;
	#line 171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_div_lt($extension_Int32_154_i32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int32_154_i32;
	#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_div_lt_eq($extension_Int32_154_i32 & $this , auto rhs)  -> typename $extension_Int32_154_i32&;
	#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mod_lt($extension_Int32_154_i32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int32_154_i32;
	#line 195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_mod_lt_eq($extension_Int32_154_i32 & $this , auto rhs)  -> typename $extension_Int32_154_i32&;
	#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_div_gt($extension_Int32_154_i32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int32_154_i32;
	#line 211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_div_gt_eq($extension_Int32_154_i32 & $this , auto rhs)  -> typename $extension_Int32_154_i32&;
	#line 154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int32_154_i32, IDivisibleArithmetic, IDivisibleArithmetic, $extension_Int32_154_i32);
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
#line 214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	using $extension_Int32_214_i32 = Builtin::i32;
	#line 214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE(IIntegerDivisibleArithmetic, IIntegerDivisibleArithmetic);
	#line 216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl($extension_Int32_214_i32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int32_214_i32;
	#line 218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_eq($extension_Int32_214_i32 & $this , T rhs)  -> typename $extension_Int32_214_i32&;
	#line 223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl($extension_Int32_214_i32 const& $this LIFETIMEBOUND, T rhs)  -> const Builtin::Nullable<$extension_Int32_214_i32>;
	#line 214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int32_214_i32, IIntegerDivisibleArithmetic, IIntegerDivisibleArithmetic, $extension_Int32_214_i32);
	} namespace System{
using $extensions::_operator_bsl;
using $extensions::_operator_bsl_eq;
using $extensions::_operator_bsl_bsl;

		} namespace $extensions { using namespace System;
#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	using $extension_Int32_234_i32 = Builtin::i32;
	#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE(IIntegerPowerArithmetic, IIntegerPowerArithmetic);
	#line 237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor($extension_Int32_234_i32 const& $this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename $extension_Int32_234_i32;
	#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor_eq($extension_Int32_234_i32 & $this , Builtin::u32 exp)  -> typename $extension_Int32_234_i32&;
	#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int32_234_i32, IIntegerPowerArithmetic, IIntegerPowerArithmetic, $extension_Int32_234_i32);
	} namespace System{
using $extensions::_operator_xor_xor;
using $extensions::_operator_xor_xor_eq;

		} namespace $extensions { using namespace System;
#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	using $extension_Int32_272_i32 = Builtin::i32;
	#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE(INumberBase, INumberBase);
	#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ASTRUMSTD_API auto MaxMagnitude($extension_Int32_272_i32 const& $this LIFETIMEBOUND, $extension_Int32_272_i32 rhs) noexcept -> const typename $extension_Int32_272_i32;
	#line 325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline auto MaxMagnitudeNumber($extension_Int32_272_i32 const& $this LIFETIMEBOUND, $extension_Int32_272_i32 rhs) noexcept -> const typename $extension_Int32_272_i32;
	#line 327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ASTRUMSTD_API auto MinMagnitude($extension_Int32_272_i32 const& $this LIFETIMEBOUND, $extension_Int32_272_i32 rhs) noexcept -> const typename $extension_Int32_272_i32;
	#line 356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline auto MinMagnitudeNumber($extension_Int32_272_i32 const& $this LIFETIMEBOUND, $extension_Int32_272_i32 rhs) noexcept -> const typename $extension_Int32_272_i32;
	#line 358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ASTRUMSTD_API auto Parse($extension_Int32_272_i32 const& $this LIFETIMEBOUND, Builtin::Str input)  -> const typename $extension_Int32_272_i32;
	#line 363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ASTRUMSTD_API auto TryParse($extension_Int32_272_i32 const& $this LIFETIMEBOUND, Builtin::Str input) noexcept -> const Builtin::Nullable<$extension_Int32_272_i32>;
	#line 370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToInt8($extension_Int32_272_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i8;
	#line 371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToUInt8($extension_Int32_272_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u8;
	#line 372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToInt16($extension_Int32_272_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i16;
	#line 373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToUInt16($extension_Int32_272_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u16;
	#line 374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToInt32($extension_Int32_272_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i32;
	#line 375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToUInt32($extension_Int32_272_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u32;
	#line 376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToInt64($extension_Int32_272_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i64;
	#line 377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToUInt64($extension_Int32_272_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u64;
	#line 378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToInt128($extension_Int32_272_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i128;
	#line 379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToUInt128($extension_Int32_272_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u128;
	#line 380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToIsize($extension_Int32_272_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::isize;
	#line 381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToUsize($extension_Int32_272_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::usize;
	#line 273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class __TT> struct $static_getOne; template<> struct $static_getOne<$extension_Int32_272_i32> { static inline constexpr auto get() -> const $extension_Int32_272_i32; };
	#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class __TT> struct $static_getZero; template<> struct $static_getZero<$extension_Int32_272_i32> { static inline constexpr auto get() -> const $extension_Int32_272_i32; };
	#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class __TT> struct $static_getRadix; template<> struct $static_getRadix<$extension_Int32_272_i32> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getAbs($extension_Int32_272_i32 const& $this ) -> const $extension_Int32_272_i32;
	#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsCanonical($extension_Int32_272_i32 const& $this ) -> const bool;
	#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsComplexNumber($extension_Int32_272_i32 const& $this ) -> const bool;
	#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsEvenInteger($extension_Int32_272_i32 const& $this ) -> const bool;
	#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsFinite($extension_Int32_272_i32 const& $this ) -> const bool;
	#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsImaginaryNumber($extension_Int32_272_i32 const& $this ) -> const bool;
	#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsInfinity($extension_Int32_272_i32 const& $this ) -> const bool;
	#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsInteger($extension_Int32_272_i32 const& $this ) -> const bool;
	#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsNaN($extension_Int32_272_i32 const& $this ) -> const bool;
	#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsNegative($extension_Int32_272_i32 const& $this ) -> const bool;
	#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsNegativeInfinity($extension_Int32_272_i32 const& $this ) -> const bool;
	#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsNormal($extension_Int32_272_i32 const& $this ) -> const bool;
	#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsOddInteger($extension_Int32_272_i32 const& $this ) -> const bool;
	#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsPositive($extension_Int32_272_i32 const& $this ) -> const bool;
	#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsPositiveInfinity($extension_Int32_272_i32 const& $this ) -> const bool;
	#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsRealNumber($extension_Int32_272_i32 const& $this ) -> const bool;
	#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsSubnormal($extension_Int32_272_i32 const& $this ) -> const bool;
	#line 294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsZero($extension_Int32_272_i32 const& $this ) -> const bool;
	#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int32_272_i32, INumberBase, INumberBase, $extension_Int32_272_i32);
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
#line 384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	using $extension_Int32_384_i32 = Builtin::i32;
	#line 384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE(ISignedNumber, ISignedNumber);
	#line 385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class __TT> struct $static_getMinusOne; template<> struct $static_getMinusOne<$extension_Int32_384_i32> { static inline constexpr auto get() -> const $extension_Int32_384_i32; };
	#line 384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int32_384_i32, ISignedNumber, ISignedNumber, $extension_Int32_384_i32);
	} namespace System{
using $extensions::$static_getMinusOne;

		} namespace $extensions { using namespace System;
#line 388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	using $extension_Int32_388_i32 = Builtin::i32;
	#line 388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE(INumber, INumber);
	#line 391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ASTRUMSTD_API auto CopySign($extension_Int32_388_i32 const& $this LIFETIMEBOUND, $extension_Int32_388_i32 sign)  -> const typename $extension_Int32_388_i32;
	#line 409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto Max($extension_Int32_388_i32 const& $this LIFETIMEBOUND, $extension_Int32_388_i32 rhs) noexcept -> const typename $extension_Int32_388_i32;
	#line 410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto MaxNumber($extension_Int32_388_i32 const& $this LIFETIMEBOUND, $extension_Int32_388_i32 rhs) noexcept -> const typename $extension_Int32_388_i32;
	#line 411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto Min($extension_Int32_388_i32 const& $this LIFETIMEBOUND, $extension_Int32_388_i32 rhs) noexcept -> const typename $extension_Int32_388_i32;
	#line 412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto MinNumber($extension_Int32_388_i32 const& $this LIFETIMEBOUND, $extension_Int32_388_i32 rhs) noexcept -> const typename $extension_Int32_388_i32;
	#line 413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto Clamp($extension_Int32_388_i32 const& $this LIFETIMEBOUND, $extension_Int32_388_i32 min, $extension_Int32_388_i32 max)  -> const typename $extension_Int32_388_i32;
	#line 389 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getSign($extension_Int32_388_i32 const& $this ) -> const Builtin::i32;
	#line 388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int32_388_i32, INumber, INumber, $extension_Int32_388_i32);
	} namespace System{
using $extensions::CopySign;
using $extensions::Max;
using $extensions::MaxNumber;
using $extensions::Min;
using $extensions::MinNumber;
using $extensions::Clamp;
using $extensions::getSign;

		} namespace $extensions { using namespace System;
#line 416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	using $extension_Int32_416_i32 = Builtin::i32;
	#line 416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE(IBinaryNumber, IBinaryNumber);
	#line 475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto CheckedLog($extension_Int32_416_i32 const& $this LIFETIMEBOUND, $extension_Int32_416_i32 base) noexcept -> const Builtin::Nullable<$extension_Int32_416_i32>;
	#line 508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ASTRUMSTD_API auto Log($extension_Int32_416_i32 const& $this LIFETIMEBOUND, $extension_Int32_416_i32 base)  -> const typename $extension_Int32_416_i32;
	#line 518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto Midpoint($extension_Int32_416_i32 const& $this LIFETIMEBOUND, $extension_Int32_416_i32 rhs) noexcept -> const typename $extension_Int32_416_i32;
	#line 526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto IsMultipleOf($extension_Int32_416_i32 const& $this LIFETIMEBOUND, $extension_Int32_416_i32 rhs) noexcept -> const bool;
	#line 418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class __TT> struct $static_getAllBitsSet; template<> struct $static_getAllBitsSet<$extension_Int32_416_i32> { static inline constexpr auto get() -> const $extension_Int32_416_i32; };
	#line 421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsPow2($extension_Int32_416_i32 const& $this ) -> const bool;
	#line 425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getCheckedLog2($extension_Int32_416_i32 const& $this ) -> const Builtin::Nullable<$extension_Int32_416_i32>;
	#line 435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getLog2($extension_Int32_416_i32 const& $this ) -> const $extension_Int32_416_i32;
	#line 445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getCheckedLog10($extension_Int32_416_i32 const& $this ) -> const Builtin::Nullable<$extension_Int32_416_i32>;
	#line 465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getLog10($extension_Int32_416_i32 const& $this ) -> const $extension_Int32_416_i32;
	#line 416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int32_416_i32, IBinaryNumber, IBinaryNumber, $extension_Int32_416_i32);
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
#line 540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	using $extension_Int32_540_i32 = Builtin::i32;
	#line 540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE(ICheckedArithmetic, ICheckedArithmetic);
	#line 543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_add_qst($extension_Int32_540_i32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int32_540_i32>;
	#line 552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_add_qst_eq($extension_Int32_540_i32 & $this , T rhs) noexcept -> typename $extension_Int32_540_i32&;
	#line 563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_add_ne($extension_Int32_540_i32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int32_540_i32;
	#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_add_ne_eq($extension_Int32_540_i32 & $this , T rhs)  -> typename $extension_Int32_540_i32&;
	#line 574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_add_mod($extension_Int32_540_i32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int32_540_i32;
	#line 581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_add_mod_eq($extension_Int32_540_i32 & $this , T rhs) noexcept -> typename $extension_Int32_540_i32&;
	#line 585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_add_or($extension_Int32_540_i32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int32_540_i32;
	#line 592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_add_or_eq($extension_Int32_540_i32 & $this , T rhs) noexcept -> typename $extension_Int32_540_i32&;
	#line 596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_add_mod_qst($extension_Int32_540_i32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Tuple<$extension_Int32_540_i32, bool>;
	#line 604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_qst($extension_Int32_540_i32 & $this )  -> typename $extension_Int32_540_i32&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_qst_postfix($extension_Int32_540_i32 & $this)  -> decltype(auto);
	#line 607 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_ne($extension_Int32_540_i32 & $this )  -> typename $extension_Int32_540_i32&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_ne_postfix($extension_Int32_540_i32 & $this)  -> decltype(auto);
	#line 610 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_mod($extension_Int32_540_i32 & $this )  -> typename $extension_Int32_540_i32&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_mod_postfix($extension_Int32_540_i32 & $this)  -> decltype(auto);
	#line 613 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_or($extension_Int32_540_i32 & $this )  -> typename $extension_Int32_540_i32&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_or_postfix($extension_Int32_540_i32 & $this)  -> decltype(auto);
	#line 617 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto CarryingAdd($extension_Int32_540_i32 const& $this LIFETIMEBOUND, $extension_Int32_540_i32 rhs, bool carry) noexcept -> const Builtin::Tuple<$extension_Int32_540_i32, bool>;
	#line 626 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto BorrowingSub($extension_Int32_540_i32 const& $this LIFETIMEBOUND, $extension_Int32_540_i32 rhs, bool carry) noexcept -> const Builtin::Tuple<$extension_Int32_540_i32, bool>;
	#line 635 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_sub_qst($extension_Int32_540_i32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int32_540_i32>;
	#line 644 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_sub_qst_eq($extension_Int32_540_i32 & $this , T rhs) noexcept -> typename $extension_Int32_540_i32&;
	#line 655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_sub_ne($extension_Int32_540_i32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int32_540_i32;
	#line 662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_sub_ne_eq($extension_Int32_540_i32 & $this , T rhs)  -> typename $extension_Int32_540_i32&;
	#line 666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_sub_mod($extension_Int32_540_i32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int32_540_i32;
	#line 673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_sub_mod_eq($extension_Int32_540_i32 & $this , T rhs) noexcept -> typename $extension_Int32_540_i32&;
	#line 677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_sub_or($extension_Int32_540_i32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int32_540_i32;
	#line 684 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_sub_or_eq($extension_Int32_540_i32 & $this , T rhs) noexcept -> typename $extension_Int32_540_i32&;
	#line 688 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_sub_mod_qst($extension_Int32_540_i32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Tuple<$extension_Int32_540_i32, bool>;
	#line 696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_qst($extension_Int32_540_i32 & $this )  -> typename $extension_Int32_540_i32&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_qst_postfix($extension_Int32_540_i32 & $this)  -> decltype(auto);
	#line 699 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_ne($extension_Int32_540_i32 & $this )  -> typename $extension_Int32_540_i32&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_ne_postfix($extension_Int32_540_i32 & $this)  -> decltype(auto);
	#line 702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_mod($extension_Int32_540_i32 & $this )  -> typename $extension_Int32_540_i32&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_mod_postfix($extension_Int32_540_i32 & $this)  -> decltype(auto);
	#line 705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_or($extension_Int32_540_i32 & $this )  -> typename $extension_Int32_540_i32&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_or_postfix($extension_Int32_540_i32 & $this)  -> decltype(auto);
	#line 709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mul_qst($extension_Int32_540_i32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int32_540_i32>;
	#line 718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mul_qst_eq($extension_Int32_540_i32 & $this , T rhs) noexcept -> typename $extension_Int32_540_i32&;
	#line 729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mul_ne($extension_Int32_540_i32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int32_540_i32;
	#line 736 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mul_ne_eq($extension_Int32_540_i32 & $this , T rhs)  -> typename $extension_Int32_540_i32&;
	#line 740 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mul_mod($extension_Int32_540_i32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int32_540_i32;
	#line 747 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mul_mod_eq($extension_Int32_540_i32 & $this , T rhs) noexcept -> typename $extension_Int32_540_i32&;
	#line 751 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mul_or($extension_Int32_540_i32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int32_540_i32;
	#line 758 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mul_or_eq($extension_Int32_540_i32 & $this , T rhs) noexcept -> typename $extension_Int32_540_i32&;
	#line 762 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mul_mod_qst($extension_Int32_540_i32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Tuple<$extension_Int32_540_i32, bool>;
	#line 771 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_mul_gt($extension_Int32_540_i32 const& $this LIFETIMEBOUND, $extension_Int32_540_i32 rhs) noexcept -> const Builtin::Tuple<Builtin::u32, Builtin::i32>;
	#line 780 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto CarryingMul($extension_Int32_540_i32 const& $this LIFETIMEBOUND, $extension_Int32_540_i32 rhs, $extension_Int32_540_i32 carry) noexcept -> const Builtin::Tuple<Builtin::u32, Builtin::i32>;
	#line 788 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_qst($extension_Int32_540_i32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int32_540_i32>;
	#line 797 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_qst_eq($extension_Int32_540_i32 & $this , T rhs) noexcept -> typename $extension_Int32_540_i32&;
	#line 809 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_ne($extension_Int32_540_i32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int32_540_i32;
	#line 816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_ne_eq($extension_Int32_540_i32 & $this , T rhs)  -> typename $extension_Int32_540_i32&;
	#line 821 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_mod($extension_Int32_540_i32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int32_540_i32;
	#line 828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_eq($extension_Int32_540_i32 & $this , T rhs)  -> typename $extension_Int32_540_i32&;
	#line 833 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_or($extension_Int32_540_i32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int32_540_i32;
	#line 840 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_or_eq($extension_Int32_540_i32 & $this , T rhs)  -> typename $extension_Int32_540_i32&;
	#line 845 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_qst($extension_Int32_540_i32 const& $this LIFETIMEBOUND, T rhs)  -> const Builtin::Tuple<$extension_Int32_540_i32, bool>;
	#line 854 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst($extension_Int32_540_i32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int32_540_i32>;
	#line 864 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst_eq($extension_Int32_540_i32 & $this , T rhs) noexcept -> typename $extension_Int32_540_i32&;
	#line 875 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mod_qst($extension_Int32_540_i32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int32_540_i32>;
	#line 884 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mod_qst_eq($extension_Int32_540_i32 & $this , T rhs) noexcept -> typename $extension_Int32_540_i32&;
	#line 896 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mod_ne($extension_Int32_540_i32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int32_540_i32;
	#line 903 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mod_ne_eq($extension_Int32_540_i32 & $this , T rhs)  -> typename $extension_Int32_540_i32&;
	#line 908 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mod_mod($extension_Int32_540_i32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int32_540_i32;
	#line 915 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mod_mod_eq($extension_Int32_540_i32 & $this , T rhs)  -> typename $extension_Int32_540_i32&;
	#line 920 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mod_mod_qst($extension_Int32_540_i32 const& $this LIFETIMEBOUND, T rhs)  -> const Builtin::Tuple<$extension_Int32_540_i32, bool>;
	#line 929 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_sub_qst($extension_Int32_540_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::Nullable<$extension_Int32_540_i32>;
	#line 939 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_sub_ne($extension_Int32_540_i32 const& $this LIFETIMEBOUND)  -> const typename $extension_Int32_540_i32;
	#line 946 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_sub_mod($extension_Int32_540_i32 const& $this LIFETIMEBOUND)  -> const typename $extension_Int32_540_i32;
	#line 954 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_sub_or($extension_Int32_540_i32 const& $this LIFETIMEBOUND)  -> const typename $extension_Int32_540_i32;
	#line 962 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_sub_mod_qst($extension_Int32_540_i32 const& $this LIFETIMEBOUND)  -> const Builtin::Tuple<$extension_Int32_540_i32, bool>;
	#line 970 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_lt_lt_qst($extension_Int32_540_i32 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<$extension_Int32_540_i32>;
	#line 978 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_lt_lt_qst_eq($extension_Int32_540_i32 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int32_540_i32&;
	#line 986 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_lt_lt_ne($extension_Int32_540_i32 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_Int32_540_i32;
	#line 994 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_lt_lt_ne_eq($extension_Int32_540_i32 & $this , Builtin::i32 amount)  -> typename $extension_Int32_540_i32&;
	#line 996 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_lt_lt_mod($extension_Int32_540_i32 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename $extension_Int32_540_i32;
	#line 999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_lt_lt_mod_eq($extension_Int32_540_i32 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int32_540_i32&;
	#line 1001 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_lt_lt_mod_qst($extension_Int32_540_i32 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Tuple<$extension_Int32_540_i32, bool>;
	#line 1004 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_qst($extension_Int32_540_i32 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<$extension_Int32_540_i32>;
	#line 1012 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_qst_eq($extension_Int32_540_i32 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int32_540_i32&;
	#line 1020 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_ne($extension_Int32_540_i32 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_Int32_540_i32;
	#line 1028 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_ne_eq($extension_Int32_540_i32 & $this , Builtin::i32 amount)  -> typename $extension_Int32_540_i32&;
	#line 1030 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_mod($extension_Int32_540_i32 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename $extension_Int32_540_i32;
	#line 1033 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_mod_eq($extension_Int32_540_i32 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int32_540_i32&;
	#line 1035 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_mod_qst($extension_Int32_540_i32 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Tuple<$extension_Int32_540_i32, bool>;
	#line 1040 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor_qst($extension_Int32_540_i32 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const Builtin::Nullable<$extension_Int32_540_i32>;
	#line 1069 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor_qst_eq($extension_Int32_540_i32 & $this , Builtin::u32 exp) noexcept -> typename $extension_Int32_540_i32&;
	#line 1077 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor_ne($extension_Int32_540_i32 const& $this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename $extension_Int32_540_i32;
	#line 1098 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor_ne_eq($extension_Int32_540_i32 & $this , Builtin::u32 exp)  -> typename $extension_Int32_540_i32&;
	#line 1100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor_mod($extension_Int32_540_i32 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename $extension_Int32_540_i32;
	#line 1132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor_mod_eq($extension_Int32_540_i32 & $this , Builtin::u32 exp) noexcept -> typename $extension_Int32_540_i32&;
	#line 1134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor_or($extension_Int32_540_i32 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename $extension_Int32_540_i32;
	#line 1143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor_or_eq($extension_Int32_540_i32 & $this , Builtin::u32 exp) noexcept -> typename $extension_Int32_540_i32&;
	#line 1145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor_mod_qst($extension_Int32_540_i32 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const Builtin::Tuple<$extension_Int32_540_i32, bool>;
	#line 1176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getCheckedAbs($extension_Int32_540_i32 const& $this ) -> const Builtin::Nullable<$extension_Int32_540_i32>;
	#line 1179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getStrictAbs($extension_Int32_540_i32 const& $this ) -> const $extension_Int32_540_i32;
	#line 1182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getWrappingAbs($extension_Int32_540_i32 const& $this ) -> const $extension_Int32_540_i32;
	#line 1185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getSaturatingAbs($extension_Int32_540_i32 const& $this ) -> const $extension_Int32_540_i32;
	#line 1188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getOverflowingAbs($extension_Int32_540_i32 const& $this ) -> const Builtin::Tuple<$extension_Int32_540_i32, bool>;
	#line 540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int32_540_i32, ICheckedArithmetic, ICheckedArithmetic, $extension_Int32_540_i32);
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
#line 1197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	using $extension_Int32_1197_i32 = Builtin::i32;
	#line 1197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE(IBinaryInteger, IBinaryInteger);
	#line 1242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NextMultipleOf($extension_Int32_1197_i32 const& $this LIFETIMEBOUND, $extension_Int32_1197_i32 rhs)  -> const typename $extension_Int32_1197_i32;
	#line 1258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto CheckedNextMultipleOf($extension_Int32_1197_i32 const& $this LIFETIMEBOUND, $extension_Int32_1197_i32 rhs) noexcept -> const Builtin::Nullable<$extension_Int32_1197_i32>;
	#line 1198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class __TT> struct $static_getIsSigned; template<> struct $static_getIsSigned<$extension_Int32_1197_i32> { static inline constexpr auto get() -> const bool; };
	#line 1200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getTrailingZeroCount($extension_Int32_1197_i32 const& $this ) -> const Builtin::u32;
	#line 1201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getTrailingOneCount($extension_Int32_1197_i32 const& $this ) -> const Builtin::u32;
	#line 1202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getByteCount($extension_Int32_1197_i32 const& $this ) -> const Builtin::u32;
	#line 1203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getMinimalBitWidth($extension_Int32_1197_i32 const& $this ) -> const Builtin::u32;
	#line 1207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ASTRUMSTD_API auto getCheckedIsqrt($extension_Int32_1197_i32 const& $this ) -> const Builtin::Nullable<$extension_Int32_1197_i32>;
	#line 1219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline auto getIsqrt($extension_Int32_1197_i32 const& $this ) -> const $extension_Int32_1197_i32;
	#line 1228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getLog2Ceiling($extension_Int32_1197_i32 const& $this ) -> const $extension_Int32_1197_i32;
	#line 1279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getPrevPow2($extension_Int32_1197_i32 const& $this ) -> const $extension_Int32_1197_i32;
	#line 1290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getNextPow2($extension_Int32_1197_i32 const& $this ) -> const $extension_Int32_1197_i32;
	#line 1302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getCheckedNextPow2($extension_Int32_1197_i32 const& $this ) -> const Builtin::Nullable<$extension_Int32_1197_i32>;
	#line 1314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getWrappingNextPow2($extension_Int32_1197_i32 const& $this ) -> const $extension_Int32_1197_i32;
	#line 1197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int32_1197_i32, IBinaryInteger, IBinaryInteger, $extension_Int32_1197_i32);
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
#line 1325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	using $extension_Int32_1325_i32 = Builtin::i32;
	#line 1325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE(IFixedWidthInteger, IFixedWidthInteger);
	#line 1358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto RotateLeft($extension_Int32_1325_i32 const& $this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename $extension_Int32_1325_i32;
	#line 1359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto RotateRight($extension_Int32_1325_i32 const& $this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename $extension_Int32_1325_i32;
	#line 1326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class __TT> struct $static_getBitWidth; template<> struct $static_getBitWidth<$extension_Int32_1325_i32> { static inline constexpr auto get() -> const Builtin::u32; };
	#line 1328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getLeadingZeroCount($extension_Int32_1325_i32 const& $this ) -> const Builtin::u32;
	#line 1329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getLeadingOneCount($extension_Int32_1325_i32 const& $this ) -> const Builtin::u32;
	#line 1330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getPopCount($extension_Int32_1325_i32 const& $this ) -> const Builtin::u32;
	#line 1331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getZeroCount($extension_Int32_1325_i32 const& $this ) -> const Builtin::u32;
	#line 1332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getByteSwapped($extension_Int32_1325_i32 const& $this ) -> const $extension_Int32_1325_i32;
	#line 1333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getBigEndian($extension_Int32_1325_i32 const& $this ) -> const $extension_Int32_1325_i32;
	#line 1340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getLittleEndian($extension_Int32_1325_i32 const& $this ) -> const $extension_Int32_1325_i32;
	#line 1347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getReverseBits($extension_Int32_1325_i32 const& $this ) -> const $extension_Int32_1325_i32;
	#line 1349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getShortestBitLength($extension_Int32_1325_i32 const& $this ) -> const Builtin::u32;
	#line 1325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int32_1325_i32, IFixedWidthInteger, IFixedWidthInteger, $extension_Int32_1325_i32);
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
#line 1363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	using $extension_Int32_1363_i32 = Builtin::i32;
	#line 1363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE(IBinaryIntegerFormatInfo, IBinaryIntegerFormatInfo);
	#line 1371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto IsGreaterThanAsUnsigned($extension_Int32_1363_i32 const& $this LIFETIMEBOUND, $extension_Int32_1363_i32 rhs) noexcept -> const bool;
	#line 1364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class __TT> struct $static_getMaxDigitCount; template<> struct $static_getMaxDigitCount<$extension_Int32_1363_i32> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class __TT> struct $static_getMaxHexDigitCount; template<> struct $static_getMaxHexDigitCount<$extension_Int32_1363_i32> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class __TT> struct $static_getMaxValueDiv10; template<> struct $static_getMaxValueDiv10<$extension_Int32_1363_i32> { static inline constexpr auto get() -> const $extension_Int32_1363_i32; };
	#line 1368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getMultiplyBy10($extension_Int32_1363_i32 const& $this ) -> const $extension_Int32_1363_i32;
	#line 1369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getMultiplyBy16($extension_Int32_1363_i32 const& $this ) -> const $extension_Int32_1363_i32;
	#line 1363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Int32_1363_i32, IBinaryIntegerFormatInfo, IBinaryIntegerFormatInfo, $extension_Int32_1363_i32);
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
template<class __TT> struct $static_Isqrt32;
template<class __TT> struct $static_getIsqrt32;
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
template<class __TT> struct $static_NarrowToUInt32;
template<class __TT> struct $static_getNarrowToUInt32;
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
template<class __TT> struct $static_ByteSwap32;
template<class __TT> struct $static_getByteSwap32;
template<class __TT> struct $static_Log2;
template<class __TT> struct $static_getLog2;
template<class __TT> struct $static_One;
template<class __TT> struct $static_getOne;
template<class __TT> struct $static_IsLittleEndian;
template<class __TT> struct $static_getIsLittleEndian;
template<class __TT> struct $static_ByteCount;
template<class __TT> struct $static_getByteCount;
template<class __TT> struct $static_IsBigEndian;
template<class __TT> struct $static_getIsBigEndian;
template<class __TT> struct $static_UncheckedShiftLeft;
template<class __TT> struct $static_getUncheckedShiftLeft;
template<class __TT> struct $static_ReverseBits32;
template<class __TT> struct $static_getReverseBits32;
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
template<class __TT> struct $static_WideningMul32;
template<class __TT> struct $static_getWideningMul32;
template<class __TT> struct $static_CarryingMul32;
template<class __TT> struct $static_getCarryingMul32;
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
template<class __TT> struct $static_ToInt64;
template<class __TT> struct $static_getToInt64;
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
#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto $static_getMinValue<$extension_Int32_14_i32>::get() -> const $extension_Int32_14_i32
	{
		#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(-2147483648)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto $static_getMaxValue<$extension_Int32_14_i32>::get() -> const $extension_Int32_14_i32
	{
		#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(+Builtin::i32(2147483647)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	
} namespace $extensions { using namespace System;
#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto operator<=>($extension_Int32_19_i32 const& $this LIFETIMEBOUND, Builtin::Nullable<$extension_Int32_19_i32> rhs) noexcept -> const Builtin::i32
	{
		#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		{
			#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			if ((!Builtin::Is(rhs, nullptr))) {
				#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				auto __tmp0 = *rhs; const auto& rhs = __tmp0;
				
				#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				return $this <=> rhs;
			}
		}
		#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return Builtin::i32(1);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_gt($extension_Int32_19_i32 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_Int32_19_i32
	{
		#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i32>(UnsafeCast<Builtin::u32>($this) >> amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_gt_eq($extension_Int32_19_i32 & $this , Builtin::i32 amount)  -> typename $extension_Int32_19_i32&
	{
		#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_gt_gt_gt)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_lt_lt_bsl($extension_Int32_19_i32 const& $this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename $extension_Int32_19_i32
	{
		#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if ((amount <=> ADV_USPCS(BitWidth, $extension_Int32_19_i32)()) >= 0) {
			#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return Builtin::i32(0);
		}
		#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return Builtin::UncheckedShiftLeft($this, Builtin::Cast<true, Builtin::i32>(amount));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_lt_lt_bsl_eq($extension_Int32_19_i32 & $this , Builtin::u32 amount) noexcept -> typename $extension_Int32_19_i32&
	{
		#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_lt_lt_bsl)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_bsl($extension_Int32_19_i32 const& $this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename $extension_Int32_19_i32
	{
		#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if ((amount <=> ADV_USPCS(BitWidth, $extension_Int32_19_i32)()) >= 0) {
			#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return ADV_UPCS(IsPositive)($this.$ref()) ? Builtin::i32(0) : Builtin::i32(-1);
		}
		#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return Builtin::UncheckedShiftRight($this, Builtin::Cast<true, Builtin::i32>(amount));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_bsl_eq($extension_Int32_19_i32 & $this , Builtin::u32 amount) noexcept -> typename $extension_Int32_19_i32&
	{
		#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_gt_gt_bsl)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getHashCode($extension_Int32_19_i32 const & $this ) -> const Builtin::u64
	{
		#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u64>($this)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	
} namespace $extensions { using namespace System;
#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToBoolean($extension_Int32_87_i32 const& $this LIFETIMEBOUND) noexcept -> const bool
	{
		#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this != Builtin::i32(0)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToInt8($extension_Int32_87_i32 const& $this LIFETIMEBOUND)  -> const Builtin::i8
	{
		#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (($this <=> Builtin::i32(0x7F)) > 0 || ($this <=> (Builtin::i32(-0x80))) < 0) {
			#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return Builtin::Cast<true, Builtin::i8>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 95 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToUInt8($extension_Int32_87_i32 const& $this LIFETIMEBOUND)  -> const Builtin::u8
	{
		#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (($this <=> Builtin::i32(0)) < 0 || ($this <=> Builtin::i32(0xFF)) > 0) {
			#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 99 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return Builtin::Cast<true, Builtin::u8>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToInt16($extension_Int32_87_i32 const& $this LIFETIMEBOUND)  -> const Builtin::i16
	{
		#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (($this <=> Builtin::i32(0x7FFF)) > 0 || ($this <=> (Builtin::i32(-0x8000))) < 0) {
			#line 103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return Builtin::Cast<true, Builtin::i16>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToUInt16($extension_Int32_87_i32 const& $this LIFETIMEBOUND)  -> const Builtin::u16
	{
		#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (($this <=> Builtin::i32(0)) < 0 || ($this <=> Builtin::i32(0xFFFF)) > 0) {
			#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return Builtin::Cast<true, Builtin::u16>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToInt32($extension_Int32_87_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i32
	{
		#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToUInt32($extension_Int32_87_i32 const& $this LIFETIMEBOUND)  -> const Builtin::u32
	{
		#line 115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (($this <=> Builtin::i32(0)) < 0) {
			#line 116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return Builtin::Cast<true, Builtin::u32>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToInt64($extension_Int32_87_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i64
	{
		#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToUInt64($extension_Int32_87_i32 const& $this LIFETIMEBOUND)  -> const Builtin::u64
	{
		#line 122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (($this <=> Builtin::i32(0)) < 0) {
			#line 123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return Builtin::Cast<true, Builtin::u64>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToInt128($extension_Int32_87_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i128
	{
		#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToUInt128($extension_Int32_87_i32 const& $this LIFETIMEBOUND)  -> const Builtin::u128
	{
		#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (($this <=> Builtin::i32(0)) < 0) {
			#line 130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return Builtin::Cast<true, Builtin::u128>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToIsize($extension_Int32_87_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::isize
	{
		#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToUsize($extension_Int32_87_i32 const& $this LIFETIMEBOUND)  -> const Builtin::usize
	{
		#line 136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (($this <=> Builtin::i32(0)) < 0) {
			#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return Builtin::Cast<true, Builtin::usize>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToFloat32($extension_Int32_87_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::f32
	{
		#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToFloat64($extension_Int32_87_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::f64
	{
		#line 142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToByte($extension_Int32_87_i32 const& $this LIFETIMEBOUND)  -> const Builtin::u8
	{
		#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(ToUInt8)($this.$ref())); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToChar($extension_Int32_87_i32 const& $this LIFETIMEBOUND)  -> const Builtin::char32
	{
		#line 145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (($this <=> Builtin::i32(0)) < 0) {
			#line 146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return Builtin::Cast<true, Builtin::char32>($this);
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	
} namespace $extensions { using namespace System;
#line 156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_div_mod($extension_Int32_154_i32 const& $this LIFETIMEBOUND, T rhs)  -> const Builtin::Tuple<$extension_Int32_154_i32, $extension_Int32_154_i32>
	{
		#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator /% implemented only for integer types");
		#line 159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return Builtin::MakeTuple(ADV_UFCS(_operator_bsl)($this, rhs), $this % rhs);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_div_not($extension_Int32_154_i32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int32_154_i32
	{
		#line 164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Auto<decltype($this)> result = $this; 
		#line 165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		result /= rhs;
		#line 166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_div_not_eq($extension_Int32_154_i32 & $this , auto rhs)  -> typename $extension_Int32_154_i32&
	{
		#line 169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this /= rhs); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_div_lt($extension_Int32_154_i32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int32_154_i32
	{
		#line 173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if constexpr (Builtin::TypeIs<T, IBinaryInteger>()) {
			#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			const auto& [div, rem] = ADV_UFCS(_operator_div_mod)($this, rhs);
			#line 175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			if (rem == Builtin::i32(0)) {
				#line 176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				return div;
			}
			#line 178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			Builtin::Auto<decltype(($this ^ rhs) >> (ADV_USPCS(BitWidth, $extension_Int32_154_i32)() - Builtin::i32(1)))> correction = ($this ^ rhs) >> (ADV_USPCS(BitWidth, $extension_Int32_154_i32)() - Builtin::i32(1)); 
			#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return div + correction;
		} else {
			#line 180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			{
				#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				return Builtin::Cast<true, $extension_Int32_154_i32>((ADV_UFCS(_operator_div_lt)(Builtin::f64{$this}, rhs)));
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_div_lt_eq($extension_Int32_154_i32 & $this , auto rhs)  -> typename $extension_Int32_154_i32&
	{
		#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this = $extension_Int32_154_i32{ADV_UFCS(_operator_div_lt)($this, rhs)}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mod_lt($extension_Int32_154_i32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int32_154_i32
	{
		#line 189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		const Builtin::Auto<decltype($this % rhs)> result = $this % rhs; 
		#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_gt_gt_gt)((result ^ rhs), Builtin::i32{ADV_USPCS(BitWidth, $extension_Int32_154_i32)() - Builtin::i32(1)}))> signDiff = ADV_UFCS(_operator_gt_gt_gt)((result ^ rhs), Builtin::i32{ADV_USPCS(BitWidth, $extension_Int32_154_i32)() - Builtin::i32(1)}); 
		#line 191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		const Builtin::Auto<decltype((result != Builtin::i32(0)) & (signDiff != Builtin::i32(0)))> needAdjust = (result != Builtin::i32(0)) & (signDiff != Builtin::i32(0)); 
		#line 192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result + (needAdjust ? rhs : T{});
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_mod_lt_eq($extension_Int32_154_i32 & $this , auto rhs)  -> typename $extension_Int32_154_i32&
	{
		#line 195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this = $extension_Int32_154_i32{ADV_UFCS(_operator_mod_lt)($this, rhs)}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_div_gt($extension_Int32_154_i32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int32_154_i32
	{
		#line 199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if constexpr (Builtin::TypeIs<T, IBinaryInteger>()) {
			#line 200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			const auto& [div, rem] = ADV_UFCS(_operator_div_mod)($this, rhs);
			#line 201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			if (rem == Builtin::i32(0)) {
				#line 202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				return div;
			}
			#line 204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			Builtin::Auto<decltype(Builtin::i32(1) + (($this ^ rhs) >> (ADV_USPCS(BitWidth, $extension_Int32_154_i32)() - Builtin::i32(1))))> correction = Builtin::i32(1) + (($this ^ rhs) >> (ADV_USPCS(BitWidth, $extension_Int32_154_i32)() - Builtin::i32(1))); 
			#line 205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return div + correction;
		} else {
			#line 206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			{
				#line 207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				return Builtin::Cast<true, $extension_Int32_154_i32>((ADV_UFCS(_operator_div_gt)(Builtin::f64{$this}, rhs)));
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_div_gt_eq($extension_Int32_154_i32 & $this , auto rhs)  -> typename $extension_Int32_154_i32&
	{
		#line 211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this = $extension_Int32_154_i32{ADV_UFCS(_operator_div_gt)($this, rhs)}); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	
} namespace $extensions { using namespace System;
#line 216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl($extension_Int32_214_i32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int32_214_i32
	{
		#line 216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Div)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_eq($extension_Int32_214_i32 & $this , T rhs)  -> typename $extension_Int32_214_i32&
	{
		#line 218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(DivAssign)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl($extension_Int32_214_i32 const& $this LIFETIMEBOUND, T rhs)  -> const Builtin::Nullable<$extension_Int32_214_i32>
	{
		#line 225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\? implemented only for integer types");
		#line 226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_214_i32 result{}; 
		#line 227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (Builtin::DivExact($this, rhs, result)) {
			#line 228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return result;
		}
		#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return nullptr;
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	
} namespace $extensions { using namespace System;
#line 237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor($extension_Int32_234_i32 const& $this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename $extension_Int32_234_i32
	{
		#line 239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return Builtin::i32(1);
		}
		#line 244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Auto<decltype(Builtin::i32(1))> result = Builtin::i32(1); 
		#line 247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (std::is_constant_evaluated()) {
			#line 248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			while ((exp <=> Builtin::i32(1)) > 0) 
			{
				#line 249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
					#line 250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
					result *= base;
				}
				#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
				#line 253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				base *= base;
			}
			#line 255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return result * base;
		} else {
			#line 256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			{
				#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				for (;;) 
				{
					#line 258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
					if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
						#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
						result *= base;
						#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
						if (exp == Builtin::i32(1)) {
							#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
							return result;
						}
					}
					#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
					ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
					#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
					base *= base;
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor_eq($extension_Int32_234_i32 & $this , Builtin::u32 exp)  -> typename $extension_Int32_234_i32&
	{
		#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_xor_xor)($this, exp)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	
} namespace $extensions { using namespace System;
#line 325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline auto MaxMagnitudeNumber($extension_Int32_272_i32 const& $this LIFETIMEBOUND, $extension_Int32_272_i32 rhs) noexcept -> const typename $extension_Int32_272_i32
	{
		#line 325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(MaxMagnitude)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline auto MinMagnitudeNumber($extension_Int32_272_i32 const& $this LIFETIMEBOUND, $extension_Int32_272_i32 rhs) noexcept -> const typename $extension_Int32_272_i32
	{
		#line 356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(MinMagnitude)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToInt8($extension_Int32_272_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i8
	{
		#line 370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i8>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToUInt8($extension_Int32_272_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u8
	{
		#line 371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u8>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToInt16($extension_Int32_272_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i16
	{
		#line 372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i16>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToUInt16($extension_Int32_272_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u16
	{
		#line 373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u16>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToInt32($extension_Int32_272_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i32
	{
		#line 374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToUInt32($extension_Int32_272_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u32
	{
		#line 375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u32>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToInt64($extension_Int32_272_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i64
	{
		#line 376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToUInt64($extension_Int32_272_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u64
	{
		#line 377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u64>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToInt128($extension_Int32_272_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i128
	{
		#line 378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToUInt128($extension_Int32_272_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u128
	{
		#line 379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u128>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToIsize($extension_Int32_272_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::isize
	{
		#line 380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToUsize($extension_Int32_272_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::usize
	{
		#line 381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::usize>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto $static_getOne<$extension_Int32_272_i32>::get() -> const $extension_Int32_272_i32
	{
		#line 273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(1)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto $static_getZero<$extension_Int32_272_i32>::get() -> const $extension_Int32_272_i32
	{
		#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(0)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto $static_getRadix<$extension_Int32_272_i32>::get() -> const Builtin::i32
	{
		#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(2)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getAbs($extension_Int32_272_i32 const & $this ) -> const $extension_Int32_272_i32
	{
		#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)($this.$ref()) ? -$this : $this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsCanonical($extension_Int32_272_i32 const & $this ) -> const bool
	{
		#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsComplexNumber($extension_Int32_272_i32 const & $this ) -> const bool
	{
		#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsEvenInteger($extension_Int32_272_i32 const & $this ) -> const bool
	{
		#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(($this & Builtin::i32(1)) == Builtin::i32(0)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsFinite($extension_Int32_272_i32 const & $this ) -> const bool
	{
		#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsImaginaryNumber($extension_Int32_272_i32 const & $this ) -> const bool
	{
		#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsInfinity($extension_Int32_272_i32 const & $this ) -> const bool
	{
		#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsInteger($extension_Int32_272_i32 const & $this ) -> const bool
	{
		#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsNaN($extension_Int32_272_i32 const & $this ) -> const bool
	{
		#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsNegative($extension_Int32_272_i32 const & $this ) -> const bool
	{
		#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(($this <=> Builtin::i32(0)) < 0); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsNegativeInfinity($extension_Int32_272_i32 const & $this ) -> const bool
	{
		#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsNormal($extension_Int32_272_i32 const & $this ) -> const bool
	{
		#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this != Builtin::i32(0)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsOddInteger($extension_Int32_272_i32 const & $this ) -> const bool
	{
		#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(($this & Builtin::i32(1)) != Builtin::i32(0)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsPositive($extension_Int32_272_i32 const & $this ) -> const bool
	{
		#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(($this <=> Builtin::i32(0)) >= 0); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsPositiveInfinity($extension_Int32_272_i32 const & $this ) -> const bool
	{
		#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsRealNumber($extension_Int32_272_i32 const & $this ) -> const bool
	{
		#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsSubnormal($extension_Int32_272_i32 const & $this ) -> const bool
	{
		#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsZero($extension_Int32_272_i32 const & $this ) -> const bool
	{
		#line 294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this == Builtin::i32(0)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	
} namespace $extensions { using namespace System;
#line 385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto $static_getMinusOne<$extension_Int32_384_i32>::get() -> const $extension_Int32_384_i32
	{
		#line 385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(-1)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	
} namespace $extensions { using namespace System;
#line 409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto Max($extension_Int32_388_i32 const& $this LIFETIMEBOUND, $extension_Int32_388_i32 rhs) noexcept -> const typename $extension_Int32_388_i32
	{
		#line 409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultMax)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto MaxNumber($extension_Int32_388_i32 const& $this LIFETIMEBOUND, $extension_Int32_388_i32 rhs) noexcept -> const typename $extension_Int32_388_i32
	{
		#line 410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Max)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto Min($extension_Int32_388_i32 const& $this LIFETIMEBOUND, $extension_Int32_388_i32 rhs) noexcept -> const typename $extension_Int32_388_i32
	{
		#line 411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultMin)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto MinNumber($extension_Int32_388_i32 const& $this LIFETIMEBOUND, $extension_Int32_388_i32 rhs) noexcept -> const typename $extension_Int32_388_i32
	{
		#line 412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Min)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto Clamp($extension_Int32_388_i32 const& $this LIFETIMEBOUND, $extension_Int32_388_i32 min, $extension_Int32_388_i32 max)  -> const typename $extension_Int32_388_i32
	{
		#line 413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultClamp)($this, min, max)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 389 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getSign($extension_Int32_388_i32 const & $this ) -> const Builtin::i32
	{
		#line 389 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultSign)($this)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	
} namespace $extensions { using namespace System;
#line 475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto CheckedLog($extension_Int32_416_i32 const& $this LIFETIMEBOUND, $extension_Int32_416_i32 base) noexcept -> const Builtin::Nullable<$extension_Int32_416_i32>
	{
		#line 477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (($this <=> Builtin::i32(0)) <= 0 || (base <=> Builtin::i32(1)) <= 0) {
			#line 478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return nullptr;
		}
		#line 481 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (std::is_constant_evaluated()) {
			#line 482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			if (base == Builtin::i32(2)) {
				#line 483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				return ADV_UPCS(CheckedLog2)($this.$ref());
			}
			#line 485 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			if (base == Builtin::i32(10)) {
				#line 486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				return ADV_UPCS(CheckedLog10)($this.$ref());
			}
		}
		#line 490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (($this <=> base) < 0) {
			#line 491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return Builtin::i32(0);
		}
		#line 494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_416_i32 n = Builtin::i32(1); 
		#line 495 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Auto<decltype(base)> r = base; 
		#line 496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_bsl)($this, base))> baseRatio = ADV_UFCS(_operator_bsl)($this, base); 
		#line 497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		while ((r <=> baseRatio) <= 0) 
		{
			#line 498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			++n;
			#line 499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			r *= base;
		}
		#line 502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return n;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto Midpoint($extension_Int32_416_i32 const& $this LIFETIMEBOUND, $extension_Int32_416_i32 rhs) noexcept -> const typename $extension_Int32_416_i32
	{
		#line 520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		const Builtin::Auto<decltype((($this ^ rhs) >> Builtin::i32(1)) + ($this & rhs))> result = (($this ^ rhs) >> Builtin::i32(1)) + ($this & rhs); 
		#line 521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		const Builtin::Auto<decltype((result <=> Builtin::i32(0)) < 0)> correction = (result <=> Builtin::i32(0)) < 0; 
		#line 522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result + ((Builtin::Cast<true, $extension_Int32_416_i32>(correction)) & ($this ^ rhs));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto IsMultipleOf($extension_Int32_416_i32 const& $this LIFETIMEBOUND, $extension_Int32_416_i32 rhs) noexcept -> const bool
	{
		#line 528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (rhs == Builtin::i32(0)) {
			#line 529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return $this == Builtin::i32(0);
		}
		#line 532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (rhs == Builtin::i32(-1)) {
			#line 533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return Builtin::Boolean(true);
		}
		#line 536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return $this % rhs == Builtin::i32(0);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto $static_getAllBitsSet<$extension_Int32_416_i32>::get() -> const $extension_Int32_416_i32
	{
		#line 418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(MinusOne, Builtin::i32)()); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsPow2($extension_Int32_416_i32 const & $this ) -> const bool
	{
		#line 421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsPositive)($this.$ref()) && ADV_UPCS(PopCount)($this.$ref()) == Builtin::i32(1)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getCheckedLog2($extension_Int32_416_i32 const & $this ) -> const Builtin::Nullable<$extension_Int32_416_i32>
	{
		#line 427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (($this <=> Builtin::i32(0)) <= 0) {
			#line 428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return nullptr;
		}
		#line 431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return Builtin::Cast<true, $extension_Int32_416_i32>((ADV_USPCS(BitWidth, $extension_Int32_416_i32)() - Builtin::i32(1) - ADV_UPCS(LeadingZeroCount)($this.$ref())));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getLog2($extension_Int32_416_i32 const & $this ) -> const $extension_Int32_416_i32
	{
		#line 437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (const auto result = ADV_UPCS(CheckedLog2)($this.$ref())) {
			{
				#line 437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				return result;
			}
		}
		#line 440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getCheckedLog10($extension_Int32_416_i32 const & $this ) -> const Builtin::Nullable<$extension_Int32_416_i32>
	{
		#line 447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (($this <=> Builtin::i32(0)) <= 0) {
			#line 448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return nullptr;
		}
		#line 451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Auto<decltype(Builtin::Cast<true, Builtin::u32>($this))> val = Builtin::Cast<true, Builtin::u32>($this); 
		#line 452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		constexpr Builtin::u32 C1 = Builtin::u32(0b01100000000000000000U) - Builtin::i32(10);
		#line 453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		constexpr Builtin::u32 C2 = Builtin::u32(0b10000000000000000000U) - Builtin::i32(100);
		#line 454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		constexpr Builtin::u32 C3 = Builtin::u32(0b11100000000000000000U) - Builtin::i32(1000);
		#line 455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		constexpr Builtin::u32 C4 = Builtin::u32(0b10000000000000000000U) - Builtin::i32(10000);
		#line 456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Auto<decltype(Builtin::i32(0))> log = Builtin::i32(0); 
		#line 457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if ((val <=> Builtin::i32(100000)) >= 0) {
			#line 458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			ADV_UFCS(DivAssign)(val.$ref(), Builtin::u32(100000U));
			#line 459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			log += Builtin::i32(5);
		}
		#line 461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return log + ((((val + C1) & (val + C2)) ^ ((val + C3) & (val + C4))) >> Builtin::i32(17));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getLog10($extension_Int32_416_i32 const & $this ) -> const $extension_Int32_416_i32
	{
		#line 467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (const auto result = ADV_UPCS(CheckedLog10)($this.$ref())) {
			{
				#line 467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				return result;
			}
		}
		#line 470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	
} namespace $extensions { using namespace System;
#line 543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_add_qst($extension_Int32_540_i32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int32_540_i32>
	{
		#line 545 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +? implemented only for integer types");
		#line 546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_540_i32 result{}; 
		#line 547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (Builtin::SafeAdd($this, rhs, result)) {
			#line 548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return result;
		}
		#line 550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_add_qst_eq($extension_Int32_540_i32 & $this , T rhs) noexcept -> typename $extension_Int32_540_i32&
	{
		#line 554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +?= implemented only for integer types");
		#line 555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (const auto result = ADV_UFCS(_operator_add_qst)($this, rhs)) {
			{
				#line 555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				$this = result;
			}
		}
		#line 558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_add_ne($extension_Int32_540_i32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int32_540_i32
	{
		#line 565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +! implemented only for integer types");
		#line 566 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_540_i32 result{}; 
		#line 567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::StrictAdd($this, rhs, result);
		#line 568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_add_ne_eq($extension_Int32_540_i32 & $this , T rhs)  -> typename $extension_Int32_540_i32&
	{
		#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_add_ne)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_add_mod($extension_Int32_540_i32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int32_540_i32
	{
		#line 576 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +% implemented only for integer types");
		#line 577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_540_i32 result{}; 
		#line 578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::WrappingAdd($this, rhs, result);
		#line 579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_add_mod_eq($extension_Int32_540_i32 & $this , T rhs) noexcept -> typename $extension_Int32_540_i32&
	{
		#line 581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_add_mod)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_add_or($extension_Int32_540_i32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int32_540_i32
	{
		#line 587 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +| implemented only for integer types");
		#line 588 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_540_i32 result{}; 
		#line 589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::SaturatingAdd($this, rhs, result);
		#line 590 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_add_or_eq($extension_Int32_540_i32 & $this , T rhs) noexcept -> typename $extension_Int32_540_i32&
	{
		#line 592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_add_or)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_add_mod_qst($extension_Int32_540_i32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Tuple<$extension_Int32_540_i32, bool>
	{
		#line 597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +%? implemented only for integer types");
		#line 598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_540_i32 result{}; 
		#line 599 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Auto<decltype(!Builtin::SafeAdd($this, rhs, result))> overflowed = !Builtin::SafeAdd($this, rhs, result); 
		#line 600 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return Builtin::MakeTuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_add_add_qst($extension_Int32_540_i32 & $this )  -> typename $extension_Int32_540_i32&
	{
		#line 604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_qst_eq)($this, Builtin::i32(1))); 
	}
	inline constexpr auto _operator_add_add_qst_postfix($extension_Int32_540_i32 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_add_add_qst)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 607 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_add_add_ne($extension_Int32_540_i32 & $this )  -> typename $extension_Int32_540_i32&
	{
		#line 607 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_ne_eq)($this, Builtin::i32(1))); 
	}
	inline constexpr auto _operator_add_add_ne_postfix($extension_Int32_540_i32 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_add_add_ne)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 610 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_add_add_mod($extension_Int32_540_i32 & $this )  -> typename $extension_Int32_540_i32&
	{
		#line 610 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_mod_eq)($this, Builtin::i32(1))); 
	}
	inline constexpr auto _operator_add_add_mod_postfix($extension_Int32_540_i32 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_add_add_mod)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 613 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_add_add_or($extension_Int32_540_i32 & $this )  -> typename $extension_Int32_540_i32&
	{
		#line 613 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_or_eq)($this, Builtin::i32(1))); 
	}
	inline constexpr auto _operator_add_add_or_postfix($extension_Int32_540_i32 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_add_add_or)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 617 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto CarryingAdd($extension_Int32_540_i32 const& $this LIFETIMEBOUND, $extension_Int32_540_i32 rhs, bool carry) noexcept -> const Builtin::Tuple<$extension_Int32_540_i32, bool>
	{
		#line 619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_540_i32 result{}; 
		#line 620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Auto<decltype(Builtin::CarryingAdd($this, rhs, carry, result))> overflowed = Builtin::CarryingAdd($this, rhs, carry, result); 
		#line 621 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return Builtin::MakeTuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 626 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto BorrowingSub($extension_Int32_540_i32 const& $this LIFETIMEBOUND, $extension_Int32_540_i32 rhs, bool carry) noexcept -> const Builtin::Tuple<$extension_Int32_540_i32, bool>
	{
		#line 628 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_540_i32 result{}; 
		#line 629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Auto<decltype(Builtin::BorrowingSub($this, rhs, carry, result))> overflowed = Builtin::BorrowingSub($this, rhs, carry, result); 
		#line 630 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return Builtin::MakeTuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 635 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_sub_qst($extension_Int32_540_i32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int32_540_i32>
	{
		#line 637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -? implemented only for integer types");
		#line 638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_540_i32 result{}; 
		#line 639 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (Builtin::SafeSubtract($this, rhs, result)) {
			#line 640 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return result;
		}
		#line 642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 644 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_sub_qst_eq($extension_Int32_540_i32 & $this , T rhs) noexcept -> typename $extension_Int32_540_i32&
	{
		#line 646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -?= implemented only for integer types");
		#line 647 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (const auto result = ADV_UFCS(_operator_sub_qst)($this, rhs)) {
			{
				#line 647 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 648 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				$this = result;
			}
		}
		#line 650 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_sub_ne($extension_Int32_540_i32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int32_540_i32
	{
		#line 657 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -! implemented only for integer types");
		#line 658 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_540_i32 result{}; 
		#line 659 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::StrictSubtract($this, rhs, result);
		#line 660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_sub_ne_eq($extension_Int32_540_i32 & $this , T rhs)  -> typename $extension_Int32_540_i32&
	{
		#line 662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_sub_ne)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_sub_mod($extension_Int32_540_i32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int32_540_i32
	{
		#line 668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -% implemented only for integer types");
		#line 669 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_540_i32 result{}; 
		#line 670 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::WrappingSubtract($this, rhs, result);
		#line 671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_sub_mod_eq($extension_Int32_540_i32 & $this , T rhs) noexcept -> typename $extension_Int32_540_i32&
	{
		#line 673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_sub_mod)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_sub_or($extension_Int32_540_i32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int32_540_i32
	{
		#line 679 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -| implemented only for integer types");
		#line 680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_540_i32 result{}; 
		#line 681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::SaturatingSubtract($this, rhs, result);
		#line 682 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 684 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_sub_or_eq($extension_Int32_540_i32 & $this , T rhs) noexcept -> typename $extension_Int32_540_i32&
	{
		#line 684 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_sub_or)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 688 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_sub_mod_qst($extension_Int32_540_i32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Tuple<$extension_Int32_540_i32, bool>
	{
		#line 689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -%? implemented only for integer types");
		#line 690 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_540_i32 result{}; 
		#line 691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Auto<decltype(!Builtin::SafeSubtract($this, rhs, result))> overflowed = !Builtin::SafeSubtract($this, rhs, result); 
		#line 692 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return Builtin::MakeTuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_sub_sub_qst($extension_Int32_540_i32 & $this )  -> typename $extension_Int32_540_i32&
	{
		#line 696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_qst_eq)($this, Builtin::i32(1))); 
	}
	inline constexpr auto _operator_sub_sub_qst_postfix($extension_Int32_540_i32 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_sub_sub_qst)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 699 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_sub_sub_ne($extension_Int32_540_i32 & $this )  -> typename $extension_Int32_540_i32&
	{
		#line 699 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_ne_eq)($this, Builtin::i32(1))); 
	}
	inline constexpr auto _operator_sub_sub_ne_postfix($extension_Int32_540_i32 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_sub_sub_ne)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_sub_sub_mod($extension_Int32_540_i32 & $this )  -> typename $extension_Int32_540_i32&
	{
		#line 702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_mod_eq)($this, Builtin::i32(1))); 
	}
	inline constexpr auto _operator_sub_sub_mod_postfix($extension_Int32_540_i32 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_sub_sub_mod)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_sub_sub_or($extension_Int32_540_i32 & $this )  -> typename $extension_Int32_540_i32&
	{
		#line 705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_or_eq)($this, Builtin::i32(1))); 
	}
	inline constexpr auto _operator_sub_sub_or_postfix($extension_Int32_540_i32 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_sub_sub_or)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mul_qst($extension_Int32_540_i32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int32_540_i32>
	{
		#line 711 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *? implemented only for integer types");
		#line 712 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_540_i32 result{}; 
		#line 713 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (Builtin::SafeMultiply($this, rhs, result)) {
			#line 714 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return result;
		}
		#line 716 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mul_qst_eq($extension_Int32_540_i32 & $this , T rhs) noexcept -> typename $extension_Int32_540_i32&
	{
		#line 720 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *?= implemented only for integer types");
		#line 721 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (const auto result = ADV_UFCS(_operator_mul_qst)($this, rhs)) {
			{
				#line 721 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 722 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				$this = result;
			}
		}
		#line 724 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mul_ne($extension_Int32_540_i32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int32_540_i32
	{
		#line 731 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *! implemented only for integer types");
		#line 732 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_540_i32 result{}; 
		#line 733 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::StrictMultiply($this, rhs, result);
		#line 734 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 736 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mul_ne_eq($extension_Int32_540_i32 & $this , T rhs)  -> typename $extension_Int32_540_i32&
	{
		#line 736 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_mul_ne)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 740 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mul_mod($extension_Int32_540_i32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int32_540_i32
	{
		#line 742 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *% implemented only for integer types");
		#line 743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_540_i32 result{}; 
		#line 744 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::WrappingMultiply($this, rhs, result);
		#line 745 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 747 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mul_mod_eq($extension_Int32_540_i32 & $this , T rhs) noexcept -> typename $extension_Int32_540_i32&
	{
		#line 747 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_mul_mod)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 751 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mul_or($extension_Int32_540_i32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_Int32_540_i32
	{
		#line 753 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *| implemented only for integer types");
		#line 754 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_540_i32 result{}; 
		#line 755 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::SaturatingMultiply($this, rhs, result);
		#line 756 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 758 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mul_or_eq($extension_Int32_540_i32 & $this , T rhs) noexcept -> typename $extension_Int32_540_i32&
	{
		#line 758 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_mul_or)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 762 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mul_mod_qst($extension_Int32_540_i32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Tuple<$extension_Int32_540_i32, bool>
	{
		#line 763 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *%? implemented only for integer types");
		#line 764 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_540_i32 result{}; 
		#line 765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Auto<decltype(!Builtin::SafeMultiply($this, rhs, result))> overflowed = !Builtin::SafeMultiply($this, rhs, result); 
		#line 766 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return Builtin::MakeTuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 771 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_mul_gt($extension_Int32_540_i32 const& $this LIFETIMEBOUND, $extension_Int32_540_i32 rhs) noexcept -> const Builtin::Tuple<Builtin::u32, Builtin::i32>
	{
		#line 773 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		const auto& [low, high] = Builtin::WideningMul32($this, rhs);
		#line 774 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return Builtin::MakeTuple(low, high);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 780 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto CarryingMul($extension_Int32_540_i32 const& $this LIFETIMEBOUND, $extension_Int32_540_i32 rhs, $extension_Int32_540_i32 carry) noexcept -> const Builtin::Tuple<Builtin::u32, Builtin::i32>
	{
		#line 782 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		const auto& [low, high] = Builtin::CarryingMul32($this, rhs, carry);
		#line 783 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return Builtin::MakeTuple(low, high);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 788 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_qst($extension_Int32_540_i32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int32_540_i32>
	{
		#line 790 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\? implemented only for integer types");
		#line 791 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_540_i32 result{}; 
		#line 792 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (Builtin::SafeDivide($this, rhs, result)) {
			#line 793 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return result;
		}
		#line 795 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 797 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_qst_eq($extension_Int32_540_i32 & $this , T rhs) noexcept -> typename $extension_Int32_540_i32&
	{
		#line 799 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\?= implemented only for integer types");
		#line 800 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (const auto result = ADV_UFCS(_operator_bsl_qst)($this, rhs)) {
			{
				#line 800 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 801 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				$this = result;
			}
		}
		#line 803 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 809 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_ne($extension_Int32_540_i32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int32_540_i32
	{
		#line 811 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\! implemented only for integer types");
		#line 812 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_540_i32 result{}; 
		#line 813 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::StrictDivide($this, rhs, result);
		#line 814 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_ne_eq($extension_Int32_540_i32 & $this , T rhs)  -> typename $extension_Int32_540_i32&
	{
		#line 816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_bsl_ne)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 821 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_mod($extension_Int32_540_i32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int32_540_i32
	{
		#line 823 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\% implemented only for integer types");
		#line 824 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_540_i32 result{}; 
		#line 825 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::WrappingDivide($this, rhs, result);
		#line 826 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_eq($extension_Int32_540_i32 & $this , T rhs)  -> typename $extension_Int32_540_i32&
	{
		#line 828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_bsl_mod)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 833 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_or($extension_Int32_540_i32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int32_540_i32
	{
		#line 835 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\| implemented only for integer types");
		#line 836 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_540_i32 result{}; 
		#line 837 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::SaturatingDivide($this, rhs, result);
		#line 838 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 840 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_or_eq($extension_Int32_540_i32 & $this , T rhs)  -> typename $extension_Int32_540_i32&
	{
		#line 840 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_bsl_or)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 845 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_qst($extension_Int32_540_i32 const& $this LIFETIMEBOUND, T rhs)  -> const Builtin::Tuple<$extension_Int32_540_i32, bool>
	{
		#line 846 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\%? implemented only for integer types");
		#line 847 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_540_i32 result{}; 
		#line 848 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Auto<decltype(!Builtin::SafeDivide($this, rhs, result))> overflowed = !Builtin::SafeDivide($this, rhs, result); 
		#line 849 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return Builtin::MakeTuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 854 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst($extension_Int32_540_i32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int32_540_i32>
	{
		#line 856 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\? implemented only for integer types");
		#line 857 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_540_i32 result{}; 
		#line 858 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (Builtin::SafeDivExact($this, rhs, result)) {
			#line 859 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return result;
		}
		#line 861 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 864 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst_eq($extension_Int32_540_i32 & $this , T rhs) noexcept -> typename $extension_Int32_540_i32&
	{
		#line 866 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\?= implemented only for integer types");
		#line 867 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (const auto result = ADV_UFCS(_operator_bsl_bsl_qst)($this, rhs)) {
			{
				#line 867 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 868 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				$this = result;
			}
		}
		#line 870 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 875 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mod_qst($extension_Int32_540_i32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_Int32_540_i32>
	{
		#line 877 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %? implemented only for integer types");
		#line 878 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_540_i32 result{}; 
		#line 879 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (Builtin::SafeModulus($this, rhs, result)) {
			#line 880 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return result;
		}
		#line 882 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 884 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mod_qst_eq($extension_Int32_540_i32 & $this , T rhs) noexcept -> typename $extension_Int32_540_i32&
	{
		#line 886 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %?= implemented only for integer types");
		#line 887 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (const auto result = ADV_UFCS(_operator_mod_qst)($this, rhs)) {
			{
				#line 887 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 888 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				$this = result;
			}
		}
		#line 890 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 896 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mod_ne($extension_Int32_540_i32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int32_540_i32
	{
		#line 898 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %! implemented only for integer types");
		#line 899 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_540_i32 result{}; 
		#line 900 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::StrictModulus($this, rhs, result);
		#line 901 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 903 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mod_ne_eq($extension_Int32_540_i32 & $this , T rhs)  -> typename $extension_Int32_540_i32&
	{
		#line 903 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_mod_ne)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 908 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mod_mod($extension_Int32_540_i32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Int32_540_i32
	{
		#line 910 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %% implemented only for integer types");
		#line 911 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_540_i32 result{}; 
		#line 912 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::WrappingModulus($this, rhs, result);
		#line 913 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 915 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mod_mod_eq($extension_Int32_540_i32 & $this , T rhs)  -> typename $extension_Int32_540_i32&
	{
		#line 915 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_mod_mod)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 920 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mod_mod_qst($extension_Int32_540_i32 const& $this LIFETIMEBOUND, T rhs)  -> const Builtin::Tuple<$extension_Int32_540_i32, bool>
	{
		#line 921 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %%? implemented only for integer types");
		#line 922 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_540_i32 result{}; 
		#line 923 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Auto<decltype(!Builtin::SafeModulus($this, rhs, result))> overflowed = !Builtin::SafeModulus($this, rhs, result); 
		#line 924 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return Builtin::MakeTuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 929 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_sub_qst($extension_Int32_540_i32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::Nullable<$extension_Int32_540_i32>
	{
		#line 931 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_540_i32 result{}; 
		#line 932 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (Builtin::SafeNegate($this, result)) {
			#line 933 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return result;
		}
		#line 935 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 939 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_sub_ne($extension_Int32_540_i32 const& $this LIFETIMEBOUND)  -> const typename $extension_Int32_540_i32
	{
		#line 941 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_540_i32 result{}; 
		#line 942 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::StrictNegate($this, result);
		#line 943 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 946 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_sub_mod($extension_Int32_540_i32 const& $this LIFETIMEBOUND)  -> const typename $extension_Int32_540_i32
	{
		#line 948 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_540_i32 result{}; 
		#line 949 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::WrappingNegate($this, result);
		#line 950 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 954 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_sub_or($extension_Int32_540_i32 const& $this LIFETIMEBOUND)  -> const typename $extension_Int32_540_i32
	{
		#line 956 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_540_i32 result{}; 
		#line 957 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::SaturatingNegate($this, result);
		#line 958 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 962 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_sub_mod_qst($extension_Int32_540_i32 const& $this LIFETIMEBOUND)  -> const Builtin::Tuple<$extension_Int32_540_i32, bool>
	{
		#line 964 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_540_i32 result{}; 
		#line 965 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Auto<decltype(!Builtin::SafeNegate($this, result))> overflowed = !Builtin::SafeNegate($this, result); 
		#line 966 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return Builtin::MakeTuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 970 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_lt_lt_qst($extension_Int32_540_i32 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<$extension_Int32_540_i32>
	{
		#line 972 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_Int32_540_i32)()) < 0) {
			#line 973 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return Builtin::UncheckedShiftLeft($this, amount);
		}
		#line 975 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 978 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_lt_lt_qst_eq($extension_Int32_540_i32 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int32_540_i32&
	{
		#line 980 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_Int32_540_i32)()) < 0) {
			#line 981 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return $this <<= amount;
		}
		#line 983 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 986 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_lt_lt_ne($extension_Int32_540_i32 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_Int32_540_i32
	{
		#line 988 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_Int32_540_i32)()) < 0) {
			#line 989 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return Builtin::UncheckedShiftLeft($this, amount);
		}
		#line 991 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Throw(Builtin::IntegerOverflowException{});
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 994 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_lt_lt_ne_eq($extension_Int32_540_i32 & $this , Builtin::i32 amount)  -> typename $extension_Int32_540_i32&
	{
		#line 994 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_lt_lt_ne)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 996 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_lt_lt_mod($extension_Int32_540_i32 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename $extension_Int32_540_i32
	{
		#line 996 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::UncheckedShiftLeft($this, amount & (ADV_USPCS(BitWidth, $extension_Int32_540_i32)() - Builtin::i32(1)))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_lt_lt_mod_eq($extension_Int32_540_i32 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int32_540_i32&
	{
		#line 999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_lt_lt_mod)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1001 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_lt_lt_mod_qst($extension_Int32_540_i32 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Tuple<$extension_Int32_540_i32, bool>
	{
		#line 1001 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::MakeTuple(ADV_UFCS(_operator_lt_lt_mod)($this, amount), (amount <=> Builtin::i32(0)) < 0 || (amount <=> ADV_USPCS(BitWidth, $extension_Int32_540_i32)()) >= 0)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1004 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_qst($extension_Int32_540_i32 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<$extension_Int32_540_i32>
	{
		#line 1006 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_Int32_540_i32)()) < 0) {
			#line 1007 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return $this >> amount;
		}
		#line 1009 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1012 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_qst_eq($extension_Int32_540_i32 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int32_540_i32&
	{
		#line 1014 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_Int32_540_i32)()) < 0) {
			#line 1015 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return $this >>= amount;
		}
		#line 1017 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1020 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_ne($extension_Int32_540_i32 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_Int32_540_i32
	{
		#line 1022 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_Int32_540_i32)()) < 0) {
			#line 1023 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return $this >> amount;
		}
		#line 1025 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Throw(Builtin::IntegerOverflowException{});
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1028 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_ne_eq($extension_Int32_540_i32 & $this , Builtin::i32 amount)  -> typename $extension_Int32_540_i32&
	{
		#line 1028 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_gt_gt_ne)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1030 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_mod($extension_Int32_540_i32 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename $extension_Int32_540_i32
	{
		#line 1030 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::UncheckedShiftRight($this, amount & (ADV_USPCS(BitWidth, $extension_Int32_540_i32)() - Builtin::i32(1)))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1033 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_mod_eq($extension_Int32_540_i32 & $this , Builtin::i32 amount) noexcept -> typename $extension_Int32_540_i32&
	{
		#line 1033 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_gt_gt_mod)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1035 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_mod_qst($extension_Int32_540_i32 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Tuple<$extension_Int32_540_i32, bool>
	{
		#line 1035 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::MakeTuple(ADV_UFCS(_operator_gt_gt_mod)($this, amount), (amount <=> Builtin::i32(0)) < 0 || (amount <=> ADV_USPCS(BitWidth, $extension_Int32_540_i32)()) >= 0)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1040 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor_qst($extension_Int32_540_i32 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const Builtin::Nullable<$extension_Int32_540_i32>
	{
		#line 1042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1044 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return Builtin::i32(1);
		}
		#line 1047 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 1048 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Auto<decltype(Builtin::i32(1))> result = Builtin::i32(1); 
		#line 1050 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		for (;;) 
		{
			#line 1051 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 1052 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				if (const auto mul = ADV_UFCS(_operator_mul_qst)(result, base)) {
					{
						#line 1052 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
						auto __tmp0 = *mul; const auto& mul = __tmp0;
						
						#line 1053 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
						result = mul;
					}
				} else {
					#line 1054 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
					{
						#line 1055 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
						return nullptr;
					}
				}
				#line 1057 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				if (exp == Builtin::i32(1)) {
					#line 1058 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
					return result;
				}
			}
			#line 1060 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
			#line 1061 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			if (const auto mul = ADV_UFCS(_operator_mul_qst)(base, base)) {
				{
					#line 1061 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
					auto __tmp0 = *mul; const auto& mul = __tmp0;
					
					#line 1062 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
					base = mul;
				}
			} else {
				#line 1063 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				{
					#line 1064 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
					return nullptr;
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1069 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor_qst_eq($extension_Int32_540_i32 & $this , Builtin::u32 exp) noexcept -> typename $extension_Int32_540_i32&
	{
		#line 1071 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (auto result = ADV_UFCS(_operator_xor_xor_qst)($this, exp)) {
			{
				#line 1071 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 1072 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				return $this = result;
			}
		}
		#line 1074 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1077 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor_ne($extension_Int32_540_i32 const& $this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename $extension_Int32_540_i32
	{
		#line 1079 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1081 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return Builtin::i32(1);
		}
		#line 1084 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 1085 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Auto<decltype(Builtin::i32(1))> result = Builtin::i32(1); 
		#line 1087 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		for (;;) 
		{
			#line 1088 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 1089 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				ADV_UFCS(_operator_mul_ne_eq)(result, base);
				#line 1090 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				if (exp == Builtin::i32(1)) {
					#line 1091 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
					return result;
				}
			}
			#line 1093 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
			#line 1094 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			ADV_UFCS(_operator_mul_ne_eq)(base, base);
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1098 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor_ne_eq($extension_Int32_540_i32 & $this , Builtin::u32 exp)  -> typename $extension_Int32_540_i32&
	{
		#line 1098 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_xor_xor_ne)($this, exp)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor_mod($extension_Int32_540_i32 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename $extension_Int32_540_i32
	{
		#line 1102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return Builtin::i32(1);
		}
		#line 1107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 1108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Auto<decltype(Builtin::i32(1))> result = Builtin::i32(1); 
		#line 1110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (std::is_constant_evaluated()) {
			#line 1111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			while ((exp <=> Builtin::i32(1)) > 0) 
			{
				#line 1112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
					#line 1113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
					ADV_UFCS(_operator_mul_mod_eq)(result, base);
				}
				#line 1115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
				#line 1116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				ADV_UFCS(_operator_mul_mod_eq)(base, base);
			}
			#line 1118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return ADV_UFCS(_operator_mul_mod)(result, base);
		} else {
			#line 1119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			{
				#line 1120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				for (;;) 
				{
					#line 1121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
					if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
						#line 1122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
						ADV_UFCS(_operator_mul_mod_eq)(result, base);
						#line 1123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
						if (exp == Builtin::i32(1)) {
							#line 1124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
							return result;
						}
					}
					#line 1126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
					ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
					#line 1127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
					ADV_UFCS(_operator_mul_mod_eq)(base, base);
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor_mod_eq($extension_Int32_540_i32 & $this , Builtin::u32 exp) noexcept -> typename $extension_Int32_540_i32&
	{
		#line 1132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_xor_xor_mod)($this, exp)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor_or($extension_Int32_540_i32 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename $extension_Int32_540_i32
	{
		#line 1136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (const auto result = ADV_UFCS(_operator_xor_xor_qst)($this, exp)) {
			{
				#line 1136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 1137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				return result;
			}
		}
		#line 1140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return (ADV_UPCS(IsNegative)($this.$ref()) && exp % Builtin::i32(2) == Builtin::i32(1)) ? ADV_USPCS(MinValue, $extension_Int32_540_i32)() : ADV_USPCS(MaxValue, $extension_Int32_540_i32)();
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor_or_eq($extension_Int32_540_i32 & $this , Builtin::u32 exp) noexcept -> typename $extension_Int32_540_i32&
	{
		#line 1143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_xor_xor_or)($this, exp)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor_mod_qst($extension_Int32_540_i32 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const Builtin::Tuple<$extension_Int32_540_i32, bool>
	{
		#line 1147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return Builtin::MakeTuple(Builtin::i32(1), Builtin::Boolean(false));
		}
		#line 1152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 1153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Auto<decltype(Builtin::i32(1))> result = Builtin::i32(1); 
		#line 1154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Auto<decltype(Builtin::Boolean(false))> overflowed = Builtin::Boolean(false); 
		#line 1155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Auto<decltype(Builtin::MakeTuple(Builtin::i32(0), Builtin::Boolean(false)))> tmp = Builtin::MakeTuple(Builtin::i32(0), Builtin::Boolean(false)); 
		#line 1157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		for (;;) 
		{
			#line 1158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 1159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				tmp = ADV_UFCS(_operator_mul_mod_qst)(result, base);
				#line 1160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				if (exp == Builtin::i32(1)) {
					#line 1161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
					get<1>(tmp) |= overflowed;
					#line 1162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
					return tmp;
				}
				#line 1164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				result = get<0>(tmp);
				#line 1165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				overflowed |= get<1>(tmp);
			}
			#line 1167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
			#line 1168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			tmp = ADV_UFCS(_operator_mul_mod_qst)(base, base);
			#line 1169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			base = get<0>(tmp);
			#line 1170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			overflowed |= get<1>(tmp);
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getCheckedAbs($extension_Int32_540_i32 const & $this ) -> const Builtin::Nullable<$extension_Int32_540_i32>
	{
		#line 1176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)($this.$ref()) ? ADV_UFCS(_operator_sub_qst)($this) : $this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getStrictAbs($extension_Int32_540_i32 const & $this ) -> const $extension_Int32_540_i32
	{
		#line 1179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)($this.$ref()) ? ADV_UFCS(_operator_sub_ne)($this) : $this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getWrappingAbs($extension_Int32_540_i32 const & $this ) -> const $extension_Int32_540_i32
	{
		#line 1182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)($this.$ref()) ? ADV_UFCS(_operator_sub_mod)($this) : $this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getSaturatingAbs($extension_Int32_540_i32 const & $this ) -> const $extension_Int32_540_i32
	{
		#line 1185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)($this.$ref()) ? ADV_UFCS(_operator_sub_or)($this) : $this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getOverflowingAbs($extension_Int32_540_i32 const & $this ) -> const Builtin::Tuple<$extension_Int32_540_i32, bool>
	{
		#line 1190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (ADV_UPCS(IsNegative)($this.$ref())) {
			#line 1191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return ADV_UFCS(_operator_sub_mod_qst)($this);
		}
		#line 1193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return Builtin::MakeTuple($this, Builtin::Boolean(false));
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	
} namespace $extensions { using namespace System;
#line 1242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NextMultipleOf($extension_Int32_1197_i32 const& $this LIFETIMEBOUND, $extension_Int32_1197_i32 rhs)  -> const typename $extension_Int32_1197_i32
	{
		#line 1244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (rhs == Builtin::i32(-1)) {
			#line 1245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return $this;
		}
		#line 1248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		const Builtin::Auto<decltype($this % rhs)> remainder = $this % rhs; 
		#line 1249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		const Builtin::Auto<decltype(((remainder <=> Builtin::i32(0)) > 0 && (rhs <=> Builtin::i32(0)) < 0) || ((remainder <=> Builtin::i32(0)) < 0 && (rhs <=> Builtin::i32(0)) > 0) ? remainder + rhs : remainder)> mod = ((remainder <=> Builtin::i32(0)) > 0 && (rhs <=> Builtin::i32(0)) < 0) || ((remainder <=> Builtin::i32(0)) < 0 && (rhs <=> Builtin::i32(0)) > 0) ? remainder + rhs : remainder; 
		#line 1252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return mod == Builtin::i32(0) ? $this : $this + (rhs - mod);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto CheckedNextMultipleOf($extension_Int32_1197_i32 const& $this LIFETIMEBOUND, $extension_Int32_1197_i32 rhs) noexcept -> const Builtin::Nullable<$extension_Int32_1197_i32>
	{
		#line 1260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (rhs == Builtin::i32(-1)) {
			#line 1261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return $this;
		}
		#line 1264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		$extension_Int32_1197_i32 remainder{}; 
		#line 1265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (const auto r = ADV_UFCS(_operator_mod_qst)($this, rhs)) {
			{
				#line 1265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				auto __tmp0 = *r; const auto& r = __tmp0;
				
				#line 1266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				remainder = r;
			}
		} else {
			#line 1267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return nullptr;
		}
		#line 1269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		const Builtin::Auto<decltype(((remainder <=> Builtin::i32(0)) > 0 && (rhs <=> Builtin::i32(0)) < 0) || ((remainder <=> Builtin::i32(0)) < 0 && (rhs <=> Builtin::i32(0)) > 0) ? remainder + rhs : remainder)> mod = ((remainder <=> Builtin::i32(0)) > 0 && (rhs <=> Builtin::i32(0)) < 0) || ((remainder <=> Builtin::i32(0)) < 0 && (rhs <=> Builtin::i32(0)) > 0) ? remainder + rhs : remainder; 
		#line 1272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (mod == Builtin::i32(0)) {
			#line 1273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return $this;
		}
		#line 1275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return ADV_UFCS(_operator_add_qst)($this, (rhs - mod));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto $static_getIsSigned<$extension_Int32_1197_i32>::get() -> const bool
	{
		#line 1198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getTrailingZeroCount($extension_Int32_1197_i32 const & $this ) -> const Builtin::u32
	{
		#line 1200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::TrailingZeroCount($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getTrailingOneCount($extension_Int32_1197_i32 const & $this ) -> const Builtin::u32
	{
		#line 1201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::TrailingZeroCount(ADV_UFCS(_operator_not)($this))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getByteCount($extension_Int32_1197_i32 const & $this ) -> const Builtin::u32
	{
		#line 1202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u32>(Builtin::usize(sizeof($extension_Int32_1197_i32)))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getMinimalBitWidth($extension_Int32_1197_i32 const & $this ) -> const Builtin::u32
	{
		#line 1203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(BitWidth, $extension_Int32_1197_i32)() - ADV_UPCS(LeadingZeroCount)($this.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline auto getIsqrt($extension_Int32_1197_i32 const & $this ) -> const $extension_Int32_1197_i32
	{
		#line 1220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (const auto result = ADV_UPCS(CheckedIsqrt)($this.$ref())) {
			{
				#line 1220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 1221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				return result;
			}
		}
		#line 1223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getLog2Ceiling($extension_Int32_1197_i32 const & $this ) -> const $extension_Int32_1197_i32
	{
		#line 1230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Auto<decltype(ADV_UPCS(Log2)($this.$ref()))> result = ADV_UPCS(Log2)($this.$ref()); 
		#line 1231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (ADV_UPCS(PopCount)($this.$ref()) != Builtin::i32(1)) {
			#line 1232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			++result;
		}
		#line 1235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getPrevPow2($extension_Int32_1197_i32 const & $this ) -> const $extension_Int32_1197_i32
	{
		#line 1281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (($this <=> Builtin::i32(1)) <= 0) {
			#line 1282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return Builtin::i32(0);
		}
		#line 1285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return ADV_USPCS(One, $extension_Int32_1197_i32)() << (ADV_UPCS(MinimalBitWidth)($this.$ref()) - Builtin::i32(1));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getNextPow2($extension_Int32_1197_i32 const & $this ) -> const $extension_Int32_1197_i32
	{
		#line 1292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (($this <=> Builtin::i32(1)) <= 0) {
			#line 1293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return Builtin::i32(0);
		}
		#line 1296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		const Builtin::Auto<decltype($this - Builtin::i32(1))> p = $this - Builtin::i32(1); 
		#line 1297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return (ADV_USPCS(AllBitsSet, $extension_Int32_1197_i32)() >> ADV_UPCS(LeadingZeroCount)(p.$ref())) + Builtin::i32(1);
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getCheckedNextPow2($extension_Int32_1197_i32 const & $this ) -> const Builtin::Nullable<$extension_Int32_1197_i32>
	{
		#line 1304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (($this <=> Builtin::i32(1)) <= 0) {
			#line 1305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return Builtin::i32(0);
		}
		#line 1308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		const Builtin::Auto<decltype($this - Builtin::i32(1))> p = $this - Builtin::i32(1); 
		#line 1309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return ADV_UFCS(_operator_add_qst)((ADV_USPCS(AllBitsSet, $extension_Int32_1197_i32)() >> ADV_UPCS(LeadingZeroCount)(p.$ref())), Builtin::i32(1));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getWrappingNextPow2($extension_Int32_1197_i32 const & $this ) -> const $extension_Int32_1197_i32
	{
		#line 1316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (($this <=> Builtin::i32(1)) <= 0) {
			#line 1317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return Builtin::i32(0);
		}
		#line 1320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		const Builtin::Auto<decltype($this - Builtin::i32(1))> p = $this - Builtin::i32(1); 
		#line 1321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return ADV_UFCS(_operator_add_mod)((ADV_USPCS(AllBitsSet, $extension_Int32_1197_i32)() >> ADV_UPCS(LeadingZeroCount)(p.$ref())), Builtin::i32(1));
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	
} namespace $extensions { using namespace System;
#line 1358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto RotateLeft($extension_Int32_1325_i32 const& $this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename $extension_Int32_1325_i32
	{
		#line 1358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::BitsRotateLeft($this, shiftAmount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto RotateRight($extension_Int32_1325_i32 const& $this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename $extension_Int32_1325_i32
	{
		#line 1359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::BitsRotateRight($this, shiftAmount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto $static_getBitWidth<$extension_Int32_1325_i32>::get() -> const Builtin::u32
	{
		#line 1326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(32U)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getLeadingZeroCount($extension_Int32_1325_i32 const & $this ) -> const Builtin::u32
	{
		#line 1328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::LeadingZeroCount($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getLeadingOneCount($extension_Int32_1325_i32 const & $this ) -> const Builtin::u32
	{
		#line 1329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::LeadingZeroCount(ADV_UFCS(_operator_not)($this))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getPopCount($extension_Int32_1325_i32 const & $this ) -> const Builtin::u32
	{
		#line 1330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::PopCount($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getZeroCount($extension_Int32_1325_i32 const & $this ) -> const Builtin::u32
	{
		#line 1331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::PopCount(ADV_UFCS(_operator_not)($this))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getByteSwapped($extension_Int32_1325_i32 const & $this ) -> const $extension_Int32_1325_i32
	{
		#line 1332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i32>(Builtin::ByteSwap32(ADV_UFCS(NarrowToUInt32)($this.$ref())))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getBigEndian($extension_Int32_1325_i32 const & $this ) -> const $extension_Int32_1325_i32
	{
		#line 1335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if constexpr (Builtin::IsLittleEndian()) {
			#line 1336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return ADV_UPCS(ByteSwapped)($this.$ref());
		}
		#line 1338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return $this;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getLittleEndian($extension_Int32_1325_i32 const & $this ) -> const $extension_Int32_1325_i32
	{
		#line 1342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if constexpr (Builtin::IsBigEndian()) {
			#line 1343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return ADV_UPCS(ByteSwapped)($this.$ref());
		}
		#line 1345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return $this;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getReverseBits($extension_Int32_1325_i32 const & $this ) -> const $extension_Int32_1325_i32
	{
		#line 1347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::ReverseBits32($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getShortestBitLength($extension_Int32_1325_i32 const & $this ) -> const Builtin::u32
	{
		#line 1351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (($this <=> Builtin::i32(0)) >= 0) {
			#line 1352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return ADV_USPCS(BitWidth, $extension_Int32_1325_i32)() - ADV_UPCS(LeadingZeroCount)($this.$ref());
		}
		#line 1355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return ADV_USPCS(BitWidth, $extension_Int32_1325_i32)() + Builtin::u32(1U) - ADV_UPCS(LeadingOneCount)($this.$ref());
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	
} namespace $extensions { using namespace System;
#line 1371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto IsGreaterThanAsUnsigned($extension_Int32_1363_i32 const& $this LIFETIMEBOUND, $extension_Int32_1363_i32 rhs) noexcept -> const bool
	{
		#line 1371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY((ADV_UFCS(NarrowToUInt32)($this.$ref()) <=> ADV_UFCS(NarrowToUInt32)(rhs.$ref())) > 0); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto $static_getMaxDigitCount<$extension_Int32_1363_i32>::get() -> const Builtin::i32
	{
		#line 1364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(10)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto $static_getMaxHexDigitCount<$extension_Int32_1363_i32>::get() -> const Builtin::i32
	{
		#line 1365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(8)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto $static_getMaxValueDiv10<$extension_Int32_1363_i32>::get() -> const $extension_Int32_1363_i32
	{
		#line 1366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl)(ADV_USPCS(MaxValue, Builtin::i32)(), Builtin::i32(10))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getMultiplyBy10($extension_Int32_1363_i32 const & $this ) -> const $extension_Int32_1363_i32
	{
		#line 1368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_mod)($this, Builtin::i32(10))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getMultiplyBy16($extension_Int32_1363_i32 const & $this ) -> const $extension_Int32_1363_i32
	{
		#line 1369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_mod)($this, Builtin::i32(16))); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	

}