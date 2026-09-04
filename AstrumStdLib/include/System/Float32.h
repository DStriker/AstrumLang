#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "Int128.h"
#include "UInt128.h"
#include "Boolean.h"
#include "MidpointRounding.h"
#include "FloatingPointCategory.h"
#include "InlineArray.h"
#include "System/Numerics/IBinaryFloatFormatInfo.h"
using namespace System::Numerics;

namespace System {
namespace __Unsafe {} namespace __Float32$Protected__Unsafe {}
//###############################################################################
//# Global type aliases
//###############################################################################
#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
using Float32 = Builtin::f32;
#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
using Single = Builtin::f32;
//###############################################################################
//# Type definitions
//###############################################################################
	} namespace $extensions { using namespace System;
#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	using $extension_Float32_14_f32 = Builtin::f32;
	#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE(IMinMaxValue, IMinMaxValue);
	#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct $static_getMinValue; template<> struct $static_getMinValue<$extension_Float32_14_f32> { static inline constexpr auto get() -> const $extension_Float32_14_f32; };
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct $static_getMaxValue; template<> struct $static_getMaxValue<$extension_Float32_14_f32> { static inline constexpr auto get() -> const $extension_Float32_14_f32; };
	#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Float32_14_f32, IMinMaxValue, IMinMaxValue, $extension_Float32_14_f32);
	} namespace System{
using $extensions::$static_getMinValue;
using $extensions::$static_getMaxValue;

		} namespace $extensions { using namespace System;
#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	using $extension_Float32_19_f32 = Builtin::f32;
	#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ASTRUMSTD_API auto _operator_eq_eq_mul($extension_Float32_19_f32 const& $this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool;
	#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto operator<=>($extension_Float32_19_f32 const& $this LIFETIMEBOUND, Builtin::Nullable<$extension_Float32_19_f32> rhs) noexcept -> const Builtin::i32;
	#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct $static_FromBits; template<> struct $static_FromBits<$extension_Float32_19_f32> { static inline constexpr auto get(Builtin::u32 bits)  -> const typename $extension_Float32_19_f32; };
	#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getBits($extension_Float32_19_f32 const& $this ) -> const Builtin::u32;
	#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct $static_getBitWidth; template<> struct $static_getBitWidth<$extension_Float32_19_f32> { static inline constexpr auto get() -> const Builtin::u32; };
	#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct $static_getMinPositiveValue; template<> struct $static_getMinPositiveValue<$extension_Float32_19_f32> { static inline constexpr auto get() -> const $extension_Float32_19_f32; };
	#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getHashCode($extension_Float32_19_f32 const& $this ) -> const Builtin::u64;
	} namespace System{
using $extensions::_operator_eq_eq_mul;
using $extensions::operator<=>;
using $extensions::$static_FromBits;
using $extensions::getBits;
using $extensions::$static_getBitWidth;
using $extensions::$static_getMinPositiveValue;
using $extensions::getHashCode;

		} namespace $extensions { using namespace System;
#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	using $extension_Float32_61_f32 = Builtin::f32;
	#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE(IAbstractComparable, IAbstractComparable);
	#line 62 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ASTRUMSTD_API auto _operator_lt_eq_gt_mul($extension_Float32_61_f32 const& $this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32;
	#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Float32_61_f32, IAbstractComparable, IAbstractComparable, $extension_Float32_61_f32);
	} namespace System{
using $extensions::_operator_lt_eq_gt_mul;

		} namespace $extensions { using namespace System;
#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	using $extension_Float32_76_f32 = Builtin::f32;
	#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE(IConvertible, IConvertible);
	#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToBoolean($extension_Float32_76_f32 const& $this LIFETIMEBOUND) noexcept -> const bool;
	#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToInt8($extension_Float32_76_f32 const& $this LIFETIMEBOUND)  -> const Builtin::i8;
	#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToUInt8($extension_Float32_76_f32 const& $this LIFETIMEBOUND)  -> const Builtin::u8;
	#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToInt16($extension_Float32_76_f32 const& $this LIFETIMEBOUND)  -> const Builtin::i16;
	#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToUInt16($extension_Float32_76_f32 const& $this LIFETIMEBOUND)  -> const Builtin::u16;
	#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToInt32($extension_Float32_76_f32 const& $this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToUInt32($extension_Float32_76_f32 const& $this LIFETIMEBOUND)  -> const Builtin::u32;
	#line 84 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToInt64($extension_Float32_76_f32 const& $this LIFETIMEBOUND)  -> const Builtin::i64;
	#line 85 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToUInt64($extension_Float32_76_f32 const& $this LIFETIMEBOUND)  -> const Builtin::u64;
	#line 86 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToInt128($extension_Float32_76_f32 const& $this LIFETIMEBOUND)  -> const Builtin::i128;
	#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToUInt128($extension_Float32_76_f32 const& $this LIFETIMEBOUND)  -> const Builtin::u128;
	#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToIsize($extension_Float32_76_f32 const& $this LIFETIMEBOUND)  -> const Builtin::isize;
	#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToUsize($extension_Float32_76_f32 const& $this LIFETIMEBOUND)  -> const Builtin::usize;
	#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToFloat32($extension_Float32_76_f32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::f32;
	#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToFloat64($extension_Float32_76_f32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::f64;
	#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToByte($extension_Float32_76_f32 const& $this LIFETIMEBOUND)  -> const Builtin::u8;
	#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToChar($extension_Float32_76_f32 const& $this LIFETIMEBOUND)  -> const Builtin::char32;
	#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Float32_76_f32, IConvertible, IConvertible, $extension_Float32_76_f32);
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
#line 98 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	using $extension_Float32_98_f32 = Builtin::f32;
	#line 98 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE(IDivisibleArithmetic, IDivisibleArithmetic);
	#line 100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class T> inline constexpr auto _operator_div_mod($extension_Float32_98_f32 const& $this LIFETIMEBOUND, T rhs)  -> const Builtin::Tuple<$extension_Float32_98_f32, $extension_Float32_98_f32>;
	#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class T> inline constexpr auto _operator_div_not($extension_Float32_98_f32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Float32_98_f32;
	#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto _operator_div_not_eq($extension_Float32_98_f32 & $this , auto rhs)  -> typename $extension_Float32_98_f32&;
	#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class T> inline constexpr auto _operator_div_lt($extension_Float32_98_f32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Float32_98_f32;
	#line 112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto _operator_div_lt_eq($extension_Float32_98_f32 & $this , auto rhs)  -> typename $extension_Float32_98_f32&;
	#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class T> inline constexpr auto _operator_div_gt($extension_Float32_98_f32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Float32_98_f32;
	#line 116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto _operator_div_gt_eq($extension_Float32_98_f32 & $this , auto rhs)  -> typename $extension_Float32_98_f32&;
	#line 98 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Float32_98_f32, IDivisibleArithmetic, IDivisibleArithmetic, $extension_Float32_98_f32);
	} namespace System{
using $extensions::_operator_div_mod;
using $extensions::_operator_div_not;
using $extensions::_operator_div_not_eq;
using $extensions::_operator_div_lt;
using $extensions::_operator_div_lt_eq;
using $extensions::_operator_div_gt;
using $extensions::_operator_div_gt_eq;

		} namespace $extensions { using namespace System;
#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	using $extension_Float32_120_f32 = Builtin::f32;
	#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE(ISignedIntegerPowerArithmetic, ISignedIntegerPowerArithmetic);
	#line 122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto _operator_xor_xor($extension_Float32_120_f32 const& $this LIFETIMEBOUND, Builtin::i32 exp)  -> const typename $extension_Float32_120_f32;
	#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto _operator_xor_xor_eq($extension_Float32_120_f32 & $this , Builtin::i32 exp)  -> typename $extension_Float32_120_f32&;
	#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Float32_120_f32, ISignedIntegerPowerArithmetic, ISignedIntegerPowerArithmetic, $extension_Float32_120_f32);
	} namespace System{
using $extensions::_operator_xor_xor;
using $extensions::_operator_xor_xor_eq;

		} namespace $extensions { using namespace System;
#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	using $extension_Float32_161_f32 = Builtin::f32;
	#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE(INumberBase, INumberBase);
	#line 198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto MaxMagnitude($extension_Float32_161_f32 const& $this LIFETIMEBOUND, $extension_Float32_161_f32 rhs) noexcept -> const typename $extension_Float32_161_f32;
	#line 216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto MaxMagnitudeNumber($extension_Float32_161_f32 const& $this LIFETIMEBOUND, $extension_Float32_161_f32 rhs) noexcept -> const typename $extension_Float32_161_f32;
	#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto MinMagnitude($extension_Float32_161_f32 const& $this LIFETIMEBOUND, $extension_Float32_161_f32 rhs) noexcept -> const typename $extension_Float32_161_f32;
	#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto MinMagnitudeNumber($extension_Float32_161_f32 const& $this LIFETIMEBOUND, $extension_Float32_161_f32 rhs) noexcept -> const typename $extension_Float32_161_f32;
	#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ASTRUMSTD_API auto Parse($extension_Float32_161_f32 const& $this LIFETIMEBOUND, Builtin::Str input)  -> const typename $extension_Float32_161_f32;
	#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ASTRUMSTD_API auto TryParse($extension_Float32_161_f32 const& $this LIFETIMEBOUND, Builtin::Str input) noexcept -> const Builtin::Nullable<$extension_Float32_161_f32>;
	#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToInt8($extension_Float32_161_f32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i8;
	#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToUInt8($extension_Float32_161_f32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u8;
	#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToInt16($extension_Float32_161_f32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i16;
	#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToUInt16($extension_Float32_161_f32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u16;
	#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToInt32($extension_Float32_161_f32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i32;
	#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToUInt32($extension_Float32_161_f32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u32;
	#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToInt64($extension_Float32_161_f32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i64;
	#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToUInt64($extension_Float32_161_f32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u64;
	#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToInt128($extension_Float32_161_f32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i128;
	#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToUInt128($extension_Float32_161_f32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u128;
	#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToIsize($extension_Float32_161_f32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::isize;
	#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToUsize($extension_Float32_161_f32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::usize;
	#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct $static_getOne; template<> struct $static_getOne<$extension_Float32_161_f32> { static inline constexpr auto get() -> const $extension_Float32_161_f32; };
	#line 163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct $static_getZero; template<> struct $static_getZero<$extension_Float32_161_f32> { static inline constexpr auto get() -> const $extension_Float32_161_f32; };
	#line 164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct $static_getRadix; template<> struct $static_getRadix<$extension_Float32_161_f32> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getAbs($extension_Float32_161_f32 const& $this ) -> const $extension_Float32_161_f32;
	#line 172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsCanonical($extension_Float32_161_f32 const& $this ) -> const bool;
	#line 173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsComplexNumber($extension_Float32_161_f32 const& $this ) -> const bool;
	#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsEvenInteger($extension_Float32_161_f32 const& $this ) -> const bool;
	#line 175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsFinite($extension_Float32_161_f32 const& $this ) -> const bool;
	#line 176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsImaginaryNumber($extension_Float32_161_f32 const& $this ) -> const bool;
	#line 177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsInfinity($extension_Float32_161_f32 const& $this ) -> const bool;
	#line 178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsInteger($extension_Float32_161_f32 const& $this ) -> const bool;
	#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsNaN($extension_Float32_161_f32 const& $this ) -> const bool;
	#line 180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsNegative($extension_Float32_161_f32 const& $this ) -> const bool;
	#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsNegativeInfinity($extension_Float32_161_f32 const& $this ) -> const bool;
	#line 182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsNormal($extension_Float32_161_f32 const& $this ) -> const bool;
	#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsOddInteger($extension_Float32_161_f32 const& $this ) -> const bool;
	#line 188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsPositive($extension_Float32_161_f32 const& $this ) -> const bool;
	#line 189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsPositiveInfinity($extension_Float32_161_f32 const& $this ) -> const bool;
	#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsRealNumber($extension_Float32_161_f32 const& $this ) -> const bool;
	#line 191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsSubnormal($extension_Float32_161_f32 const& $this ) -> const bool;
	#line 196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsZero($extension_Float32_161_f32 const& $this ) -> const bool;
	#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Float32_161_f32, INumberBase, INumberBase, $extension_Float32_161_f32);
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
#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	using $extension_Float32_296_f32 = Builtin::f32;
	#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE(ISignedNumber, ISignedNumber);
	#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct $static_getMinusOne; template<> struct $static_getMinusOne<$extension_Float32_296_f32> { static inline constexpr auto get() -> const $extension_Float32_296_f32; };
	#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Float32_296_f32, ISignedNumber, ISignedNumber, $extension_Float32_296_f32);
	} namespace System{
using $extensions::$static_getMinusOne;

		} namespace $extensions { using namespace System;
#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	using $extension_Float32_300_f32 = Builtin::f32;
	#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE(INumber, INumber);
	#line 308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto CopySign($extension_Float32_300_f32 const& $this LIFETIMEBOUND, $extension_Float32_300_f32 sign) noexcept -> const typename $extension_Float32_300_f32;
	#line 320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto Max($extension_Float32_300_f32 const& $this LIFETIMEBOUND, $extension_Float32_300_f32 rhs) noexcept -> const typename $extension_Float32_300_f32;
	#line 330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto MaxNumber($extension_Float32_300_f32 const& $this LIFETIMEBOUND, $extension_Float32_300_f32 rhs) noexcept -> const typename $extension_Float32_300_f32;
	#line 340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto Min($extension_Float32_300_f32 const& $this LIFETIMEBOUND, $extension_Float32_300_f32 rhs) noexcept -> const typename $extension_Float32_300_f32;
	#line 350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto MinNumber($extension_Float32_300_f32 const& $this LIFETIMEBOUND, $extension_Float32_300_f32 rhs) noexcept -> const typename $extension_Float32_300_f32;
	#line 360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto Clamp($extension_Float32_300_f32 const& $this LIFETIMEBOUND, $extension_Float32_300_f32 min, $extension_Float32_300_f32 max)  -> const typename $extension_Float32_300_f32;
	#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getSign($extension_Float32_300_f32 const& $this ) -> const Builtin::i32;
	#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Float32_300_f32, INumber, INumber, $extension_Float32_300_f32);
	} namespace System{
using $extensions::CopySign;
using $extensions::Max;
using $extensions::MaxNumber;
using $extensions::Min;
using $extensions::MinNumber;
using $extensions::Clamp;
using $extensions::getSign;

		} namespace $extensions { using namespace System;
#line 403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	using $extension_Float32_403_f32 = Builtin::f32;
	#line 403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE(IBinaryNumber, IBinaryNumber);
	#line 443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto Log($extension_Float32_403_f32 const& $this LIFETIMEBOUND, $extension_Float32_403_f32 base) noexcept -> const typename $extension_Float32_403_f32;
	#line 464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto Midpoint($extension_Float32_403_f32 const& $this LIFETIMEBOUND, $extension_Float32_403_f32 rhs) noexcept -> const typename $extension_Float32_403_f32;
	#line 480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto IsMultipleOf($extension_Float32_403_f32 const& $this LIFETIMEBOUND, $extension_Float32_403_f32 rhs) noexcept -> const bool;
	#line 405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct $static_getAllBitsSet; template<> struct $static_getAllBitsSet<$extension_Float32_403_f32> { static inline constexpr auto get() -> const $extension_Float32_403_f32; };
	#line 408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsPow2($extension_Float32_403_f32 const& $this ) -> const bool;
	#line 434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getLog2($extension_Float32_403_f32 const& $this ) -> const $extension_Float32_403_f32;
	#line 438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getLog10($extension_Float32_403_f32 const& $this ) -> const $extension_Float32_403_f32;
	#line 403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Float32_403_f32, IBinaryNumber, IBinaryNumber, $extension_Float32_403_f32);
	} namespace System{
using $extensions::Log;
using $extensions::Midpoint;
using $extensions::IsMultipleOf;
using $extensions::$static_getAllBitsSet;
using $extensions::getIsPow2;
using $extensions::getLog2;
using $extensions::getLog10;

		} namespace $extensions { using namespace System;
#line 494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	using $extension_Float32_494_f32 = Builtin::f32;
	#line 494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE(IFloatingPointConstants, IFloatingPointConstants);
	#line 496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct $static_getPi; template<> struct $static_getPi<$extension_Float32_494_f32> { static inline constexpr auto get() -> const $extension_Float32_494_f32; };
	#line 497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct $static_getE; template<> struct $static_getE<$extension_Float32_494_f32> { static inline constexpr auto get() -> const $extension_Float32_494_f32; };
	#line 498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct $static_getTau; template<> struct $static_getTau<$extension_Float32_494_f32> { static inline constexpr auto get() -> const $extension_Float32_494_f32; };
	#line 494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Float32_494_f32, IFloatingPointConstants, IFloatingPointConstants, $extension_Float32_494_f32);
	} namespace System{
using $extensions::$static_getPi;
using $extensions::$static_getE;
using $extensions::$static_getTau;

		} namespace $extensions { using namespace System;
#line 501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	using $extension_Float32_501_f32 = Builtin::f32;
	#line 501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE(IFloatingPoint, IFloatingPoint);
	#line 519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto CeilToInt32($extension_Float32_501_f32 const& $this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto CeilToInt64($extension_Float32_501_f32 const& $this LIFETIMEBOUND)  -> const Builtin::i64;
	#line 521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto CeilToInt128($extension_Float32_501_f32 const& $this LIFETIMEBOUND)  -> const Builtin::i128;
	#line 536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto FloorToInt32($extension_Float32_501_f32 const& $this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto FloorToInt64($extension_Float32_501_f32 const& $this LIFETIMEBOUND)  -> const Builtin::i64;
	#line 538 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto FloorToInt128($extension_Float32_501_f32 const& $this LIFETIMEBOUND)  -> const Builtin::i128;
	#line 552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto TruncateToInt32($extension_Float32_501_f32 const& $this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto TruncateToInt64($extension_Float32_501_f32 const& $this LIFETIMEBOUND)  -> const Builtin::i64;
	#line 554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto TruncateToInt128($extension_Float32_501_f32 const& $this LIFETIMEBOUND)  -> const Builtin::i128;
	#line 568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto RoundToInt32($extension_Float32_501_f32 const& $this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto RoundToInt64($extension_Float32_501_f32 const& $this LIFETIMEBOUND)  -> const Builtin::i64;
	#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto RoundToInt128($extension_Float32_501_f32 const& $this LIFETIMEBOUND)  -> const Builtin::i128;
	#line 618 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto RoundTiesEvenToInt32($extension_Float32_501_f32 const& $this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto RoundTiesEvenToInt64($extension_Float32_501_f32 const& $this LIFETIMEBOUND)  -> const Builtin::i64;
	#line 620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto RoundTiesEvenToInt128($extension_Float32_501_f32 const& $this LIFETIMEBOUND)  -> const Builtin::i128;
	#line 622 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto Round($extension_Float32_501_f32 const& $this LIFETIMEBOUND, Builtin::u32 digits)  -> const typename $extension_Float32_501_f32;
	#line 623 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto Round($extension_Float32_501_f32 const& $this LIFETIMEBOUND, MidpointRounding rounding)  -> const typename $extension_Float32_501_f32;
	#line 635 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto Round($extension_Float32_501_f32 const& $this LIFETIMEBOUND, Builtin::u32 digits, MidpointRounding rounding)  -> const typename $extension_Float32_501_f32;
	#line 504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getFractionalPart($extension_Float32_501_f32 const& $this ) -> const $extension_Float32_501_f32;
	#line 509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getCeil($extension_Float32_501_f32 const& $this ) -> const $extension_Float32_501_f32;
	#line 526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getFloor($extension_Float32_501_f32 const& $this ) -> const $extension_Float32_501_f32;
	#line 543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getTruncate($extension_Float32_501_f32 const& $this ) -> const $extension_Float32_501_f32;
	#line 559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getRound($extension_Float32_501_f32 const& $this ) -> const $extension_Float32_501_f32;
	#line 575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getRoundTiesEven($extension_Float32_501_f32 const& $this ) -> const $extension_Float32_501_f32;
	#line 666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getExponentByteCount($extension_Float32_501_f32 const& $this ) -> const Builtin::u32;
	#line 667 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getExponentShortestBitLength($extension_Float32_501_f32 const& $this ) -> const Builtin::u32;
	#line 676 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getSignificandBitLength($extension_Float32_501_f32 const& $this ) -> const Builtin::u32;
	#line 677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getSignificandByteCount($extension_Float32_501_f32 const& $this ) -> const Builtin::u32;
	#line 501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Float32_501_f32, IFloatingPoint, IFloatingPoint, $extension_Float32_501_f32);
	} namespace System{
using $extensions::CeilToInt32;
using $extensions::CeilToInt64;
using $extensions::CeilToInt128;
using $extensions::FloorToInt32;
using $extensions::FloorToInt64;
using $extensions::FloorToInt128;
using $extensions::TruncateToInt32;
using $extensions::TruncateToInt64;
using $extensions::TruncateToInt128;
using $extensions::RoundToInt32;
using $extensions::RoundToInt64;
using $extensions::RoundToInt128;
using $extensions::RoundTiesEvenToInt32;
using $extensions::RoundTiesEvenToInt64;
using $extensions::RoundTiesEvenToInt128;
using $extensions::Round;
using $extensions::Round;
using $extensions::Round;
using $extensions::getFractionalPart;
using $extensions::getCeil;
using $extensions::getFloor;
using $extensions::getTruncate;
using $extensions::getRound;
using $extensions::getRoundTiesEven;
using $extensions::getExponentByteCount;
using $extensions::getExponentShortestBitLength;
using $extensions::getSignificandBitLength;
using $extensions::getSignificandByteCount;

		} namespace $extensions { using namespace System;
#line 681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	using $extension_Float32_681_f32 = Builtin::f32;
	#line 681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE(IPowerArithmetic, IPowerArithmetic);
	#line 682 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto _operator_mul_mul($extension_Float32_681_f32 const& $this LIFETIMEBOUND, $extension_Float32_681_f32 exp) noexcept -> const typename $extension_Float32_681_f32;
	#line 683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto _operator_mul_mul_eq($extension_Float32_681_f32 & $this , $extension_Float32_681_f32 exp) noexcept -> typename $extension_Float32_681_f32&;
	#line 681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Float32_681_f32, IPowerArithmetic, IPowerArithmetic, $extension_Float32_681_f32);
	} namespace System{
using $extensions::_operator_mul_mul;
using $extensions::_operator_mul_mul_eq;

		} namespace $extensions { using namespace System;
#line 686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	using $extension_Float32_686_f32 = Builtin::f32;
	#line 686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE(IExponentialFunctions, IExponentialFunctions);
	#line 688 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getExp($extension_Float32_686_f32 const& $this ) -> const $extension_Float32_686_f32;
	#line 690 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getExp2($extension_Float32_686_f32 const& $this ) -> const $extension_Float32_686_f32;
	#line 692 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getExp10($extension_Float32_686_f32 const& $this ) -> const $extension_Float32_686_f32;
	#line 694 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getExpM1($extension_Float32_686_f32 const& $this ) -> const $extension_Float32_686_f32;
	#line 696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getExp2M1($extension_Float32_686_f32 const& $this ) -> const $extension_Float32_686_f32;
	#line 698 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getExp10M1($extension_Float32_686_f32 const& $this ) -> const $extension_Float32_686_f32;
	#line 686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Float32_686_f32, IExponentialFunctions, IExponentialFunctions, $extension_Float32_686_f32);
	} namespace System{
using $extensions::getExp;
using $extensions::getExp2;
using $extensions::getExp10;
using $extensions::getExpM1;
using $extensions::getExp2M1;
using $extensions::getExp10M1;

		} namespace $extensions { using namespace System;
#line 701 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	using $extension_Float32_701_f32 = Builtin::f32;
	#line 701 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE(ILogarithmicFunctions, ILogarithmicFunctions);
	#line 703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getLn($extension_Float32_701_f32 const& $this ) -> const $extension_Float32_701_f32;
	#line 705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getLnP1($extension_Float32_701_f32 const& $this ) -> const $extension_Float32_701_f32;
	#line 707 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getLog2P1($extension_Float32_701_f32 const& $this ) -> const $extension_Float32_701_f32;
	#line 709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getLog10P1($extension_Float32_701_f32 const& $this ) -> const $extension_Float32_701_f32;
	#line 701 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Float32_701_f32, ILogarithmicFunctions, ILogarithmicFunctions, $extension_Float32_701_f32);
	} namespace System{
using $extensions::getLn;
using $extensions::getLnP1;
using $extensions::getLog2P1;
using $extensions::getLog10P1;

		} namespace $extensions { using namespace System;
#line 712 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	using $extension_Float32_712_f32 = Builtin::f32;
	#line 712 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE(IRootFunctions, IRootFunctions);
	#line 718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ASTRUMSTD_API auto Root($extension_Float32_712_f32 const& $this LIFETIMEBOUND, Builtin::i32 n)  -> const typename $extension_Float32_712_f32;
	#line 791 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ASTRUMSTD_API auto Hypot($extension_Float32_712_f32 const& $this LIFETIMEBOUND, $extension_Float32_712_f32 y)  -> const typename $extension_Float32_712_f32;
	#line 714 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getSqrt($extension_Float32_712_f32 const& $this ) -> const $extension_Float32_712_f32;
	#line 716 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getCbrt($extension_Float32_712_f32 const& $this ) -> const $extension_Float32_712_f32;
	#line 712 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Float32_712_f32, IRootFunctions, IRootFunctions, $extension_Float32_712_f32);
	} namespace System{
using $extensions::Root;
using $extensions::Hypot;
using $extensions::getSqrt;
using $extensions::getCbrt;

		} namespace $extensions { using namespace System;
#line 820 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	using $extension_Float32_820_f32 = Builtin::f32;
	#line 820 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE(ITrigonometricFunctions, ITrigonometricFunctions);
	#line 1061 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToRadians($extension_Float32_820_f32 const& $this LIFETIMEBOUND) noexcept -> const typename $extension_Float32_820_f32;
	#line 1063 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToDegrees($extension_Float32_820_f32 const& $this LIFETIMEBOUND) noexcept -> const typename $extension_Float32_820_f32;
	#line 822 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getSin($extension_Float32_820_f32 const& $this ) -> const $extension_Float32_820_f32;
	#line 824 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getCos($extension_Float32_820_f32 const& $this ) -> const $extension_Float32_820_f32;
	#line 826 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getTan($extension_Float32_820_f32 const& $this ) -> const $extension_Float32_820_f32;
	#line 828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getCot($extension_Float32_820_f32 const& $this ) -> const $extension_Float32_820_f32;
	#line 830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getSec($extension_Float32_820_f32 const& $this ) -> const $extension_Float32_820_f32;
	#line 832 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getCsc($extension_Float32_820_f32 const& $this ) -> const $extension_Float32_820_f32;
	#line 834 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAsin($extension_Float32_820_f32 const& $this ) -> const $extension_Float32_820_f32;
	#line 836 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAcos($extension_Float32_820_f32 const& $this ) -> const $extension_Float32_820_f32;
	#line 838 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAtan($extension_Float32_820_f32 const& $this ) -> const $extension_Float32_820_f32;
	#line 840 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAcot($extension_Float32_820_f32 const& $this ) -> const $extension_Float32_820_f32;
	#line 842 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAsec($extension_Float32_820_f32 const& $this ) -> const $extension_Float32_820_f32;
	#line 844 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAcsc($extension_Float32_820_f32 const& $this ) -> const $extension_Float32_820_f32;
	#line 846 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getSinCos($extension_Float32_820_f32 const& $this ) -> const Builtin::Tuple<$extension_Float32_820_f32, $extension_Float32_820_f32>;
	#line 848 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ASTRUMSTD_API auto getSinPi($extension_Float32_820_f32 const& $this ) -> const $extension_Float32_820_f32;
	#line 886 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ASTRUMSTD_API auto getCosPi($extension_Float32_820_f32 const& $this ) -> const $extension_Float32_820_f32;
	#line 926 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ASTRUMSTD_API auto getSinCosPi($extension_Float32_820_f32 const& $this ) -> const Builtin::Tuple<$extension_Float32_820_f32, $extension_Float32_820_f32>;
	#line 999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ASTRUMSTD_API auto getTanPi($extension_Float32_820_f32 const& $this ) -> const $extension_Float32_820_f32;
	#line 1042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getCotPi($extension_Float32_820_f32 const& $this ) -> const $extension_Float32_820_f32;
	#line 1044 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getSecPi($extension_Float32_820_f32 const& $this ) -> const $extension_Float32_820_f32;
	#line 1046 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getCscPi($extension_Float32_820_f32 const& $this ) -> const $extension_Float32_820_f32;
	#line 1048 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAsinPi($extension_Float32_820_f32 const& $this ) -> const $extension_Float32_820_f32;
	#line 1050 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAcosPi($extension_Float32_820_f32 const& $this ) -> const $extension_Float32_820_f32;
	#line 1052 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAtanPi($extension_Float32_820_f32 const& $this ) -> const $extension_Float32_820_f32;
	#line 1054 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAcotPi($extension_Float32_820_f32 const& $this ) -> const $extension_Float32_820_f32;
	#line 1056 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAsecPi($extension_Float32_820_f32 const& $this ) -> const $extension_Float32_820_f32;
	#line 1058 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAcscPi($extension_Float32_820_f32 const& $this ) -> const $extension_Float32_820_f32;
	#line 820 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Float32_820_f32, ITrigonometricFunctions, ITrigonometricFunctions, $extension_Float32_820_f32);
	} namespace System{
using $extensions::ToRadians;
using $extensions::ToDegrees;
using $extensions::getSin;
using $extensions::getCos;
using $extensions::getTan;
using $extensions::getCot;
using $extensions::getSec;
using $extensions::getCsc;
using $extensions::getAsin;
using $extensions::getAcos;
using $extensions::getAtan;
using $extensions::getAcot;
using $extensions::getAsec;
using $extensions::getAcsc;
using $extensions::getSinCos;
using $extensions::getSinPi;
using $extensions::getCosPi;
using $extensions::getSinCosPi;
using $extensions::getTanPi;
using $extensions::getCotPi;
using $extensions::getSecPi;
using $extensions::getCscPi;
using $extensions::getAsinPi;
using $extensions::getAcosPi;
using $extensions::getAtanPi;
using $extensions::getAcotPi;
using $extensions::getAsecPi;
using $extensions::getAcscPi;

		} namespace $extensions { using namespace System;
#line 1066 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	using $extension_Float32_1066_f32 = Builtin::f32;
	#line 1066 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE(IHyperbolicFunctions, IHyperbolicFunctions);
	#line 1068 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAcosh($extension_Float32_1066_f32 const& $this ) -> const $extension_Float32_1066_f32;
	#line 1070 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAcoth($extension_Float32_1066_f32 const& $this ) -> const $extension_Float32_1066_f32;
	#line 1072 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAcsch($extension_Float32_1066_f32 const& $this ) -> const $extension_Float32_1066_f32;
	#line 1074 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAsech($extension_Float32_1066_f32 const& $this ) -> const $extension_Float32_1066_f32;
	#line 1076 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAsinh($extension_Float32_1066_f32 const& $this ) -> const $extension_Float32_1066_f32;
	#line 1078 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAtanh($extension_Float32_1066_f32 const& $this ) -> const $extension_Float32_1066_f32;
	#line 1080 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getCosh($extension_Float32_1066_f32 const& $this ) -> const $extension_Float32_1066_f32;
	#line 1082 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getCoth($extension_Float32_1066_f32 const& $this ) -> const $extension_Float32_1066_f32;
	#line 1084 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getCsch($extension_Float32_1066_f32 const& $this ) -> const $extension_Float32_1066_f32;
	#line 1086 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getSech($extension_Float32_1066_f32 const& $this ) -> const $extension_Float32_1066_f32;
	#line 1088 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getSinh($extension_Float32_1066_f32 const& $this ) -> const $extension_Float32_1066_f32;
	#line 1090 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getTanh($extension_Float32_1066_f32 const& $this ) -> const $extension_Float32_1066_f32;
	#line 1066 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Float32_1066_f32, IHyperbolicFunctions, IHyperbolicFunctions, $extension_Float32_1066_f32);
	} namespace System{
using $extensions::getAcosh;
using $extensions::getAcoth;
using $extensions::getAcsch;
using $extensions::getAsech;
using $extensions::getAsinh;
using $extensions::getAtanh;
using $extensions::getCosh;
using $extensions::getCoth;
using $extensions::getCsch;
using $extensions::getSech;
using $extensions::getSinh;
using $extensions::getTanh;

		} namespace $extensions { using namespace System;
#line 1093 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	using $extension_Float32_1093_f32 = Builtin::f32;
	#line 1093 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE(IBinaryFloatingPointIeee754, IBinaryFloatingPointIeee754);
	#line 1101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto Atan2($extension_Float32_1093_f32 const& $this LIFETIMEBOUND, $extension_Float32_1093_f32 y)  -> const typename $extension_Float32_1093_f32;
	#line 1102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto Atan2Pi($extension_Float32_1093_f32 const& $this LIFETIMEBOUND, $extension_Float32_1093_f32 y)  -> const typename $extension_Float32_1093_f32;
	#line 1191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto FusedMultiplyAdd($extension_Float32_1093_f32 const& $this LIFETIMEBOUND, $extension_Float32_1093_f32 rhs, $extension_Float32_1093_f32 addend)  -> const typename $extension_Float32_1093_f32;
	#line 1193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto Ieee754Remainder($extension_Float32_1093_f32 const& $this LIFETIMEBOUND, $extension_Float32_1093_f32 rhs)  -> const typename $extension_Float32_1093_f32;
	#line 1196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto Lerp($extension_Float32_1093_f32 const& $this LIFETIMEBOUND, $extension_Float32_1093_f32 end, $extension_Float32_1093_f32 amount) noexcept -> const typename $extension_Float32_1093_f32;
	#line 1198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto ScaleB($extension_Float32_1093_f32 const& $this LIFETIMEBOUND, Builtin::i32 n)  -> const typename $extension_Float32_1093_f32;
	#line 1094 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct $static_getEpsilon; template<> struct $static_getEpsilon<$extension_Float32_1093_f32> { static inline constexpr auto get() -> const $extension_Float32_1093_f32; };
	#line 1095 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct $static_getNegativeInfinity; template<> struct $static_getNegativeInfinity<$extension_Float32_1093_f32> { static inline constexpr auto get() -> const $extension_Float32_1093_f32; };
	#line 1096 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct $static_getPositiveInfinity; template<> struct $static_getPositiveInfinity<$extension_Float32_1093_f32> { static inline constexpr auto get() -> const $extension_Float32_1093_f32; };
	#line 1097 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct $static_getNaN; template<> struct $static_getNaN<$extension_Float32_1093_f32> { static inline constexpr auto get() -> const $extension_Float32_1093_f32; };
	#line 1098 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct $static_getNegativeZero; template<> struct $static_getNegativeZero<$extension_Float32_1093_f32> { static inline constexpr auto get() -> const $extension_Float32_1093_f32; };
	#line 1110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getBitIncrement($extension_Float32_1093_f32 const& $this ) -> const $extension_Float32_1093_f32;
	#line 1134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getBitDecrement($extension_Float32_1093_f32 const& $this ) -> const $extension_Float32_1093_f32;
	#line 1153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getILogB($extension_Float32_1093_f32 const& $this ) -> const Builtin::i32;
	#line 1155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getReciprocalEstimate($extension_Float32_1093_f32 const& $this ) -> const $extension_Float32_1093_f32;
	#line 1164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getReciprocalSqrtEstimate($extension_Float32_1093_f32 const& $this ) -> const $extension_Float32_1093_f32;
	#line 1175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getCategory($extension_Float32_1093_f32 const& $this ) -> const FloatingPointCategory;
	#line 1201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getGamma($extension_Float32_1093_f32 const& $this ) -> const $extension_Float32_1093_f32;
	#line 1203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getLnGamma($extension_Float32_1093_f32 const& $this ) -> const $extension_Float32_1093_f32;
	#line 1205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getErf($extension_Float32_1093_f32 const& $this ) -> const $extension_Float32_1093_f32;
	#line 1207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getErfc($extension_Float32_1093_f32 const& $this ) -> const $extension_Float32_1093_f32;
	#line 1093 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Float32_1093_f32, IBinaryFloatingPointIeee754, IBinaryFloatingPointIeee754, $extension_Float32_1093_f32);
	} namespace System{
using $extensions::Atan2;
using $extensions::Atan2Pi;
using $extensions::FusedMultiplyAdd;
using $extensions::Ieee754Remainder;
using $extensions::Lerp;
using $extensions::ScaleB;
using $extensions::$static_getEpsilon;
using $extensions::$static_getNegativeInfinity;
using $extensions::$static_getPositiveInfinity;
using $extensions::$static_getNaN;
using $extensions::$static_getNegativeZero;
using $extensions::getBitIncrement;
using $extensions::getBitDecrement;
using $extensions::getILogB;
using $extensions::getReciprocalEstimate;
using $extensions::getReciprocalSqrtEstimate;
using $extensions::getCategory;
using $extensions::getGamma;
using $extensions::getLnGamma;
using $extensions::getErf;
using $extensions::getErfc;

		} namespace $extensions { using namespace System;
#line 1210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	using $extension_Float32_1210_f32 = Builtin::f32;
	#line 1210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE(IBinaryFloatFormatInfo, IBinaryFloatFormatInfo);
	#line 1211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct $static_getNumberBufferLength; template<> struct $static_getNumberBufferLength<$extension_Float32_1210_f32> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct $static_getZeroBits; template<> struct $static_getZeroBits<$extension_Float32_1210_f32> { static inline constexpr auto get() -> const Builtin::u128; };
	#line 1213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct $static_getInfinityBits; template<> struct $static_getInfinityBits<$extension_Float32_1210_f32> { static inline constexpr auto get() -> const Builtin::u128; };
	#line 1214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct $static_getNormalMantissaMask; template<> struct $static_getNormalMantissaMask<$extension_Float32_1210_f32> { static inline constexpr auto get() -> const Builtin::u128; };
	#line 1215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct $static_getDenormalMantissaMask; template<> struct $static_getDenormalMantissaMask<$extension_Float32_1210_f32> { static inline constexpr auto get() -> const Builtin::u128; };
	#line 1216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct $static_getMinBinaryExponent; template<> struct $static_getMinBinaryExponent<$extension_Float32_1210_f32> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct $static_getMaxBinaryExponent; template<> struct $static_getMaxBinaryExponent<$extension_Float32_1210_f32> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct $static_getMinDecimalExponent; template<> struct $static_getMinDecimalExponent<$extension_Float32_1210_f32> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct $static_getMaxDecimalExponent; template<> struct $static_getMaxDecimalExponent<$extension_Float32_1210_f32> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct $static_getExponentBias; template<> struct $static_getExponentBias<$extension_Float32_1210_f32> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct $static_getExponentBits; template<> struct $static_getExponentBits<$extension_Float32_1210_f32> { static inline constexpr auto get() -> const Builtin::u128; };
	#line 1222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct $static_getOverflowDecimalExponent; template<> struct $static_getOverflowDecimalExponent<$extension_Float32_1210_f32> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct $static_getInfinityExponent; template<> struct $static_getInfinityExponent<$extension_Float32_1210_f32> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct $static_getNormalMantissaBits; template<> struct $static_getNormalMantissaBits<$extension_Float32_1210_f32> { static inline constexpr auto get() -> const Builtin::u16; };
	#line 1225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct $static_getDenormalMantissaBits; template<> struct $static_getDenormalMantissaBits<$extension_Float32_1210_f32> { static inline constexpr auto get() -> const Builtin::u16; };
	#line 1226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct $static_getMinFastFloatDecimalExponent; template<> struct $static_getMinFastFloatDecimalExponent<$extension_Float32_1210_f32> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct $static_getMaxFastFloatDecimalExponent; template<> struct $static_getMaxFastFloatDecimalExponent<$extension_Float32_1210_f32> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct $static_getMinExponentRoundToEven; template<> struct $static_getMinExponentRoundToEven<$extension_Float32_1210_f32> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct $static_getMaxExponentRoundToEven; template<> struct $static_getMaxExponentRoundToEven<$extension_Float32_1210_f32> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct $static_getMaxExponentFastPath; template<> struct $static_getMaxExponentFastPath<$extension_Float32_1210_f32> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct $static_getMaxMantissaFastPath; template<> struct $static_getMaxMantissaFastPath<$extension_Float32_1210_f32> { static inline constexpr auto get() -> const Builtin::u128; };
	#line 1210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Float32_1210_f32, IBinaryFloatFormatInfo, IBinaryFloatFormatInfo, $extension_Float32_1210_f32);
	} namespace System{
using $extensions::$static_getNumberBufferLength;
using $extensions::$static_getZeroBits;
using $extensions::$static_getInfinityBits;
using $extensions::$static_getNormalMantissaMask;
using $extensions::$static_getDenormalMantissaMask;
using $extensions::$static_getMinBinaryExponent;
using $extensions::$static_getMaxBinaryExponent;
using $extensions::$static_getMinDecimalExponent;
using $extensions::$static_getMaxDecimalExponent;
using $extensions::$static_getExponentBias;
using $extensions::$static_getExponentBits;
using $extensions::$static_getOverflowDecimalExponent;
using $extensions::$static_getInfinityExponent;
using $extensions::$static_getNormalMantissaBits;
using $extensions::$static_getDenormalMantissaBits;
using $extensions::$static_getMinFastFloatDecimalExponent;
using $extensions::$static_getMaxFastFloatDecimalExponent;
using $extensions::$static_getMinExponentRoundToEven;
using $extensions::$static_getMaxExponentRoundToEven;
using $extensions::$static_getMaxExponentFastPath;
using $extensions::$static_getMaxMantissaFastPath;

	//###############################################################################
//# Free function declarations
//###############################################################################
#line 394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	namespace __Float32$Protected { inline constexpr auto BiasedExponent(Builtin::f32 value) noexcept -> const Builtin::u8; }
#line 395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	namespace __Float32$Protected { inline constexpr auto Exponent(Builtin::f32 value) noexcept -> const Builtin::i8; }
#line 396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	namespace __Float32$Protected { inline constexpr auto Significand(Builtin::f32 value) noexcept -> const Builtin::u32; }
#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	namespace __Float32$Protected { inline constexpr auto TrailingSignificand(Builtin::f32 value) noexcept -> const Builtin::u32; }
#line 399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	namespace __Float32$Protected { inline constexpr auto ExtractBiasedExponentFromBits(Builtin::u32 bits) noexcept -> const Builtin::u8; }
#line 400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	namespace __Float32$Protected { inline constexpr auto ExtractTrailingSignificandFromBits(Builtin::u32 bits) noexcept -> const Builtin::u32; }
//###############################################################################
//# Global compile-time constants
//###############################################################################
#line 371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
namespace __Float32$Protected { inline constexpr auto SignMask = Builtin::u32(0x80000000U); }
#line 372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
namespace __Float32$Protected { inline constexpr auto SignShift = Builtin::i32(31); }
#line 373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
namespace __Float32$Protected { inline constexpr Builtin::u8 ShiftedSignMask = Builtin::u8{__Float32$Protected::SignMask >> __Float32$Protected::SignShift}; }
#line 375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
namespace __Float32$Protected { inline constexpr auto BiasedExponentMask = Builtin::u32(0x7F800000U); }
#line 376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
namespace __Float32$Protected { inline constexpr auto BiasedExponentShift = Builtin::i32(23); }
#line 377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
namespace __Float32$Protected { inline constexpr Builtin::u8 ShiftedBiasedExponentMask = Builtin::u8{__Float32$Protected::BiasedExponentMask >> __Float32$Protected::BiasedExponentShift}; }
#line 379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
namespace __Float32$Protected { inline constexpr auto TrailingSignificandMask = Builtin::u32(0x007FFFFFU); }
#line 381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
namespace __Float32$Protected { inline constexpr auto MinSign = Builtin::u8(0U); }
#line 382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
namespace __Float32$Protected { inline constexpr auto MaxSign = Builtin::u8(1U); }
#line 383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
namespace __Float32$Protected { inline constexpr auto MinBiasedExponent = ADV_USPCS(MinValue, Builtin::u8)(); }
#line 384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
namespace __Float32$Protected { inline constexpr auto MaxBiasedExponent = ADV_USPCS(MaxValue, Builtin::u8)(); }
#line 385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
namespace __Float32$Protected { inline constexpr auto ExpBias = Builtin::u8(127U); }
#line 386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
namespace __Float32$Protected { inline constexpr auto MinExponent = Builtin::i8(-126); }
#line 387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
namespace __Float32$Protected { inline constexpr auto MaxExponent = Builtin::i8(127); }
#line 388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
namespace __Float32$Protected { inline constexpr auto MinTrailingSignificand = ADV_USPCS(MinValue, Builtin::u32)(); }
#line 389 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
namespace __Float32$Protected { inline constexpr auto MaxTrailingSignificand = Builtin::u32(0x007FFFFFU); }
#line 391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
namespace __Float32$Protected { inline constexpr auto TrailingSignificandLength = Builtin::i32(23); }
#line 392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
namespace __Float32$Protected { inline constexpr auto SignificandLength = __Float32$Protected::TrailingSignificandLength + Builtin::i32(1); }
} namespace $extensions {
template<class __TT> struct $static_acoshf;
template<class __TT> struct $static_getacoshf;
template<class __TT> struct $static_FromBits;
template<class __TT> struct $static_getFromBits;
template<class __TT> struct $static_Bits;
template<class __TT> struct $static_getBits;
template<class __TT> struct $static_logf;
template<class __TT> struct $static_getlogf;
template<class __TT> struct $static_IsInteger;
template<class __TT> struct $static_getIsInteger;
template<class __TT> struct $static_atanf;
template<class __TT> struct $static_getatanf;
template<class __TT> struct $static_Abs;
template<class __TT> struct $static_getAbs;
template<class __TT> struct $static_IsFinite;
template<class __TT> struct $static_getIsFinite;
template<class __TT> struct $static_CosPi;
template<class __TT> struct $static_getCosPi;
template<class __TT> struct $static_Truncate;
template<class __TT> struct $static_getTruncate;
template<class __TT> struct $static_tanf;
template<class __TT> struct $static_gettanf;
template<class __TT> struct $static_NegativeInfinity;
template<class __TT> struct $static_getNegativeInfinity;
template<class __TT> struct $static_PositiveInfinity;
template<class __TT> struct $static_getPositiveInfinity;
template<class __TT> struct $static_atan2f;
template<class __TT> struct $static_getatan2f;
template<class __TT> struct $static_NanValue;
template<class __TT> struct $static_getNanValue;
template<class __TT> struct $static_TanPi;
template<class __TT> struct $static_getTanPi;
template<class __TT> struct $static_Zero;
template<class __TT> struct $static_getZero;
template<class __TT> struct $static_Asinh;
template<class __TT> struct $static_getAsinh;
template<class __TT> struct $static_IsNegativeInfinity;
template<class __TT> struct $static_getIsNegativeInfinity;
template<class __TT> struct $static_SinPi;
template<class __TT> struct $static_getSinPi;
template<class __TT> struct $static_expf;
template<class __TT> struct $static_getexpf;
template<class __TT> struct $static_ExpM1;
template<class __TT> struct $static_getExpM1;
template<class __TT> struct $static_ceilf;
template<class __TT> struct $static_getceilf;
template<class __TT> struct $static_IsPositiveInfinity;
template<class __TT> struct $static_getIsPositiveInfinity;
template<class __TT> struct $static_InvalidOperationException;
template<class __TT> struct $static_getInvalidOperationException;
template<class __TT> struct $static_MinValue;
template<class __TT> struct $static_getMinValue;
template<class __TT> struct $static_Acot;
template<class __TT> struct $static_getAcot;
template<class __TT> struct $static_Asin;
template<class __TT> struct $static_getAsin;
template<class __TT> struct $static_MaxValue;
template<class __TT> struct $static_getMaxValue;
template<class __TT> struct $static_sinf;
template<class __TT> struct $static_getsinf;
template<class __TT> struct $static_NarrowToInt32;
template<class __TT> struct $static_getNarrowToInt32;
template<class __TT> struct $static_Exp10;
template<class __TT> struct $static_getExp10;
template<class __TT> struct $static_Atan;
template<class __TT> struct $static_getAtan;
template<class __TT> struct $static_PopCount;
template<class __TT> struct $static_getPopCount;
template<class __TT> struct $static_Sin;
template<class __TT> struct $static_getSin;
template<class __TT> struct $static_log2f;
template<class __TT> struct $static_getlog2f;
template<class __TT> struct $static_Subnormal;
template<class __TT> struct $static_getSubnormal;
template<class __TT> struct $static_tanhf;
template<class __TT> struct $static_gettanhf;
template<class __TT> struct $static_log1pf;
template<class __TT> struct $static_getlog1pf;
template<class __TT> struct $static_log10f;
template<class __TT> struct $static_getlog10f;
template<class __TT> struct $static_floorf;
template<class __TT> struct $static_getfloorf;
template<class __TT> struct $static_truncf;
template<class __TT> struct $static_gettruncf;
template<class __TT> struct $static_CopySign;
template<class __TT> struct $static_getCopySign;
template<class __TT> struct $static_roundf;
template<class __TT> struct $static_getroundf;
template<class __TT> struct $static_BitWidth;
template<class __TT> struct $static_getBitWidth;
template<class __TT> struct $static_ilogbf;
template<class __TT> struct $static_getilogbf;
template<class __TT> struct $static_Sech;
template<class __TT> struct $static_getSech;
template<class __TT> struct $static_LeadingZeroCount;
template<class __TT> struct $static_getLeadingZeroCount;
template<class __TT> struct $static_coshf;
template<class __TT> struct $static_getcoshf;
template<class __TT> struct $static_cosf;
template<class __TT> struct $static_getcosf;
template<class __TT> struct $static_Tan;
template<class __TT> struct $static_getTan;
template<class __TT> struct $static_exp2f;
template<class __TT> struct $static_getexp2f;
template<class __TT> struct $static_expm1f;
template<class __TT> struct $static_getexpm1f;
template<class __TT> struct $static_Acsc;
template<class __TT> struct $static_getAcsc;
template<class __TT> struct $static_sqrtf;
template<class __TT> struct $static_getsqrtf;
template<class __TT> struct $static_cbrtf;
template<class __TT> struct $static_getcbrtf;
template<class __TT> struct $static_Cosh;
template<class __TT> struct $static_getCosh;
template<class __TT> struct $static_Cos;
template<class __TT> struct $static_getCos;
template<class __TT> struct $static_asinf;
template<class __TT> struct $static_getasinf;
template<class __TT> struct $static_sinhf;
template<class __TT> struct $static_getsinhf;
template<class __TT> struct $static_acosf;
template<class __TT> struct $static_getacosf;
template<class __TT> struct $static_IsOddInteger;
template<class __TT> struct $static_getIsOddInteger;
template<class __TT> struct $static_IsSubnormal;
template<class __TT> struct $static_getIsSubnormal;
template<class __TT> struct $static_Pi;
template<class __TT> struct $static_getPi;
template<class __TT> struct $static_NaN;
template<class __TT> struct $static_getNaN;
template<class __TT> struct $static_Sinh;
template<class __TT> struct $static_getSinh;
template<class __TT> struct $static_Acos;
template<class __TT> struct $static_getAcos;
template<class __TT> struct $static_Asec;
template<class __TT> struct $static_getAsec;
template<class __TT> struct $static_atanhf;
template<class __TT> struct $static_getatanhf;
template<class __TT> struct $static_LnP1;
template<class __TT> struct $static_getLnP1;
template<class __TT> struct $static_asinhf;
template<class __TT> struct $static_getasinhf;
template<class __TT> struct $static_Tanh;
template<class __TT> struct $static_getTanh;
template<class __TT> struct $static_Epsilon;
template<class __TT> struct $static_getEpsilon;
template<class __TT> struct $static_Sqrt;
template<class __TT> struct $static_getSqrt;
template<class __TT> struct $static_IsNaN;
template<class __TT> struct $static_getIsNaN;
template<class __TT> struct $static_IsInfinity;
template<class __TT> struct $static_getIsInfinity;
template<class __TT> struct $static_Infinity;
template<class __TT> struct $static_getInfinity;
template<class __TT> struct $static_IsZero;
template<class __TT> struct $static_getIsZero;
template<class __TT> struct $static_Normal;
template<class __TT> struct $static_getNormal;
template<class __TT> struct $static_Gamma;
template<class __TT> struct $static_getGamma;
template<class __TT> struct $static_tgammaf;
template<class __TT> struct $static_gettgammaf;
template<class __TT> struct $static_lgammaf;
template<class __TT> struct $static_getlgammaf;
template<class __TT> struct $static_ToUsize;
template<class __TT> struct $static_getToUsize;
template<class __TT> struct $static_erff;
template<class __TT> struct $static_geterff;
template<class __TT> struct $static_erfcf;
template<class __TT> struct $static_geterfcf;
template<class __TT> struct $static_Round;
template<class __TT> struct $static_getRound;
template<class __TT> struct $static_Floor;
template<class __TT> struct $static_getFloor;
template<class __TT> struct $static_Ceil;
template<class __TT> struct $static_getCeil;
template<class __TT> struct $static_IsNegative;
template<class __TT> struct $static_getIsNegative;
template<class __TT> struct $static_MaxMagnitude;
template<class __TT> struct $static_getMaxMagnitude;
template<class __TT> struct $static_copysignf;
template<class __TT> struct $static_getcopysignf;
template<class __TT> struct $static_Exp10M1;
template<class __TT> struct $static_getExp10M1;
template<class __TT> struct $static_Ln;
template<class __TT> struct $static_getLn;
template<class __TT> struct $static_Is64BitTarget;
template<class __TT> struct $static_getIs64BitTarget;
template<class __TT> struct $static_RoundTiesEven;
template<class __TT> struct $static_getRoundTiesEven;
template<class __TT> struct $static_Log2;
template<class __TT> struct $static_getLog2;
template<class __TT> struct $static_AwayFromZero;
template<class __TT> struct $static_getAwayFromZero;
template<class __TT> struct $static_ToEven;
template<class __TT> struct $static_getToEven;
template<class __TT> struct $static_InvalidArgumentException;
template<class __TT> struct $static_getInvalidArgumentException;
template<class __TT> struct $static_powf;
template<class __TT> struct $static_getpowf;
template<class __TT> struct $static_pow;
template<class __TT> struct $static_getpow;
template<class __TT> struct $static_IsEvenInteger;
template<class __TT> struct $static_getIsEvenInteger;
template<class __TT> struct $static_Cbrt;
template<class __TT> struct $static_getCbrt;
template<class __TT> struct $static_sqrt;
template<class __TT> struct $static_getsqrt;
template<class __TT> struct $static_Atan2;
template<class __TT> struct $static_getAtan2;
template<class __TT> struct $static_fmaf;
template<class __TT> struct $static_getfmaf;
template<class __TT> struct $static_remainderf;
template<class __TT> struct $static_getremainderf;
template<class __TT> struct $static_Csch;
template<class __TT> struct $static_getCsch;
template<class __TT> struct $static_scalbnf;
template<class __TT> struct $static_getscalbnf;
template<class __TT> struct $static_HashCode;
template<class __TT> struct $static_getHashCode;
template<class __TT> struct $static_ToBoolean;
template<class __TT> struct $static_getToBoolean;
template<class __TT> struct $static_ToInt16;
template<class __TT> struct $static_getToInt16;
template<class __TT> struct $static_ToInt32;
template<class __TT> struct $static_getToInt32;
template<class __TT> struct $static_ToInt64;
template<class __TT> struct $static_getToInt64;
template<class __TT> struct $static_ToInt128;
template<class __TT> struct $static_getToInt128;
template<class __TT> struct $static_Atanh;
template<class __TT> struct $static_getAtanh;
template<class __TT> struct $static_IsCanonical;
template<class __TT> struct $static_getIsCanonical;
template<class __TT> struct $static_IsComplexNumber;
template<class __TT> struct $static_getIsComplexNumber;
template<class __TT> struct $static_IsImaginaryNumber;
template<class __TT> struct $static_getIsImaginaryNumber;
template<class __TT> struct $static_IsRealNumber;
template<class __TT> struct $static_getIsRealNumber;
template<class __TT> struct $static_IsPositive;
template<class __TT> struct $static_getIsPositive;
template<class __TT> struct $static_MinMagnitude;
template<class __TT> struct $static_getMinMagnitude;
template<class __TT> struct $static_NarrowToInt8;
template<class __TT> struct $static_getNarrowToInt8;
template<class __TT> struct $static_Sign;
template<class __TT> struct $static_getSign;
template<class __TT> struct $static_Max;
template<class __TT> struct $static_getMax;
template<class __TT> struct $static_Min;
template<class __TT> struct $static_getMin;
template<class __TT> struct $static_Clamp;
template<class __TT> struct $static_getClamp;
template<class __TT> struct $static_IsPow2;
template<class __TT> struct $static_getIsPow2;
template<class __TT> struct $static_Log10;
template<class __TT> struct $static_getLog10;
template<class __TT> struct $static_Midpoint;
template<class __TT> struct $static_getMidpoint;
template<class __TT> struct $static_IsMultipleOf;
template<class __TT> struct $static_getIsMultipleOf;
template<class __TT> struct $static_RoundToInt32;
template<class __TT> struct $static_getRoundToInt32;
template<class __TT> struct $static_RoundTiesEvenToInt32;
template<class __TT> struct $static_getRoundTiesEvenToInt32;
template<class __TT> struct $static_Exp;
template<class __TT> struct $static_getExp;
template<class __TT> struct $static_Exp2;
template<class __TT> struct $static_getExp2;
template<class __TT> struct $static_Exp2M1;
template<class __TT> struct $static_getExp2M1;
template<class __TT> struct $static_Log;
template<class __TT> struct $static_getLog;
template<class __TT> struct $static_Root;
template<class __TT> struct $static_getRoot;
template<class __TT> struct $static_Hypot;
template<class __TT> struct $static_getHypot;
template<class __TT> struct $static_Cot;
template<class __TT> struct $static_getCot;
template<class __TT> struct $static_Sec;
template<class __TT> struct $static_getSec;
template<class __TT> struct $static_Csc;
template<class __TT> struct $static_getCsc;
template<class __TT> struct $static_ToRadians;
template<class __TT> struct $static_getToRadians;
template<class __TT> struct $static_ToDegrees;
template<class __TT> struct $static_getToDegrees;
template<class __TT> struct $static_Coth;
template<class __TT> struct $static_getCoth;
template<class __TT> struct $static_Acosh;
template<class __TT> struct $static_getAcosh;
template<class __TT> struct $static_ReciprocalEstimate;
template<class __TT> struct $static_getReciprocalEstimate;
template<class __TT> struct $static_FusedMultiplyAdd;
template<class __TT> struct $static_getFusedMultiplyAdd;
template<class __TT> struct $static_Lerp;
template<class __TT> struct $static_getLerp;
template<class __TT> struct $static_LnGamma;
template<class __TT> struct $static_getLnGamma;
template<class __TT> struct $static_Erf;
template<class __TT> struct $static_getErf;
template<class __TT> struct $static_Erfc;
template<class __TT> struct $static_getErfc;
} namespace System {
//###############################################################################
//# Function definitions
//###############################################################################

namespace __Float32$Protected {
		#line 394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		inline constexpr auto BiasedExponent(Builtin::f32 value) noexcept -> const Builtin::u8
		{
			#line 394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			ADV_EXPRESSION_BODY(__Float32$Protected::ExtractBiasedExponentFromBits(ADV_UPCS(Bits)(value.$ref()))); 
		}
	}
namespace __Float32$Protected {
		#line 395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		inline constexpr auto Exponent(Builtin::f32 value) noexcept -> const Builtin::i8
		{
			#line 395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			ADV_EXPRESSION_BODY(Builtin::i8{__Float32$Protected::BiasedExponent(value) - __Float32$Protected::ExpBias}); 
		}
	}
namespace __Float32$Protected {
		#line 396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		inline constexpr auto Significand(Builtin::f32 value) noexcept -> const Builtin::u32
		{
			#line 396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			ADV_EXPRESSION_BODY(__Float32$Protected::TrailingSignificand(value) | (__Float32$Protected::BiasedExponent(value) != Builtin::i32(0) ? (Builtin::u32(1U) << __Float32$Protected::BiasedExponentShift) : Builtin::u32(0U))); 
		}
	}
namespace __Float32$Protected {
		#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		inline constexpr auto TrailingSignificand(Builtin::f32 value) noexcept -> const Builtin::u32
		{
			#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			ADV_EXPRESSION_BODY(__Float32$Protected::ExtractTrailingSignificandFromBits(ADV_UPCS(Bits)(value.$ref()))); 
		}
	}
namespace __Float32$Protected {
		#line 399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		inline constexpr auto ExtractBiasedExponentFromBits(Builtin::u32 bits) noexcept -> const Builtin::u8
		{
			#line 399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			ADV_EXPRESSION_BODY(Builtin::u8{(bits >> __Float32$Protected::BiasedExponentShift) & __Float32$Protected::ShiftedBiasedExponentMask}); 
		}
	}
namespace __Float32$Protected {
		#line 400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		inline constexpr auto ExtractTrailingSignificandFromBits(Builtin::u32 bits) noexcept -> const Builtin::u32
		{
			#line 400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			ADV_EXPRESSION_BODY(bits & __Float32$Protected::TrailingSignificandMask); 
		}
	}
} namespace $extensions { using namespace System;
#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto $static_getMinValue<$extension_Float32_14_f32>::get() -> const $extension_Float32_14_f32
	{
		#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32(-3.402823466e+38f)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto $static_getMaxValue<$extension_Float32_14_f32>::get() -> const $extension_Float32_14_f32
	{
		#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(+Builtin::f32(3.402823466e+38f)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	
} namespace $extensions { using namespace System;
#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto operator<=>($extension_Float32_19_f32 const& $this LIFETIMEBOUND, Builtin::Nullable<$extension_Float32_19_f32> rhs) noexcept -> const Builtin::i32
	{
		#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		{
			#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			if ((!Builtin::Is(rhs, nullptr))) {
				#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				auto __tmp0 = *rhs; const auto& rhs = __tmp0;
				
				#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				return $this <=> rhs;
			}
		}
		#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return Builtin::i32(1);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto $static_FromBits<$extension_Float32_19_f32>::get(Builtin::u32 bits)  -> const typename $extension_Float32_19_f32
	{
		#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::BitCast<$extension_Float32_19_f32>(bits)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getBits($extension_Float32_19_f32 const & $this ) -> const Builtin::u32
	{
		#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::BitCast<Builtin::u32>($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto $static_getBitWidth<$extension_Float32_19_f32>::get() -> const Builtin::u32
	{
		#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(32U)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto $static_getMinPositiveValue<$extension_Float32_19_f32>::get() -> const $extension_Float32_19_f32
	{
		#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32(1.17549435e-38f)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getHashCode($extension_Float32_19_f32 const & $this ) -> const Builtin::u64
	{
		#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		Builtin::Auto<decltype(ADV_UPCS(Bits)($this.$ref()))> bits = ADV_UPCS(Bits)($this.$ref()); 
		#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if ((((bits - Builtin::u32(1U)) & Builtin::u32(0x7FFFFFFFU)) <=> Builtin::u32(0x7F800000U)) >= 0) {
			#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			bits &= Builtin::u32(0x7F800000U);
		}
		#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return bits;
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	
} namespace $extensions { using namespace System;
#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToBoolean($extension_Float32_76_f32 const& $this LIFETIMEBOUND) noexcept -> const bool
	{
		#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY($this != Builtin::i32(0)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToInt8($extension_Float32_76_f32 const& $this LIFETIMEBOUND)  -> const Builtin::i8
	{
		#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i8>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToUInt8($extension_Float32_76_f32 const& $this LIFETIMEBOUND)  -> const Builtin::u8
	{
		#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u8>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToInt16($extension_Float32_76_f32 const& $this LIFETIMEBOUND)  -> const Builtin::i16
	{
		#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i16>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToUInt16($extension_Float32_76_f32 const& $this LIFETIMEBOUND)  -> const Builtin::u16
	{
		#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u16>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToInt32($extension_Float32_76_f32 const& $this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i32>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToUInt32($extension_Float32_76_f32 const& $this LIFETIMEBOUND)  -> const Builtin::u32
	{
		#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u32>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 84 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToInt64($extension_Float32_76_f32 const& $this LIFETIMEBOUND)  -> const Builtin::i64
	{
		#line 84 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i64>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 85 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToUInt64($extension_Float32_76_f32 const& $this LIFETIMEBOUND)  -> const Builtin::u64
	{
		#line 85 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u64>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 86 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToInt128($extension_Float32_76_f32 const& $this LIFETIMEBOUND)  -> const Builtin::i128
	{
		#line 86 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i128>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToUInt128($extension_Float32_76_f32 const& $this LIFETIMEBOUND)  -> const Builtin::u128
	{
		#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u128>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToIsize($extension_Float32_76_f32 const& $this LIFETIMEBOUND)  -> const Builtin::isize
	{
		#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::isize>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToUsize($extension_Float32_76_f32 const& $this LIFETIMEBOUND)  -> const Builtin::usize
	{
		#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::usize>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToFloat32($extension_Float32_76_f32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::f32
	{
		#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToFloat64($extension_Float32_76_f32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::f64
	{
		#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToByte($extension_Float32_76_f32 const& $this LIFETIMEBOUND)  -> const Builtin::u8
	{
		#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u8>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToChar($extension_Float32_76_f32 const& $this LIFETIMEBOUND)  -> const Builtin::char32
	{
		#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u16>($this)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	
} namespace $extensions { using namespace System;
#line 100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class T> inline constexpr auto _operator_div_mod($extension_Float32_98_f32 const& $this LIFETIMEBOUND, T rhs)  -> const Builtin::Tuple<$extension_Float32_98_f32, $extension_Float32_98_f32>
	{
		#line 103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return Builtin::MakeTuple($this / Builtin::f32{rhs}, $this % Builtin::f32{rhs});
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class T> inline constexpr auto _operator_div_not($extension_Float32_98_f32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Float32_98_f32
	{
		#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Round)(($this / rhs).$ref())); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto _operator_div_not_eq($extension_Float32_98_f32 & $this , auto rhs)  -> typename $extension_Float32_98_f32&
	{
		#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_div_not)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class T> inline constexpr auto _operator_div_lt($extension_Float32_98_f32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Float32_98_f32
	{
		#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Floor)(($this / rhs).$ref())); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto _operator_div_lt_eq($extension_Float32_98_f32 & $this , auto rhs)  -> typename $extension_Float32_98_f32&
	{
		#line 112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_div_lt)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class T> inline constexpr auto _operator_div_gt($extension_Float32_98_f32 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Float32_98_f32
	{
		#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Ceil)(($this / rhs).$ref())); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto _operator_div_gt_eq($extension_Float32_98_f32 & $this , auto rhs)  -> typename $extension_Float32_98_f32&
	{
		#line 116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_div_gt)($this, rhs)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	
} namespace $extensions { using namespace System;
#line 122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto _operator_xor_xor($extension_Float32_120_f32 const& $this LIFETIMEBOUND, Builtin::i32 exp)  -> const typename $extension_Float32_120_f32
	{
		#line 124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return Builtin::f32(1.0f);
		}
		#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if ((exp <=> Builtin::i32(0)) < 0) {
			#line 130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return Builtin::f32(1.0f) / ADV_UFCS(_operator_xor_xor)($this, (-exp));
		}
		#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		Builtin::Auto<decltype(Builtin::f32(1.0f))> result = Builtin::f32(1.0f); 
		#line 136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (std::is_constant_evaluated()) {
			#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			while ((exp <=> Builtin::i32(1)) > 0) 
			{
				#line 138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
					#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					result *= base;
				}
				#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				ADV_UFCS(_operator_bsl_eq)(exp, Builtin::i32(2));
				#line 142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				base *= base;
			}
			#line 144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return result * base;
		} else {
			#line 145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			{
				#line 146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				for (;;) 
				{
					#line 147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
						#line 148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						result *= base;
						#line 149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						if (exp == Builtin::i32(1)) {
							#line 150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							return result;
						}
					}
					#line 152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					ADV_UFCS(_operator_bsl_eq)(exp, Builtin::i32(2));
					#line 153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					base *= base;
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto _operator_xor_xor_eq($extension_Float32_120_f32 & $this , Builtin::i32 exp)  -> typename $extension_Float32_120_f32&
	{
		#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_xor_xor)($this, exp)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	
} namespace $extensions { using namespace System;
#line 198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto MaxMagnitude($extension_Float32_161_f32 const& $this LIFETIMEBOUND, $extension_Float32_161_f32 rhs) noexcept -> const typename $extension_Float32_161_f32
	{
		#line 200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		Builtin::Auto<decltype(ADV_UPCS(Abs)($this.$ref()))> ax = ADV_UPCS(Abs)($this.$ref()); 
		#line 201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		Builtin::Auto<decltype(ADV_UPCS(Abs)(rhs.$ref()))> ay = ADV_UPCS(Abs)(rhs.$ref()); 
		#line 203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if ((ax <=> ay) > 0 || ADV_UPCS(IsNaN)(ax.$ref())) {
			#line 205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return $this;
		}
		#line 208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (ax == ay) {
			#line 210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return ADV_UPCS(IsNegative)($this.$ref()) ? rhs : $this;
		}
		#line 213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return rhs;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto MaxMagnitudeNumber($extension_Float32_161_f32 const& $this LIFETIMEBOUND, $extension_Float32_161_f32 rhs) noexcept -> const typename $extension_Float32_161_f32
	{
		#line 218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		Builtin::Auto<decltype(ADV_UPCS(Abs)($this.$ref()))> ax = ADV_UPCS(Abs)($this.$ref()); 
		#line 219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		Builtin::Auto<decltype(ADV_UPCS(Abs)(rhs.$ref()))> ay = ADV_UPCS(Abs)(rhs.$ref()); 
		#line 221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if ((ax <=> ay) > 0 || ADV_UPCS(IsNaN)(ay.$ref())) {
			#line 223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return $this;
		}
		#line 226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (ax == ay) {
			#line 228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return ADV_UPCS(IsNegative)($this.$ref()) ? rhs : $this;
		}
		#line 231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return rhs;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto MinMagnitude($extension_Float32_161_f32 const& $this LIFETIMEBOUND, $extension_Float32_161_f32 rhs) noexcept -> const typename $extension_Float32_161_f32
	{
		#line 236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		Builtin::Auto<decltype(ADV_UPCS(Abs)($this.$ref()))> ax = ADV_UPCS(Abs)($this.$ref()); 
		#line 237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		Builtin::Auto<decltype(ADV_UPCS(Abs)(rhs.$ref()))> ay = ADV_UPCS(Abs)(rhs.$ref()); 
		#line 239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if ((ax <=> ay) < 0 || ADV_UPCS(IsNaN)(ax.$ref())) {
			#line 241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return $this;
		}
		#line 244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (ax == ay) {
			#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return ADV_UPCS(IsNegative)($this.$ref()) ? $this : rhs;
		}
		#line 249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return rhs;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto MinMagnitudeNumber($extension_Float32_161_f32 const& $this LIFETIMEBOUND, $extension_Float32_161_f32 rhs) noexcept -> const typename $extension_Float32_161_f32
	{
		#line 254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		Builtin::Auto<decltype(ADV_UPCS(Abs)($this.$ref()))> ax = ADV_UPCS(Abs)($this.$ref()); 
		#line 255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		Builtin::Auto<decltype(ADV_UPCS(Abs)(rhs.$ref()))> ay = ADV_UPCS(Abs)(rhs.$ref()); 
		#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if ((ax <=> ay) < 0 || ADV_UPCS(IsNaN)(ay.$ref())) {
			#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return $this;
		}
		#line 262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (ax == ay) {
			#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return ADV_UPCS(IsNegative)($this.$ref()) ? $this : rhs;
		}
		#line 267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return rhs;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToInt8($extension_Float32_161_f32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i8
	{
		#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i8>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToUInt8($extension_Float32_161_f32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u8
	{
		#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u8>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToInt16($extension_Float32_161_f32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i16
	{
		#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i16>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToUInt16($extension_Float32_161_f32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u16
	{
		#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u16>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToInt32($extension_Float32_161_f32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i32
	{
		#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i32>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToUInt32($extension_Float32_161_f32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u32
	{
		#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u32>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToInt64($extension_Float32_161_f32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i64
	{
		#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i64>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToUInt64($extension_Float32_161_f32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u64
	{
		#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u64>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToInt128($extension_Float32_161_f32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i128
	{
		#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i128>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToUInt128($extension_Float32_161_f32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u128
	{
		#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u128>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToIsize($extension_Float32_161_f32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::isize
	{
		#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::isize>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToUsize($extension_Float32_161_f32 const& $this LIFETIMEBOUND) noexcept -> const Builtin::usize
	{
		#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::usize>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto $static_getOne<$extension_Float32_161_f32>::get() -> const $extension_Float32_161_f32
	{
		#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32(1.0f)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto $static_getZero<$extension_Float32_161_f32>::get() -> const $extension_Float32_161_f32
	{
		#line 163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32(0.0f)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto $static_getRadix<$extension_Float32_161_f32>::get() -> const Builtin::i32
	{
		#line 164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(2)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getAbs($extension_Float32_161_f32 const & $this ) -> const $extension_Float32_161_f32
	{
		#line 168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		constexpr Builtin::Auto<decltype(Builtin::u32(0x7FFFFFFFU))> mask = Builtin::u32(0x7FFFFFFFU);
		#line 169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		Builtin::u32 raw = ADV_UPCS(Bits)($this.$ref()); 
		#line 170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return ADV_USFCS((Builtin::f32), FromBits)(raw & mask);
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsCanonical($extension_Float32_161_f32 const & $this ) -> const bool
	{
		#line 172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsComplexNumber($extension_Float32_161_f32 const & $this ) -> const bool
	{
		#line 173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsEvenInteger($extension_Float32_161_f32 const & $this ) -> const bool
	{
		#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsInteger)($this.$ref()) && (ADV_UPCS(Abs)(($this % Builtin::i32(2)).$ref()) == Builtin::i32(0))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsFinite($extension_Float32_161_f32 const & $this ) -> const bool
	{
		#line 175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(((ADV_UPCS(Bits)($this.$ref()) & Builtin::u32(0x7FFFFFFFU)) <=> Builtin::u32(0x7F800000U)) < 0); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsImaginaryNumber($extension_Float32_161_f32 const & $this ) -> const bool
	{
		#line 176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsInfinity($extension_Float32_161_f32 const & $this ) -> const bool
	{
		#line 177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY((ADV_UPCS(Bits)($this.$ref()) & Builtin::u32(0x7FFFFFFFU)) == Builtin::u32(0x7F800000U)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsInteger($extension_Float32_161_f32 const & $this ) -> const bool
	{
		#line 178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsFinite)($this.$ref()) && ($this == ADV_UPCS(Truncate)($this.$ref()))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsNaN($extension_Float32_161_f32 const & $this ) -> const bool
	{
		#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY($this != $this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsNegative($extension_Float32_161_f32 const & $this ) -> const bool
	{
		#line 180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY((Builtin::BitCast<Builtin::i32>($this) <=> Builtin::i32(0)) < 0); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsNegativeInfinity($extension_Float32_161_f32 const & $this ) -> const bool
	{
		#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY($this == ADV_USPCS(NegativeInfinity, $extension_Float32_161_f32)()); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsNormal($extension_Float32_161_f32 const & $this ) -> const bool
	{
		#line 184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		Builtin::Auto<decltype(Builtin::BitCast<Builtin::u32>($this) & Builtin::u32(0x7FFFFFFFU))> bits = Builtin::BitCast<Builtin::u32>($this) & Builtin::u32(0x7FFFFFFFU); 
		#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return ((bits <=> Builtin::u32(0x7F800000U)) < 0) && (bits != Builtin::i32(0)) && ((bits & Builtin::i32(0x7F800000)) != Builtin::i32(0));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsOddInteger($extension_Float32_161_f32 const & $this ) -> const bool
	{
		#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsInteger)($this.$ref()) && (ADV_UPCS(Abs)(($this % Builtin::i32(2)).$ref()) == Builtin::i32(1))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsPositive($extension_Float32_161_f32 const & $this ) -> const bool
	{
		#line 188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY((Builtin::BitCast<Builtin::i32>($this) <=> Builtin::i32(0)) >= 0); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsPositiveInfinity($extension_Float32_161_f32 const & $this ) -> const bool
	{
		#line 189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY($this == ADV_USPCS(PositiveInfinity, $extension_Float32_161_f32)()); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsRealNumber($extension_Float32_161_f32 const & $this ) -> const bool
	{
		#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY($this == $this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsSubnormal($extension_Float32_161_f32 const & $this ) -> const bool
	{
		#line 193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		Builtin::Auto<decltype(ADV_UPCS(Bits)($this.$ref()) & Builtin::u32(0x7FFFFFFFU))> bits = ADV_UPCS(Bits)($this.$ref()) & Builtin::u32(0x7FFFFFFFU); 
		#line 194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return ((bits <=> Builtin::u32(0x7F800000U)) < 0) && (bits != Builtin::i32(0)) && ((bits & Builtin::i32(0x7F800000)) == Builtin::i32(0));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsZero($extension_Float32_161_f32 const & $this ) -> const bool
	{
		#line 196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY($this == ADV_USPCS(Zero, $extension_Float32_161_f32)()); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	
} namespace $extensions { using namespace System;
#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto $static_getMinusOne<$extension_Float32_296_f32>::get() -> const $extension_Float32_296_f32
	{
		#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32(-1.0f)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	
} namespace $extensions { using namespace System;
#line 308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto CopySign($extension_Float32_300_f32 const& $this LIFETIMEBOUND, $extension_Float32_300_f32 sign) noexcept -> const typename $extension_Float32_300_f32
	{
		#line 310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (std::is_constant_evaluated()) {
			#line 311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			if ((sign <=> Builtin::i32(0)) < 0 || (sign == Builtin::i32(0) && (Builtin::f32(1.0f) / sign <=> Builtin::i32(0)) < 0)) {
				#line 312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				return ($this <=> Builtin::i32(0)) < 0 ? $this : -$this;
			}
			#line 314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return ($this <=> Builtin::i32(0)) < 0 ? -$this : $this;
		} else {
			#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			{
				#line 316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				return std::copysignf($this, sign);
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto Max($extension_Float32_300_f32 const& $this LIFETIMEBOUND, $extension_Float32_300_f32 rhs) noexcept -> const typename $extension_Float32_300_f32
	{
		#line 322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if ($this != rhs) {
			#line 323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			if (!ADV_UPCS(IsNaN)($this.$ref())) {
				#line 324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				return (rhs <=> $this) < 0 ? $this : rhs;
			}
			#line 326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return $this;
		}
		#line 328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return ADV_UPCS(IsNegative)(rhs.$ref()) ? $this : rhs;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto MaxNumber($extension_Float32_300_f32 const& $this LIFETIMEBOUND, $extension_Float32_300_f32 rhs) noexcept -> const typename $extension_Float32_300_f32
	{
		#line 332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if ($this != rhs) {
			#line 333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			if (!ADV_UPCS(IsNaN)(rhs.$ref())) {
				#line 334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				return (rhs <=> $this) < 0 ? $this : rhs;
			}
			#line 336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return $this;
		}
		#line 338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return ADV_UPCS(IsNegative)(rhs.$ref()) ? $this : rhs;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto Min($extension_Float32_300_f32 const& $this LIFETIMEBOUND, $extension_Float32_300_f32 rhs) noexcept -> const typename $extension_Float32_300_f32
	{
		#line 342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if ($this != rhs) {
			#line 343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			if (!ADV_UPCS(IsNaN)($this.$ref())) {
				#line 344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				return ($this <=> rhs) < 0 ? $this : rhs;
			}
			#line 346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return $this;
		}
		#line 348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return ADV_UPCS(IsNegative)($this.$ref()) ? $this : rhs;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto MinNumber($extension_Float32_300_f32 const& $this LIFETIMEBOUND, $extension_Float32_300_f32 rhs) noexcept -> const typename $extension_Float32_300_f32
	{
		#line 352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if ($this != rhs) {
			#line 353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			if (!ADV_UPCS(IsNaN)(rhs.$ref())) {
				#line 354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				return ($this <=> rhs) < 0 ? $this : rhs;
			}
			#line 356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return $this;
		}
		#line 358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return ADV_UPCS(IsNegative)($this.$ref()) ? $this : rhs;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto Clamp($extension_Float32_300_f32 const& $this LIFETIMEBOUND, $extension_Float32_300_f32 min, $extension_Float32_300_f32 max)  -> const typename $extension_Float32_300_f32
	{
		#line 362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if ((min <=> max) > 0) {
			#line 363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			Builtin::Throw(Builtin::InvalidOperationException{});
		}
		#line 366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return ($this <=> min) < 0 ? min : ($this <=> max) > 0 ? max : $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getSign($extension_Float32_300_f32 const & $this ) -> const Builtin::i32
	{
		#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return [&]() 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
		{
			#line 302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			auto __tmp__valid_301 = Builtin::Cast<false, std::decay_t<decltype($this)>::$self>($this);
			#line 302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			if(__tmp__valid_301.IsValid() && Builtin::Is(*__tmp__valid_301, Builtin::i32(0))) {
				#line 302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				
				return Builtin::i32(0);
			}
			else {
				#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				if(__tmp__valid_301.IsValid() && Builtin::IsLess(*__tmp__valid_301, Builtin::i32(0))) {
					#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					
					return Builtin::i32(-1);
				}
				else {
					#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					if(__tmp__valid_301.IsValid() && Builtin::IsGreater(*__tmp__valid_301, Builtin::i32(0))) {
						#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						
						return Builtin::i32(1);
					}
					else {
						Builtin::Throw(Builtin::InvalidOperationException{});
						
					}
				}
			}
		}
ADV_WARNING_POP
		(); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	
} namespace $extensions { using namespace System;
#line 443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto Log($extension_Float32_403_f32 const& $this LIFETIMEBOUND, $extension_Float32_403_f32 base) noexcept -> const typename $extension_Float32_403_f32
	{
		#line 445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (ADV_UPCS(IsNaN)($this.$ref())) {
			#line 446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return $this;
		}
		#line 448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (ADV_UPCS(IsNaN)(base.$ref())) {
			#line 449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return base;
		}
		#line 452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (base == Builtin::i32(1)) {
			#line 453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return ADV_USPCS(NaN, Builtin::f32)();
		}
		#line 455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if ($this != Builtin::i32(1) && (base == Builtin::i32(0) || ADV_UPCS(IsPositiveInfinity)(base.$ref()))) {
			#line 456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return ADV_USPCS(NaN, Builtin::f32)();
		}
		#line 459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return ADV_UPCS(Ln)($this.$ref()) / ADV_UPCS(Ln)(base.$ref());
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto Midpoint($extension_Float32_403_f32 const& $this LIFETIMEBOUND, $extension_Float32_403_f32 rhs) noexcept -> const typename $extension_Float32_403_f32
	{
		#line 466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if constexpr (Builtin::Is64BitTarget()) {
			#line 467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return Builtin::f32{(Builtin::f64{$this} + Builtin::f64{rhs}) / Builtin::f64(2.0)};
		} else {
			#line 468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			{
				#line 469 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				constexpr Builtin::Auto<decltype(ADV_USPCS(MaxValue, $extension_Float32_403_f32)() / Builtin::f32(2.0f))> riskValue = ADV_USPCS(MaxValue, $extension_Float32_403_f32)() / Builtin::f32(2.0f);
				#line 471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				if ((ADV_UPCS(Abs)($this.$ref()) <=> riskValue) <= 0 && (ADV_UPCS(Abs)(rhs.$ref()) <=> riskValue) <= 0) {
					#line 472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					return ($this + rhs) / Builtin::f32(2.0f);
				} else {
					#line 473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					{
						#line 474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						return ($this / Builtin::f32(2.0f)) + (rhs / Builtin::f32(2.0f));
					}
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto IsMultipleOf($extension_Float32_403_f32 const& $this LIFETIMEBOUND, $extension_Float32_403_f32 rhs) noexcept -> const bool
	{
		#line 482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (rhs == Builtin::i32(0)) {
			#line 483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return $this == Builtin::i32(0);
		}
		#line 486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (rhs == Builtin::i32(-1)) {
			#line 487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return Builtin::Boolean(true);
		}
		#line 490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return $this % rhs == Builtin::i32(0);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto $static_getAllBitsSet<$extension_Float32_403_f32>::get() -> const $extension_Float32_403_f32
	{
		#line 405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Builtin::f32), FromBits)(Builtin::u32(0xFFFFFFFFU))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsPow2($extension_Float32_403_f32 const & $this ) -> const bool
	{
		#line 410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		Builtin::Auto<decltype(ADV_UPCS(Bits)($this.$ref()))> bits = ADV_UPCS(Bits)($this.$ref()); 
		#line 412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if ((ADV_UFCS(NarrowToInt32)(bits.$ref()) <=> Builtin::i32(0)) <= 0) {
			#line 413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return Builtin::Boolean(false);
		}
		#line 416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		Builtin::Auto<decltype(__Float32$Protected::ExtractBiasedExponentFromBits(bits))> biasedExponent = __Float32$Protected::ExtractBiasedExponentFromBits(bits); 
		#line 417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		Builtin::Auto<decltype(__Float32$Protected::ExtractTrailingSignificandFromBits(bits))> trailingSignificand = __Float32$Protected::ExtractTrailingSignificandFromBits(bits); 
		#line 420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (biasedExponent == __Float32$Protected::MinBiasedExponent) {
			#line 421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return ADV_UPCS(PopCount)(trailingSignificand.$ref()) == Builtin::i32(1);
		}
		#line 424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (biasedExponent == __Float32$Protected::MaxBiasedExponent) {
			#line 425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return Builtin::Boolean(false);
		}
		#line 429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return trailingSignificand == __Float32$Protected::MinTrailingSignificand;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getLog2($extension_Float32_403_f32 const & $this ) -> const $extension_Float32_403_f32
	{
		#line 434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::log2f($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getLog10($extension_Float32_403_f32 const & $this ) -> const $extension_Float32_403_f32
	{
		#line 438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::log10f($this)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	
} namespace $extensions { using namespace System;
#line 496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto $static_getPi<$extension_Float32_494_f32>::get() -> const $extension_Float32_494_f32
	{
		#line 496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32(3.14159265f)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto $static_getE<$extension_Float32_494_f32>::get() -> const $extension_Float32_494_f32
	{
		#line 497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32(2.71828183f)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto $static_getTau<$extension_Float32_494_f32>::get() -> const $extension_Float32_494_f32
	{
		#line 498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32(6.283185307f)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	
} namespace $extensions { using namespace System;
#line 519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto CeilToInt32($extension_Float32_501_f32 const& $this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i32>(ADV_UPCS(Ceil)($this.$ref()))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto CeilToInt64($extension_Float32_501_f32 const& $this LIFETIMEBOUND)  -> const Builtin::i64
	{
		#line 520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i64>(ADV_UPCS(Ceil)($this.$ref()))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto CeilToInt128($extension_Float32_501_f32 const& $this LIFETIMEBOUND)  -> const Builtin::i128
	{
		#line 521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i128>(ADV_UPCS(Ceil)($this.$ref()))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto FloorToInt32($extension_Float32_501_f32 const& $this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i32>(ADV_UPCS(Floor)($this.$ref()))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto FloorToInt64($extension_Float32_501_f32 const& $this LIFETIMEBOUND)  -> const Builtin::i64
	{
		#line 537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i64>(ADV_UPCS(Floor)($this.$ref()))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 538 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto FloorToInt128($extension_Float32_501_f32 const& $this LIFETIMEBOUND)  -> const Builtin::i128
	{
		#line 538 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i128>(ADV_UPCS(Floor)($this.$ref()))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto TruncateToInt32($extension_Float32_501_f32 const& $this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i32>(ADV_UPCS(Truncate)($this.$ref()))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto TruncateToInt64($extension_Float32_501_f32 const& $this LIFETIMEBOUND)  -> const Builtin::i64
	{
		#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i64>(ADV_UPCS(Truncate)($this.$ref()))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto TruncateToInt128($extension_Float32_501_f32 const& $this LIFETIMEBOUND)  -> const Builtin::i128
	{
		#line 554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i128>(ADV_UPCS(Truncate)($this.$ref()))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto RoundToInt32($extension_Float32_501_f32 const& $this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i32>(ADV_UPCS(Round)($this.$ref()))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto RoundToInt64($extension_Float32_501_f32 const& $this LIFETIMEBOUND)  -> const Builtin::i64
	{
		#line 569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i64>(ADV_UPCS(Round)($this.$ref()))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto RoundToInt128($extension_Float32_501_f32 const& $this LIFETIMEBOUND)  -> const Builtin::i128
	{
		#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i128>(ADV_UPCS(Round)($this.$ref()))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 618 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto RoundTiesEvenToInt32($extension_Float32_501_f32 const& $this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 618 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i32>(ADV_UPCS(RoundTiesEven)($this.$ref()))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto RoundTiesEvenToInt64($extension_Float32_501_f32 const& $this LIFETIMEBOUND)  -> const Builtin::i64
	{
		#line 619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i64>(ADV_UPCS(RoundTiesEven)($this.$ref()))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto RoundTiesEvenToInt128($extension_Float32_501_f32 const& $this LIFETIMEBOUND)  -> const Builtin::i128
	{
		#line 620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i128>(ADV_UPCS(RoundTiesEven)($this.$ref()))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 622 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto Round($extension_Float32_501_f32 const& $this LIFETIMEBOUND, Builtin::u32 digits)  -> const typename $extension_Float32_501_f32
	{
		#line 622 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Round)($this.$ref(), digits, ADV_USPCS(AwayFromZero, MidpointRounding)())); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 623 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto Round($extension_Float32_501_f32 const& $this LIFETIMEBOUND, MidpointRounding rounding)  -> const typename $extension_Float32_501_f32
	{
		#line 625 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (std::is_constant_evaluated()) {
			#line 626 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			if (rounding == ADV_USPCS(AwayFromZero, MidpointRounding)()) {
				#line 627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				return ADV_UPCS(Round)($this.$ref());
			}
			#line 629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			if (rounding == ADV_USPCS(ToEven, MidpointRounding)()) {
				#line 630 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				return ADV_UPCS(RoundTiesEven)($this.$ref());
			}
		}
		#line 633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return ADV_UFCS(Round)($this.$ref(), Builtin::u32(0U), rounding);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 635 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto Round($extension_Float32_501_f32 const& $this LIFETIMEBOUND, Builtin::u32 digits, MidpointRounding rounding)  -> const typename $extension_Float32_501_f32
	{
		#line 637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		constexpr Builtin::Auto<decltype(Builtin::u32(6U))> maxRoundingDigits = Builtin::u32(6U);
		#line 638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		constexpr Builtin::Auto<decltype(Builtin::f32(1e8f))> singleRoundLimit = Builtin::f32(1e8f);
		#line 639 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		constexpr auto pow10table = Builtin::ToInlineArray<Builtin::f32>({Builtin::f32(Builtin::f32(1e0f)), Builtin::f32(Builtin::f32(1e1f)), Builtin::f32(Builtin::f32(1e2f)), Builtin::f32(Builtin::f32(1e3f)), Builtin::f32(Builtin::f32(1e4f)), Builtin::f32(Builtin::f32(1e5f)), Builtin::f32(Builtin::f32(1e6f))});
		#line 641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if ((digits <=> maxRoundingDigits) > 0) {
			#line 642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 645 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		Builtin::Auto<decltype($this)> result = $this; 
		#line 646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if ((ADV_UPCS(Abs)($this.$ref()) <=> singleRoundLimit) < 0) {
			#line 647 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(pow10table.$ref(), digits))> pow10 = ADV_UFCS(_operator_subscript)(pow10table.$ref(), digits); 
			#line 648 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			result *= pow10;
			#line 650 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			result = [&]() 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
			{
				#line 652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				auto __tmp__valid_650 = Builtin::Cast<false, std::decay_t<decltype(rounding)>::$self>(rounding);
				#line 652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				if(__tmp__valid_650.IsValid() && Builtin::Is(*__tmp__valid_650, std::decay_t<decltype(rounding)>::ToEven)) {
					#line 652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					const auto& rounding = *__tmp__valid_650;
					return ADV_UPCS(RoundTiesEven)(result.$ref());
				}
				else {
					#line 653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					if(__tmp__valid_650.IsValid() && Builtin::Is(*__tmp__valid_650, std::decay_t<decltype(rounding)>::AwayFromZero)) {
						#line 653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						const auto& rounding = *__tmp__valid_650;
						return ADV_UPCS(Round)(result.$ref());
					}
					else {
						#line 654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						if(__tmp__valid_650.IsValid() && Builtin::Is(*__tmp__valid_650, std::decay_t<decltype(rounding)>::ToZero)) {
							#line 654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							const auto& rounding = *__tmp__valid_650;
							return ADV_UPCS(Truncate)(result.$ref());
						}
						else {
							#line 655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							if(__tmp__valid_650.IsValid() && Builtin::Is(*__tmp__valid_650, std::decay_t<decltype(rounding)>::ToNegativeInfinity)) {
								#line 655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
								const auto& rounding = *__tmp__valid_650;
								return ADV_UPCS(Floor)(result.$ref());
							}
							else {
								#line 656 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
								if(__tmp__valid_650.IsValid() && Builtin::Is(*__tmp__valid_650, std::decay_t<decltype(rounding)>::ToPositiveInfinity)) {
									#line 656 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
									const auto& rounding = *__tmp__valid_650;
									return ADV_UPCS(Ceil)(result.$ref());
								}
								else {
									Builtin::Throw(Builtin::InvalidArgumentException{});
									
								}
							}
						}
					}
				}
			}
ADV_WARNING_POP
			();
			#line 660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			result /= pow10;
		}
		#line 663 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getFractionalPart($extension_Float32_501_f32 const & $this ) -> const $extension_Float32_501_f32
	{
		#line 504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY($this - ADV_UPCS(Truncate)($this.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getCeil($extension_Float32_501_f32 const & $this ) -> const $extension_Float32_501_f32
	{
		#line 511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (std::is_constant_evaluated()) {
			#line 512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::i64>($this))> i = Builtin::Cast<true, Builtin::i64>($this); 
			#line 513 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return (($this <=> i) > 0) ? (i + Builtin::i32(1)) : i;
		} else {
			#line 514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			{
				#line 515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				return std::ceilf($this);
			}
		}
		return {};
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getFloor($extension_Float32_501_f32 const & $this ) -> const $extension_Float32_501_f32
	{
		#line 528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (std::is_constant_evaluated()) {
			#line 529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::i64>($this))> i = Builtin::Cast<true, Builtin::i64>($this); 
			#line 530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return (($this <=> i) < 0) ? (i - Builtin::i32(1)) : i;
		} else {
			#line 531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			{
				#line 532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				return std::floorf($this);
			}
		}
		return {};
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getTruncate($extension_Float32_501_f32 const & $this ) -> const $extension_Float32_501_f32
	{
		#line 545 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (std::is_constant_evaluated()) {
			#line 546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return Builtin::Cast<true, Builtin::i64>($this);
		} else {
			#line 547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			{
				#line 548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				return std::truncf($this);
			}
		}
		return {};
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getRound($extension_Float32_501_f32 const & $this ) -> const $extension_Float32_501_f32
	{
		#line 561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (std::is_constant_evaluated()) {
			#line 562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return Builtin::Cast<true, Builtin::i64>(($this + ADV_UFCS(CopySign)(Builtin::f32(0.49999997f).$ref(), $this)));
		} else {
			#line 563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			{
				#line 564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				return std::roundf($this);
			}
		}
		return {};
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getRoundTiesEven($extension_Float32_501_f32 const & $this ) -> const $extension_Float32_501_f32
	{
		#line 577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		Builtin::Auto<decltype(ADV_UPCS(Bits)($this.$ref()))> bits = ADV_UPCS(Bits)($this.$ref()); 
		#line 578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		Builtin::Auto<decltype(__Float32$Protected::ExtractBiasedExponentFromBits(bits))> biasedExponent = __Float32$Protected::ExtractBiasedExponentFromBits(bits); 
		#line 579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if ((biasedExponent <=> Builtin::u32(0x7EU)) <= 0) {
			#line 581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			if ((bits << Builtin::i32(1)) == Builtin::i32(0)) {
				#line 582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				return $this;
			}
			#line 587 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			Builtin::Auto<decltype((biasedExponent == Builtin::u32(0x7EU) && __Float32$Protected::ExtractTrailingSignificandFromBits(bits) != Builtin::i32(0)) ? Builtin::f32(1.0f) : Builtin::f32(0.0f))> result = (biasedExponent == Builtin::u32(0x7EU) && __Float32$Protected::ExtractTrailingSignificandFromBits(bits) != Builtin::i32(0)) ? Builtin::f32(1.0f) : Builtin::f32(0.0f); 
			#line 589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return ADV_UFCS(CopySign)(result.$ref(), $this);
		}
		#line 593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if ((biasedExponent <=> Builtin::u32(0x96U)) >= 0) {
			#line 594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return $this;
		}
		#line 597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT(((biasedExponent <=> Builtin::u32(0x7FU)) >= 0 && (biasedExponent <=> Builtin::u32(0x95U)) <= 0), "biasedExponent>=0x7FuandbiasedExponent<=0x95u");
		#line 600 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		Builtin::Auto<decltype(Builtin::u32(1U) << (Builtin::i32(0x96) - biasedExponent))> lastBitMask = Builtin::u32(1U) << (Builtin::i32(0x96) - biasedExponent); 
		#line 602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		Builtin::Auto<decltype(lastBitMask - Builtin::u32(1U))> roundBitsMask = lastBitMask - Builtin::u32(1U); 
		#line 605 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		bits += lastBitMask >> Builtin::i32(1);
		#line 607 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if ((bits & roundBitsMask) == Builtin::i32(0)) {
			#line 609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			bits &= ADV_UFCS(_operator_not)(lastBitMask);
		} else {
			#line 610 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			{
				#line 612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				bits &= ADV_UFCS(_operator_not)(roundBitsMask);
			}
		}
		#line 615 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return ADV_USFCS((Builtin::f32), FromBits)(bits);
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getExponentByteCount($extension_Float32_501_f32 const & $this ) -> const Builtin::u32
	{
		#line 666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u32>(Builtin::usize(sizeof(Builtin::i8)))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 667 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getExponentShortestBitLength($extension_Float32_501_f32 const & $this ) -> const Builtin::u32
	{
		#line 669 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		Builtin::Auto<decltype(__Float32$Protected::Exponent($this))> exponent = __Float32$Protected::Exponent($this); 
		#line 670 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if ((exponent <=> Builtin::i32(0)) >= 0) {
			#line 671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return ADV_USPCS(BitWidth, Builtin::i8)() - ADV_UPCS(LeadingZeroCount)(exponent.$ref());
		} else {
			#line 672 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			{
				#line 673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				return ADV_USPCS(BitWidth, Builtin::i8)() + Builtin::i32(1) - ADV_UPCS(LeadingZeroCount)(exponent.$ref());
			}
		}
		return {};
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 676 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getSignificandBitLength($extension_Float32_501_f32 const & $this ) -> const Builtin::u32
	{
		#line 676 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(24U)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getSignificandByteCount($extension_Float32_501_f32 const & $this ) -> const Builtin::u32
	{
		#line 677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u32>(Builtin::usize(sizeof(Builtin::u32)))); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	
} namespace $extensions { using namespace System;
#line 682 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto _operator_mul_mul($extension_Float32_681_f32 const& $this LIFETIMEBOUND, $extension_Float32_681_f32 exp) noexcept -> const typename $extension_Float32_681_f32
	{
		#line 682 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::powf($this, exp)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto _operator_mul_mul_eq($extension_Float32_681_f32 & $this , $extension_Float32_681_f32 exp) noexcept -> typename $extension_Float32_681_f32&
	{
		#line 683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY($this = std::powf($this, exp)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	
} namespace $extensions { using namespace System;
#line 688 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getExp($extension_Float32_686_f32 const & $this ) -> const $extension_Float32_686_f32
	{
		#line 688 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::expf($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 690 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getExp2($extension_Float32_686_f32 const & $this ) -> const $extension_Float32_686_f32
	{
		#line 690 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::exp2f($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 692 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getExp10($extension_Float32_686_f32 const & $this ) -> const $extension_Float32_686_f32
	{
		#line 692 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_mul)(Builtin::f32(10.0f), $this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 694 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getExpM1($extension_Float32_686_f32 const & $this ) -> const $extension_Float32_686_f32
	{
		#line 694 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::expm1f($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getExp2M1($extension_Float32_686_f32 const & $this ) -> const $extension_Float32_686_f32
	{
		#line 696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::exp2f($this) - Builtin::f32(1.0f)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 698 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getExp10M1($extension_Float32_686_f32 const & $this ) -> const $extension_Float32_686_f32
	{
		#line 698 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Exp10)($this.$ref()) - Builtin::f32(1.0f)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	
} namespace $extensions { using namespace System;
#line 703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getLn($extension_Float32_701_f32 const & $this ) -> const $extension_Float32_701_f32
	{
		#line 703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::logf($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getLnP1($extension_Float32_701_f32 const & $this ) -> const $extension_Float32_701_f32
	{
		#line 705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::log1pf($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 707 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getLog2P1($extension_Float32_701_f32 const & $this ) -> const $extension_Float32_701_f32
	{
		#line 707 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::log2f($this + Builtin::f32(1.0f))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getLog10P1($extension_Float32_701_f32 const & $this ) -> const $extension_Float32_701_f32
	{
		#line 709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::log10f($this + Builtin::f32(1.0f))); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	
} namespace $extensions { using namespace System;
#line 714 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getSqrt($extension_Float32_712_f32 const & $this ) -> const $extension_Float32_712_f32
	{
		#line 714 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::sqrtf($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 716 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getCbrt($extension_Float32_712_f32 const & $this ) -> const $extension_Float32_712_f32
	{
		#line 716 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::cbrtf($this)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	
} namespace $extensions { using namespace System;
#line 1061 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToRadians($extension_Float32_820_f32 const& $this LIFETIMEBOUND) noexcept -> const typename $extension_Float32_820_f32
	{
		#line 1061 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(($this * ADV_USPCS(Pi, Builtin::f32)()) / Builtin::f32(180.0f)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1063 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToDegrees($extension_Float32_820_f32 const& $this LIFETIMEBOUND) noexcept -> const typename $extension_Float32_820_f32
	{
		#line 1063 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(($this * Builtin::f32(180.0f)) / ADV_USPCS(Pi, Builtin::f32)()); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 822 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getSin($extension_Float32_820_f32 const & $this ) -> const $extension_Float32_820_f32
	{
		#line 822 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::sinf($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 824 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getCos($extension_Float32_820_f32 const & $this ) -> const $extension_Float32_820_f32
	{
		#line 824 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::cosf($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 826 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getTan($extension_Float32_820_f32 const & $this ) -> const $extension_Float32_820_f32
	{
		#line 826 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::tanf($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getCot($extension_Float32_820_f32 const & $this ) -> const $extension_Float32_820_f32
	{
		#line 828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32(1.0f) / ADV_UPCS(Tan)($this.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getSec($extension_Float32_820_f32 const & $this ) -> const $extension_Float32_820_f32
	{
		#line 830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32(1.0f) / ADV_UPCS(Cos)($this.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 832 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getCsc($extension_Float32_820_f32 const & $this ) -> const $extension_Float32_820_f32
	{
		#line 832 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32(1.0f) / ADV_UPCS(Sin)($this.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 834 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAsin($extension_Float32_820_f32 const & $this ) -> const $extension_Float32_820_f32
	{
		#line 834 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::asinf($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 836 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAcos($extension_Float32_820_f32 const & $this ) -> const $extension_Float32_820_f32
	{
		#line 836 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::acosf($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 838 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAtan($extension_Float32_820_f32 const & $this ) -> const $extension_Float32_820_f32
	{
		#line 838 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::atanf($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 840 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAcot($extension_Float32_820_f32 const & $this ) -> const $extension_Float32_820_f32
	{
		#line 840 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::atanf(Builtin::f32(1.0f) / $this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 842 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAsec($extension_Float32_820_f32 const & $this ) -> const $extension_Float32_820_f32
	{
		#line 842 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::acosf(Builtin::f32(1.0f) / $this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 844 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAcsc($extension_Float32_820_f32 const & $this ) -> const $extension_Float32_820_f32
	{
		#line 844 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::asinf(Builtin::f32(1.0f) / $this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 846 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getSinCos($extension_Float32_820_f32 const & $this ) -> const Builtin::Tuple<$extension_Float32_820_f32, $extension_Float32_820_f32>
	{
		#line 846 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::MakeTuple(ADV_UPCS(Sin)($this.$ref()), ADV_UPCS(Cos)($this.$ref()))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getCotPi($extension_Float32_820_f32 const & $this ) -> const $extension_Float32_820_f32
	{
		#line 1042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32(1.0f) / ADV_UPCS(TanPi)($this.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1044 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getSecPi($extension_Float32_820_f32 const & $this ) -> const $extension_Float32_820_f32
	{
		#line 1044 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32(1.0f) / ADV_UPCS(CosPi)($this.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1046 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getCscPi($extension_Float32_820_f32 const & $this ) -> const $extension_Float32_820_f32
	{
		#line 1046 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32(1.0f) / ADV_UPCS(SinPi)($this.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1048 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAsinPi($extension_Float32_820_f32 const & $this ) -> const $extension_Float32_820_f32
	{
		#line 1048 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Asin)($this.$ref()) / ADV_USPCS(Pi, Builtin::f32)()); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1050 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAcosPi($extension_Float32_820_f32 const & $this ) -> const $extension_Float32_820_f32
	{
		#line 1050 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Acos)($this.$ref()) / ADV_USPCS(Pi, Builtin::f32)()); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1052 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAtanPi($extension_Float32_820_f32 const & $this ) -> const $extension_Float32_820_f32
	{
		#line 1052 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Atan)($this.$ref()) / ADV_USPCS(Pi, Builtin::f32)()); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1054 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAcotPi($extension_Float32_820_f32 const & $this ) -> const $extension_Float32_820_f32
	{
		#line 1054 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Acot)($this.$ref()) / ADV_USPCS(Pi, Builtin::f32)()); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1056 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAsecPi($extension_Float32_820_f32 const & $this ) -> const $extension_Float32_820_f32
	{
		#line 1056 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Asec)($this.$ref()) / ADV_USPCS(Pi, Builtin::f32)()); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1058 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAcscPi($extension_Float32_820_f32 const & $this ) -> const $extension_Float32_820_f32
	{
		#line 1058 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Acsc)($this.$ref()) / ADV_USPCS(Pi, Builtin::f32)()); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	
} namespace $extensions { using namespace System;
#line 1068 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAcosh($extension_Float32_1066_f32 const & $this ) -> const $extension_Float32_1066_f32
	{
		#line 1068 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::acoshf($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1070 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAcoth($extension_Float32_1066_f32 const & $this ) -> const $extension_Float32_1066_f32
	{
		#line 1070 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::atanhf(Builtin::f32(1.0f) / $this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1072 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAcsch($extension_Float32_1066_f32 const & $this ) -> const $extension_Float32_1066_f32
	{
		#line 1072 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::asinhf(Builtin::f32(1.0f) / $this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1074 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAsech($extension_Float32_1066_f32 const & $this ) -> const $extension_Float32_1066_f32
	{
		#line 1074 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::acoshf(Builtin::f32(1.0f) / $this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1076 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAsinh($extension_Float32_1066_f32 const & $this ) -> const $extension_Float32_1066_f32
	{
		#line 1076 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::asinhf($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1078 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAtanh($extension_Float32_1066_f32 const & $this ) -> const $extension_Float32_1066_f32
	{
		#line 1078 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::atanhf($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1080 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getCosh($extension_Float32_1066_f32 const & $this ) -> const $extension_Float32_1066_f32
	{
		#line 1080 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::coshf($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1082 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getCoth($extension_Float32_1066_f32 const & $this ) -> const $extension_Float32_1066_f32
	{
		#line 1082 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32(1.0f) / ADV_UPCS(Tanh)($this.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1084 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getCsch($extension_Float32_1066_f32 const & $this ) -> const $extension_Float32_1066_f32
	{
		#line 1084 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32(1.0f) / ADV_UPCS(Sinh)($this.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1086 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getSech($extension_Float32_1066_f32 const & $this ) -> const $extension_Float32_1066_f32
	{
		#line 1086 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32(1.0f) / ADV_UPCS(Cosh)($this.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1088 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getSinh($extension_Float32_1066_f32 const & $this ) -> const $extension_Float32_1066_f32
	{
		#line 1088 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::sinhf($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1090 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getTanh($extension_Float32_1066_f32 const & $this ) -> const $extension_Float32_1066_f32
	{
		#line 1090 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::tanhf($this)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	
} namespace $extensions { using namespace System;
#line 1101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto Atan2($extension_Float32_1093_f32 const& $this LIFETIMEBOUND, $extension_Float32_1093_f32 y)  -> const typename $extension_Float32_1093_f32
	{
		#line 1101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::atan2f($this, y)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto Atan2Pi($extension_Float32_1093_f32 const& $this LIFETIMEBOUND, $extension_Float32_1093_f32 y)  -> const typename $extension_Float32_1093_f32
	{
		#line 1102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Atan2)($this.$ref(), y) / ADV_USPCS(Pi, Builtin::f32)()); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto FusedMultiplyAdd($extension_Float32_1093_f32 const& $this LIFETIMEBOUND, $extension_Float32_1093_f32 rhs, $extension_Float32_1093_f32 addend)  -> const typename $extension_Float32_1093_f32
	{
		#line 1191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::fmaf($this, rhs, addend)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto Ieee754Remainder($extension_Float32_1093_f32 const& $this LIFETIMEBOUND, $extension_Float32_1093_f32 rhs)  -> const typename $extension_Float32_1093_f32
	{
		#line 1193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::remainderf($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto Lerp($extension_Float32_1093_f32 const& $this LIFETIMEBOUND, $extension_Float32_1093_f32 end, $extension_Float32_1093_f32 amount) noexcept -> const typename $extension_Float32_1093_f32
	{
		#line 1196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY($this * (Builtin::f32(1.0f) - amount) + (end * amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto ScaleB($extension_Float32_1093_f32 const& $this LIFETIMEBOUND, Builtin::i32 n)  -> const typename $extension_Float32_1093_f32
	{
		#line 1198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::scalbnf($this, n)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1094 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto $static_getEpsilon<$extension_Float32_1093_f32>::get() -> const $extension_Float32_1093_f32
	{
		#line 1094 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32{Builtin::f64(1.4e-45)}); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1095 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto $static_getNegativeInfinity<$extension_Float32_1093_f32>::get() -> const $extension_Float32_1093_f32
	{
		#line 1095 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32{Builtin::f64(-1e+300)}); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1096 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto $static_getPositiveInfinity<$extension_Float32_1093_f32>::get() -> const $extension_Float32_1093_f32
	{
		#line 1096 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32{+Builtin::f64(1e+300)}); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1097 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto $static_getNaN<$extension_Float32_1093_f32>::get() -> const $extension_Float32_1093_f32
	{
		#line 1097 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::NanValue()); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1098 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto $static_getNegativeZero<$extension_Float32_1093_f32>::get() -> const $extension_Float32_1093_f32
	{
		#line 1098 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32(-0.0f)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getBitIncrement($extension_Float32_1093_f32 const & $this ) -> const $extension_Float32_1093_f32
	{
		#line 1112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		Builtin::Auto<decltype(ADV_UPCS(Bits)($this.$ref()))> bits = ADV_UPCS(Bits)($this.$ref()); 
		#line 1113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (((bits & Builtin::u32(0x7F800000U)) <=> Builtin::u32(0x7F800000U)) >= 0) {
			#line 1117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return bits == Builtin::u32(0xFF800000U) ? ADV_USPCS(MinValue, Builtin::f32)() : $this;
		}
		#line 1121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (bits == Builtin::u32(0x80000000U)) {
			#line 1122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return ADV_USPCS(Epsilon, Builtin::f32)();
		}
		#line 1125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		bits += (bits <=> ADV_USPCS(MaxValue, Builtin::i32)()) > 0 ? Builtin::i32(-1) : +Builtin::i32(1);
		#line 1126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return ADV_USFCS((Builtin::f32), FromBits)(bits);
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getBitDecrement($extension_Float32_1093_f32 const & $this ) -> const $extension_Float32_1093_f32
	{
		#line 1136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		Builtin::Auto<decltype(ADV_UPCS(Bits)($this.$ref()))> bits = ADV_UPCS(Bits)($this.$ref()); 
		#line 1137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (((bits & Builtin::u32(0x7F800000U)) <=> Builtin::u32(0x7F800000U)) >= 0) {
			#line 1141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return bits == Builtin::u32(0x7F800000U) ? ADV_USPCS(MaxValue, Builtin::f32)() : $this;
		}
		#line 1145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (bits == Builtin::u32(0U)) {
			#line 1146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return -ADV_USPCS(Epsilon, Builtin::f32)();
		}
		#line 1149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		bits += (bits <=> ADV_USPCS(MaxValue, Builtin::i32)()) > 0 ? +Builtin::i32(1) : Builtin::i32(-1);
		#line 1150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return ADV_USFCS((Builtin::f32), FromBits)(bits);
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getILogB($extension_Float32_1093_f32 const & $this ) -> const Builtin::i32
	{
		#line 1153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::ilogbf($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getReciprocalEstimate($extension_Float32_1093_f32 const & $this ) -> const $extension_Float32_1093_f32
	{
		#line 1157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (std::is_constant_evaluated()) {
			#line 1158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return Builtin::f32(1.0f) / $this;
		} else {
			#line 1159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			{
				#line 1161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				return Builtin::f32(1.0f) / $this;
			}
		}
		return {};
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getReciprocalSqrtEstimate($extension_Float32_1093_f32 const & $this ) -> const $extension_Float32_1093_f32
	{
		#line 1166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (std::is_constant_evaluated()) {
			#line 1167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return Builtin::f32(1.0f) / ADV_UPCS(Sqrt)($this.$ref());
		} else {
			#line 1168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			{
				#line 1170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				return Builtin::f32(1.0f) / ADV_UPCS(Sqrt)($this.$ref());
			}
		}
		return {};
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getCategory($extension_Float32_1093_f32 const & $this ) -> const FloatingPointCategory
	{
		#line 1177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (ADV_UPCS(IsNaN)($this.$ref())) {
			#line 1178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return ADV_USPCS(NaN, FloatingPointCategory)();
		} else {
			#line 1179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			if (ADV_UPCS(IsInfinity)($this.$ref())) {
				#line 1180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				return ADV_USPCS(Infinity, FloatingPointCategory)();
			} else {
				#line 1181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				if (ADV_UPCS(IsZero)($this.$ref())) {
					#line 1182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					return ADV_USPCS(Zero, FloatingPointCategory)();
				} else {
					#line 1183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					if (ADV_UPCS(IsSubnormal)($this.$ref())) {
						#line 1184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						return ADV_USPCS(Subnormal, FloatingPointCategory)();
					} else {
						#line 1185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						{
							#line 1186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							return ADV_USPCS(Normal, FloatingPointCategory)();
						}
					}
				}
			}
		}
		return {};
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getGamma($extension_Float32_1093_f32 const & $this ) -> const $extension_Float32_1093_f32
	{
		#line 1201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::tgammaf($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getLnGamma($extension_Float32_1093_f32 const & $this ) -> const $extension_Float32_1093_f32
	{
		#line 1203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::lgammaf($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getErf($extension_Float32_1093_f32 const & $this ) -> const $extension_Float32_1093_f32
	{
		#line 1205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::erff($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getErfc($extension_Float32_1093_f32 const & $this ) -> const $extension_Float32_1093_f32
	{
		#line 1207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::erfcf($this)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	
} namespace $extensions { using namespace System;
#line 1211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto $static_getNumberBufferLength<$extension_Float32_1210_f32>::get() -> const Builtin::i32
	{
		#line 1211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(112) + Builtin::i32(1) + Builtin::i32(1)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto $static_getZeroBits<$extension_Float32_1210_f32>::get() -> const Builtin::u128
	{
		#line 1212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(0U)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto $static_getInfinityBits<$extension_Float32_1210_f32>::get() -> const Builtin::u128
	{
		#line 1213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(0x7F800000U)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto $static_getNormalMantissaMask<$extension_Float32_1210_f32>::get() -> const Builtin::u128
	{
		#line 1214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY((Builtin::u128(1ULL) << __Float32$Protected::SignificandLength) - Builtin::u32(1U)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto $static_getDenormalMantissaMask<$extension_Float32_1210_f32>::get() -> const Builtin::u128
	{
		#line 1215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(__Float32$Protected::TrailingSignificandMask); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto $static_getMinBinaryExponent<$extension_Float32_1210_f32>::get() -> const Builtin::i32
	{
		#line 1216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(1) - __Float32$Protected::MaxExponent); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto $static_getMaxBinaryExponent<$extension_Float32_1210_f32>::get() -> const Builtin::i32
	{
		#line 1217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(__Float32$Protected::MaxExponent); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto $static_getMinDecimalExponent<$extension_Float32_1210_f32>::get() -> const Builtin::i32
	{
		#line 1218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(-45)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto $static_getMaxDecimalExponent<$extension_Float32_1210_f32>::get() -> const Builtin::i32
	{
		#line 1219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(39)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto $static_getExponentBias<$extension_Float32_1210_f32>::get() -> const Builtin::i32
	{
		#line 1220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(__Float32$Protected::ExpBias); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto $static_getExponentBits<$extension_Float32_1210_f32>::get() -> const Builtin::u128
	{
		#line 1221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(8U)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto $static_getOverflowDecimalExponent<$extension_Float32_1210_f32>::get() -> const Builtin::i32
	{
		#line 1222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl)((__Float32$Protected::MaxExponent + Builtin::i32(2) * __Float32$Protected::SignificandLength), Builtin::i32(3))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto $static_getInfinityExponent<$extension_Float32_1210_f32>::get() -> const Builtin::i32
	{
		#line 1223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(0xFF)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto $static_getNormalMantissaBits<$extension_Float32_1210_f32>::get() -> const Builtin::u16
	{
		#line 1224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u16>(__Float32$Protected::SignificandLength)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto $static_getDenormalMantissaBits<$extension_Float32_1210_f32>::get() -> const Builtin::u16
	{
		#line 1225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u16>(__Float32$Protected::TrailingSignificandLength)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto $static_getMinFastFloatDecimalExponent<$extension_Float32_1210_f32>::get() -> const Builtin::i32
	{
		#line 1226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(-65)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto $static_getMaxFastFloatDecimalExponent<$extension_Float32_1210_f32>::get() -> const Builtin::i32
	{
		#line 1227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(38)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto $static_getMinExponentRoundToEven<$extension_Float32_1210_f32>::get() -> const Builtin::i32
	{
		#line 1228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(-17)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto $static_getMaxExponentRoundToEven<$extension_Float32_1210_f32>::get() -> const Builtin::i32
	{
		#line 1229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(10)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto $static_getMaxExponentFastPath<$extension_Float32_1210_f32>::get() -> const Builtin::i32
	{
		#line 1230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(10)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto $static_getMaxMantissaFastPath<$extension_Float32_1210_f32>::get() -> const Builtin::u128
	{
		#line 1231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::u128(2ULL) << __Float32$Protected::TrailingSignificandLength); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	

}