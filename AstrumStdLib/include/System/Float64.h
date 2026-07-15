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
namespace __Unsafe {} namespace __Float64_Protected__Unsafe {}
//###############################################################################
//# Global type aliases
//###############################################################################
#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
using Float64 = Builtin::f64;
#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
using Double = Builtin::f64;
//###############################################################################
//# Type definitions
//###############################################################################
	} namespace __extensions { using namespace System;
#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	using __extension_Float64_14_f64 = Builtin::f64;
	#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	ADV_CHECK_INTERFACE(IMinMaxValue, IMinMaxValue);
	#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	template<class __TT> struct __static_getMinValue; template<> struct __static_getMinValue<__extension_Float64_14_f64> { static inline constexpr auto get() -> const __extension_Float64_14_f64; };
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	template<class __TT> struct __static_getMaxValue; template<> struct __static_getMaxValue<__extension_Float64_14_f64> { static inline constexpr auto get() -> const __extension_Float64_14_f64; };
	#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(__extension_Float64_14_f64, IMinMaxValue, IMinMaxValue, __extension_Float64_14_f64);
	} namespace System{
using __extensions::__static_getMinValue;
using __extensions::__static_getMaxValue;

		} namespace __extensions { using namespace System;
#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	using __extension_Float64_19_f64 = Builtin::f64;
	#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	ASTRUMSTD_API auto _operator_eq_eq_mul(__extension_Float64_19_f64 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool;
	#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto operator<=>(__extension_Float64_19_f64 const& __this LIFETIMEBOUND, Builtin::Nullable<__extension_Float64_19_f64> rhs) noexcept -> const Builtin::i32;
	#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	template<class __TT> struct __static_FromBits; template<> struct __static_FromBits<__extension_Float64_19_f64> { static inline constexpr auto get(Builtin::u64 bits)  -> const typename __extension_Float64_19_f64; };
	#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getBits(__extension_Float64_19_f64 const& __this ) -> const Builtin::u64;
	#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	template<class __TT> struct __static_getBitWidth; template<> struct __static_getBitWidth<__extension_Float64_19_f64> { static inline constexpr auto get() -> const Builtin::u32; };
	#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	template<class __TT> struct __static_getMinPositiveValue; template<> struct __static_getMinPositiveValue<__extension_Float64_19_f64> { static inline constexpr auto get() -> const __extension_Float64_19_f64; };
	#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getHashCode(__extension_Float64_19_f64 const& __this ) -> const Builtin::u64;
	} namespace System{
using __extensions::_operator_eq_eq_mul;
using __extensions::operator<=>;
using __extensions::__static_FromBits;
using __extensions::getBits;
using __extensions::__static_getBitWidth;
using __extensions::__static_getMinPositiveValue;
using __extensions::getHashCode;

		} namespace __extensions { using namespace System;
#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	using __extension_Float64_61_f64 = Builtin::f64;
	#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	ADV_CHECK_INTERFACE(IAbstractComparable, IAbstractComparable);
	#line 62 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	ASTRUMSTD_API auto _operator_lt_eq_gt_mul(__extension_Float64_61_f64 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32;
	#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(__extension_Float64_61_f64, IAbstractComparable, IAbstractComparable, __extension_Float64_61_f64);
	} namespace System{
using __extensions::_operator_lt_eq_gt_mul;

		} namespace __extensions { using namespace System;
#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	using __extension_Float64_76_f64 = Builtin::f64;
	#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	ADV_CHECK_INTERFACE(IConvertible, IConvertible);
	#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto ToBoolean(__extension_Float64_76_f64 const& __this LIFETIMEBOUND) noexcept -> const bool;
	#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto ToInt8(__extension_Float64_76_f64 const& __this LIFETIMEBOUND)  -> const Builtin::i8;
	#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto ToUInt8(__extension_Float64_76_f64 const& __this LIFETIMEBOUND)  -> const Builtin::u8;
	#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto ToInt16(__extension_Float64_76_f64 const& __this LIFETIMEBOUND)  -> const Builtin::i16;
	#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto ToUInt16(__extension_Float64_76_f64 const& __this LIFETIMEBOUND)  -> const Builtin::u16;
	#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto ToInt32(__extension_Float64_76_f64 const& __this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto ToUInt32(__extension_Float64_76_f64 const& __this LIFETIMEBOUND)  -> const Builtin::u32;
	#line 84 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto ToInt64(__extension_Float64_76_f64 const& __this LIFETIMEBOUND)  -> const Builtin::i64;
	#line 85 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto ToUInt64(__extension_Float64_76_f64 const& __this LIFETIMEBOUND)  -> const Builtin::u64;
	#line 86 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto ToInt128(__extension_Float64_76_f64 const& __this LIFETIMEBOUND)  -> const Builtin::i128;
	#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto ToUInt128(__extension_Float64_76_f64 const& __this LIFETIMEBOUND)  -> const Builtin::u128;
	#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto ToIsize(__extension_Float64_76_f64 const& __this LIFETIMEBOUND)  -> const Builtin::isize;
	#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto ToUsize(__extension_Float64_76_f64 const& __this LIFETIMEBOUND)  -> const Builtin::usize;
	#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto ToFloat32(__extension_Float64_76_f64 const& __this LIFETIMEBOUND)  -> const Builtin::f32;
	#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto ToFloat64(__extension_Float64_76_f64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::f64;
	#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto ToByte(__extension_Float64_76_f64 const& __this LIFETIMEBOUND)  -> const Builtin::u8;
	#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto ToChar(__extension_Float64_76_f64 const& __this LIFETIMEBOUND)  -> const Builtin::char32;
	#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(__extension_Float64_76_f64, IConvertible, IConvertible, __extension_Float64_76_f64);
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
#line 98 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	using __extension_Float64_98_f64 = Builtin::f64;
	#line 98 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	ADV_CHECK_INTERFACE(IDivisibleArithmetic, IDivisibleArithmetic);
	#line 100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	template<class T> inline constexpr auto _operator_div_mod(__extension_Float64_98_f64 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_Float64_98_f64, __extension_Float64_98_f64>;
	#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	template<class T> inline constexpr auto _operator_div_not(__extension_Float64_98_f64 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Float64_98_f64;
	#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto _operator_div_not_eq(__extension_Float64_98_f64 & __this , auto rhs)  -> typename __extension_Float64_98_f64&;
	#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	template<class T> inline constexpr auto _operator_div_lt(__extension_Float64_98_f64 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Float64_98_f64;
	#line 112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto _operator_div_lt_eq(__extension_Float64_98_f64 & __this , auto rhs)  -> typename __extension_Float64_98_f64&;
	#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	template<class T> inline constexpr auto _operator_div_gt(__extension_Float64_98_f64 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Float64_98_f64;
	#line 116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto _operator_div_gt_eq(__extension_Float64_98_f64 & __this , auto rhs)  -> typename __extension_Float64_98_f64&;
	#line 98 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(__extension_Float64_98_f64, IDivisibleArithmetic, IDivisibleArithmetic, __extension_Float64_98_f64);
	} namespace System{
using __extensions::_operator_div_mod;
using __extensions::_operator_div_not;
using __extensions::_operator_div_not_eq;
using __extensions::_operator_div_lt;
using __extensions::_operator_div_lt_eq;
using __extensions::_operator_div_gt;
using __extensions::_operator_div_gt_eq;

		} namespace __extensions { using namespace System;
#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	using __extension_Float64_120_f64 = Builtin::f64;
	#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	ADV_CHECK_INTERFACE(ISignedIntegerPowerArithmetic, ISignedIntegerPowerArithmetic);
	#line 122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto _operator_xor_xor(__extension_Float64_120_f64 const& __this LIFETIMEBOUND, Builtin::i32 exp)  -> const typename __extension_Float64_120_f64;
	#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto _operator_xor_xor_eq(__extension_Float64_120_f64 & __this , Builtin::i32 exp)  -> typename __extension_Float64_120_f64&;
	#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(__extension_Float64_120_f64, ISignedIntegerPowerArithmetic, ISignedIntegerPowerArithmetic, __extension_Float64_120_f64);
	} namespace System{
using __extensions::_operator_xor_xor;
using __extensions::_operator_xor_xor_eq;

		} namespace __extensions { using namespace System;
#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	using __extension_Float64_161_f64 = Builtin::f64;
	#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	ADV_CHECK_INTERFACE(INumberBase, INumberBase);
	#line 198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto MaxMagnitude(__extension_Float64_161_f64 const& __this LIFETIMEBOUND, __extension_Float64_161_f64 rhs) noexcept -> const typename __extension_Float64_161_f64;
	#line 216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto MaxMagnitudeNumber(__extension_Float64_161_f64 const& __this LIFETIMEBOUND, __extension_Float64_161_f64 rhs) noexcept -> const typename __extension_Float64_161_f64;
	#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto MinMagnitude(__extension_Float64_161_f64 const& __this LIFETIMEBOUND, __extension_Float64_161_f64 rhs) noexcept -> const typename __extension_Float64_161_f64;
	#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto MinMagnitudeNumber(__extension_Float64_161_f64 const& __this LIFETIMEBOUND, __extension_Float64_161_f64 rhs) noexcept -> const typename __extension_Float64_161_f64;
	#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	ASTRUMSTD_API auto Parse(__extension_Float64_161_f64 const& __this LIFETIMEBOUND, Builtin::Str input)  -> const typename __extension_Float64_161_f64;
	#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	ASTRUMSTD_API auto TryParse(__extension_Float64_161_f64 const& __this LIFETIMEBOUND, Builtin::Str input) noexcept -> const Builtin::Nullable<__extension_Float64_161_f64>;
	#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto NarrowToInt8(__extension_Float64_161_f64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i8;
	#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto NarrowToUInt8(__extension_Float64_161_f64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u8;
	#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto NarrowToInt16(__extension_Float64_161_f64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i16;
	#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto NarrowToUInt16(__extension_Float64_161_f64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u16;
	#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto NarrowToInt32(__extension_Float64_161_f64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i32;
	#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto NarrowToUInt32(__extension_Float64_161_f64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u32;
	#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto NarrowToInt64(__extension_Float64_161_f64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i64;
	#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto NarrowToUInt64(__extension_Float64_161_f64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u64;
	#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto NarrowToInt128(__extension_Float64_161_f64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i128;
	#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto NarrowToUInt128(__extension_Float64_161_f64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u128;
	#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto NarrowToIsize(__extension_Float64_161_f64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::isize;
	#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto NarrowToUsize(__extension_Float64_161_f64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::usize;
	#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	template<class __TT> struct __static_getOne; template<> struct __static_getOne<__extension_Float64_161_f64> { static inline constexpr auto get() -> const __extension_Float64_161_f64; };
	#line 163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	template<class __TT> struct __static_getZero; template<> struct __static_getZero<__extension_Float64_161_f64> { static inline constexpr auto get() -> const __extension_Float64_161_f64; };
	#line 164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	template<class __TT> struct __static_getRadix; template<> struct __static_getRadix<__extension_Float64_161_f64> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getAbs(__extension_Float64_161_f64 const& __this ) -> const __extension_Float64_161_f64;
	#line 172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getIsCanonical(__extension_Float64_161_f64 const& __this ) -> const bool;
	#line 173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getIsComplexNumber(__extension_Float64_161_f64 const& __this ) -> const bool;
	#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getIsEvenInteger(__extension_Float64_161_f64 const& __this ) -> const bool;
	#line 175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getIsFinite(__extension_Float64_161_f64 const& __this ) -> const bool;
	#line 176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getIsImaginaryNumber(__extension_Float64_161_f64 const& __this ) -> const bool;
	#line 177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getIsInfinity(__extension_Float64_161_f64 const& __this ) -> const bool;
	#line 178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getIsInteger(__extension_Float64_161_f64 const& __this ) -> const bool;
	#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getIsNaN(__extension_Float64_161_f64 const& __this ) -> const bool;
	#line 180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getIsNegative(__extension_Float64_161_f64 const& __this ) -> const bool;
	#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getIsNegativeInfinity(__extension_Float64_161_f64 const& __this ) -> const bool;
	#line 182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getIsNormal(__extension_Float64_161_f64 const& __this ) -> const bool;
	#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getIsOddInteger(__extension_Float64_161_f64 const& __this ) -> const bool;
	#line 188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getIsPositive(__extension_Float64_161_f64 const& __this ) -> const bool;
	#line 189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getIsPositiveInfinity(__extension_Float64_161_f64 const& __this ) -> const bool;
	#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getIsRealNumber(__extension_Float64_161_f64 const& __this ) -> const bool;
	#line 191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getIsSubnormal(__extension_Float64_161_f64 const& __this ) -> const bool;
	#line 196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getIsZero(__extension_Float64_161_f64 const& __this ) -> const bool;
	#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(__extension_Float64_161_f64, INumberBase, INumberBase, __extension_Float64_161_f64);
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
#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	using __extension_Float64_296_f64 = Builtin::f64;
	#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	ADV_CHECK_INTERFACE(ISignedNumber, ISignedNumber);
	#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	template<class __TT> struct __static_getMinusOne; template<> struct __static_getMinusOne<__extension_Float64_296_f64> { static inline constexpr auto get() -> const __extension_Float64_296_f64; };
	#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(__extension_Float64_296_f64, ISignedNumber, ISignedNumber, __extension_Float64_296_f64);
	} namespace System{
using __extensions::__static_getMinusOne;

		} namespace __extensions { using namespace System;
#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	using __extension_Float64_300_f64 = Builtin::f64;
	#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	ADV_CHECK_INTERFACE(INumber, INumber);
	#line 308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto CopySign(__extension_Float64_300_f64 const& __this LIFETIMEBOUND, __extension_Float64_300_f64 sign) noexcept -> const typename __extension_Float64_300_f64;
	#line 320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto Max(__extension_Float64_300_f64 const& __this LIFETIMEBOUND, __extension_Float64_300_f64 rhs) noexcept -> const typename __extension_Float64_300_f64;
	#line 330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto MaxNumber(__extension_Float64_300_f64 const& __this LIFETIMEBOUND, __extension_Float64_300_f64 rhs) noexcept -> const typename __extension_Float64_300_f64;
	#line 340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto Min(__extension_Float64_300_f64 const& __this LIFETIMEBOUND, __extension_Float64_300_f64 rhs) noexcept -> const typename __extension_Float64_300_f64;
	#line 350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto MinNumber(__extension_Float64_300_f64 const& __this LIFETIMEBOUND, __extension_Float64_300_f64 rhs) noexcept -> const typename __extension_Float64_300_f64;
	#line 360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto Clamp(__extension_Float64_300_f64 const& __this LIFETIMEBOUND, __extension_Float64_300_f64 min, __extension_Float64_300_f64 max)  -> const typename __extension_Float64_300_f64;
	#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getSign(__extension_Float64_300_f64 const& __this ) -> const Builtin::i32;
	#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(__extension_Float64_300_f64, INumber, INumber, __extension_Float64_300_f64);
	} namespace System{
using __extensions::CopySign;
using __extensions::Max;
using __extensions::MaxNumber;
using __extensions::Min;
using __extensions::MinNumber;
using __extensions::Clamp;
using __extensions::getSign;

		} namespace __extensions { using namespace System;
#line 403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	using __extension_Float64_403_f64 = Builtin::f64;
	#line 403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	ADV_CHECK_INTERFACE(IBinaryNumber, IBinaryNumber);
	#line 443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto Log(__extension_Float64_403_f64 const& __this LIFETIMEBOUND, __extension_Float64_403_f64 base) noexcept -> const typename __extension_Float64_403_f64;
	#line 464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto Midpoint(__extension_Float64_403_f64 const& __this LIFETIMEBOUND, __extension_Float64_403_f64 rhs) noexcept -> const typename __extension_Float64_403_f64;
	#line 480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto IsMultipleOf(__extension_Float64_403_f64 const& __this LIFETIMEBOUND, __extension_Float64_403_f64 rhs) noexcept -> const bool;
	#line 405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	template<class __TT> struct __static_getAllBitsSet; template<> struct __static_getAllBitsSet<__extension_Float64_403_f64> { static inline constexpr auto get() -> const __extension_Float64_403_f64; };
	#line 408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getIsPow2(__extension_Float64_403_f64 const& __this ) -> const bool;
	#line 434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getLog2(__extension_Float64_403_f64 const& __this ) -> const __extension_Float64_403_f64;
	#line 438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getLog10(__extension_Float64_403_f64 const& __this ) -> const __extension_Float64_403_f64;
	#line 403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(__extension_Float64_403_f64, IBinaryNumber, IBinaryNumber, __extension_Float64_403_f64);
	} namespace System{
using __extensions::Log;
using __extensions::Midpoint;
using __extensions::IsMultipleOf;
using __extensions::__static_getAllBitsSet;
using __extensions::getIsPow2;
using __extensions::getLog2;
using __extensions::getLog10;

		} namespace __extensions { using namespace System;
#line 494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	using __extension_Float64_494_f64 = Builtin::f64;
	#line 494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	ADV_CHECK_INTERFACE(IFloatingPointConstants, IFloatingPointConstants);
	#line 496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	template<class __TT> struct __static_getPi; template<> struct __static_getPi<__extension_Float64_494_f64> { static inline constexpr auto get() -> const __extension_Float64_494_f64; };
	#line 497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	template<class __TT> struct __static_getE; template<> struct __static_getE<__extension_Float64_494_f64> { static inline constexpr auto get() -> const __extension_Float64_494_f64; };
	#line 498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	template<class __TT> struct __static_getTau; template<> struct __static_getTau<__extension_Float64_494_f64> { static inline constexpr auto get() -> const __extension_Float64_494_f64; };
	#line 494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(__extension_Float64_494_f64, IFloatingPointConstants, IFloatingPointConstants, __extension_Float64_494_f64);
	} namespace System{
using __extensions::__static_getPi;
using __extensions::__static_getE;
using __extensions::__static_getTau;

		} namespace __extensions { using namespace System;
#line 501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	using __extension_Float64_501_f64 = Builtin::f64;
	#line 501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	ADV_CHECK_INTERFACE(IFloatingPoint, IFloatingPoint);
	#line 519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto CeilToInt32(__extension_Float64_501_f64 const& __this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto CeilToInt64(__extension_Float64_501_f64 const& __this LIFETIMEBOUND)  -> const Builtin::i64;
	#line 521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto CeilToInt128(__extension_Float64_501_f64 const& __this LIFETIMEBOUND)  -> const Builtin::i128;
	#line 536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto FloorToInt32(__extension_Float64_501_f64 const& __this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto FloorToInt64(__extension_Float64_501_f64 const& __this LIFETIMEBOUND)  -> const Builtin::i64;
	#line 538 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto FloorToInt128(__extension_Float64_501_f64 const& __this LIFETIMEBOUND)  -> const Builtin::i128;
	#line 552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto TruncateToInt32(__extension_Float64_501_f64 const& __this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto TruncateToInt64(__extension_Float64_501_f64 const& __this LIFETIMEBOUND)  -> const Builtin::i64;
	#line 554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto TruncateToInt128(__extension_Float64_501_f64 const& __this LIFETIMEBOUND)  -> const Builtin::i128;
	#line 568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto RoundToInt32(__extension_Float64_501_f64 const& __this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto RoundToInt64(__extension_Float64_501_f64 const& __this LIFETIMEBOUND)  -> const Builtin::i64;
	#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto RoundToInt128(__extension_Float64_501_f64 const& __this LIFETIMEBOUND)  -> const Builtin::i128;
	#line 618 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto RoundTiesEvenToInt32(__extension_Float64_501_f64 const& __this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto RoundTiesEvenToInt64(__extension_Float64_501_f64 const& __this LIFETIMEBOUND)  -> const Builtin::i64;
	#line 620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto RoundTiesEvenToInt128(__extension_Float64_501_f64 const& __this LIFETIMEBOUND)  -> const Builtin::i128;
	#line 622 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto Round(__extension_Float64_501_f64 const& __this LIFETIMEBOUND, Builtin::u32 digits)  -> const typename __extension_Float64_501_f64;
	#line 623 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto Round(__extension_Float64_501_f64 const& __this LIFETIMEBOUND, MidpointRounding rounding)  -> const typename __extension_Float64_501_f64;
	#line 635 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto Round(__extension_Float64_501_f64 const& __this LIFETIMEBOUND, Builtin::u32 digits, MidpointRounding rounding)  -> const typename __extension_Float64_501_f64;
	#line 504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getFractionalPart(__extension_Float64_501_f64 const& __this ) -> const __extension_Float64_501_f64;
	#line 509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getCeil(__extension_Float64_501_f64 const& __this ) -> const __extension_Float64_501_f64;
	#line 526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getFloor(__extension_Float64_501_f64 const& __this ) -> const __extension_Float64_501_f64;
	#line 543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getTruncate(__extension_Float64_501_f64 const& __this ) -> const __extension_Float64_501_f64;
	#line 559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getRound(__extension_Float64_501_f64 const& __this ) -> const __extension_Float64_501_f64;
	#line 575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getRoundTiesEven(__extension_Float64_501_f64 const& __this ) -> const __extension_Float64_501_f64;
	#line 667 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getExponentByteCount(__extension_Float64_501_f64 const& __this ) -> const Builtin::u32;
	#line 668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getExponentShortestBitLength(__extension_Float64_501_f64 const& __this ) -> const Builtin::u32;
	#line 677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getSignificandBitLength(__extension_Float64_501_f64 const& __this ) -> const Builtin::u32;
	#line 678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getSignificandByteCount(__extension_Float64_501_f64 const& __this ) -> const Builtin::u32;
	#line 501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(__extension_Float64_501_f64, IFloatingPoint, IFloatingPoint, __extension_Float64_501_f64);
	} namespace System{
using __extensions::CeilToInt32;
using __extensions::CeilToInt64;
using __extensions::CeilToInt128;
using __extensions::FloorToInt32;
using __extensions::FloorToInt64;
using __extensions::FloorToInt128;
using __extensions::TruncateToInt32;
using __extensions::TruncateToInt64;
using __extensions::TruncateToInt128;
using __extensions::RoundToInt32;
using __extensions::RoundToInt64;
using __extensions::RoundToInt128;
using __extensions::RoundTiesEvenToInt32;
using __extensions::RoundTiesEvenToInt64;
using __extensions::RoundTiesEvenToInt128;
using __extensions::Round;
using __extensions::Round;
using __extensions::Round;
using __extensions::getFractionalPart;
using __extensions::getCeil;
using __extensions::getFloor;
using __extensions::getTruncate;
using __extensions::getRound;
using __extensions::getRoundTiesEven;
using __extensions::getExponentByteCount;
using __extensions::getExponentShortestBitLength;
using __extensions::getSignificandBitLength;
using __extensions::getSignificandByteCount;

		} namespace __extensions { using namespace System;
#line 682 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	using __extension_Float64_682_f64 = Builtin::f64;
	#line 682 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	ADV_CHECK_INTERFACE(IPowerArithmetic, IPowerArithmetic);
	#line 683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto _operator_mul_mul(__extension_Float64_682_f64 const& __this LIFETIMEBOUND, __extension_Float64_682_f64 exp) noexcept -> const typename __extension_Float64_682_f64;
	#line 684 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto _operator_mul_mul_eq(__extension_Float64_682_f64 & __this , __extension_Float64_682_f64 exp) noexcept -> typename __extension_Float64_682_f64&;
	#line 682 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(__extension_Float64_682_f64, IPowerArithmetic, IPowerArithmetic, __extension_Float64_682_f64);
	} namespace System{
using __extensions::_operator_mul_mul;
using __extensions::_operator_mul_mul_eq;

		} namespace __extensions { using namespace System;
#line 687 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	using __extension_Float64_687_f64 = Builtin::f64;
	#line 687 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	ADV_CHECK_INTERFACE(IExponentialFunctions, IExponentialFunctions);
	#line 689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getExp(__extension_Float64_687_f64 const& __this ) -> const __extension_Float64_687_f64;
	#line 691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getExp2(__extension_Float64_687_f64 const& __this ) -> const __extension_Float64_687_f64;
	#line 693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getExp10(__extension_Float64_687_f64 const& __this ) -> const __extension_Float64_687_f64;
	#line 695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getExpM1(__extension_Float64_687_f64 const& __this ) -> const __extension_Float64_687_f64;
	#line 697 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getExp2M1(__extension_Float64_687_f64 const& __this ) -> const __extension_Float64_687_f64;
	#line 699 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getExp10M1(__extension_Float64_687_f64 const& __this ) -> const __extension_Float64_687_f64;
	#line 687 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(__extension_Float64_687_f64, IExponentialFunctions, IExponentialFunctions, __extension_Float64_687_f64);
	} namespace System{
using __extensions::getExp;
using __extensions::getExp2;
using __extensions::getExp10;
using __extensions::getExpM1;
using __extensions::getExp2M1;
using __extensions::getExp10M1;

		} namespace __extensions { using namespace System;
#line 702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	using __extension_Float64_702_f64 = Builtin::f64;
	#line 702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	ADV_CHECK_INTERFACE(ILogarithmicFunctions, ILogarithmicFunctions);
	#line 704 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getLn(__extension_Float64_702_f64 const& __this ) -> const __extension_Float64_702_f64;
	#line 706 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getLnP1(__extension_Float64_702_f64 const& __this ) -> const __extension_Float64_702_f64;
	#line 708 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getLog2P1(__extension_Float64_702_f64 const& __this ) -> const __extension_Float64_702_f64;
	#line 710 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getLog10P1(__extension_Float64_702_f64 const& __this ) -> const __extension_Float64_702_f64;
	#line 702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(__extension_Float64_702_f64, ILogarithmicFunctions, ILogarithmicFunctions, __extension_Float64_702_f64);
	} namespace System{
using __extensions::getLn;
using __extensions::getLnP1;
using __extensions::getLog2P1;
using __extensions::getLog10P1;

		} namespace __extensions { using namespace System;
#line 713 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	using __extension_Float64_713_f64 = Builtin::f64;
	#line 713 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	ADV_CHECK_INTERFACE(IRootFunctions, IRootFunctions);
	#line 719 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	ASTRUMSTD_API auto Root(__extension_Float64_713_f64 const& __this LIFETIMEBOUND, Builtin::i32 n)  -> const typename __extension_Float64_713_f64;
	#line 792 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	ASTRUMSTD_API auto Hypot(__extension_Float64_713_f64 const& __this LIFETIMEBOUND, __extension_Float64_713_f64 y)  -> const typename __extension_Float64_713_f64;
	#line 715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getSqrt(__extension_Float64_713_f64 const& __this ) -> const __extension_Float64_713_f64;
	#line 717 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getCbrt(__extension_Float64_713_f64 const& __this ) -> const __extension_Float64_713_f64;
	#line 713 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(__extension_Float64_713_f64, IRootFunctions, IRootFunctions, __extension_Float64_713_f64);
	} namespace System{
using __extensions::Root;
using __extensions::Hypot;
using __extensions::getSqrt;
using __extensions::getCbrt;

		} namespace __extensions { using namespace System;
#line 821 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	using __extension_Float64_821_f64 = Builtin::f64;
	#line 821 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	ADV_CHECK_INTERFACE(ITrigonometricFunctions, ITrigonometricFunctions);
	#line 1062 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto ToRadians(__extension_Float64_821_f64 const& __this LIFETIMEBOUND) noexcept -> const typename __extension_Float64_821_f64;
	#line 1064 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto ToDegrees(__extension_Float64_821_f64 const& __this LIFETIMEBOUND) noexcept -> const typename __extension_Float64_821_f64;
	#line 823 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getSin(__extension_Float64_821_f64 const& __this ) -> const __extension_Float64_821_f64;
	#line 825 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getCos(__extension_Float64_821_f64 const& __this ) -> const __extension_Float64_821_f64;
	#line 827 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getTan(__extension_Float64_821_f64 const& __this ) -> const __extension_Float64_821_f64;
	#line 829 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getCot(__extension_Float64_821_f64 const& __this ) -> const __extension_Float64_821_f64;
	#line 831 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getSec(__extension_Float64_821_f64 const& __this ) -> const __extension_Float64_821_f64;
	#line 833 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getCsc(__extension_Float64_821_f64 const& __this ) -> const __extension_Float64_821_f64;
	#line 835 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getAsin(__extension_Float64_821_f64 const& __this ) -> const __extension_Float64_821_f64;
	#line 837 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getAcos(__extension_Float64_821_f64 const& __this ) -> const __extension_Float64_821_f64;
	#line 839 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getAtan(__extension_Float64_821_f64 const& __this ) -> const __extension_Float64_821_f64;
	#line 841 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getAcot(__extension_Float64_821_f64 const& __this ) -> const __extension_Float64_821_f64;
	#line 843 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getAsec(__extension_Float64_821_f64 const& __this ) -> const __extension_Float64_821_f64;
	#line 845 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getAcsc(__extension_Float64_821_f64 const& __this ) -> const __extension_Float64_821_f64;
	#line 847 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getSinCos(__extension_Float64_821_f64 const& __this ) -> const std::tuple<__extension_Float64_821_f64, __extension_Float64_821_f64>;
	#line 849 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	ASTRUMSTD_API auto getSinPi(__extension_Float64_821_f64 const& __this ) -> const __extension_Float64_821_f64;
	#line 887 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	ASTRUMSTD_API auto getCosPi(__extension_Float64_821_f64 const& __this ) -> const __extension_Float64_821_f64;
	#line 927 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	ASTRUMSTD_API auto getSinCosPi(__extension_Float64_821_f64 const& __this ) -> const std::tuple<__extension_Float64_821_f64, __extension_Float64_821_f64>;
	#line 1000 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	ASTRUMSTD_API auto getTanPi(__extension_Float64_821_f64 const& __this ) -> const __extension_Float64_821_f64;
	#line 1043 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getCotPi(__extension_Float64_821_f64 const& __this ) -> const __extension_Float64_821_f64;
	#line 1045 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getSecPi(__extension_Float64_821_f64 const& __this ) -> const __extension_Float64_821_f64;
	#line 1047 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getCscPi(__extension_Float64_821_f64 const& __this ) -> const __extension_Float64_821_f64;
	#line 1049 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getAsinPi(__extension_Float64_821_f64 const& __this ) -> const __extension_Float64_821_f64;
	#line 1051 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getAcosPi(__extension_Float64_821_f64 const& __this ) -> const __extension_Float64_821_f64;
	#line 1053 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getAtanPi(__extension_Float64_821_f64 const& __this ) -> const __extension_Float64_821_f64;
	#line 1055 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getAcotPi(__extension_Float64_821_f64 const& __this ) -> const __extension_Float64_821_f64;
	#line 1057 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getAsecPi(__extension_Float64_821_f64 const& __this ) -> const __extension_Float64_821_f64;
	#line 1059 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getAcscPi(__extension_Float64_821_f64 const& __this ) -> const __extension_Float64_821_f64;
	#line 821 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(__extension_Float64_821_f64, ITrigonometricFunctions, ITrigonometricFunctions, __extension_Float64_821_f64);
	} namespace System{
using __extensions::ToRadians;
using __extensions::ToDegrees;
using __extensions::getSin;
using __extensions::getCos;
using __extensions::getTan;
using __extensions::getCot;
using __extensions::getSec;
using __extensions::getCsc;
using __extensions::getAsin;
using __extensions::getAcos;
using __extensions::getAtan;
using __extensions::getAcot;
using __extensions::getAsec;
using __extensions::getAcsc;
using __extensions::getSinCos;
using __extensions::getSinPi;
using __extensions::getCosPi;
using __extensions::getSinCosPi;
using __extensions::getTanPi;
using __extensions::getCotPi;
using __extensions::getSecPi;
using __extensions::getCscPi;
using __extensions::getAsinPi;
using __extensions::getAcosPi;
using __extensions::getAtanPi;
using __extensions::getAcotPi;
using __extensions::getAsecPi;
using __extensions::getAcscPi;

		} namespace __extensions { using namespace System;
#line 1067 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	using __extension_Float64_1067_f64 = Builtin::f64;
	#line 1067 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	ADV_CHECK_INTERFACE(IHyperbolicFunctions, IHyperbolicFunctions);
	#line 1069 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getAcosh(__extension_Float64_1067_f64 const& __this ) -> const __extension_Float64_1067_f64;
	#line 1071 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getAcoth(__extension_Float64_1067_f64 const& __this ) -> const __extension_Float64_1067_f64;
	#line 1073 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getAcsch(__extension_Float64_1067_f64 const& __this ) -> const __extension_Float64_1067_f64;
	#line 1075 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getAsech(__extension_Float64_1067_f64 const& __this ) -> const __extension_Float64_1067_f64;
	#line 1077 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getAsinh(__extension_Float64_1067_f64 const& __this ) -> const __extension_Float64_1067_f64;
	#line 1079 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getAtanh(__extension_Float64_1067_f64 const& __this ) -> const __extension_Float64_1067_f64;
	#line 1081 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getCosh(__extension_Float64_1067_f64 const& __this ) -> const __extension_Float64_1067_f64;
	#line 1083 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getCoth(__extension_Float64_1067_f64 const& __this ) -> const __extension_Float64_1067_f64;
	#line 1085 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getCsch(__extension_Float64_1067_f64 const& __this ) -> const __extension_Float64_1067_f64;
	#line 1087 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getSech(__extension_Float64_1067_f64 const& __this ) -> const __extension_Float64_1067_f64;
	#line 1089 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getSinh(__extension_Float64_1067_f64 const& __this ) -> const __extension_Float64_1067_f64;
	#line 1091 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getTanh(__extension_Float64_1067_f64 const& __this ) -> const __extension_Float64_1067_f64;
	#line 1067 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(__extension_Float64_1067_f64, IHyperbolicFunctions, IHyperbolicFunctions, __extension_Float64_1067_f64);
	} namespace System{
using __extensions::getAcosh;
using __extensions::getAcoth;
using __extensions::getAcsch;
using __extensions::getAsech;
using __extensions::getAsinh;
using __extensions::getAtanh;
using __extensions::getCosh;
using __extensions::getCoth;
using __extensions::getCsch;
using __extensions::getSech;
using __extensions::getSinh;
using __extensions::getTanh;

		} namespace __extensions { using namespace System;
#line 1094 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	using __extension_Float64_1094_f64 = Builtin::f64;
	#line 1094 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	ADV_CHECK_INTERFACE(IBinaryFloatingPointIeee754, IBinaryFloatingPointIeee754);
	#line 1102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto Atan2(__extension_Float64_1094_f64 const& __this LIFETIMEBOUND, __extension_Float64_1094_f64 y)  -> const typename __extension_Float64_1094_f64;
	#line 1103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto Atan2Pi(__extension_Float64_1094_f64 const& __this LIFETIMEBOUND, __extension_Float64_1094_f64 y)  -> const typename __extension_Float64_1094_f64;
	#line 1192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto FusedMultiplyAdd(__extension_Float64_1094_f64 const& __this LIFETIMEBOUND, __extension_Float64_1094_f64 rhs, __extension_Float64_1094_f64 addend)  -> const typename __extension_Float64_1094_f64;
	#line 1194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto Ieee754Remainder(__extension_Float64_1094_f64 const& __this LIFETIMEBOUND, __extension_Float64_1094_f64 rhs)  -> const typename __extension_Float64_1094_f64;
	#line 1197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto Lerp(__extension_Float64_1094_f64 const& __this LIFETIMEBOUND, __extension_Float64_1094_f64 end, __extension_Float64_1094_f64 amount) noexcept -> const typename __extension_Float64_1094_f64;
	#line 1199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto ScaleB(__extension_Float64_1094_f64 const& __this LIFETIMEBOUND, Builtin::i32 n)  -> const typename __extension_Float64_1094_f64;
	#line 1095 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	template<class __TT> struct __static_getEpsilon; template<> struct __static_getEpsilon<__extension_Float64_1094_f64> { static inline constexpr auto get() -> const __extension_Float64_1094_f64; };
	#line 1096 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	template<class __TT> struct __static_getNegativeInfinity; template<> struct __static_getNegativeInfinity<__extension_Float64_1094_f64> { static inline constexpr auto get() -> const __extension_Float64_1094_f64; };
	#line 1097 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	template<class __TT> struct __static_getPositiveInfinity; template<> struct __static_getPositiveInfinity<__extension_Float64_1094_f64> { static inline constexpr auto get() -> const __extension_Float64_1094_f64; };
	#line 1098 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	template<class __TT> struct __static_getNaN; template<> struct __static_getNaN<__extension_Float64_1094_f64> { static inline constexpr auto get() -> const __extension_Float64_1094_f64; };
	#line 1099 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	template<class __TT> struct __static_getNegativeZero; template<> struct __static_getNegativeZero<__extension_Float64_1094_f64> { static inline constexpr auto get() -> const __extension_Float64_1094_f64; };
	#line 1111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getBitIncrement(__extension_Float64_1094_f64 const& __this ) -> const __extension_Float64_1094_f64;
	#line 1135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getBitDecrement(__extension_Float64_1094_f64 const& __this ) -> const __extension_Float64_1094_f64;
	#line 1154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getILogB(__extension_Float64_1094_f64 const& __this ) -> const Builtin::i32;
	#line 1156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getReciprocalEstimate(__extension_Float64_1094_f64 const& __this ) -> const __extension_Float64_1094_f64;
	#line 1165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getReciprocalSqrtEstimate(__extension_Float64_1094_f64 const& __this ) -> const __extension_Float64_1094_f64;
	#line 1176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getCategory(__extension_Float64_1094_f64 const& __this ) -> const FloatingPointCategory;
	#line 1202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getGamma(__extension_Float64_1094_f64 const& __this ) -> const __extension_Float64_1094_f64;
	#line 1204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getLnGamma(__extension_Float64_1094_f64 const& __this ) -> const __extension_Float64_1094_f64;
	#line 1206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getErf(__extension_Float64_1094_f64 const& __this ) -> const __extension_Float64_1094_f64;
	#line 1208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getErfc(__extension_Float64_1094_f64 const& __this ) -> const __extension_Float64_1094_f64;
	#line 1094 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(__extension_Float64_1094_f64, IBinaryFloatingPointIeee754, IBinaryFloatingPointIeee754, __extension_Float64_1094_f64);
	} namespace System{
using __extensions::Atan2;
using __extensions::Atan2Pi;
using __extensions::FusedMultiplyAdd;
using __extensions::Ieee754Remainder;
using __extensions::Lerp;
using __extensions::ScaleB;
using __extensions::__static_getEpsilon;
using __extensions::__static_getNegativeInfinity;
using __extensions::__static_getPositiveInfinity;
using __extensions::__static_getNaN;
using __extensions::__static_getNegativeZero;
using __extensions::getBitIncrement;
using __extensions::getBitDecrement;
using __extensions::getILogB;
using __extensions::getReciprocalEstimate;
using __extensions::getReciprocalSqrtEstimate;
using __extensions::getCategory;
using __extensions::getGamma;
using __extensions::getLnGamma;
using __extensions::getErf;
using __extensions::getErfc;

		} namespace __extensions { using namespace System;
#line 1211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	using __extension_Float64_1211_f64 = Builtin::f64;
	#line 1211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	ADV_CHECK_INTERFACE(IBinaryFloatFormatInfo, IBinaryFloatFormatInfo);
	#line 1212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	template<class __TT> struct __static_getNumberBufferLength; template<> struct __static_getNumberBufferLength<__extension_Float64_1211_f64> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	template<class __TT> struct __static_getZeroBits; template<> struct __static_getZeroBits<__extension_Float64_1211_f64> { static inline constexpr auto get() -> const Builtin::u128; };
	#line 1214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	template<class __TT> struct __static_getInfinityBits; template<> struct __static_getInfinityBits<__extension_Float64_1211_f64> { static inline constexpr auto get() -> const Builtin::u128; };
	#line 1215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	template<class __TT> struct __static_getNormalMantissaMask; template<> struct __static_getNormalMantissaMask<__extension_Float64_1211_f64> { static inline constexpr auto get() -> const Builtin::u128; };
	#line 1216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	template<class __TT> struct __static_getDenormalMantissaMask; template<> struct __static_getDenormalMantissaMask<__extension_Float64_1211_f64> { static inline constexpr auto get() -> const Builtin::u128; };
	#line 1217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	template<class __TT> struct __static_getMinBinaryExponent; template<> struct __static_getMinBinaryExponent<__extension_Float64_1211_f64> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	template<class __TT> struct __static_getMaxBinaryExponent; template<> struct __static_getMaxBinaryExponent<__extension_Float64_1211_f64> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	template<class __TT> struct __static_getMinDecimalExponent; template<> struct __static_getMinDecimalExponent<__extension_Float64_1211_f64> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	template<class __TT> struct __static_getMaxDecimalExponent; template<> struct __static_getMaxDecimalExponent<__extension_Float64_1211_f64> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	template<class __TT> struct __static_getExponentBias; template<> struct __static_getExponentBias<__extension_Float64_1211_f64> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	template<class __TT> struct __static_getExponentBits; template<> struct __static_getExponentBits<__extension_Float64_1211_f64> { static inline constexpr auto get() -> const Builtin::u128; };
	#line 1223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	template<class __TT> struct __static_getOverflowDecimalExponent; template<> struct __static_getOverflowDecimalExponent<__extension_Float64_1211_f64> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	template<class __TT> struct __static_getInfinityExponent; template<> struct __static_getInfinityExponent<__extension_Float64_1211_f64> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	template<class __TT> struct __static_getNormalMantissaBits; template<> struct __static_getNormalMantissaBits<__extension_Float64_1211_f64> { static inline constexpr auto get() -> const Builtin::u16; };
	#line 1226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	template<class __TT> struct __static_getDenormalMantissaBits; template<> struct __static_getDenormalMantissaBits<__extension_Float64_1211_f64> { static inline constexpr auto get() -> const Builtin::u16; };
	#line 1227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	template<class __TT> struct __static_getMinFastFloatDecimalExponent; template<> struct __static_getMinFastFloatDecimalExponent<__extension_Float64_1211_f64> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	template<class __TT> struct __static_getMaxFastFloatDecimalExponent; template<> struct __static_getMaxFastFloatDecimalExponent<__extension_Float64_1211_f64> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	template<class __TT> struct __static_getMinExponentRoundToEven; template<> struct __static_getMinExponentRoundToEven<__extension_Float64_1211_f64> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	template<class __TT> struct __static_getMaxExponentRoundToEven; template<> struct __static_getMaxExponentRoundToEven<__extension_Float64_1211_f64> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	template<class __TT> struct __static_getMaxExponentFastPath; template<> struct __static_getMaxExponentFastPath<__extension_Float64_1211_f64> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	template<class __TT> struct __static_getMaxMantissaFastPath; template<> struct __static_getMaxMantissaFastPath<__extension_Float64_1211_f64> { static inline constexpr auto get() -> const Builtin::u128; };
	#line 1211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(__extension_Float64_1211_f64, IBinaryFloatFormatInfo, IBinaryFloatFormatInfo, __extension_Float64_1211_f64);
	} namespace System{
using __extensions::__static_getNumberBufferLength;
using __extensions::__static_getZeroBits;
using __extensions::__static_getInfinityBits;
using __extensions::__static_getNormalMantissaMask;
using __extensions::__static_getDenormalMantissaMask;
using __extensions::__static_getMinBinaryExponent;
using __extensions::__static_getMaxBinaryExponent;
using __extensions::__static_getMinDecimalExponent;
using __extensions::__static_getMaxDecimalExponent;
using __extensions::__static_getExponentBias;
using __extensions::__static_getExponentBits;
using __extensions::__static_getOverflowDecimalExponent;
using __extensions::__static_getInfinityExponent;
using __extensions::__static_getNormalMantissaBits;
using __extensions::__static_getDenormalMantissaBits;
using __extensions::__static_getMinFastFloatDecimalExponent;
using __extensions::__static_getMaxFastFloatDecimalExponent;
using __extensions::__static_getMinExponentRoundToEven;
using __extensions::__static_getMaxExponentRoundToEven;
using __extensions::__static_getMaxExponentFastPath;
using __extensions::__static_getMaxMantissaFastPath;

	//###############################################################################
//# Free function declarations
//###############################################################################
#line 394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	namespace __Float64_Protected { inline constexpr auto BiasedExponent(Builtin::f64 value) noexcept -> const Builtin::u16; }
#line 395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	namespace __Float64_Protected { inline constexpr auto Exponent(Builtin::f64 value) noexcept -> const Builtin::i16; }
#line 396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	namespace __Float64_Protected { inline constexpr auto Significand(Builtin::f64 value) noexcept -> const Builtin::u64; }
#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	namespace __Float64_Protected { inline constexpr auto TrailingSignificand(Builtin::f64 value) noexcept -> const Builtin::u64; }
#line 399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	namespace __Float64_Protected { inline constexpr auto ExtractBiasedExponentFromBits(Builtin::u64 bits) noexcept -> const Builtin::u16; }
#line 400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	namespace __Float64_Protected { inline constexpr auto ExtractTrailingSignificandFromBits(Builtin::u64 bits) noexcept -> const Builtin::u64; }
//###############################################################################
//# Global compile-time constants
//###############################################################################
#line 371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
namespace __Float64_Protected { inline constexpr auto SignMask = Builtin::u64(0x8000000000000000ULL); }
#line 372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
namespace __Float64_Protected { inline constexpr auto SignShift = Builtin::i32(63); }
#line 373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
namespace __Float64_Protected { inline constexpr Builtin::u8 ShiftedSignMask = Builtin::u8{__Float64_Protected::SignMask >> __Float64_Protected::SignShift}; }
#line 375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
namespace __Float64_Protected { inline constexpr auto BiasedExponentMask = Builtin::u64(0x7FF0000000000000ULL); }
#line 376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
namespace __Float64_Protected { inline constexpr auto BiasedExponentShift = Builtin::i32(52); }
#line 377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
namespace __Float64_Protected { inline constexpr Builtin::u16 ShiftedBiasedExponentMask = Builtin::u16{__Float64_Protected::BiasedExponentMask >> __Float64_Protected::BiasedExponentShift}; }
#line 379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
namespace __Float64_Protected { inline constexpr auto TrailingSignificandMask = Builtin::u64(0x000FFFFFFFFFFFFFULL); }
#line 381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
namespace __Float64_Protected { inline constexpr auto MinSign = Builtin::u8(0U); }
#line 382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
namespace __Float64_Protected { inline constexpr auto MaxSign = Builtin::u8(1U); }
#line 383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
namespace __Float64_Protected { inline constexpr auto MinBiasedExponent = ADV_USPCS(MinValue, Builtin::u16)(); }
#line 384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
namespace __Float64_Protected { inline constexpr auto MaxBiasedExponent = Builtin::u16(0x7FFU); }
#line 385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
namespace __Float64_Protected { inline constexpr auto ExpBias = Builtin::u16(1023U); }
#line 386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
namespace __Float64_Protected { inline constexpr auto MinExponent = Builtin::i16(-1022); }
#line 387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
namespace __Float64_Protected { inline constexpr auto MaxExponent = Builtin::i16(1023); }
#line 388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
namespace __Float64_Protected { inline constexpr auto MinTrailingSignificand = ADV_USPCS(MinValue, Builtin::u64)(); }
#line 389 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
namespace __Float64_Protected { inline constexpr auto MaxTrailingSignificand = Builtin::u64(0x000FFFFFFFFFFFFFULL); }
#line 391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
namespace __Float64_Protected { inline constexpr auto TrailingSignificandLength = Builtin::i32(52); }
#line 392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
namespace __Float64_Protected { inline constexpr auto SignificandLength = __Float64_Protected::TrailingSignificandLength + Builtin::i32(1); }
//###############################################################################
//# Function definitions
//###############################################################################

namespace __Float64_Protected {
		#line 394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		inline constexpr auto BiasedExponent(Builtin::f64 value) noexcept -> const Builtin::u16
		{
			#line 394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			ADV_EXPRESSION_BODY(__Float64_Protected::ExtractBiasedExponentFromBits(ADV_UPCS(Bits)(value.__ref()))); 
		}
	}
namespace __Float64_Protected {
		#line 395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		inline constexpr auto Exponent(Builtin::f64 value) noexcept -> const Builtin::i16
		{
			#line 395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			ADV_EXPRESSION_BODY(Builtin::i16{__Float64_Protected::BiasedExponent(value) - __Float64_Protected::ExpBias}); 
		}
	}
namespace __Float64_Protected {
		#line 396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		inline constexpr auto Significand(Builtin::f64 value) noexcept -> const Builtin::u64
		{
			#line 396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			ADV_EXPRESSION_BODY(__Float64_Protected::TrailingSignificand(value) | (__Float64_Protected::BiasedExponent(value) != Builtin::i32(0) ? (Builtin::u64(1ULL) << __Float64_Protected::BiasedExponentShift) : Builtin::u64(0ULL))); 
		}
	}
namespace __Float64_Protected {
		#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		inline constexpr auto TrailingSignificand(Builtin::f64 value) noexcept -> const Builtin::u64
		{
			#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			ADV_EXPRESSION_BODY(__Float64_Protected::ExtractTrailingSignificandFromBits(ADV_UPCS(Bits)(value.__ref()))); 
		}
	}
namespace __Float64_Protected {
		#line 399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		inline constexpr auto ExtractBiasedExponentFromBits(Builtin::u64 bits) noexcept -> const Builtin::u16
		{
			#line 399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			ADV_EXPRESSION_BODY(Builtin::u16{(bits >> __Float64_Protected::BiasedExponentShift) & __Float64_Protected::ShiftedBiasedExponentMask}); 
		}
	}
namespace __Float64_Protected {
		#line 400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		inline constexpr auto ExtractTrailingSignificandFromBits(Builtin::u64 bits) noexcept -> const Builtin::u64
		{
			#line 400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			ADV_EXPRESSION_BODY(bits & __Float64_Protected::TrailingSignificandMask); 
		}
	}
} namespace __extensions { using namespace System;
#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto __static_getMinValue<__extension_Float64_14_f64>::get() -> const __extension_Float64_14_f64
	{
		#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::f64(-1.7976931348623157e+308)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto __static_getMaxValue<__extension_Float64_14_f64>::get() -> const __extension_Float64_14_f64
	{
		#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(+Builtin::f64(1.7976931348623157e+308)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	
} namespace __extensions { using namespace System;
#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto operator<=>(__extension_Float64_19_f64 const& __this LIFETIMEBOUND, Builtin::Nullable<__extension_Float64_19_f64> rhs) noexcept -> const Builtin::i32
	{
		#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		{
			#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			if ((!Builtin::Is(rhs, nullptr))) {
				#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				auto __tmp0 = *rhs; const auto& rhs = __tmp0;
				
				#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				return __this <=> rhs;
			}
		}
		#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		return Builtin::i32(1);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto __static_FromBits<__extension_Float64_19_f64>::get(Builtin::u64 bits)  -> const typename __extension_Float64_19_f64
	{
		#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::BitCast<__extension_Float64_19_f64>(bits)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getBits(__extension_Float64_19_f64 const& __this ) -> const Builtin::u64
	{
		#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::BitCast<Builtin::u64>(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto __static_getBitWidth<__extension_Float64_19_f64>::get() -> const Builtin::u32
	{
		#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(64U)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto __static_getMinPositiveValue<__extension_Float64_19_f64>::get() -> const __extension_Float64_19_f64
	{
		#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::f64(2.2250738585072014e-308)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getHashCode(__extension_Float64_19_f64 const& __this ) -> const Builtin::u64
	{
		#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		Builtin::Auto<decltype(ADV_UPCS(Bits)(__this.__ref()))> bits = ADV_UPCS(Bits)(__this.__ref()); 
		#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		if ((((bits - Builtin::u32(1U)) & Builtin::u64(0x7FFFFFFFFFFFFFFFULL)) <=> Builtin::u64(0x7FF0000000000000ULL)) >= 0) {
			#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			bits &= Builtin::u64(0x7FF0000000000000ULL);
		}
		#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		return bits;
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	
} namespace __extensions { using namespace System;
#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto ToBoolean(__extension_Float64_76_f64 const& __this LIFETIMEBOUND) noexcept -> const bool
	{
		#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(__this != Builtin::i32(0)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto ToInt8(__extension_Float64_76_f64 const& __this LIFETIMEBOUND)  -> const Builtin::i8
	{
		#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i8>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto ToUInt8(__extension_Float64_76_f64 const& __this LIFETIMEBOUND)  -> const Builtin::u8
	{
		#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u8>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto ToInt16(__extension_Float64_76_f64 const& __this LIFETIMEBOUND)  -> const Builtin::i16
	{
		#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i16>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto ToUInt16(__extension_Float64_76_f64 const& __this LIFETIMEBOUND)  -> const Builtin::u16
	{
		#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u16>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto ToInt32(__extension_Float64_76_f64 const& __this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i32>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto ToUInt32(__extension_Float64_76_f64 const& __this LIFETIMEBOUND)  -> const Builtin::u32
	{
		#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u32>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 84 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto ToInt64(__extension_Float64_76_f64 const& __this LIFETIMEBOUND)  -> const Builtin::i64
	{
		#line 84 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i64>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 85 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto ToUInt64(__extension_Float64_76_f64 const& __this LIFETIMEBOUND)  -> const Builtin::u64
	{
		#line 85 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u64>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 86 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto ToInt128(__extension_Float64_76_f64 const& __this LIFETIMEBOUND)  -> const Builtin::i128
	{
		#line 86 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i128>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto ToUInt128(__extension_Float64_76_f64 const& __this LIFETIMEBOUND)  -> const Builtin::u128
	{
		#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u128>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto ToIsize(__extension_Float64_76_f64 const& __this LIFETIMEBOUND)  -> const Builtin::isize
	{
		#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::isize>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto ToUsize(__extension_Float64_76_f64 const& __this LIFETIMEBOUND)  -> const Builtin::usize
	{
		#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::usize>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto ToFloat32(__extension_Float64_76_f64 const& __this LIFETIMEBOUND)  -> const Builtin::f32
	{
		#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::f32>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto ToFloat64(__extension_Float64_76_f64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::f64
	{
		#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto ToByte(__extension_Float64_76_f64 const& __this LIFETIMEBOUND)  -> const Builtin::u8
	{
		#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u8>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto ToChar(__extension_Float64_76_f64 const& __this LIFETIMEBOUND)  -> const Builtin::char32
	{
		#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u16>(__this)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	
} namespace __extensions { using namespace System;
#line 100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	template<class T> inline constexpr auto _operator_div_mod(__extension_Float64_98_f64 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_Float64_98_f64, __extension_Float64_98_f64>
	{
		#line 103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		return std::make_tuple(__this / Builtin::f64{rhs}, __this % Builtin::f64{rhs}); ADV_CHECK_REF_STRUCT_PARAM_RETURN(rhs, "(self,self)", std::tuple<__extension_Float64_98_f64, __extension_Float64_98_f64>);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	template<class T> inline constexpr auto _operator_div_not(__extension_Float64_98_f64 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Float64_98_f64
	{
		#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Round)((__this / rhs).__ref())); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto _operator_div_not_eq(__extension_Float64_98_f64 & __this , auto rhs)  -> typename __extension_Float64_98_f64&
	{
		#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_div_not)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	template<class T> inline constexpr auto _operator_div_lt(__extension_Float64_98_f64 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Float64_98_f64
	{
		#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Floor)((__this / rhs).__ref())); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto _operator_div_lt_eq(__extension_Float64_98_f64 & __this , auto rhs)  -> typename __extension_Float64_98_f64&
	{
		#line 112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_div_lt)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	template<class T> inline constexpr auto _operator_div_gt(__extension_Float64_98_f64 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Float64_98_f64
	{
		#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Ceil)((__this / rhs).__ref())); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto _operator_div_gt_eq(__extension_Float64_98_f64 & __this , auto rhs)  -> typename __extension_Float64_98_f64&
	{
		#line 116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_div_gt)(__this, rhs)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	
} namespace __extensions { using namespace System;
#line 122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto _operator_xor_xor(__extension_Float64_120_f64 const& __this LIFETIMEBOUND, Builtin::i32 exp)  -> const typename __extension_Float64_120_f64
	{
		#line 124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			return Builtin::f64(1.0);
		}
		#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		if ((exp <=> Builtin::i32(0)) < 0) {
			#line 130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			return Builtin::f64(1.0) / ADV_UFCS(_operator_xor_xor)(__this, (-exp));
		}
		#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		Builtin::Auto<decltype(__this)> base = __this; 
		#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		Builtin::Auto<decltype(Builtin::f64(1.0))> result = Builtin::f64(1.0); 
		#line 136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		if (std::is_constant_evaluated()) {
			#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			while ((exp <=> Builtin::i32(1)) > 0) 
			{
				#line 138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
					#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
					result *= base;
				}
				#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				ADV_UFCS(_operator_bsl_eq)(exp, Builtin::i32(2));
				#line 142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				base *= base;
			}
			#line 144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			return result * base;
		} else {
			#line 145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			{
				#line 146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				for (;;) 
				{
					#line 147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
					if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
						#line 148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
						result *= base;
						#line 149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
						if (exp == Builtin::i32(1)) {
							#line 150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
							return result; ADV_CHECK_REF_STRUCT_LOCAL_RETURN("self", __extension_Float64_120_f64);
						}
					}
					#line 152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
					ADV_UFCS(_operator_bsl_eq)(exp, Builtin::i32(2));
					#line 153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
					base *= base;
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto _operator_xor_xor_eq(__extension_Float64_120_f64 & __this , Builtin::i32 exp)  -> typename __extension_Float64_120_f64&
	{
		#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_xor_xor)(__this, exp)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	
} namespace __extensions { using namespace System;
#line 198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto MaxMagnitude(__extension_Float64_161_f64 const& __this LIFETIMEBOUND, __extension_Float64_161_f64 rhs) noexcept -> const typename __extension_Float64_161_f64
	{
		#line 200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		Builtin::Auto<decltype(ADV_UPCS(Abs)(__this.__ref()))> ax = ADV_UPCS(Abs)(__this.__ref()); 
		#line 201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		Builtin::Auto<decltype(ADV_UPCS(Abs)(rhs.__ref()))> ay = ADV_UPCS(Abs)(rhs.__ref()); 
		#line 203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		if ((ax <=> ay) > 0 || ADV_UPCS(IsNaN)(ax.__ref())) {
			#line 205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			return __this;
		}
		#line 208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		if (ax == ay) {
			#line 210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			return ADV_UPCS(IsNegative)(__this.__ref()) ? rhs : __this;
		}
		#line 213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		return rhs; ADV_CHECK_REF_STRUCT_PARAM_RETURN(rhs, "self", __extension_Float64_161_f64);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto MaxMagnitudeNumber(__extension_Float64_161_f64 const& __this LIFETIMEBOUND, __extension_Float64_161_f64 rhs) noexcept -> const typename __extension_Float64_161_f64
	{
		#line 218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		Builtin::Auto<decltype(ADV_UPCS(Abs)(__this.__ref()))> ax = ADV_UPCS(Abs)(__this.__ref()); 
		#line 219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		Builtin::Auto<decltype(ADV_UPCS(Abs)(rhs.__ref()))> ay = ADV_UPCS(Abs)(rhs.__ref()); 
		#line 221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		if ((ax <=> ay) > 0 || ADV_UPCS(IsNaN)(ay.__ref())) {
			#line 223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			return __this;
		}
		#line 226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		if (ax == ay) {
			#line 228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			return ADV_UPCS(IsNegative)(__this.__ref()) ? rhs : __this;
		}
		#line 231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		return rhs; ADV_CHECK_REF_STRUCT_PARAM_RETURN(rhs, "self", __extension_Float64_161_f64);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto MinMagnitude(__extension_Float64_161_f64 const& __this LIFETIMEBOUND, __extension_Float64_161_f64 rhs) noexcept -> const typename __extension_Float64_161_f64
	{
		#line 236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		Builtin::Auto<decltype(ADV_UPCS(Abs)(__this.__ref()))> ax = ADV_UPCS(Abs)(__this.__ref()); 
		#line 237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		Builtin::Auto<decltype(ADV_UPCS(Abs)(rhs.__ref()))> ay = ADV_UPCS(Abs)(rhs.__ref()); 
		#line 239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		if ((ax <=> ay) < 0 || ADV_UPCS(IsNaN)(ax.__ref())) {
			#line 241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			return __this;
		}
		#line 244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		if (ax == ay) {
			#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			return ADV_UPCS(IsNegative)(__this.__ref()) ? __this : rhs;
		}
		#line 249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		return rhs; ADV_CHECK_REF_STRUCT_PARAM_RETURN(rhs, "self", __extension_Float64_161_f64);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto MinMagnitudeNumber(__extension_Float64_161_f64 const& __this LIFETIMEBOUND, __extension_Float64_161_f64 rhs) noexcept -> const typename __extension_Float64_161_f64
	{
		#line 254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		Builtin::Auto<decltype(ADV_UPCS(Abs)(__this.__ref()))> ax = ADV_UPCS(Abs)(__this.__ref()); 
		#line 255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		Builtin::Auto<decltype(ADV_UPCS(Abs)(rhs.__ref()))> ay = ADV_UPCS(Abs)(rhs.__ref()); 
		#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		if ((ax <=> ay) < 0 || ADV_UPCS(IsNaN)(ay.__ref())) {
			#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			return __this;
		}
		#line 262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		if (ax == ay) {
			#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			return ADV_UPCS(IsNegative)(__this.__ref()) ? __this : rhs;
		}
		#line 267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		return rhs; ADV_CHECK_REF_STRUCT_PARAM_RETURN(rhs, "self", __extension_Float64_161_f64);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto NarrowToInt8(__extension_Float64_161_f64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i8
	{
		#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i8>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto NarrowToUInt8(__extension_Float64_161_f64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u8
	{
		#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u8>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto NarrowToInt16(__extension_Float64_161_f64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i16
	{
		#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i16>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto NarrowToUInt16(__extension_Float64_161_f64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u16
	{
		#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u16>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto NarrowToInt32(__extension_Float64_161_f64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i32
	{
		#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i32>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto NarrowToUInt32(__extension_Float64_161_f64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u32
	{
		#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u32>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto NarrowToInt64(__extension_Float64_161_f64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i64
	{
		#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i64>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto NarrowToUInt64(__extension_Float64_161_f64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u64
	{
		#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u64>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto NarrowToInt128(__extension_Float64_161_f64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i128
	{
		#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i128>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto NarrowToUInt128(__extension_Float64_161_f64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u128
	{
		#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u128>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto NarrowToIsize(__extension_Float64_161_f64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::isize
	{
		#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::isize>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto NarrowToUsize(__extension_Float64_161_f64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::usize
	{
		#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::usize>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto __static_getOne<__extension_Float64_161_f64>::get() -> const __extension_Float64_161_f64
	{
		#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::f64(1.0)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto __static_getZero<__extension_Float64_161_f64>::get() -> const __extension_Float64_161_f64
	{
		#line 163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::f64(0.0)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto __static_getRadix<__extension_Float64_161_f64>::get() -> const Builtin::i32
	{
		#line 164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(2)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getAbs(__extension_Float64_161_f64 const& __this ) -> const __extension_Float64_161_f64
	{
		#line 168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		constexpr Builtin::Auto<decltype(Builtin::u64(0x7FFFFFFFFFFFFFFFULL))> mask = Builtin::u64(0x7FFFFFFFFFFFFFFFULL);
		#line 169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		Builtin::u64 raw = ADV_UPCS(Bits)(__this.__ref()); 
		#line 170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		return ADV_USFCS((Builtin::f64), FromBits)(raw & mask);
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getIsCanonical(__extension_Float64_161_f64 const& __this ) -> const bool
	{
		#line 172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getIsComplexNumber(__extension_Float64_161_f64 const& __this ) -> const bool
	{
		#line 173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getIsEvenInteger(__extension_Float64_161_f64 const& __this ) -> const bool
	{
		#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsInteger)(__this.__ref()) && (ADV_UPCS(Abs)((__this % Builtin::i32(2)).__ref()) == Builtin::i32(0))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getIsFinite(__extension_Float64_161_f64 const& __this ) -> const bool
	{
		#line 175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(((ADV_UPCS(Bits)(__this.__ref()) & Builtin::u64(0x7FFFFFFFFFFFFFFFULL)) <=> Builtin::u64(0x7FF0000000000000ULL)) < 0); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getIsImaginaryNumber(__extension_Float64_161_f64 const& __this ) -> const bool
	{
		#line 176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getIsInfinity(__extension_Float64_161_f64 const& __this ) -> const bool
	{
		#line 177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY((ADV_UPCS(Bits)(__this.__ref()) & Builtin::u64(0x7FFFFFFFFFFFFFFFULL)) == Builtin::u64(0x7FF0000000000000ULL)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getIsInteger(__extension_Float64_161_f64 const& __this ) -> const bool
	{
		#line 178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsFinite)(__this.__ref()) && (__this == ADV_UPCS(Truncate)(__this.__ref()))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getIsNaN(__extension_Float64_161_f64 const& __this ) -> const bool
	{
		#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(__this != __this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getIsNegative(__extension_Float64_161_f64 const& __this ) -> const bool
	{
		#line 180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY((Builtin::BitCast<Builtin::i64>(__this) <=> Builtin::i32(0)) < 0); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getIsNegativeInfinity(__extension_Float64_161_f64 const& __this ) -> const bool
	{
		#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(__this == ADV_USPCS(NegativeInfinity, __extension_Float64_161_f64)()); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getIsNormal(__extension_Float64_161_f64 const& __this ) -> const bool
	{
		#line 184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		Builtin::Auto<decltype(ADV_UPCS(Bits)(__this.__ref()) & Builtin::u64(0x7FFFFFFFFFFFFFFFULL))> bits = ADV_UPCS(Bits)(__this.__ref()) & Builtin::u64(0x7FFFFFFFFFFFFFFFULL); 
		#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		return ((bits <=> Builtin::u64(0x7FF0000000000000ULL)) < 0) && (bits != Builtin::i32(0)) && ((bits & Builtin::u64(0x7FF0000000000000ULL)) != Builtin::i32(0));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getIsOddInteger(__extension_Float64_161_f64 const& __this ) -> const bool
	{
		#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsInteger)(__this.__ref()) && (ADV_UPCS(Abs)((__this % Builtin::i32(2)).__ref()) == Builtin::i32(1))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getIsPositive(__extension_Float64_161_f64 const& __this ) -> const bool
	{
		#line 188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY((Builtin::BitCast<Builtin::i64>(__this) <=> Builtin::i32(0)) >= 0); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getIsPositiveInfinity(__extension_Float64_161_f64 const& __this ) -> const bool
	{
		#line 189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(__this == ADV_USPCS(PositiveInfinity, __extension_Float64_161_f64)()); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getIsRealNumber(__extension_Float64_161_f64 const& __this ) -> const bool
	{
		#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(__this == __this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getIsSubnormal(__extension_Float64_161_f64 const& __this ) -> const bool
	{
		#line 193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		Builtin::Auto<decltype(ADV_UPCS(Bits)(__this.__ref()) & Builtin::u64(0x7FFFFFFFFFFFFFFFULL))> bits = ADV_UPCS(Bits)(__this.__ref()) & Builtin::u64(0x7FFFFFFFFFFFFFFFULL); 
		#line 194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		return ((bits <=> Builtin::u64(0x7FF0000000000000ULL)) < 0) && (bits != Builtin::i32(0)) && ((bits & Builtin::u64(0x7FF0000000000000ULL)) == Builtin::i32(0));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getIsZero(__extension_Float64_161_f64 const& __this ) -> const bool
	{
		#line 196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(__this == ADV_USPCS(Zero, __extension_Float64_161_f64)()); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	
} namespace __extensions { using namespace System;
#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto __static_getMinusOne<__extension_Float64_296_f64>::get() -> const __extension_Float64_296_f64
	{
		#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::f64(-1.0)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	
} namespace __extensions { using namespace System;
#line 308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto CopySign(__extension_Float64_300_f64 const& __this LIFETIMEBOUND, __extension_Float64_300_f64 sign) noexcept -> const typename __extension_Float64_300_f64
	{
		#line 310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		if (std::is_constant_evaluated()) {
			#line 311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			if ((sign <=> Builtin::i32(0)) < 0 || (sign == Builtin::i32(0) && (Builtin::f64(1.0) / sign <=> Builtin::i32(0)) < 0)) {
				#line 312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				return (__this <=> Builtin::i32(0)) < 0 ? __this : -__this;
			}
			#line 314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			return (__this <=> Builtin::i32(0)) < 0 ? -__this : __this;
		} else {
			#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			{
				#line 316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				return std::copysign(Builtin::Cast<true, CDouble>(__this), sign);
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto Max(__extension_Float64_300_f64 const& __this LIFETIMEBOUND, __extension_Float64_300_f64 rhs) noexcept -> const typename __extension_Float64_300_f64
	{
		#line 322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		if (__this != rhs) {
			#line 323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			if (!ADV_UPCS(IsNaN)(__this.__ref())) {
				#line 324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				return (rhs <=> __this) < 0 ? __this : rhs;
			}
			#line 326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			return __this;
		}
		#line 328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		return ADV_UPCS(IsNegative)(rhs.__ref()) ? __this : rhs; ADV_CHECK_REF_STRUCT_PARAM_RETURN(rhs, "self", __extension_Float64_300_f64);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto MaxNumber(__extension_Float64_300_f64 const& __this LIFETIMEBOUND, __extension_Float64_300_f64 rhs) noexcept -> const typename __extension_Float64_300_f64
	{
		#line 332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		if (__this != rhs) {
			#line 333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			if (!ADV_UPCS(IsNaN)(rhs.__ref())) {
				#line 334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				return (rhs <=> __this) < 0 ? __this : rhs;
			}
			#line 336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			return __this;
		}
		#line 338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		return ADV_UPCS(IsNegative)(rhs.__ref()) ? __this : rhs; ADV_CHECK_REF_STRUCT_PARAM_RETURN(rhs, "self", __extension_Float64_300_f64);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto Min(__extension_Float64_300_f64 const& __this LIFETIMEBOUND, __extension_Float64_300_f64 rhs) noexcept -> const typename __extension_Float64_300_f64
	{
		#line 342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		if (__this != rhs) {
			#line 343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			if (!ADV_UPCS(IsNaN)(__this.__ref())) {
				#line 344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				return (__this <=> rhs) < 0 ? __this : rhs;
			}
			#line 346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			return __this;
		}
		#line 348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		return ADV_UPCS(IsNegative)(__this.__ref()) ? __this : rhs;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto MinNumber(__extension_Float64_300_f64 const& __this LIFETIMEBOUND, __extension_Float64_300_f64 rhs) noexcept -> const typename __extension_Float64_300_f64
	{
		#line 352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		if (__this != rhs) {
			#line 353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			if (!ADV_UPCS(IsNaN)(rhs.__ref())) {
				#line 354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				return (__this <=> rhs) < 0 ? __this : rhs;
			}
			#line 356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			return __this;
		}
		#line 358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		return ADV_UPCS(IsNegative)(__this.__ref()) ? __this : rhs;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto Clamp(__extension_Float64_300_f64 const& __this LIFETIMEBOUND, __extension_Float64_300_f64 min, __extension_Float64_300_f64 max)  -> const typename __extension_Float64_300_f64
	{
		#line 362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		if ((min <=> max) > 0) {
			#line 363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			Builtin::Throw(Builtin::InvalidOperationException{});
		}
		#line 366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		return (__this <=> min) < 0 ? min : (__this <=> max) > 0 ? max : __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getSign(__extension_Float64_300_f64 const& __this ) -> const Builtin::i32
	{
		#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		return [&]() 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
		{
			#line 302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			auto __tmp__valid_301 = Builtin::Cast<false, std::decay_t<decltype(__this)>::__self>(__this);
			#line 302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			if(__tmp__valid_301.IsValid() && Builtin::Is(*__tmp__valid_301, Builtin::i32(0))) {
				#line 302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				
				return Builtin::i32(0);
			}
			else {
				#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				if(__tmp__valid_301.IsValid() && Builtin::IsLess(*__tmp__valid_301, Builtin::i32(0))) {
					#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
					
					return Builtin::i32(-1);
				}
				else {
					#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
					if(__tmp__valid_301.IsValid() && Builtin::IsGreater(*__tmp__valid_301, Builtin::i32(0))) {
						#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
						
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
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	
} namespace __extensions { using namespace System;
#line 443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto Log(__extension_Float64_403_f64 const& __this LIFETIMEBOUND, __extension_Float64_403_f64 base) noexcept -> const typename __extension_Float64_403_f64
	{
		#line 445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		if (ADV_UPCS(IsNaN)(__this.__ref())) {
			#line 446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			return __this;
		}
		#line 448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		if (ADV_UPCS(IsNaN)(base.__ref())) {
			#line 449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			return base; ADV_CHECK_REF_STRUCT_PARAM_RETURN(base, "self", __extension_Float64_403_f64);
		}
		#line 452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		if (base == Builtin::i32(1)) {
			#line 453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			return ADV_USPCS(NaN, Builtin::f64)();
		}
		#line 455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		if (__this != Builtin::i32(1) && (base == Builtin::i32(0) || ADV_UPCS(IsPositiveInfinity)(base.__ref()))) {
			#line 456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			return ADV_USPCS(NaN, Builtin::f64)();
		}
		#line 459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		return ADV_UPCS(Ln)(__this.__ref()) / ADV_UPCS(Ln)(base.__ref());
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto Midpoint(__extension_Float64_403_f64 const& __this LIFETIMEBOUND, __extension_Float64_403_f64 rhs) noexcept -> const typename __extension_Float64_403_f64
	{
		#line 466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		if constexpr (Builtin::Is64BitTarget()) {
			#line 467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			return (__this + rhs) / Builtin::f64(2.0);
		} else {
			#line 468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			{
				#line 469 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				constexpr Builtin::Auto<decltype(ADV_USPCS(MaxValue, __extension_Float64_403_f64)() / Builtin::f64(2.0))> riskValue = ADV_USPCS(MaxValue, __extension_Float64_403_f64)() / Builtin::f64(2.0);
				#line 471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				if ((ADV_UPCS(Abs)(__this.__ref()) <=> riskValue) <= 0 && (ADV_UPCS(Abs)(rhs.__ref()) <=> riskValue) <= 0) {
					#line 472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
					return (__this + rhs) / Builtin::f64(2.0);
				} else {
					#line 473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
					{
						#line 474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
						return (__this / Builtin::f64(2.0)) + (rhs / Builtin::f64(2.0));
					}
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto IsMultipleOf(__extension_Float64_403_f64 const& __this LIFETIMEBOUND, __extension_Float64_403_f64 rhs) noexcept -> const bool
	{
		#line 482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		if (rhs == Builtin::i32(0)) {
			#line 483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			return __this == Builtin::i32(0);
		}
		#line 486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		if (rhs == Builtin::i32(-1)) {
			#line 487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			return Builtin::Boolean(true);
		}
		#line 490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		return __this % rhs == Builtin::i32(0);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto __static_getAllBitsSet<__extension_Float64_403_f64>::get() -> const __extension_Float64_403_f64
	{
		#line 405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Builtin::f64), FromBits)(Builtin::u64(0xFFFFFFFFFFFFFFFFULL))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getIsPow2(__extension_Float64_403_f64 const& __this ) -> const bool
	{
		#line 410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		Builtin::Auto<decltype(ADV_UPCS(Bits)(__this.__ref()))> bits = ADV_UPCS(Bits)(__this.__ref()); 
		#line 412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		if ((ADV_UFCS(NarrowToInt64)(bits.__ref()) <=> Builtin::i32(0)) <= 0) {
			#line 413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			return Builtin::Boolean(false);
		}
		#line 416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		Builtin::Auto<decltype(__Float64_Protected::ExtractBiasedExponentFromBits(bits))> biasedExponent = __Float64_Protected::ExtractBiasedExponentFromBits(bits); 
		#line 417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		Builtin::Auto<decltype(__Float64_Protected::ExtractTrailingSignificandFromBits(bits))> trailingSignificand = __Float64_Protected::ExtractTrailingSignificandFromBits(bits); 
		#line 420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		if (biasedExponent == __Float64_Protected::MinBiasedExponent) {
			#line 421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			return ADV_UPCS(PopCount)(trailingSignificand.__ref()) == Builtin::i32(1);
		}
		#line 424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		if (biasedExponent == __Float64_Protected::MaxBiasedExponent) {
			#line 425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			return Builtin::Boolean(false);
		}
		#line 429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		return trailingSignificand == __Float64_Protected::MinTrailingSignificand;
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getLog2(__extension_Float64_403_f64 const& __this ) -> const __extension_Float64_403_f64
	{
		#line 434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(std::log2(Builtin::Cast<true, CDouble>(__this))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getLog10(__extension_Float64_403_f64 const& __this ) -> const __extension_Float64_403_f64
	{
		#line 438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(std::log10(Builtin::Cast<true, CDouble>(__this))); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	
} namespace __extensions { using namespace System;
#line 496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto __static_getPi<__extension_Float64_494_f64>::get() -> const __extension_Float64_494_f64
	{
		#line 496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::f64(3.14159265358979323846)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto __static_getE<__extension_Float64_494_f64>::get() -> const __extension_Float64_494_f64
	{
		#line 497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::f64(2.7182818284590452354)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto __static_getTau<__extension_Float64_494_f64>::get() -> const __extension_Float64_494_f64
	{
		#line 498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::f64(6.283185307179586476925)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	
} namespace __extensions { using namespace System;
#line 519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto CeilToInt32(__extension_Float64_501_f64 const& __this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i32>(ADV_UPCS(Ceil)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto CeilToInt64(__extension_Float64_501_f64 const& __this LIFETIMEBOUND)  -> const Builtin::i64
	{
		#line 520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i64>(ADV_UPCS(Ceil)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto CeilToInt128(__extension_Float64_501_f64 const& __this LIFETIMEBOUND)  -> const Builtin::i128
	{
		#line 521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i128>(ADV_UPCS(Ceil)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto FloorToInt32(__extension_Float64_501_f64 const& __this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i32>(ADV_UPCS(Floor)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto FloorToInt64(__extension_Float64_501_f64 const& __this LIFETIMEBOUND)  -> const Builtin::i64
	{
		#line 537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i64>(ADV_UPCS(Floor)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 538 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto FloorToInt128(__extension_Float64_501_f64 const& __this LIFETIMEBOUND)  -> const Builtin::i128
	{
		#line 538 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i128>(ADV_UPCS(Floor)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto TruncateToInt32(__extension_Float64_501_f64 const& __this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i32>(ADV_UPCS(Truncate)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto TruncateToInt64(__extension_Float64_501_f64 const& __this LIFETIMEBOUND)  -> const Builtin::i64
	{
		#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i64>(ADV_UPCS(Truncate)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto TruncateToInt128(__extension_Float64_501_f64 const& __this LIFETIMEBOUND)  -> const Builtin::i128
	{
		#line 554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i128>(ADV_UPCS(Truncate)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto RoundToInt32(__extension_Float64_501_f64 const& __this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i32>(ADV_UPCS(Round)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto RoundToInt64(__extension_Float64_501_f64 const& __this LIFETIMEBOUND)  -> const Builtin::i64
	{
		#line 569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i64>(ADV_UPCS(Round)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto RoundToInt128(__extension_Float64_501_f64 const& __this LIFETIMEBOUND)  -> const Builtin::i128
	{
		#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i128>(ADV_UPCS(Round)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 618 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto RoundTiesEvenToInt32(__extension_Float64_501_f64 const& __this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 618 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i32>(ADV_UPCS(RoundTiesEven)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto RoundTiesEvenToInt64(__extension_Float64_501_f64 const& __this LIFETIMEBOUND)  -> const Builtin::i64
	{
		#line 619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i64>(ADV_UPCS(RoundTiesEven)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto RoundTiesEvenToInt128(__extension_Float64_501_f64 const& __this LIFETIMEBOUND)  -> const Builtin::i128
	{
		#line 620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i128>(ADV_UPCS(RoundTiesEven)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 622 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto Round(__extension_Float64_501_f64 const& __this LIFETIMEBOUND, Builtin::u32 digits)  -> const typename __extension_Float64_501_f64
	{
		#line 622 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Round)(__this.__ref(), digits, ADV_USPCS(AwayFromZero, MidpointRounding)())); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 623 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto Round(__extension_Float64_501_f64 const& __this LIFETIMEBOUND, MidpointRounding rounding)  -> const typename __extension_Float64_501_f64
	{
		#line 625 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		if (std::is_constant_evaluated()) {
			#line 626 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			if (rounding == ADV_USPCS(AwayFromZero, MidpointRounding)()) {
				#line 627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				return ADV_UPCS(Round)(__this.__ref());
			}
			#line 629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			if (rounding == ADV_USPCS(ToEven, MidpointRounding)()) {
				#line 630 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				return ADV_UPCS(RoundTiesEven)(__this.__ref());
			}
		}
		#line 633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		return ADV_UFCS(Round)(__this.__ref(), Builtin::u32(0U), rounding);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 635 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto Round(__extension_Float64_501_f64 const& __this LIFETIMEBOUND, Builtin::u32 digits, MidpointRounding rounding)  -> const typename __extension_Float64_501_f64
	{
		#line 637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		constexpr Builtin::Auto<decltype(Builtin::u32(15U))> maxRoundingDigits = Builtin::u32(15U);
		#line 638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		constexpr Builtin::Auto<decltype(Builtin::f64(1e16))> roundLimit = Builtin::f64(1e16);
		#line 639 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		constexpr auto pow10table = Builtin::ToInlineArray<Builtin::f64>({Builtin::f64(Builtin::f64(1e0)), Builtin::f64(Builtin::f64(1e1)), Builtin::f64(Builtin::f64(1e2)), Builtin::f64(Builtin::f64(1e3)), Builtin::f64(Builtin::f64(1e4)), Builtin::f64(Builtin::f64(1e5)), Builtin::f64(Builtin::f64(1e6)), Builtin::f64(Builtin::f64(1e7)), Builtin::f64(Builtin::f64(1e8)), Builtin::f64(Builtin::f64(1e9)), Builtin::f64(Builtin::f64(1e10)), Builtin::f64(Builtin::f64(1e11)), Builtin::f64(Builtin::f64(1e12)), Builtin::f64(Builtin::f64(1e13)), Builtin::f64(Builtin::f64(1e14)), Builtin::f64(Builtin::f64(1e15))});
		#line 642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		if ((digits <=> maxRoundingDigits) > 0) {
			#line 643 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		Builtin::Auto<decltype(__this)> result = __this; 
		#line 647 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		if ((ADV_UPCS(Abs)(__this.__ref()) <=> roundLimit) < 0) {
			#line 648 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(pow10table.__ref(), digits))> pow10 = ADV_UFCS(_operator_subscript)(pow10table.__ref(), digits); 
			#line 649 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			result *= pow10;
			#line 651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			result = [&]() 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
			{
				#line 653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				auto __tmp__valid_651 = Builtin::Cast<false, std::decay_t<decltype(rounding)>::__self>(rounding);
				#line 653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				if(__tmp__valid_651.IsValid() && Builtin::Is(*__tmp__valid_651, decltype(rounding)::ToEven)) {
					#line 653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
					const auto& rounding = *__tmp__valid_651;
					return ADV_UPCS(RoundTiesEven)(result.__ref());
				}
				else {
					#line 654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
					if(__tmp__valid_651.IsValid() && Builtin::Is(*__tmp__valid_651, decltype(rounding)::AwayFromZero)) {
						#line 654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
						const auto& rounding = *__tmp__valid_651;
						return ADV_UPCS(Round)(result.__ref());
					}
					else {
						#line 655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
						if(__tmp__valid_651.IsValid() && Builtin::Is(*__tmp__valid_651, decltype(rounding)::ToZero)) {
							#line 655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
							const auto& rounding = *__tmp__valid_651;
							return ADV_UPCS(Truncate)(result.__ref());
						}
						else {
							#line 656 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
							if(__tmp__valid_651.IsValid() && Builtin::Is(*__tmp__valid_651, decltype(rounding)::ToNegativeInfinity)) {
								#line 656 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
								const auto& rounding = *__tmp__valid_651;
								return ADV_UPCS(Floor)(result.__ref());
							}
							else {
								#line 657 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
								if(__tmp__valid_651.IsValid() && Builtin::Is(*__tmp__valid_651, decltype(rounding)::ToPositiveInfinity)) {
									#line 657 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
									const auto& rounding = *__tmp__valid_651;
									return ADV_UPCS(Ceil)(result.__ref());
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
			#line 661 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			result /= pow10;
		}
		#line 664 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		return result; ADV_CHECK_REF_STRUCT_LOCAL_RETURN("self", __extension_Float64_501_f64);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getFractionalPart(__extension_Float64_501_f64 const& __this ) -> const __extension_Float64_501_f64
	{
		#line 504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(__this - ADV_UPCS(Truncate)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getCeil(__extension_Float64_501_f64 const& __this ) -> const __extension_Float64_501_f64
	{
		#line 511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		if (std::is_constant_evaluated()) {
			#line 512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::i128>(__this))> i = Builtin::Cast<true, Builtin::i128>(__this); 
			#line 513 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			return ((__this <=> i) > 0) ? (i + Builtin::i32(1)) : i;
		} else {
			#line 514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			{
				#line 515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				return std::ceil(Builtin::Cast<true, CDouble>(__this));
			}
		}
		return {};
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getFloor(__extension_Float64_501_f64 const& __this ) -> const __extension_Float64_501_f64
	{
		#line 528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		if (std::is_constant_evaluated()) {
			#line 529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::i128>(__this))> i = Builtin::Cast<true, Builtin::i128>(__this); 
			#line 530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			return ((__this <=> i) < 0) ? (i - Builtin::i32(1)) : i;
		} else {
			#line 531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			{
				#line 532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				return std::floor(Builtin::Cast<true, CDouble>(__this));
			}
		}
		return {};
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getTruncate(__extension_Float64_501_f64 const& __this ) -> const __extension_Float64_501_f64
	{
		#line 545 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		if (std::is_constant_evaluated()) {
			#line 546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			return Builtin::Cast<true, Builtin::i128>(__this);
		} else {
			#line 547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			{
				#line 548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				return std::trunc(Builtin::Cast<true, CDouble>(__this));
			}
		}
		return {};
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getRound(__extension_Float64_501_f64 const& __this ) -> const __extension_Float64_501_f64
	{
		#line 561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		if (std::is_constant_evaluated()) {
			#line 562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			return Builtin::Cast<true, Builtin::i128>((__this + ADV_UFCS(CopySign)(Builtin::f64(0.49999999999999994).__ref(), __this)));
		} else {
			#line 563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			{
				#line 564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				return std::round(Builtin::Cast<true, CDouble>(__this));
			}
		}
		return {};
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getRoundTiesEven(__extension_Float64_501_f64 const& __this ) -> const __extension_Float64_501_f64
	{
		#line 577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		Builtin::Auto<decltype(ADV_UPCS(Bits)(__this.__ref()))> bits = ADV_UPCS(Bits)(__this.__ref()); 
		#line 578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		Builtin::Auto<decltype(__Float64_Protected::ExtractBiasedExponentFromBits(bits))> biasedExponent = __Float64_Protected::ExtractBiasedExponentFromBits(bits); 
		#line 579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		if ((biasedExponent <=> Builtin::u32(0x03FEU)) <= 0) {
			#line 581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			if ((bits << Builtin::i32(1)) == Builtin::i32(0)) {
				#line 582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				return __this;
			}
			#line 587 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			Builtin::Auto<decltype((biasedExponent == Builtin::u32(0x03FEU) && __Float64_Protected::ExtractTrailingSignificandFromBits(bits) != Builtin::i32(0)) ? Builtin::f64(1.0) : Builtin::f64(0.0))> result = (biasedExponent == Builtin::u32(0x03FEU) && __Float64_Protected::ExtractTrailingSignificandFromBits(bits) != Builtin::i32(0)) ? Builtin::f64(1.0) : Builtin::f64(0.0); 
			#line 589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			return ADV_UFCS(CopySign)(result.__ref(), __this);
		}
		#line 593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		if ((biasedExponent <=> Builtin::u32(0x0433U)) >= 0) {
			#line 594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			return __this;
		}
		#line 597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT(((biasedExponent <=> Builtin::u32(0x03FEU)) >= 0 && (biasedExponent <=> Builtin::u32(0x0432U)) <= 0), "biasedExponent>=0x03FEuandbiasedExponent<=0x0432u");
		#line 600 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		Builtin::Auto<decltype(Builtin::u64(1ULL) << (Builtin::u64(0x0433ULL) - biasedExponent))> lastBitMask = Builtin::u64(1ULL) << (Builtin::u64(0x0433ULL) - biasedExponent); 
		#line 602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		Builtin::Auto<decltype(lastBitMask - Builtin::u32(1U))> roundBitsMask = lastBitMask - Builtin::u32(1U); 
		#line 605 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		bits += lastBitMask >> Builtin::i32(1);
		#line 607 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		if ((bits & roundBitsMask) == Builtin::i32(0)) {
			#line 609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			bits &= ADV_UFCS(_operator_not)(lastBitMask);
		} else {
			#line 610 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			{
				#line 612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				bits &= ADV_UFCS(_operator_not)(roundBitsMask);
			}
		}
		#line 615 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		return ADV_USFCS((Builtin::f64), FromBits)(bits);
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 667 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getExponentByteCount(__extension_Float64_501_f64 const& __this ) -> const Builtin::u32
	{
		#line 667 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u32>(Builtin::usize(sizeof(Builtin::i16)))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getExponentShortestBitLength(__extension_Float64_501_f64 const& __this ) -> const Builtin::u32
	{
		#line 670 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		Builtin::Auto<decltype(__Float64_Protected::Exponent(__this))> exponent = __Float64_Protected::Exponent(__this); 
		#line 671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		if ((exponent <=> Builtin::i32(0)) >= 0) {
			#line 672 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			return ADV_USPCS(BitWidth, Builtin::i16)() - ADV_UPCS(LeadingZeroCount)(exponent.__ref());
		} else {
			#line 673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			{
				#line 674 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				return ADV_USPCS(BitWidth, Builtin::i16)() + Builtin::i32(1) - ADV_UPCS(LeadingZeroCount)(exponent.__ref());
			}
		}
		return {};
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getSignificandBitLength(__extension_Float64_501_f64 const& __this ) -> const Builtin::u32
	{
		#line 677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(53U)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getSignificandByteCount(__extension_Float64_501_f64 const& __this ) -> const Builtin::u32
	{
		#line 678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u32>(Builtin::usize(sizeof(Builtin::u64)))); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	
} namespace __extensions { using namespace System;
#line 683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto _operator_mul_mul(__extension_Float64_682_f64 const& __this LIFETIMEBOUND, __extension_Float64_682_f64 exp) noexcept -> const typename __extension_Float64_682_f64
	{
		#line 683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(std::pow(Builtin::Cast<true, CDouble>(__this), Builtin::Cast<true, CDouble>(exp))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 684 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto _operator_mul_mul_eq(__extension_Float64_682_f64 & __this , __extension_Float64_682_f64 exp) noexcept -> typename __extension_Float64_682_f64&
	{
		#line 684 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(__this = std::pow(Builtin::Cast<true, CDouble>(__this), Builtin::Cast<true, CDouble>(exp))); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	
} namespace __extensions { using namespace System;
#line 689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getExp(__extension_Float64_687_f64 const& __this ) -> const __extension_Float64_687_f64
	{
		#line 689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(std::exp(Builtin::Cast<true, CDouble>(__this))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getExp2(__extension_Float64_687_f64 const& __this ) -> const __extension_Float64_687_f64
	{
		#line 691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(std::exp2(Builtin::Cast<true, CDouble>(__this))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getExp10(__extension_Float64_687_f64 const& __this ) -> const __extension_Float64_687_f64
	{
		#line 693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_mul)(Builtin::f64(10.0), __this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getExpM1(__extension_Float64_687_f64 const& __this ) -> const __extension_Float64_687_f64
	{
		#line 695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(std::expm1(Builtin::Cast<true, CDouble>(__this))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 697 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getExp2M1(__extension_Float64_687_f64 const& __this ) -> const __extension_Float64_687_f64
	{
		#line 697 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(std::exp2(Builtin::Cast<true, CDouble>(__this)) - Builtin::f64(1.0)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 699 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getExp10M1(__extension_Float64_687_f64 const& __this ) -> const __extension_Float64_687_f64
	{
		#line 699 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Exp10)(__this.__ref()) - Builtin::f64(1.0)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	
} namespace __extensions { using namespace System;
#line 704 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getLn(__extension_Float64_702_f64 const& __this ) -> const __extension_Float64_702_f64
	{
		#line 704 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(std::log(Builtin::Cast<true, CDouble>(__this))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 706 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getLnP1(__extension_Float64_702_f64 const& __this ) -> const __extension_Float64_702_f64
	{
		#line 706 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(std::log1p(Builtin::Cast<true, CDouble>(__this))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 708 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getLog2P1(__extension_Float64_702_f64 const& __this ) -> const __extension_Float64_702_f64
	{
		#line 708 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(std::log2(Builtin::Cast<true, CDouble>((__this + Builtin::f64(1.0))))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 710 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getLog10P1(__extension_Float64_702_f64 const& __this ) -> const __extension_Float64_702_f64
	{
		#line 710 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(std::log10(Builtin::Cast<true, CDouble>((__this + Builtin::f64(1.0))))); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	
} namespace __extensions { using namespace System;
#line 715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getSqrt(__extension_Float64_713_f64 const& __this ) -> const __extension_Float64_713_f64
	{
		#line 715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(std::sqrt(Builtin::Cast<true, CDouble>(__this))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 717 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getCbrt(__extension_Float64_713_f64 const& __this ) -> const __extension_Float64_713_f64
	{
		#line 717 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(std::cbrt(Builtin::Cast<true, CDouble>(__this))); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	
} namespace __extensions { using namespace System;
#line 1062 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto ToRadians(__extension_Float64_821_f64 const& __this LIFETIMEBOUND) noexcept -> const typename __extension_Float64_821_f64
	{
		#line 1062 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY((__this * ADV_USPCS(Pi, Builtin::f64)()) / Builtin::f64(180.0)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1064 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto ToDegrees(__extension_Float64_821_f64 const& __this LIFETIMEBOUND) noexcept -> const typename __extension_Float64_821_f64
	{
		#line 1064 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY((__this * Builtin::f64(180.0)) / ADV_USPCS(Pi, Builtin::f64)()); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 823 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getSin(__extension_Float64_821_f64 const& __this ) -> const __extension_Float64_821_f64
	{
		#line 823 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(std::sin(Builtin::Cast<true, CDouble>(__this))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 825 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getCos(__extension_Float64_821_f64 const& __this ) -> const __extension_Float64_821_f64
	{
		#line 825 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(std::cos(Builtin::Cast<true, CDouble>(__this))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 827 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getTan(__extension_Float64_821_f64 const& __this ) -> const __extension_Float64_821_f64
	{
		#line 827 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(std::tan(Builtin::Cast<true, CDouble>(__this))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 829 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getCot(__extension_Float64_821_f64 const& __this ) -> const __extension_Float64_821_f64
	{
		#line 829 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::f64(1.0) / ADV_UPCS(Tan)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 831 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getSec(__extension_Float64_821_f64 const& __this ) -> const __extension_Float64_821_f64
	{
		#line 831 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::f64(1.0) / ADV_UPCS(Cos)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 833 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getCsc(__extension_Float64_821_f64 const& __this ) -> const __extension_Float64_821_f64
	{
		#line 833 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::f64(1.0) / ADV_UPCS(Sin)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 835 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getAsin(__extension_Float64_821_f64 const& __this ) -> const __extension_Float64_821_f64
	{
		#line 835 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(std::asin(Builtin::Cast<true, CDouble>(__this))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 837 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getAcos(__extension_Float64_821_f64 const& __this ) -> const __extension_Float64_821_f64
	{
		#line 837 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(std::acos(Builtin::Cast<true, CDouble>(__this))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 839 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getAtan(__extension_Float64_821_f64 const& __this ) -> const __extension_Float64_821_f64
	{
		#line 839 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(std::atan(Builtin::Cast<true, CDouble>(__this))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 841 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getAcot(__extension_Float64_821_f64 const& __this ) -> const __extension_Float64_821_f64
	{
		#line 841 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(std::atan(Builtin::Cast<true, CDouble>((Builtin::f64(1.0) / __this)))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 843 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getAsec(__extension_Float64_821_f64 const& __this ) -> const __extension_Float64_821_f64
	{
		#line 843 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(std::acos(Builtin::Cast<true, CDouble>((Builtin::f64(1.0) / __this)))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 845 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getAcsc(__extension_Float64_821_f64 const& __this ) -> const __extension_Float64_821_f64
	{
		#line 845 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(std::asin(Builtin::Cast<true, CDouble>((Builtin::f64(1.0) / __this)))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 847 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getSinCos(__extension_Float64_821_f64 const& __this ) -> const std::tuple<__extension_Float64_821_f64, __extension_Float64_821_f64>
	{
		#line 847 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(std::make_tuple(ADV_UPCS(Sin)(__this.__ref()), ADV_UPCS(Cos)(__this.__ref()))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1043 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getCotPi(__extension_Float64_821_f64 const& __this ) -> const __extension_Float64_821_f64
	{
		#line 1043 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::f64(1.0) / ADV_UPCS(TanPi)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1045 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getSecPi(__extension_Float64_821_f64 const& __this ) -> const __extension_Float64_821_f64
	{
		#line 1045 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::f64(1.0) / ADV_UPCS(CosPi)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1047 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getCscPi(__extension_Float64_821_f64 const& __this ) -> const __extension_Float64_821_f64
	{
		#line 1047 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::f64(1.0) / ADV_UPCS(SinPi)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1049 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getAsinPi(__extension_Float64_821_f64 const& __this ) -> const __extension_Float64_821_f64
	{
		#line 1049 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Asin)(__this.__ref()) / ADV_USPCS(Pi, Builtin::f64)()); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1051 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getAcosPi(__extension_Float64_821_f64 const& __this ) -> const __extension_Float64_821_f64
	{
		#line 1051 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Acos)(__this.__ref()) / ADV_USPCS(Pi, Builtin::f64)()); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1053 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getAtanPi(__extension_Float64_821_f64 const& __this ) -> const __extension_Float64_821_f64
	{
		#line 1053 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Atan)(__this.__ref()) / ADV_USPCS(Pi, Builtin::f64)()); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1055 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getAcotPi(__extension_Float64_821_f64 const& __this ) -> const __extension_Float64_821_f64
	{
		#line 1055 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Acot)(__this.__ref()) / ADV_USPCS(Pi, Builtin::f64)()); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1057 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getAsecPi(__extension_Float64_821_f64 const& __this ) -> const __extension_Float64_821_f64
	{
		#line 1057 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Asec)(__this.__ref()) / ADV_USPCS(Pi, Builtin::f64)()); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1059 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getAcscPi(__extension_Float64_821_f64 const& __this ) -> const __extension_Float64_821_f64
	{
		#line 1059 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Acsc)(__this.__ref()) / ADV_USPCS(Pi, Builtin::f64)()); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	
} namespace __extensions { using namespace System;
#line 1069 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getAcosh(__extension_Float64_1067_f64 const& __this ) -> const __extension_Float64_1067_f64
	{
		#line 1069 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(std::acosh(Builtin::Cast<true, CDouble>(__this))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1071 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getAcoth(__extension_Float64_1067_f64 const& __this ) -> const __extension_Float64_1067_f64
	{
		#line 1071 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Atanh)((Builtin::f64(1.0) / __this).__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1073 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getAcsch(__extension_Float64_1067_f64 const& __this ) -> const __extension_Float64_1067_f64
	{
		#line 1073 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Asinh)((Builtin::f64(1.0) / __this).__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1075 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getAsech(__extension_Float64_1067_f64 const& __this ) -> const __extension_Float64_1067_f64
	{
		#line 1075 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Acosh)((Builtin::f64(1.0) / __this).__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1077 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getAsinh(__extension_Float64_1067_f64 const& __this ) -> const __extension_Float64_1067_f64
	{
		#line 1077 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(std::asinh(Builtin::Cast<true, CDouble>(__this))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1079 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getAtanh(__extension_Float64_1067_f64 const& __this ) -> const __extension_Float64_1067_f64
	{
		#line 1079 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(std::atanh(Builtin::Cast<true, CDouble>(__this))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1081 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getCosh(__extension_Float64_1067_f64 const& __this ) -> const __extension_Float64_1067_f64
	{
		#line 1081 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(std::cosh(Builtin::Cast<true, CDouble>(__this))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1083 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getCoth(__extension_Float64_1067_f64 const& __this ) -> const __extension_Float64_1067_f64
	{
		#line 1083 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::f64(1.0) / ADV_UPCS(Tanh)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1085 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getCsch(__extension_Float64_1067_f64 const& __this ) -> const __extension_Float64_1067_f64
	{
		#line 1085 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::f64(1.0) / ADV_UPCS(Sinh)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1087 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getSech(__extension_Float64_1067_f64 const& __this ) -> const __extension_Float64_1067_f64
	{
		#line 1087 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::f64(1.0) / ADV_UPCS(Cosh)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1089 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getSinh(__extension_Float64_1067_f64 const& __this ) -> const __extension_Float64_1067_f64
	{
		#line 1089 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(std::sinh(Builtin::Cast<true, CDouble>(__this))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1091 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getTanh(__extension_Float64_1067_f64 const& __this ) -> const __extension_Float64_1067_f64
	{
		#line 1091 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(std::tanh(Builtin::Cast<true, CDouble>(__this))); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	
} namespace __extensions { using namespace System;
#line 1102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto Atan2(__extension_Float64_1094_f64 const& __this LIFETIMEBOUND, __extension_Float64_1094_f64 y)  -> const typename __extension_Float64_1094_f64
	{
		#line 1102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(std::atan2(Builtin::Cast<true, CDouble>(__this), Builtin::Cast<true, CDouble>(y))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto Atan2Pi(__extension_Float64_1094_f64 const& __this LIFETIMEBOUND, __extension_Float64_1094_f64 y)  -> const typename __extension_Float64_1094_f64
	{
		#line 1103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Atan2)(__this.__ref(), y) / ADV_USPCS(Pi, Builtin::f64)()); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto FusedMultiplyAdd(__extension_Float64_1094_f64 const& __this LIFETIMEBOUND, __extension_Float64_1094_f64 rhs, __extension_Float64_1094_f64 addend)  -> const typename __extension_Float64_1094_f64
	{
		#line 1192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(std::fma(Builtin::Cast<true, CDouble>(__this), Builtin::Cast<true, CDouble>(rhs), Builtin::Cast<true, CDouble>(addend))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto Ieee754Remainder(__extension_Float64_1094_f64 const& __this LIFETIMEBOUND, __extension_Float64_1094_f64 rhs)  -> const typename __extension_Float64_1094_f64
	{
		#line 1194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(std::remainder(Builtin::Cast<true, CDouble>(__this), Builtin::Cast<true, CDouble>(rhs))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto Lerp(__extension_Float64_1094_f64 const& __this LIFETIMEBOUND, __extension_Float64_1094_f64 end, __extension_Float64_1094_f64 amount) noexcept -> const typename __extension_Float64_1094_f64
	{
		#line 1197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(__this * (Builtin::f64(1.0) - amount) + (end * amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto ScaleB(__extension_Float64_1094_f64 const& __this LIFETIMEBOUND, Builtin::i32 n)  -> const typename __extension_Float64_1094_f64
	{
		#line 1199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(std::scalbn(Builtin::Cast<true, CDouble>(__this), n)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1095 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto __static_getEpsilon<__extension_Float64_1094_f64>::get() -> const __extension_Float64_1094_f64
	{
		#line 1095 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::f64(4.9406564584124654e-324)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1096 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto __static_getNegativeInfinity<__extension_Float64_1094_f64>::get() -> const __extension_Float64_1094_f64
	{
		#line 1096 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Builtin::f64), FromBits)(Builtin::u64(0xFFF0000000000000ULL))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1097 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto __static_getPositiveInfinity<__extension_Float64_1094_f64>::get() -> const __extension_Float64_1094_f64
	{
		#line 1097 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Builtin::f64), FromBits)(Builtin::u64(0x7FF0000000000000ULL))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1098 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto __static_getNaN<__extension_Float64_1094_f64>::get() -> const __extension_Float64_1094_f64
	{
		#line 1098 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::NanValue()); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1099 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto __static_getNegativeZero<__extension_Float64_1094_f64>::get() -> const __extension_Float64_1094_f64
	{
		#line 1099 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::f64(-0.0)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getBitIncrement(__extension_Float64_1094_f64 const& __this ) -> const __extension_Float64_1094_f64
	{
		#line 1113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		Builtin::Auto<decltype(ADV_UPCS(Bits)(__this.__ref()))> bits = ADV_UPCS(Bits)(__this.__ref()); 
		#line 1114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		if ((((bits >> Builtin::i32(32)) & Builtin::u32(0x7FF00000U)) <=> Builtin::u32(0x7FF00000U)) >= 0) {
			#line 1118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			return bits == Builtin::u64(0xFFF0000000000000ULL) ? ADV_USPCS(MinValue, Builtin::f64)() : __this;
		}
		#line 1122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		if (bits == Builtin::u64(0x8000000000000000ULL)) {
			#line 1123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			return ADV_USPCS(Epsilon, Builtin::f64)();
		}
		#line 1126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		bits += (bits <=> ADV_USPCS(MaxValue, Builtin::i64)()) > 0 ? Builtin::i32(-1) : +Builtin::i32(1);
		#line 1127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		return ADV_USFCS((Builtin::f64), FromBits)(bits);
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getBitDecrement(__extension_Float64_1094_f64 const& __this ) -> const __extension_Float64_1094_f64
	{
		#line 1137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		Builtin::Auto<decltype(ADV_UPCS(Bits)(__this.__ref()))> bits = ADV_UPCS(Bits)(__this.__ref()); 
		#line 1138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		if ((((bits >> Builtin::i32(32)) & Builtin::u32(0x7FF00000U)) <=> Builtin::u32(0x7FF00000U)) >= 0) {
			#line 1142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			return bits == Builtin::u64(0x7FF0000000000000ULL) ? ADV_USPCS(MaxValue, Builtin::f64)() : __this;
		}
		#line 1146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		if (bits == Builtin::u32(0U)) {
			#line 1147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			return -ADV_USPCS(Epsilon, Builtin::f64)();
		}
		#line 1150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		bits += (bits <=> ADV_USPCS(MaxValue, Builtin::i64)()) > 0 ? +Builtin::i32(1) : Builtin::i32(-1);
		#line 1151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		return ADV_USFCS((Builtin::f64), FromBits)(bits);
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getILogB(__extension_Float64_1094_f64 const& __this ) -> const Builtin::i32
	{
		#line 1154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(std::ilogb(Builtin::Cast<true, CDouble>(__this))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getReciprocalEstimate(__extension_Float64_1094_f64 const& __this ) -> const __extension_Float64_1094_f64
	{
		#line 1158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		if (std::is_constant_evaluated()) {
			#line 1159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			return Builtin::f64(1.0) / __this;
		} else {
			#line 1160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			{
				#line 1162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				return Builtin::f64(1.0) / __this;
			}
		}
		return {};
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getReciprocalSqrtEstimate(__extension_Float64_1094_f64 const& __this ) -> const __extension_Float64_1094_f64
	{
		#line 1167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		if (std::is_constant_evaluated()) {
			#line 1168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			return Builtin::f64(1.0) / ADV_UPCS(Sqrt)(__this.__ref());
		} else {
			#line 1169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			{
				#line 1171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				return Builtin::f64(1.0) / ADV_UPCS(Sqrt)(__this.__ref());
			}
		}
		return {};
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto getCategory(__extension_Float64_1094_f64 const& __this ) -> const FloatingPointCategory
	{
		#line 1178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		if (ADV_UPCS(IsNaN)(__this.__ref())) {
			#line 1179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			return ADV_USPCS(NaN, FloatingPointCategory)();
		} else {
			#line 1180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			if (ADV_UPCS(IsInfinity)(__this.__ref())) {
				#line 1181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				return ADV_USPCS(Infinity, FloatingPointCategory)();
			} else {
				#line 1182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				if (ADV_UPCS(IsZero)(__this.__ref())) {
					#line 1183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
					return ADV_USPCS(Zero, FloatingPointCategory)();
				} else {
					#line 1184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
					if (ADV_UPCS(IsSubnormal)(__this.__ref())) {
						#line 1185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
						return ADV_USPCS(Subnormal, FloatingPointCategory)();
					} else {
						#line 1186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
						{
							#line 1187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
							return ADV_USPCS(Normal, FloatingPointCategory)();
						}
					}
				}
			}
		}
		return {};
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getGamma(__extension_Float64_1094_f64 const& __this ) -> const __extension_Float64_1094_f64
	{
		#line 1202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(std::tgamma(Builtin::Cast<true, CDouble>(__this))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getLnGamma(__extension_Float64_1094_f64 const& __this ) -> const __extension_Float64_1094_f64
	{
		#line 1204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(std::lgamma(Builtin::Cast<true, CDouble>(__this))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getErf(__extension_Float64_1094_f64 const& __this ) -> const __extension_Float64_1094_f64
	{
		#line 1206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(std::erf(Builtin::Cast<true, CDouble>(__this))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto getErfc(__extension_Float64_1094_f64 const& __this ) -> const __extension_Float64_1094_f64
	{
		#line 1208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(std::erfc(Builtin::Cast<true, CDouble>(__this))); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	
} namespace __extensions { using namespace System;
#line 1212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto __static_getNumberBufferLength<__extension_Float64_1211_f64>::get() -> const Builtin::i32
	{
		#line 1212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(767) + Builtin::i32(1) + Builtin::i32(1)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto __static_getZeroBits<__extension_Float64_1211_f64>::get() -> const Builtin::u128
	{
		#line 1213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(0U)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto __static_getInfinityBits<__extension_Float64_1211_f64>::get() -> const Builtin::u128
	{
		#line 1214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::u64(0x7FF0000000000000ULL)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto __static_getNormalMantissaMask<__extension_Float64_1211_f64>::get() -> const Builtin::u128
	{
		#line 1215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY((Builtin::u128(1ULL) << __Float64_Protected::SignificandLength) - Builtin::u32(1U)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto __static_getDenormalMantissaMask<__extension_Float64_1211_f64>::get() -> const Builtin::u128
	{
		#line 1216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(__Float64_Protected::TrailingSignificandMask); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto __static_getMinBinaryExponent<__extension_Float64_1211_f64>::get() -> const Builtin::i32
	{
		#line 1217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(1) - __Float64_Protected::MaxExponent); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto __static_getMaxBinaryExponent<__extension_Float64_1211_f64>::get() -> const Builtin::i32
	{
		#line 1218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(__Float64_Protected::MaxExponent); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto __static_getMinDecimalExponent<__extension_Float64_1211_f64>::get() -> const Builtin::i32
	{
		#line 1219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(-324)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto __static_getMaxDecimalExponent<__extension_Float64_1211_f64>::get() -> const Builtin::i32
	{
		#line 1220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(309)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto __static_getExponentBias<__extension_Float64_1211_f64>::get() -> const Builtin::i32
	{
		#line 1221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(__Float64_Protected::ExpBias); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto __static_getExponentBits<__extension_Float64_1211_f64>::get() -> const Builtin::u128
	{
		#line 1222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(11U)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto __static_getOverflowDecimalExponent<__extension_Float64_1211_f64>::get() -> const Builtin::i32
	{
		#line 1223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl)((__Float64_Protected::MaxExponent + Builtin::i32(2) * __Float64_Protected::SignificandLength), Builtin::i32(3))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto __static_getInfinityExponent<__extension_Float64_1211_f64>::get() -> const Builtin::i32
	{
		#line 1224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(0x7FF)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto __static_getNormalMantissaBits<__extension_Float64_1211_f64>::get() -> const Builtin::u16
	{
		#line 1225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u16>(__Float64_Protected::SignificandLength)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto __static_getDenormalMantissaBits<__extension_Float64_1211_f64>::get() -> const Builtin::u16
	{
		#line 1226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u16>(__Float64_Protected::TrailingSignificandLength)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto __static_getMinFastFloatDecimalExponent<__extension_Float64_1211_f64>::get() -> const Builtin::i32
	{
		#line 1227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(-342)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto __static_getMaxFastFloatDecimalExponent<__extension_Float64_1211_f64>::get() -> const Builtin::i32
	{
		#line 1228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(308)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto __static_getMinExponentRoundToEven<__extension_Float64_1211_f64>::get() -> const Builtin::i32
	{
		#line 1229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(-4)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto __static_getMaxExponentRoundToEven<__extension_Float64_1211_f64>::get() -> const Builtin::i32
	{
		#line 1230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(23)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto __static_getMaxExponentFastPath<__extension_Float64_1211_f64>::get() -> const Builtin::i32
	{
		#line 1231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(22)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline constexpr auto __static_getMaxMantissaFastPath<__extension_Float64_1211_f64>::get() -> const Builtin::u128
	{
		#line 1232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_EXPRESSION_BODY(Builtin::u128(2ULL) << __Float64_Protected::TrailingSignificandLength); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	

}