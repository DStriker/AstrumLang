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
namespace __Unsafe {} namespace __UInt8$Protected__Unsafe {}
//###############################################################################
//# Global type aliases
//###############################################################################
#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
using UInt8 = Builtin::u8;
#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
using Byte = Builtin::u8;
//###############################################################################
//# Type definitions
//###############################################################################
	} namespace $extensions { using namespace System;
#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	using $extension_UInt8_15_u8 = Builtin::u8;
	#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ADV_CHECK_INTERFACE(IMinMaxValue, IMinMaxValue);
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class __TT> struct $static_getMinValue; template<> struct $static_getMinValue<$extension_UInt8_15_u8> { static inline constexpr auto get() -> const $extension_UInt8_15_u8; };
	#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class __TT> struct $static_getMaxValue; template<> struct $static_getMaxValue<$extension_UInt8_15_u8> { static inline constexpr auto get() -> const $extension_UInt8_15_u8; };
	#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt8_15_u8, IMinMaxValue, IMinMaxValue, $extension_UInt8_15_u8);
	} namespace System{
using $extensions::$static_getMinValue;
using $extensions::$static_getMaxValue;

		} namespace $extensions { using namespace System;
#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	using $extension_UInt8_20_u8 = Builtin::u8;
	#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ASTRUMSTD_API auto _operator_eq_eq_mul($extension_UInt8_20_u8 const& $this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool;
	#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto operator<=>($extension_UInt8_20_u8 const& $this LIFETIMEBOUND, Builtin::Nullable<$extension_UInt8_20_u8> rhs) noexcept -> const Builtin::i32;
	#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_gt_gt_gt($extension_UInt8_20_u8 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_UInt8_20_u8;
	#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_gt_gt_gt_eq($extension_UInt8_20_u8 & $this , Builtin::i32 amount)  -> typename $extension_UInt8_20_u8&;
	#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_lt_lt_bsl($extension_UInt8_20_u8 const& $this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename $extension_UInt8_20_u8;
	#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_lt_lt_bsl_eq($extension_UInt8_20_u8 & $this , Builtin::u32 amount) noexcept -> typename $extension_UInt8_20_u8&;
	#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_gt_gt_bsl($extension_UInt8_20_u8 const& $this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename $extension_UInt8_20_u8;
	#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_gt_gt_bsl_eq($extension_UInt8_20_u8 & $this , Builtin::u32 amount) noexcept -> typename $extension_UInt8_20_u8&;
	#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getHashCode($extension_UInt8_20_u8 const& $this ) -> const Builtin::u64;
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
#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	using $extension_UInt8_73_u8 = Builtin::u8;
	#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ADV_CHECK_INTERFACE(IAbstractComparable, IAbstractComparable);
	#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ASTRUMSTD_API auto _operator_lt_eq_gt_mul($extension_UInt8_73_u8 const& $this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32;
	#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt8_73_u8, IAbstractComparable, IAbstractComparable, $extension_UInt8_73_u8);
	} namespace System{
using $extensions::_operator_lt_eq_gt_mul;

		} namespace $extensions { using namespace System;
#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	using $extension_UInt8_88_u8 = Builtin::u8;
	#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ADV_CHECK_INTERFACE(IConvertible, IConvertible);
	#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToBoolean($extension_UInt8_88_u8 const& $this LIFETIMEBOUND) noexcept -> const bool;
	#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToInt8($extension_UInt8_88_u8 const& $this LIFETIMEBOUND)  -> const Builtin::i8;
	#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToUInt8($extension_UInt8_88_u8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u8;
	#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToInt16($extension_UInt8_88_u8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i16;
	#line 98 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToUInt16($extension_UInt8_88_u8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u16;
	#line 99 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToInt32($extension_UInt8_88_u8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i32;
	#line 100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToUInt32($extension_UInt8_88_u8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u32;
	#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToInt64($extension_UInt8_88_u8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i64;
	#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToUInt64($extension_UInt8_88_u8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u64;
	#line 103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToInt128($extension_UInt8_88_u8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i128;
	#line 104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToUInt128($extension_UInt8_88_u8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u128;
	#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToIsize($extension_UInt8_88_u8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::isize;
	#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToUsize($extension_UInt8_88_u8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::usize;
	#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToFloat32($extension_UInt8_88_u8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::f32;
	#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToFloat64($extension_UInt8_88_u8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::f64;
	#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToByte($extension_UInt8_88_u8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u8;
	#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToChar($extension_UInt8_88_u8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::char32;
	#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt8_88_u8, IConvertible, IConvertible, $extension_UInt8_88_u8);
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
#line 115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	using $extension_UInt8_115_u8 = Builtin::u8;
	#line 115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ADV_CHECK_INTERFACE(IDivisibleArithmetic, IDivisibleArithmetic);
	#line 117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_div_mod($extension_UInt8_115_u8 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_UInt8_115_u8, $extension_UInt8_115_u8>;
	#line 123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_div_not($extension_UInt8_115_u8 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt8_115_u8;
	#line 130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_div_not_eq($extension_UInt8_115_u8 & $this , auto rhs)  -> typename $extension_UInt8_115_u8&;
	#line 132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_div_lt($extension_UInt8_115_u8 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt8_115_u8;
	#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_div_lt_eq($extension_UInt8_115_u8 & $this , auto rhs)  -> typename $extension_UInt8_115_u8&;
	#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mod_lt($extension_UInt8_115_u8 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt8_115_u8;
	#line 151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_mod_lt_eq($extension_UInt8_115_u8 & $this , auto rhs)  -> typename $extension_UInt8_115_u8&;
	#line 153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_div_gt($extension_UInt8_115_u8 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt8_115_u8;
	#line 163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_div_gt_eq($extension_UInt8_115_u8 & $this , auto rhs)  -> typename $extension_UInt8_115_u8&;
	#line 115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt8_115_u8, IDivisibleArithmetic, IDivisibleArithmetic, $extension_UInt8_115_u8);
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
#line 166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	using $extension_UInt8_166_u8 = Builtin::u8;
	#line 166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ADV_CHECK_INTERFACE(IIntegerDivisibleArithmetic, IIntegerDivisibleArithmetic);
	#line 168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_bsl($extension_UInt8_166_u8 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt8_166_u8;
	#line 170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_bsl_eq($extension_UInt8_166_u8 & $this , T rhs)  -> typename $extension_UInt8_166_u8&;
	#line 175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl($extension_UInt8_166_u8 const& $this LIFETIMEBOUND, T rhs)  -> const Builtin::Nullable<$extension_UInt8_166_u8>;
	#line 166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt8_166_u8, IIntegerDivisibleArithmetic, IIntegerDivisibleArithmetic, $extension_UInt8_166_u8);
	} namespace System{
using $extensions::_operator_bsl;
using $extensions::_operator_bsl_eq;
using $extensions::_operator_bsl_bsl;

		} namespace $extensions { using namespace System;
#line 186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	using $extension_UInt8_186_u8 = Builtin::u8;
	#line 186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ADV_CHECK_INTERFACE(IIntegerPowerArithmetic, IIntegerPowerArithmetic);
	#line 189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_xor_xor($extension_UInt8_186_u8 const& $this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename $extension_UInt8_186_u8;
	#line 221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_xor_xor_eq($extension_UInt8_186_u8 & $this , Builtin::u32 exp)  -> typename $extension_UInt8_186_u8&;
	#line 186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt8_186_u8, IIntegerPowerArithmetic, IIntegerPowerArithmetic, $extension_UInt8_186_u8);
	} namespace System{
using $extensions::_operator_xor_xor;
using $extensions::_operator_xor_xor_eq;

		} namespace $extensions { using namespace System;
#line 224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	using $extension_UInt8_224_u8 = Builtin::u8;
	#line 224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ADV_CHECK_INTERFACE(INumberBase, INumberBase);
	#line 248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto MaxMagnitude($extension_UInt8_224_u8 const& $this LIFETIMEBOUND, $extension_UInt8_224_u8 rhs) noexcept -> const typename $extension_UInt8_224_u8;
	#line 249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto MaxMagnitudeNumber($extension_UInt8_224_u8 const& $this LIFETIMEBOUND, $extension_UInt8_224_u8 rhs) noexcept -> const typename $extension_UInt8_224_u8;
	#line 251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto MinMagnitude($extension_UInt8_224_u8 const& $this LIFETIMEBOUND, $extension_UInt8_224_u8 rhs) noexcept -> const typename $extension_UInt8_224_u8;
	#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto MinMagnitudeNumber($extension_UInt8_224_u8 const& $this LIFETIMEBOUND, $extension_UInt8_224_u8 rhs) noexcept -> const typename $extension_UInt8_224_u8;
	#line 254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ASTRUMSTD_API auto Parse($extension_UInt8_224_u8 const& $this LIFETIMEBOUND, Builtin::Str input)  -> const typename $extension_UInt8_224_u8;
	#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ASTRUMSTD_API auto TryParse($extension_UInt8_224_u8 const& $this LIFETIMEBOUND, Builtin::Str input) noexcept -> const Builtin::Nullable<$extension_UInt8_224_u8>;
	#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto NarrowToInt8($extension_UInt8_224_u8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i8;
	#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto NarrowToUInt8($extension_UInt8_224_u8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u8;
	#line 267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto NarrowToInt16($extension_UInt8_224_u8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i16;
	#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto NarrowToUInt16($extension_UInt8_224_u8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u16;
	#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto NarrowToInt32($extension_UInt8_224_u8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i32;
	#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto NarrowToUInt32($extension_UInt8_224_u8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u32;
	#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto NarrowToInt64($extension_UInt8_224_u8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i64;
	#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto NarrowToUInt64($extension_UInt8_224_u8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u64;
	#line 273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto NarrowToInt128($extension_UInt8_224_u8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i128;
	#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto NarrowToUInt128($extension_UInt8_224_u8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u128;
	#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto NarrowToIsize($extension_UInt8_224_u8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::isize;
	#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto NarrowToUsize($extension_UInt8_224_u8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::usize;
	#line 225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class __TT> struct $static_getOne; template<> struct $static_getOne<$extension_UInt8_224_u8> { static inline constexpr auto get() -> const $extension_UInt8_224_u8; };
	#line 226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class __TT> struct $static_getZero; template<> struct $static_getZero<$extension_UInt8_224_u8> { static inline constexpr auto get() -> const $extension_UInt8_224_u8; };
	#line 227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class __TT> struct $static_getRadix; template<> struct $static_getRadix<$extension_UInt8_224_u8> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getAbs($extension_UInt8_224_u8 const& $this ) -> const $extension_UInt8_224_u8;
	#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsCanonical($extension_UInt8_224_u8 const& $this ) -> const bool;
	#line 231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsComplexNumber($extension_UInt8_224_u8 const& $this ) -> const bool;
	#line 232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsEvenInteger($extension_UInt8_224_u8 const& $this ) -> const bool;
	#line 233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsFinite($extension_UInt8_224_u8 const& $this ) -> const bool;
	#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsImaginaryNumber($extension_UInt8_224_u8 const& $this ) -> const bool;
	#line 235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsInfinity($extension_UInt8_224_u8 const& $this ) -> const bool;
	#line 236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsInteger($extension_UInt8_224_u8 const& $this ) -> const bool;
	#line 237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsNaN($extension_UInt8_224_u8 const& $this ) -> const bool;
	#line 238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsNegative($extension_UInt8_224_u8 const& $this ) -> const bool;
	#line 239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsNegativeInfinity($extension_UInt8_224_u8 const& $this ) -> const bool;
	#line 240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsNormal($extension_UInt8_224_u8 const& $this ) -> const bool;
	#line 241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsOddInteger($extension_UInt8_224_u8 const& $this ) -> const bool;
	#line 242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsPositive($extension_UInt8_224_u8 const& $this ) -> const bool;
	#line 243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsPositiveInfinity($extension_UInt8_224_u8 const& $this ) -> const bool;
	#line 244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsRealNumber($extension_UInt8_224_u8 const& $this ) -> const bool;
	#line 245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsSubnormal($extension_UInt8_224_u8 const& $this ) -> const bool;
	#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsZero($extension_UInt8_224_u8 const& $this ) -> const bool;
	#line 224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt8_224_u8, INumberBase, INumberBase, $extension_UInt8_224_u8);
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
#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	using $extension_UInt8_279_u8 = Builtin::u8;
	#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ADV_CHECK_INTERFACE(IUnsignedNumber, IUnsignedNumber);
	#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class __TT> struct $static_getIsUnsigned; template<> struct $static_getIsUnsigned<$extension_UInt8_279_u8> { static inline constexpr auto get() -> const bool; };
	#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt8_279_u8, IUnsignedNumber, IUnsignedNumber, $extension_UInt8_279_u8);
	} namespace System{
using $extensions::$static_getIsUnsigned;

		} namespace $extensions { using namespace System;
#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	using $extension_UInt8_283_u8 = Builtin::u8;
	#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ADV_CHECK_INTERFACE(INumber, INumber);
	#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto CopySign($extension_UInt8_283_u8 const& $this LIFETIMEBOUND, $extension_UInt8_283_u8 sign) noexcept -> const typename $extension_UInt8_283_u8;
	#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto Max($extension_UInt8_283_u8 const& $this LIFETIMEBOUND, $extension_UInt8_283_u8 rhs) noexcept -> const typename $extension_UInt8_283_u8;
	#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto MaxNumber($extension_UInt8_283_u8 const& $this LIFETIMEBOUND, $extension_UInt8_283_u8 rhs) noexcept -> const typename $extension_UInt8_283_u8;
	#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto Min($extension_UInt8_283_u8 const& $this LIFETIMEBOUND, $extension_UInt8_283_u8 rhs) noexcept -> const typename $extension_UInt8_283_u8;
	#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto MinNumber($extension_UInt8_283_u8 const& $this LIFETIMEBOUND, $extension_UInt8_283_u8 rhs) noexcept -> const typename $extension_UInt8_283_u8;
	#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto Clamp($extension_UInt8_283_u8 const& $this LIFETIMEBOUND, $extension_UInt8_283_u8 min, $extension_UInt8_283_u8 max)  -> const typename $extension_UInt8_283_u8;
	#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getSign($extension_UInt8_283_u8 const& $this ) -> const Builtin::i32;
	#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt8_283_u8, INumber, INumber, $extension_UInt8_283_u8);
	} namespace System{
using $extensions::CopySign;
using $extensions::Max;
using $extensions::MaxNumber;
using $extensions::Min;
using $extensions::MinNumber;
using $extensions::Clamp;
using $extensions::getSign;

		} namespace $extensions { using namespace System;
#line 295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	using $extension_UInt8_295_u8 = Builtin::u8;
	#line 295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ADV_CHECK_INTERFACE(IBinaryNumber, IBinaryNumber);
	#line 347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto CheckedLog($extension_UInt8_295_u8 const& $this LIFETIMEBOUND, $extension_UInt8_295_u8 base) noexcept -> const Builtin::Nullable<$extension_UInt8_295_u8>;
	#line 380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ASTRUMSTD_API auto Log($extension_UInt8_295_u8 const& $this LIFETIMEBOUND, $extension_UInt8_295_u8 base)  -> const typename $extension_UInt8_295_u8;
	#line 390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto Midpoint($extension_UInt8_295_u8 const& $this LIFETIMEBOUND, $extension_UInt8_295_u8 rhs) noexcept -> const typename $extension_UInt8_295_u8;
	#line 393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto IsMultipleOf($extension_UInt8_295_u8 const& $this LIFETIMEBOUND, $extension_UInt8_295_u8 rhs) noexcept -> const bool;
	#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class __TT> struct $static_getAllBitsSet; template<> struct $static_getAllBitsSet<$extension_UInt8_295_u8> { static inline constexpr auto get() -> const $extension_UInt8_295_u8; };
	#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsPow2($extension_UInt8_295_u8 const& $this ) -> const bool;
	#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getCheckedLog2($extension_UInt8_295_u8 const& $this ) -> const Builtin::Nullable<$extension_UInt8_295_u8>;
	#line 314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getLog2($extension_UInt8_295_u8 const& $this ) -> const $extension_UInt8_295_u8;
	#line 324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getCheckedLog10($extension_UInt8_295_u8 const& $this ) -> const Builtin::Nullable<$extension_UInt8_295_u8>;
	#line 337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getLog10($extension_UInt8_295_u8 const& $this ) -> const $extension_UInt8_295_u8;
	#line 295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt8_295_u8, IBinaryNumber, IBinaryNumber, $extension_UInt8_295_u8);
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
#line 403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	using $extension_UInt8_403_u8 = Builtin::u8;
	#line 403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ADV_CHECK_INTERFACE(ICheckedArithmetic, ICheckedArithmetic);
	#line 406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_add_qst($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_UInt8_403_u8>;
	#line 415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_add_qst_eq($extension_UInt8_403_u8 & $this , T rhs) noexcept -> typename $extension_UInt8_403_u8&;
	#line 426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_add_ne($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt8_403_u8;
	#line 433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_add_ne_eq($extension_UInt8_403_u8 & $this , T rhs)  -> typename $extension_UInt8_403_u8&;
	#line 437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_add_mod($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_UInt8_403_u8;
	#line 444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_add_mod_eq($extension_UInt8_403_u8 & $this , T rhs) noexcept -> typename $extension_UInt8_403_u8&;
	#line 448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_add_or($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_UInt8_403_u8;
	#line 455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_add_or_eq($extension_UInt8_403_u8 & $this , T rhs) noexcept -> typename $extension_UInt8_403_u8&;
	#line 459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_add_mod_qst($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_UInt8_403_u8, bool>;
	#line 467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_qst($extension_UInt8_403_u8 & $this )  -> typename $extension_UInt8_403_u8&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_qst_postfix($extension_UInt8_403_u8 & $this)  -> decltype(auto);
	#line 470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_ne($extension_UInt8_403_u8 & $this )  -> typename $extension_UInt8_403_u8&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_ne_postfix($extension_UInt8_403_u8 & $this)  -> decltype(auto);
	#line 473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_mod($extension_UInt8_403_u8 & $this )  -> typename $extension_UInt8_403_u8&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_mod_postfix($extension_UInt8_403_u8 & $this)  -> decltype(auto);
	#line 476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_or($extension_UInt8_403_u8 & $this )  -> typename $extension_UInt8_403_u8&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_or_postfix($extension_UInt8_403_u8 & $this)  -> decltype(auto);
	#line 480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto CarryingAdd($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, $extension_UInt8_403_u8 rhs, bool carry) noexcept -> const std::tuple<$extension_UInt8_403_u8, bool>;
	#line 489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto BorrowingSub($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, $extension_UInt8_403_u8 rhs, bool carry) noexcept -> const std::tuple<$extension_UInt8_403_u8, bool>;
	#line 498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_sub_qst($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_UInt8_403_u8>;
	#line 507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_sub_qst_eq($extension_UInt8_403_u8 & $this , T rhs) noexcept -> typename $extension_UInt8_403_u8&;
	#line 518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_sub_ne($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt8_403_u8;
	#line 525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_sub_ne_eq($extension_UInt8_403_u8 & $this , T rhs)  -> typename $extension_UInt8_403_u8&;
	#line 529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_sub_mod($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_UInt8_403_u8;
	#line 536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_sub_mod_eq($extension_UInt8_403_u8 & $this , T rhs) noexcept -> typename $extension_UInt8_403_u8&;
	#line 540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_sub_or($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_UInt8_403_u8;
	#line 547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_sub_or_eq($extension_UInt8_403_u8 & $this , T rhs) noexcept -> typename $extension_UInt8_403_u8&;
	#line 551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_sub_mod_qst($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_UInt8_403_u8, bool>;
	#line 559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_qst($extension_UInt8_403_u8 & $this )  -> typename $extension_UInt8_403_u8&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_qst_postfix($extension_UInt8_403_u8 & $this)  -> decltype(auto);
	#line 562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_ne($extension_UInt8_403_u8 & $this )  -> typename $extension_UInt8_403_u8&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_ne_postfix($extension_UInt8_403_u8 & $this)  -> decltype(auto);
	#line 565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_mod($extension_UInt8_403_u8 & $this )  -> typename $extension_UInt8_403_u8&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_mod_postfix($extension_UInt8_403_u8 & $this)  -> decltype(auto);
	#line 568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_or($extension_UInt8_403_u8 & $this )  -> typename $extension_UInt8_403_u8&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_or_postfix($extension_UInt8_403_u8 & $this)  -> decltype(auto);
	#line 572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mul_qst($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_UInt8_403_u8>;
	#line 581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mul_qst_eq($extension_UInt8_403_u8 & $this , T rhs) noexcept -> typename $extension_UInt8_403_u8&;
	#line 592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mul_ne($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt8_403_u8;
	#line 599 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mul_ne_eq($extension_UInt8_403_u8 & $this , T rhs)  -> typename $extension_UInt8_403_u8&;
	#line 603 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mul_mod($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_UInt8_403_u8;
	#line 610 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mul_mod_eq($extension_UInt8_403_u8 & $this , T rhs) noexcept -> typename $extension_UInt8_403_u8&;
	#line 614 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mul_or($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_UInt8_403_u8;
	#line 621 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mul_or_eq($extension_UInt8_403_u8 & $this , T rhs) noexcept -> typename $extension_UInt8_403_u8&;
	#line 625 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mul_mod_qst($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_UInt8_403_u8, bool>;
	#line 634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_mul_gt($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, $extension_UInt8_403_u8 rhs) noexcept -> const std::tuple<Builtin::u8, Builtin::u8>;
	#line 643 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto CarryingMul($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, $extension_UInt8_403_u8 rhs, $extension_UInt8_403_u8 carry) noexcept -> const std::tuple<Builtin::u8, Builtin::u8>;
	#line 651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_bsl_qst($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_UInt8_403_u8>;
	#line 660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_bsl_qst_eq($extension_UInt8_403_u8 & $this , T rhs) noexcept -> typename $extension_UInt8_403_u8&;
	#line 671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_bsl_ne($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt8_403_u8;
	#line 672 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_bsl_ne_eq($extension_UInt8_403_u8 & $this , T rhs)  -> typename $extension_UInt8_403_u8&;
	#line 676 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_bsl_mod($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt8_403_u8;
	#line 677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_eq($extension_UInt8_403_u8 & $this , T rhs)  -> typename $extension_UInt8_403_u8&;
	#line 681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_bsl_or($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt8_403_u8;
	#line 682 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_bsl_or_eq($extension_UInt8_403_u8 & $this , T rhs)  -> typename $extension_UInt8_403_u8&;
	#line 687 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_qst($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_UInt8_403_u8, bool>;
	#line 696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_UInt8_403_u8>;
	#line 706 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst_eq($extension_UInt8_403_u8 & $this , T rhs) noexcept -> typename $extension_UInt8_403_u8&;
	#line 717 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mod_qst($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_UInt8_403_u8>;
	#line 726 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mod_qst_eq($extension_UInt8_403_u8 & $this , T rhs) noexcept -> typename $extension_UInt8_403_u8&;
	#line 737 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mod_ne($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt8_403_u8;
	#line 738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mod_ne_eq($extension_UInt8_403_u8 & $this , T rhs)  -> typename $extension_UInt8_403_u8&;
	#line 742 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mod_mod($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt8_403_u8;
	#line 743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mod_mod_eq($extension_UInt8_403_u8 & $this , T rhs)  -> typename $extension_UInt8_403_u8&;
	#line 748 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mod_mod_qst($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_UInt8_403_u8, bool>;
	#line 757 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_sub_qst($extension_UInt8_403_u8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::Nullable<$extension_UInt8_403_u8>;
	#line 760 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline auto _operator_sub_ne($extension_UInt8_403_u8 const& $this LIFETIMEBOUND)  -> const typename $extension_UInt8_403_u8;
	#line 765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_sub_mod($extension_UInt8_403_u8 const& $this LIFETIMEBOUND)  -> const typename $extension_UInt8_403_u8;
	#line 773 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_sub_or($extension_UInt8_403_u8 const& $this LIFETIMEBOUND)  -> const typename $extension_UInt8_403_u8;
	#line 776 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_sub_mod_qst($extension_UInt8_403_u8 const& $this LIFETIMEBOUND)  -> const std::tuple<$extension_UInt8_403_u8, bool>;
	#line 784 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_lt_lt_qst($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<$extension_UInt8_403_u8>;
	#line 792 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_lt_lt_qst_eq($extension_UInt8_403_u8 & $this , Builtin::i32 amount) noexcept -> typename $extension_UInt8_403_u8&;
	#line 800 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_lt_lt_ne($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_UInt8_403_u8;
	#line 808 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_lt_lt_ne_eq($extension_UInt8_403_u8 & $this , Builtin::i32 amount)  -> typename $extension_UInt8_403_u8&;
	#line 810 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_lt_lt_mod($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename $extension_UInt8_403_u8;
	#line 813 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_lt_lt_mod_eq($extension_UInt8_403_u8 & $this , Builtin::i32 amount) noexcept -> typename $extension_UInt8_403_u8&;
	#line 815 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_lt_lt_mod_qst($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<$extension_UInt8_403_u8, bool>;
	#line 818 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_gt_gt_qst($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<$extension_UInt8_403_u8>;
	#line 826 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_gt_gt_qst_eq($extension_UInt8_403_u8 & $this , Builtin::i32 amount) noexcept -> typename $extension_UInt8_403_u8&;
	#line 834 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_gt_gt_ne($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_UInt8_403_u8;
	#line 842 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_gt_gt_ne_eq($extension_UInt8_403_u8 & $this , Builtin::i32 amount)  -> typename $extension_UInt8_403_u8&;
	#line 844 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_gt_gt_mod($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename $extension_UInt8_403_u8;
	#line 847 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_gt_gt_mod_eq($extension_UInt8_403_u8 & $this , Builtin::i32 amount) noexcept -> typename $extension_UInt8_403_u8&;
	#line 849 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_gt_gt_mod_qst($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<$extension_UInt8_403_u8, bool>;
	#line 854 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_xor_xor_qst($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const Builtin::Nullable<$extension_UInt8_403_u8>;
	#line 883 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_xor_xor_qst_eq($extension_UInt8_403_u8 & $this , Builtin::u32 exp) noexcept -> typename $extension_UInt8_403_u8&;
	#line 891 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_xor_xor_ne($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename $extension_UInt8_403_u8;
	#line 912 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_xor_xor_ne_eq($extension_UInt8_403_u8 & $this , Builtin::u32 exp)  -> typename $extension_UInt8_403_u8&;
	#line 914 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_xor_xor_mod($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename $extension_UInt8_403_u8;
	#line 946 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_xor_xor_mod_eq($extension_UInt8_403_u8 & $this , Builtin::u32 exp) noexcept -> typename $extension_UInt8_403_u8&;
	#line 948 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_xor_xor_or($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename $extension_UInt8_403_u8;
	#line 957 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_xor_xor_or_eq($extension_UInt8_403_u8 & $this , Builtin::u32 exp) noexcept -> typename $extension_UInt8_403_u8&;
	#line 959 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_xor_xor_mod_qst($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const std::tuple<$extension_UInt8_403_u8, bool>;
	#line 989 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getCheckedAbs($extension_UInt8_403_u8 const& $this ) -> const Builtin::Nullable<$extension_UInt8_403_u8>;
	#line 991 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getStrictAbs($extension_UInt8_403_u8 const& $this ) -> const $extension_UInt8_403_u8;
	#line 993 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getWrappingAbs($extension_UInt8_403_u8 const& $this ) -> const $extension_UInt8_403_u8;
	#line 995 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getSaturatingAbs($extension_UInt8_403_u8 const& $this ) -> const $extension_UInt8_403_u8;
	#line 997 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getOverflowingAbs($extension_UInt8_403_u8 const& $this ) -> const std::tuple<$extension_UInt8_403_u8, bool>;
	#line 403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt8_403_u8, ICheckedArithmetic, ICheckedArithmetic, $extension_UInt8_403_u8);
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
#line 1000 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	using $extension_UInt8_1000_u8 = Builtin::u8;
	#line 1000 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ADV_CHECK_INTERFACE(IBinaryInteger, IBinaryInteger);
	#line 1039 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto NextMultipleOf($extension_UInt8_1000_u8 const& $this LIFETIMEBOUND, $extension_UInt8_1000_u8 rhs)  -> const typename $extension_UInt8_1000_u8;
	#line 1047 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto CheckedNextMultipleOf($extension_UInt8_1000_u8 const& $this LIFETIMEBOUND, $extension_UInt8_1000_u8 rhs) noexcept -> const Builtin::Nullable<$extension_UInt8_1000_u8>;
	#line 1001 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class __TT> struct $static_getIsSigned; template<> struct $static_getIsSigned<$extension_UInt8_1000_u8> { static inline constexpr auto get() -> const bool; };
	#line 1003 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getTrailingZeroCount($extension_UInt8_1000_u8 const& $this ) -> const Builtin::u32;
	#line 1004 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getTrailingOneCount($extension_UInt8_1000_u8 const& $this ) -> const Builtin::u32;
	#line 1005 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getByteCount($extension_UInt8_1000_u8 const& $this ) -> const Builtin::u32;
	#line 1006 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getMinimalBitWidth($extension_UInt8_1000_u8 const& $this ) -> const Builtin::u32;
	#line 1009 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ASTRUMSTD_API auto getCheckedIsqrt($extension_UInt8_1000_u8 const& $this ) -> const Builtin::Nullable<$extension_UInt8_1000_u8>;
	#line 1016 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline auto getIsqrt($extension_UInt8_1000_u8 const& $this ) -> const $extension_UInt8_1000_u8;
	#line 1025 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getLog2Ceiling($extension_UInt8_1000_u8 const& $this ) -> const $extension_UInt8_1000_u8;
	#line 1059 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getPrevPow2($extension_UInt8_1000_u8 const& $this ) -> const $extension_UInt8_1000_u8;
	#line 1070 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getNextPow2($extension_UInt8_1000_u8 const& $this ) -> const $extension_UInt8_1000_u8;
	#line 1082 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getCheckedNextPow2($extension_UInt8_1000_u8 const& $this ) -> const Builtin::Nullable<$extension_UInt8_1000_u8>;
	#line 1094 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getWrappingNextPow2($extension_UInt8_1000_u8 const& $this ) -> const $extension_UInt8_1000_u8;
	#line 1000 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt8_1000_u8, IBinaryInteger, IBinaryInteger, $extension_UInt8_1000_u8);
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
#line 1105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	using $extension_UInt8_1105_u8 = Builtin::u8;
	#line 1105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ADV_CHECK_INTERFACE(IFixedWidthInteger, IFixedWidthInteger);
	#line 1119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto RotateLeft($extension_UInt8_1105_u8 const& $this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename $extension_UInt8_1105_u8;
	#line 1120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto RotateRight($extension_UInt8_1105_u8 const& $this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename $extension_UInt8_1105_u8;
	#line 1106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class __TT> struct $static_getBitWidth; template<> struct $static_getBitWidth<$extension_UInt8_1105_u8> { static inline constexpr auto get() -> const Builtin::u32; };
	#line 1108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getLeadingZeroCount($extension_UInt8_1105_u8 const& $this ) -> const Builtin::u32;
	#line 1109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getLeadingOneCount($extension_UInt8_1105_u8 const& $this ) -> const Builtin::u32;
	#line 1110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getPopCount($extension_UInt8_1105_u8 const& $this ) -> const Builtin::u32;
	#line 1111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getZeroCount($extension_UInt8_1105_u8 const& $this ) -> const Builtin::u32;
	#line 1112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getByteSwapped($extension_UInt8_1105_u8 const& $this ) -> const $extension_UInt8_1105_u8;
	#line 1113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getBigEndian($extension_UInt8_1105_u8 const& $this ) -> const $extension_UInt8_1105_u8;
	#line 1114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getLittleEndian($extension_UInt8_1105_u8 const& $this ) -> const $extension_UInt8_1105_u8;
	#line 1115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getReverseBits($extension_UInt8_1105_u8 const& $this ) -> const $extension_UInt8_1105_u8;
	#line 1117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getShortestBitLength($extension_UInt8_1105_u8 const& $this ) -> const Builtin::u32;
	#line 1105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt8_1105_u8, IFixedWidthInteger, IFixedWidthInteger, $extension_UInt8_1105_u8);
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
#line 1124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	using $extension_UInt8_1124_u8 = Builtin::u8;
	#line 1124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ADV_CHECK_INTERFACE(IBinaryIntegerFormatInfo, IBinaryIntegerFormatInfo);
	#line 1132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto IsGreaterThanAsUnsigned($extension_UInt8_1124_u8 const& $this LIFETIMEBOUND, $extension_UInt8_1124_u8 rhs) noexcept -> const bool;
	#line 1125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class __TT> struct $static_getMaxDigitCount; template<> struct $static_getMaxDigitCount<$extension_UInt8_1124_u8> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class __TT> struct $static_getMaxHexDigitCount; template<> struct $static_getMaxHexDigitCount<$extension_UInt8_1124_u8> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class __TT> struct $static_getMaxValueDiv10; template<> struct $static_getMaxValueDiv10<$extension_UInt8_1124_u8> { static inline constexpr auto get() -> const $extension_UInt8_1124_u8; };
	#line 1129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getMultiplyBy10($extension_UInt8_1124_u8 const& $this ) -> const $extension_UInt8_1124_u8;
	#line 1130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getMultiplyBy16($extension_UInt8_1124_u8 const& $this ) -> const $extension_UInt8_1124_u8;
	#line 1124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt8_1124_u8, IBinaryIntegerFormatInfo, IBinaryIntegerFormatInfo, $extension_UInt8_1124_u8);
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
template<class __TT> struct $static_IsComplexNumber;
template<class __TT> struct $static_getIsComplexNumber;
template<class __TT> struct $static_MaxValue;
template<class __TT> struct $static_getMaxValue;
template<class __TT> struct $static_PopCount;
template<class __TT> struct $static_getPopCount;
template<class __TT> struct $static_BitWidth;
template<class __TT> struct $static_getBitWidth;
template<class __TT> struct $static_AllBitsSet;
template<class __TT> struct $static_getAllBitsSet;
template<class __TT> struct $static_SafeNegate;
template<class __TT> struct $static_getSafeNegate;
template<class __TT> struct $static_TrailingZeroCount;
template<class __TT> struct $static_getTrailingZeroCount;
template<class __TT> struct $static_IsPositiveInfinity;
template<class __TT> struct $static_getIsPositiveInfinity;
template<class __TT> struct $static_InvalidOperationException;
template<class __TT> struct $static_getInvalidOperationException;
template<class __TT> struct $static_CheckedLog2;
template<class __TT> struct $static_getCheckedLog2;
template<class __TT> struct $static_DefaultClamp;
template<class __TT> struct $static_getDefaultClamp;
template<class __TT> struct $static_IsCanonical;
template<class __TT> struct $static_getIsCanonical;
template<class __TT> struct $static_IsInteger;
template<class __TT> struct $static_getIsInteger;
template<class __TT> struct $static_CheckedLog10;
template<class __TT> struct $static_getCheckedLog10;
template<class __TT> struct $static_IsFinite;
template<class __TT> struct $static_getIsFinite;
template<class __TT> struct $static_Isqrt8;
template<class __TT> struct $static_getIsqrt8;
template<class __TT> struct $static_SaturatingMultiply;
template<class __TT> struct $static_getSaturatingMultiply;
template<class __TT> struct $static_CheckedIsqrt;
template<class __TT> struct $static_getCheckedIsqrt;
template<class __TT> struct $static_Log2;
template<class __TT> struct $static_getLog2;
template<class __TT> struct $static_One;
template<class __TT> struct $static_getOne;
template<class __TT> struct $static_MinimalBitWidth;
template<class __TT> struct $static_getMinimalBitWidth;
template<class __TT> struct $static_ReverseBits8u;
template<class __TT> struct $static_getReverseBits8u;
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
template<class __TT> struct $static_IsRealNumber;
template<class __TT> struct $static_getIsRealNumber;
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
template<class __TT> struct $static_WrappingNegate;
template<class __TT> struct $static_getWrappingNegate;
template<class __TT> struct $static_Min;
template<class __TT> struct $static_getMin;
template<class __TT> struct $static_DefaultMax;
template<class __TT> struct $static_getDefaultMax;
template<class __TT> struct $static_DefaultMin;
template<class __TT> struct $static_getDefaultMin;
template<class __TT> struct $static_IsPositive;
template<class __TT> struct $static_getIsPositive;
template<class __TT> struct $static_IsNegative;
template<class __TT> struct $static_getIsNegative;
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
template<class __TT> struct $static_SafeDivExact;
template<class __TT> struct $static_getSafeDivExact;
template<class __TT> struct $static_BorrowingSub;
template<class __TT> struct $static_getBorrowingSub;
template<class __TT> struct $static_CarryingMul8u;
template<class __TT> struct $static_getCarryingMul8u;
template<class __TT> struct $static_MultiplyBy10;
template<class __TT> struct $static_getMultiplyBy10;
template<class __TT> struct $static_WrappingSubtract;
template<class __TT> struct $static_getWrappingSubtract;
template<class __TT> struct $static_SafeMultiply;
template<class __TT> struct $static_getSafeMultiply;
template<class __TT> struct $static_HashCode;
template<class __TT> struct $static_getHashCode;
template<class __TT> struct $static_WideningMul8u;
template<class __TT> struct $static_getWideningMul8u;
template<class __TT> struct $static_SafeDivide;
template<class __TT> struct $static_getSafeDivide;
template<class __TT> struct $static_SafeModulus;
template<class __TT> struct $static_getSafeModulus;
template<class __TT> struct $static_BitsRotateLeft;
template<class __TT> struct $static_getBitsRotateLeft;
template<class __TT> struct $static_ToUInt32;
template<class __TT> struct $static_getToUInt32;
template<class __TT> struct $static_NarrowToInt8;
template<class __TT> struct $static_getNarrowToInt8;
template<class __TT> struct $static_Abs;
template<class __TT> struct $static_getAbs;
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
template<class __TT> struct $static_ByteCount;
template<class __TT> struct $static_getByteCount;
template<class __TT> struct $static_ByteSwapped;
template<class __TT> struct $static_getByteSwapped;
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
#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto $static_getMinValue<$extension_UInt8_15_u8>::get() -> const $extension_UInt8_15_u8
	{
		#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(Builtin::u8(0U)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto $static_getMaxValue<$extension_UInt8_15_u8>::get() -> const $extension_UInt8_15_u8
	{
		#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(Builtin::u8(255U)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	
} namespace $extensions { using namespace System;
#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto operator<=>($extension_UInt8_20_u8 const& $this LIFETIMEBOUND, Builtin::Nullable<$extension_UInt8_20_u8> rhs) noexcept -> const Builtin::i32
	{
		#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		{
			#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			if ((!Builtin::Is(rhs, nullptr))) {
				#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				auto __tmp0 = *rhs; const auto& rhs = __tmp0;
				
				#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				return $this <=> rhs;
			}
		}
		#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return Builtin::i32(1);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_gt_gt_gt($extension_UInt8_20_u8 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_UInt8_20_u8
	{
		#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this >> amount); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_gt_gt_gt_eq($extension_UInt8_20_u8 & $this , Builtin::i32 amount)  -> typename $extension_UInt8_20_u8&
	{
		#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this >>= amount); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_lt_lt_bsl($extension_UInt8_20_u8 const& $this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename $extension_UInt8_20_u8
	{
		#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if ((amount <=> ADV_USPCS(BitWidth, $extension_UInt8_20_u8)()) >= 0) {
			#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return Builtin::u8(0U);
		}
		#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return Builtin::UncheckedShiftLeft($this, Builtin::Cast<true, Builtin::i32>(amount));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_lt_lt_bsl_eq($extension_UInt8_20_u8 & $this , Builtin::u32 amount) noexcept -> typename $extension_UInt8_20_u8&
	{
		#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_lt_lt_bsl)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_gt_gt_bsl($extension_UInt8_20_u8 const& $this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename $extension_UInt8_20_u8
	{
		#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if ((amount <=> ADV_USPCS(BitWidth, $extension_UInt8_20_u8)()) >= 0) {
			#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return Builtin::u8(0U);
		}
		#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return Builtin::UncheckedShiftRight($this, Builtin::Cast<true, Builtin::i32>(amount));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_gt_gt_bsl_eq($extension_UInt8_20_u8 & $this , Builtin::u32 amount) noexcept -> typename $extension_UInt8_20_u8&
	{
		#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_gt_gt_bsl)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getHashCode($extension_UInt8_20_u8 const & $this ) -> const Builtin::u64
	{
		#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	
} namespace $extensions { using namespace System;
#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToBoolean($extension_UInt8_88_u8 const& $this LIFETIMEBOUND) noexcept -> const bool
	{
		#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this != Builtin::i32(0)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToInt8($extension_UInt8_88_u8 const& $this LIFETIMEBOUND)  -> const Builtin::i8
	{
		#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (($this <=> Builtin::i32(0x7F)) > 0) {
			#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return Builtin::Cast<true, Builtin::i8>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToUInt8($extension_UInt8_88_u8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u8
	{
		#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToInt16($extension_UInt8_88_u8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i16
	{
		#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 98 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToUInt16($extension_UInt8_88_u8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u16
	{
		#line 98 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 99 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToInt32($extension_UInt8_88_u8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i32
	{
		#line 99 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToUInt32($extension_UInt8_88_u8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u32
	{
		#line 100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToInt64($extension_UInt8_88_u8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i64
	{
		#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToUInt64($extension_UInt8_88_u8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u64
	{
		#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToInt128($extension_UInt8_88_u8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i128
	{
		#line 103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToUInt128($extension_UInt8_88_u8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u128
	{
		#line 104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToIsize($extension_UInt8_88_u8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::isize
	{
		#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToUsize($extension_UInt8_88_u8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::usize
	{
		#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToFloat32($extension_UInt8_88_u8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::f32
	{
		#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToFloat64($extension_UInt8_88_u8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::f64
	{
		#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToByte($extension_UInt8_88_u8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u8
	{
		#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToChar($extension_UInt8_88_u8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::char32
	{
		#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	
} namespace $extensions { using namespace System;
#line 117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_div_mod($extension_UInt8_115_u8 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_UInt8_115_u8, $extension_UInt8_115_u8>
	{
		#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator /% implemented only for integer types");
		#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return std::make_tuple(ADV_UFCS(_operator_bsl)($this, rhs), $this % rhs);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_div_not($extension_UInt8_115_u8 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt8_115_u8
	{
		#line 125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::Auto<decltype($this)> result = $this; 
		#line 126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		result /= rhs;
		#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_div_not_eq($extension_UInt8_115_u8 & $this , auto rhs)  -> typename $extension_UInt8_115_u8&
	{
		#line 130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this /= rhs); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_div_lt($extension_UInt8_115_u8 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt8_115_u8
	{
		#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if constexpr (Builtin::TypeIs<T, IBinaryInteger>()) {
			#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return ADV_UFCS(_operator_bsl)($this, rhs);
		} else {
			#line 136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			{
				#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				return Builtin::Cast<true, $extension_UInt8_115_u8>((ADV_UFCS(_operator_div_lt)(Builtin::f64{$this}, rhs)));
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_div_lt_eq($extension_UInt8_115_u8 & $this , auto rhs)  -> typename $extension_UInt8_115_u8&
	{
		#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this = $extension_UInt8_115_u8{ADV_UFCS(_operator_div_lt)($this, rhs)}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mod_lt($extension_UInt8_115_u8 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt8_115_u8
	{
		#line 145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		const Builtin::Auto<decltype($this % rhs)> result = $this % rhs; 
		#line 146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_gt_gt_gt)((result ^ rhs), Builtin::i32{ADV_USPCS(BitWidth, $extension_UInt8_115_u8)() - Builtin::i32(1)}))> signDiff = ADV_UFCS(_operator_gt_gt_gt)((result ^ rhs), Builtin::i32{ADV_USPCS(BitWidth, $extension_UInt8_115_u8)() - Builtin::i32(1)}); 
		#line 147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		const Builtin::Auto<decltype((result != Builtin::i32(0)) & (signDiff != Builtin::i32(0)))> needAdjust = (result != Builtin::i32(0)) & (signDiff != Builtin::i32(0)); 
		#line 148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return result + (needAdjust ? rhs : T{});
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_mod_lt_eq($extension_UInt8_115_u8 & $this , auto rhs)  -> typename $extension_UInt8_115_u8&
	{
		#line 151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this = $extension_UInt8_115_u8{ADV_UFCS(_operator_mod_lt)($this, rhs)}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_div_gt($extension_UInt8_115_u8 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt8_115_u8
	{
		#line 155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if constexpr (Builtin::TypeIs<T, IBinaryInteger>()) {
			#line 156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			const auto& [div, rem] = ADV_UFCS(_operator_div_mod)($this, rhs);
			#line 157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return (rem <=> Builtin::i32(0)) > 0 ? div + Builtin::i32(1) : div;
		} else {
			#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			{
				#line 159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				return Builtin::Cast<true, $extension_UInt8_115_u8>((ADV_UFCS(_operator_div_gt)(Builtin::f64{$this}, rhs)));
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_div_gt_eq($extension_UInt8_115_u8 & $this , auto rhs)  -> typename $extension_UInt8_115_u8&
	{
		#line 163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this = $extension_UInt8_115_u8{ADV_UFCS(_operator_div_gt)($this, rhs)}); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	
} namespace $extensions { using namespace System;
#line 168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_bsl($extension_UInt8_166_u8 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt8_166_u8
	{
		#line 168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Div)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_bsl_eq($extension_UInt8_166_u8 & $this , T rhs)  -> typename $extension_UInt8_166_u8&
	{
		#line 170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(DivAssign)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl($extension_UInt8_166_u8 const& $this LIFETIMEBOUND, T rhs)  -> const Builtin::Nullable<$extension_UInt8_166_u8>
	{
		#line 177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\? implemented only for integer types");
		#line 178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		$extension_UInt8_166_u8 result{}; 
		#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (Builtin::DivExact($this, rhs, result)) {
			#line 180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return result;
		}
		#line 182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return nullptr;
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	
} namespace $extensions { using namespace System;
#line 189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_xor_xor($extension_UInt8_186_u8 const& $this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename $extension_UInt8_186_u8
	{
		#line 191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return Builtin::u8(1U);
		}
		#line 196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::Auto<decltype(Builtin::u8(1U))> result = Builtin::u8(1U); 
		#line 199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (std::is_constant_evaluated()) {
			#line 200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			while ((exp <=> Builtin::i32(1)) > 0) 
			{
				#line 201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
					#line 202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
					result *= base;
				}
				#line 204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
				#line 205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				base *= base;
			}
			#line 207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return result * base;
		} else {
			#line 208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			{
				#line 209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				for (;;) 
				{
					#line 210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
					if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
						#line 211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
						result *= base;
						#line 212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
						if (exp == Builtin::i32(1)) {
							#line 213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
							return result;
						}
					}
					#line 215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
					ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
					#line 216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
					base *= base;
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_xor_xor_eq($extension_UInt8_186_u8 & $this , Builtin::u32 exp)  -> typename $extension_UInt8_186_u8&
	{
		#line 221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_xor_xor)($this, exp)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	
} namespace $extensions { using namespace System;
#line 248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto MaxMagnitude($extension_UInt8_224_u8 const& $this LIFETIMEBOUND, $extension_UInt8_224_u8 rhs) noexcept -> const typename $extension_UInt8_224_u8
	{
		#line 248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Max)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto MaxMagnitudeNumber($extension_UInt8_224_u8 const& $this LIFETIMEBOUND, $extension_UInt8_224_u8 rhs) noexcept -> const typename $extension_UInt8_224_u8
	{
		#line 249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Max)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto MinMagnitude($extension_UInt8_224_u8 const& $this LIFETIMEBOUND, $extension_UInt8_224_u8 rhs) noexcept -> const typename $extension_UInt8_224_u8
	{
		#line 251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Min)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto MinMagnitudeNumber($extension_UInt8_224_u8 const& $this LIFETIMEBOUND, $extension_UInt8_224_u8 rhs) noexcept -> const typename $extension_UInt8_224_u8
	{
		#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Min)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto NarrowToInt8($extension_UInt8_224_u8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i8
	{
		#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i8>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto NarrowToUInt8($extension_UInt8_224_u8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u8
	{
		#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto NarrowToInt16($extension_UInt8_224_u8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i16
	{
		#line 267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto NarrowToUInt16($extension_UInt8_224_u8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u16
	{
		#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto NarrowToInt32($extension_UInt8_224_u8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i32
	{
		#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto NarrowToUInt32($extension_UInt8_224_u8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u32
	{
		#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto NarrowToInt64($extension_UInt8_224_u8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i64
	{
		#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto NarrowToUInt64($extension_UInt8_224_u8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u64
	{
		#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto NarrowToInt128($extension_UInt8_224_u8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i128
	{
		#line 273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto NarrowToUInt128($extension_UInt8_224_u8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u128
	{
		#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto NarrowToIsize($extension_UInt8_224_u8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::isize
	{
		#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto NarrowToUsize($extension_UInt8_224_u8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::usize
	{
		#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto $static_getOne<$extension_UInt8_224_u8>::get() -> const $extension_UInt8_224_u8
	{
		#line 225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(Builtin::u8(1U)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto $static_getZero<$extension_UInt8_224_u8>::get() -> const $extension_UInt8_224_u8
	{
		#line 226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(Builtin::u8(0U)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto $static_getRadix<$extension_UInt8_224_u8>::get() -> const Builtin::i32
	{
		#line 227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(2)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getAbs($extension_UInt8_224_u8 const & $this ) -> const $extension_UInt8_224_u8
	{
		#line 229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsCanonical($extension_UInt8_224_u8 const & $this ) -> const bool
	{
		#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsComplexNumber($extension_UInt8_224_u8 const & $this ) -> const bool
	{
		#line 231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsEvenInteger($extension_UInt8_224_u8 const & $this ) -> const bool
	{
		#line 232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(($this & Builtin::u8(1U)) == Builtin::i32(0)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsFinite($extension_UInt8_224_u8 const & $this ) -> const bool
	{
		#line 233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsImaginaryNumber($extension_UInt8_224_u8 const & $this ) -> const bool
	{
		#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsInfinity($extension_UInt8_224_u8 const & $this ) -> const bool
	{
		#line 235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsInteger($extension_UInt8_224_u8 const & $this ) -> const bool
	{
		#line 236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsNaN($extension_UInt8_224_u8 const & $this ) -> const bool
	{
		#line 237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsNegative($extension_UInt8_224_u8 const & $this ) -> const bool
	{
		#line 238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsNegativeInfinity($extension_UInt8_224_u8 const & $this ) -> const bool
	{
		#line 239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsNormal($extension_UInt8_224_u8 const & $this ) -> const bool
	{
		#line 240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this != Builtin::i32(0)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsOddInteger($extension_UInt8_224_u8 const & $this ) -> const bool
	{
		#line 241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(($this & Builtin::u8(1U)) != Builtin::i32(0)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsPositive($extension_UInt8_224_u8 const & $this ) -> const bool
	{
		#line 242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsPositiveInfinity($extension_UInt8_224_u8 const & $this ) -> const bool
	{
		#line 243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsRealNumber($extension_UInt8_224_u8 const & $this ) -> const bool
	{
		#line 244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsSubnormal($extension_UInt8_224_u8 const & $this ) -> const bool
	{
		#line 245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsZero($extension_UInt8_224_u8 const & $this ) -> const bool
	{
		#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this == Builtin::i32(0)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	
} namespace $extensions { using namespace System;
#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto $static_getIsUnsigned<$extension_UInt8_279_u8>::get() -> const bool
	{
		#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	
} namespace $extensions { using namespace System;
#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto CopySign($extension_UInt8_283_u8 const& $this LIFETIMEBOUND, $extension_UInt8_283_u8 sign) noexcept -> const typename $extension_UInt8_283_u8
	{
		#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto Max($extension_UInt8_283_u8 const& $this LIFETIMEBOUND, $extension_UInt8_283_u8 rhs) noexcept -> const typename $extension_UInt8_283_u8
	{
		#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultMax)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto MaxNumber($extension_UInt8_283_u8 const& $this LIFETIMEBOUND, $extension_UInt8_283_u8 rhs) noexcept -> const typename $extension_UInt8_283_u8
	{
		#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Max)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto Min($extension_UInt8_283_u8 const& $this LIFETIMEBOUND, $extension_UInt8_283_u8 rhs) noexcept -> const typename $extension_UInt8_283_u8
	{
		#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultMin)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto MinNumber($extension_UInt8_283_u8 const& $this LIFETIMEBOUND, $extension_UInt8_283_u8 rhs) noexcept -> const typename $extension_UInt8_283_u8
	{
		#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Min)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto Clamp($extension_UInt8_283_u8 const& $this LIFETIMEBOUND, $extension_UInt8_283_u8 min, $extension_UInt8_283_u8 max)  -> const typename $extension_UInt8_283_u8
	{
		#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultClamp)($this, min, max)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getSign($extension_UInt8_283_u8 const & $this ) -> const Builtin::i32
	{
		#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this == Builtin::i32(0) ? Builtin::i32(0) : +Builtin::i32(1)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	
} namespace $extensions { using namespace System;
#line 347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto CheckedLog($extension_UInt8_295_u8 const& $this LIFETIMEBOUND, $extension_UInt8_295_u8 base) noexcept -> const Builtin::Nullable<$extension_UInt8_295_u8>
	{
		#line 349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if ($this == Builtin::i32(0) || (base <=> Builtin::i32(1)) <= 0) {
			#line 350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return nullptr;
		}
		#line 353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (std::is_constant_evaluated()) {
			#line 354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			if (base == Builtin::i32(2)) {
				#line 355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				return ADV_UPCS(CheckedLog2)($this.$ref());
			}
			#line 357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			if (base == Builtin::i32(10)) {
				#line 358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				return ADV_UPCS(CheckedLog10)($this.$ref());
			}
		}
		#line 362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (($this <=> base) < 0) {
			#line 363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return Builtin::u8(0U);
		}
		#line 366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		$extension_UInt8_295_u8 n = Builtin::u8(1U); 
		#line 367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::Auto<decltype(base)> r = base; 
		#line 368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_bsl)($this, base))> baseRatio = ADV_UFCS(_operator_bsl)($this, base); 
		#line 369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		while ((r <=> baseRatio) <= 0) 
		{
			#line 370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			++n;
			#line 371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			r *= base;
		}
		#line 374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return n;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto Midpoint($extension_UInt8_295_u8 const& $this LIFETIMEBOUND, $extension_UInt8_295_u8 rhs) noexcept -> const typename $extension_UInt8_295_u8
	{
		#line 390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY((($this ^ rhs) >> Builtin::i32(1)) + ($this & rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto IsMultipleOf($extension_UInt8_295_u8 const& $this LIFETIMEBOUND, $extension_UInt8_295_u8 rhs) noexcept -> const bool
	{
		#line 395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (rhs == Builtin::i32(0)) {
			#line 396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return $this == Builtin::i32(0);
		}
		#line 399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return $this % rhs == Builtin::i32(0);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto $static_getAllBitsSet<$extension_UInt8_295_u8>::get() -> const $extension_UInt8_295_u8
	{
		#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(MaxValue, Builtin::u8)()); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsPow2($extension_UInt8_295_u8 const & $this ) -> const bool
	{
		#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(PopCount)($this.$ref()) == Builtin::i32(1)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getCheckedLog2($extension_UInt8_295_u8 const & $this ) -> const Builtin::Nullable<$extension_UInt8_295_u8>
	{
		#line 306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if ($this == Builtin::i32(0)) {
			#line 307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return nullptr;
		}
		#line 310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return Builtin::Cast<true, $extension_UInt8_295_u8>((ADV_USPCS(BitWidth, $extension_UInt8_295_u8)() - Builtin::i32(1) - ADV_UPCS(LeadingZeroCount)($this.$ref())));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getLog2($extension_UInt8_295_u8 const & $this ) -> const $extension_UInt8_295_u8
	{
		#line 316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (const auto result = ADV_UPCS(CheckedLog2)($this.$ref())) {
			{
				#line 316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				return result;
			}
		}
		#line 319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getCheckedLog10($extension_UInt8_295_u8 const & $this ) -> const Builtin::Nullable<$extension_UInt8_295_u8>
	{
		#line 326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if ($this == Builtin::i32(0)) {
			#line 327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return nullptr;
		}
		#line 330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::u32>($this))> val = Builtin::Cast<true, Builtin::u32>($this); 
		#line 331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		constexpr Builtin::u32 C1 = Builtin::u32(0b1100000000U) - Builtin::i32(10);
		#line 332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		constexpr Builtin::u32 C2 = Builtin::u32(0b1000000000U) - Builtin::i32(100);
		#line 333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return Builtin::Cast<true, $extension_UInt8_295_u8>((((val + C1) & (val + C2)) >> Builtin::i32(8)));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getLog10($extension_UInt8_295_u8 const & $this ) -> const $extension_UInt8_295_u8
	{
		#line 339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (const auto result = ADV_UPCS(CheckedLog10)($this.$ref())) {
			{
				#line 339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				return result;
			}
		}
		#line 342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	
} namespace $extensions { using namespace System;
#line 406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_add_qst($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_UInt8_403_u8>
	{
		#line 408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +? implemented only for integer types");
		#line 409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		$extension_UInt8_403_u8 result{}; 
		#line 410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (Builtin::SafeAdd($this, rhs, result)) {
			#line 411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return result;
		}
		#line 413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_add_qst_eq($extension_UInt8_403_u8 & $this , T rhs) noexcept -> typename $extension_UInt8_403_u8&
	{
		#line 417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +?= implemented only for integer types");
		#line 418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (const auto result = ADV_UFCS(_operator_add_qst)($this, rhs)) {
			{
				#line 418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				$this = result;
			}
		}
		#line 421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_add_ne($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt8_403_u8
	{
		#line 428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +! implemented only for integer types");
		#line 429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		$extension_UInt8_403_u8 result{}; 
		#line 430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::StrictAdd($this, rhs, result);
		#line 431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_add_ne_eq($extension_UInt8_403_u8 & $this , T rhs)  -> typename $extension_UInt8_403_u8&
	{
		#line 433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_add_ne)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_add_mod($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_UInt8_403_u8
	{
		#line 439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +% implemented only for integer types");
		#line 440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		$extension_UInt8_403_u8 result{}; 
		#line 441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::WrappingAdd($this, rhs, result);
		#line 442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_add_mod_eq($extension_UInt8_403_u8 & $this , T rhs) noexcept -> typename $extension_UInt8_403_u8&
	{
		#line 444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_add_mod)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_add_or($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_UInt8_403_u8
	{
		#line 450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +| implemented only for integer types");
		#line 451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		$extension_UInt8_403_u8 result{}; 
		#line 452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::SaturatingAdd($this, rhs, result);
		#line 453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_add_or_eq($extension_UInt8_403_u8 & $this , T rhs) noexcept -> typename $extension_UInt8_403_u8&
	{
		#line 455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_add_or)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_add_mod_qst($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_UInt8_403_u8, bool>
	{
		#line 460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +%? implemented only for integer types");
		#line 461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		$extension_UInt8_403_u8 result{}; 
		#line 462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::Auto<decltype(!Builtin::SafeAdd($this, rhs, result))> overflowed = !Builtin::SafeAdd($this, rhs, result); 
		#line 463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_add_add_qst($extension_UInt8_403_u8 & $this )  -> typename $extension_UInt8_403_u8&
	{
		#line 467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_qst_eq)($this, Builtin::u8(1U))); 
	}
	inline constexpr auto _operator_add_add_qst_postfix($extension_UInt8_403_u8 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_add_add_qst)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_add_add_ne($extension_UInt8_403_u8 & $this )  -> typename $extension_UInt8_403_u8&
	{
		#line 470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_ne_eq)($this, Builtin::u8(1U))); 
	}
	inline constexpr auto _operator_add_add_ne_postfix($extension_UInt8_403_u8 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_add_add_ne)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_add_add_mod($extension_UInt8_403_u8 & $this )  -> typename $extension_UInt8_403_u8&
	{
		#line 473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_mod_eq)($this, Builtin::u8(1U))); 
	}
	inline constexpr auto _operator_add_add_mod_postfix($extension_UInt8_403_u8 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_add_add_mod)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_add_add_or($extension_UInt8_403_u8 & $this )  -> typename $extension_UInt8_403_u8&
	{
		#line 476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_or_eq)($this, Builtin::u8(1U))); 
	}
	inline constexpr auto _operator_add_add_or_postfix($extension_UInt8_403_u8 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_add_add_or)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto CarryingAdd($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, $extension_UInt8_403_u8 rhs, bool carry) noexcept -> const std::tuple<$extension_UInt8_403_u8, bool>
	{
		#line 482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		$extension_UInt8_403_u8 result{}; 
		#line 483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::Auto<decltype(Builtin::CarryingAdd($this, rhs, carry, result))> overflowed = Builtin::CarryingAdd($this, rhs, carry, result); 
		#line 484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto BorrowingSub($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, $extension_UInt8_403_u8 rhs, bool carry) noexcept -> const std::tuple<$extension_UInt8_403_u8, bool>
	{
		#line 491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		$extension_UInt8_403_u8 result{}; 
		#line 492 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::Auto<decltype(Builtin::BorrowingSub($this, rhs, carry, result))> overflowed = Builtin::BorrowingSub($this, rhs, carry, result); 
		#line 493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_sub_qst($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_UInt8_403_u8>
	{
		#line 500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -? implemented only for integer types");
		#line 501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		$extension_UInt8_403_u8 result{}; 
		#line 502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (Builtin::SafeSubtract($this, rhs, result)) {
			#line 503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return result;
		}
		#line 505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_sub_qst_eq($extension_UInt8_403_u8 & $this , T rhs) noexcept -> typename $extension_UInt8_403_u8&
	{
		#line 509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -?= implemented only for integer types");
		#line 510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (const auto result = ADV_UFCS(_operator_sub_qst)($this, rhs)) {
			{
				#line 510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				$this = result;
			}
		}
		#line 513 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_sub_ne($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt8_403_u8
	{
		#line 520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -! implemented only for integer types");
		#line 521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		$extension_UInt8_403_u8 result{}; 
		#line 522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::StrictSubtract($this, rhs, result);
		#line 523 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_sub_ne_eq($extension_UInt8_403_u8 & $this , T rhs)  -> typename $extension_UInt8_403_u8&
	{
		#line 525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_sub_ne)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_sub_mod($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_UInt8_403_u8
	{
		#line 531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -% implemented only for integer types");
		#line 532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		$extension_UInt8_403_u8 result{}; 
		#line 533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::WrappingSubtract($this, rhs, result);
		#line 534 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_sub_mod_eq($extension_UInt8_403_u8 & $this , T rhs) noexcept -> typename $extension_UInt8_403_u8&
	{
		#line 536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_sub_mod)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_sub_or($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_UInt8_403_u8
	{
		#line 542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -| implemented only for integer types");
		#line 543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		$extension_UInt8_403_u8 result{}; 
		#line 544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::SaturatingSubtract($this, rhs, result);
		#line 545 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_sub_or_eq($extension_UInt8_403_u8 & $this , T rhs) noexcept -> typename $extension_UInt8_403_u8&
	{
		#line 547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_sub_or)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_sub_mod_qst($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_UInt8_403_u8, bool>
	{
		#line 552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -%? implemented only for integer types");
		#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		$extension_UInt8_403_u8 result{}; 
		#line 554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::Auto<decltype(!Builtin::SafeSubtract($this, rhs, result))> overflowed = !Builtin::SafeSubtract($this, rhs, result); 
		#line 555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_sub_sub_qst($extension_UInt8_403_u8 & $this )  -> typename $extension_UInt8_403_u8&
	{
		#line 559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_qst_eq)($this, Builtin::u8(1U))); 
	}
	inline constexpr auto _operator_sub_sub_qst_postfix($extension_UInt8_403_u8 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_sub_sub_qst)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_sub_sub_ne($extension_UInt8_403_u8 & $this )  -> typename $extension_UInt8_403_u8&
	{
		#line 562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_ne_eq)($this, Builtin::u8(1U))); 
	}
	inline constexpr auto _operator_sub_sub_ne_postfix($extension_UInt8_403_u8 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_sub_sub_ne)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_sub_sub_mod($extension_UInt8_403_u8 & $this )  -> typename $extension_UInt8_403_u8&
	{
		#line 565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_mod_eq)($this, Builtin::u8(1U))); 
	}
	inline constexpr auto _operator_sub_sub_mod_postfix($extension_UInt8_403_u8 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_sub_sub_mod)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_sub_sub_or($extension_UInt8_403_u8 & $this )  -> typename $extension_UInt8_403_u8&
	{
		#line 568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_or_eq)($this, Builtin::u8(1U))); 
	}
	inline constexpr auto _operator_sub_sub_or_postfix($extension_UInt8_403_u8 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_sub_sub_or)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mul_qst($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_UInt8_403_u8>
	{
		#line 574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *? implemented only for integer types");
		#line 575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		$extension_UInt8_403_u8 result{}; 
		#line 576 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (Builtin::SafeMultiply($this, rhs, result)) {
			#line 577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return result;
		}
		#line 579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mul_qst_eq($extension_UInt8_403_u8 & $this , T rhs) noexcept -> typename $extension_UInt8_403_u8&
	{
		#line 583 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *?= implemented only for integer types");
		#line 584 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (const auto result = ADV_UFCS(_operator_mul_qst)($this, rhs)) {
			{
				#line 584 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				$this = result;
			}
		}
		#line 587 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mul_ne($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt8_403_u8
	{
		#line 594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *! implemented only for integer types");
		#line 595 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		$extension_UInt8_403_u8 result{}; 
		#line 596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::StrictMultiply($this, rhs, result);
		#line 597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 599 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mul_ne_eq($extension_UInt8_403_u8 & $this , T rhs)  -> typename $extension_UInt8_403_u8&
	{
		#line 599 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_mul_ne)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 603 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mul_mod($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_UInt8_403_u8
	{
		#line 605 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *% implemented only for integer types");
		#line 606 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		$extension_UInt8_403_u8 result{}; 
		#line 607 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::WrappingMultiply($this, rhs, result);
		#line 608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 610 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mul_mod_eq($extension_UInt8_403_u8 & $this , T rhs) noexcept -> typename $extension_UInt8_403_u8&
	{
		#line 610 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_mul_mod)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 614 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mul_or($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_UInt8_403_u8
	{
		#line 616 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *| implemented only for integer types");
		#line 617 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		$extension_UInt8_403_u8 result{}; 
		#line 618 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::SaturatingMultiply($this, rhs, result);
		#line 619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 621 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mul_or_eq($extension_UInt8_403_u8 & $this , T rhs) noexcept -> typename $extension_UInt8_403_u8&
	{
		#line 621 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_mul_or)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 625 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mul_mod_qst($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_UInt8_403_u8, bool>
	{
		#line 626 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *%? implemented only for integer types");
		#line 627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		$extension_UInt8_403_u8 result{}; 
		#line 628 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::Auto<decltype(!Builtin::SafeMultiply($this, rhs, result))> overflowed = !Builtin::SafeMultiply($this, rhs, result); 
		#line 629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_mul_gt($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, $extension_UInt8_403_u8 rhs) noexcept -> const std::tuple<Builtin::u8, Builtin::u8>
	{
		#line 636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		const auto& [low, high] = Builtin::WideningMul8u($this, rhs);
		#line 637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return std::make_tuple(low, high);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 643 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto CarryingMul($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, $extension_UInt8_403_u8 rhs, $extension_UInt8_403_u8 carry) noexcept -> const std::tuple<Builtin::u8, Builtin::u8>
	{
		#line 645 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		const auto& [low, high] = Builtin::CarryingMul8u($this, rhs, carry);
		#line 646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return std::make_tuple(low, high);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_bsl_qst($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_UInt8_403_u8>
	{
		#line 653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\? implemented only for integer types");
		#line 654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		$extension_UInt8_403_u8 result{}; 
		#line 655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (Builtin::SafeDivide($this, rhs, result)) {
			#line 656 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return result;
		}
		#line 658 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_bsl_qst_eq($extension_UInt8_403_u8 & $this , T rhs) noexcept -> typename $extension_UInt8_403_u8&
	{
		#line 662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\?= implemented only for integer types");
		#line 663 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (const auto result = ADV_UFCS(_operator_bsl_qst)($this, rhs)) {
			{
				#line 663 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 664 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				$this = result;
			}
		}
		#line 666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_bsl_ne($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt8_403_u8
	{
		#line 671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 672 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_bsl_ne_eq($extension_UInt8_403_u8 & $this , T rhs)  -> typename $extension_UInt8_403_u8&
	{
		#line 672 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl_eq)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 676 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_bsl_mod($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt8_403_u8
	{
		#line 676 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_eq($extension_UInt8_403_u8 & $this , T rhs)  -> typename $extension_UInt8_403_u8&
	{
		#line 677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl_eq)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_bsl_or($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt8_403_u8
	{
		#line 681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 682 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_bsl_or_eq($extension_UInt8_403_u8 & $this , T rhs)  -> typename $extension_UInt8_403_u8&
	{
		#line 682 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl_eq)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 687 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_qst($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_UInt8_403_u8, bool>
	{
		#line 688 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\%? implemented only for integer types");
		#line 689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		$extension_UInt8_403_u8 result{}; 
		#line 690 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::Auto<decltype(!Builtin::SafeDivide($this, rhs, result))> overflowed = !Builtin::SafeDivide($this, rhs, result); 
		#line 691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_UInt8_403_u8>
	{
		#line 698 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\? implemented only for integer types");
		#line 699 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		$extension_UInt8_403_u8 result{}; 
		#line 700 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (Builtin::SafeDivExact($this, rhs, result)) {
			#line 701 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return result;
		}
		#line 703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 706 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst_eq($extension_UInt8_403_u8 & $this , T rhs) noexcept -> typename $extension_UInt8_403_u8&
	{
		#line 708 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\?= implemented only for integer types");
		#line 709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (const auto result = ADV_UFCS(_operator_bsl_bsl_qst)($this, rhs)) {
			{
				#line 709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 710 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				$this = result;
			}
		}
		#line 712 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 717 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mod_qst($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_UInt8_403_u8>
	{
		#line 719 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %? implemented only for integer types");
		#line 720 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		$extension_UInt8_403_u8 result{}; 
		#line 721 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (Builtin::SafeModulus($this, rhs, result)) {
			#line 722 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return result;
		}
		#line 724 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 726 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mod_qst_eq($extension_UInt8_403_u8 & $this , T rhs) noexcept -> typename $extension_UInt8_403_u8&
	{
		#line 728 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %?= implemented only for integer types");
		#line 729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (const auto result = ADV_UFCS(_operator_mod_qst)($this, rhs)) {
			{
				#line 729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 730 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				$this = result;
			}
		}
		#line 732 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 737 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mod_ne($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt8_403_u8
	{
		#line 737 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this % rhs); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mod_ne_eq($extension_UInt8_403_u8 & $this , T rhs)  -> typename $extension_UInt8_403_u8&
	{
		#line 738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this %= rhs); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 742 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mod_mod($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt8_403_u8
	{
		#line 742 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this % rhs); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mod_mod_eq($extension_UInt8_403_u8 & $this , T rhs)  -> typename $extension_UInt8_403_u8&
	{
		#line 743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this %= rhs); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 748 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mod_mod_qst($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_UInt8_403_u8, bool>
	{
		#line 749 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %%? implemented only for integer types");
		#line 750 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		$extension_UInt8_403_u8 result{}; 
		#line 751 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::Auto<decltype(!Builtin::SafeModulus($this, rhs, result))> overflowed = !Builtin::SafeModulus($this, rhs, result); 
		#line 752 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 757 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_sub_qst($extension_UInt8_403_u8 const& $this LIFETIMEBOUND) noexcept -> const Builtin::Nullable<$extension_UInt8_403_u8>
	{
		#line 757 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(nullptr); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 760 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline auto _operator_sub_ne($extension_UInt8_403_u8 const& $this LIFETIMEBOUND)  -> const typename $extension_UInt8_403_u8
	{
		#line 762 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::Throw(Builtin::IntegerOverflowException{});
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_sub_mod($extension_UInt8_403_u8 const& $this LIFETIMEBOUND)  -> const typename $extension_UInt8_403_u8
	{
		#line 767 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		$extension_UInt8_403_u8 result{}; 
		#line 768 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::WrappingNegate($this, result);
		#line 769 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 773 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_sub_or($extension_UInt8_403_u8 const& $this LIFETIMEBOUND)  -> const typename $extension_UInt8_403_u8
	{
		#line 773 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(Builtin::u8(0U)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 776 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_sub_mod_qst($extension_UInt8_403_u8 const& $this LIFETIMEBOUND)  -> const std::tuple<$extension_UInt8_403_u8, bool>
	{
		#line 778 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		$extension_UInt8_403_u8 result{}; 
		#line 779 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::Auto<decltype(Builtin::SafeNegate($this, result))> __var_779_8 = Builtin::SafeNegate($this, result); 
		#line 780 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return std::make_tuple(result, Builtin::Boolean(true));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 784 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_lt_lt_qst($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<$extension_UInt8_403_u8>
	{
		#line 786 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_UInt8_403_u8)()) < 0) {
			#line 787 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return Builtin::UncheckedShiftLeft($this, amount);
		}
		#line 789 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 792 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_lt_lt_qst_eq($extension_UInt8_403_u8 & $this , Builtin::i32 amount) noexcept -> typename $extension_UInt8_403_u8&
	{
		#line 794 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_UInt8_403_u8)()) < 0) {
			#line 795 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return $this <<= amount;
		}
		#line 797 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 800 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_lt_lt_ne($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_UInt8_403_u8
	{
		#line 802 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_UInt8_403_u8)()) < 0) {
			#line 803 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return Builtin::UncheckedShiftLeft($this, amount);
		}
		#line 805 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::Throw(Builtin::IntegerOverflowException{});
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 808 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_lt_lt_ne_eq($extension_UInt8_403_u8 & $this , Builtin::i32 amount)  -> typename $extension_UInt8_403_u8&
	{
		#line 808 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_lt_lt_ne)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 810 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_lt_lt_mod($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename $extension_UInt8_403_u8
	{
		#line 810 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(Builtin::UncheckedShiftLeft($this, amount & (ADV_USPCS(BitWidth, $extension_UInt8_403_u8)() - Builtin::i32(1)))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 813 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_lt_lt_mod_eq($extension_UInt8_403_u8 & $this , Builtin::i32 amount) noexcept -> typename $extension_UInt8_403_u8&
	{
		#line 813 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_lt_lt_mod)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 815 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_lt_lt_mod_qst($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<$extension_UInt8_403_u8, bool>
	{
		#line 815 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(std::make_tuple(ADV_UFCS(_operator_lt_lt_mod)($this, amount), (amount <=> Builtin::i32(0)) < 0 || (amount <=> ADV_USPCS(BitWidth, $extension_UInt8_403_u8)()) >= 0)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 818 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_gt_gt_qst($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<$extension_UInt8_403_u8>
	{
		#line 820 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_UInt8_403_u8)()) < 0) {
			#line 821 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return $this >> amount;
		}
		#line 823 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 826 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_gt_gt_qst_eq($extension_UInt8_403_u8 & $this , Builtin::i32 amount) noexcept -> typename $extension_UInt8_403_u8&
	{
		#line 828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_UInt8_403_u8)()) < 0) {
			#line 829 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return $this >>= amount;
		}
		#line 831 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 834 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_gt_gt_ne($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_UInt8_403_u8
	{
		#line 836 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_UInt8_403_u8)()) < 0) {
			#line 837 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return $this >> amount;
		}
		#line 839 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::Throw(Builtin::IntegerOverflowException{});
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 842 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_gt_gt_ne_eq($extension_UInt8_403_u8 & $this , Builtin::i32 amount)  -> typename $extension_UInt8_403_u8&
	{
		#line 842 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_gt_gt_ne)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 844 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_gt_gt_mod($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename $extension_UInt8_403_u8
	{
		#line 844 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(Builtin::UncheckedShiftRight($this, amount & (ADV_USPCS(BitWidth, $extension_UInt8_403_u8)() - Builtin::i32(1)))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 847 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_gt_gt_mod_eq($extension_UInt8_403_u8 & $this , Builtin::i32 amount) noexcept -> typename $extension_UInt8_403_u8&
	{
		#line 847 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_gt_gt_mod)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 849 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_gt_gt_mod_qst($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<$extension_UInt8_403_u8, bool>
	{
		#line 849 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(std::make_tuple(ADV_UFCS(_operator_gt_gt_mod)($this, amount), (amount <=> Builtin::i32(0)) < 0 || (amount <=> ADV_USPCS(BitWidth, $extension_UInt8_403_u8)()) >= 0)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 854 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_xor_xor_qst($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const Builtin::Nullable<$extension_UInt8_403_u8>
	{
		#line 856 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 858 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return Builtin::u8(1U);
		}
		#line 861 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 862 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::Auto<decltype(Builtin::u8(1U))> result = Builtin::u8(1U); 
		#line 864 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		for (;;) 
		{
			#line 865 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 866 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				if (const auto mul = ADV_UFCS(_operator_mul_qst)(result, base)) {
					{
						#line 866 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
						auto __tmp0 = *mul; const auto& mul = __tmp0;
						
						#line 867 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
						result = mul;
					}
				} else {
					#line 868 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
					{
						#line 869 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
						return nullptr;
					}
				}
				#line 871 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				if (exp == Builtin::i32(1)) {
					#line 872 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
					return result;
				}
			}
			#line 874 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
			#line 875 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			if (const auto mul = ADV_UFCS(_operator_mul_qst)(base, base)) {
				{
					#line 875 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
					auto __tmp0 = *mul; const auto& mul = __tmp0;
					
					#line 876 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
					base = mul;
				}
			} else {
				#line 877 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				{
					#line 878 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
					return nullptr;
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 883 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_xor_xor_qst_eq($extension_UInt8_403_u8 & $this , Builtin::u32 exp) noexcept -> typename $extension_UInt8_403_u8&
	{
		#line 885 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (auto result = ADV_UFCS(_operator_xor_xor_qst)($this, exp)) {
			{
				#line 885 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 886 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				return $this = result;
			}
		}
		#line 888 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 891 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_xor_xor_ne($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename $extension_UInt8_403_u8
	{
		#line 893 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 895 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return Builtin::u8(1U);
		}
		#line 898 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 899 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::Auto<decltype(Builtin::u8(1U))> result = Builtin::u8(1U); 
		#line 901 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		for (;;) 
		{
			#line 902 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 903 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				ADV_UFCS(_operator_mul_ne_eq)(result, base);
				#line 904 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				if (exp == Builtin::i32(1)) {
					#line 905 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
					return result;
				}
			}
			#line 907 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
			#line 908 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			ADV_UFCS(_operator_mul_ne_eq)(base, base);
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 912 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_xor_xor_ne_eq($extension_UInt8_403_u8 & $this , Builtin::u32 exp)  -> typename $extension_UInt8_403_u8&
	{
		#line 912 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_xor_xor_ne)($this, exp)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 914 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_xor_xor_mod($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename $extension_UInt8_403_u8
	{
		#line 916 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 918 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return Builtin::u8(1U);
		}
		#line 921 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 922 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::Auto<decltype(Builtin::u8(1U))> result = Builtin::u8(1U); 
		#line 924 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (std::is_constant_evaluated()) {
			#line 925 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			while ((exp <=> Builtin::i32(1)) > 0) 
			{
				#line 926 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
					#line 927 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
					ADV_UFCS(_operator_mul_mod_eq)(result, base);
				}
				#line 929 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
				#line 930 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				ADV_UFCS(_operator_mul_mod_eq)(base, base);
			}
			#line 932 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return ADV_UFCS(_operator_mul_mod)(result, base);
		} else {
			#line 933 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			{
				#line 934 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				for (;;) 
				{
					#line 935 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
					if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
						#line 936 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
						ADV_UFCS(_operator_mul_mod_eq)(result, base);
						#line 937 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
						if (exp == Builtin::i32(1)) {
							#line 938 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
							return result;
						}
					}
					#line 940 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
					ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
					#line 941 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
					ADV_UFCS(_operator_mul_mod_eq)(base, base);
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 946 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_xor_xor_mod_eq($extension_UInt8_403_u8 & $this , Builtin::u32 exp) noexcept -> typename $extension_UInt8_403_u8&
	{
		#line 946 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_xor_xor_mod)($this, exp)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 948 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_xor_xor_or($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename $extension_UInt8_403_u8
	{
		#line 950 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (const auto result = ADV_UFCS(_operator_xor_xor_qst)($this, exp)) {
			{
				#line 950 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 951 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				return result;
			}
		}
		#line 954 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return ADV_USPCS(MaxValue, $extension_UInt8_403_u8)();
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 957 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_xor_xor_or_eq($extension_UInt8_403_u8 & $this , Builtin::u32 exp) noexcept -> typename $extension_UInt8_403_u8&
	{
		#line 957 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_xor_xor_or)($this, exp)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 959 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_xor_xor_mod_qst($extension_UInt8_403_u8 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const std::tuple<$extension_UInt8_403_u8, bool>
	{
		#line 961 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 963 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return std::make_tuple(Builtin::u8(1U), Builtin::Boolean(false));
		}
		#line 966 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 967 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::Auto<decltype(Builtin::u8(1U))> result = Builtin::u8(1U); 
		#line 968 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::Auto<decltype(Builtin::Boolean(false))> overflowed = Builtin::Boolean(false); 
		#line 969 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::Auto<decltype(std::make_tuple(Builtin::u8(0U), Builtin::Boolean(false)))> tmp = std::make_tuple(Builtin::u8(0U), Builtin::Boolean(false)); 
		#line 971 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		for (;;) 
		{
			#line 972 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 973 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				tmp = ADV_UFCS(_operator_mul_mod_qst)(result, base);
				#line 974 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				if (exp == Builtin::i32(1)) {
					#line 975 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
					std::get<1>(tmp) |= overflowed;
					#line 976 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
					return tmp;
				}
				#line 978 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				result = std::get<0>(tmp);
				#line 979 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				overflowed |= std::get<1>(tmp);
			}
			#line 981 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
			#line 982 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			tmp = ADV_UFCS(_operator_mul_mod_qst)(base, base);
			#line 983 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			base = std::get<0>(tmp);
			#line 984 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			overflowed |= std::get<1>(tmp);
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 989 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getCheckedAbs($extension_UInt8_403_u8 const & $this ) -> const Builtin::Nullable<$extension_UInt8_403_u8>
	{
		#line 989 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 991 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getStrictAbs($extension_UInt8_403_u8 const & $this ) -> const $extension_UInt8_403_u8
	{
		#line 991 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 993 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getWrappingAbs($extension_UInt8_403_u8 const & $this ) -> const $extension_UInt8_403_u8
	{
		#line 993 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 995 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getSaturatingAbs($extension_UInt8_403_u8 const & $this ) -> const $extension_UInt8_403_u8
	{
		#line 995 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 997 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getOverflowingAbs($extension_UInt8_403_u8 const & $this ) -> const std::tuple<$extension_UInt8_403_u8, bool>
	{
		#line 997 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(std::make_tuple($this, Builtin::Boolean(false))); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	
} namespace $extensions { using namespace System;
#line 1039 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto NextMultipleOf($extension_UInt8_1000_u8 const& $this LIFETIMEBOUND, $extension_UInt8_1000_u8 rhs)  -> const typename $extension_UInt8_1000_u8
	{
		#line 1041 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		const Builtin::Auto<decltype($this % rhs)> rem = $this % rhs; 
		#line 1042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return rem == Builtin::i32(0) ? $this : $this + (rhs - rem);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1047 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto CheckedNextMultipleOf($extension_UInt8_1000_u8 const& $this LIFETIMEBOUND, $extension_UInt8_1000_u8 rhs) noexcept -> const Builtin::Nullable<$extension_UInt8_1000_u8>
	{
		#line 1049 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (const auto rem = ADV_UFCS(_operator_mod_qst)($this, rhs)) {
			{
				#line 1049 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				auto __tmp0 = *rem; const auto& rem = __tmp0;
				
				#line 1050 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				if (rem == Builtin::i32(0)) {
					#line 1051 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
					return $this;
				}
				#line 1053 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				return ADV_UFCS(_operator_add_qst)($this, (rhs - rem));
			}
		}
		#line 1055 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1001 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto $static_getIsSigned<$extension_UInt8_1000_u8>::get() -> const bool
	{
		#line 1001 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1003 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getTrailingZeroCount($extension_UInt8_1000_u8 const & $this ) -> const Builtin::u32
	{
		#line 1003 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(Builtin::TrailingZeroCount($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1004 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getTrailingOneCount($extension_UInt8_1000_u8 const & $this ) -> const Builtin::u32
	{
		#line 1004 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(Builtin::TrailingZeroCount(ADV_UFCS(_operator_not)($this))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1005 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getByteCount($extension_UInt8_1000_u8 const & $this ) -> const Builtin::u32
	{
		#line 1005 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u32>(Builtin::usize(sizeof($extension_UInt8_1000_u8)))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1006 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getMinimalBitWidth($extension_UInt8_1000_u8 const & $this ) -> const Builtin::u32
	{
		#line 1006 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(BitWidth, $extension_UInt8_1000_u8)() - ADV_UPCS(LeadingZeroCount)($this.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1016 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline auto getIsqrt($extension_UInt8_1000_u8 const & $this ) -> const $extension_UInt8_1000_u8
	{
		#line 1017 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (const auto result = ADV_UPCS(CheckedIsqrt)($this.$ref())) {
			{
				#line 1017 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 1018 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				return result;
			}
		}
		#line 1020 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1025 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getLog2Ceiling($extension_UInt8_1000_u8 const & $this ) -> const $extension_UInt8_1000_u8
	{
		#line 1027 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::Auto<decltype(ADV_UPCS(Log2)($this.$ref()))> result = ADV_UPCS(Log2)($this.$ref()); 
		#line 1028 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (ADV_UPCS(PopCount)($this.$ref()) != Builtin::i32(1)) {
			#line 1029 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			++result;
		}
		#line 1032 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return result;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1059 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getPrevPow2($extension_UInt8_1000_u8 const & $this ) -> const $extension_UInt8_1000_u8
	{
		#line 1061 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (($this <=> Builtin::i32(1)) <= 0) {
			#line 1062 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return Builtin::u8(0U);
		}
		#line 1065 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return ADV_USPCS(One, $extension_UInt8_1000_u8)() << (ADV_UPCS(MinimalBitWidth)($this.$ref()) - Builtin::u8(1U));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1070 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getNextPow2($extension_UInt8_1000_u8 const & $this ) -> const $extension_UInt8_1000_u8
	{
		#line 1072 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (($this <=> Builtin::i32(1)) <= 0) {
			#line 1073 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return Builtin::u8(0U);
		}
		#line 1076 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		const Builtin::Auto<decltype($this - Builtin::u8(1U))> p = $this - Builtin::u8(1U); 
		#line 1077 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return (ADV_USPCS(AllBitsSet, $extension_UInt8_1000_u8)() >> ADV_UPCS(LeadingZeroCount)(p.$ref())) + Builtin::u8(1U);
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1082 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getCheckedNextPow2($extension_UInt8_1000_u8 const & $this ) -> const Builtin::Nullable<$extension_UInt8_1000_u8>
	{
		#line 1084 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (($this <=> Builtin::i32(1)) <= 0) {
			#line 1085 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return Builtin::u8(0U);
		}
		#line 1088 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		const Builtin::Auto<decltype($this - Builtin::u8(1U))> p = $this - Builtin::u8(1U); 
		#line 1089 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return ADV_UFCS(_operator_add_qst)((ADV_USPCS(AllBitsSet, $extension_UInt8_1000_u8)() >> ADV_UPCS(LeadingZeroCount)(p.$ref())), Builtin::u8(1U));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1094 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getWrappingNextPow2($extension_UInt8_1000_u8 const & $this ) -> const $extension_UInt8_1000_u8
	{
		#line 1096 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (($this <=> Builtin::i32(1)) <= 0) {
			#line 1097 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return Builtin::u8(0U);
		}
		#line 1100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		const Builtin::Auto<decltype($this - Builtin::u8(1U))> p = $this - Builtin::u8(1U); 
		#line 1101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return ADV_UFCS(_operator_add_mod)((ADV_USPCS(AllBitsSet, $extension_UInt8_1000_u8)() >> ADV_UPCS(LeadingZeroCount)(p.$ref())), Builtin::u8(1U));
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	
} namespace $extensions { using namespace System;
#line 1119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto RotateLeft($extension_UInt8_1105_u8 const& $this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename $extension_UInt8_1105_u8
	{
		#line 1119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(Builtin::BitsRotateLeft($this, shiftAmount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto RotateRight($extension_UInt8_1105_u8 const& $this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename $extension_UInt8_1105_u8
	{
		#line 1120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(Builtin::BitsRotateRight($this, shiftAmount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto $static_getBitWidth<$extension_UInt8_1105_u8>::get() -> const Builtin::u32
	{
		#line 1106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(8U)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getLeadingZeroCount($extension_UInt8_1105_u8 const & $this ) -> const Builtin::u32
	{
		#line 1108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(Builtin::LeadingZeroCount($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getLeadingOneCount($extension_UInt8_1105_u8 const & $this ) -> const Builtin::u32
	{
		#line 1109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(Builtin::LeadingZeroCount(ADV_UFCS(_operator_not)($this))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getPopCount($extension_UInt8_1105_u8 const & $this ) -> const Builtin::u32
	{
		#line 1110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(Builtin::PopCount($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getZeroCount($extension_UInt8_1105_u8 const & $this ) -> const Builtin::u32
	{
		#line 1111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(Builtin::PopCount(ADV_UFCS(_operator_not)($this))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getByteSwapped($extension_UInt8_1105_u8 const & $this ) -> const $extension_UInt8_1105_u8
	{
		#line 1112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getBigEndian($extension_UInt8_1105_u8 const & $this ) -> const $extension_UInt8_1105_u8
	{
		#line 1113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getLittleEndian($extension_UInt8_1105_u8 const & $this ) -> const $extension_UInt8_1105_u8
	{
		#line 1114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getReverseBits($extension_UInt8_1105_u8 const & $this ) -> const $extension_UInt8_1105_u8
	{
		#line 1115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(Builtin::ReverseBits8u($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getShortestBitLength($extension_UInt8_1105_u8 const & $this ) -> const Builtin::u32
	{
		#line 1117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(BitWidth, $extension_UInt8_1105_u8)() - ADV_UPCS(LeadingZeroCount)($this.$ref())); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	
} namespace $extensions { using namespace System;
#line 1132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto IsGreaterThanAsUnsigned($extension_UInt8_1124_u8 const& $this LIFETIMEBOUND, $extension_UInt8_1124_u8 rhs) noexcept -> const bool
	{
		#line 1132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(($this <=> rhs) > 0); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto $static_getMaxDigitCount<$extension_UInt8_1124_u8>::get() -> const Builtin::i32
	{
		#line 1125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(3)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto $static_getMaxHexDigitCount<$extension_UInt8_1124_u8>::get() -> const Builtin::i32
	{
		#line 1126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(2)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto $static_getMaxValueDiv10<$extension_UInt8_1124_u8>::get() -> const $extension_UInt8_1124_u8
	{
		#line 1127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl)(ADV_USPCS(MaxValue, Builtin::u8)(), Builtin::i32(10))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getMultiplyBy10($extension_UInt8_1124_u8 const & $this ) -> const $extension_UInt8_1124_u8
	{
		#line 1129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_mod)($this, Builtin::u8(10U))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getMultiplyBy16($extension_UInt8_1124_u8 const & $this ) -> const $extension_UInt8_1124_u8
	{
		#line 1130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_mod)($this, Builtin::u8(16U))); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	

}