#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "Float32.h"
#include "Float64.h"

namespace System {
namespace __Unsafe {} namespace __Float128$Protected__Unsafe {}
//###############################################################################
//# Global type aliases
//###############################################################################
#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
using Float128 = Builtin::f128;
#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
using Quad = Builtin::f128;
//###############################################################################
//# Type definitions
//###############################################################################
	} namespace $extensions { using namespace System;
#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	using $extension_Float128_14_f128 = Builtin::f128;
	#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE(IMinMaxValue, IMinMaxValue);
	#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct $static_getMinValue; template<> struct $static_getMinValue<$extension_Float128_14_f128> { static inline constexpr auto get() -> const $extension_Float128_14_f128; };
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct $static_getMaxValue; template<> struct $static_getMaxValue<$extension_Float128_14_f128> { static inline constexpr auto get() -> const $extension_Float128_14_f128; };
	#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Float128_14_f128, IMinMaxValue, IMinMaxValue, $extension_Float128_14_f128);
	} namespace System{
using $extensions::$static_getMinValue;
using $extensions::$static_getMaxValue;

		} namespace $extensions { using namespace System;
#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	using $extension_Float128_19_f128 = Builtin::f128;
	#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto _operator_eq_eq_mul($extension_Float128_19_f128 const& $this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool;
	#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto operator<=>($extension_Float128_19_f128 const& $this LIFETIMEBOUND, Builtin::Nullable<$extension_Float128_19_f128> rhs) noexcept -> const Builtin::i32;
	#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct $static_FromBits; template<> struct $static_FromBits<$extension_Float128_19_f128> { static inline constexpr auto get(Builtin::u128 bits)  -> const typename $extension_Float128_19_f128; };
	#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getBits($extension_Float128_19_f128 const& $this ) -> const Builtin::u128;
	#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct $static_getBitWidth; template<> struct $static_getBitWidth<$extension_Float128_19_f128> { static inline constexpr auto get() -> const Builtin::u32; };
	#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct $static_getMinPositiveValue; template<> struct $static_getMinPositiveValue<$extension_Float128_19_f128> { static inline constexpr auto get() -> const $extension_Float128_19_f128; };
	#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct $static_getHalfOne; template<> struct $static_getHalfOne<$extension_Float128_19_f128> { static inline constexpr auto get() -> const $extension_Float128_19_f128; };
	#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getHashCode($extension_Float128_19_f128 const& $this ) -> const Builtin::u64;
	} namespace System{
using $extensions::_operator_eq_eq_mul;
using $extensions::operator<=>;
using $extensions::$static_FromBits;
using $extensions::getBits;
using $extensions::$static_getBitWidth;
using $extensions::$static_getMinPositiveValue;
using $extensions::$static_getHalfOne;
using $extensions::getHashCode;

		} namespace $extensions { using namespace System;
#line 62 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	using $extension_Float128_62_f128 = Builtin::f128;
	#line 62 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE(IAbstractComparable, IAbstractComparable);
	#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto _operator_lt_eq_gt_mul($extension_Float128_62_f128 const& $this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32;
	#line 62 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Float128_62_f128, IAbstractComparable, IAbstractComparable, $extension_Float128_62_f128);
	} namespace System{
using $extensions::_operator_lt_eq_gt_mul;

		} namespace $extensions { using namespace System;
#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	using $extension_Float128_77_f128 = Builtin::f128;
	#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE(IConvertible, IConvertible);
	#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToBoolean($extension_Float128_77_f128 const& $this LIFETIMEBOUND) noexcept -> const bool;
	#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToInt8($extension_Float128_77_f128 const& $this LIFETIMEBOUND)  -> const Builtin::i8;
	#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToUInt8($extension_Float128_77_f128 const& $this LIFETIMEBOUND)  -> const Builtin::u8;
	#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToInt16($extension_Float128_77_f128 const& $this LIFETIMEBOUND)  -> const Builtin::i16;
	#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToUInt16($extension_Float128_77_f128 const& $this LIFETIMEBOUND)  -> const Builtin::u16;
	#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToInt32($extension_Float128_77_f128 const& $this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 84 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToUInt32($extension_Float128_77_f128 const& $this LIFETIMEBOUND)  -> const Builtin::u32;
	#line 85 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToInt64($extension_Float128_77_f128 const& $this LIFETIMEBOUND)  -> const Builtin::i64;
	#line 86 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToUInt64($extension_Float128_77_f128 const& $this LIFETIMEBOUND)  -> const Builtin::u64;
	#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToInt128($extension_Float128_77_f128 const& $this LIFETIMEBOUND)  -> const Builtin::i128;
	#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToUInt128($extension_Float128_77_f128 const& $this LIFETIMEBOUND)  -> const Builtin::u128;
	#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToIsize($extension_Float128_77_f128 const& $this LIFETIMEBOUND)  -> const Builtin::isize;
	#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToUsize($extension_Float128_77_f128 const& $this LIFETIMEBOUND)  -> const Builtin::usize;
	#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToFloat32($extension_Float128_77_f128 const& $this LIFETIMEBOUND)  -> const Builtin::f32;
	#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToFloat64($extension_Float128_77_f128 const& $this LIFETIMEBOUND)  -> const Builtin::f64;
	#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToByte($extension_Float128_77_f128 const& $this LIFETIMEBOUND)  -> const Builtin::u8;
	#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToChar($extension_Float128_77_f128 const& $this LIFETIMEBOUND)  -> const Builtin::char32;
	#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Float128_77_f128, IConvertible, IConvertible, $extension_Float128_77_f128);
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
#line 99 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	using $extension_Float128_99_f128 = Builtin::f128;
	#line 99 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE(IDivisibleArithmetic, IDivisibleArithmetic);
	#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class T> inline constexpr auto _operator_div_mod($extension_Float128_99_f128 const& $this LIFETIMEBOUND, T rhs)  -> const Builtin::Tuple<$extension_Float128_99_f128, $extension_Float128_99_f128>;
	#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class T> inline constexpr auto _operator_div_not($extension_Float128_99_f128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Float128_99_f128;
	#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto _operator_div_not_eq($extension_Float128_99_f128 & $this , auto rhs)  -> typename $extension_Float128_99_f128&;
	#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class T> inline constexpr auto _operator_div_lt($extension_Float128_99_f128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Float128_99_f128;
	#line 112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto _operator_div_lt_eq($extension_Float128_99_f128 & $this , auto rhs)  -> typename $extension_Float128_99_f128&;
	#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class T> inline constexpr auto _operator_div_gt($extension_Float128_99_f128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Float128_99_f128;
	#line 116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto _operator_div_gt_eq($extension_Float128_99_f128 & $this , auto rhs)  -> typename $extension_Float128_99_f128&;
	#line 99 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Float128_99_f128, IDivisibleArithmetic, IDivisibleArithmetic, $extension_Float128_99_f128);
	} namespace System{
using $extensions::_operator_div_mod;
using $extensions::_operator_div_not;
using $extensions::_operator_div_not_eq;
using $extensions::_operator_div_lt;
using $extensions::_operator_div_lt_eq;
using $extensions::_operator_div_gt;
using $extensions::_operator_div_gt_eq;

		} namespace $extensions { using namespace System;
#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	using $extension_Float128_120_f128 = Builtin::f128;
	#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE(ISignedIntegerPowerArithmetic, ISignedIntegerPowerArithmetic);
	#line 122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto _operator_xor_xor($extension_Float128_120_f128 const& $this LIFETIMEBOUND, Builtin::i32 exp)  -> const typename $extension_Float128_120_f128;
	#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto _operator_xor_xor_eq($extension_Float128_120_f128 & $this , Builtin::i32 exp)  -> typename $extension_Float128_120_f128&;
	#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Float128_120_f128, ISignedIntegerPowerArithmetic, ISignedIntegerPowerArithmetic, $extension_Float128_120_f128);
	} namespace System{
using $extensions::_operator_xor_xor;
using $extensions::_operator_xor_xor_eq;

		} namespace $extensions { using namespace System;
#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	using $extension_Float128_161_f128 = Builtin::f128;
	#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE(INumberBase, INumberBase);
	#line 198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto MaxMagnitude($extension_Float128_161_f128 const& $this LIFETIMEBOUND, $extension_Float128_161_f128 rhs) noexcept -> const typename $extension_Float128_161_f128;
	#line 216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto MaxMagnitudeNumber($extension_Float128_161_f128 const& $this LIFETIMEBOUND, $extension_Float128_161_f128 rhs) noexcept -> const typename $extension_Float128_161_f128;
	#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto MinMagnitude($extension_Float128_161_f128 const& $this LIFETIMEBOUND, $extension_Float128_161_f128 rhs) noexcept -> const typename $extension_Float128_161_f128;
	#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto MinMagnitudeNumber($extension_Float128_161_f128 const& $this LIFETIMEBOUND, $extension_Float128_161_f128 rhs) noexcept -> const typename $extension_Float128_161_f128;
	#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto Parse($extension_Float128_161_f128 const& $this LIFETIMEBOUND, Builtin::Str input)  -> const typename $extension_Float128_161_f128;
	#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto TryParse($extension_Float128_161_f128 const& $this LIFETIMEBOUND, Builtin::Str input) noexcept -> const Builtin::Nullable<$extension_Float128_161_f128>;
	#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto NarrowToInt8($extension_Float128_161_f128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i8;
	#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto NarrowToUInt8($extension_Float128_161_f128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u8;
	#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto NarrowToInt16($extension_Float128_161_f128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i16;
	#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto NarrowToUInt16($extension_Float128_161_f128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u16;
	#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto NarrowToInt32($extension_Float128_161_f128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i32;
	#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto NarrowToUInt32($extension_Float128_161_f128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u32;
	#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto NarrowToInt64($extension_Float128_161_f128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i64;
	#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto NarrowToUInt64($extension_Float128_161_f128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u64;
	#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto NarrowToInt128($extension_Float128_161_f128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i128;
	#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto NarrowToUInt128($extension_Float128_161_f128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u128;
	#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto NarrowToIsize($extension_Float128_161_f128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::isize;
	#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto NarrowToUsize($extension_Float128_161_f128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::usize;
	#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct $static_getOne; template<> struct $static_getOne<$extension_Float128_161_f128> { static inline constexpr auto get() -> const $extension_Float128_161_f128; };
	#line 163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct $static_getZero; template<> struct $static_getZero<$extension_Float128_161_f128> { static inline constexpr auto get() -> const $extension_Float128_161_f128; };
	#line 164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct $static_getRadix; template<> struct $static_getRadix<$extension_Float128_161_f128> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getAbs($extension_Float128_161_f128 const& $this ) -> const $extension_Float128_161_f128;
	#line 172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsCanonical($extension_Float128_161_f128 const& $this ) -> const bool;
	#line 173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsComplexNumber($extension_Float128_161_f128 const& $this ) -> const bool;
	#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsEvenInteger($extension_Float128_161_f128 const& $this ) -> const bool;
	#line 175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsFinite($extension_Float128_161_f128 const& $this ) -> const bool;
	#line 176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsImaginaryNumber($extension_Float128_161_f128 const& $this ) -> const bool;
	#line 177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsInfinity($extension_Float128_161_f128 const& $this ) -> const bool;
	#line 178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsInteger($extension_Float128_161_f128 const& $this ) -> const bool;
	#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsNaN($extension_Float128_161_f128 const& $this ) -> const bool;
	#line 180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsNegative($extension_Float128_161_f128 const& $this ) -> const bool;
	#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsNegativeInfinity($extension_Float128_161_f128 const& $this ) -> const bool;
	#line 182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsNormal($extension_Float128_161_f128 const& $this ) -> const bool;
	#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsOddInteger($extension_Float128_161_f128 const& $this ) -> const bool;
	#line 188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsPositive($extension_Float128_161_f128 const& $this ) -> const bool;
	#line 189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsPositiveInfinity($extension_Float128_161_f128 const& $this ) -> const bool;
	#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsRealNumber($extension_Float128_161_f128 const& $this ) -> const bool;
	#line 191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsSubnormal($extension_Float128_161_f128 const& $this ) -> const bool;
	#line 196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsZero($extension_Float128_161_f128 const& $this ) -> const bool;
	#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Float128_161_f128, INumberBase, INumberBase, $extension_Float128_161_f128);
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
#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	using $extension_Float128_296_f128 = Builtin::f128;
	#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE(ISignedNumber, ISignedNumber);
	#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct $static_getMinusOne; template<> struct $static_getMinusOne<$extension_Float128_296_f128> { static inline constexpr auto get() -> const $extension_Float128_296_f128; };
	#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Float128_296_f128, ISignedNumber, ISignedNumber, $extension_Float128_296_f128);
	} namespace System{
using $extensions::$static_getMinusOne;

		} namespace $extensions { using namespace System;
#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	using $extension_Float128_300_f128 = Builtin::f128;
	#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE(INumber, INumber);
	#line 308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto CopySign($extension_Float128_300_f128 const& $this LIFETIMEBOUND, $extension_Float128_300_f128 sign) noexcept -> const typename $extension_Float128_300_f128;
	#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto Max($extension_Float128_300_f128 const& $this LIFETIMEBOUND, $extension_Float128_300_f128 rhs) noexcept -> const typename $extension_Float128_300_f128;
	#line 325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto MaxNumber($extension_Float128_300_f128 const& $this LIFETIMEBOUND, $extension_Float128_300_f128 rhs) noexcept -> const typename $extension_Float128_300_f128;
	#line 335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto Min($extension_Float128_300_f128 const& $this LIFETIMEBOUND, $extension_Float128_300_f128 rhs) noexcept -> const typename $extension_Float128_300_f128;
	#line 345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto MinNumber($extension_Float128_300_f128 const& $this LIFETIMEBOUND, $extension_Float128_300_f128 rhs) noexcept -> const typename $extension_Float128_300_f128;
	#line 355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto Clamp($extension_Float128_300_f128 const& $this LIFETIMEBOUND, $extension_Float128_300_f128 min, $extension_Float128_300_f128 max)  -> const typename $extension_Float128_300_f128;
	#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getSign($extension_Float128_300_f128 const& $this ) -> const Builtin::i32;
	#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Float128_300_f128, INumber, INumber, $extension_Float128_300_f128);
	} namespace System{
using $extensions::CopySign;
using $extensions::Max;
using $extensions::MaxNumber;
using $extensions::Min;
using $extensions::MinNumber;
using $extensions::Clamp;
using $extensions::getSign;

		} namespace $extensions { using namespace System;
#line 404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	using $extension_Float128_404_f128 = Builtin::f128;
	#line 404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE(IBinaryNumber, IBinaryNumber);
	#line 450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto Log($extension_Float128_404_f128 const& $this LIFETIMEBOUND, $extension_Float128_404_f128 base) noexcept -> const typename $extension_Float128_404_f128;
	#line 471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto Midpoint($extension_Float128_404_f128 const& $this LIFETIMEBOUND, $extension_Float128_404_f128 rhs) noexcept -> const typename $extension_Float128_404_f128;
	#line 483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto IsMultipleOf($extension_Float128_404_f128 const& $this LIFETIMEBOUND, $extension_Float128_404_f128 rhs) noexcept -> const bool;
	#line 406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct $static_getAllBitsSet; template<> struct $static_getAllBitsSet<$extension_Float128_404_f128> { static inline constexpr auto get() -> const $extension_Float128_404_f128; };
	#line 409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsPow2($extension_Float128_404_f128 const& $this ) -> const bool;
	#line 435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto getLog2($extension_Float128_404_f128 const& $this ) -> const $extension_Float128_404_f128;
	#line 442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto getLog10($extension_Float128_404_f128 const& $this ) -> const $extension_Float128_404_f128;
	#line 404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Float128_404_f128, IBinaryNumber, IBinaryNumber, $extension_Float128_404_f128);
	} namespace System{
using $extensions::Log;
using $extensions::Midpoint;
using $extensions::IsMultipleOf;
using $extensions::$static_getAllBitsSet;
using $extensions::getIsPow2;
using $extensions::getLog2;
using $extensions::getLog10;

		} namespace $extensions { using namespace System;
#line 497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	using $extension_Float128_497_f128 = Builtin::f128;
	#line 497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE(IFloatingPointConstants, IFloatingPointConstants);
	#line 499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct $static_getPi; template<> struct $static_getPi<$extension_Float128_497_f128> { static inline constexpr auto get() -> const $extension_Float128_497_f128; };
	#line 500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct $static_getE; template<> struct $static_getE<$extension_Float128_497_f128> { static inline constexpr auto get() -> const $extension_Float128_497_f128; };
	#line 501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct $static_getTau; template<> struct $static_getTau<$extension_Float128_497_f128> { static inline constexpr auto get() -> const $extension_Float128_497_f128; };
	#line 497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Float128_497_f128, IFloatingPointConstants, IFloatingPointConstants, $extension_Float128_497_f128);
	} namespace System{
using $extensions::$static_getPi;
using $extensions::$static_getE;
using $extensions::$static_getTau;

		} namespace $extensions { using namespace System;
#line 504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	using $extension_Float128_504_f128 = Builtin::f128;
	#line 504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE(IFloatingPoint, IFloatingPoint);
	#line 539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto CeilToInt32($extension_Float128_504_f128 const& $this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto CeilToInt64($extension_Float128_504_f128 const& $this LIFETIMEBOUND)  -> const Builtin::i64;
	#line 541 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto CeilToInt128($extension_Float128_504_f128 const& $this LIFETIMEBOUND)  -> const Builtin::i128;
	#line 573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto FloorToInt32($extension_Float128_504_f128 const& $this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto FloorToInt64($extension_Float128_504_f128 const& $this LIFETIMEBOUND)  -> const Builtin::i64;
	#line 575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto FloorToInt128($extension_Float128_504_f128 const& $this LIFETIMEBOUND)  -> const Builtin::i128;
	#line 608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto TruncateToInt32($extension_Float128_504_f128 const& $this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto TruncateToInt64($extension_Float128_504_f128 const& $this LIFETIMEBOUND)  -> const Builtin::i64;
	#line 610 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto TruncateToInt128($extension_Float128_504_f128 const& $this LIFETIMEBOUND)  -> const Builtin::i128;
	#line 621 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto RoundToInt32($extension_Float128_504_f128 const& $this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 622 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto RoundToInt64($extension_Float128_504_f128 const& $this LIFETIMEBOUND)  -> const Builtin::i64;
	#line 623 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto RoundToInt128($extension_Float128_504_f128 const& $this LIFETIMEBOUND)  -> const Builtin::i128;
	#line 691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto RoundTiesEvenToInt32($extension_Float128_504_f128 const& $this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 692 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto RoundTiesEvenToInt64($extension_Float128_504_f128 const& $this LIFETIMEBOUND)  -> const Builtin::i64;
	#line 693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto RoundTiesEvenToInt128($extension_Float128_504_f128 const& $this LIFETIMEBOUND)  -> const Builtin::i128;
	#line 695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto Round($extension_Float128_504_f128 const& $this LIFETIMEBOUND, Builtin::u32 digits)  -> const typename $extension_Float128_504_f128;
	#line 696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto Round($extension_Float128_504_f128 const& $this LIFETIMEBOUND, MidpointRounding rounding)  -> const typename $extension_Float128_504_f128;
	#line 697 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto Round($extension_Float128_504_f128 const& $this LIFETIMEBOUND, Builtin::u32 digits, MidpointRounding rounding)  -> const typename $extension_Float128_504_f128;
	#line 507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getFractionalPart($extension_Float128_504_f128 const& $this ) -> const $extension_Float128_504_f128;
	#line 512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getCeil($extension_Float128_504_f128 const& $this ) -> const $extension_Float128_504_f128;
	#line 546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getFloor($extension_Float128_504_f128 const& $this ) -> const $extension_Float128_504_f128;
	#line 580 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getTruncate($extension_Float128_504_f128 const& $this ) -> const $extension_Float128_504_f128;
	#line 615 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getRound($extension_Float128_504_f128 const& $this ) -> const $extension_Float128_504_f128;
	#line 628 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getRoundTiesEven($extension_Float128_504_f128 const& $this ) -> const $extension_Float128_504_f128;
	#line 764 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getExponentByteCount($extension_Float128_504_f128 const& $this ) -> const Builtin::u32;
	#line 765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getExponentShortestBitLength($extension_Float128_504_f128 const& $this ) -> const Builtin::u32;
	#line 774 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getSignificandBitLength($extension_Float128_504_f128 const& $this ) -> const Builtin::u32;
	#line 775 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getSignificandByteCount($extension_Float128_504_f128 const& $this ) -> const Builtin::u32;
	#line 504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Float128_504_f128, IFloatingPoint, IFloatingPoint, $extension_Float128_504_f128);
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
#line 779 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	using $extension_Float128_779_f128 = Builtin::f128;
	#line 779 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE(IPowerArithmetic, IPowerArithmetic);
	#line 780 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto _operator_mul_mul($extension_Float128_779_f128 const& $this LIFETIMEBOUND, $extension_Float128_779_f128 exp)  -> const typename $extension_Float128_779_f128;
	#line 784 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto _operator_mul_mul_eq($extension_Float128_779_f128 & $this , $extension_Float128_779_f128 exp) noexcept -> typename $extension_Float128_779_f128&;
	#line 779 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Float128_779_f128, IPowerArithmetic, IPowerArithmetic, $extension_Float128_779_f128);
	} namespace System{
using $extensions::_operator_mul_mul;
using $extensions::_operator_mul_mul_eq;

		} namespace $extensions { using namespace System;
#line 787 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	using $extension_Float128_787_f128 = Builtin::f128;
	#line 787 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE(IExponentialFunctions, IExponentialFunctions);
	#line 789 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto getExp($extension_Float128_787_f128 const& $this ) -> const $extension_Float128_787_f128;
	#line 794 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto getExp2($extension_Float128_787_f128 const& $this ) -> const $extension_Float128_787_f128;
	#line 799 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto getExp10($extension_Float128_787_f128 const& $this ) -> const $extension_Float128_787_f128;
	#line 804 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto getExpM1($extension_Float128_787_f128 const& $this ) -> const $extension_Float128_787_f128;
	#line 809 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getExp2M1($extension_Float128_787_f128 const& $this ) -> const $extension_Float128_787_f128;
	#line 811 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getExp10M1($extension_Float128_787_f128 const& $this ) -> const $extension_Float128_787_f128;
	#line 787 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Float128_787_f128, IExponentialFunctions, IExponentialFunctions, $extension_Float128_787_f128);
	} namespace System{
using $extensions::getExp;
using $extensions::getExp2;
using $extensions::getExp10;
using $extensions::getExpM1;
using $extensions::getExp2M1;
using $extensions::getExp10M1;

		} namespace $extensions { using namespace System;
#line 814 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	using $extension_Float128_814_f128 = Builtin::f128;
	#line 814 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE(ILogarithmicFunctions, ILogarithmicFunctions);
	#line 816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto getLn($extension_Float128_814_f128 const& $this ) -> const $extension_Float128_814_f128;
	#line 821 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto getLnP1($extension_Float128_814_f128 const& $this ) -> const $extension_Float128_814_f128;
	#line 826 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getLog2P1($extension_Float128_814_f128 const& $this ) -> const $extension_Float128_814_f128;
	#line 828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getLog10P1($extension_Float128_814_f128 const& $this ) -> const $extension_Float128_814_f128;
	#line 814 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Float128_814_f128, ILogarithmicFunctions, ILogarithmicFunctions, $extension_Float128_814_f128);
	} namespace System{
using $extensions::getLn;
using $extensions::getLnP1;
using $extensions::getLog2P1;
using $extensions::getLog10P1;

		} namespace $extensions { using namespace System;
#line 831 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	using $extension_Float128_831_f128 = Builtin::f128;
	#line 831 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE(IRootFunctions, IRootFunctions);
	#line 1055 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto Root($extension_Float128_831_f128 const& $this LIFETIMEBOUND, Builtin::i32 n)  -> const typename $extension_Float128_831_f128;
	#line 1128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto Hypot($extension_Float128_831_f128 const& $this LIFETIMEBOUND, $extension_Float128_831_f128 y)  -> const typename $extension_Float128_831_f128;
	#line 833 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto getSqrt($extension_Float128_831_f128 const& $this ) -> const $extension_Float128_831_f128;
	#line 994 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto getCbrt($extension_Float128_831_f128 const& $this ) -> const $extension_Float128_831_f128;
	#line 831 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Float128_831_f128, IRootFunctions, IRootFunctions, $extension_Float128_831_f128);
	} namespace System{
using $extensions::Root;
using $extensions::Hypot;
using $extensions::getSqrt;
using $extensions::getCbrt;

		} namespace $extensions { using namespace System;
#line 1182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	using $extension_Float128_1182_f128 = Builtin::f128;
	#line 1182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE(ITrigonometricFunctions, ITrigonometricFunctions);
	#line 1266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToRadians($extension_Float128_1182_f128 const& $this LIFETIMEBOUND) noexcept -> const typename $extension_Float128_1182_f128;
	#line 1268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToDegrees($extension_Float128_1182_f128 const& $this LIFETIMEBOUND) noexcept -> const typename $extension_Float128_1182_f128;
	#line 1184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto getSin($extension_Float128_1182_f128 const& $this ) -> const $extension_Float128_1182_f128;
	#line 1188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto getCos($extension_Float128_1182_f128 const& $this ) -> const $extension_Float128_1182_f128;
	#line 1192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto getTan($extension_Float128_1182_f128 const& $this ) -> const $extension_Float128_1182_f128;
	#line 1196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getCot($extension_Float128_1182_f128 const& $this ) -> const $extension_Float128_1182_f128;
	#line 1198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getSec($extension_Float128_1182_f128 const& $this ) -> const $extension_Float128_1182_f128;
	#line 1200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getCsc($extension_Float128_1182_f128 const& $this ) -> const $extension_Float128_1182_f128;
	#line 1202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto getAsin($extension_Float128_1182_f128 const& $this ) -> const $extension_Float128_1182_f128;
	#line 1206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto getAcos($extension_Float128_1182_f128 const& $this ) -> const $extension_Float128_1182_f128;
	#line 1210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto getAtan($extension_Float128_1182_f128 const& $this ) -> const $extension_Float128_1182_f128;
	#line 1214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto getAcot($extension_Float128_1182_f128 const& $this ) -> const $extension_Float128_1182_f128;
	#line 1218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto getAsec($extension_Float128_1182_f128 const& $this ) -> const $extension_Float128_1182_f128;
	#line 1222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto getAcsc($extension_Float128_1182_f128 const& $this ) -> const $extension_Float128_1182_f128;
	#line 1226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto getSinCos($extension_Float128_1182_f128 const& $this ) -> const Builtin::Tuple<$extension_Float128_1182_f128, $extension_Float128_1182_f128>;
	#line 1230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto getSinPi($extension_Float128_1182_f128 const& $this ) -> const $extension_Float128_1182_f128;
	#line 1234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto getCosPi($extension_Float128_1182_f128 const& $this ) -> const $extension_Float128_1182_f128;
	#line 1238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto getSinCosPi($extension_Float128_1182_f128 const& $this ) -> const Builtin::Tuple<$extension_Float128_1182_f128, $extension_Float128_1182_f128>;
	#line 1243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto getTanPi($extension_Float128_1182_f128 const& $this ) -> const $extension_Float128_1182_f128;
	#line 1247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getCotPi($extension_Float128_1182_f128 const& $this ) -> const $extension_Float128_1182_f128;
	#line 1249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getSecPi($extension_Float128_1182_f128 const& $this ) -> const $extension_Float128_1182_f128;
	#line 1251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getCscPi($extension_Float128_1182_f128 const& $this ) -> const $extension_Float128_1182_f128;
	#line 1253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getAsinPi($extension_Float128_1182_f128 const& $this ) -> const $extension_Float128_1182_f128;
	#line 1255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getAcosPi($extension_Float128_1182_f128 const& $this ) -> const $extension_Float128_1182_f128;
	#line 1257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getAtanPi($extension_Float128_1182_f128 const& $this ) -> const $extension_Float128_1182_f128;
	#line 1259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getAcotPi($extension_Float128_1182_f128 const& $this ) -> const $extension_Float128_1182_f128;
	#line 1261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getAsecPi($extension_Float128_1182_f128 const& $this ) -> const $extension_Float128_1182_f128;
	#line 1263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getAcscPi($extension_Float128_1182_f128 const& $this ) -> const $extension_Float128_1182_f128;
	#line 1182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Float128_1182_f128, ITrigonometricFunctions, ITrigonometricFunctions, $extension_Float128_1182_f128);
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
#line 1271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	using $extension_Float128_1271_f128 = Builtin::f128;
	#line 1271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE(IHyperbolicFunctions, IHyperbolicFunctions);
	#line 1273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto getAcosh($extension_Float128_1271_f128 const& $this ) -> const $extension_Float128_1271_f128;
	#line 1299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getAcoth($extension_Float128_1271_f128 const& $this ) -> const $extension_Float128_1271_f128;
	#line 1301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getAcsch($extension_Float128_1271_f128 const& $this ) -> const $extension_Float128_1271_f128;
	#line 1303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getAsech($extension_Float128_1271_f128 const& $this ) -> const $extension_Float128_1271_f128;
	#line 1305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto getAsinh($extension_Float128_1271_f128 const& $this ) -> const $extension_Float128_1271_f128;
	#line 1325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto getAtanh($extension_Float128_1271_f128 const& $this ) -> const $extension_Float128_1271_f128;
	#line 1342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto getCosh($extension_Float128_1271_f128 const& $this ) -> const $extension_Float128_1271_f128;
	#line 1366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getCoth($extension_Float128_1271_f128 const& $this ) -> const $extension_Float128_1271_f128;
	#line 1368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getCsch($extension_Float128_1271_f128 const& $this ) -> const $extension_Float128_1271_f128;
	#line 1370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getSech($extension_Float128_1271_f128 const& $this ) -> const $extension_Float128_1271_f128;
	#line 1372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto getSinh($extension_Float128_1271_f128 const& $this ) -> const $extension_Float128_1271_f128;
	#line 1399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto getTanh($extension_Float128_1271_f128 const& $this ) -> const $extension_Float128_1271_f128;
	#line 1271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Float128_1271_f128, IHyperbolicFunctions, IHyperbolicFunctions, $extension_Float128_1271_f128);
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
#line 1425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	using $extension_Float128_1425_f128 = Builtin::f128;
	#line 1425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE(IBinaryFloatingPointIeee754, IBinaryFloatingPointIeee754);
	#line 1433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto Atan2($extension_Float128_1425_f128 const& $this LIFETIMEBOUND, $extension_Float128_1425_f128 y)  -> const typename $extension_Float128_1425_f128;
	#line 1437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto Atan2Pi($extension_Float128_1425_f128 const& $this LIFETIMEBOUND, $extension_Float128_1425_f128 y)  -> const typename $extension_Float128_1425_f128;
	#line 1540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto FusedMultiplyAdd($extension_Float128_1425_f128 const& $this LIFETIMEBOUND, $extension_Float128_1425_f128 rhs, $extension_Float128_1425_f128 addend)  -> const typename $extension_Float128_1425_f128;
	#line 1861 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto Ieee754Remainder($extension_Float128_1425_f128 const& $this LIFETIMEBOUND, $extension_Float128_1425_f128 rhs)  -> const typename $extension_Float128_1425_f128;
	#line 1986 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto Lerp($extension_Float128_1425_f128 const& $this LIFETIMEBOUND, $extension_Float128_1425_f128 end, $extension_Float128_1425_f128 amount) noexcept -> const typename $extension_Float128_1425_f128;
	#line 1988 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto ScaleB($extension_Float128_1425_f128 const& $this LIFETIMEBOUND, Builtin::i32 n)  -> const typename $extension_Float128_1425_f128;
	#line 1426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct $static_getEpsilon; template<> struct $static_getEpsilon<$extension_Float128_1425_f128> { static inline constexpr auto get() -> const $extension_Float128_1425_f128; };
	#line 1427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct $static_getNegativeInfinity; template<> struct $static_getNegativeInfinity<$extension_Float128_1425_f128> { static inline constexpr auto get() -> const $extension_Float128_1425_f128; };
	#line 1428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct $static_getPositiveInfinity; template<> struct $static_getPositiveInfinity<$extension_Float128_1425_f128> { static inline constexpr auto get() -> const $extension_Float128_1425_f128; };
	#line 1429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct $static_getNaN; template<> struct $static_getNaN<$extension_Float128_1425_f128> { static inline constexpr auto get() -> const $extension_Float128_1425_f128; };
	#line 1430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct $static_getNegativeZero; template<> struct $static_getNegativeZero<$extension_Float128_1425_f128> { static inline constexpr auto get() -> const $extension_Float128_1425_f128; };
	#line 1445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getBitIncrement($extension_Float128_1425_f128 const& $this ) -> const $extension_Float128_1425_f128;
	#line 1474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getBitDecrement($extension_Float128_1425_f128 const& $this ) -> const $extension_Float128_1425_f128;
	#line 1498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getILogB($extension_Float128_1425_f128 const& $this ) -> const Builtin::i32;
	#line 1517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getReciprocalEstimate($extension_Float128_1425_f128 const& $this ) -> const $extension_Float128_1425_f128;
	#line 1521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getReciprocalSqrtEstimate($extension_Float128_1425_f128 const& $this ) -> const $extension_Float128_1425_f128;
	#line 1524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getCategory($extension_Float128_1425_f128 const& $this ) -> const FloatingPointCategory;
	#line 2030 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getGamma($extension_Float128_1425_f128 const& $this ) -> const $extension_Float128_1425_f128;
	#line 2032 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getLnGamma($extension_Float128_1425_f128 const& $this ) -> const $extension_Float128_1425_f128;
	#line 2034 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getErf($extension_Float128_1425_f128 const& $this ) -> const $extension_Float128_1425_f128;
	#line 2036 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getErfc($extension_Float128_1425_f128 const& $this ) -> const $extension_Float128_1425_f128;
	#line 1425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Float128_1425_f128, IBinaryFloatingPointIeee754, IBinaryFloatingPointIeee754, $extension_Float128_1425_f128);
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
#line 2039 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	using $extension_Float128_2039_f128 = Builtin::f128;
	#line 2039 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE(IBinaryFloatFormatInfo, IBinaryFloatFormatInfo);
	#line 2040 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct $static_getNumberBufferLength; template<> struct $static_getNumberBufferLength<$extension_Float128_2039_f128> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 2041 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct $static_getZeroBits; template<> struct $static_getZeroBits<$extension_Float128_2039_f128> { static inline constexpr auto get() -> const Builtin::u128; };
	#line 2042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct $static_getInfinityBits; template<> struct $static_getInfinityBits<$extension_Float128_2039_f128> { static inline constexpr auto get() -> const Builtin::u128; };
	#line 2043 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct $static_getNormalMantissaMask; template<> struct $static_getNormalMantissaMask<$extension_Float128_2039_f128> { static inline constexpr auto get() -> const Builtin::u128; };
	#line 2044 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct $static_getDenormalMantissaMask; template<> struct $static_getDenormalMantissaMask<$extension_Float128_2039_f128> { static inline constexpr auto get() -> const Builtin::u128; };
	#line 2045 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct $static_getMinBinaryExponent; template<> struct $static_getMinBinaryExponent<$extension_Float128_2039_f128> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 2046 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct $static_getMaxBinaryExponent; template<> struct $static_getMaxBinaryExponent<$extension_Float128_2039_f128> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 2047 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct $static_getMinDecimalExponent; template<> struct $static_getMinDecimalExponent<$extension_Float128_2039_f128> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 2048 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct $static_getMaxDecimalExponent; template<> struct $static_getMaxDecimalExponent<$extension_Float128_2039_f128> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 2049 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct $static_getExponentBias; template<> struct $static_getExponentBias<$extension_Float128_2039_f128> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 2050 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct $static_getExponentBits; template<> struct $static_getExponentBits<$extension_Float128_2039_f128> { static inline constexpr auto get() -> const Builtin::u128; };
	#line 2051 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct $static_getOverflowDecimalExponent; template<> struct $static_getOverflowDecimalExponent<$extension_Float128_2039_f128> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 2052 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct $static_getInfinityExponent; template<> struct $static_getInfinityExponent<$extension_Float128_2039_f128> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 2053 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct $static_getNormalMantissaBits; template<> struct $static_getNormalMantissaBits<$extension_Float128_2039_f128> { static inline constexpr auto get() -> const Builtin::u16; };
	#line 2054 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct $static_getDenormalMantissaBits; template<> struct $static_getDenormalMantissaBits<$extension_Float128_2039_f128> { static inline constexpr auto get() -> const Builtin::u16; };
	#line 2055 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct $static_getMinFastFloatDecimalExponent; template<> struct $static_getMinFastFloatDecimalExponent<$extension_Float128_2039_f128> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 2056 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct $static_getMaxFastFloatDecimalExponent; template<> struct $static_getMaxFastFloatDecimalExponent<$extension_Float128_2039_f128> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 2057 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct $static_getMinExponentRoundToEven; template<> struct $static_getMinExponentRoundToEven<$extension_Float128_2039_f128> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 2058 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct $static_getMaxExponentRoundToEven; template<> struct $static_getMaxExponentRoundToEven<$extension_Float128_2039_f128> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 2059 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct $static_getMaxExponentFastPath; template<> struct $static_getMaxExponentFastPath<$extension_Float128_2039_f128> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 2060 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct $static_getMaxMantissaFastPath; template<> struct $static_getMaxMantissaFastPath<$extension_Float128_2039_f128> { static inline constexpr auto get() -> const Builtin::u128; };
	#line 2039 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Float128_2039_f128, IBinaryFloatFormatInfo, IBinaryFloatFormatInfo, $extension_Float128_2039_f128);
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
#line 392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	namespace __Float128$Protected { inline constexpr auto BiasedExponent(Builtin::f128 value) noexcept -> const Builtin::u16; }
#line 393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	namespace __Float128$Protected { inline constexpr auto Exponent(Builtin::f128 value) noexcept -> const Builtin::i16; }
#line 394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	namespace __Float128$Protected { inline constexpr auto Significand(Builtin::f128 value) noexcept -> const Builtin::u128; }
#line 395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	namespace __Float128$Protected { inline constexpr auto TrailingSignificand(Builtin::f128 value) noexcept -> const Builtin::u128; }
#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	namespace __Float128$Protected { inline constexpr auto ExtractBiasedExponentFromBits(Builtin::u128 bits) noexcept -> const Builtin::u16; }
#line 398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	namespace __Float128$Protected { inline constexpr auto ExtractTrailingSignificandFromBits(Builtin::u128 bits) noexcept -> const Builtin::u128; }
#line 400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	namespace __Float128$Protected { inline constexpr auto PackBits(bool sign, Builtin::u16 exponent, Builtin::u128 mantissa) noexcept -> const Builtin::u128; }
//###############################################################################
//# Global compile-time constants
//###############################################################################
#line 366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
namespace __Float128$Protected { inline constexpr auto SignMask = Builtin::ParseUInt128("0x80000000000000000000000000000000"); }
#line 367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
namespace __Float128$Protected { inline constexpr auto SignShift = Builtin::i32(127); }
#line 368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
namespace __Float128$Protected { inline constexpr Builtin::u8 ShiftedSignMask = Builtin::u8{__Float128$Protected::SignMask >> __Float128$Protected::SignShift}; }
#line 370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
namespace __Float128$Protected { inline constexpr auto BiasedExponentMask = Builtin::ParseUInt128("0x7FFF0000000000000000000000000000"); }
#line 371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
namespace __Float128$Protected { inline constexpr auto BiasedExponentShift = Builtin::i32(112); }
#line 372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
namespace __Float128$Protected { inline constexpr Builtin::u16 ShiftedBiasedExponentMask = Builtin::u16{__Float128$Protected::BiasedExponentMask >> __Float128$Protected::BiasedExponentShift}; }
#line 374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
namespace __Float128$Protected { inline constexpr auto TrailingSignificandMask = Builtin::ParseUInt128("0x0000FFFFFFFFFFFFFFFFFFFFFFFFFFFF"); }
#line 377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
namespace __Float128$Protected { inline constexpr auto MinSign = Builtin::u8(0U); }
#line 378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
namespace __Float128$Protected { inline constexpr auto MaxSign = Builtin::u8(1U); }
#line 379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
namespace __Float128$Protected { inline constexpr auto MinBiasedExponent = ADV_USPCS(MinValue, Builtin::u16)(); }
#line 380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
namespace __Float128$Protected { inline constexpr auto MaxBiasedExponent = Builtin::u16(0x7FFFU); }
#line 381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
namespace __Float128$Protected { inline constexpr auto ExpBias = Builtin::u16(16383U); }
#line 382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
namespace __Float128$Protected { inline constexpr auto MinExponent = Builtin::i16(-16382); }
#line 383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
namespace __Float128$Protected { inline constexpr auto MaxExponent = +Builtin::i16(16383); }
#line 384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
namespace __Float128$Protected { inline constexpr auto MinTrailingSignificand = ADV_USPCS(MinValue, Builtin::u128)(); }
#line 385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
namespace __Float128$Protected { inline constexpr auto MaxTrailingSignificand = Builtin::ParseUInt128("0x0000FFFFFFFFFFFFFFFFFFFFFFFFFFFF"); }
#line 387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
namespace __Float128$Protected { inline constexpr auto TrailingSignificandLength = Builtin::i32(112); }
#line 388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
namespace __Float128$Protected { inline constexpr auto SignificandLength = __Float128$Protected::TrailingSignificandLength + Builtin::i32(1); }
#line 390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
namespace __Float128$Protected { inline constexpr auto RoundingEpsilon = Builtin::BitCast<Builtin::f128>(Builtin::ParseUInt128("0x406F0000000000000000000000000000")); }
//###############################################################################
//# Global variable declarations
//###############################################################################
#line 375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
namespace __Float128$Protected { extern ASTRUMSTD_HIDDEN const decltype(Builtin::u128(1ULL) << __Float128$Protected::BiasedExponentShift) HiddenBit; }
} namespace $extensions {
template<class __TT> struct $static_AwayFromZero;
template<class __TT> struct $static_getAwayFromZero;
template<class __TT> struct $static_Log2;
template<class __TT> struct $static_getLog2;
template<class __TT> struct $static_BitDecrement;
template<class __TT> struct $static_getBitDecrement;
template<class __TT> struct $static_Bits;
template<class __TT> struct $static_getBits;
template<class __TT> struct $static_FromBits;
template<class __TT> struct $static_getFromBits;
template<class __TT> struct $static_HashCode;
template<class __TT> struct $static_getHashCode;
template<class __TT> struct $static_IsCanonical;
template<class __TT> struct $static_getIsCanonical;
template<class __TT> struct $static_Atanh;
template<class __TT> struct $static_getAtanh;
template<class __TT> struct $static_IsInteger;
template<class __TT> struct $static_getIsInteger;
template<class __TT> struct $static_Abs;
template<class __TT> struct $static_getAbs;
template<class __TT> struct $static_IsFinite;
template<class __TT> struct $static_getIsFinite;
template<class __TT> struct $static_CosPi;
template<class __TT> struct $static_getCosPi;
template<class __TT> struct $static_ToFloat32;
template<class __TT> struct $static_getToFloat32;
template<class __TT> struct $static_Truncate;
template<class __TT> struct $static_getTruncate;
template<class __TT> struct $static_PositiveInfinity;
template<class __TT> struct $static_getPositiveInfinity;
template<class __TT> struct $static_NegativeInfinity;
template<class __TT> struct $static_getNegativeInfinity;
template<class __TT> struct $static_TanPi;
template<class __TT> struct $static_getTanPi;
template<class __TT> struct $static_Zero;
template<class __TT> struct $static_getZero;
template<class __TT> struct $static_IsNaN;
template<class __TT> struct $static_getIsNaN;
template<class __TT> struct $static_ExpM1;
template<class __TT> struct $static_getExpM1;
template<class __TT> struct $static_IsNegativeInfinity;
template<class __TT> struct $static_getIsNegativeInfinity;
template<class __TT> struct $static_SinPi;
template<class __TT> struct $static_getSinPi;
template<class __TT> struct $static_Asinh;
template<class __TT> struct $static_getAsinh;
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
template<class __TT> struct $static_NarrowToInt128;
template<class __TT> struct $static_getNarrowToInt128;
template<class __TT> struct $static_Ln;
template<class __TT> struct $static_getLn;
template<class __TT> struct $static_Atan;
template<class __TT> struct $static_getAtan;
template<class __TT> struct $static_PopCount;
template<class __TT> struct $static_getPopCount;
template<class __TT> struct $static_IsNegative;
template<class __TT> struct $static_getIsNegative;
template<class __TT> struct $static_Low64;
template<class __TT> struct $static_getLow64;
template<class __TT> struct $static_IsZero;
template<class __TT> struct $static_getIsZero;
template<class __TT> struct $static_Exp;
template<class __TT> struct $static_getExp;
template<class __TT> struct $static_IsRealNumber;
template<class __TT> struct $static_getIsRealNumber;
template<class __TT> struct $static_NegativeZero;
template<class __TT> struct $static_getNegativeZero;
template<class __TT> struct $static_One;
template<class __TT> struct $static_getOne;
template<class __TT> struct $static_CopySign;
template<class __TT> struct $static_getCopySign;
template<class __TT> struct $static_erfcl;
template<class __TT> struct $static_geterfcl;
template<class __TT> struct $static_Sinh;
template<class __TT> struct $static_getSinh;
template<class __TT> struct $static_Acos;
template<class __TT> struct $static_getAcos;
template<class __TT> struct $static_High64;
template<class __TT> struct $static_getHigh64;
template<class __TT> struct $static_NaN;
template<class __TT> struct $static_getNaN;
template<class __TT> struct $static_BitWidth;
template<class __TT> struct $static_getBitWidth;
template<class __TT> struct $static_LeadingZeroCount;
template<class __TT> struct $static_getLeadingZeroCount;
template<class __TT> struct $static_Exp2;
template<class __TT> struct $static_getExp2;
template<class __TT> struct $static_Exp10;
template<class __TT> struct $static_getExp10;
template<class __TT> struct $static_NarrowToInt32;
template<class __TT> struct $static_getNarrowToInt32;
template<class __TT> struct $static_Tanh;
template<class __TT> struct $static_getTanh;
template<class __TT> struct $static_Log10;
template<class __TT> struct $static_getLog10;
template<class __TT> struct $static_NarrowToUInt128;
template<class __TT> struct $static_getNarrowToUInt128;
template<class __TT> struct $static_NarrowToUInt32;
template<class __TT> struct $static_getNarrowToUInt32;
template<class __TT> struct $static_LnP1;
template<class __TT> struct $static_getLnP1;
template<class __TT> struct $static_NarrowToUInt16;
template<class __TT> struct $static_getNarrowToUInt16;
template<class __TT> struct $static_Cosh;
template<class __TT> struct $static_getCosh;
template<class __TT> struct $static_Cos;
template<class __TT> struct $static_getCos;
template<class __TT> struct $static_ToFloat64;
template<class __TT> struct $static_getToFloat64;
template<class __TT> struct $static_ReciprocalEstimate;
template<class __TT> struct $static_getReciprocalEstimate;
template<class __TT> struct $static_Tan;
template<class __TT> struct $static_getTan;
template<class __TT> struct $static_Sin;
template<class __TT> struct $static_getSin;
template<class __TT> struct $static_Pi;
template<class __TT> struct $static_getPi;
template<class __TT> struct $static_IsSubnormal;
template<class __TT> struct $static_getIsSubnormal;
template<class __TT> struct $static_Asec;
template<class __TT> struct $static_getAsec;
template<class __TT> struct $static_Acsc;
template<class __TT> struct $static_getAcsc;
template<class __TT> struct $static_Sqrt;
template<class __TT> struct $static_getSqrt;
template<class __TT> struct $static_Acosh;
template<class __TT> struct $static_getAcosh;
template<class __TT> struct $static_Epsilon;
template<class __TT> struct $static_getEpsilon;
template<class __TT> struct $static_IsInfinity;
template<class __TT> struct $static_getIsInfinity;
template<class __TT> struct $static_Infinity;
template<class __TT> struct $static_getInfinity;
template<class __TT> struct $static_Subnormal;
template<class __TT> struct $static_getSubnormal;
template<class __TT> struct $static_Normal;
template<class __TT> struct $static_getNormal;
template<class __TT> struct $static_tgammal;
template<class __TT> struct $static_gettgammal;
template<class __TT> struct $static_lgammal;
template<class __TT> struct $static_getlgammal;
template<class __TT> struct $static_erfl;
template<class __TT> struct $static_geterfl;
template<class __TT> struct $static_Round;
template<class __TT> struct $static_getRound;
template<class __TT> struct $static_Floor;
template<class __TT> struct $static_getFloor;
template<class __TT> struct $static_Ceil;
template<class __TT> struct $static_getCeil;
template<class __TT> struct $static_RoundTiesEven;
template<class __TT> struct $static_getRoundTiesEven;
template<class __TT> struct $static_InvalidArgumentException;
template<class __TT> struct $static_getInvalidArgumentException;
template<class __TT> struct $static_IsOddInteger;
template<class __TT> struct $static_getIsOddInteger;
template<class __TT> struct $static_IsEvenInteger;
template<class __TT> struct $static_getIsEvenInteger;
template<class __TT> struct $static_Cbrt;
template<class __TT> struct $static_getCbrt;
template<class __TT> struct $static_Atan2;
template<class __TT> struct $static_getAtan2;
template<class __TT> struct $static_NarrowToInt16;
template<class __TT> struct $static_getNarrowToInt16;
template<class __TT> struct $static_CarryingAdd;
template<class __TT> struct $static_getCarryingAdd;
template<class __TT> struct $static_BorrowingSub;
template<class __TT> struct $static_getBorrowingSub;
template<class __TT> struct $static_ReciprocalApproximate;
template<class __TT> struct $static_getReciprocalApproximate;
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
template<class __TT> struct $static_ToUsize;
template<class __TT> struct $static_getToUsize;
template<class __TT> struct $static_IsComplexNumber;
template<class __TT> struct $static_getIsComplexNumber;
template<class __TT> struct $static_IsImaginaryNumber;
template<class __TT> struct $static_getIsImaginaryNumber;
template<class __TT> struct $static_IsPositive;
template<class __TT> struct $static_getIsPositive;
template<class __TT> struct $static_MaxMagnitude;
template<class __TT> struct $static_getMaxMagnitude;
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
template<class __TT> struct $static_Midpoint;
template<class __TT> struct $static_getMidpoint;
template<class __TT> struct $static_IsMultipleOf;
template<class __TT> struct $static_getIsMultipleOf;
template<class __TT> struct $static_RoundToInt32;
template<class __TT> struct $static_getRoundToInt32;
template<class __TT> struct $static_RoundTiesEvenToInt32;
template<class __TT> struct $static_getRoundTiesEvenToInt32;
template<class __TT> struct $static_ToEven;
template<class __TT> struct $static_getToEven;
template<class __TT> struct $static_E;
template<class __TT> struct $static_getE;
template<class __TT> struct $static_Log;
template<class __TT> struct $static_getLog;
template<class __TT> struct $static_FusedMultiplyAdd;
template<class __TT> struct $static_getFusedMultiplyAdd;
template<class __TT> struct $static_Lerp;
template<class __TT> struct $static_getLerp;
} namespace System {
//###############################################################################
//# Function definitions
//###############################################################################

namespace __Float128$Protected {
		#line 392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		inline constexpr auto BiasedExponent(Builtin::f128 value) noexcept -> const Builtin::u16
		{
			#line 392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			ADV_EXPRESSION_BODY(__Float128$Protected::ExtractBiasedExponentFromBits(ADV_UPCS(Bits)(value.$ref()))); 
		}
	}
namespace __Float128$Protected {
		#line 393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		inline constexpr auto Exponent(Builtin::f128 value) noexcept -> const Builtin::i16
		{
			#line 393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			ADV_EXPRESSION_BODY(Builtin::i16{__Float128$Protected::BiasedExponent(value)} - __Float128$Protected::ExpBias); 
		}
	}
namespace __Float128$Protected {
		#line 394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		inline constexpr auto Significand(Builtin::f128 value) noexcept -> const Builtin::u128
		{
			#line 394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			ADV_EXPRESSION_BODY(__Float128$Protected::TrailingSignificand(value) | (__Float128$Protected::BiasedExponent(value) != Builtin::i32(0) ? (Builtin::u128(1ULL) << __Float128$Protected::BiasedExponentShift) : Builtin::u128(0ULL))); 
		}
	}
namespace __Float128$Protected {
		#line 395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		inline constexpr auto TrailingSignificand(Builtin::f128 value) noexcept -> const Builtin::u128
		{
			#line 395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			ADV_EXPRESSION_BODY(__Float128$Protected::ExtractTrailingSignificandFromBits(ADV_UPCS(Bits)(value.$ref()))); 
		}
	}
namespace __Float128$Protected {
		#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		inline constexpr auto ExtractBiasedExponentFromBits(Builtin::u128 bits) noexcept -> const Builtin::u16
		{
			#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			ADV_EXPRESSION_BODY(Builtin::u16{(bits >> __Float128$Protected::BiasedExponentShift) & __Float128$Protected::ShiftedBiasedExponentMask}); 
		}
	}
namespace __Float128$Protected {
		#line 398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		inline constexpr auto ExtractTrailingSignificandFromBits(Builtin::u128 bits) noexcept -> const Builtin::u128
		{
			#line 398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			ADV_EXPRESSION_BODY(bits & __Float128$Protected::TrailingSignificandMask); 
		}
	}
namespace __Float128$Protected {
		#line 400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		inline constexpr auto PackBits(bool sign, Builtin::u16 exponent, Builtin::u128 mantissa) noexcept -> const Builtin::u128
		{
			#line 401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			ADV_EXPRESSION_BODY(((sign ? Builtin::u128(1ULL) : Builtin::u128(0ULL)) << __Float128$Protected::SignShift) + ((Builtin::u128{exponent} << __Float128$Protected::BiasedExponentShift) & __Float128$Protected::BiasedExponentMask) + mantissa); 
		}
	}
} namespace $extensions { using namespace System;
#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto $static_getMinValue<$extension_Float128_14_f128>::get() -> const $extension_Float128_14_f128
	{
		#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::ParseFloat128("-1.18973149535723176508575932662801e+4932")); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto $static_getMaxValue<$extension_Float128_14_f128>::get() -> const $extension_Float128_14_f128
	{
		#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(+Builtin::ParseFloat128("1.18973149535723176508575932662801e+4932")); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	
} namespace $extensions { using namespace System;
#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto operator<=>($extension_Float128_19_f128 const& $this LIFETIMEBOUND, Builtin::Nullable<$extension_Float128_19_f128> rhs) noexcept -> const Builtin::i32
	{
		#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		{
			#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if ((!Builtin::Is(rhs, nullptr))) {
				#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				auto __tmp0 = *rhs; const auto& rhs = __tmp0;
				
				#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				return $this <=> rhs;
			}
		}
		#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return Builtin::i32(1);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto $static_FromBits<$extension_Float128_19_f128>::get(Builtin::u128 bits)  -> const typename $extension_Float128_19_f128
	{
		#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::BitCast<$extension_Float128_19_f128>(bits)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getBits($extension_Float128_19_f128 const & $this ) -> const Builtin::u128
	{
		#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::BitCast<Builtin::u128>($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto $static_getBitWidth<$extension_Float128_19_f128>::get() -> const Builtin::u32
	{
		#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(128U)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto $static_getMinPositiveValue<$extension_Float128_19_f128>::get() -> const $extension_Float128_19_f128
	{
		#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::ParseFloat128("1.18973149535723176508575932662800702e+4932")); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto $static_getHalfOne<$extension_Float128_19_f128>::get() -> const $extension_Float128_19_f128
	{
		#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FFE0000000000000000000000000000"))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getHashCode($extension_Float128_19_f128 const & $this ) -> const Builtin::u64
	{
		#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype(ADV_UPCS(Bits)($this.$ref()))> bits = ADV_UPCS(Bits)($this.$ref()); 
		#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (((bits & (ADV_UFCS(_operator_not)(__Float128$Protected::SignMask))) <=> __Float128$Protected::BiasedExponentMask) >= 0) {
			#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			bits &= __Float128$Protected::BiasedExponentMask;
		}
		#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return ADV_UPCS(HashCode)(bits.$ref());
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	
} namespace $extensions { using namespace System;
#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToBoolean($extension_Float128_77_f128 const& $this LIFETIMEBOUND) noexcept -> const bool
	{
		#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY($this != Builtin::i32(0)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToInt8($extension_Float128_77_f128 const& $this LIFETIMEBOUND)  -> const Builtin::i8
	{
		#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i8>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToUInt8($extension_Float128_77_f128 const& $this LIFETIMEBOUND)  -> const Builtin::u8
	{
		#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u8>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToInt16($extension_Float128_77_f128 const& $this LIFETIMEBOUND)  -> const Builtin::i16
	{
		#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i16>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToUInt16($extension_Float128_77_f128 const& $this LIFETIMEBOUND)  -> const Builtin::u16
	{
		#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u16>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToInt32($extension_Float128_77_f128 const& $this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i32>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 84 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToUInt32($extension_Float128_77_f128 const& $this LIFETIMEBOUND)  -> const Builtin::u32
	{
		#line 84 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u32>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 85 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToInt64($extension_Float128_77_f128 const& $this LIFETIMEBOUND)  -> const Builtin::i64
	{
		#line 85 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i64>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 86 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToUInt64($extension_Float128_77_f128 const& $this LIFETIMEBOUND)  -> const Builtin::u64
	{
		#line 86 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u64>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToInt128($extension_Float128_77_f128 const& $this LIFETIMEBOUND)  -> const Builtin::i128
	{
		#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i128>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToUInt128($extension_Float128_77_f128 const& $this LIFETIMEBOUND)  -> const Builtin::u128
	{
		#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u128>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToIsize($extension_Float128_77_f128 const& $this LIFETIMEBOUND)  -> const Builtin::isize
	{
		#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::isize>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToUsize($extension_Float128_77_f128 const& $this LIFETIMEBOUND)  -> const Builtin::usize
	{
		#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::usize>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToFloat32($extension_Float128_77_f128 const& $this LIFETIMEBOUND)  -> const Builtin::f32
	{
		#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::f32>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToFloat64($extension_Float128_77_f128 const& $this LIFETIMEBOUND)  -> const Builtin::f64
	{
		#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::f64>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToByte($extension_Float128_77_f128 const& $this LIFETIMEBOUND)  -> const Builtin::u8
	{
		#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u8>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToChar($extension_Float128_77_f128 const& $this LIFETIMEBOUND)  -> const Builtin::char32
	{
		#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u16>($this)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	
} namespace $extensions { using namespace System;
#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class T> inline constexpr auto _operator_div_mod($extension_Float128_99_f128 const& $this LIFETIMEBOUND, T rhs)  -> const Builtin::Tuple<$extension_Float128_99_f128, $extension_Float128_99_f128>
	{
		#line 103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return Builtin::MakeTuple($this / Builtin::f128{rhs}, $this % Builtin::f128{rhs});
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class T> inline constexpr auto _operator_div_not($extension_Float128_99_f128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Float128_99_f128
	{
		#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Round)(($this / rhs).$ref())); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto _operator_div_not_eq($extension_Float128_99_f128 & $this , auto rhs)  -> typename $extension_Float128_99_f128&
	{
		#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_div_not)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class T> inline constexpr auto _operator_div_lt($extension_Float128_99_f128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Float128_99_f128
	{
		#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Floor)(($this / rhs).$ref())); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto _operator_div_lt_eq($extension_Float128_99_f128 & $this , auto rhs)  -> typename $extension_Float128_99_f128&
	{
		#line 112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_div_lt)($this, rhs)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class T> inline constexpr auto _operator_div_gt($extension_Float128_99_f128 const& $this LIFETIMEBOUND, T rhs)  -> const typename $extension_Float128_99_f128
	{
		#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Ceil)(($this / rhs).$ref())); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto _operator_div_gt_eq($extension_Float128_99_f128 & $this , auto rhs)  -> typename $extension_Float128_99_f128&
	{
		#line 116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_div_gt)($this, rhs)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	
} namespace $extensions { using namespace System;
#line 122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto _operator_xor_xor($extension_Float128_120_f128 const& $this LIFETIMEBOUND, Builtin::i32 exp)  -> const typename $extension_Float128_120_f128
	{
		#line 124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return Builtin::ParseFloat128("1.0");
		}
		#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((exp <=> Builtin::i32(0)) < 0) {
			#line 130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return Builtin::ParseFloat128("1.0") / ADV_UFCS(_operator_xor_xor)($this, (-exp));
		}
		#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype($this)> base = $this; 
		#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype(Builtin::ParseFloat128("1.0"))> result = Builtin::ParseFloat128("1.0"); 
		#line 136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (std::is_constant_evaluated()) {
			#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			while ((exp <=> Builtin::i32(1)) > 0) 
			{
				#line 138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
					#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					result *= base;
				}
				#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				ADV_UFCS(_operator_bsl_eq)(exp, Builtin::i32(2));
				#line 142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				base *= base;
			}
			#line 144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return result * base;
		} else {
			#line 145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			{
				#line 146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				for (;;) 
				{
					#line 147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
						#line 148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						result *= base;
						#line 149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						if (exp == Builtin::i32(1)) {
							#line 150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							return result;
						}
					}
					#line 152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					ADV_UFCS(_operator_bsl_eq)(exp, Builtin::i32(2));
					#line 153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					base *= base;
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto _operator_xor_xor_eq($extension_Float128_120_f128 & $this , Builtin::i32 exp)  -> typename $extension_Float128_120_f128&
	{
		#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_xor_xor)($this, exp)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	
} namespace $extensions { using namespace System;
#line 198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto MaxMagnitude($extension_Float128_161_f128 const& $this LIFETIMEBOUND, $extension_Float128_161_f128 rhs) noexcept -> const typename $extension_Float128_161_f128
	{
		#line 200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype(ADV_UPCS(Abs)($this.$ref()))> ax = ADV_UPCS(Abs)($this.$ref()); 
		#line 201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype(ADV_UPCS(Abs)(rhs.$ref()))> ay = ADV_UPCS(Abs)(rhs.$ref()); 
		#line 203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((ax <=> ay) > 0 || ADV_UPCS(IsNaN)(ax.$ref())) {
			#line 205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return $this;
		}
		#line 208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (ax == ay) {
			#line 210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return ADV_UPCS(IsNegative)($this.$ref()) ? rhs : $this;
		}
		#line 213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return rhs;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto MaxMagnitudeNumber($extension_Float128_161_f128 const& $this LIFETIMEBOUND, $extension_Float128_161_f128 rhs) noexcept -> const typename $extension_Float128_161_f128
	{
		#line 218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype(ADV_UPCS(Abs)($this.$ref()))> ax = ADV_UPCS(Abs)($this.$ref()); 
		#line 219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype(ADV_UPCS(Abs)(rhs.$ref()))> ay = ADV_UPCS(Abs)(rhs.$ref()); 
		#line 221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((ax <=> ay) > 0 || ADV_UPCS(IsNaN)(ay.$ref())) {
			#line 223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return $this;
		}
		#line 226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (ax == ay) {
			#line 228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return ADV_UPCS(IsNegative)($this.$ref()) ? rhs : $this;
		}
		#line 231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return rhs;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto MinMagnitude($extension_Float128_161_f128 const& $this LIFETIMEBOUND, $extension_Float128_161_f128 rhs) noexcept -> const typename $extension_Float128_161_f128
	{
		#line 236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype(ADV_UPCS(Abs)($this.$ref()))> ax = ADV_UPCS(Abs)($this.$ref()); 
		#line 237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype(ADV_UPCS(Abs)(rhs.$ref()))> ay = ADV_UPCS(Abs)(rhs.$ref()); 
		#line 239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((ax <=> ay) < 0 || ADV_UPCS(IsNaN)(ax.$ref())) {
			#line 241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return $this;
		}
		#line 244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (ax == ay) {
			#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return ADV_UPCS(IsNegative)($this.$ref()) ? $this : rhs;
		}
		#line 249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return rhs;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto MinMagnitudeNumber($extension_Float128_161_f128 const& $this LIFETIMEBOUND, $extension_Float128_161_f128 rhs) noexcept -> const typename $extension_Float128_161_f128
	{
		#line 254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype(ADV_UPCS(Abs)($this.$ref()))> ax = ADV_UPCS(Abs)($this.$ref()); 
		#line 255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype(ADV_UPCS(Abs)(rhs.$ref()))> ay = ADV_UPCS(Abs)(rhs.$ref()); 
		#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((ax <=> ay) < 0 || ADV_UPCS(IsNaN)(ay.$ref())) {
			#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return $this;
		}
		#line 262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (ax == ay) {
			#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return ADV_UPCS(IsNegative)($this.$ref()) ? $this : rhs;
		}
		#line 267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return rhs;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto NarrowToInt8($extension_Float128_161_f128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i8
	{
		#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i8>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto NarrowToUInt8($extension_Float128_161_f128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u8
	{
		#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u8>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto NarrowToInt16($extension_Float128_161_f128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i16
	{
		#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i16>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto NarrowToUInt16($extension_Float128_161_f128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u16
	{
		#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u16>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto NarrowToInt32($extension_Float128_161_f128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i32
	{
		#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i32>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto NarrowToUInt32($extension_Float128_161_f128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u32
	{
		#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u32>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto NarrowToInt64($extension_Float128_161_f128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i64
	{
		#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i64>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto NarrowToUInt64($extension_Float128_161_f128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u64
	{
		#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u64>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto NarrowToInt128($extension_Float128_161_f128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::i128
	{
		#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i128>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto NarrowToUInt128($extension_Float128_161_f128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::u128
	{
		#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u128>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto NarrowToIsize($extension_Float128_161_f128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::isize
	{
		#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::isize>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto NarrowToUsize($extension_Float128_161_f128 const& $this LIFETIMEBOUND) noexcept -> const Builtin::usize
	{
		#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::usize>($this)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto $static_getOne<$extension_Float128_161_f128>::get() -> const $extension_Float128_161_f128
	{
		#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(1)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto $static_getZero<$extension_Float128_161_f128>::get() -> const $extension_Float128_161_f128
	{
		#line 163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(0)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto $static_getRadix<$extension_Float128_161_f128>::get() -> const Builtin::i32
	{
		#line 164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(2)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getAbs($extension_Float128_161_f128 const & $this ) -> const $extension_Float128_161_f128
	{
		#line 168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		constexpr Builtin::Auto<decltype(ADV_UFCS(_operator_not)(__Float128$Protected::SignMask))> mask = ADV_UFCS(_operator_not)(__Float128$Protected::SignMask);
		#line 169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::u128 raw = ADV_UPCS(Bits)($this.$ref()); 
		#line 170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return ADV_USFCS((Builtin::f128), FromBits)(raw & mask);
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsCanonical($extension_Float128_161_f128 const & $this ) -> const bool
	{
		#line 172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsComplexNumber($extension_Float128_161_f128 const & $this ) -> const bool
	{
		#line 173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsEvenInteger($extension_Float128_161_f128 const & $this ) -> const bool
	{
		#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsInteger)($this.$ref()) && (ADV_UPCS(Abs)(($this % Builtin::i32(2)).$ref()) == Builtin::i32(0))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsFinite($extension_Float128_161_f128 const & $this ) -> const bool
	{
		#line 175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(((ADV_UPCS(Bits)($this.$ref()) & (ADV_UFCS(_operator_not)(__Float128$Protected::SignMask))) <=> __Float128$Protected::BiasedExponentMask) < 0); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsImaginaryNumber($extension_Float128_161_f128 const & $this ) -> const bool
	{
		#line 176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsInfinity($extension_Float128_161_f128 const & $this ) -> const bool
	{
		#line 177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY((ADV_UPCS(Bits)($this.$ref()) & (ADV_UFCS(_operator_not)(__Float128$Protected::SignMask))) == __Float128$Protected::BiasedExponentMask); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsInteger($extension_Float128_161_f128 const & $this ) -> const bool
	{
		#line 178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsFinite)($this.$ref()) && ($this == ADV_UPCS(Truncate)($this.$ref()))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsNaN($extension_Float128_161_f128 const & $this ) -> const bool
	{
		#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY($this != $this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsNegative($extension_Float128_161_f128 const & $this ) -> const bool
	{
		#line 180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY((Builtin::BitCast<Builtin::i128>($this) <=> Builtin::i32(0)) < 0); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsNegativeInfinity($extension_Float128_161_f128 const & $this ) -> const bool
	{
		#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY($this == ADV_USPCS(NegativeInfinity, $extension_Float128_161_f128)()); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsNormal($extension_Float128_161_f128 const & $this ) -> const bool
	{
		#line 184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype(ADV_UPCS(Bits)($this.$ref()) & (ADV_UFCS(_operator_not)(__Float128$Protected::SignMask)))> bits = ADV_UPCS(Bits)($this.$ref()) & (ADV_UFCS(_operator_not)(__Float128$Protected::SignMask)); 
		#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return ((bits <=> __Float128$Protected::BiasedExponentMask) < 0) && (bits != Builtin::i32(0)) && ((bits & __Float128$Protected::BiasedExponentMask) != Builtin::i32(0));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsOddInteger($extension_Float128_161_f128 const & $this ) -> const bool
	{
		#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsInteger)($this.$ref()) && (ADV_UPCS(Abs)(($this % Builtin::i32(2)).$ref()) == Builtin::i32(1))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsPositive($extension_Float128_161_f128 const & $this ) -> const bool
	{
		#line 188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY((Builtin::BitCast<Builtin::i128>($this) <=> Builtin::i32(0)) >= 0); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsPositiveInfinity($extension_Float128_161_f128 const & $this ) -> const bool
	{
		#line 189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY($this == ADV_USPCS(PositiveInfinity, $extension_Float128_161_f128)()); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsRealNumber($extension_Float128_161_f128 const & $this ) -> const bool
	{
		#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY($this == $this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsSubnormal($extension_Float128_161_f128 const & $this ) -> const bool
	{
		#line 193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype(ADV_UPCS(Bits)($this.$ref()) & (ADV_UFCS(_operator_not)(__Float128$Protected::SignMask)))> bits = ADV_UPCS(Bits)($this.$ref()) & (ADV_UFCS(_operator_not)(__Float128$Protected::SignMask)); 
		#line 194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return ((bits <=> __Float128$Protected::BiasedExponentMask) < 0) && (bits != Builtin::i32(0)) && ((bits & __Float128$Protected::BiasedExponentMask) == Builtin::i32(0));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsZero($extension_Float128_161_f128 const & $this ) -> const bool
	{
		#line 196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY($this == ADV_USPCS(Zero, $extension_Float128_161_f128)()); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	
} namespace $extensions { using namespace System;
#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto $static_getMinusOne<$extension_Float128_296_f128>::get() -> const $extension_Float128_296_f128
	{
		#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(-1)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	
} namespace $extensions { using namespace System;
#line 308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto CopySign($extension_Float128_300_f128 const& $this LIFETIMEBOUND, $extension_Float128_300_f128 sign) noexcept -> const typename $extension_Float128_300_f128
	{
		#line 310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Bits)($this.$ref()) & (ADV_UFCS(_operator_not)(__Float128$Protected::SignMask)))> lhsBits = ADV_UPCS(Bits)($this.$ref()) & (ADV_UFCS(_operator_not)(__Float128$Protected::SignMask)); 
		#line 311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Bits)(sign.$ref()) & __Float128$Protected::SignMask)> rhsBits = ADV_UPCS(Bits)(sign.$ref()) & __Float128$Protected::SignMask; 
		#line 312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return ADV_USFCS((Builtin::f128), FromBits)(lhsBits | rhsBits);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto Max($extension_Float128_300_f128 const& $this LIFETIMEBOUND, $extension_Float128_300_f128 rhs) noexcept -> const typename $extension_Float128_300_f128
	{
		#line 317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ($this != rhs) {
			#line 318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if (!ADV_UPCS(IsNaN)($this.$ref())) {
				#line 319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				return (rhs <=> $this) < 0 ? $this : rhs;
			}
			#line 321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return $this;
		}
		#line 323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return ADV_UPCS(IsNegative)(rhs.$ref()) ? $this : rhs;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto MaxNumber($extension_Float128_300_f128 const& $this LIFETIMEBOUND, $extension_Float128_300_f128 rhs) noexcept -> const typename $extension_Float128_300_f128
	{
		#line 327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ($this != rhs) {
			#line 328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if (!ADV_UPCS(IsNaN)(rhs.$ref())) {
				#line 329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				return (rhs <=> $this) < 0 ? $this : rhs;
			}
			#line 331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return $this;
		}
		#line 333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return ADV_UPCS(IsNegative)(rhs.$ref()) ? $this : rhs;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto Min($extension_Float128_300_f128 const& $this LIFETIMEBOUND, $extension_Float128_300_f128 rhs) noexcept -> const typename $extension_Float128_300_f128
	{
		#line 337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ($this != rhs) {
			#line 338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if (!ADV_UPCS(IsNaN)($this.$ref())) {
				#line 339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				return ($this <=> rhs) < 0 ? $this : rhs;
			}
			#line 341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return $this;
		}
		#line 343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return ADV_UPCS(IsNegative)($this.$ref()) ? $this : rhs;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto MinNumber($extension_Float128_300_f128 const& $this LIFETIMEBOUND, $extension_Float128_300_f128 rhs) noexcept -> const typename $extension_Float128_300_f128
	{
		#line 347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ($this != rhs) {
			#line 348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if (!ADV_UPCS(IsNaN)(rhs.$ref())) {
				#line 349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				return ($this <=> rhs) < 0 ? $this : rhs;
			}
			#line 351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return $this;
		}
		#line 353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return ADV_UPCS(IsNegative)($this.$ref()) ? $this : rhs;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto Clamp($extension_Float128_300_f128 const& $this LIFETIMEBOUND, $extension_Float128_300_f128 min, $extension_Float128_300_f128 max)  -> const typename $extension_Float128_300_f128
	{
		#line 357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((min <=> max) > 0) {
			#line 358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			Builtin::Throw(Builtin::InvalidOperationException{});
		}
		#line 361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return ($this <=> min) < 0 ? min : ($this <=> max) > 0 ? max : $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getSign($extension_Float128_300_f128 const & $this ) -> const Builtin::i32
	{
		#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return [&]() 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
		{
			#line 302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			auto __tmp__valid_301 = Builtin::Cast<false, std::decay_t<decltype($this)>::$self>($this);
			#line 302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if(__tmp__valid_301.IsValid() && Builtin::Is(*__tmp__valid_301, Builtin::i32(0))) {
				#line 302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				
				return Builtin::i32(0);
			}
			else {
				#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if(__tmp__valid_301.IsValid() && Builtin::IsLess(*__tmp__valid_301, Builtin::i32(0))) {
					#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					
					return Builtin::i32(-1);
				}
				else {
					#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					if(__tmp__valid_301.IsValid() && Builtin::IsGreater(*__tmp__valid_301, Builtin::i32(0))) {
						#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						
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
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	
} namespace $extensions { using namespace System;
#line 450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto Log($extension_Float128_404_f128 const& $this LIFETIMEBOUND, $extension_Float128_404_f128 base) noexcept -> const typename $extension_Float128_404_f128
	{
		#line 452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (ADV_UPCS(IsNaN)($this.$ref())) {
			#line 453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return $this;
		}
		#line 455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (ADV_UPCS(IsNaN)(base.$ref())) {
			#line 456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return base;
		}
		#line 459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (base == Builtin::i32(1)) {
			#line 460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return ADV_USPCS(NaN, Builtin::f128)();
		}
		#line 462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ($this != Builtin::i32(1) && (base == Builtin::i32(0) || ADV_UPCS(IsPositiveInfinity)(base.$ref()))) {
			#line 463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return ADV_USPCS(NaN, Builtin::f128)();
		}
		#line 466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return ADV_UPCS(Ln)($this.$ref()) / ADV_UPCS(Ln)(base.$ref());
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto Midpoint($extension_Float128_404_f128 const& $this LIFETIMEBOUND, $extension_Float128_404_f128 rhs) noexcept -> const typename $extension_Float128_404_f128
	{
		#line 473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		constexpr Builtin::Auto<decltype(ADV_USPCS(MaxValue, $extension_Float128_404_f128)() / Builtin::i32(2))> riskValue = ADV_USPCS(MaxValue, $extension_Float128_404_f128)() / Builtin::i32(2);
		#line 475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((ADV_UPCS(Abs)($this.$ref()) <=> riskValue) <= 0 && (ADV_UPCS(Abs)(rhs.$ref()) <=> riskValue) <= 0) {
			#line 476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return ($this + rhs) / Builtin::i32(2);
		} else {
			#line 477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			{
				#line 478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				return ($this / Builtin::i32(2)) + (rhs / Builtin::i32(2));
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto IsMultipleOf($extension_Float128_404_f128 const& $this LIFETIMEBOUND, $extension_Float128_404_f128 rhs) noexcept -> const bool
	{
		#line 485 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (rhs == Builtin::i32(0)) {
			#line 486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return $this == Builtin::i32(0);
		}
		#line 489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (rhs == Builtin::i32(-1)) {
			#line 490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return Builtin::Boolean(true);
		}
		#line 493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return $this % rhs == Builtin::i32(0);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto $static_getAllBitsSet<$extension_Float128_404_f128>::get() -> const $extension_Float128_404_f128
	{
		#line 406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Builtin::f128), FromBits)(ADV_USPCS(MaxValue, Builtin::u128)())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsPow2($extension_Float128_404_f128 const & $this ) -> const bool
	{
		#line 411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype(ADV_UPCS(Bits)($this.$ref()))> bits = ADV_UPCS(Bits)($this.$ref()); 
		#line 413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((ADV_UFCS(NarrowToInt128)(bits.$ref()) <=> Builtin::i32(0)) <= 0) {
			#line 414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return Builtin::Boolean(false);
		}
		#line 417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype(__Float128$Protected::ExtractBiasedExponentFromBits(bits))> biasedExponent = __Float128$Protected::ExtractBiasedExponentFromBits(bits); 
		#line 418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype(__Float128$Protected::ExtractTrailingSignificandFromBits(bits))> trailingSignificand = __Float128$Protected::ExtractTrailingSignificandFromBits(bits); 
		#line 421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (biasedExponent == __Float128$Protected::MinBiasedExponent) {
			#line 422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return ADV_UPCS(PopCount)(trailingSignificand.$ref()) == Builtin::i32(1);
		}
		#line 425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (biasedExponent == __Float128$Protected::MaxBiasedExponent) {
			#line 426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return Builtin::Boolean(false);
		}
		#line 430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return trailingSignificand == __Float128$Protected::MinTrailingSignificand;
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	
} namespace $extensions { using namespace System;
#line 499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto $static_getPi<$extension_Float128_497_f128>::get() -> const $extension_Float128_497_f128
	{
		#line 499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::ParseFloat128("3.141592653589793238462643383279502884")); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto $static_getE<$extension_Float128_497_f128>::get() -> const $extension_Float128_497_f128
	{
		#line 500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::ParseFloat128("2.718281828459045235360287471352662497")); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto $static_getTau<$extension_Float128_497_f128>::get() -> const $extension_Float128_497_f128
	{
		#line 501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::ParseFloat128("6.283185307179586476925286766559005768")); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	
} namespace $extensions { using namespace System;
#line 539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto CeilToInt32($extension_Float128_504_f128 const& $this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i32>(ADV_UPCS(Ceil)($this.$ref()))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto CeilToInt64($extension_Float128_504_f128 const& $this LIFETIMEBOUND)  -> const Builtin::i64
	{
		#line 540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i64>(ADV_UPCS(Ceil)($this.$ref()))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 541 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto CeilToInt128($extension_Float128_504_f128 const& $this LIFETIMEBOUND)  -> const Builtin::i128
	{
		#line 541 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i128>(ADV_UPCS(Ceil)($this.$ref()))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto FloorToInt32($extension_Float128_504_f128 const& $this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i32>(ADV_UPCS(Floor)($this.$ref()))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto FloorToInt64($extension_Float128_504_f128 const& $this LIFETIMEBOUND)  -> const Builtin::i64
	{
		#line 574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i64>(ADV_UPCS(Floor)($this.$ref()))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto FloorToInt128($extension_Float128_504_f128 const& $this LIFETIMEBOUND)  -> const Builtin::i128
	{
		#line 575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i128>(ADV_UPCS(Floor)($this.$ref()))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto TruncateToInt32($extension_Float128_504_f128 const& $this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i32>(ADV_UPCS(Truncate)($this.$ref()))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto TruncateToInt64($extension_Float128_504_f128 const& $this LIFETIMEBOUND)  -> const Builtin::i64
	{
		#line 609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i64>(ADV_UPCS(Truncate)($this.$ref()))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 610 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto TruncateToInt128($extension_Float128_504_f128 const& $this LIFETIMEBOUND)  -> const Builtin::i128
	{
		#line 610 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i128>(ADV_UPCS(Truncate)($this.$ref()))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 621 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto RoundToInt32($extension_Float128_504_f128 const& $this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 621 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i32>(ADV_UPCS(Round)($this.$ref()))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 622 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto RoundToInt64($extension_Float128_504_f128 const& $this LIFETIMEBOUND)  -> const Builtin::i64
	{
		#line 622 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i64>(ADV_UPCS(Round)($this.$ref()))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 623 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto RoundToInt128($extension_Float128_504_f128 const& $this LIFETIMEBOUND)  -> const Builtin::i128
	{
		#line 623 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i128>(ADV_UPCS(Round)($this.$ref()))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto RoundTiesEvenToInt32($extension_Float128_504_f128 const& $this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i32>(ADV_UPCS(RoundTiesEven)($this.$ref()))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 692 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto RoundTiesEvenToInt64($extension_Float128_504_f128 const& $this LIFETIMEBOUND)  -> const Builtin::i64
	{
		#line 692 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i64>(ADV_UPCS(RoundTiesEven)($this.$ref()))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto RoundTiesEvenToInt128($extension_Float128_504_f128 const& $this LIFETIMEBOUND)  -> const Builtin::i128
	{
		#line 693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i128>(ADV_UPCS(RoundTiesEven)($this.$ref()))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto Round($extension_Float128_504_f128 const& $this LIFETIMEBOUND, Builtin::u32 digits)  -> const typename $extension_Float128_504_f128
	{
		#line 695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Round)($this.$ref(), digits, ADV_USPCS(AwayFromZero, MidpointRounding)())); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto Round($extension_Float128_504_f128 const& $this LIFETIMEBOUND, MidpointRounding rounding)  -> const typename $extension_Float128_504_f128
	{
		#line 696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Round)($this.$ref(), Builtin::u32(0U), rounding)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 697 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto Round($extension_Float128_504_f128 const& $this LIFETIMEBOUND, Builtin::u32 digits, MidpointRounding rounding)  -> const typename $extension_Float128_504_f128
	{
		#line 699 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		constexpr Builtin::Auto<decltype(Builtin::u32(34U))> maxRoundingDigits = Builtin::u32(34U);
		#line 700 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		constexpr Builtin::Auto<decltype(ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x40733426172C74D822B878FE80000000")))> roundLimit = ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x40733426172C74D822B878FE80000000"));
		#line 701 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		constexpr auto pow10table = Builtin::ToInlineArray<Builtin::f128>({Builtin::f128(ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FFF0000000000000000000000000000"))), Builtin::f128(ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x40024000000000000000000000000000"))), Builtin::f128(ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x40059000000000000000000000000000"))), Builtin::f128(ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x4008F400000000000000000000000000"))), Builtin::f128(ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x400C3880000000000000000000000000"))), Builtin::f128(ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x400F86A0000000000000000000000000"))), Builtin::f128(ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x4012E848000000000000000000000000"))), Builtin::f128(ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x4016312D000000000000000000000000"))), Builtin::f128(ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x40197D78400000000000000000000000"))), Builtin::f128(ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x401CDCD6500000000000000000000000"))), Builtin::f128(ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x40202A05F20000000000000000000000"))), Builtin::f128(ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x402374876E8000000000000000000000"))), Builtin::f128(ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x4026D1A94A2000000000000000000000"))), Builtin::f128(ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x402A2309CE5400000000000000000000"))), Builtin::f128(ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x402D6BCC41E900000000000000000000"))), Builtin::f128(ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x4030C6BF526340000000000000000000"))), Builtin::f128(ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x40341C37937E08000000000000000000"))), Builtin::f128(ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x40376345785D8A000000000000000000"))), Builtin::f128(ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x403ABC16D674EC800000000000000000"))), Builtin::f128(ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x403E158E460913D00000000000000000"))), Builtin::f128(ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x40415AF1D78B58C40000000000000000"))), Builtin::f128(ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x4044B1AE4D6E2EF50000000000000000"))), Builtin::f128(ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x40480F0CF064DD592000000000000000"))), Builtin::f128(ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x404B52D02C7E14AF6800000000000000"))), Builtin::f128(ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x404EA784379D99DB4200000000000000"))), Builtin::f128(ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x405208B2A2C280290940000000000000"))), Builtin::f128(ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x40554ADF4B7320334B90000000000000"))), Builtin::f128(ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x40589D971E4FE8401E74000000000000"))), Builtin::f128(ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x405C027E72F1F1281308800000000000"))), Builtin::f128(ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x405F431E0FAE6D7217CAA00000000000"))), Builtin::f128(ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x406293E5939A08CE9DBD480000000000"))), Builtin::f128(ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x4065F8DEF8808B02452C9A0000000000"))), Builtin::f128(ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x40693B8B5B5056E16B3BE04000000000"))), Builtin::f128(ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x406C8A6E32246C99C60AD85000000000"))), Builtin::f128(ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x406FED09BEAD87C0378D8E6400000000")))});
		#line 739 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((digits <=> maxRoundingDigits) > 0) {
			#line 740 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype($this)> result = $this; 
		#line 744 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((ADV_UPCS(Abs)($this.$ref()) <=> roundLimit) < 0) {
			#line 745 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(pow10table.$ref(), digits))> pow10 = ADV_UFCS(_operator_subscript)(pow10table.$ref(), digits); 
			#line 746 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			result *= pow10;
			#line 748 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			result = [&]() 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
			{
				#line 750 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				auto __tmp__valid_748 = Builtin::Cast<false, std::decay_t<decltype(rounding)>::$self>(rounding);
				#line 750 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if(__tmp__valid_748.IsValid() && Builtin::Is(*__tmp__valid_748, std::decay_t<decltype(rounding)>::ToEven)) {
					#line 750 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					const auto& rounding = *__tmp__valid_748;
					return ADV_UPCS(RoundTiesEven)(result.$ref());
				}
				else {
					#line 751 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					if(__tmp__valid_748.IsValid() && Builtin::Is(*__tmp__valid_748, std::decay_t<decltype(rounding)>::AwayFromZero)) {
						#line 751 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						const auto& rounding = *__tmp__valid_748;
						return ADV_UPCS(Round)(result.$ref());
					}
					else {
						#line 752 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						if(__tmp__valid_748.IsValid() && Builtin::Is(*__tmp__valid_748, std::decay_t<decltype(rounding)>::ToZero)) {
							#line 752 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							const auto& rounding = *__tmp__valid_748;
							return ADV_UPCS(Truncate)(result.$ref());
						}
						else {
							#line 753 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							if(__tmp__valid_748.IsValid() && Builtin::Is(*__tmp__valid_748, std::decay_t<decltype(rounding)>::ToNegativeInfinity)) {
								#line 753 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
								const auto& rounding = *__tmp__valid_748;
								return ADV_UPCS(Floor)(result.$ref());
							}
							else {
								#line 754 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
								if(__tmp__valid_748.IsValid() && Builtin::Is(*__tmp__valid_748, std::decay_t<decltype(rounding)>::ToPositiveInfinity)) {
									#line 754 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
									const auto& rounding = *__tmp__valid_748;
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
			#line 758 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			result /= pow10;
		}
		#line 761 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getFractionalPart($extension_Float128_504_f128 const & $this ) -> const $extension_Float128_504_f128
	{
		#line 507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY($this - ADV_UPCS(Truncate)($this.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getCeil($extension_Float128_504_f128 const & $this ) -> const $extension_Float128_504_f128
	{
		#line 514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const Builtin::Auto<decltype(__Float128$Protected::BiasedExponent($this))> exponent = __Float128$Protected::BiasedExponent($this); 
		#line 515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const Builtin::Auto<decltype(ADV_UPCS(IsNegative)($this.$ref()))> sign = ADV_UPCS(IsNegative)($this.$ref()); 
		#line 516 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		$extension_Float128_504_f128 y{}; 
		#line 518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((exponent <=> Builtin::i32(0x3FFF) + Builtin::i32(112)) >= 0 || ADV_UPCS(IsZero)($this.$ref())) {
			#line 519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return $this;
		}
		#line 522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const $extension_Float128_504_f128 toint = __Float128$Protected::RoundingEpsilon; 
		#line 523 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (sign) {
			#line 524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			y = $this - toint + toint - $this;
		} else {
			#line 525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			{
				#line 526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				y = $this + toint - toint - $this;
			}
		}
		#line 529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((exponent <=> Builtin::i32(0x3FFF) - Builtin::i32(1)) <= 0) {
			#line 530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return sign ? ADV_USPCS(NegativeZero, $extension_Float128_504_f128)() : ADV_USPCS(One, $extension_Float128_504_f128)();
		}
		#line 532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((y <=> Builtin::i32(0)) < 0) {
			#line 533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return $this + y + Builtin::i32(1);
		}
		#line 536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return $this + y;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getFloor($extension_Float128_504_f128 const & $this ) -> const $extension_Float128_504_f128
	{
		#line 548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const Builtin::Auto<decltype(__Float128$Protected::BiasedExponent($this))> exponent = __Float128$Protected::BiasedExponent($this); 
		#line 549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const Builtin::Auto<decltype(ADV_UPCS(IsNegative)($this.$ref()))> sign = ADV_UPCS(IsNegative)($this.$ref()); 
		#line 550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		$extension_Float128_504_f128 y{}; 
		#line 552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((exponent <=> Builtin::i32(0x3FFF) + Builtin::i32(112)) >= 0 || ADV_UPCS(IsZero)($this.$ref())) {
			#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return $this;
		}
		#line 556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const $extension_Float128_504_f128 toint = __Float128$Protected::RoundingEpsilon; 
		#line 557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (sign) {
			#line 558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			y = $this - toint + toint - $this;
		} else {
			#line 559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			{
				#line 560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				y = $this + toint - toint - $this;
			}
		}
		#line 563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((exponent <=> Builtin::i32(0x3FFF) - Builtin::i32(1)) <= 0) {
			#line 564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return sign ? Builtin::i32(-1) : Builtin::i32(0);
		}
		#line 566 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((y <=> Builtin::i32(0)) > 0) {
			#line 567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return $this + y - Builtin::i32(1);
		}
		#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return $this + y;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 580 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getTruncate($extension_Float128_504_f128 const & $this ) -> const $extension_Float128_504_f128
	{
		#line 582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const Builtin::Auto<decltype(__Float128$Protected::BiasedExponent($this))> exponent = __Float128$Protected::BiasedExponent($this); 
		#line 583 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const Builtin::Auto<decltype(ADV_UPCS(IsNegative)($this.$ref()))> sign = ADV_UPCS(IsNegative)($this.$ref()); 
		#line 584 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		$extension_Float128_504_f128 y{}; 
		#line 586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((exponent <=> Builtin::i32(0x3FFF) + Builtin::i32(112)) >= 0) {
			#line 587 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return $this;
		}
		#line 589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((exponent <=> Builtin::i32(0x3FFF) - Builtin::i32(1)) <= 0) {
			#line 590 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return sign ? Builtin::i32(-1) : Builtin::i32(0);
		}
		#line 593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype($this)> x = $this; 
		#line 594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (sign) {
			#line 595 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			x = -x;
		}
		#line 598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const $extension_Float128_504_f128 toint = __Float128$Protected::RoundingEpsilon; 
		#line 599 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		y = x + toint - toint - x;
		#line 600 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((y <=> Builtin::i32(0)) > 0) {
			#line 601 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			--y;
		}
		#line 603 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		x += y;
		#line 605 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return sign ? -x : x;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 615 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getRound($extension_Float128_504_f128 const & $this ) -> const $extension_Float128_504_f128
	{
		#line 617 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		constexpr Builtin::Auto<decltype(ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FFE0000000000000000000000000000")))> halfOne = ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FFE0000000000000000000000000000"));
		#line 618 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return ADV_UPCS(Truncate)(($this + ADV_UFCS(CopySign)((ADV_UPCS(BitDecrement)(halfOne.$ref())).$ref(), $this)).$ref());
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 628 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getRoundTiesEven($extension_Float128_504_f128 const & $this ) -> const $extension_Float128_504_f128
	{
		#line 630 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Bits)($this.$ref()))> bits = ADV_UPCS(Bits)($this.$ref()); 
		#line 631 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const Builtin::Auto<decltype(__Float128$Protected::ExtractBiasedExponentFromBits(bits))> biasedExponent = __Float128$Protected::ExtractBiasedExponentFromBits(bits); 
		#line 632 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype(ADV_UFCS(High64)(bits.$ref()))> high = ADV_UFCS(High64)(bits.$ref()); 
		#line 633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype(ADV_UFCS(Low64)(bits.$ref()))> low = ADV_UFCS(Low64)(bits.$ref()); 
		#line 634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::u64 lastBitMask0{}, lastBitMask64{}, roundBitsMask{}; 
		#line 635 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::u128 result{}; 
		#line 637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((biasedExponent <=> Builtin::i32(0x402F)) >= 0) {
			#line 638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if ((biasedExponent <=> Builtin::i32(0x406F)) >= 0) {
				#line 640 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if (biasedExponent == Builtin::i32(0x7FFF) && __Float128$Protected::ExtractTrailingSignificandFromBits(bits) != Builtin::i32(0)) {
					#line 641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					return ADV_USPCS(NaN, Builtin::f128)();
				}
				#line 645 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				return $this;
			}
			#line 648 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			lastBitMask0 = Builtin::u64(2ULL) << (Builtin::i32(0x406E) - biasedExponent);
			#line 649 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			roundBitsMask = lastBitMask0 - Builtin::i32(1);
			#line 650 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			result = bits;
			#line 652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if (biasedExponent == Builtin::i32(0x402F)) {
				#line 653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if ((low <=> Builtin::u64(0x8000000000000000ULL)) >= 0) {
					#line 654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					high++;
					#line 655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					if (low == Builtin::u64(0x8000000000000000ULL)) {
						#line 656 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						high &= (ADV_UFCS(_operator_not)(Builtin::u64(1ULL)));
					}
				}
			} else {
				#line 659 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				{
					#line 660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					result = ADV_UFCS(_operator_add_mod)(Builtin::u128{high, low}, Builtin::u128{Builtin::u32(0U), lastBitMask0 >> Builtin::i32(1)});
					#line 661 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					if ((ADV_UFCS(Low64)(result.$ref()) & roundBitsMask) == Builtin::i32(0)) {
						#line 662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						result &= Builtin::u128{ADV_USPCS(MaxValue, Builtin::u64)(), ADV_UFCS(_operator_not)(lastBitMask0)};
					}
				}
			}
			#line 666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			result &= Builtin::u128{ADV_USPCS(MaxValue, Builtin::u64)(), ADV_UFCS(_operator_not)(roundBitsMask)};
			#line 667 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			lastBitMask64 = lastBitMask0 == Builtin::i32(0) ? Builtin::u32(0U) : Builtin::u32(1U);
		} else {
			#line 668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			{
				#line 669 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if ((biasedExponent <=> Builtin::i32(0x3FFF)) < 0) {
					#line 670 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					if ((bits & (ADV_UFCS(_operator_not)(__Float128$Protected::SignMask))) == Builtin::i32(0)) {
						#line 671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						return $this;
					}
					#line 673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					result = bits & __Float128$Protected::SignMask;
					#line 674 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					return ADV_USFCS((Builtin::f128), FromBits)(result);
				}
				#line 677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				result = bits & Builtin::u128{ADV_USPCS(MaxValue, Builtin::u64)(), Builtin::u32(0U)};
				#line 678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				lastBitMask64 = Builtin::u64(1ULL) << (Builtin::i32(0x402F) - biasedExponent);
				#line 679 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				roundBitsMask = lastBitMask64 - Builtin::i32(1);
				#line 680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				ADV_UFCS(_operator_add_mod_eq)(result, Builtin::u128{lastBitMask64 >> Builtin::i32(1), Builtin::u32(0U)});
				#line 681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if (((ADV_UFCS(High64)(result.$ref()) & roundBitsMask) | ADV_UFCS(Low64)(bits.$ref())) == Builtin::i32(0)) {
					#line 682 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					result &= Builtin::u128{ADV_UFCS(_operator_not)(lastBitMask64), ADV_USPCS(MaxValue, Builtin::u64)()};
				}
				#line 684 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				result &= Builtin::u128{ADV_UFCS(_operator_not)(roundBitsMask), ADV_USPCS(MaxValue, Builtin::u64)()};
				#line 685 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				lastBitMask0 = Builtin::u32(0U);
			}
		}
		#line 688 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return ADV_USFCS((Builtin::f128), FromBits)(result);
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 764 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getExponentByteCount($extension_Float128_504_f128 const & $this ) -> const Builtin::u32
	{
		#line 764 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u32>(Builtin::usize(sizeof(Builtin::i16)))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getExponentShortestBitLength($extension_Float128_504_f128 const & $this ) -> const Builtin::u32
	{
		#line 767 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype(__Float128$Protected::Exponent($this))> exponent = __Float128$Protected::Exponent($this); 
		#line 768 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((exponent <=> Builtin::i32(0)) >= 0) {
			#line 769 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return ADV_USPCS(BitWidth, Builtin::i16)() - ADV_UPCS(LeadingZeroCount)(exponent.$ref());
		} else {
			#line 770 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			{
				#line 771 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				return ADV_USPCS(BitWidth, Builtin::i16)() + Builtin::i32(1) - ADV_UPCS(LeadingZeroCount)(exponent.$ref());
			}
		}
		return {};
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 774 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getSignificandBitLength($extension_Float128_504_f128 const & $this ) -> const Builtin::u32
	{
		#line 774 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(113U)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 775 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getSignificandByteCount($extension_Float128_504_f128 const & $this ) -> const Builtin::u32
	{
		#line 775 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u32>(Builtin::usize(sizeof(Builtin::u128)))); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	
} namespace $extensions { using namespace System;
#line 784 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto _operator_mul_mul_eq($extension_Float128_779_f128 & $this , $extension_Float128_779_f128 exp) noexcept -> typename $extension_Float128_779_f128&
	{
		#line 784 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY($this = ADV_UFCS(_operator_mul_mul)($this, exp)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	
} namespace $extensions { using namespace System;
#line 809 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getExp2M1($extension_Float128_787_f128 const & $this ) -> const $extension_Float128_787_f128
	{
		#line 809 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Exp2)($this.$ref()) - ADV_USPCS(One, $extension_Float128_787_f128)()); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 811 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getExp10M1($extension_Float128_787_f128 const & $this ) -> const $extension_Float128_787_f128
	{
		#line 811 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Exp10)($this.$ref()) - ADV_USPCS(One, $extension_Float128_787_f128)()); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	
} namespace $extensions { using namespace System;
#line 826 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getLog2P1($extension_Float128_814_f128 const & $this ) -> const $extension_Float128_814_f128
	{
		#line 826 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Log2)(($this + Builtin::i32(1)).$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getLog10P1($extension_Float128_814_f128 const & $this ) -> const $extension_Float128_814_f128
	{
		#line 828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Log10)(($this + Builtin::i32(1)).$ref())); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	
} namespace $extensions { using namespace System;
#line 1266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToRadians($extension_Float128_1182_f128 const& $this LIFETIMEBOUND) noexcept -> const typename $extension_Float128_1182_f128
	{
		#line 1266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(($this * ADV_USPCS(Pi, Builtin::f128)()) / Builtin::i32(180)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToDegrees($extension_Float128_1182_f128 const& $this LIFETIMEBOUND) noexcept -> const typename $extension_Float128_1182_f128
	{
		#line 1268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(($this * Builtin::i32(180)) / ADV_USPCS(Pi, Builtin::f128)()); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getCot($extension_Float128_1182_f128 const & $this ) -> const $extension_Float128_1182_f128
	{
		#line 1196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(ReciprocalEstimate)(ADV_UPCS(Tan)($this.$ref()).$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getSec($extension_Float128_1182_f128 const & $this ) -> const $extension_Float128_1182_f128
	{
		#line 1198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(ReciprocalEstimate)(ADV_UPCS(Cos)($this.$ref()).$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getCsc($extension_Float128_1182_f128 const & $this ) -> const $extension_Float128_1182_f128
	{
		#line 1200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(ReciprocalEstimate)(ADV_UPCS(Sin)($this.$ref()).$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getCotPi($extension_Float128_1182_f128 const & $this ) -> const $extension_Float128_1182_f128
	{
		#line 1247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(ReciprocalEstimate)(ADV_UPCS(TanPi)($this.$ref()).$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getSecPi($extension_Float128_1182_f128 const & $this ) -> const $extension_Float128_1182_f128
	{
		#line 1249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(ReciprocalEstimate)(ADV_UPCS(CosPi)($this.$ref()).$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getCscPi($extension_Float128_1182_f128 const & $this ) -> const $extension_Float128_1182_f128
	{
		#line 1251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(ReciprocalEstimate)(ADV_UPCS(SinPi)($this.$ref()).$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getAsinPi($extension_Float128_1182_f128 const & $this ) -> const $extension_Float128_1182_f128
	{
		#line 1253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Asin)($this.$ref()) / ADV_USPCS(Pi, Builtin::f128)()); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getAcosPi($extension_Float128_1182_f128 const & $this ) -> const $extension_Float128_1182_f128
	{
		#line 1255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Acos)($this.$ref()) / ADV_USPCS(Pi, Builtin::f128)()); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getAtanPi($extension_Float128_1182_f128 const & $this ) -> const $extension_Float128_1182_f128
	{
		#line 1257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Atan)($this.$ref()) / ADV_USPCS(Pi, Builtin::f128)()); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getAcotPi($extension_Float128_1182_f128 const & $this ) -> const $extension_Float128_1182_f128
	{
		#line 1259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Acot)($this.$ref()) / ADV_USPCS(Pi, Builtin::f128)()); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getAsecPi($extension_Float128_1182_f128 const & $this ) -> const $extension_Float128_1182_f128
	{
		#line 1261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Asec)($this.$ref()) / ADV_USPCS(Pi, Builtin::f128)()); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getAcscPi($extension_Float128_1182_f128 const & $this ) -> const $extension_Float128_1182_f128
	{
		#line 1263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Acsc)($this.$ref()) / ADV_USPCS(Pi, Builtin::f128)()); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	
} namespace $extensions { using namespace System;
#line 1299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getAcoth($extension_Float128_1271_f128 const & $this ) -> const $extension_Float128_1271_f128
	{
		#line 1299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Atanh)((ADV_UPCS(ReciprocalEstimate)($this.$ref())).$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getAcsch($extension_Float128_1271_f128 const & $this ) -> const $extension_Float128_1271_f128
	{
		#line 1301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Asinh)((ADV_UPCS(ReciprocalEstimate)($this.$ref())).$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getAsech($extension_Float128_1271_f128 const & $this ) -> const $extension_Float128_1271_f128
	{
		#line 1303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Acosh)((ADV_UPCS(ReciprocalEstimate)($this.$ref())).$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getCoth($extension_Float128_1271_f128 const & $this ) -> const $extension_Float128_1271_f128
	{
		#line 1366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(ReciprocalEstimate)(ADV_UPCS(Tanh)($this.$ref()).$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getCsch($extension_Float128_1271_f128 const & $this ) -> const $extension_Float128_1271_f128
	{
		#line 1368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(ReciprocalEstimate)(ADV_UPCS(Sinh)($this.$ref()).$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getSech($extension_Float128_1271_f128 const & $this ) -> const $extension_Float128_1271_f128
	{
		#line 1370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(ReciprocalEstimate)(ADV_UPCS(Cosh)($this.$ref()).$ref())); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	
} namespace $extensions { using namespace System;
#line 1437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto Atan2Pi($extension_Float128_1425_f128 const& $this LIFETIMEBOUND, $extension_Float128_1425_f128 y)  -> const typename $extension_Float128_1425_f128
	{
		#line 1437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Atan2)($this.$ref(), y) / ADV_USPCS(Pi, Builtin::f128)()); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1986 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto Lerp($extension_Float128_1425_f128 const& $this LIFETIMEBOUND, $extension_Float128_1425_f128 end, $extension_Float128_1425_f128 amount) noexcept -> const typename $extension_Float128_1425_f128
	{
		#line 1986 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY($this * (ADV_USPCS(One, $extension_Float128_1425_f128)() - amount) + (end * amount)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto $static_getEpsilon<$extension_Float128_1425_f128>::get() -> const $extension_Float128_1425_f128
	{
		#line 1426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Builtin::f128), FromBits)(Builtin::u32(1U))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto $static_getNegativeInfinity<$extension_Float128_1425_f128>::get() -> const $extension_Float128_1425_f128
	{
		#line 1427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Builtin::f128), FromBits)(__Float128$Protected::BiasedExponentMask | __Float128$Protected::SignMask)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto $static_getPositiveInfinity<$extension_Float128_1425_f128>::get() -> const $extension_Float128_1425_f128
	{
		#line 1428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Builtin::f128), FromBits)(__Float128$Protected::BiasedExponentMask)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto $static_getNaN<$extension_Float128_1425_f128>::get() -> const $extension_Float128_1425_f128
	{
		#line 1429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Builtin::f128), FromBits)(__Float128$Protected::BiasedExponentMask | (Builtin::u128(1ULL) << (__Float128$Protected::BiasedExponentShift - Builtin::i32(1))))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto $static_getNegativeZero<$extension_Float128_1425_f128>::get() -> const $extension_Float128_1425_f128
	{
		#line 1430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Builtin::f128), FromBits)(__Float128$Protected::SignMask)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getBitIncrement($extension_Float128_1425_f128 const & $this ) -> const $extension_Float128_1425_f128
	{
		#line 1447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype(ADV_UPCS(Bits)($this.$ref()))> bits = ADV_UPCS(Bits)($this.$ref()); 
		#line 1448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (((bits & __Float128$Protected::BiasedExponentMask) <=> __Float128$Protected::BiasedExponentMask) >= 0) {
			#line 1452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return bits == (__Float128$Protected::BiasedExponentMask | __Float128$Protected::SignMask) ? ADV_USPCS(MinValue, Builtin::f128)() : $this;
		}
		#line 1456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (bits == __Float128$Protected::SignMask) {
			#line 1457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return ADV_USPCS(Epsilon, Builtin::f128)();
		}
		#line 1460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((ADV_UFCS(NarrowToInt128)(bits.$ref()) <=> Builtin::i32(0)) < 0) {
			#line 1461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			bits--;
		} else {
			#line 1462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			{
				#line 1463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				bits++;
			}
		}
		#line 1466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return ADV_USFCS((Builtin::f128), FromBits)(bits);
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getBitDecrement($extension_Float128_1425_f128 const & $this ) -> const $extension_Float128_1425_f128
	{
		#line 1476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype(ADV_UPCS(Bits)($this.$ref()))> bits = ADV_UPCS(Bits)($this.$ref()); 
		#line 1477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (((bits & __Float128$Protected::BiasedExponentMask) <=> __Float128$Protected::BiasedExponentMask) >= 0) {
			#line 1481 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return bits == __Float128$Protected::BiasedExponentMask ? ADV_USPCS(MaxValue, Builtin::f128)() : $this;
		}
		#line 1485 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (bits == Builtin::u32(0U)) {
			#line 1486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return -ADV_USPCS(Epsilon, Builtin::f128)();
		}
		#line 1489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((ADV_UFCS(NarrowToInt128)(bits.$ref()) <=> Builtin::i32(0)) < 0) {
			#line 1490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			bits++;
		} else {
			#line 1491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			{
				#line 1492 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				bits--;
			}
		}
		#line 1495 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return ADV_USFCS((Builtin::f128), FromBits)(bits);
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getILogB($extension_Float128_1425_f128 const & $this ) -> const Builtin::i32
	{
		#line 1500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		constexpr Builtin::Auto<decltype(Builtin::i32(-1) - Builtin::i32(0x7FFFFFFF))> intNan = Builtin::i32(-1) - Builtin::i32(0x7FFFFFFF);
		#line 1501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const Builtin::Auto<decltype(__Float128$Protected::BiasedExponent($this))> exp = __Float128$Protected::BiasedExponent($this); 
		#line 1502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (exp == Builtin::i32(0)) {
			#line 1503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if ($this == Builtin::i32(0)) {
				#line 1504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				return intNan;
			}
			#line 1507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			ADV_ASSERT((ADV_UPCS(IsSubnormal)($this.$ref())), "this.IsSubnormal");
			#line 1508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return Builtin::i32{__Float128$Protected::MinExponent} - (Builtin::i32{ADV_UPCS(LeadingZeroCount)(__Float128$Protected::TrailingSignificand($this).$ref())} - Builtin::i32(15));
		}
		#line 1510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (exp == __Float128$Protected::MaxBiasedExponent) {
			#line 1511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return ADV_UPCS(IsNaN)($this.$ref()) ? intNan : ADV_USPCS(MaxValue, Builtin::i32)();
		}
		#line 1514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return Builtin::i32{exp} - __Float128$Protected::ExpBias;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getReciprocalEstimate($extension_Float128_1425_f128 const & $this ) -> const $extension_Float128_1425_f128
	{
		#line 1519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return ADV_USPCS(One, $extension_Float128_1425_f128)() / $this;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getReciprocalSqrtEstimate($extension_Float128_1425_f128 const & $this ) -> const $extension_Float128_1425_f128
	{
		#line 1521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(ReciprocalEstimate)(ADV_UPCS(Sqrt)($this.$ref()).$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getCategory($extension_Float128_1425_f128 const & $this ) -> const FloatingPointCategory
	{
		#line 1526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (ADV_UPCS(IsNaN)($this.$ref())) {
			#line 1527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return ADV_USPCS(NaN, FloatingPointCategory)();
		} else {
			#line 1528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if (ADV_UPCS(IsInfinity)($this.$ref())) {
				#line 1529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				return ADV_USPCS(Infinity, FloatingPointCategory)();
			} else {
				#line 1530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if (ADV_UPCS(IsZero)($this.$ref())) {
					#line 1531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					return ADV_USPCS(Zero, FloatingPointCategory)();
				} else {
					#line 1532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					if (ADV_UPCS(IsSubnormal)($this.$ref())) {
						#line 1533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						return ADV_USPCS(Subnormal, FloatingPointCategory)();
					} else {
						#line 1534 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						{
							#line 1535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
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
#line 2030 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getGamma($extension_Float128_1425_f128 const & $this ) -> const $extension_Float128_1425_f128
	{
		#line 2030 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::f64{std::tgammal(Builtin::Cast<true, Builtin::f64>($this))}); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 2032 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getLnGamma($extension_Float128_1425_f128 const & $this ) -> const $extension_Float128_1425_f128
	{
		#line 2032 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::f64{std::lgammal(Builtin::Cast<true, Builtin::f64>($this))}); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 2034 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getErf($extension_Float128_1425_f128 const & $this ) -> const $extension_Float128_1425_f128
	{
		#line 2034 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::f64{std::erfl(Builtin::Cast<true, Builtin::f64>($this))}); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 2036 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getErfc($extension_Float128_1425_f128 const & $this ) -> const $extension_Float128_1425_f128
	{
		#line 2036 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::f64{std::erfcl(Builtin::Cast<true, Builtin::f64>($this))}); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	
} namespace $extensions { using namespace System;
#line 2040 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto $static_getNumberBufferLength<$extension_Float128_2039_f128>::get() -> const Builtin::i32
	{
		#line 2040 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(767) + Builtin::i32(1) + Builtin::i32(1)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 2041 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto $static_getZeroBits<$extension_Float128_2039_f128>::get() -> const Builtin::u128
	{
		#line 2041 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(0U)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 2042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto $static_getInfinityBits<$extension_Float128_2039_f128>::get() -> const Builtin::u128
	{
		#line 2042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::ParseUInt128("0x7FFF0000000000000000000000000000")); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 2043 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto $static_getNormalMantissaMask<$extension_Float128_2039_f128>::get() -> const Builtin::u128
	{
		#line 2043 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY((Builtin::u128(1ULL) << __Float128$Protected::SignificandLength) - Builtin::u32(1U)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 2044 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto $static_getDenormalMantissaMask<$extension_Float128_2039_f128>::get() -> const Builtin::u128
	{
		#line 2044 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(__Float128$Protected::TrailingSignificandMask); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 2045 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto $static_getMinBinaryExponent<$extension_Float128_2039_f128>::get() -> const Builtin::i32
	{
		#line 2045 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(1) - __Float128$Protected::MaxExponent); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 2046 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto $static_getMaxBinaryExponent<$extension_Float128_2039_f128>::get() -> const Builtin::i32
	{
		#line 2046 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(__Float128$Protected::MaxExponent); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 2047 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto $static_getMinDecimalExponent<$extension_Float128_2039_f128>::get() -> const Builtin::i32
	{
		#line 2047 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(-4966)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 2048 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto $static_getMaxDecimalExponent<$extension_Float128_2039_f128>::get() -> const Builtin::i32
	{
		#line 2048 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(4932)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 2049 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto $static_getExponentBias<$extension_Float128_2039_f128>::get() -> const Builtin::i32
	{
		#line 2049 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(__Float128$Protected::ExpBias); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 2050 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto $static_getExponentBits<$extension_Float128_2039_f128>::get() -> const Builtin::u128
	{
		#line 2050 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(15U)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 2051 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto $static_getOverflowDecimalExponent<$extension_Float128_2039_f128>::get() -> const Builtin::i32
	{
		#line 2051 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl)((__Float128$Protected::MaxExponent + Builtin::i32(2) * __Float128$Protected::SignificandLength), Builtin::i32(3))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 2052 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto $static_getInfinityExponent<$extension_Float128_2039_f128>::get() -> const Builtin::i32
	{
		#line 2052 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(0x7FFF)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 2053 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto $static_getNormalMantissaBits<$extension_Float128_2039_f128>::get() -> const Builtin::u16
	{
		#line 2053 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u16>(__Float128$Protected::SignificandLength)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 2054 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto $static_getDenormalMantissaBits<$extension_Float128_2039_f128>::get() -> const Builtin::u16
	{
		#line 2054 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u16>(__Float128$Protected::TrailingSignificandLength)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 2055 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto $static_getMinFastFloatDecimalExponent<$extension_Float128_2039_f128>::get() -> const Builtin::i32
	{
		#line 2055 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(-4966)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 2056 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto $static_getMaxFastFloatDecimalExponent<$extension_Float128_2039_f128>::get() -> const Builtin::i32
	{
		#line 2056 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(4932)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 2057 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto $static_getMinExponentRoundToEven<$extension_Float128_2039_f128>::get() -> const Builtin::i32
	{
		#line 2057 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(-4)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 2058 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto $static_getMaxExponentRoundToEven<$extension_Float128_2039_f128>::get() -> const Builtin::i32
	{
		#line 2058 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(23)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 2059 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto $static_getMaxExponentFastPath<$extension_Float128_2039_f128>::get() -> const Builtin::i32
	{
		#line 2059 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(22)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 2060 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto $static_getMaxMantissaFastPath<$extension_Float128_2039_f128>::get() -> const Builtin::u128
	{
		#line 2060 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::u128(2ULL) << __Float128$Protected::TrailingSignificandLength); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	

}