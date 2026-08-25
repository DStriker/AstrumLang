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
namespace __Unsafe {} namespace __UInt32$Protected__Unsafe {}
//###############################################################################
//# Global type aliases
//###############################################################################
#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
using UInt32 = Builtin::u32;
//###############################################################################
//# Type definitions
//###############################################################################
	} namespace $extensions { using namespace System;
#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	using $extension_UInt32_14_u32 = Builtin::u32;
	#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ADV_CHECK_INTERFACE(IMinMaxValue, IMinMaxValue);
	#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class __TT> struct $static_getMinValue; template<> struct $static_getMinValue<$extension_UInt32_14_u32> { static inline constexpr auto get() -> const $extension_UInt32_14_u32; };
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class __TT> struct $static_getMaxValue; template<> struct $static_getMaxValue<$extension_UInt32_14_u32> { static inline constexpr auto get() -> const $extension_UInt32_14_u32; };
	#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt32_14_u32, IMinMaxValue, IMinMaxValue, $extension_UInt32_14_u32);
	} namespace System{
using $extensions::$static_getMinValue;
using $extensions::$static_getMaxValue;

		} namespace $extensions { using namespace System;
#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	using $extension_UInt32_19_u32 = Builtin::u32;
	#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ASTRUMSTD_API auto _operator_eq_eq_mul($extension_UInt32_19_u32 const& $this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool;
	#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto operator<=>($extension_UInt32_19_u32 const& $this LIFETIMEBOUND, Builtin::Nullable<$extension_UInt32_19_u32> rhs) noexcept -> const Builtin::i32;
	#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_gt_gt_gt($extension_UInt32_19_u32 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_UInt32_19_u32;
	#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_gt_gt_gt_eq($extension_UInt32_19_u32 & $this , Builtin::i32 amount)  -> typename $extension_UInt32_19_u32&;
	#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_lt_lt_bsl($extension_UInt32_19_u32 const& $this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename $extension_UInt32_19_u32;
	#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_lt_lt_bsl_eq($extension_UInt32_19_u32 & $this , Builtin::u32 amount) noexcept -> typename $extension_UInt32_19_u32&;
	#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_gt_gt_bsl($extension_UInt32_19_u32 const& $this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename $extension_UInt32_19_u32;
	#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_gt_gt_bsl_eq($extension_UInt32_19_u32 & $this , Builtin::u32 amount) noexcept -> typename $extension_UInt32_19_u32&;
	#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getHashCode($extension_UInt32_19_u32 const& $this ) -> const Builtin::u64;
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
#line 72 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	using $extension_UInt32_72_u32 = Builtin::u32;
	#line 72 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ADV_CHECK_INTERFACE(IAbstractComparable, IAbstractComparable);
	#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ASTRUMSTD_API auto _operator_lt_eq_gt_mul($extension_UInt32_72_u32 const& $this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32;
	#line 72 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt32_72_u32, IAbstractComparable, IAbstractComparable, $extension_UInt32_72_u32);
	} namespace System{
using $extensions::_operator_lt_eq_gt_mul;

		} namespace $extensions { using namespace System;
#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	using $extension_UInt32_87_u32 = Builtin::u32;
	#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ADV_CHECK_INTERFACE(IConvertible, IConvertible);
	#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToBoolean($extension_UInt32_87_u32 const& $this LIFETIMEBOUND) noexcept -> const bool;
	#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToInt8($extension_UInt32_87_u32 const& $this LIFETIMEBOUND)  -> const Builtin::i8;
	#line 95 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToUInt8($extension_UInt32_87_u32 const& $this LIFETIMEBOUND)  -> const Builtin::u8;
	#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToInt16($extension_UInt32_87_u32 const& $this LIFETIMEBOUND)  -> const Builtin::i16;
	#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToUInt16($extension_UInt32_87_u32 const& $this LIFETIMEBOUND)  -> const Builtin::u16;
	#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToInt32($extension_UInt32_87_u32 const& $this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToUInt32($extension_UInt32_87_u32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u32;
	#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToInt64($extension_UInt32_87_u32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i64;
	#line 121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToUInt64($extension_UInt32_87_u32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u64;
	#line 122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToInt128($extension_UInt32_87_u32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i128;
	#line 123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToUInt128($extension_UInt32_87_u32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u128;
	#line 124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToIsize($extension_UInt32_87_u32 const& $this LIFETIMEBOUND)  -> const Builtin::isize;
	#line 132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToUsize($extension_UInt32_87_u32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::usize;
	#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToFloat32($extension_UInt32_87_u32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::f32;
	#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToFloat64($extension_UInt32_87_u32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::f64;
	#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToByte($extension_UInt32_87_u32 const& $this LIFETIMEBOUND)  -> const Builtin::u8;
	#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToChar($extension_UInt32_87_u32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::char32;
	#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt32_87_u32, IConvertible, IConvertible, $extension_UInt32_87_u32);
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
#line 146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	using $extension_UInt32_146_u32 = Builtin::u32;
	#line 146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ADV_CHECK_INTERFACE(IDivisibleArithmetic, IDivisibleArithmetic);
	#line 148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_div_mod($extension_UInt32_146_u32 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_UInt32_146_u32, $extension_UInt32_146_u32>;
	#line 154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_div_not($extension_UInt32_146_u32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt32_146_u32;
	#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_div_not_eq($extension_UInt32_146_u32 & $this , auto rhs)  -> typename $extension_UInt32_146_u32&;
	#line 163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_div_lt($extension_UInt32_146_u32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt32_146_u32;
	#line 172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_div_lt_eq($extension_UInt32_146_u32 & $this , auto rhs)  -> typename $extension_UInt32_146_u32&;
	#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mod_lt($extension_UInt32_146_u32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt32_146_u32;
	#line 182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_mod_lt_eq($extension_UInt32_146_u32 & $this , auto rhs)  -> typename $extension_UInt32_146_u32&;
	#line 184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_div_gt($extension_UInt32_146_u32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt32_146_u32;
	#line 194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_div_gt_eq($extension_UInt32_146_u32 & $this , auto rhs)  -> typename $extension_UInt32_146_u32&;
	#line 146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt32_146_u32, IDivisibleArithmetic, IDivisibleArithmetic, $extension_UInt32_146_u32);
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
#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	using $extension_UInt32_197_u32 = Builtin::u32;
	#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ADV_CHECK_INTERFACE(IIntegerDivisibleArithmetic, IIntegerDivisibleArithmetic);
	#line 199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_bsl($extension_UInt32_197_u32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt32_197_u32;
	#line 201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_bsl_eq($extension_UInt32_197_u32 & $this , T rhs)  -> typename $extension_UInt32_197_u32&;
	#line 206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl($extension_UInt32_197_u32 const& $this LIFETIMEBOUND, T rhs)  -> const Builtin::Nullable<$extension_UInt32_197_u32>;
	#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt32_197_u32, IIntegerDivisibleArithmetic, IIntegerDivisibleArithmetic, $extension_UInt32_197_u32);
	} namespace System{
using $extensions::_operator_bsl;
using $extensions::_operator_bsl_eq;
using $extensions::_operator_bsl_bsl;

		} namespace $extensions { using namespace System;
#line 217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	using $extension_UInt32_217_u32 = Builtin::u32;
	#line 217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ADV_CHECK_INTERFACE(IIntegerPowerArithmetic, IIntegerPowerArithmetic);
	#line 220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_xor_xor($extension_UInt32_217_u32 const& $this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename $extension_UInt32_217_u32;
	#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_xor_xor_eq($extension_UInt32_217_u32 & $this , Builtin::u32 exp)  -> typename $extension_UInt32_217_u32&;
	#line 217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt32_217_u32, IIntegerPowerArithmetic, IIntegerPowerArithmetic, $extension_UInt32_217_u32);
	} namespace System{
using $extensions::_operator_xor_xor;
using $extensions::_operator_xor_xor_eq;

		} namespace $extensions { using namespace System;
#line 255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	using $extension_UInt32_255_u32 = Builtin::u32;
	#line 255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ADV_CHECK_INTERFACE(INumberBase, INumberBase);
	#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto MaxMagnitude($extension_UInt32_255_u32 const& $this LIFETIMEBOUND, $extension_UInt32_255_u32 rhs) noexcept -> const typename $extension_UInt32_255_u32;
	#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto MaxMagnitudeNumber($extension_UInt32_255_u32 const& $this LIFETIMEBOUND, $extension_UInt32_255_u32 rhs) noexcept -> const typename $extension_UInt32_255_u32;
	#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto MinMagnitude($extension_UInt32_255_u32 const& $this LIFETIMEBOUND, $extension_UInt32_255_u32 rhs) noexcept -> const typename $extension_UInt32_255_u32;
	#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto MinMagnitudeNumber($extension_UInt32_255_u32 const& $this LIFETIMEBOUND, $extension_UInt32_255_u32 rhs) noexcept -> const typename $extension_UInt32_255_u32;
	#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ASTRUMSTD_API auto Parse($extension_UInt32_255_u32 const& $this LIFETIMEBOUND, Builtin::Str input)  -> const typename $extension_UInt32_255_u32;
	#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ASTRUMSTD_API auto TryParse($extension_UInt32_255_u32 const& $this LIFETIMEBOUND, Builtin::Str input) noexcept -> const Builtin::Nullable<$extension_UInt32_255_u32>;
	#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto NarrowToInt8($extension_UInt32_255_u32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i8;
	#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto NarrowToUInt8($extension_UInt32_255_u32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u8;
	#line 298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto NarrowToInt16($extension_UInt32_255_u32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i16;
	#line 299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto NarrowToUInt16($extension_UInt32_255_u32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u16;
	#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto NarrowToInt32($extension_UInt32_255_u32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i32;
	#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto NarrowToUInt32($extension_UInt32_255_u32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u32;
	#line 302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto NarrowToInt64($extension_UInt32_255_u32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i64;
	#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto NarrowToUInt64($extension_UInt32_255_u32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u64;
	#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto NarrowToInt128($extension_UInt32_255_u32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i128;
	#line 305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto NarrowToUInt128($extension_UInt32_255_u32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u128;
	#line 306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto NarrowToIsize($extension_UInt32_255_u32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::isize;
	#line 307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto NarrowToUsize($extension_UInt32_255_u32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::usize;
	#line 256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class __TT> struct $static_getOne; template<> struct $static_getOne<$extension_UInt32_255_u32> { static inline constexpr auto get() -> const $extension_UInt32_255_u32; };
	#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class __TT> struct $static_getZero; template<> struct $static_getZero<$extension_UInt32_255_u32> { static inline constexpr auto get() -> const $extension_UInt32_255_u32; };
	#line 258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class __TT> struct $static_getRadix; template<> struct $static_getRadix<$extension_UInt32_255_u32> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getAbs($extension_UInt32_255_u32 const& $this ) -> const $extension_UInt32_255_u32;
	#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsCanonical($extension_UInt32_255_u32 const& $this ) -> const bool;
	#line 262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsComplexNumber($extension_UInt32_255_u32 const& $this ) -> const bool;
	#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsEvenInteger($extension_UInt32_255_u32 const& $this ) -> const bool;
	#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsFinite($extension_UInt32_255_u32 const& $this ) -> const bool;
	#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsImaginaryNumber($extension_UInt32_255_u32 const& $this ) -> const bool;
	#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsInfinity($extension_UInt32_255_u32 const& $this ) -> const bool;
	#line 267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsInteger($extension_UInt32_255_u32 const& $this ) -> const bool;
	#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsNaN($extension_UInt32_255_u32 const& $this ) -> const bool;
	#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsNegative($extension_UInt32_255_u32 const& $this ) -> const bool;
	#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsNegativeInfinity($extension_UInt32_255_u32 const& $this ) -> const bool;
	#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsNormal($extension_UInt32_255_u32 const& $this ) -> const bool;
	#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsOddInteger($extension_UInt32_255_u32 const& $this ) -> const bool;
	#line 273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsPositive($extension_UInt32_255_u32 const& $this ) -> const bool;
	#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsPositiveInfinity($extension_UInt32_255_u32 const& $this ) -> const bool;
	#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsRealNumber($extension_UInt32_255_u32 const& $this ) -> const bool;
	#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsSubnormal($extension_UInt32_255_u32 const& $this ) -> const bool;
	#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsZero($extension_UInt32_255_u32 const& $this ) -> const bool;
	#line 255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt32_255_u32, INumberBase, INumberBase, $extension_UInt32_255_u32);
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
#line 310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	using $extension_UInt32_310_u32 = Builtin::u32;
	#line 310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ADV_CHECK_INTERFACE(IUnsignedNumber, IUnsignedNumber);
	#line 311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class __TT> struct $static_getIsUnsigned; template<> struct $static_getIsUnsigned<$extension_UInt32_310_u32> { static inline constexpr auto get() -> const bool; };
	#line 310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt32_310_u32, IUnsignedNumber, IUnsignedNumber, $extension_UInt32_310_u32);
	} namespace System{
using $extensions::$static_getIsUnsigned;

		} namespace $extensions { using namespace System;
#line 314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	using $extension_UInt32_314_u32 = Builtin::u32;
	#line 314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ADV_CHECK_INTERFACE(INumber, INumber);
	#line 317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto CopySign($extension_UInt32_314_u32 const& $this LIFETIMEBOUND, $extension_UInt32_314_u32 sign) noexcept -> const typename $extension_UInt32_314_u32;
	#line 319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto Max($extension_UInt32_314_u32 const& $this LIFETIMEBOUND, $extension_UInt32_314_u32 rhs) noexcept -> const typename $extension_UInt32_314_u32;
	#line 320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto MaxNumber($extension_UInt32_314_u32 const& $this LIFETIMEBOUND, $extension_UInt32_314_u32 rhs) noexcept -> const typename $extension_UInt32_314_u32;
	#line 321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto Min($extension_UInt32_314_u32 const& $this LIFETIMEBOUND, $extension_UInt32_314_u32 rhs) noexcept -> const typename $extension_UInt32_314_u32;
	#line 322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto MinNumber($extension_UInt32_314_u32 const& $this LIFETIMEBOUND, $extension_UInt32_314_u32 rhs) noexcept -> const typename $extension_UInt32_314_u32;
	#line 323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto Clamp($extension_UInt32_314_u32 const& $this LIFETIMEBOUND, $extension_UInt32_314_u32 min, $extension_UInt32_314_u32 max)  -> const typename $extension_UInt32_314_u32;
	#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getSign($extension_UInt32_314_u32 const& $this ) -> const Builtin::i32;
	#line 314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt32_314_u32, INumber, INumber, $extension_UInt32_314_u32);
	} namespace System{
using $extensions::CopySign;
using $extensions::Max;
using $extensions::MaxNumber;
using $extensions::Min;
using $extensions::MinNumber;
using $extensions::Clamp;
using $extensions::getSign;

		} namespace $extensions { using namespace System;
#line 326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	using $extension_UInt32_326_u32 = Builtin::u32;
	#line 326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ADV_CHECK_INTERFACE(IBinaryNumber, IBinaryNumber);
	#line 385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto CheckedLog($extension_UInt32_326_u32 const& $this LIFETIMEBOUND, $extension_UInt32_326_u32 base) noexcept -> const Builtin::Nullable<$extension_UInt32_326_u32>;
	#line 418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ASTRUMSTD_API auto Log($extension_UInt32_326_u32 const& $this LIFETIMEBOUND, $extension_UInt32_326_u32 base)  -> const typename $extension_UInt32_326_u32;
	#line 428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto Midpoint($extension_UInt32_326_u32 const& $this LIFETIMEBOUND, $extension_UInt32_326_u32 rhs) noexcept -> const typename $extension_UInt32_326_u32;
	#line 431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto IsMultipleOf($extension_UInt32_326_u32 const& $this LIFETIMEBOUND, $extension_UInt32_326_u32 rhs) noexcept -> const bool;
	#line 328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class __TT> struct $static_getAllBitsSet; template<> struct $static_getAllBitsSet<$extension_UInt32_326_u32> { static inline constexpr auto get() -> const $extension_UInt32_326_u32; };
	#line 331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsPow2($extension_UInt32_326_u32 const& $this ) -> const bool;
	#line 335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getCheckedLog2($extension_UInt32_326_u32 const& $this ) -> const Builtin::Nullable<$extension_UInt32_326_u32>;
	#line 345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getLog2($extension_UInt32_326_u32 const& $this ) -> const $extension_UInt32_326_u32;
	#line 355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getCheckedLog10($extension_UInt32_326_u32 const& $this ) -> const Builtin::Nullable<$extension_UInt32_326_u32>;
	#line 375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getLog10($extension_UInt32_326_u32 const& $this ) -> const $extension_UInt32_326_u32;
	#line 326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt32_326_u32, IBinaryNumber, IBinaryNumber, $extension_UInt32_326_u32);
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
#line 441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	using $extension_UInt32_441_u32 = Builtin::u32;
	#line 441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ADV_CHECK_INTERFACE(ICheckedArithmetic, ICheckedArithmetic);
	#line 444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_add_qst($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_UInt32_441_u32>;
	#line 453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_add_qst_eq($extension_UInt32_441_u32 & $this , T rhs) noexcept -> typename $extension_UInt32_441_u32&;
	#line 464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_add_ne($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt32_441_u32;
	#line 471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_add_ne_eq($extension_UInt32_441_u32 & $this , T rhs)  -> typename $extension_UInt32_441_u32&;
	#line 475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_add_mod($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_UInt32_441_u32;
	#line 482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_add_mod_eq($extension_UInt32_441_u32 & $this , T rhs) noexcept -> typename $extension_UInt32_441_u32&;
	#line 486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_add_or($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_UInt32_441_u32;
	#line 493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_add_or_eq($extension_UInt32_441_u32 & $this , T rhs) noexcept -> typename $extension_UInt32_441_u32&;
	#line 497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_add_mod_qst($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_UInt32_441_u32, bool>;
	#line 505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_qst($extension_UInt32_441_u32 & $this )  -> typename $extension_UInt32_441_u32&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_qst_postfix($extension_UInt32_441_u32 & $this)  -> decltype(auto);
	#line 508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_ne($extension_UInt32_441_u32 & $this )  -> typename $extension_UInt32_441_u32&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_ne_postfix($extension_UInt32_441_u32 & $this)  -> decltype(auto);
	#line 511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_mod($extension_UInt32_441_u32 & $this )  -> typename $extension_UInt32_441_u32&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_mod_postfix($extension_UInt32_441_u32 & $this)  -> decltype(auto);
	#line 514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_or($extension_UInt32_441_u32 & $this )  -> typename $extension_UInt32_441_u32&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_or_postfix($extension_UInt32_441_u32 & $this)  -> decltype(auto);
	#line 518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto CarryingAdd($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, $extension_UInt32_441_u32 rhs, bool carry) noexcept -> const std::tuple<$extension_UInt32_441_u32, bool>;
	#line 527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto BorrowingSub($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, $extension_UInt32_441_u32 rhs, bool carry) noexcept -> const std::tuple<$extension_UInt32_441_u32, bool>;
	#line 536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_sub_qst($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_UInt32_441_u32>;
	#line 545 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_sub_qst_eq($extension_UInt32_441_u32 & $this , T rhs) noexcept -> typename $extension_UInt32_441_u32&;
	#line 556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_sub_ne($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt32_441_u32;
	#line 563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_sub_ne_eq($extension_UInt32_441_u32 & $this , T rhs)  -> typename $extension_UInt32_441_u32&;
	#line 567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_sub_mod($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_UInt32_441_u32;
	#line 574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_sub_mod_eq($extension_UInt32_441_u32 & $this , T rhs) noexcept -> typename $extension_UInt32_441_u32&;
	#line 578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_sub_or($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_UInt32_441_u32;
	#line 585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_sub_or_eq($extension_UInt32_441_u32 & $this , T rhs) noexcept -> typename $extension_UInt32_441_u32&;
	#line 589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_sub_mod_qst($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_UInt32_441_u32, bool>;
	#line 597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_qst($extension_UInt32_441_u32 & $this )  -> typename $extension_UInt32_441_u32&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_qst_postfix($extension_UInt32_441_u32 & $this)  -> decltype(auto);
	#line 600 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_ne($extension_UInt32_441_u32 & $this )  -> typename $extension_UInt32_441_u32&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_ne_postfix($extension_UInt32_441_u32 & $this)  -> decltype(auto);
	#line 603 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_mod($extension_UInt32_441_u32 & $this )  -> typename $extension_UInt32_441_u32&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_mod_postfix($extension_UInt32_441_u32 & $this)  -> decltype(auto);
	#line 606 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_or($extension_UInt32_441_u32 & $this )  -> typename $extension_UInt32_441_u32&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_or_postfix($extension_UInt32_441_u32 & $this)  -> decltype(auto);
	#line 610 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mul_qst($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_UInt32_441_u32>;
	#line 619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mul_qst_eq($extension_UInt32_441_u32 & $this , T rhs) noexcept -> typename $extension_UInt32_441_u32&;
	#line 630 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mul_ne($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt32_441_u32;
	#line 637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mul_ne_eq($extension_UInt32_441_u32 & $this , T rhs)  -> typename $extension_UInt32_441_u32&;
	#line 641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mul_mod($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_UInt32_441_u32;
	#line 648 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mul_mod_eq($extension_UInt32_441_u32 & $this , T rhs) noexcept -> typename $extension_UInt32_441_u32&;
	#line 652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mul_or($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_UInt32_441_u32;
	#line 659 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mul_or_eq($extension_UInt32_441_u32 & $this , T rhs) noexcept -> typename $extension_UInt32_441_u32&;
	#line 663 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mul_mod_qst($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_UInt32_441_u32, bool>;
	#line 672 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_mul_gt($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, $extension_UInt32_441_u32 rhs) noexcept -> const std::tuple<Builtin::u32, Builtin::u32>;
	#line 681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto CarryingMul($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, $extension_UInt32_441_u32 rhs, $extension_UInt32_441_u32 carry) noexcept -> const std::tuple<Builtin::u32, Builtin::u32>;
	#line 689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_bsl_qst($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_UInt32_441_u32>;
	#line 698 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_bsl_qst_eq($extension_UInt32_441_u32 & $this , T rhs) noexcept -> typename $extension_UInt32_441_u32&;
	#line 709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_bsl_ne($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt32_441_u32;
	#line 710 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_bsl_ne_eq($extension_UInt32_441_u32 & $this , T rhs)  -> typename $extension_UInt32_441_u32&;
	#line 714 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_bsl_mod($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt32_441_u32;
	#line 715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_eq($extension_UInt32_441_u32 & $this , T rhs)  -> typename $extension_UInt32_441_u32&;
	#line 719 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_bsl_or($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt32_441_u32;
	#line 720 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_bsl_or_eq($extension_UInt32_441_u32 & $this , T rhs)  -> typename $extension_UInt32_441_u32&;
	#line 725 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_qst($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_UInt32_441_u32, bool>;
	#line 734 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_UInt32_441_u32>;
	#line 744 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst_eq($extension_UInt32_441_u32 & $this , T rhs) noexcept -> typename $extension_UInt32_441_u32&;
	#line 755 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mod_qst($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_UInt32_441_u32>;
	#line 764 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mod_qst_eq($extension_UInt32_441_u32 & $this , T rhs) noexcept -> typename $extension_UInt32_441_u32&;
	#line 775 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mod_ne($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt32_441_u32;
	#line 776 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mod_ne_eq($extension_UInt32_441_u32 & $this , T rhs)  -> typename $extension_UInt32_441_u32&;
	#line 780 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mod_mod($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt32_441_u32;
	#line 781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mod_mod_eq($extension_UInt32_441_u32 & $this , T rhs)  -> typename $extension_UInt32_441_u32&;
	#line 786 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mod_mod_qst($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_UInt32_441_u32, bool>;
	#line 795 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_sub_qst($extension_UInt32_441_u32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::Nullable<$extension_UInt32_441_u32>;
	#line 798 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline auto _operator_sub_ne($extension_UInt32_441_u32 const& $this LIFETIMEBOUND)  -> const typename $extension_UInt32_441_u32;
	#line 803 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_sub_mod($extension_UInt32_441_u32 const& $this LIFETIMEBOUND)  -> const typename $extension_UInt32_441_u32;
	#line 811 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_sub_or($extension_UInt32_441_u32 const& $this LIFETIMEBOUND)  -> const typename $extension_UInt32_441_u32;
	#line 814 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_sub_mod_qst($extension_UInt32_441_u32 const& $this LIFETIMEBOUND)  -> const std::tuple<$extension_UInt32_441_u32, bool>;
	#line 822 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_lt_lt_qst($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<$extension_UInt32_441_u32>;
	#line 830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_lt_lt_qst_eq($extension_UInt32_441_u32 & $this , Builtin::i32 amount) noexcept -> typename $extension_UInt32_441_u32&;
	#line 838 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_lt_lt_ne($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_UInt32_441_u32;
	#line 846 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_lt_lt_ne_eq($extension_UInt32_441_u32 & $this , Builtin::i32 amount)  -> typename $extension_UInt32_441_u32&;
	#line 848 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_lt_lt_mod($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename $extension_UInt32_441_u32;
	#line 851 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_lt_lt_mod_eq($extension_UInt32_441_u32 & $this , Builtin::i32 amount) noexcept -> typename $extension_UInt32_441_u32&;
	#line 853 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_lt_lt_mod_qst($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<$extension_UInt32_441_u32, bool>;
	#line 856 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_gt_gt_qst($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<$extension_UInt32_441_u32>;
	#line 864 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_gt_gt_qst_eq($extension_UInt32_441_u32 & $this , Builtin::i32 amount) noexcept -> typename $extension_UInt32_441_u32&;
	#line 872 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_gt_gt_ne($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_UInt32_441_u32;
	#line 880 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_gt_gt_ne_eq($extension_UInt32_441_u32 & $this , Builtin::i32 amount)  -> typename $extension_UInt32_441_u32&;
	#line 882 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_gt_gt_mod($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename $extension_UInt32_441_u32;
	#line 885 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_gt_gt_mod_eq($extension_UInt32_441_u32 & $this , Builtin::i32 amount) noexcept -> typename $extension_UInt32_441_u32&;
	#line 887 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_gt_gt_mod_qst($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<$extension_UInt32_441_u32, bool>;
	#line 892 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_xor_xor_qst($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const Builtin::Nullable<$extension_UInt32_441_u32>;
	#line 921 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_xor_xor_qst_eq($extension_UInt32_441_u32 & $this , Builtin::u32 exp) noexcept -> typename $extension_UInt32_441_u32&;
	#line 929 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_xor_xor_ne($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename $extension_UInt32_441_u32;
	#line 950 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_xor_xor_ne_eq($extension_UInt32_441_u32 & $this , Builtin::u32 exp)  -> typename $extension_UInt32_441_u32&;
	#line 952 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_xor_xor_mod($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename $extension_UInt32_441_u32;
	#line 984 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_xor_xor_mod_eq($extension_UInt32_441_u32 & $this , Builtin::u32 exp) noexcept -> typename $extension_UInt32_441_u32&;
	#line 986 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_xor_xor_or($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename $extension_UInt32_441_u32;
	#line 995 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_xor_xor_or_eq($extension_UInt32_441_u32 & $this , Builtin::u32 exp) noexcept -> typename $extension_UInt32_441_u32&;
	#line 997 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_xor_xor_mod_qst($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const std::tuple<$extension_UInt32_441_u32, bool>;
	#line 1027 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getCheckedAbs($extension_UInt32_441_u32 const& $this ) -> const Builtin::Nullable<$extension_UInt32_441_u32>;
	#line 1029 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getStrictAbs($extension_UInt32_441_u32 const& $this ) -> const $extension_UInt32_441_u32;
	#line 1031 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getWrappingAbs($extension_UInt32_441_u32 const& $this ) -> const $extension_UInt32_441_u32;
	#line 1033 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getSaturatingAbs($extension_UInt32_441_u32 const& $this ) -> const $extension_UInt32_441_u32;
	#line 1035 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getOverflowingAbs($extension_UInt32_441_u32 const& $this ) -> const std::tuple<$extension_UInt32_441_u32, bool>;
	#line 441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt32_441_u32, ICheckedArithmetic, ICheckedArithmetic, $extension_UInt32_441_u32);
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
#line 1038 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	using $extension_UInt32_1038_u32 = Builtin::u32;
	#line 1038 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ADV_CHECK_INTERFACE(IBinaryInteger, IBinaryInteger);
	#line 1077 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto NextMultipleOf($extension_UInt32_1038_u32 const& $this LIFETIMEBOUND, $extension_UInt32_1038_u32 rhs)  -> const typename $extension_UInt32_1038_u32;
	#line 1085 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto CheckedNextMultipleOf($extension_UInt32_1038_u32 const& $this LIFETIMEBOUND, $extension_UInt32_1038_u32 rhs) noexcept -> const Builtin::Nullable<$extension_UInt32_1038_u32>;
	#line 1039 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class __TT> struct $static_getIsSigned; template<> struct $static_getIsSigned<$extension_UInt32_1038_u32> { static inline constexpr auto get() -> const bool; };
	#line 1041 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getTrailingZeroCount($extension_UInt32_1038_u32 const& $this ) -> const Builtin::u32;
	#line 1042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getTrailingOneCount($extension_UInt32_1038_u32 const& $this ) -> const Builtin::u32;
	#line 1043 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getByteCount($extension_UInt32_1038_u32 const& $this ) -> const Builtin::u32;
	#line 1044 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getMinimalBitWidth($extension_UInt32_1038_u32 const& $this ) -> const Builtin::u32;
	#line 1047 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ASTRUMSTD_API auto getCheckedIsqrt($extension_UInt32_1038_u32 const& $this ) -> const Builtin::Nullable<$extension_UInt32_1038_u32>;
	#line 1054 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline auto getIsqrt($extension_UInt32_1038_u32 const& $this ) -> const $extension_UInt32_1038_u32;
	#line 1063 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getLog2Ceiling($extension_UInt32_1038_u32 const& $this ) -> const $extension_UInt32_1038_u32;
	#line 1097 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getPrevPow2($extension_UInt32_1038_u32 const& $this ) -> const $extension_UInt32_1038_u32;
	#line 1108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getNextPow2($extension_UInt32_1038_u32 const& $this ) -> const $extension_UInt32_1038_u32;
	#line 1120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getCheckedNextPow2($extension_UInt32_1038_u32 const& $this ) -> const Builtin::Nullable<$extension_UInt32_1038_u32>;
	#line 1132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getWrappingNextPow2($extension_UInt32_1038_u32 const& $this ) -> const $extension_UInt32_1038_u32;
	#line 1038 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt32_1038_u32, IBinaryInteger, IBinaryInteger, $extension_UInt32_1038_u32);
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
#line 1143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	using $extension_UInt32_1143_u32 = Builtin::u32;
	#line 1143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ADV_CHECK_INTERFACE(IFixedWidthInteger, IFixedWidthInteger);
	#line 1169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto RotateLeft($extension_UInt32_1143_u32 const& $this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename $extension_UInt32_1143_u32;
	#line 1170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto RotateRight($extension_UInt32_1143_u32 const& $this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename $extension_UInt32_1143_u32;
	#line 1144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class __TT> struct $static_getBitWidth; template<> struct $static_getBitWidth<$extension_UInt32_1143_u32> { static inline constexpr auto get() -> const Builtin::u32; };
	#line 1146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getLeadingZeroCount($extension_UInt32_1143_u32 const& $this ) -> const Builtin::u32;
	#line 1147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getLeadingOneCount($extension_UInt32_1143_u32 const& $this ) -> const Builtin::u32;
	#line 1148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getPopCount($extension_UInt32_1143_u32 const& $this ) -> const Builtin::u32;
	#line 1149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getZeroCount($extension_UInt32_1143_u32 const& $this ) -> const Builtin::u32;
	#line 1150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getByteSwapped($extension_UInt32_1143_u32 const& $this ) -> const $extension_UInt32_1143_u32;
	#line 1151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getBigEndian($extension_UInt32_1143_u32 const& $this ) -> const $extension_UInt32_1143_u32;
	#line 1158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getLittleEndian($extension_UInt32_1143_u32 const& $this ) -> const $extension_UInt32_1143_u32;
	#line 1165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getReverseBits($extension_UInt32_1143_u32 const& $this ) -> const $extension_UInt32_1143_u32;
	#line 1167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getShortestBitLength($extension_UInt32_1143_u32 const& $this ) -> const Builtin::u32;
	#line 1143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt32_1143_u32, IFixedWidthInteger, IFixedWidthInteger, $extension_UInt32_1143_u32);
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
#line 1174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	using $extension_UInt32_1174_u32 = Builtin::u32;
	#line 1174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ADV_CHECK_INTERFACE(IBinaryIntegerFormatInfo, IBinaryIntegerFormatInfo);
	#line 1182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto IsGreaterThanAsUnsigned($extension_UInt32_1174_u32 const& $this LIFETIMEBOUND, $extension_UInt32_1174_u32 rhs) noexcept -> const bool;
	#line 1175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class __TT> struct $static_getMaxDigitCount; template<> struct $static_getMaxDigitCount<$extension_UInt32_1174_u32> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class __TT> struct $static_getMaxHexDigitCount; template<> struct $static_getMaxHexDigitCount<$extension_UInt32_1174_u32> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class __TT> struct $static_getMaxValueDiv10; template<> struct $static_getMaxValueDiv10<$extension_UInt32_1174_u32> { static inline constexpr auto get() -> const $extension_UInt32_1174_u32; };
	#line 1179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getMultiplyBy10($extension_UInt32_1174_u32 const& $this ) -> const $extension_UInt32_1174_u32;
	#line 1180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getMultiplyBy16($extension_UInt32_1174_u32 const& $this ) -> const $extension_UInt32_1174_u32;
	#line 1174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_UInt32_1174_u32, IBinaryIntegerFormatInfo, IBinaryIntegerFormatInfo, $extension_UInt32_1174_u32);
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
template<class __TT> struct $static_MaxValue;
template<class __TT> struct $static_getMaxValue;
template<class __TT> struct $static_PopCount;
template<class __TT> struct $static_getPopCount;
template<class __TT> struct $static_BitWidth;
template<class __TT> struct $static_getBitWidth;
template<class __TT> struct $static_AllBitsSet;
template<class __TT> struct $static_getAllBitsSet;
template<class __TT> struct $static_IsPositiveInfinity;
template<class __TT> struct $static_getIsPositiveInfinity;
template<class __TT> struct $static_InvalidOperationException;
template<class __TT> struct $static_getInvalidOperationException;
template<class __TT> struct $static_CheckedLog2;
template<class __TT> struct $static_getCheckedLog2;
template<class __TT> struct $static_Max;
template<class __TT> struct $static_getMax;
template<class __TT> struct $static_DivAssign;
template<class __TT> struct $static_getDivAssign;
template<class __TT> struct $static_IsInteger;
template<class __TT> struct $static_getIsInteger;
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
template<class __TT> struct $static_SafeAdd;
template<class __TT> struct $static_getSafeAdd;
template<class __TT> struct $static_Isqrt32;
template<class __TT> struct $static_getIsqrt32;
template<class __TT> struct $static_SaturatingMultiply;
template<class __TT> struct $static_getSaturatingMultiply;
template<class __TT> struct $static_CheckedIsqrt;
template<class __TT> struct $static_getCheckedIsqrt;
template<class __TT> struct $static_ByteSwapped;
template<class __TT> struct $static_getByteSwapped;
template<class __TT> struct $static_ByteSwap32;
template<class __TT> struct $static_getByteSwap32;
template<class __TT> struct $static_Log2;
template<class __TT> struct $static_getLog2;
template<class __TT> struct $static_One;
template<class __TT> struct $static_getOne;
template<class __TT> struct $static_MinimalBitWidth;
template<class __TT> struct $static_getMinimalBitWidth;
template<class __TT> struct $static_IsLittleEndian;
template<class __TT> struct $static_getIsLittleEndian;
template<class __TT> struct $static_ByteCount;
template<class __TT> struct $static_getByteCount;
template<class __TT> struct $static_IsBigEndian;
template<class __TT> struct $static_getIsBigEndian;
template<class __TT> struct $static_ReverseBits32u;
template<class __TT> struct $static_getReverseBits32u;
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
template<class __TT> struct $static_ToInt32;
template<class __TT> struct $static_getToInt32;
template<class __TT> struct $static_StrictSubtract;
template<class __TT> struct $static_getStrictSubtract;
template<class __TT> struct $static_Div;
template<class __TT> struct $static_getDiv;
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
template<class __TT> struct $static_WideningMul32u;
template<class __TT> struct $static_getWideningMul32u;
template<class __TT> struct $static_IsPositive;
template<class __TT> struct $static_getIsPositive;
template<class __TT> struct $static_DefaultMin;
template<class __TT> struct $static_getDefaultMin;
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
template<class __TT> struct $static_SafeMultiply;
template<class __TT> struct $static_getSafeMultiply;
template<class __TT> struct $static_HashCode;
template<class __TT> struct $static_getHashCode;
template<class __TT> struct $static_CarryingMul32u;
template<class __TT> struct $static_getCarryingMul32u;
template<class __TT> struct $static_IsFinite;
template<class __TT> struct $static_getIsFinite;
template<class __TT> struct $static_SafeDivide;
template<class __TT> struct $static_getSafeDivide;
template<class __TT> struct $static_SafeModulus;
template<class __TT> struct $static_getSafeModulus;
template<class __TT> struct $static_BitsRotateLeft;
template<class __TT> struct $static_getBitsRotateLeft;
template<class __TT> struct $static_ToUInt64;
template<class __TT> struct $static_getToUInt64;
template<class __TT> struct $static_NarrowToInt16;
template<class __TT> struct $static_getNarrowToInt16;
template<class __TT> struct $static_Abs;
template<class __TT> struct $static_getAbs;
template<class __TT> struct $static_IsNegative;
template<class __TT> struct $static_getIsNegative;
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
#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto $static_getMinValue<$extension_UInt32_14_u32>::get() -> const $extension_UInt32_14_u32
	{
		#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(0U)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto $static_getMaxValue<$extension_UInt32_14_u32>::get() -> const $extension_UInt32_14_u32
	{
		#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(4294967295U)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	
} namespace $extensions { using namespace System;
#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto operator<=>($extension_UInt32_19_u32 const& $this LIFETIMEBOUND, Builtin::Nullable<$extension_UInt32_19_u32> rhs) noexcept -> const Builtin::i32
	{
		#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		{
			#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			if ((!Builtin::Is(rhs, nullptr))) {
				#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				auto __tmp0 = *rhs; const auto& rhs = __tmp0;
				
				#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				return $this <=> rhs;
			}
		}
		#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return Builtin::i32(1);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_gt_gt_gt($extension_UInt32_19_u32 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_UInt32_19_u32
	{
		#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY($this >> amount); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_gt_gt_gt_eq($extension_UInt32_19_u32 & $this , Builtin::i32 amount)  -> typename $extension_UInt32_19_u32&
	{
		#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY($this >>= amount); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_lt_lt_bsl($extension_UInt32_19_u32 const& $this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename $extension_UInt32_19_u32
	{
		#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if ((amount <=> ADV_USPCS(BitWidth, $extension_UInt32_19_u32)()) >= 0) {
			#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return Builtin::u32(0U);
		}
		#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return Builtin::UncheckedShiftLeft($this, Builtin::Cast<true, Builtin::i32>(amount));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_lt_lt_bsl_eq($extension_UInt32_19_u32 & $this , Builtin::u32 amount) noexcept -> typename $extension_UInt32_19_u32&
	{
		#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_lt_lt_bsl)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_gt_gt_bsl($extension_UInt32_19_u32 const& $this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename $extension_UInt32_19_u32
	{
		#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if ((amount <=> ADV_USPCS(BitWidth, $extension_UInt32_19_u32)()) >= 0) {
			#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return Builtin::u32(0U);
		}
		#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return Builtin::UncheckedShiftRight($this, Builtin::Cast<true, Builtin::i32>(amount));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_gt_gt_bsl_eq($extension_UInt32_19_u32 & $this , Builtin::u32 amount) noexcept -> typename $extension_UInt32_19_u32&
	{
		#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_gt_gt_bsl)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getHashCode($extension_UInt32_19_u32 const & $this ) -> const Builtin::u64
	{
		#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	
} namespace $extensions { using namespace System;
#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToBoolean($extension_UInt32_87_u32 const& $this LIFETIMEBOUND) noexcept -> const bool
	{
		#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY($this != Builtin::i32(0)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToInt8($extension_UInt32_87_u32 const& $this LIFETIMEBOUND)  -> const Builtin::i8
	{
		#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (($this <=> Builtin::i32(0x7F)) > 0) {
			#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return Builtin::Cast<true, Builtin::i8>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 95 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToUInt8($extension_UInt32_87_u32 const& $this LIFETIMEBOUND)  -> const Builtin::u8
	{
		#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (($this <=> Builtin::i32(0xFF)) > 0) {
			#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 99 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return Builtin::Cast<true, Builtin::u8>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToInt16($extension_UInt32_87_u32 const& $this LIFETIMEBOUND)  -> const Builtin::i16
	{
		#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (($this <=> Builtin::i32(0x7FFF)) > 0) {
			#line 103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return Builtin::Cast<true, Builtin::i16>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToUInt16($extension_UInt32_87_u32 const& $this LIFETIMEBOUND)  -> const Builtin::u16
	{
		#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (($this <=> Builtin::i32(0xFFFF)) > 0) {
			#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return Builtin::Cast<true, Builtin::u16>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToInt32($extension_UInt32_87_u32 const& $this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (($this <=> Builtin::i32(0x7FFFFFFF)) > 0) {
			#line 115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return Builtin::Cast<true, Builtin::i32>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToUInt32($extension_UInt32_87_u32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u32
	{
		#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToInt64($extension_UInt32_87_u32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i64
	{
		#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToUInt64($extension_UInt32_87_u32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u64
	{
		#line 121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToInt128($extension_UInt32_87_u32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i128
	{
		#line 122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToUInt128($extension_UInt32_87_u32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u128
	{
		#line 123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToIsize($extension_UInt32_87_u32 const& $this LIFETIMEBOUND)  -> const Builtin::isize
	{
		#line 126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if constexpr (Builtin::usize(sizeof(Builtin::isize)) == Builtin::i32(32)) {
			#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return ADV_UFCS(ToInt32)($this.$ref());
		} else {
			#line 128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			{
				#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				return $this;
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToUsize($extension_UInt32_87_u32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::usize
	{
		#line 132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToFloat32($extension_UInt32_87_u32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::f32
	{
		#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToFloat64($extension_UInt32_87_u32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::f64
	{
		#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToByte($extension_UInt32_87_u32 const& $this LIFETIMEBOUND)  -> const Builtin::u8
	{
		#line 136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (($this <=> Builtin::i32(0xFF)) > 0) {
			#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return Builtin::Cast<true, Builtin::u8>($this);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToChar($extension_UInt32_87_u32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::char32
	{
		#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::char32>($this)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	
} namespace $extensions { using namespace System;
#line 148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_div_mod($extension_UInt32_146_u32 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_UInt32_146_u32, $extension_UInt32_146_u32>
	{
		#line 150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator /% implemented only for integer types");
		#line 151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return std::make_tuple(ADV_UFCS(_operator_bsl)($this, rhs), $this % rhs);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_div_not($extension_UInt32_146_u32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt32_146_u32
	{
		#line 156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::Auto<decltype($this)> result = $this; 
		#line 157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		result /= rhs;
		#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_div_not_eq($extension_UInt32_146_u32 & $this , auto rhs)  -> typename $extension_UInt32_146_u32&
	{
		#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY($this /= rhs); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_div_lt($extension_UInt32_146_u32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt32_146_u32
	{
		#line 165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if constexpr (Builtin::TypeIs<T, IBinaryInteger>()) {
			#line 166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return ADV_UFCS(_operator_bsl)($this, rhs);
		} else {
			#line 167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			{
				#line 168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				return Builtin::Cast<true, $extension_UInt32_146_u32>((ADV_UFCS(_operator_div_lt)(Builtin::f64{$this}, rhs)));
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_div_lt_eq($extension_UInt32_146_u32 & $this , auto rhs)  -> typename $extension_UInt32_146_u32&
	{
		#line 172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY($this = $extension_UInt32_146_u32{ADV_UFCS(_operator_div_lt)($this, rhs)}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mod_lt($extension_UInt32_146_u32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt32_146_u32
	{
		#line 176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		const Builtin::Auto<decltype($this % rhs)> result = $this % rhs; 
		#line 177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_gt_gt_gt)((result ^ rhs), Builtin::i32{ADV_USPCS(BitWidth, $extension_UInt32_146_u32)() - Builtin::i32(1)}))> signDiff = ADV_UFCS(_operator_gt_gt_gt)((result ^ rhs), Builtin::i32{ADV_USPCS(BitWidth, $extension_UInt32_146_u32)() - Builtin::i32(1)}); 
		#line 178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		const Builtin::Auto<decltype((result != Builtin::i32(0)) & (signDiff != Builtin::i32(0)))> needAdjust = (result != Builtin::i32(0)) & (signDiff != Builtin::i32(0)); 
		#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return result + (needAdjust ? rhs : T{});
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_mod_lt_eq($extension_UInt32_146_u32 & $this , auto rhs)  -> typename $extension_UInt32_146_u32&
	{
		#line 182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY($this = $extension_UInt32_146_u32{ADV_UFCS(_operator_mod_lt)($this, rhs)}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_div_gt($extension_UInt32_146_u32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt32_146_u32
	{
		#line 186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if constexpr (Builtin::TypeIs<T, IBinaryInteger>()) {
			#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			const auto& [div, rem] = ADV_UFCS(_operator_div_mod)($this, rhs);
			#line 188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return (rem <=> Builtin::i32(0)) > 0 ? div + Builtin::i32(1) : div;
		} else {
			#line 189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			{
				#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				return Builtin::Cast<true, $extension_UInt32_146_u32>((ADV_UFCS(_operator_div_gt)(Builtin::f64{$this}, rhs)));
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_div_gt_eq($extension_UInt32_146_u32 & $this , auto rhs)  -> typename $extension_UInt32_146_u32&
	{
		#line 194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY($this = $extension_UInt32_146_u32{ADV_UFCS(_operator_div_gt)($this, rhs)}); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	
} namespace $extensions { using namespace System;
#line 199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_bsl($extension_UInt32_197_u32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt32_197_u32
	{
		#line 199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Div)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_bsl_eq($extension_UInt32_197_u32 & $this , T rhs)  -> typename $extension_UInt32_197_u32&
	{
		#line 201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(DivAssign)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl($extension_UInt32_197_u32 const& $this LIFETIMEBOUND, T rhs)  -> const Builtin::Nullable<$extension_UInt32_197_u32>
	{
		#line 208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\? implemented only for integer types");
		#line 209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		$extension_UInt32_197_u32 result{}; 
		#line 210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (Builtin::DivExact($this, rhs, result)) {
			#line 211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return result;
		}
		#line 213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return nullptr;
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	
} namespace $extensions { using namespace System;
#line 220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_xor_xor($extension_UInt32_217_u32 const& $this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename $extension_UInt32_217_u32
	{
		#line 222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return Builtin::u32(1U);
		}
		#line 227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::Auto<decltype(Builtin::u32(1U))> result = Builtin::u32(1U); 
		#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (std::is_constant_evaluated()) {
			#line 231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			while ((exp <=> Builtin::i32(1)) > 0) 
			{
				#line 232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
					#line 233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
					result *= base;
				}
				#line 235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
				#line 236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				base *= base;
			}
			#line 238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return result * base;
		} else {
			#line 239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			{
				#line 240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				for (;;) 
				{
					#line 241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
					if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
						#line 242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
						result *= base;
						#line 243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
						if (exp == Builtin::i32(1)) {
							#line 244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
							return result;
						}
					}
					#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
					ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
					#line 247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
					base *= base;
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_xor_xor_eq($extension_UInt32_217_u32 & $this , Builtin::u32 exp)  -> typename $extension_UInt32_217_u32&
	{
		#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_xor_xor)($this, exp)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	
} namespace $extensions { using namespace System;
#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto MaxMagnitude($extension_UInt32_255_u32 const& $this LIFETIMEBOUND, $extension_UInt32_255_u32 rhs) noexcept -> const typename $extension_UInt32_255_u32
	{
		#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Max)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto MaxMagnitudeNumber($extension_UInt32_255_u32 const& $this LIFETIMEBOUND, $extension_UInt32_255_u32 rhs) noexcept -> const typename $extension_UInt32_255_u32
	{
		#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Max)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto MinMagnitude($extension_UInt32_255_u32 const& $this LIFETIMEBOUND, $extension_UInt32_255_u32 rhs) noexcept -> const typename $extension_UInt32_255_u32
	{
		#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Min)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto MinMagnitudeNumber($extension_UInt32_255_u32 const& $this LIFETIMEBOUND, $extension_UInt32_255_u32 rhs) noexcept -> const typename $extension_UInt32_255_u32
	{
		#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Min)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto NarrowToInt8($extension_UInt32_255_u32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i8
	{
		#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i8>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto NarrowToUInt8($extension_UInt32_255_u32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u8
	{
		#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u8>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto NarrowToInt16($extension_UInt32_255_u32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i16
	{
		#line 298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i16>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto NarrowToUInt16($extension_UInt32_255_u32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u16
	{
		#line 299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u16>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto NarrowToInt32($extension_UInt32_255_u32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i32
	{
		#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i32>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto NarrowToUInt32($extension_UInt32_255_u32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u32
	{
		#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto NarrowToInt64($extension_UInt32_255_u32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i64
	{
		#line 302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto NarrowToUInt64($extension_UInt32_255_u32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u64
	{
		#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto NarrowToInt128($extension_UInt32_255_u32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i128
	{
		#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto NarrowToUInt128($extension_UInt32_255_u32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u128
	{
		#line 305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto NarrowToIsize($extension_UInt32_255_u32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::isize
	{
		#line 306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::isize>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto NarrowToUsize($extension_UInt32_255_u32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::usize
	{
		#line 307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto $static_getOne<$extension_UInt32_255_u32>::get() -> const $extension_UInt32_255_u32
	{
		#line 256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(1U)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto $static_getZero<$extension_UInt32_255_u32>::get() -> const $extension_UInt32_255_u32
	{
		#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(0U)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto $static_getRadix<$extension_UInt32_255_u32>::get() -> const Builtin::i32
	{
		#line 258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(2)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getAbs($extension_UInt32_255_u32 const & $this ) -> const $extension_UInt32_255_u32
	{
		#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsCanonical($extension_UInt32_255_u32 const & $this ) -> const bool
	{
		#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsComplexNumber($extension_UInt32_255_u32 const & $this ) -> const bool
	{
		#line 262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsEvenInteger($extension_UInt32_255_u32 const & $this ) -> const bool
	{
		#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(($this & Builtin::u32(1U)) == Builtin::i32(0)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsFinite($extension_UInt32_255_u32 const & $this ) -> const bool
	{
		#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsImaginaryNumber($extension_UInt32_255_u32 const & $this ) -> const bool
	{
		#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsInfinity($extension_UInt32_255_u32 const & $this ) -> const bool
	{
		#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsInteger($extension_UInt32_255_u32 const & $this ) -> const bool
	{
		#line 267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsNaN($extension_UInt32_255_u32 const & $this ) -> const bool
	{
		#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsNegative($extension_UInt32_255_u32 const & $this ) -> const bool
	{
		#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsNegativeInfinity($extension_UInt32_255_u32 const & $this ) -> const bool
	{
		#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsNormal($extension_UInt32_255_u32 const & $this ) -> const bool
	{
		#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY($this != Builtin::i32(0)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsOddInteger($extension_UInt32_255_u32 const & $this ) -> const bool
	{
		#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(($this & Builtin::u32(1U)) != Builtin::i32(0)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsPositive($extension_UInt32_255_u32 const & $this ) -> const bool
	{
		#line 273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsPositiveInfinity($extension_UInt32_255_u32 const & $this ) -> const bool
	{
		#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsRealNumber($extension_UInt32_255_u32 const & $this ) -> const bool
	{
		#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsSubnormal($extension_UInt32_255_u32 const & $this ) -> const bool
	{
		#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsZero($extension_UInt32_255_u32 const & $this ) -> const bool
	{
		#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY($this == Builtin::i32(0)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	
} namespace $extensions { using namespace System;
#line 311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto $static_getIsUnsigned<$extension_UInt32_310_u32>::get() -> const bool
	{
		#line 311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	
} namespace $extensions { using namespace System;
#line 317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto CopySign($extension_UInt32_314_u32 const& $this LIFETIMEBOUND, $extension_UInt32_314_u32 sign) noexcept -> const typename $extension_UInt32_314_u32
	{
		#line 317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto Max($extension_UInt32_314_u32 const& $this LIFETIMEBOUND, $extension_UInt32_314_u32 rhs) noexcept -> const typename $extension_UInt32_314_u32
	{
		#line 319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultMax)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto MaxNumber($extension_UInt32_314_u32 const& $this LIFETIMEBOUND, $extension_UInt32_314_u32 rhs) noexcept -> const typename $extension_UInt32_314_u32
	{
		#line 320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Max)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto Min($extension_UInt32_314_u32 const& $this LIFETIMEBOUND, $extension_UInt32_314_u32 rhs) noexcept -> const typename $extension_UInt32_314_u32
	{
		#line 321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultMin)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto MinNumber($extension_UInt32_314_u32 const& $this LIFETIMEBOUND, $extension_UInt32_314_u32 rhs) noexcept -> const typename $extension_UInt32_314_u32
	{
		#line 322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Min)($this.$ref(), rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto Clamp($extension_UInt32_314_u32 const& $this LIFETIMEBOUND, $extension_UInt32_314_u32 min, $extension_UInt32_314_u32 max)  -> const typename $extension_UInt32_314_u32
	{
		#line 323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultClamp)($this, min, max)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getSign($extension_UInt32_314_u32 const & $this ) -> const Builtin::i32
	{
		#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY($this == Builtin::i32(0) ? Builtin::i32(0) : +Builtin::i32(1)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	
} namespace $extensions { using namespace System;
#line 385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto CheckedLog($extension_UInt32_326_u32 const& $this LIFETIMEBOUND, $extension_UInt32_326_u32 base) noexcept -> const Builtin::Nullable<$extension_UInt32_326_u32>
	{
		#line 387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if ($this == Builtin::i32(0) || (base <=> Builtin::i32(1)) <= 0) {
			#line 388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return nullptr;
		}
		#line 391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (std::is_constant_evaluated()) {
			#line 392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			if (base == Builtin::i32(2)) {
				#line 393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				return ADV_UPCS(CheckedLog2)($this.$ref());
			}
			#line 395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			if (base == Builtin::i32(10)) {
				#line 396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				return ADV_UPCS(CheckedLog10)($this.$ref());
			}
		}
		#line 400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (($this <=> base) < 0) {
			#line 401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return Builtin::u32(0U);
		}
		#line 404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		$extension_UInt32_326_u32 n = Builtin::u32(1U); 
		#line 405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::Auto<decltype(base)> r = base; 
		#line 406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_bsl)($this, base))> baseRatio = ADV_UFCS(_operator_bsl)($this, base); 
		#line 407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		while ((r <=> baseRatio) <= 0) 
		{
			#line 408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			++n;
			#line 409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			r *= base;
		}
		#line 412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return n;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto Midpoint($extension_UInt32_326_u32 const& $this LIFETIMEBOUND, $extension_UInt32_326_u32 rhs) noexcept -> const typename $extension_UInt32_326_u32
	{
		#line 428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY((($this ^ rhs) >> Builtin::i32(1)) + ($this & rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto IsMultipleOf($extension_UInt32_326_u32 const& $this LIFETIMEBOUND, $extension_UInt32_326_u32 rhs) noexcept -> const bool
	{
		#line 433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (rhs == Builtin::i32(0)) {
			#line 434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return $this == Builtin::i32(0);
		}
		#line 437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return $this % rhs == Builtin::i32(0);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto $static_getAllBitsSet<$extension_UInt32_326_u32>::get() -> const $extension_UInt32_326_u32
	{
		#line 328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(MaxValue, Builtin::u32)()); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsPow2($extension_UInt32_326_u32 const & $this ) -> const bool
	{
		#line 331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(PopCount)($this.$ref()) == Builtin::i32(1)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getCheckedLog2($extension_UInt32_326_u32 const & $this ) -> const Builtin::Nullable<$extension_UInt32_326_u32>
	{
		#line 337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if ($this == Builtin::i32(0)) {
			#line 338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return nullptr;
		}
		#line 341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return Builtin::Cast<true, $extension_UInt32_326_u32>((ADV_USPCS(BitWidth, $extension_UInt32_326_u32)() - Builtin::i32(1) - ADV_UPCS(LeadingZeroCount)($this.$ref())));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getLog2($extension_UInt32_326_u32 const & $this ) -> const $extension_UInt32_326_u32
	{
		#line 347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (const auto result = ADV_UPCS(CheckedLog2)($this.$ref())) {
			{
				#line 347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				return result;
			}
		}
		#line 350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getCheckedLog10($extension_UInt32_326_u32 const & $this ) -> const Builtin::Nullable<$extension_UInt32_326_u32>
	{
		#line 357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if ($this == Builtin::i32(0)) {
			#line 358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return nullptr;
		}
		#line 361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::Auto<decltype($this)> val = $this; 
		#line 362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		constexpr Builtin::u32 C1 = Builtin::u32(0b01100000000000000000U) - Builtin::i32(10);
		#line 363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		constexpr Builtin::u32 C2 = Builtin::u32(0b10000000000000000000U) - Builtin::i32(100);
		#line 364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		constexpr Builtin::u32 C3 = Builtin::u32(0b11100000000000000000U) - Builtin::i32(1000);
		#line 365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		constexpr Builtin::u32 C4 = Builtin::u32(0b10000000000000000000U) - Builtin::i32(10000);
		#line 366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::Auto<decltype(Builtin::u32(0U))> log = Builtin::u32(0U); 
		#line 367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if ((val <=> Builtin::i32(100000)) >= 0) {
			#line 368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			ADV_UFCS(DivAssign)(val.$ref(), Builtin::u32(100000U));
			#line 369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			log += Builtin::i32(5);
		}
		#line 371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return log + ((((val + C1) & (val + C2)) ^ ((val + C3) & (val + C4))) >> Builtin::i32(17));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getLog10($extension_UInt32_326_u32 const & $this ) -> const $extension_UInt32_326_u32
	{
		#line 377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (const auto result = ADV_UPCS(CheckedLog10)($this.$ref())) {
			{
				#line 377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				return result;
			}
		}
		#line 380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	
} namespace $extensions { using namespace System;
#line 444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_add_qst($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_UInt32_441_u32>
	{
		#line 446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +? implemented only for integer types");
		#line 447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		$extension_UInt32_441_u32 result{}; 
		#line 448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (Builtin::SafeAdd($this, rhs, result)) {
			#line 449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return result;
		}
		#line 451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_add_qst_eq($extension_UInt32_441_u32 & $this , T rhs) noexcept -> typename $extension_UInt32_441_u32&
	{
		#line 455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +?= implemented only for integer types");
		#line 456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (const auto result = ADV_UFCS(_operator_add_qst)($this, rhs)) {
			{
				#line 456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				$this = result;
			}
		}
		#line 459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_add_ne($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt32_441_u32
	{
		#line 466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +! implemented only for integer types");
		#line 467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		$extension_UInt32_441_u32 result{}; 
		#line 468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::StrictAdd($this, rhs, result);
		#line 469 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_add_ne_eq($extension_UInt32_441_u32 & $this , T rhs)  -> typename $extension_UInt32_441_u32&
	{
		#line 471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_add_ne)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_add_mod($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_UInt32_441_u32
	{
		#line 477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +% implemented only for integer types");
		#line 478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		$extension_UInt32_441_u32 result{}; 
		#line 479 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::WrappingAdd($this, rhs, result);
		#line 480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_add_mod_eq($extension_UInt32_441_u32 & $this , T rhs) noexcept -> typename $extension_UInt32_441_u32&
	{
		#line 482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_add_mod)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_add_or($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_UInt32_441_u32
	{
		#line 488 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +| implemented only for integer types");
		#line 489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		$extension_UInt32_441_u32 result{}; 
		#line 490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::SaturatingAdd($this, rhs, result);
		#line 491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_add_or_eq($extension_UInt32_441_u32 & $this , T rhs) noexcept -> typename $extension_UInt32_441_u32&
	{
		#line 493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_add_or)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_add_mod_qst($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_UInt32_441_u32, bool>
	{
		#line 498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +%? implemented only for integer types");
		#line 499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		$extension_UInt32_441_u32 result{}; 
		#line 500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::Auto<decltype(!Builtin::SafeAdd($this, rhs, result))> overflowed = !Builtin::SafeAdd($this, rhs, result); 
		#line 501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_add_add_qst($extension_UInt32_441_u32 & $this )  -> typename $extension_UInt32_441_u32&
	{
		#line 505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_qst_eq)($this, Builtin::u32(1U))); 
	}
	inline constexpr auto _operator_add_add_qst_postfix($extension_UInt32_441_u32 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_add_add_qst)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_add_add_ne($extension_UInt32_441_u32 & $this )  -> typename $extension_UInt32_441_u32&
	{
		#line 508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_ne_eq)($this, Builtin::u32(1U))); 
	}
	inline constexpr auto _operator_add_add_ne_postfix($extension_UInt32_441_u32 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_add_add_ne)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_add_add_mod($extension_UInt32_441_u32 & $this )  -> typename $extension_UInt32_441_u32&
	{
		#line 511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_mod_eq)($this, Builtin::u32(1U))); 
	}
	inline constexpr auto _operator_add_add_mod_postfix($extension_UInt32_441_u32 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_add_add_mod)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_add_add_or($extension_UInt32_441_u32 & $this )  -> typename $extension_UInt32_441_u32&
	{
		#line 514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_or_eq)($this, Builtin::u32(1U))); 
	}
	inline constexpr auto _operator_add_add_or_postfix($extension_UInt32_441_u32 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_add_add_or)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto CarryingAdd($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, $extension_UInt32_441_u32 rhs, bool carry) noexcept -> const std::tuple<$extension_UInt32_441_u32, bool>
	{
		#line 520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		$extension_UInt32_441_u32 result{}; 
		#line 521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::Auto<decltype(Builtin::CarryingAdd($this, rhs, carry, result))> overflowed = Builtin::CarryingAdd($this, rhs, carry, result); 
		#line 522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto BorrowingSub($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, $extension_UInt32_441_u32 rhs, bool carry) noexcept -> const std::tuple<$extension_UInt32_441_u32, bool>
	{
		#line 529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		$extension_UInt32_441_u32 result{}; 
		#line 530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::Auto<decltype(Builtin::BorrowingSub($this, rhs, carry, result))> overflowed = Builtin::BorrowingSub($this, rhs, carry, result); 
		#line 531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_sub_qst($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_UInt32_441_u32>
	{
		#line 538 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -? implemented only for integer types");
		#line 539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		$extension_UInt32_441_u32 result{}; 
		#line 540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (Builtin::SafeSubtract($this, rhs, result)) {
			#line 541 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return result;
		}
		#line 543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 545 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_sub_qst_eq($extension_UInt32_441_u32 & $this , T rhs) noexcept -> typename $extension_UInt32_441_u32&
	{
		#line 547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -?= implemented only for integer types");
		#line 548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (const auto result = ADV_UFCS(_operator_sub_qst)($this, rhs)) {
			{
				#line 548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				$this = result;
			}
		}
		#line 551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_sub_ne($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt32_441_u32
	{
		#line 558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -! implemented only for integer types");
		#line 559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		$extension_UInt32_441_u32 result{}; 
		#line 560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::StrictSubtract($this, rhs, result);
		#line 561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_sub_ne_eq($extension_UInt32_441_u32 & $this , T rhs)  -> typename $extension_UInt32_441_u32&
	{
		#line 563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_sub_ne)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_sub_mod($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_UInt32_441_u32
	{
		#line 569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -% implemented only for integer types");
		#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		$extension_UInt32_441_u32 result{}; 
		#line 571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::WrappingSubtract($this, rhs, result);
		#line 572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_sub_mod_eq($extension_UInt32_441_u32 & $this , T rhs) noexcept -> typename $extension_UInt32_441_u32&
	{
		#line 574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_sub_mod)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_sub_or($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_UInt32_441_u32
	{
		#line 580 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -| implemented only for integer types");
		#line 581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		$extension_UInt32_441_u32 result{}; 
		#line 582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::SaturatingSubtract($this, rhs, result);
		#line 583 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_sub_or_eq($extension_UInt32_441_u32 & $this , T rhs) noexcept -> typename $extension_UInt32_441_u32&
	{
		#line 585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_sub_or)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_sub_mod_qst($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_UInt32_441_u32, bool>
	{
		#line 590 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -%? implemented only for integer types");
		#line 591 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		$extension_UInt32_441_u32 result{}; 
		#line 592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::Auto<decltype(!Builtin::SafeSubtract($this, rhs, result))> overflowed = !Builtin::SafeSubtract($this, rhs, result); 
		#line 593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_sub_sub_qst($extension_UInt32_441_u32 & $this )  -> typename $extension_UInt32_441_u32&
	{
		#line 597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_qst_eq)($this, Builtin::u32(1U))); 
	}
	inline constexpr auto _operator_sub_sub_qst_postfix($extension_UInt32_441_u32 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_sub_sub_qst)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 600 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_sub_sub_ne($extension_UInt32_441_u32 & $this )  -> typename $extension_UInt32_441_u32&
	{
		#line 600 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_ne_eq)($this, Builtin::u32(1U))); 
	}
	inline constexpr auto _operator_sub_sub_ne_postfix($extension_UInt32_441_u32 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_sub_sub_ne)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 603 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_sub_sub_mod($extension_UInt32_441_u32 & $this )  -> typename $extension_UInt32_441_u32&
	{
		#line 603 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_mod_eq)($this, Builtin::u32(1U))); 
	}
	inline constexpr auto _operator_sub_sub_mod_postfix($extension_UInt32_441_u32 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_sub_sub_mod)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 606 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_sub_sub_or($extension_UInt32_441_u32 & $this )  -> typename $extension_UInt32_441_u32&
	{
		#line 606 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_or_eq)($this, Builtin::u32(1U))); 
	}
	inline constexpr auto _operator_sub_sub_or_postfix($extension_UInt32_441_u32 & $this)  -> decltype(auto) { auto copy = $this; ADV_UFCS(_operator_sub_sub_or)($this); return copy; }
	
} namespace System{
} namespace $extensions { using namespace System;
#line 610 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mul_qst($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_UInt32_441_u32>
	{
		#line 612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *? implemented only for integer types");
		#line 613 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		$extension_UInt32_441_u32 result{}; 
		#line 614 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (Builtin::SafeMultiply($this, rhs, result)) {
			#line 615 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return result;
		}
		#line 617 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mul_qst_eq($extension_UInt32_441_u32 & $this , T rhs) noexcept -> typename $extension_UInt32_441_u32&
	{
		#line 621 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *?= implemented only for integer types");
		#line 622 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (const auto result = ADV_UFCS(_operator_mul_qst)($this, rhs)) {
			{
				#line 622 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 623 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				$this = result;
			}
		}
		#line 625 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 630 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mul_ne($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt32_441_u32
	{
		#line 632 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *! implemented only for integer types");
		#line 633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		$extension_UInt32_441_u32 result{}; 
		#line 634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::StrictMultiply($this, rhs, result);
		#line 635 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mul_ne_eq($extension_UInt32_441_u32 & $this , T rhs)  -> typename $extension_UInt32_441_u32&
	{
		#line 637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_mul_ne)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mul_mod($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_UInt32_441_u32
	{
		#line 643 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *% implemented only for integer types");
		#line 644 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		$extension_UInt32_441_u32 result{}; 
		#line 645 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::WrappingMultiply($this, rhs, result);
		#line 646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 648 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mul_mod_eq($extension_UInt32_441_u32 & $this , T rhs) noexcept -> typename $extension_UInt32_441_u32&
	{
		#line 648 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_mul_mod)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mul_or($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const typename $extension_UInt32_441_u32
	{
		#line 654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *| implemented only for integer types");
		#line 655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		$extension_UInt32_441_u32 result{}; 
		#line 656 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::SaturatingMultiply($this, rhs, result);
		#line 657 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 659 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mul_or_eq($extension_UInt32_441_u32 & $this , T rhs) noexcept -> typename $extension_UInt32_441_u32&
	{
		#line 659 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_mul_or)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 663 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mul_mod_qst($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<$extension_UInt32_441_u32, bool>
	{
		#line 664 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *%? implemented only for integer types");
		#line 665 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		$extension_UInt32_441_u32 result{}; 
		#line 666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::Auto<decltype(!Builtin::SafeMultiply($this, rhs, result))> overflowed = !Builtin::SafeMultiply($this, rhs, result); 
		#line 667 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 672 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_mul_gt($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, $extension_UInt32_441_u32 rhs) noexcept -> const std::tuple<Builtin::u32, Builtin::u32>
	{
		#line 674 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		const auto& [low, high] = Builtin::WideningMul32u($this, rhs);
		#line 675 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return std::make_tuple(low, high);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto CarryingMul($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, $extension_UInt32_441_u32 rhs, $extension_UInt32_441_u32 carry) noexcept -> const std::tuple<Builtin::u32, Builtin::u32>
	{
		#line 683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		const auto& [low, high] = Builtin::CarryingMul32u($this, rhs, carry);
		#line 684 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return std::make_tuple(low, high);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_bsl_qst($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_UInt32_441_u32>
	{
		#line 691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\? implemented only for integer types");
		#line 692 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		$extension_UInt32_441_u32 result{}; 
		#line 693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (Builtin::SafeDivide($this, rhs, result)) {
			#line 694 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return result;
		}
		#line 696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 698 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_bsl_qst_eq($extension_UInt32_441_u32 & $this , T rhs) noexcept -> typename $extension_UInt32_441_u32&
	{
		#line 700 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\?= implemented only for integer types");
		#line 701 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (const auto result = ADV_UFCS(_operator_bsl_qst)($this, rhs)) {
			{
				#line 701 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				$this = result;
			}
		}
		#line 704 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_bsl_ne($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt32_441_u32
	{
		#line 709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 710 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_bsl_ne_eq($extension_UInt32_441_u32 & $this , T rhs)  -> typename $extension_UInt32_441_u32&
	{
		#line 710 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl_eq)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 714 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_bsl_mod($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt32_441_u32
	{
		#line 714 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_eq($extension_UInt32_441_u32 & $this , T rhs)  -> typename $extension_UInt32_441_u32&
	{
		#line 715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl_eq)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 719 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_bsl_or($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt32_441_u32
	{
		#line 719 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 720 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_bsl_or_eq($extension_UInt32_441_u32 & $this , T rhs)  -> typename $extension_UInt32_441_u32&
	{
		#line 720 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl_eq)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 725 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_qst($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_UInt32_441_u32, bool>
	{
		#line 726 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\%? implemented only for integer types");
		#line 727 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		$extension_UInt32_441_u32 result{}; 
		#line 728 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::Auto<decltype(!Builtin::SafeDivide($this, rhs, result))> overflowed = !Builtin::SafeDivide($this, rhs, result); 
		#line 729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 734 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_UInt32_441_u32>
	{
		#line 736 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\? implemented only for integer types");
		#line 737 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		$extension_UInt32_441_u32 result{}; 
		#line 738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (Builtin::SafeDivExact($this, rhs, result)) {
			#line 739 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return result;
		}
		#line 741 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 744 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst_eq($extension_UInt32_441_u32 & $this , T rhs) noexcept -> typename $extension_UInt32_441_u32&
	{
		#line 746 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\?= implemented only for integer types");
		#line 747 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (const auto result = ADV_UFCS(_operator_bsl_bsl_qst)($this, rhs)) {
			{
				#line 747 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 748 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				$this = result;
			}
		}
		#line 750 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 755 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mod_qst($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<$extension_UInt32_441_u32>
	{
		#line 757 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %? implemented only for integer types");
		#line 758 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		$extension_UInt32_441_u32 result{}; 
		#line 759 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (Builtin::SafeModulus($this, rhs, result)) {
			#line 760 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return result;
		}
		#line 762 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 764 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mod_qst_eq($extension_UInt32_441_u32 & $this , T rhs) noexcept -> typename $extension_UInt32_441_u32&
	{
		#line 766 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %?= implemented only for integer types");
		#line 767 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (const auto result = ADV_UFCS(_operator_mod_qst)($this, rhs)) {
			{
				#line 767 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 768 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				$this = result;
			}
		}
		#line 770 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 775 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mod_ne($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt32_441_u32
	{
		#line 775 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY($this % rhs); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 776 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mod_ne_eq($extension_UInt32_441_u32 & $this , T rhs)  -> typename $extension_UInt32_441_u32&
	{
		#line 776 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY($this %= rhs); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 780 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mod_mod($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_UInt32_441_u32
	{
		#line 780 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY($this % rhs); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mod_mod_eq($extension_UInt32_441_u32 & $this , T rhs)  -> typename $extension_UInt32_441_u32&
	{
		#line 781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY($this %= rhs); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 786 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mod_mod_qst($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_UInt32_441_u32, bool>
	{
		#line 787 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %%? implemented only for integer types");
		#line 788 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		$extension_UInt32_441_u32 result{}; 
		#line 789 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::Auto<decltype(!Builtin::SafeModulus($this, rhs, result))> overflowed = !Builtin::SafeModulus($this, rhs, result); 
		#line 790 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 795 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_sub_qst($extension_UInt32_441_u32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::Nullable<$extension_UInt32_441_u32>
	{
		#line 795 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(nullptr); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 798 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline auto _operator_sub_ne($extension_UInt32_441_u32 const& $this LIFETIMEBOUND)  -> const typename $extension_UInt32_441_u32
	{
		#line 800 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::Throw(Builtin::IntegerOverflowException{});
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 803 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_sub_mod($extension_UInt32_441_u32 const& $this LIFETIMEBOUND)  -> const typename $extension_UInt32_441_u32
	{
		#line 805 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		$extension_UInt32_441_u32 result{}; 
		#line 806 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::WrappingNegate($this, result);
		#line 807 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 811 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_sub_or($extension_UInt32_441_u32 const& $this LIFETIMEBOUND)  -> const typename $extension_UInt32_441_u32
	{
		#line 811 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(0U)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 814 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_sub_mod_qst($extension_UInt32_441_u32 const& $this LIFETIMEBOUND)  -> const std::tuple<$extension_UInt32_441_u32, bool>
	{
		#line 816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		$extension_UInt32_441_u32 result{}; 
		#line 817 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::Auto<decltype(Builtin::SafeNegate($this, result))> __var_817_8 = Builtin::SafeNegate($this, result); 
		#line 818 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return std::make_tuple(result, Builtin::Boolean(true));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 822 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_lt_lt_qst($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<$extension_UInt32_441_u32>
	{
		#line 824 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_UInt32_441_u32)()) < 0) {
			#line 825 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return Builtin::UncheckedShiftLeft($this, amount);
		}
		#line 827 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_lt_lt_qst_eq($extension_UInt32_441_u32 & $this , Builtin::i32 amount) noexcept -> typename $extension_UInt32_441_u32&
	{
		#line 832 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_UInt32_441_u32)()) < 0) {
			#line 833 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return $this <<= amount;
		}
		#line 835 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 838 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_lt_lt_ne($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_UInt32_441_u32
	{
		#line 840 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_UInt32_441_u32)()) < 0) {
			#line 841 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return Builtin::UncheckedShiftLeft($this, amount);
		}
		#line 843 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::Throw(Builtin::IntegerOverflowException{});
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 846 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_lt_lt_ne_eq($extension_UInt32_441_u32 & $this , Builtin::i32 amount)  -> typename $extension_UInt32_441_u32&
	{
		#line 846 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_lt_lt_ne)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 848 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_lt_lt_mod($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename $extension_UInt32_441_u32
	{
		#line 848 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(Builtin::UncheckedShiftLeft($this, amount & (ADV_USPCS(BitWidth, $extension_UInt32_441_u32)() - Builtin::i32(1)))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 851 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_lt_lt_mod_eq($extension_UInt32_441_u32 & $this , Builtin::i32 amount) noexcept -> typename $extension_UInt32_441_u32&
	{
		#line 851 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_lt_lt_mod)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 853 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_lt_lt_mod_qst($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<$extension_UInt32_441_u32, bool>
	{
		#line 853 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(std::make_tuple(ADV_UFCS(_operator_lt_lt_mod)($this, amount), (amount <=> Builtin::i32(0)) < 0 || (amount <=> ADV_USPCS(BitWidth, $extension_UInt32_441_u32)()) >= 0)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 856 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_gt_gt_qst($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<$extension_UInt32_441_u32>
	{
		#line 858 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_UInt32_441_u32)()) < 0) {
			#line 859 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return $this >> amount;
		}
		#line 861 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 864 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_gt_gt_qst_eq($extension_UInt32_441_u32 & $this , Builtin::i32 amount) noexcept -> typename $extension_UInt32_441_u32&
	{
		#line 866 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_UInt32_441_u32)()) < 0) {
			#line 867 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return $this >>= amount;
		}
		#line 869 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 872 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_gt_gt_ne($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename $extension_UInt32_441_u32
	{
		#line 874 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, $extension_UInt32_441_u32)()) < 0) {
			#line 875 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return $this >> amount;
		}
		#line 877 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::Throw(Builtin::IntegerOverflowException{});
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 880 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_gt_gt_ne_eq($extension_UInt32_441_u32 & $this , Builtin::i32 amount)  -> typename $extension_UInt32_441_u32&
	{
		#line 880 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_gt_gt_ne)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 882 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_gt_gt_mod($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename $extension_UInt32_441_u32
	{
		#line 882 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(Builtin::UncheckedShiftRight($this, amount & (ADV_USPCS(BitWidth, $extension_UInt32_441_u32)() - Builtin::i32(1)))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 885 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_gt_gt_mod_eq($extension_UInt32_441_u32 & $this , Builtin::i32 amount) noexcept -> typename $extension_UInt32_441_u32&
	{
		#line 885 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_gt_gt_mod)($this, amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 887 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_gt_gt_mod_qst($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<$extension_UInt32_441_u32, bool>
	{
		#line 887 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(std::make_tuple(ADV_UFCS(_operator_gt_gt_mod)($this, amount), (amount <=> Builtin::i32(0)) < 0 || (amount <=> ADV_USPCS(BitWidth, $extension_UInt32_441_u32)()) >= 0)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 892 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_xor_xor_qst($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const Builtin::Nullable<$extension_UInt32_441_u32>
	{
		#line 894 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 896 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return Builtin::u32(1U);
		}
		#line 899 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 900 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::Auto<decltype(Builtin::u32(1U))> result = Builtin::u32(1U); 
		#line 902 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		for (;;) 
		{
			#line 903 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 904 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				if (const auto mul = ADV_UFCS(_operator_mul_qst)(result, base)) {
					{
						#line 904 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
						auto __tmp0 = *mul; const auto& mul = __tmp0;
						
						#line 905 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
						result = mul;
					}
				} else {
					#line 906 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
					{
						#line 907 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
						return nullptr;
					}
				}
				#line 909 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				if (exp == Builtin::i32(1)) {
					#line 910 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
					return result;
				}
			}
			#line 912 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
			#line 913 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			if (const auto mul = ADV_UFCS(_operator_mul_qst)(base, base)) {
				{
					#line 913 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
					auto __tmp0 = *mul; const auto& mul = __tmp0;
					
					#line 914 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
					base = mul;
				}
			} else {
				#line 915 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				{
					#line 916 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
					return nullptr;
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 921 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_xor_xor_qst_eq($extension_UInt32_441_u32 & $this , Builtin::u32 exp) noexcept -> typename $extension_UInt32_441_u32&
	{
		#line 923 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (auto result = ADV_UFCS(_operator_xor_xor_qst)($this, exp)) {
			{
				#line 923 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 924 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				return $this = result;
			}
		}
		#line 926 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 929 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_xor_xor_ne($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename $extension_UInt32_441_u32
	{
		#line 931 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 933 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return Builtin::u32(1U);
		}
		#line 936 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 937 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::Auto<decltype(Builtin::u32(1U))> result = Builtin::u32(1U); 
		#line 939 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		for (;;) 
		{
			#line 940 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 941 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				ADV_UFCS(_operator_mul_ne_eq)(result, base);
				#line 942 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				if (exp == Builtin::i32(1)) {
					#line 943 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
					return result;
				}
			}
			#line 945 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
			#line 946 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			ADV_UFCS(_operator_mul_ne_eq)(base, base);
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 950 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_xor_xor_ne_eq($extension_UInt32_441_u32 & $this , Builtin::u32 exp)  -> typename $extension_UInt32_441_u32&
	{
		#line 950 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_xor_xor_ne)($this, exp)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 952 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_xor_xor_mod($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename $extension_UInt32_441_u32
	{
		#line 954 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 956 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return Builtin::u32(1U);
		}
		#line 959 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 960 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::Auto<decltype(Builtin::u32(1U))> result = Builtin::u32(1U); 
		#line 962 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (std::is_constant_evaluated()) {
			#line 963 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			while ((exp <=> Builtin::i32(1)) > 0) 
			{
				#line 964 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
					#line 965 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
					ADV_UFCS(_operator_mul_mod_eq)(result, base);
				}
				#line 967 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
				#line 968 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				ADV_UFCS(_operator_mul_mod_eq)(base, base);
			}
			#line 970 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return ADV_UFCS(_operator_mul_mod)(result, base);
		} else {
			#line 971 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			{
				#line 972 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				for (;;) 
				{
					#line 973 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
					if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
						#line 974 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
						ADV_UFCS(_operator_mul_mod_eq)(result, base);
						#line 975 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
						if (exp == Builtin::i32(1)) {
							#line 976 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
							return result;
						}
					}
					#line 978 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
					ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
					#line 979 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
					ADV_UFCS(_operator_mul_mod_eq)(base, base);
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 984 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_xor_xor_mod_eq($extension_UInt32_441_u32 & $this , Builtin::u32 exp) noexcept -> typename $extension_UInt32_441_u32&
	{
		#line 984 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_xor_xor_mod)($this, exp)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 986 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_xor_xor_or($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename $extension_UInt32_441_u32
	{
		#line 988 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (const auto result = ADV_UFCS(_operator_xor_xor_qst)($this, exp)) {
			{
				#line 988 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 989 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				return result;
			}
		}
		#line 992 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return ADV_USPCS(MaxValue, $extension_UInt32_441_u32)();
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 995 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_xor_xor_or_eq($extension_UInt32_441_u32 & $this , Builtin::u32 exp) noexcept -> typename $extension_UInt32_441_u32&
	{
		#line 995 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_xor_xor_or)($this, exp)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 997 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_xor_xor_mod_qst($extension_UInt32_441_u32 const& $this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const std::tuple<$extension_UInt32_441_u32, bool>
	{
		#line 999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1001 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return std::make_tuple(Builtin::u32(1U), Builtin::Boolean(false));
		}
		#line 1004 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 1005 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::Auto<decltype(Builtin::u32(1U))> result = Builtin::u32(1U); 
		#line 1006 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::Auto<decltype(Builtin::Boolean(false))> overflowed = Builtin::Boolean(false); 
		#line 1007 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::Auto<decltype(std::make_tuple(Builtin::u32(0U), Builtin::Boolean(false)))> tmp = std::make_tuple(Builtin::u32(0U), Builtin::Boolean(false)); 
		#line 1009 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		for (;;) 
		{
			#line 1010 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 1011 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				tmp = ADV_UFCS(_operator_mul_mod_qst)(result, base);
				#line 1012 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				if (exp == Builtin::i32(1)) {
					#line 1013 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
					std::get<1>(tmp) |= overflowed;
					#line 1014 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
					return tmp;
				}
				#line 1016 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				result = std::get<0>(tmp);
				#line 1017 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				overflowed |= std::get<1>(tmp);
			}
			#line 1019 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			ADV_UFCS(DivAssign)(exp.$ref(), Builtin::i32(2));
			#line 1020 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			tmp = ADV_UFCS(_operator_mul_mod_qst)(base, base);
			#line 1021 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			base = std::get<0>(tmp);
			#line 1022 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			overflowed |= std::get<1>(tmp);
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1027 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getCheckedAbs($extension_UInt32_441_u32 const & $this ) -> const Builtin::Nullable<$extension_UInt32_441_u32>
	{
		#line 1027 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1029 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getStrictAbs($extension_UInt32_441_u32 const & $this ) -> const $extension_UInt32_441_u32
	{
		#line 1029 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1031 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getWrappingAbs($extension_UInt32_441_u32 const & $this ) -> const $extension_UInt32_441_u32
	{
		#line 1031 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1033 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getSaturatingAbs($extension_UInt32_441_u32 const & $this ) -> const $extension_UInt32_441_u32
	{
		#line 1033 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1035 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getOverflowingAbs($extension_UInt32_441_u32 const & $this ) -> const std::tuple<$extension_UInt32_441_u32, bool>
	{
		#line 1035 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(std::make_tuple($this, Builtin::Boolean(false))); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	
} namespace $extensions { using namespace System;
#line 1077 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto NextMultipleOf($extension_UInt32_1038_u32 const& $this LIFETIMEBOUND, $extension_UInt32_1038_u32 rhs)  -> const typename $extension_UInt32_1038_u32
	{
		#line 1079 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		const Builtin::Auto<decltype($this % rhs)> rem = $this % rhs; 
		#line 1080 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return rem == Builtin::u32(0U) ? $this : $this + (rhs - rem);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1085 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto CheckedNextMultipleOf($extension_UInt32_1038_u32 const& $this LIFETIMEBOUND, $extension_UInt32_1038_u32 rhs) noexcept -> const Builtin::Nullable<$extension_UInt32_1038_u32>
	{
		#line 1087 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (const auto rem = ADV_UFCS(_operator_mod_qst)($this, rhs)) {
			{
				#line 1087 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				auto __tmp0 = *rem; const auto& rem = __tmp0;
				
				#line 1088 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				if (rem == Builtin::u32(0U)) {
					#line 1089 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
					return $this;
				}
				#line 1091 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				return ADV_UFCS(_operator_add_qst)($this, (rhs - rem));
			}
		}
		#line 1093 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1039 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto $static_getIsSigned<$extension_UInt32_1038_u32>::get() -> const bool
	{
		#line 1039 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1041 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getTrailingZeroCount($extension_UInt32_1038_u32 const & $this ) -> const Builtin::u32
	{
		#line 1041 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(Builtin::TrailingZeroCount($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getTrailingOneCount($extension_UInt32_1038_u32 const & $this ) -> const Builtin::u32
	{
		#line 1042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(Builtin::TrailingZeroCount(ADV_UFCS(_operator_not)($this))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1043 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getByteCount($extension_UInt32_1038_u32 const & $this ) -> const Builtin::u32
	{
		#line 1043 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u32>(Builtin::usize(sizeof($extension_UInt32_1038_u32)))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1044 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getMinimalBitWidth($extension_UInt32_1038_u32 const & $this ) -> const Builtin::u32
	{
		#line 1044 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(BitWidth, $extension_UInt32_1038_u32)() - ADV_UPCS(LeadingZeroCount)($this.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1054 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline auto getIsqrt($extension_UInt32_1038_u32 const & $this ) -> const $extension_UInt32_1038_u32
	{
		#line 1055 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (const auto result = ADV_UPCS(CheckedIsqrt)($this.$ref())) {
			{
				#line 1055 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 1056 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				return result;
			}
		}
		#line 1058 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1063 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getLog2Ceiling($extension_UInt32_1038_u32 const & $this ) -> const $extension_UInt32_1038_u32
	{
		#line 1065 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::Auto<decltype(ADV_UPCS(Log2)($this.$ref()))> result = ADV_UPCS(Log2)($this.$ref()); 
		#line 1066 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (ADV_UPCS(PopCount)($this.$ref()) != Builtin::u32(1U)) {
			#line 1067 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			++result;
		}
		#line 1070 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return result;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1097 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getPrevPow2($extension_UInt32_1038_u32 const & $this ) -> const $extension_UInt32_1038_u32
	{
		#line 1099 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (($this <=> Builtin::u32(1U)) <= 0) {
			#line 1100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return Builtin::u32(0U);
		}
		#line 1103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return ADV_USPCS(One, $extension_UInt32_1038_u32)() << (ADV_UPCS(MinimalBitWidth)($this.$ref()) - Builtin::u32(1U));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getNextPow2($extension_UInt32_1038_u32 const & $this ) -> const $extension_UInt32_1038_u32
	{
		#line 1110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (($this <=> Builtin::u32(1U)) <= 0) {
			#line 1111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return Builtin::u32(0U);
		}
		#line 1114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		const Builtin::Auto<decltype($this - Builtin::u32(1U))> p = $this - Builtin::u32(1U); 
		#line 1115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return (ADV_USPCS(AllBitsSet, $extension_UInt32_1038_u32)() >> ADV_UPCS(LeadingZeroCount)(p.$ref())) + Builtin::u32(1U);
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getCheckedNextPow2($extension_UInt32_1038_u32 const & $this ) -> const Builtin::Nullable<$extension_UInt32_1038_u32>
	{
		#line 1122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (($this <=> Builtin::u32(1U)) <= 0) {
			#line 1123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return Builtin::u32(0U);
		}
		#line 1126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		const Builtin::Auto<decltype($this - Builtin::u32(1U))> p = $this - Builtin::u32(1U); 
		#line 1127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return ADV_UFCS(_operator_add_qst)((ADV_USPCS(AllBitsSet, $extension_UInt32_1038_u32)() >> ADV_UPCS(LeadingZeroCount)(p.$ref())), Builtin::u32(1U));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getWrappingNextPow2($extension_UInt32_1038_u32 const & $this ) -> const $extension_UInt32_1038_u32
	{
		#line 1134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (($this <=> Builtin::u32(1U)) <= 0) {
			#line 1135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return Builtin::u32(0U);
		}
		#line 1138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		const Builtin::Auto<decltype($this - Builtin::u32(1U))> p = $this - Builtin::u32(1U); 
		#line 1139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return ADV_UFCS(_operator_add_mod)((ADV_USPCS(AllBitsSet, $extension_UInt32_1038_u32)() >> ADV_UPCS(LeadingZeroCount)(p.$ref())), Builtin::u32(1U));
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	
} namespace $extensions { using namespace System;
#line 1169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto RotateLeft($extension_UInt32_1143_u32 const& $this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename $extension_UInt32_1143_u32
	{
		#line 1169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(Builtin::BitsRotateLeft($this, shiftAmount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto RotateRight($extension_UInt32_1143_u32 const& $this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename $extension_UInt32_1143_u32
	{
		#line 1170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(Builtin::BitsRotateRight($this, shiftAmount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto $static_getBitWidth<$extension_UInt32_1143_u32>::get() -> const Builtin::u32
	{
		#line 1144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(32U)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getLeadingZeroCount($extension_UInt32_1143_u32 const & $this ) -> const Builtin::u32
	{
		#line 1146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(Builtin::LeadingZeroCount($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getLeadingOneCount($extension_UInt32_1143_u32 const & $this ) -> const Builtin::u32
	{
		#line 1147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(Builtin::LeadingZeroCount(ADV_UFCS(_operator_not)($this))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getPopCount($extension_UInt32_1143_u32 const & $this ) -> const Builtin::u32
	{
		#line 1148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(Builtin::PopCount($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getZeroCount($extension_UInt32_1143_u32 const & $this ) -> const Builtin::u32
	{
		#line 1149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(Builtin::PopCount(ADV_UFCS(_operator_not)($this))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getByteSwapped($extension_UInt32_1143_u32 const & $this ) -> const $extension_UInt32_1143_u32
	{
		#line 1150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(Builtin::ByteSwap32($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getBigEndian($extension_UInt32_1143_u32 const & $this ) -> const $extension_UInt32_1143_u32
	{
		#line 1153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if constexpr (Builtin::IsLittleEndian()) {
			#line 1154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return ADV_UPCS(ByteSwapped)($this.$ref());
		}
		#line 1156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return $this;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getLittleEndian($extension_UInt32_1143_u32 const & $this ) -> const $extension_UInt32_1143_u32
	{
		#line 1160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if constexpr (Builtin::IsBigEndian()) {
			#line 1161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return ADV_UPCS(ByteSwapped)($this.$ref());
		}
		#line 1163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return $this;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getReverseBits($extension_UInt32_1143_u32 const & $this ) -> const $extension_UInt32_1143_u32
	{
		#line 1165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(Builtin::ReverseBits32u($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getShortestBitLength($extension_UInt32_1143_u32 const & $this ) -> const Builtin::u32
	{
		#line 1167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(BitWidth, $extension_UInt32_1143_u32)() - ADV_UPCS(LeadingZeroCount)($this.$ref())); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	
} namespace $extensions { using namespace System;
#line 1182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto IsGreaterThanAsUnsigned($extension_UInt32_1174_u32 const& $this LIFETIMEBOUND, $extension_UInt32_1174_u32 rhs) noexcept -> const bool
	{
		#line 1182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(($this <=> rhs) > 0); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto $static_getMaxDigitCount<$extension_UInt32_1174_u32>::get() -> const Builtin::i32
	{
		#line 1175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(10)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto $static_getMaxHexDigitCount<$extension_UInt32_1174_u32>::get() -> const Builtin::i32
	{
		#line 1176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(8)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto $static_getMaxValueDiv10<$extension_UInt32_1174_u32>::get() -> const $extension_UInt32_1174_u32
	{
		#line 1177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl)(ADV_USPCS(MaxValue, Builtin::u32)(), Builtin::i32(10))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getMultiplyBy10($extension_UInt32_1174_u32 const & $this ) -> const $extension_UInt32_1174_u32
	{
		#line 1179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_mod)($this, Builtin::u32(10U))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getMultiplyBy16($extension_UInt32_1174_u32 const & $this ) -> const $extension_UInt32_1174_u32
	{
		#line 1180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_mod)($this, Builtin::u32(16U))); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	

}