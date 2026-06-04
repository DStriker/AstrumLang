#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "Float32.h"
#include "Float64.h"

namespace System {
namespace __Unsafe {} namespace __Float128_Protected__Unsafe {}
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
	} namespace __extensions { using namespace System;
#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	using __extension_Float128_14_f128 = Builtin::f128;
	#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE(IMinMaxValue, IMinMaxValue);
	#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct __static_getMinValue; template<> struct __static_getMinValue<__extension_Float128_14_f128> { static inline constexpr auto get() -> const __extension_Float128_14_f128; };
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct __static_getMaxValue; template<> struct __static_getMaxValue<__extension_Float128_14_f128> { static inline constexpr auto get() -> const __extension_Float128_14_f128; };
	#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f128, IMinMaxValue, IMinMaxValue, f128);
	} namespace System{
using __extensions::__static_getMinValue;
using __extensions::__static_getMaxValue;

		} namespace __extensions { using namespace System;
#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	using __extension_Float128_19_f128 = Builtin::f128;
	#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto _operator_eq_eq_mul(__extension_Float128_19_f128 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool;
	#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto operator<=>(__extension_Float128_19_f128 const& __this LIFETIMEBOUND, Builtin::Nullable<__extension_Float128_19_f128> rhs) noexcept -> const Builtin::i32;
	#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct __static_FromBits; template<> struct __static_FromBits<__extension_Float128_19_f128> { static inline constexpr auto get(Builtin::u128 bits)  -> const typename __extension_Float128_19_f128; };
	#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getBits(__extension_Float128_19_f128 const& __this ) -> const Builtin::u128;
	#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct __static_getBitWidth; template<> struct __static_getBitWidth<__extension_Float128_19_f128> { static inline constexpr auto get() -> const Builtin::u32; };
	#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct __static_getMinPositiveValue; template<> struct __static_getMinPositiveValue<__extension_Float128_19_f128> { static inline constexpr auto get() -> const __extension_Float128_19_f128; };
	#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct __static_getHalfOne; template<> struct __static_getHalfOne<__extension_Float128_19_f128> { static inline constexpr auto get() -> const __extension_Float128_19_f128; };
	#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getHashCode(__extension_Float128_19_f128 const& __this ) -> const Builtin::u64;
	} namespace System{
using __extensions::_operator_eq_eq_mul;
using __extensions::operator<=>;
using __extensions::__static_FromBits;
using __extensions::getBits;
using __extensions::__static_getBitWidth;
using __extensions::__static_getMinPositiveValue;
using __extensions::__static_getHalfOne;
using __extensions::getHashCode;

		} namespace __extensions { using namespace System;
#line 62 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	using __extension_Float128_62_f128 = Builtin::f128;
	#line 62 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE(IAbstractComparable, IAbstractComparable);
	#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto _operator_lt_eq_gt_mul(__extension_Float128_62_f128 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32;
	#line 62 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f128, IAbstractComparable, IAbstractComparable, f128);
	} namespace System{
using __extensions::_operator_lt_eq_gt_mul;

		} namespace __extensions { using namespace System;
#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	using __extension_Float128_77_f128 = Builtin::f128;
	#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE(IConvertible, IConvertible);
	#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToBoolean(__extension_Float128_77_f128 const& __this LIFETIMEBOUND) noexcept -> const bool;
	#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToInt8(__extension_Float128_77_f128 const& __this LIFETIMEBOUND)  -> const Builtin::i8;
	#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToUInt8(__extension_Float128_77_f128 const& __this LIFETIMEBOUND)  -> const Builtin::u8;
	#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToInt16(__extension_Float128_77_f128 const& __this LIFETIMEBOUND)  -> const Builtin::i16;
	#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToUInt16(__extension_Float128_77_f128 const& __this LIFETIMEBOUND)  -> const Builtin::u16;
	#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToInt32(__extension_Float128_77_f128 const& __this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 84 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToUInt32(__extension_Float128_77_f128 const& __this LIFETIMEBOUND)  -> const Builtin::u32;
	#line 85 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToInt64(__extension_Float128_77_f128 const& __this LIFETIMEBOUND)  -> const Builtin::i64;
	#line 86 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToUInt64(__extension_Float128_77_f128 const& __this LIFETIMEBOUND)  -> const Builtin::u64;
	#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToInt128(__extension_Float128_77_f128 const& __this LIFETIMEBOUND)  -> const Builtin::i128;
	#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToUInt128(__extension_Float128_77_f128 const& __this LIFETIMEBOUND)  -> const Builtin::u128;
	#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToIsize(__extension_Float128_77_f128 const& __this LIFETIMEBOUND)  -> const Builtin::isize;
	#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToUsize(__extension_Float128_77_f128 const& __this LIFETIMEBOUND)  -> const Builtin::usize;
	#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToFloat32(__extension_Float128_77_f128 const& __this LIFETIMEBOUND)  -> const Builtin::f32;
	#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToFloat64(__extension_Float128_77_f128 const& __this LIFETIMEBOUND)  -> const Builtin::f64;
	#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToByte(__extension_Float128_77_f128 const& __this LIFETIMEBOUND)  -> const Builtin::char8;
	#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToChar(__extension_Float128_77_f128 const& __this LIFETIMEBOUND)  -> const Builtin::char16;
	#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f128, IConvertible, IConvertible, f128);
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
#line 99 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	using __extension_Float128_99_f128 = Builtin::f128;
	#line 99 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE(IDivisibleArithmetic, IDivisibleArithmetic);
	#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class T> inline constexpr auto _operator_div_mod(__extension_Float128_99_f128 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_Float128_99_f128, __extension_Float128_99_f128>;
	#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class T> inline constexpr auto _operator_div_not(__extension_Float128_99_f128 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Float128_99_f128;
	#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto _operator_div_not_eq(__extension_Float128_99_f128 & __this , auto rhs)  -> typename __extension_Float128_99_f128&;
	#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class T> inline constexpr auto _operator_div_lt(__extension_Float128_99_f128 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Float128_99_f128;
	#line 112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto _operator_div_lt_eq(__extension_Float128_99_f128 & __this , auto rhs)  -> typename __extension_Float128_99_f128&;
	#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class T> inline constexpr auto _operator_div_gt(__extension_Float128_99_f128 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Float128_99_f128;
	#line 116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto _operator_div_gt_eq(__extension_Float128_99_f128 & __this , auto rhs)  -> typename __extension_Float128_99_f128&;
	#line 99 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f128, IDivisibleArithmetic, IDivisibleArithmetic, f128);
	} namespace System{
using __extensions::_operator_div_mod;
using __extensions::_operator_div_not;
using __extensions::_operator_div_not_eq;
using __extensions::_operator_div_lt;
using __extensions::_operator_div_lt_eq;
using __extensions::_operator_div_gt;
using __extensions::_operator_div_gt_eq;

		} namespace __extensions { using namespace System;
#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	using __extension_Float128_120_f128 = Builtin::f128;
	#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE(ISignedIntegerPowerArithmetic, ISignedIntegerPowerArithmetic);
	#line 122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto _operator_xor_xor(__extension_Float128_120_f128 const& __this LIFETIMEBOUND, Builtin::i32 exp)  -> const typename __extension_Float128_120_f128;
	#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto _operator_xor_xor_eq(__extension_Float128_120_f128 & __this , Builtin::i32 exp)  -> typename __extension_Float128_120_f128&;
	#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f128, ISignedIntegerPowerArithmetic, ISignedIntegerPowerArithmetic, f128);
	} namespace System{
using __extensions::_operator_xor_xor;
using __extensions::_operator_xor_xor_eq;

		} namespace __extensions { using namespace System;
#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	using __extension_Float128_161_f128 = Builtin::f128;
	#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE(INumberBase, INumberBase);
	#line 198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto MaxMagnitude(__extension_Float128_161_f128 const& __this LIFETIMEBOUND, __extension_Float128_161_f128 rhs) noexcept -> const typename __extension_Float128_161_f128;
	#line 216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto MaxMagnitudeNumber(__extension_Float128_161_f128 const& __this LIFETIMEBOUND, __extension_Float128_161_f128 rhs) noexcept -> const typename __extension_Float128_161_f128;
	#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto MinMagnitude(__extension_Float128_161_f128 const& __this LIFETIMEBOUND, __extension_Float128_161_f128 rhs) noexcept -> const typename __extension_Float128_161_f128;
	#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto MinMagnitudeNumber(__extension_Float128_161_f128 const& __this LIFETIMEBOUND, __extension_Float128_161_f128 rhs) noexcept -> const typename __extension_Float128_161_f128;
	#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto Parse(__extension_Float128_161_f128 const& __this LIFETIMEBOUND, Builtin::Str input)  -> const typename __extension_Float128_161_f128;
	#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto TryParse(__extension_Float128_161_f128 const& __this LIFETIMEBOUND, Builtin::Str input) noexcept -> const Builtin::Nullable<__extension_Float128_161_f128>;
	#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto NarrowToInt8(__extension_Float128_161_f128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i8;
	#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto NarrowToUInt8(__extension_Float128_161_f128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u8;
	#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto NarrowToInt16(__extension_Float128_161_f128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i16;
	#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto NarrowToUInt16(__extension_Float128_161_f128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u16;
	#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto NarrowToInt32(__extension_Float128_161_f128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i32;
	#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto NarrowToUInt32(__extension_Float128_161_f128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u32;
	#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto NarrowToInt64(__extension_Float128_161_f128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i64;
	#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto NarrowToUInt64(__extension_Float128_161_f128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u64;
	#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto NarrowToInt128(__extension_Float128_161_f128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i128;
	#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto NarrowToUInt128(__extension_Float128_161_f128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u128;
	#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto NarrowToIsize(__extension_Float128_161_f128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::isize;
	#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto NarrowToUsize(__extension_Float128_161_f128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::usize;
	#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct __static_getOne; template<> struct __static_getOne<__extension_Float128_161_f128> { static inline constexpr auto get() -> const __extension_Float128_161_f128; };
	#line 163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct __static_getZero; template<> struct __static_getZero<__extension_Float128_161_f128> { static inline constexpr auto get() -> const __extension_Float128_161_f128; };
	#line 164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct __static_getRadix; template<> struct __static_getRadix<__extension_Float128_161_f128> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getAbs(__extension_Float128_161_f128 const& __this ) -> const __extension_Float128_161_f128;
	#line 172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsCanonical(__extension_Float128_161_f128 const& __this ) -> const bool;
	#line 173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsComplexNumber(__extension_Float128_161_f128 const& __this ) -> const bool;
	#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsEvenInteger(__extension_Float128_161_f128 const& __this ) -> const bool;
	#line 175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsFinite(__extension_Float128_161_f128 const& __this ) -> const bool;
	#line 176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsImaginaryNumber(__extension_Float128_161_f128 const& __this ) -> const bool;
	#line 177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsInfinity(__extension_Float128_161_f128 const& __this ) -> const bool;
	#line 178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsInteger(__extension_Float128_161_f128 const& __this ) -> const bool;
	#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsNaN(__extension_Float128_161_f128 const& __this ) -> const bool;
	#line 180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsNegative(__extension_Float128_161_f128 const& __this ) -> const bool;
	#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsNegativeInfinity(__extension_Float128_161_f128 const& __this ) -> const bool;
	#line 182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsNormal(__extension_Float128_161_f128 const& __this ) -> const bool;
	#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsOddInteger(__extension_Float128_161_f128 const& __this ) -> const bool;
	#line 188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsPositive(__extension_Float128_161_f128 const& __this ) -> const bool;
	#line 189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsPositiveInfinity(__extension_Float128_161_f128 const& __this ) -> const bool;
	#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsRealNumber(__extension_Float128_161_f128 const& __this ) -> const bool;
	#line 191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsSubnormal(__extension_Float128_161_f128 const& __this ) -> const bool;
	#line 196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsZero(__extension_Float128_161_f128 const& __this ) -> const bool;
	#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f128, INumberBase, INumberBase, f128);
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
#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	using __extension_Float128_296_f128 = Builtin::f128;
	#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE(ISignedNumber, ISignedNumber);
	#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct __static_getMinusOne; template<> struct __static_getMinusOne<__extension_Float128_296_f128> { static inline constexpr auto get() -> const __extension_Float128_296_f128; };
	#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f128, ISignedNumber, ISignedNumber, f128);
	} namespace System{
using __extensions::__static_getMinusOne;

		} namespace __extensions { using namespace System;
#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	using __extension_Float128_300_f128 = Builtin::f128;
	#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE(INumber, INumber);
	#line 308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto CopySign(__extension_Float128_300_f128 const& __this LIFETIMEBOUND, __extension_Float128_300_f128 sign) noexcept -> const typename __extension_Float128_300_f128;
	#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto Max(__extension_Float128_300_f128 const& __this LIFETIMEBOUND, __extension_Float128_300_f128 rhs) noexcept -> const typename __extension_Float128_300_f128;
	#line 325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto MaxNumber(__extension_Float128_300_f128 const& __this LIFETIMEBOUND, __extension_Float128_300_f128 rhs) noexcept -> const typename __extension_Float128_300_f128;
	#line 335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto Min(__extension_Float128_300_f128 const& __this LIFETIMEBOUND, __extension_Float128_300_f128 rhs) noexcept -> const typename __extension_Float128_300_f128;
	#line 345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto MinNumber(__extension_Float128_300_f128 const& __this LIFETIMEBOUND, __extension_Float128_300_f128 rhs) noexcept -> const typename __extension_Float128_300_f128;
	#line 355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto Clamp(__extension_Float128_300_f128 const& __this LIFETIMEBOUND, __extension_Float128_300_f128 min, __extension_Float128_300_f128 max)  -> const typename __extension_Float128_300_f128;
	#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getSign(__extension_Float128_300_f128 const& __this ) -> const Builtin::i32;
	#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f128, INumber, INumber, f128);
	} namespace System{
using __extensions::CopySign;
using __extensions::Max;
using __extensions::MaxNumber;
using __extensions::Min;
using __extensions::MinNumber;
using __extensions::Clamp;
using __extensions::getSign;

		} namespace __extensions { using namespace System;
#line 404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	using __extension_Float128_404_f128 = Builtin::f128;
	#line 404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE(IBinaryNumber, IBinaryNumber);
	#line 450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto Log(__extension_Float128_404_f128 const& __this LIFETIMEBOUND, __extension_Float128_404_f128 base) noexcept -> const typename __extension_Float128_404_f128;
	#line 471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto Midpoint(__extension_Float128_404_f128 const& __this LIFETIMEBOUND, __extension_Float128_404_f128 rhs) noexcept -> const typename __extension_Float128_404_f128;
	#line 483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto IsMultipleOf(__extension_Float128_404_f128 const& __this LIFETIMEBOUND, __extension_Float128_404_f128 rhs) noexcept -> const bool;
	#line 406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct __static_getAllBitsSet; template<> struct __static_getAllBitsSet<__extension_Float128_404_f128> { static inline constexpr auto get() -> const __extension_Float128_404_f128; };
	#line 409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsPow2(__extension_Float128_404_f128 const& __this ) -> const bool;
	#line 435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto getLog2(__extension_Float128_404_f128 const& __this ) -> const __extension_Float128_404_f128;
	#line 442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto getLog10(__extension_Float128_404_f128 const& __this ) -> const __extension_Float128_404_f128;
	#line 404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f128, IBinaryNumber, IBinaryNumber, f128);
	} namespace System{
using __extensions::Log;
using __extensions::Midpoint;
using __extensions::IsMultipleOf;
using __extensions::__static_getAllBitsSet;
using __extensions::getIsPow2;
using __extensions::getLog2;
using __extensions::getLog10;

		} namespace __extensions { using namespace System;
#line 497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	using __extension_Float128_497_f128 = Builtin::f128;
	#line 497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE(IFloatingPointConstants, IFloatingPointConstants);
	#line 499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct __static_getPi; template<> struct __static_getPi<__extension_Float128_497_f128> { static inline constexpr auto get() -> const __extension_Float128_497_f128; };
	#line 500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct __static_getE; template<> struct __static_getE<__extension_Float128_497_f128> { static inline constexpr auto get() -> const __extension_Float128_497_f128; };
	#line 501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct __static_getTau; template<> struct __static_getTau<__extension_Float128_497_f128> { static inline constexpr auto get() -> const __extension_Float128_497_f128; };
	#line 497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f128, IFloatingPointConstants, IFloatingPointConstants, f128);
	} namespace System{
using __extensions::__static_getPi;
using __extensions::__static_getE;
using __extensions::__static_getTau;

		} namespace __extensions { using namespace System;
#line 504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	using __extension_Float128_504_f128 = Builtin::f128;
	#line 504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE(IFloatingPoint, IFloatingPoint);
	#line 539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto CeilToInt32(__extension_Float128_504_f128 const& __this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto CeilToInt64(__extension_Float128_504_f128 const& __this LIFETIMEBOUND)  -> const Builtin::i64;
	#line 541 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto CeilToInt128(__extension_Float128_504_f128 const& __this LIFETIMEBOUND)  -> const Builtin::i128;
	#line 573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto FloorToInt32(__extension_Float128_504_f128 const& __this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto FloorToInt64(__extension_Float128_504_f128 const& __this LIFETIMEBOUND)  -> const Builtin::i64;
	#line 575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto FloorToInt128(__extension_Float128_504_f128 const& __this LIFETIMEBOUND)  -> const Builtin::i128;
	#line 608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto TruncateToInt32(__extension_Float128_504_f128 const& __this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto TruncateToInt64(__extension_Float128_504_f128 const& __this LIFETIMEBOUND)  -> const Builtin::i64;
	#line 610 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto TruncateToInt128(__extension_Float128_504_f128 const& __this LIFETIMEBOUND)  -> const Builtin::i128;
	#line 621 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto RoundToInt32(__extension_Float128_504_f128 const& __this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 622 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto RoundToInt64(__extension_Float128_504_f128 const& __this LIFETIMEBOUND)  -> const Builtin::i64;
	#line 623 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto RoundToInt128(__extension_Float128_504_f128 const& __this LIFETIMEBOUND)  -> const Builtin::i128;
	#line 691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto RoundTiesEvenToInt32(__extension_Float128_504_f128 const& __this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 692 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto RoundTiesEvenToInt64(__extension_Float128_504_f128 const& __this LIFETIMEBOUND)  -> const Builtin::i64;
	#line 693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto RoundTiesEvenToInt128(__extension_Float128_504_f128 const& __this LIFETIMEBOUND)  -> const Builtin::i128;
	#line 695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto Round(__extension_Float128_504_f128 const& __this LIFETIMEBOUND, Builtin::u32 digits)  -> const typename __extension_Float128_504_f128;
	#line 696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto Round(__extension_Float128_504_f128 const& __this LIFETIMEBOUND, MidpointRounding rounding)  -> const typename __extension_Float128_504_f128;
	#line 697 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto Round(__extension_Float128_504_f128 const& __this LIFETIMEBOUND, Builtin::u32 digits, MidpointRounding rounding)  -> const typename __extension_Float128_504_f128;
	#line 507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getFractionalPart(__extension_Float128_504_f128 const& __this ) -> const __extension_Float128_504_f128;
	#line 512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getCeil(__extension_Float128_504_f128 const& __this ) -> const __extension_Float128_504_f128;
	#line 546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getFloor(__extension_Float128_504_f128 const& __this ) -> const __extension_Float128_504_f128;
	#line 580 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getTruncate(__extension_Float128_504_f128 const& __this ) -> const __extension_Float128_504_f128;
	#line 615 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getRound(__extension_Float128_504_f128 const& __this ) -> const __extension_Float128_504_f128;
	#line 628 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getRoundTiesEven(__extension_Float128_504_f128 const& __this ) -> const __extension_Float128_504_f128;
	#line 764 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getExponentByteCount(__extension_Float128_504_f128 const& __this ) -> const Builtin::u32;
	#line 765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getExponentShortestBitLength(__extension_Float128_504_f128 const& __this ) -> const Builtin::u32;
	#line 774 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getSignificandBitLength(__extension_Float128_504_f128 const& __this ) -> const Builtin::u32;
	#line 775 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getSignificandByteCount(__extension_Float128_504_f128 const& __this ) -> const Builtin::u32;
	#line 504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f128, IFloatingPoint, IFloatingPoint, f128);
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
#line 779 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	using __extension_Float128_779_f128 = Builtin::f128;
	#line 779 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE(IPowerArithmetic, IPowerArithmetic);
	#line 780 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto _operator_mul_mul(__extension_Float128_779_f128 const& __this LIFETIMEBOUND, __extension_Float128_779_f128 exp)  -> const typename __extension_Float128_779_f128;
	#line 784 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto _operator_mul_mul_eq(__extension_Float128_779_f128 & __this , __extension_Float128_779_f128 exp) noexcept -> typename __extension_Float128_779_f128&;
	#line 779 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f128, IPowerArithmetic, IPowerArithmetic, f128);
	} namespace System{
using __extensions::_operator_mul_mul;
using __extensions::_operator_mul_mul_eq;

		} namespace __extensions { using namespace System;
#line 787 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	using __extension_Float128_787_f128 = Builtin::f128;
	#line 787 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE(IExponentialFunctions, IExponentialFunctions);
	#line 789 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto getExp(__extension_Float128_787_f128 const& __this ) -> const __extension_Float128_787_f128;
	#line 794 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto getExp2(__extension_Float128_787_f128 const& __this ) -> const __extension_Float128_787_f128;
	#line 799 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto getExp10(__extension_Float128_787_f128 const& __this ) -> const __extension_Float128_787_f128;
	#line 804 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto getExpM1(__extension_Float128_787_f128 const& __this ) -> const __extension_Float128_787_f128;
	#line 809 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getExp2M1(__extension_Float128_787_f128 const& __this ) -> const __extension_Float128_787_f128;
	#line 811 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getExp10M1(__extension_Float128_787_f128 const& __this ) -> const __extension_Float128_787_f128;
	#line 787 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f128, IExponentialFunctions, IExponentialFunctions, f128);
	} namespace System{
using __extensions::getExp;
using __extensions::getExp2;
using __extensions::getExp10;
using __extensions::getExpM1;
using __extensions::getExp2M1;
using __extensions::getExp10M1;

		} namespace __extensions { using namespace System;
#line 814 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	using __extension_Float128_814_f128 = Builtin::f128;
	#line 814 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE(ILogarithmicFunctions, ILogarithmicFunctions);
	#line 816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto getLn(__extension_Float128_814_f128 const& __this ) -> const __extension_Float128_814_f128;
	#line 821 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto getLnP1(__extension_Float128_814_f128 const& __this ) -> const __extension_Float128_814_f128;
	#line 826 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getLog2P1(__extension_Float128_814_f128 const& __this ) -> const __extension_Float128_814_f128;
	#line 828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getLog10P1(__extension_Float128_814_f128 const& __this ) -> const __extension_Float128_814_f128;
	#line 814 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f128, ILogarithmicFunctions, ILogarithmicFunctions, f128);
	} namespace System{
using __extensions::getLn;
using __extensions::getLnP1;
using __extensions::getLog2P1;
using __extensions::getLog10P1;

		} namespace __extensions { using namespace System;
#line 831 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	using __extension_Float128_831_f128 = Builtin::f128;
	#line 831 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE(IRootFunctions, IRootFunctions);
	#line 1055 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto Root(__extension_Float128_831_f128 const& __this LIFETIMEBOUND, Builtin::i32 n)  -> const typename __extension_Float128_831_f128;
	#line 1128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto Hypot(__extension_Float128_831_f128 const& __this LIFETIMEBOUND, __extension_Float128_831_f128 y)  -> const typename __extension_Float128_831_f128;
	#line 833 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto getSqrt(__extension_Float128_831_f128 const& __this ) -> const __extension_Float128_831_f128;
	#line 994 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto getCbrt(__extension_Float128_831_f128 const& __this ) -> const __extension_Float128_831_f128;
	#line 831 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f128, IRootFunctions, IRootFunctions, f128);
	} namespace System{
using __extensions::Root;
using __extensions::Hypot;
using __extensions::getSqrt;
using __extensions::getCbrt;

		} namespace __extensions { using namespace System;
#line 1182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	using __extension_Float128_1182_f128 = Builtin::f128;
	#line 1182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE(ITrigonometricFunctions, ITrigonometricFunctions);
	#line 1266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToRadians(__extension_Float128_1182_f128 const& __this LIFETIMEBOUND) noexcept -> const typename __extension_Float128_1182_f128;
	#line 1268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToDegrees(__extension_Float128_1182_f128 const& __this LIFETIMEBOUND) noexcept -> const typename __extension_Float128_1182_f128;
	#line 1184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto getSin(__extension_Float128_1182_f128 const& __this ) -> const __extension_Float128_1182_f128;
	#line 1188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto getCos(__extension_Float128_1182_f128 const& __this ) -> const __extension_Float128_1182_f128;
	#line 1192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto getTan(__extension_Float128_1182_f128 const& __this ) -> const __extension_Float128_1182_f128;
	#line 1196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getCot(__extension_Float128_1182_f128 const& __this ) -> const __extension_Float128_1182_f128;
	#line 1198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getSec(__extension_Float128_1182_f128 const& __this ) -> const __extension_Float128_1182_f128;
	#line 1200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getCsc(__extension_Float128_1182_f128 const& __this ) -> const __extension_Float128_1182_f128;
	#line 1202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto getAsin(__extension_Float128_1182_f128 const& __this ) -> const __extension_Float128_1182_f128;
	#line 1206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto getAcos(__extension_Float128_1182_f128 const& __this ) -> const __extension_Float128_1182_f128;
	#line 1210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto getAtan(__extension_Float128_1182_f128 const& __this ) -> const __extension_Float128_1182_f128;
	#line 1214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto getAcot(__extension_Float128_1182_f128 const& __this ) -> const __extension_Float128_1182_f128;
	#line 1218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto getAsec(__extension_Float128_1182_f128 const& __this ) -> const __extension_Float128_1182_f128;
	#line 1222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto getAcsc(__extension_Float128_1182_f128 const& __this ) -> const __extension_Float128_1182_f128;
	#line 1226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto getSinCos(__extension_Float128_1182_f128 const& __this ) -> const std::tuple<__extension_Float128_1182_f128, __extension_Float128_1182_f128>;
	#line 1230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto getSinPi(__extension_Float128_1182_f128 const& __this ) -> const __extension_Float128_1182_f128;
	#line 1234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto getCosPi(__extension_Float128_1182_f128 const& __this ) -> const __extension_Float128_1182_f128;
	#line 1238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto getSinCosPi(__extension_Float128_1182_f128 const& __this ) -> const std::tuple<__extension_Float128_1182_f128, __extension_Float128_1182_f128>;
	#line 1243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto getTanPi(__extension_Float128_1182_f128 const& __this ) -> const __extension_Float128_1182_f128;
	#line 1247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getCotPi(__extension_Float128_1182_f128 const& __this ) -> const __extension_Float128_1182_f128;
	#line 1249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getSecPi(__extension_Float128_1182_f128 const& __this ) -> const __extension_Float128_1182_f128;
	#line 1251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getCscPi(__extension_Float128_1182_f128 const& __this ) -> const __extension_Float128_1182_f128;
	#line 1253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getAsinPi(__extension_Float128_1182_f128 const& __this ) -> const __extension_Float128_1182_f128;
	#line 1255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getAcosPi(__extension_Float128_1182_f128 const& __this ) -> const __extension_Float128_1182_f128;
	#line 1257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getAtanPi(__extension_Float128_1182_f128 const& __this ) -> const __extension_Float128_1182_f128;
	#line 1259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getAcotPi(__extension_Float128_1182_f128 const& __this ) -> const __extension_Float128_1182_f128;
	#line 1261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getAsecPi(__extension_Float128_1182_f128 const& __this ) -> const __extension_Float128_1182_f128;
	#line 1263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getAcscPi(__extension_Float128_1182_f128 const& __this ) -> const __extension_Float128_1182_f128;
	#line 1182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f128, ITrigonometricFunctions, ITrigonometricFunctions, f128);
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
#line 1271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	using __extension_Float128_1271_f128 = Builtin::f128;
	#line 1271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE(IHyperbolicFunctions, IHyperbolicFunctions);
	#line 1273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto getAcosh(__extension_Float128_1271_f128 const& __this ) -> const __extension_Float128_1271_f128;
	#line 1299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getAcoth(__extension_Float128_1271_f128 const& __this ) -> const __extension_Float128_1271_f128;
	#line 1301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getAcsch(__extension_Float128_1271_f128 const& __this ) -> const __extension_Float128_1271_f128;
	#line 1303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getAsech(__extension_Float128_1271_f128 const& __this ) -> const __extension_Float128_1271_f128;
	#line 1305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto getAsinh(__extension_Float128_1271_f128 const& __this ) -> const __extension_Float128_1271_f128;
	#line 1325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto getAtanh(__extension_Float128_1271_f128 const& __this ) -> const __extension_Float128_1271_f128;
	#line 1342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto getCosh(__extension_Float128_1271_f128 const& __this ) -> const __extension_Float128_1271_f128;
	#line 1366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getCoth(__extension_Float128_1271_f128 const& __this ) -> const __extension_Float128_1271_f128;
	#line 1368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getCsch(__extension_Float128_1271_f128 const& __this ) -> const __extension_Float128_1271_f128;
	#line 1370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getSech(__extension_Float128_1271_f128 const& __this ) -> const __extension_Float128_1271_f128;
	#line 1372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto getSinh(__extension_Float128_1271_f128 const& __this ) -> const __extension_Float128_1271_f128;
	#line 1399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto getTanh(__extension_Float128_1271_f128 const& __this ) -> const __extension_Float128_1271_f128;
	#line 1271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f128, IHyperbolicFunctions, IHyperbolicFunctions, f128);
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
#line 1425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	using __extension_Float128_1425_f128 = Builtin::f128;
	#line 1425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE(IBinaryFloatingPointIeee754, IBinaryFloatingPointIeee754);
	#line 1433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto Atan2(__extension_Float128_1425_f128 const& __this LIFETIMEBOUND, __extension_Float128_1425_f128 y)  -> const typename __extension_Float128_1425_f128;
	#line 1437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto Atan2Pi(__extension_Float128_1425_f128 const& __this LIFETIMEBOUND, __extension_Float128_1425_f128 y)  -> const typename __extension_Float128_1425_f128;
	#line 1540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto FusedMultiplyAdd(__extension_Float128_1425_f128 const& __this LIFETIMEBOUND, __extension_Float128_1425_f128 rhs, __extension_Float128_1425_f128 addend)  -> const typename __extension_Float128_1425_f128;
	#line 1861 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto Ieee754Remainder(__extension_Float128_1425_f128 const& __this LIFETIMEBOUND, __extension_Float128_1425_f128 rhs)  -> const typename __extension_Float128_1425_f128;
	#line 1986 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto Lerp(__extension_Float128_1425_f128 const& __this LIFETIMEBOUND, __extension_Float128_1425_f128 end, __extension_Float128_1425_f128 amount) noexcept -> const typename __extension_Float128_1425_f128;
	#line 1988 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ASTRUMSTD_API auto ScaleB(__extension_Float128_1425_f128 const& __this LIFETIMEBOUND, Builtin::i32 n)  -> const typename __extension_Float128_1425_f128;
	#line 1426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct __static_getEpsilon; template<> struct __static_getEpsilon<__extension_Float128_1425_f128> { static inline constexpr auto get() -> const __extension_Float128_1425_f128; };
	#line 1427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct __static_getNegativeInfinity; template<> struct __static_getNegativeInfinity<__extension_Float128_1425_f128> { static inline constexpr auto get() -> const __extension_Float128_1425_f128; };
	#line 1428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct __static_getPositiveInfinity; template<> struct __static_getPositiveInfinity<__extension_Float128_1425_f128> { static inline constexpr auto get() -> const __extension_Float128_1425_f128; };
	#line 1429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct __static_getNaN; template<> struct __static_getNaN<__extension_Float128_1425_f128> { static inline constexpr auto get() -> const __extension_Float128_1425_f128; };
	#line 1430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct __static_getNegativeZero; template<> struct __static_getNegativeZero<__extension_Float128_1425_f128> { static inline constexpr auto get() -> const __extension_Float128_1425_f128; };
	#line 1445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getBitIncrement(__extension_Float128_1425_f128 const& __this ) -> const __extension_Float128_1425_f128;
	#line 1474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getBitDecrement(__extension_Float128_1425_f128 const& __this ) -> const __extension_Float128_1425_f128;
	#line 1498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getILogB(__extension_Float128_1425_f128 const& __this ) -> const Builtin::i32;
	#line 1517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getReciprocalEstimate(__extension_Float128_1425_f128 const& __this ) -> const __extension_Float128_1425_f128;
	#line 1521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getReciprocalSqrtEstimate(__extension_Float128_1425_f128 const& __this ) -> const __extension_Float128_1425_f128;
	#line 1524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getCategory(__extension_Float128_1425_f128 const& __this ) -> const FloatingPointCategory;
	#line 2030 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getGamma(__extension_Float128_1425_f128 const& __this ) -> const __extension_Float128_1425_f128;
	#line 2032 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getLnGamma(__extension_Float128_1425_f128 const& __this ) -> const __extension_Float128_1425_f128;
	#line 2034 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getErf(__extension_Float128_1425_f128 const& __this ) -> const __extension_Float128_1425_f128;
	#line 2036 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getErfc(__extension_Float128_1425_f128 const& __this ) -> const __extension_Float128_1425_f128;
	#line 1425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f128, IBinaryFloatingPointIeee754, IBinaryFloatingPointIeee754, f128);
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
#line 2039 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	using __extension_Float128_2039_f128 = Builtin::f128;
	#line 2039 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE(IBinaryFloatFormatInfo, IBinaryFloatFormatInfo);
	#line 2040 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct __static_getNumberBufferLength; template<> struct __static_getNumberBufferLength<__extension_Float128_2039_f128> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 2041 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct __static_getZeroBits; template<> struct __static_getZeroBits<__extension_Float128_2039_f128> { static inline constexpr auto get() -> const Builtin::u128; };
	#line 2042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct __static_getInfinityBits; template<> struct __static_getInfinityBits<__extension_Float128_2039_f128> { static inline constexpr auto get() -> const Builtin::u128; };
	#line 2043 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct __static_getNormalMantissaMask; template<> struct __static_getNormalMantissaMask<__extension_Float128_2039_f128> { static inline constexpr auto get() -> const Builtin::u128; };
	#line 2044 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct __static_getDenormalMantissaMask; template<> struct __static_getDenormalMantissaMask<__extension_Float128_2039_f128> { static inline constexpr auto get() -> const Builtin::u128; };
	#line 2045 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct __static_getMinBinaryExponent; template<> struct __static_getMinBinaryExponent<__extension_Float128_2039_f128> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 2046 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct __static_getMaxBinaryExponent; template<> struct __static_getMaxBinaryExponent<__extension_Float128_2039_f128> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 2047 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct __static_getMinDecimalExponent; template<> struct __static_getMinDecimalExponent<__extension_Float128_2039_f128> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 2048 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct __static_getMaxDecimalExponent; template<> struct __static_getMaxDecimalExponent<__extension_Float128_2039_f128> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 2049 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct __static_getExponentBias; template<> struct __static_getExponentBias<__extension_Float128_2039_f128> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 2050 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct __static_getExponentBits; template<> struct __static_getExponentBits<__extension_Float128_2039_f128> { static inline constexpr auto get() -> const Builtin::u128; };
	#line 2051 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct __static_getOverflowDecimalExponent; template<> struct __static_getOverflowDecimalExponent<__extension_Float128_2039_f128> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 2052 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct __static_getInfinityExponent; template<> struct __static_getInfinityExponent<__extension_Float128_2039_f128> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 2053 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct __static_getNormalMantissaBits; template<> struct __static_getNormalMantissaBits<__extension_Float128_2039_f128> { static inline constexpr auto get() -> const Builtin::u16; };
	#line 2054 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct __static_getDenormalMantissaBits; template<> struct __static_getDenormalMantissaBits<__extension_Float128_2039_f128> { static inline constexpr auto get() -> const Builtin::u16; };
	#line 2055 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct __static_getMinFastFloatDecimalExponent; template<> struct __static_getMinFastFloatDecimalExponent<__extension_Float128_2039_f128> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 2056 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct __static_getMaxFastFloatDecimalExponent; template<> struct __static_getMaxFastFloatDecimalExponent<__extension_Float128_2039_f128> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 2057 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct __static_getMinExponentRoundToEven; template<> struct __static_getMinExponentRoundToEven<__extension_Float128_2039_f128> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 2058 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct __static_getMaxExponentRoundToEven; template<> struct __static_getMaxExponentRoundToEven<__extension_Float128_2039_f128> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 2059 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct __static_getMaxExponentFastPath; template<> struct __static_getMaxExponentFastPath<__extension_Float128_2039_f128> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 2060 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class __TT> struct __static_getMaxMantissaFastPath; template<> struct __static_getMaxMantissaFastPath<__extension_Float128_2039_f128> { static inline constexpr auto get() -> const Builtin::u128; };
	#line 2039 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f128, IBinaryFloatFormatInfo, IBinaryFloatFormatInfo, f128);
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
#line 392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	namespace __Float128_Protected { inline constexpr auto BiasedExponent(Builtin::f128 value) noexcept -> const Builtin::u16; }
#line 393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	namespace __Float128_Protected { inline constexpr auto Exponent(Builtin::f128 value) noexcept -> const Builtin::i16; }
#line 394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	namespace __Float128_Protected { inline constexpr auto Significand(Builtin::f128 value) noexcept -> const Builtin::u128; }
#line 395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	namespace __Float128_Protected { inline constexpr auto TrailingSignificand(Builtin::f128 value) noexcept -> const Builtin::u128; }
#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	namespace __Float128_Protected { inline constexpr auto ExtractBiasedExponentFromBits(Builtin::u128 bits) noexcept -> const Builtin::u16; }
#line 398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	namespace __Float128_Protected { inline constexpr auto ExtractTrailingSignificandFromBits(Builtin::u128 bits) noexcept -> const Builtin::u128; }
#line 400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	namespace __Float128_Protected { inline constexpr auto PackBits(bool sign, Builtin::u16 exponent, Builtin::u128 mantissa) noexcept -> const Builtin::u128; }
//###############################################################################
//# Global compile-time constants
//###############################################################################
#line 366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
namespace __Float128_Protected { inline constexpr auto SignMask = Builtin::ParseUInt128("0x80000000000000000000000000000000"); }
#line 367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
namespace __Float128_Protected { inline constexpr auto SignShift = Builtin::i32(127); }
#line 368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
namespace __Float128_Protected { inline constexpr Builtin::u8 ShiftedSignMask = Builtin::u8{__Float128_Protected::SignMask >> __Float128_Protected::SignShift}; }
#line 370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
namespace __Float128_Protected { inline constexpr auto BiasedExponentMask = Builtin::ParseUInt128("0x7FFF0000000000000000000000000000"); }
#line 371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
namespace __Float128_Protected { inline constexpr auto BiasedExponentShift = Builtin::i32(112); }
#line 372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
namespace __Float128_Protected { inline constexpr Builtin::u16 ShiftedBiasedExponentMask = Builtin::u16{__Float128_Protected::BiasedExponentMask >> __Float128_Protected::BiasedExponentShift}; }
#line 374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
namespace __Float128_Protected { inline constexpr auto TrailingSignificandMask = Builtin::ParseUInt128("0x0000FFFFFFFFFFFFFFFFFFFFFFFFFFFF"); }
#line 377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
namespace __Float128_Protected { inline constexpr auto MinSign = Builtin::u8(0U); }
#line 378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
namespace __Float128_Protected { inline constexpr auto MaxSign = Builtin::u8(1U); }
#line 379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
namespace __Float128_Protected { inline constexpr auto MinBiasedExponent = ADV_USPCS(MinValue, Builtin::u16)(); }
#line 380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
namespace __Float128_Protected { inline constexpr auto MaxBiasedExponent = Builtin::u16(0x7FFFU); }
#line 381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
namespace __Float128_Protected { inline constexpr auto ExpBias = Builtin::u16(16383U); }
#line 382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
namespace __Float128_Protected { inline constexpr auto MinExponent = Builtin::i16(-16382); }
#line 383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
namespace __Float128_Protected { inline constexpr auto MaxExponent = +Builtin::i16(16383); }
#line 384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
namespace __Float128_Protected { inline constexpr auto MinTrailingSignificand = ADV_USPCS(MinValue, Builtin::u128)(); }
#line 385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
namespace __Float128_Protected { inline constexpr auto MaxTrailingSignificand = Builtin::ParseUInt128("0x0000FFFFFFFFFFFFFFFFFFFFFFFFFFFF"); }
#line 387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
namespace __Float128_Protected { inline constexpr auto TrailingSignificandLength = Builtin::i32(112); }
#line 388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
namespace __Float128_Protected { inline constexpr auto SignificandLength = __Float128_Protected::TrailingSignificandLength + Builtin::i32(1); }
#line 390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
namespace __Float128_Protected { inline constexpr auto RoundingEpsilon = Builtin::BitCast<Builtin::f128>(Builtin::ParseUInt128("0x406F0000000000000000000000000000")); }
//###############################################################################
//# Global variable declarations
//###############################################################################
#line 375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
namespace __Float128_Protected { extern ASTRUMSTD_HIDDEN const decltype(Builtin::u128(1ULL) << __Float128_Protected::BiasedExponentShift) HiddenBit; }
//###############################################################################
//# Function definitions
//###############################################################################

namespace __Float128_Protected {
		#line 392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		inline constexpr auto BiasedExponent(Builtin::f128 value) noexcept -> const Builtin::u16
		{
			#line 392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			ADV_EXPRESSION_BODY(__Float128_Protected::ExtractBiasedExponentFromBits(ADV_UPCS(Bits)(value.__ref()))); 
		}
	}
namespace __Float128_Protected {
		#line 393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		inline constexpr auto Exponent(Builtin::f128 value) noexcept -> const Builtin::i16
		{
			#line 393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			ADV_EXPRESSION_BODY(Builtin::i16{__Float128_Protected::BiasedExponent(value)} - __Float128_Protected::ExpBias); 
		}
	}
namespace __Float128_Protected {
		#line 394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		inline constexpr auto Significand(Builtin::f128 value) noexcept -> const Builtin::u128
		{
			#line 394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			ADV_EXPRESSION_BODY(__Float128_Protected::TrailingSignificand(value) | (__Float128_Protected::BiasedExponent(value) != Builtin::i32(0) ? (Builtin::u128(1ULL) << __Float128_Protected::BiasedExponentShift) : Builtin::u128(0ULL))); 
		}
	}
namespace __Float128_Protected {
		#line 395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		inline constexpr auto TrailingSignificand(Builtin::f128 value) noexcept -> const Builtin::u128
		{
			#line 395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			ADV_EXPRESSION_BODY(__Float128_Protected::ExtractTrailingSignificandFromBits(ADV_UPCS(Bits)(value.__ref()))); 
		}
	}
namespace __Float128_Protected {
		#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		inline constexpr auto ExtractBiasedExponentFromBits(Builtin::u128 bits) noexcept -> const Builtin::u16
		{
			#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			ADV_EXPRESSION_BODY(Builtin::u16{(bits >> __Float128_Protected::BiasedExponentShift) & __Float128_Protected::ShiftedBiasedExponentMask}); 
		}
	}
namespace __Float128_Protected {
		#line 398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		inline constexpr auto ExtractTrailingSignificandFromBits(Builtin::u128 bits) noexcept -> const Builtin::u128
		{
			#line 398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			ADV_EXPRESSION_BODY(bits & __Float128_Protected::TrailingSignificandMask); 
		}
	}
namespace __Float128_Protected {
		#line 400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		inline constexpr auto PackBits(bool sign, Builtin::u16 exponent, Builtin::u128 mantissa) noexcept -> const Builtin::u128
		{
			#line 401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			ADV_EXPRESSION_BODY(((sign ? Builtin::u128(1ULL) : Builtin::u128(0ULL)) << __Float128_Protected::SignShift) + ((Builtin::u128{exponent} << __Float128_Protected::BiasedExponentShift) & __Float128_Protected::BiasedExponentMask) + mantissa); 
		}
	}
} namespace __extensions { using namespace System;
#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto __static_getMinValue<__extension_Float128_14_f128>::get() -> const __extension_Float128_2039_f128
	{
		#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::ParseFloat128("-1.18973149535723176508575932662801e+4932")); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto __static_getMaxValue<__extension_Float128_14_f128>::get() -> const __extension_Float128_2039_f128
	{
		#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(+Builtin::ParseFloat128("1.18973149535723176508575932662801e+4932")); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	
} namespace __extensions { using namespace System;
#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto operator<=>(__extension_Float128_19_f128 const& __this LIFETIMEBOUND, Builtin::Nullable<__extension_Float128_2039_f128> rhs) noexcept -> const Builtin::i32
	{
		#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		{
			#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if ((!Builtin::Is(rhs, nullptr))) {
				#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				auto __tmp0 = *rhs; const auto& rhs = __tmp0;
				
				#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				return __this <=> rhs;
			}
		}
		#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return Builtin::i32(1);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto __static_FromBits<__extension_Float128_19_f128>::get(Builtin::u128 bits)  -> const typename __extension_Float128_19_f128
	{
		#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::BitCast<__extension_Float128_2039_f128>(bits)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getBits(__extension_Float128_19_f128 const& __this ) -> const Builtin::u128
	{
		#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::BitCast<Builtin::u128>(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto __static_getBitWidth<__extension_Float128_19_f128>::get() -> const Builtin::u32
	{
		#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(128U)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto __static_getMinPositiveValue<__extension_Float128_19_f128>::get() -> const __extension_Float128_2039_f128
	{
		#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::ParseFloat128("1.18973149535723176508575932662800702e+4932")); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto __static_getHalfOne<__extension_Float128_19_f128>::get() -> const __extension_Float128_2039_f128
	{
		#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FFE0000000000000000000000000000"))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getHashCode(__extension_Float128_19_f128 const& __this ) -> const Builtin::u64
	{
		#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto bits = ADV_UPCS(Bits)(__this.__ref()); 
		#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (((bits & (ADV_UFCS(_operator_not)(__Float128_Protected::SignMask))) <=> __Float128_Protected::BiasedExponentMask) >= 0) {
			#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			bits &= __Float128_Protected::BiasedExponentMask;
		}
		#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return ADV_UPCS(HashCode)(bits.__ref());
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	
} namespace __extensions { using namespace System;
#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToBoolean(__extension_Float128_77_f128 const& __this LIFETIMEBOUND) noexcept -> const bool
	{
		#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(__this != Builtin::i32(0)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToInt8(__extension_Float128_77_f128 const& __this LIFETIMEBOUND)  -> const Builtin::i8
	{
		#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i8>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToUInt8(__extension_Float128_77_f128 const& __this LIFETIMEBOUND)  -> const Builtin::u8
	{
		#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u8>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToInt16(__extension_Float128_77_f128 const& __this LIFETIMEBOUND)  -> const Builtin::i16
	{
		#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i16>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToUInt16(__extension_Float128_77_f128 const& __this LIFETIMEBOUND)  -> const Builtin::u16
	{
		#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u16>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToInt32(__extension_Float128_77_f128 const& __this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i32>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 84 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToUInt32(__extension_Float128_77_f128 const& __this LIFETIMEBOUND)  -> const Builtin::u32
	{
		#line 84 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u32>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 85 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToInt64(__extension_Float128_77_f128 const& __this LIFETIMEBOUND)  -> const Builtin::i64
	{
		#line 85 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i64>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 86 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToUInt64(__extension_Float128_77_f128 const& __this LIFETIMEBOUND)  -> const Builtin::u64
	{
		#line 86 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u64>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToInt128(__extension_Float128_77_f128 const& __this LIFETIMEBOUND)  -> const Builtin::i128
	{
		#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i128>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToUInt128(__extension_Float128_77_f128 const& __this LIFETIMEBOUND)  -> const Builtin::u128
	{
		#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u128>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToIsize(__extension_Float128_77_f128 const& __this LIFETIMEBOUND)  -> const Builtin::isize
	{
		#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::isize>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToUsize(__extension_Float128_77_f128 const& __this LIFETIMEBOUND)  -> const Builtin::usize
	{
		#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::usize>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToFloat32(__extension_Float128_77_f128 const& __this LIFETIMEBOUND)  -> const Builtin::f32
	{
		#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::f32>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToFloat64(__extension_Float128_77_f128 const& __this LIFETIMEBOUND)  -> const Builtin::f64
	{
		#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::f64>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToByte(__extension_Float128_77_f128 const& __this LIFETIMEBOUND)  -> const Builtin::char8
	{
		#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u8>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToChar(__extension_Float128_77_f128 const& __this LIFETIMEBOUND)  -> const Builtin::char16
	{
		#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u16>(__this)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	
} namespace __extensions { using namespace System;
#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class T> inline constexpr auto _operator_div_mod(__extension_Float128_99_f128 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_Float128_2039_f128, __extension_Float128_2039_f128>
	{
		#line 103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return std::make_tuple(__this / Builtin::f128{rhs}, __this % Builtin::f128{rhs});
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class T> inline constexpr auto _operator_div_not(__extension_Float128_99_f128 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Float128_99_f128
	{
		#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Round)((__this / rhs).__ref())); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto _operator_div_not_eq(__extension_Float128_99_f128 & __this , auto rhs)  -> typename __extension_Float128_99_f128&
	{
		#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_div_not)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class T> inline constexpr auto _operator_div_lt(__extension_Float128_99_f128 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Float128_99_f128
	{
		#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Floor)((__this / rhs).__ref())); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto _operator_div_lt_eq(__extension_Float128_99_f128 & __this , auto rhs)  -> typename __extension_Float128_99_f128&
	{
		#line 112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_div_lt)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	template<class T> inline constexpr auto _operator_div_gt(__extension_Float128_99_f128 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Float128_99_f128
	{
		#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Ceil)((__this / rhs).__ref())); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto _operator_div_gt_eq(__extension_Float128_99_f128 & __this , auto rhs)  -> typename __extension_Float128_99_f128&
	{
		#line 116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_div_gt)(__this, rhs)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	
} namespace __extensions { using namespace System;
#line 122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto _operator_xor_xor(__extension_Float128_120_f128 const& __this LIFETIMEBOUND, Builtin::i32 exp)  -> const typename __extension_Float128_120_f128
	{
		#line 124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return Builtin::ParseFloat128("1.0");
		}
		#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((exp <=> Builtin::i32(0)) < 0) {
			#line 130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return Builtin::ParseFloat128("1.0") / ADV_UFCS(_operator_xor_xor)(__this, (-exp));
		}
		#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto base = __this; 
		#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto result = Builtin::ParseFloat128("1.0"); 
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
} namespace __extensions { using namespace System;
#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto _operator_xor_xor_eq(__extension_Float128_120_f128 & __this , Builtin::i32 exp)  -> typename __extension_Float128_120_f128&
	{
		#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_xor_xor)(__this, exp)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	
} namespace __extensions { using namespace System;
#line 198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto MaxMagnitude(__extension_Float128_161_f128 const& __this LIFETIMEBOUND, __extension_Float128_2039_f128 rhs) noexcept -> const typename __extension_Float128_161_f128
	{
		#line 200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto ax = ADV_UPCS(Abs)(__this.__ref()); 
		#line 201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto ay = ADV_UPCS(Abs)(rhs.__ref()); 
		#line 203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((ax <=> ay) > 0 || ADV_UPCS(IsNaN)(ax.__ref())) {
			#line 205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return __this;
		}
		#line 208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (ax == ay) {
			#line 210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return ADV_UPCS(IsNegative)(__this.__ref()) ? rhs : __this;
		}
		#line 213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return rhs;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto MaxMagnitudeNumber(__extension_Float128_161_f128 const& __this LIFETIMEBOUND, __extension_Float128_2039_f128 rhs) noexcept -> const typename __extension_Float128_161_f128
	{
		#line 218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto ax = ADV_UPCS(Abs)(__this.__ref()); 
		#line 219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto ay = ADV_UPCS(Abs)(rhs.__ref()); 
		#line 221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((ax <=> ay) > 0 || ADV_UPCS(IsNaN)(ay.__ref())) {
			#line 223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return __this;
		}
		#line 226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (ax == ay) {
			#line 228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return ADV_UPCS(IsNegative)(__this.__ref()) ? rhs : __this;
		}
		#line 231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return rhs;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto MinMagnitude(__extension_Float128_161_f128 const& __this LIFETIMEBOUND, __extension_Float128_2039_f128 rhs) noexcept -> const typename __extension_Float128_161_f128
	{
		#line 236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto ax = ADV_UPCS(Abs)(__this.__ref()); 
		#line 237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto ay = ADV_UPCS(Abs)(rhs.__ref()); 
		#line 239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((ax <=> ay) < 0 || ADV_UPCS(IsNaN)(ax.__ref())) {
			#line 241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return __this;
		}
		#line 244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (ax == ay) {
			#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return ADV_UPCS(IsNegative)(__this.__ref()) ? __this : rhs;
		}
		#line 249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return rhs;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto MinMagnitudeNumber(__extension_Float128_161_f128 const& __this LIFETIMEBOUND, __extension_Float128_2039_f128 rhs) noexcept -> const typename __extension_Float128_161_f128
	{
		#line 254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto ax = ADV_UPCS(Abs)(__this.__ref()); 
		#line 255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto ay = ADV_UPCS(Abs)(rhs.__ref()); 
		#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((ax <=> ay) < 0 || ADV_UPCS(IsNaN)(ay.__ref())) {
			#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return __this;
		}
		#line 262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (ax == ay) {
			#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return ADV_UPCS(IsNegative)(__this.__ref()) ? __this : rhs;
		}
		#line 267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return rhs;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto NarrowToInt8(__extension_Float128_161_f128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i8
	{
		#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i8>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto NarrowToUInt8(__extension_Float128_161_f128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u8
	{
		#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u8>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto NarrowToInt16(__extension_Float128_161_f128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i16
	{
		#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i16>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto NarrowToUInt16(__extension_Float128_161_f128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u16
	{
		#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u16>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto NarrowToInt32(__extension_Float128_161_f128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i32
	{
		#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i32>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto NarrowToUInt32(__extension_Float128_161_f128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u32
	{
		#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u32>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto NarrowToInt64(__extension_Float128_161_f128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i64
	{
		#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i64>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto NarrowToUInt64(__extension_Float128_161_f128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u64
	{
		#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u64>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto NarrowToInt128(__extension_Float128_161_f128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i128
	{
		#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i128>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto NarrowToUInt128(__extension_Float128_161_f128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u128
	{
		#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u128>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto NarrowToIsize(__extension_Float128_161_f128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::isize
	{
		#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::isize>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto NarrowToUsize(__extension_Float128_161_f128 const& __this LIFETIMEBOUND) noexcept -> const Builtin::usize
	{
		#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::usize>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto __static_getOne<__extension_Float128_161_f128>::get() -> const __extension_Float128_2039_f128
	{
		#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(1)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto __static_getZero<__extension_Float128_161_f128>::get() -> const __extension_Float128_2039_f128
	{
		#line 163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(0)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto __static_getRadix<__extension_Float128_161_f128>::get() -> const Builtin::i32
	{
		#line 164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(2)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getAbs(__extension_Float128_161_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		constexpr auto mask = ADV_UFCS(_operator_not)(__Float128_Protected::SignMask);
		#line 169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::u128 raw = ADV_UPCS(Bits)(__this.__ref()); 
		#line 170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return ADV_USFCS((Builtin::f128), FromBits)(raw & mask);
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsCanonical(__extension_Float128_161_f128 const& __this ) -> const bool
	{
		#line 172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsComplexNumber(__extension_Float128_161_f128 const& __this ) -> const bool
	{
		#line 173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsEvenInteger(__extension_Float128_161_f128 const& __this ) -> const bool
	{
		#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsInteger)(__this.__ref()) && (ADV_UPCS(Abs)((__this % Builtin::i32(2)).__ref()) == Builtin::i32(0))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsFinite(__extension_Float128_161_f128 const& __this ) -> const bool
	{
		#line 175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(((ADV_UPCS(Bits)(__this.__ref()) & (ADV_UFCS(_operator_not)(__Float128_Protected::SignMask))) <=> __Float128_Protected::BiasedExponentMask) < 0); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsImaginaryNumber(__extension_Float128_161_f128 const& __this ) -> const bool
	{
		#line 176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsInfinity(__extension_Float128_161_f128 const& __this ) -> const bool
	{
		#line 177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY((ADV_UPCS(Bits)(__this.__ref()) & (ADV_UFCS(_operator_not)(__Float128_Protected::SignMask))) == __Float128_Protected::BiasedExponentMask); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsInteger(__extension_Float128_161_f128 const& __this ) -> const bool
	{
		#line 178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsFinite)(__this.__ref()) && (__this == ADV_UPCS(Truncate)(__this.__ref()))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsNaN(__extension_Float128_161_f128 const& __this ) -> const bool
	{
		#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(__this != __this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsNegative(__extension_Float128_161_f128 const& __this ) -> const bool
	{
		#line 180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY((Builtin::BitCast<Builtin::i128>(__this) <=> Builtin::i32(0)) < 0); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsNegativeInfinity(__extension_Float128_161_f128 const& __this ) -> const bool
	{
		#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(__this == ADV_USPCS(NegativeInfinity, __extension_Float128_2039_f128)()); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsNormal(__extension_Float128_161_f128 const& __this ) -> const bool
	{
		#line 184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto bits = ADV_UPCS(Bits)(__this.__ref()) & (ADV_UFCS(_operator_not)(__Float128_Protected::SignMask)); 
		#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return ((bits <=> __Float128_Protected::BiasedExponentMask) < 0) && (bits != Builtin::i32(0)) && ((bits & __Float128_Protected::BiasedExponentMask) != Builtin::i32(0));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsOddInteger(__extension_Float128_161_f128 const& __this ) -> const bool
	{
		#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsInteger)(__this.__ref()) && (ADV_UPCS(Abs)((__this % Builtin::i32(2)).__ref()) == Builtin::i32(1))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsPositive(__extension_Float128_161_f128 const& __this ) -> const bool
	{
		#line 188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY((Builtin::BitCast<Builtin::i128>(__this) <=> Builtin::i32(0)) >= 0); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsPositiveInfinity(__extension_Float128_161_f128 const& __this ) -> const bool
	{
		#line 189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(__this == ADV_USPCS(PositiveInfinity, __extension_Float128_2039_f128)()); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsRealNumber(__extension_Float128_161_f128 const& __this ) -> const bool
	{
		#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(__this == __this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsSubnormal(__extension_Float128_161_f128 const& __this ) -> const bool
	{
		#line 193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto bits = ADV_UPCS(Bits)(__this.__ref()) & (ADV_UFCS(_operator_not)(__Float128_Protected::SignMask)); 
		#line 194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return ((bits <=> __Float128_Protected::BiasedExponentMask) < 0) && (bits != Builtin::i32(0)) && ((bits & __Float128_Protected::BiasedExponentMask) == Builtin::i32(0));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsZero(__extension_Float128_161_f128 const& __this ) -> const bool
	{
		#line 196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(__this == ADV_USPCS(Zero, __extension_Float128_2039_f128)()); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	
} namespace __extensions { using namespace System;
#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto __static_getMinusOne<__extension_Float128_296_f128>::get() -> const __extension_Float128_2039_f128
	{
		#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(-1)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	
} namespace __extensions { using namespace System;
#line 308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto CopySign(__extension_Float128_300_f128 const& __this LIFETIMEBOUND, __extension_Float128_2039_f128 sign) noexcept -> const typename __extension_Float128_300_f128
	{
		#line 310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const auto lhsBits = ADV_UPCS(Bits)(__this.__ref()) & (ADV_UFCS(_operator_not)(__Float128_Protected::SignMask)); 
		#line 311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const auto rhsBits = ADV_UPCS(Bits)(sign.__ref()) & __Float128_Protected::SignMask; 
		#line 312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return ADV_USFCS((Builtin::f128), FromBits)(lhsBits | rhsBits);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto Max(__extension_Float128_300_f128 const& __this LIFETIMEBOUND, __extension_Float128_2039_f128 rhs) noexcept -> const typename __extension_Float128_300_f128
	{
		#line 317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (__this != rhs) {
			#line 318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if (!ADV_UPCS(IsNaN)(__this.__ref())) {
				#line 319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				return (rhs <=> __this) < 0 ? __this : rhs;
			}
			#line 321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return __this;
		}
		#line 323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return ADV_UPCS(IsNegative)(rhs.__ref()) ? __this : rhs;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto MaxNumber(__extension_Float128_300_f128 const& __this LIFETIMEBOUND, __extension_Float128_2039_f128 rhs) noexcept -> const typename __extension_Float128_300_f128
	{
		#line 327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (__this != rhs) {
			#line 328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if (!ADV_UPCS(IsNaN)(rhs.__ref())) {
				#line 329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				return (rhs <=> __this) < 0 ? __this : rhs;
			}
			#line 331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return __this;
		}
		#line 333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return ADV_UPCS(IsNegative)(rhs.__ref()) ? __this : rhs;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto Min(__extension_Float128_300_f128 const& __this LIFETIMEBOUND, __extension_Float128_2039_f128 rhs) noexcept -> const typename __extension_Float128_300_f128
	{
		#line 337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (__this != rhs) {
			#line 338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if (!ADV_UPCS(IsNaN)(__this.__ref())) {
				#line 339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				return (__this <=> rhs) < 0 ? __this : rhs;
			}
			#line 341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return __this;
		}
		#line 343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return ADV_UPCS(IsNegative)(__this.__ref()) ? __this : rhs;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto MinNumber(__extension_Float128_300_f128 const& __this LIFETIMEBOUND, __extension_Float128_2039_f128 rhs) noexcept -> const typename __extension_Float128_300_f128
	{
		#line 347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (__this != rhs) {
			#line 348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if (!ADV_UPCS(IsNaN)(rhs.__ref())) {
				#line 349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				return (__this <=> rhs) < 0 ? __this : rhs;
			}
			#line 351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return __this;
		}
		#line 353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return ADV_UPCS(IsNegative)(__this.__ref()) ? __this : rhs;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto Clamp(__extension_Float128_300_f128 const& __this LIFETIMEBOUND, __extension_Float128_2039_f128 min, __extension_Float128_2039_f128 max)  -> const typename __extension_Float128_300_f128
	{
		#line 357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((min <=> max) > 0) {
			#line 358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			Builtin::Throw(Builtin::InvalidOperationException{});
		}
		#line 361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return (__this <=> min) < 0 ? min : (__this <=> max) > 0 ? max : __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getSign(__extension_Float128_300_f128 const& __this ) -> const Builtin::i32
	{
		#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return [&]() 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
		{
			#line 302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			auto __tmp__valid_301 = Builtin::Cast<false, std::decay_t<decltype(__this)>::__self>(__this);
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
	
} namespace __extensions { using namespace System;
#line 450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto Log(__extension_Float128_404_f128 const& __this LIFETIMEBOUND, __extension_Float128_2039_f128 base) noexcept -> const typename __extension_Float128_404_f128
	{
		#line 452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (ADV_UPCS(IsNaN)(__this.__ref())) {
			#line 453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return __this;
		}
		#line 455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (ADV_UPCS(IsNaN)(base.__ref())) {
			#line 456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return base;
		}
		#line 459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (base == Builtin::i32(1)) {
			#line 460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return ADV_USPCS(NaN, Builtin::f128)();
		}
		#line 462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (__this != Builtin::i32(1) && (base == Builtin::i32(0) || ADV_UPCS(IsPositiveInfinity)(base.__ref()))) {
			#line 463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return ADV_USPCS(NaN, Builtin::f128)();
		}
		#line 466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return ADV_UPCS(Ln)(__this.__ref()) / ADV_UPCS(Ln)(base.__ref());
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto Midpoint(__extension_Float128_404_f128 const& __this LIFETIMEBOUND, __extension_Float128_2039_f128 rhs) noexcept -> const typename __extension_Float128_404_f128
	{
		#line 473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		constexpr auto riskValue = ADV_USPCS(MaxValue, __extension_Float128_2039_f128)() / Builtin::i32(2);
		#line 475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((ADV_UPCS(Abs)(__this.__ref()) <=> riskValue) <= 0 && (ADV_UPCS(Abs)(rhs.__ref()) <=> riskValue) <= 0) {
			#line 476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return (__this + rhs) / Builtin::i32(2);
		} else {
			#line 477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			{
				#line 478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				return (__this / Builtin::i32(2)) + (rhs / Builtin::i32(2));
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto IsMultipleOf(__extension_Float128_404_f128 const& __this LIFETIMEBOUND, __extension_Float128_2039_f128 rhs) noexcept -> const bool
	{
		#line 485 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (rhs == Builtin::i32(0)) {
			#line 486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return __this == Builtin::i32(0);
		}
		#line 489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (rhs == Builtin::i32(-1)) {
			#line 490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return Builtin::Boolean(true);
		}
		#line 493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return __this % rhs == Builtin::i32(0);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto __static_getAllBitsSet<__extension_Float128_404_f128>::get() -> const __extension_Float128_2039_f128
	{
		#line 406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Builtin::f128), FromBits)(ADV_USPCS(MaxValue, Builtin::u128)())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getIsPow2(__extension_Float128_404_f128 const& __this ) -> const bool
	{
		#line 411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto bits = ADV_UPCS(Bits)(__this.__ref()); 
		#line 413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((ADV_UFCS(NarrowToInt128)(bits.__ref()) <=> Builtin::i32(0)) <= 0) {
			#line 414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return Builtin::Boolean(false);
		}
		#line 417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto biasedExponent = __Float128_Protected::ExtractBiasedExponentFromBits(bits); 
		#line 418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto trailingSignificand = __Float128_Protected::ExtractTrailingSignificandFromBits(bits); 
		#line 421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (biasedExponent == __Float128_Protected::MinBiasedExponent) {
			#line 422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return ADV_UPCS(PopCount)(trailingSignificand.__ref()) == Builtin::i32(1);
		}
		#line 425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (biasedExponent == __Float128_Protected::MaxBiasedExponent) {
			#line 426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return Builtin::Boolean(false);
		}
		#line 430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return trailingSignificand == __Float128_Protected::MinTrailingSignificand;
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	
} namespace __extensions { using namespace System;
#line 499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto __static_getPi<__extension_Float128_497_f128>::get() -> const __extension_Float128_2039_f128
	{
		#line 499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::ParseFloat128("3.141592653589793238462643383279502884")); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto __static_getE<__extension_Float128_497_f128>::get() -> const __extension_Float128_2039_f128
	{
		#line 500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::ParseFloat128("2.718281828459045235360287471352662497")); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto __static_getTau<__extension_Float128_497_f128>::get() -> const __extension_Float128_2039_f128
	{
		#line 501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::ParseFloat128("6.283185307179586476925286766559005768")); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	
} namespace __extensions { using namespace System;
#line 539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto CeilToInt32(__extension_Float128_504_f128 const& __this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i32>(ADV_UPCS(Ceil)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto CeilToInt64(__extension_Float128_504_f128 const& __this LIFETIMEBOUND)  -> const Builtin::i64
	{
		#line 540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i64>(ADV_UPCS(Ceil)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 541 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto CeilToInt128(__extension_Float128_504_f128 const& __this LIFETIMEBOUND)  -> const Builtin::i128
	{
		#line 541 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i128>(ADV_UPCS(Ceil)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto FloorToInt32(__extension_Float128_504_f128 const& __this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i32>(ADV_UPCS(Floor)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto FloorToInt64(__extension_Float128_504_f128 const& __this LIFETIMEBOUND)  -> const Builtin::i64
	{
		#line 574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i64>(ADV_UPCS(Floor)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto FloorToInt128(__extension_Float128_504_f128 const& __this LIFETIMEBOUND)  -> const Builtin::i128
	{
		#line 575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i128>(ADV_UPCS(Floor)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto TruncateToInt32(__extension_Float128_504_f128 const& __this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i32>(ADV_UPCS(Truncate)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto TruncateToInt64(__extension_Float128_504_f128 const& __this LIFETIMEBOUND)  -> const Builtin::i64
	{
		#line 609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i64>(ADV_UPCS(Truncate)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 610 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto TruncateToInt128(__extension_Float128_504_f128 const& __this LIFETIMEBOUND)  -> const Builtin::i128
	{
		#line 610 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i128>(ADV_UPCS(Truncate)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 621 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto RoundToInt32(__extension_Float128_504_f128 const& __this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 621 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i32>(ADV_UPCS(Round)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 622 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto RoundToInt64(__extension_Float128_504_f128 const& __this LIFETIMEBOUND)  -> const Builtin::i64
	{
		#line 622 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i64>(ADV_UPCS(Round)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 623 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto RoundToInt128(__extension_Float128_504_f128 const& __this LIFETIMEBOUND)  -> const Builtin::i128
	{
		#line 623 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i128>(ADV_UPCS(Round)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto RoundTiesEvenToInt32(__extension_Float128_504_f128 const& __this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i32>(ADV_UPCS(RoundTiesEven)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 692 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto RoundTiesEvenToInt64(__extension_Float128_504_f128 const& __this LIFETIMEBOUND)  -> const Builtin::i64
	{
		#line 692 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i64>(ADV_UPCS(RoundTiesEven)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto RoundTiesEvenToInt128(__extension_Float128_504_f128 const& __this LIFETIMEBOUND)  -> const Builtin::i128
	{
		#line 693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i128>(ADV_UPCS(RoundTiesEven)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto Round(__extension_Float128_504_f128 const& __this LIFETIMEBOUND, Builtin::u32 digits)  -> const typename __extension_Float128_504_f128
	{
		#line 695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Round)(__this.__ref(), digits, ADV_USPCS(AwayFromZero, MidpointRounding)())); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto Round(__extension_Float128_504_f128 const& __this LIFETIMEBOUND, MidpointRounding rounding)  -> const typename __extension_Float128_504_f128
	{
		#line 696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Round)(__this.__ref(), Builtin::u32(0U), rounding)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 697 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto Round(__extension_Float128_504_f128 const& __this LIFETIMEBOUND, Builtin::u32 digits, MidpointRounding rounding)  -> const typename __extension_Float128_504_f128
	{
		#line 699 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		constexpr auto maxRoundingDigits = Builtin::u32(34U);
		#line 700 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		constexpr auto roundLimit = ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x40733426172C74D822B878FE80000000"));
		#line 701 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		constexpr auto pow10table = Builtin::ToInlineArray<Builtin::f128>({ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FFF0000000000000000000000000000")), ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x40024000000000000000000000000000")), ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x40059000000000000000000000000000")), ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x4008F400000000000000000000000000")), ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x400C3880000000000000000000000000")), ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x400F86A0000000000000000000000000")), ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x4012E848000000000000000000000000")), ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x4016312D000000000000000000000000")), ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x40197D78400000000000000000000000")), ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x401CDCD6500000000000000000000000")), ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x40202A05F20000000000000000000000")), ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x402374876E8000000000000000000000")), ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x4026D1A94A2000000000000000000000")), ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x402A2309CE5400000000000000000000")), ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x402D6BCC41E900000000000000000000")), ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x4030C6BF526340000000000000000000")), ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x40341C37937E08000000000000000000")), ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x40376345785D8A000000000000000000")), ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x403ABC16D674EC800000000000000000")), ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x403E158E460913D00000000000000000")), ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x40415AF1D78B58C40000000000000000")), ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x4044B1AE4D6E2EF50000000000000000")), ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x40480F0CF064DD592000000000000000")), ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x404B52D02C7E14AF6800000000000000")), ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x404EA784379D99DB4200000000000000")), ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x405208B2A2C280290940000000000000")), ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x40554ADF4B7320334B90000000000000")), ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x40589D971E4FE8401E74000000000000")), ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x405C027E72F1F1281308800000000000")), ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x405F431E0FAE6D7217CAA00000000000")), ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x406293E5939A08CE9DBD480000000000")), ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x4065F8DEF8808B02452C9A0000000000")), ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x40693B8B5B5056E16B3BE04000000000")), ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x406C8A6E32246C99C60AD85000000000")), ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x406FED09BEAD87C0378D8E6400000000"))});
		#line 739 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((digits <=> maxRoundingDigits) > 0) {
			#line 740 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto result = __this; 
		#line 744 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((ADV_UPCS(Abs)(__this.__ref()) <=> roundLimit) < 0) {
			#line 745 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			const auto pow10 = ADV_UFCS(_operator_subscript)(pow10table.__ref(), digits); 
			#line 746 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			result *= pow10;
			#line 748 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			result = [&]() 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
			{
				#line 750 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				auto __tmp__valid_748 = Builtin::Cast<false, std::decay_t<decltype(rounding)>::__self>(rounding);
				#line 750 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if(__tmp__valid_748.IsValid() && Builtin::Is(*__tmp__valid_748, decltype(rounding)::ToEven)) {
					#line 750 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					const auto& rounding = *__tmp__valid_748;
					return ADV_UPCS(RoundTiesEven)(result.__ref());
				}
				else {
					#line 751 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					if(__tmp__valid_748.IsValid() && Builtin::Is(*__tmp__valid_748, decltype(rounding)::AwayFromZero)) {
						#line 751 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						const auto& rounding = *__tmp__valid_748;
						return ADV_UPCS(Round)(result.__ref());
					}
					else {
						#line 752 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						if(__tmp__valid_748.IsValid() && Builtin::Is(*__tmp__valid_748, decltype(rounding)::ToZero)) {
							#line 752 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							const auto& rounding = *__tmp__valid_748;
							return ADV_UPCS(Truncate)(result.__ref());
						}
						else {
							#line 753 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							if(__tmp__valid_748.IsValid() && Builtin::Is(*__tmp__valid_748, decltype(rounding)::ToNegativeInfinity)) {
								#line 753 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
								const auto& rounding = *__tmp__valid_748;
								return ADV_UPCS(Floor)(result.__ref());
							}
							else {
								#line 754 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
								if(__tmp__valid_748.IsValid() && Builtin::Is(*__tmp__valid_748, decltype(rounding)::ToPositiveInfinity)) {
									#line 754 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
									const auto& rounding = *__tmp__valid_748;
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
			#line 758 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			result /= pow10;
		}
		#line 761 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getFractionalPart(__extension_Float128_504_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(__this - ADV_UPCS(Truncate)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getCeil(__extension_Float128_504_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const auto exponent = __Float128_Protected::BiasedExponent(__this); 
		#line 515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const auto sign = ADV_UPCS(IsNegative)(__this.__ref()); 
		#line 516 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		__extension_Float128_2039_f128 y{}; 
		#line 518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((exponent <=> Builtin::i32(0x3FFF) + Builtin::i32(112)) >= 0 || ADV_UPCS(IsZero)(__this.__ref())) {
			#line 519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return __this;
		}
		#line 522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const __extension_Float128_2039_f128 toint = __Float128_Protected::RoundingEpsilon; 
		#line 523 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (sign) {
			#line 524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			y = __this - toint + toint - __this;
		} else {
			#line 525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			{
				#line 526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				y = __this + toint - toint - __this;
			}
		}
		#line 529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((exponent <=> Builtin::i32(0x3FFF) - Builtin::i32(1)) <= 0) {
			#line 530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return sign ? ADV_USPCS(NegativeZero, __extension_Float128_2039_f128)() : ADV_USPCS(One, __extension_Float128_2039_f128)();
		}
		#line 532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((y <=> Builtin::i32(0)) < 0) {
			#line 533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return __this + y + Builtin::i32(1);
		}
		#line 536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return __this + y;
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getFloor(__extension_Float128_504_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const auto exponent = __Float128_Protected::BiasedExponent(__this); 
		#line 549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const auto sign = ADV_UPCS(IsNegative)(__this.__ref()); 
		#line 550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		__extension_Float128_2039_f128 y{}; 
		#line 552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((exponent <=> Builtin::i32(0x3FFF) + Builtin::i32(112)) >= 0 || ADV_UPCS(IsZero)(__this.__ref())) {
			#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return __this;
		}
		#line 556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const __extension_Float128_2039_f128 toint = __Float128_Protected::RoundingEpsilon; 
		#line 557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (sign) {
			#line 558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			y = __this - toint + toint - __this;
		} else {
			#line 559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			{
				#line 560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				y = __this + toint - toint - __this;
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
			return __this + y - Builtin::i32(1);
		}
		#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return __this + y;
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 580 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getTruncate(__extension_Float128_504_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const auto exponent = __Float128_Protected::BiasedExponent(__this); 
		#line 583 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const auto sign = ADV_UPCS(IsNegative)(__this.__ref()); 
		#line 584 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		__extension_Float128_2039_f128 y{}; 
		#line 586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((exponent <=> Builtin::i32(0x3FFF) + Builtin::i32(112)) >= 0) {
			#line 587 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return __this;
		}
		#line 589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((exponent <=> Builtin::i32(0x3FFF) - Builtin::i32(1)) <= 0) {
			#line 590 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return sign ? Builtin::i32(-1) : Builtin::i32(0);
		}
		#line 593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto x = __this; 
		#line 594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (sign) {
			#line 595 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			x = -x;
		}
		#line 598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const __extension_Float128_2039_f128 toint = __Float128_Protected::RoundingEpsilon; 
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
} namespace __extensions { using namespace System;
#line 615 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getRound(__extension_Float128_504_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 617 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		constexpr auto halfOne = ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FFE0000000000000000000000000000"));
		#line 618 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return ADV_UPCS(Truncate)((__this + ADV_UFCS(CopySign)((ADV_UPCS(BitDecrement)(halfOne.__ref())).__ref(), __this)).__ref());
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 628 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getRoundTiesEven(__extension_Float128_504_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 630 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const auto bits = ADV_UPCS(Bits)(__this.__ref()); 
		#line 631 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const auto biasedExponent = __Float128_Protected::ExtractBiasedExponentFromBits(bits); 
		#line 632 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto high = ADV_UFCS(High64)(bits.__ref()); 
		#line 633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto low = ADV_UFCS(Low64)(bits.__ref()); 
		#line 634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::u64 lastBitMask0{}, lastBitMask64{}, roundBitsMask{}; 
		#line 635 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::u128 result{}; 
		#line 637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((biasedExponent <=> Builtin::i32(0x402F)) >= 0) {
			#line 638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if ((biasedExponent <=> Builtin::i32(0x406F)) >= 0) {
				#line 640 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if (biasedExponent == Builtin::i32(0x7FFF) && __Float128_Protected::ExtractTrailingSignificandFromBits(bits) != Builtin::i32(0)) {
					#line 641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					return ADV_USPCS(NaN, Builtin::f128)();
				}
				#line 645 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				return __this;
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
					if ((ADV_UFCS(Low64)(result.__ref()) & roundBitsMask) == Builtin::i32(0)) {
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
					if ((bits & (ADV_UFCS(_operator_not)(__Float128_Protected::SignMask))) == Builtin::i32(0)) {
						#line 671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						return __this;
					}
					#line 673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					result = bits & __Float128_Protected::SignMask;
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
				if (((ADV_UFCS(High64)(result.__ref()) & roundBitsMask) | ADV_UFCS(Low64)(bits.__ref())) == Builtin::i32(0)) {
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
} namespace __extensions { using namespace System;
#line 764 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getExponentByteCount(__extension_Float128_504_f128 const& __this ) -> const Builtin::u32
	{
		#line 764 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u32>(Builtin::usize(sizeof(Builtin::i16)))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getExponentShortestBitLength(__extension_Float128_504_f128 const& __this ) -> const Builtin::u32
	{
		#line 767 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto exponent = __Float128_Protected::Exponent(__this); 
		#line 768 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((exponent <=> Builtin::i32(0)) >= 0) {
			#line 769 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return ADV_USPCS(BitWidth, Builtin::i16)() - ADV_UPCS(LeadingZeroCount)(exponent.__ref());
		} else {
			#line 770 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			{
				#line 771 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				return ADV_USPCS(BitWidth, Builtin::i16)() + Builtin::i32(1) - ADV_UPCS(LeadingZeroCount)(exponent.__ref());
			}
		}
		return {};
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 774 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getSignificandBitLength(__extension_Float128_504_f128 const& __this ) -> const Builtin::u32
	{
		#line 774 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(113U)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 775 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getSignificandByteCount(__extension_Float128_504_f128 const& __this ) -> const Builtin::u32
	{
		#line 775 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u32>(Builtin::usize(sizeof(Builtin::u128)))); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	
} namespace __extensions { using namespace System;
#line 784 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto _operator_mul_mul_eq(__extension_Float128_779_f128 & __this , __extension_Float128_2039_f128 exp) noexcept -> typename __extension_Float128_779_f128&
	{
		#line 784 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_mul_mul)(__this, exp)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	
} namespace __extensions { using namespace System;
#line 809 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getExp2M1(__extension_Float128_787_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 809 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Exp2)(__this.__ref()) - ADV_USPCS(One, __extension_Float128_2039_f128)()); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 811 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getExp10M1(__extension_Float128_787_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 811 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Exp10)(__this.__ref()) - ADV_USPCS(One, __extension_Float128_2039_f128)()); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	
} namespace __extensions { using namespace System;
#line 826 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getLog2P1(__extension_Float128_814_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 826 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Log2)((__this + Builtin::i32(1)).__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getLog10P1(__extension_Float128_814_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Log10)((__this + Builtin::i32(1)).__ref())); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	
} namespace __extensions { using namespace System;
#line 1266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToRadians(__extension_Float128_1182_f128 const& __this LIFETIMEBOUND) noexcept -> const typename __extension_Float128_1182_f128
	{
		#line 1266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY((__this * ADV_USPCS(Pi, Builtin::f128)()) / Builtin::i32(180)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto ToDegrees(__extension_Float128_1182_f128 const& __this LIFETIMEBOUND) noexcept -> const typename __extension_Float128_1182_f128
	{
		#line 1268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY((__this * Builtin::i32(180)) / ADV_USPCS(Pi, Builtin::f128)()); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getCot(__extension_Float128_1182_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 1196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(ReciprocalEstimate)(ADV_UPCS(Tan)(__this.__ref()).__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getSec(__extension_Float128_1182_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 1198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(ReciprocalEstimate)(ADV_UPCS(Cos)(__this.__ref()).__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getCsc(__extension_Float128_1182_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 1200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(ReciprocalEstimate)(ADV_UPCS(Sin)(__this.__ref()).__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getCotPi(__extension_Float128_1182_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 1247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(ReciprocalEstimate)(ADV_UPCS(TanPi)(__this.__ref()).__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getSecPi(__extension_Float128_1182_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 1249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(ReciprocalEstimate)(ADV_UPCS(CosPi)(__this.__ref()).__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getCscPi(__extension_Float128_1182_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 1251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(ReciprocalEstimate)(ADV_UPCS(SinPi)(__this.__ref()).__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getAsinPi(__extension_Float128_1182_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 1253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Asin)(__this.__ref()) / ADV_USPCS(Pi, Builtin::f128)()); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getAcosPi(__extension_Float128_1182_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 1255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Acos)(__this.__ref()) / ADV_USPCS(Pi, Builtin::f128)()); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getAtanPi(__extension_Float128_1182_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 1257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Atan)(__this.__ref()) / ADV_USPCS(Pi, Builtin::f128)()); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getAcotPi(__extension_Float128_1182_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 1259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Acot)(__this.__ref()) / ADV_USPCS(Pi, Builtin::f128)()); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getAsecPi(__extension_Float128_1182_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 1261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Asec)(__this.__ref()) / ADV_USPCS(Pi, Builtin::f128)()); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getAcscPi(__extension_Float128_1182_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 1263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Acsc)(__this.__ref()) / ADV_USPCS(Pi, Builtin::f128)()); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	
} namespace __extensions { using namespace System;
#line 1299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getAcoth(__extension_Float128_1271_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 1299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Atanh)((ADV_UPCS(ReciprocalEstimate)(__this.__ref())).__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getAcsch(__extension_Float128_1271_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 1301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Asinh)((ADV_UPCS(ReciprocalEstimate)(__this.__ref())).__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getAsech(__extension_Float128_1271_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 1303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Acosh)((ADV_UPCS(ReciprocalEstimate)(__this.__ref())).__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getCoth(__extension_Float128_1271_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 1366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(ReciprocalEstimate)(ADV_UPCS(Tanh)(__this.__ref()).__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getCsch(__extension_Float128_1271_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 1368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(ReciprocalEstimate)(ADV_UPCS(Sinh)(__this.__ref()).__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getSech(__extension_Float128_1271_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 1370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(ReciprocalEstimate)(ADV_UPCS(Cosh)(__this.__ref()).__ref())); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	
} namespace __extensions { using namespace System;
#line 1437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto Atan2Pi(__extension_Float128_1425_f128 const& __this LIFETIMEBOUND, __extension_Float128_2039_f128 y)  -> const typename __extension_Float128_1425_f128
	{
		#line 1437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Atan2)(__this.__ref(), y) / ADV_USPCS(Pi, Builtin::f128)()); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1986 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto Lerp(__extension_Float128_1425_f128 const& __this LIFETIMEBOUND, __extension_Float128_2039_f128 end, __extension_Float128_2039_f128 amount) noexcept -> const typename __extension_Float128_1425_f128
	{
		#line 1986 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(__this * (ADV_USPCS(One, __extension_Float128_2039_f128)() - amount) + (end * amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto __static_getEpsilon<__extension_Float128_1425_f128>::get() -> const __extension_Float128_2039_f128
	{
		#line 1426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Builtin::f128), FromBits)(Builtin::u32(1U))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto __static_getNegativeInfinity<__extension_Float128_1425_f128>::get() -> const __extension_Float128_2039_f128
	{
		#line 1427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Builtin::f128), FromBits)(__Float128_Protected::BiasedExponentMask | __Float128_Protected::SignMask)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto __static_getPositiveInfinity<__extension_Float128_1425_f128>::get() -> const __extension_Float128_2039_f128
	{
		#line 1428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Builtin::f128), FromBits)(__Float128_Protected::BiasedExponentMask)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto __static_getNaN<__extension_Float128_1425_f128>::get() -> const __extension_Float128_2039_f128
	{
		#line 1429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Builtin::f128), FromBits)(__Float128_Protected::BiasedExponentMask | (Builtin::u128(1ULL) << (__Float128_Protected::BiasedExponentShift - Builtin::i32(1))))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto __static_getNegativeZero<__extension_Float128_1425_f128>::get() -> const __extension_Float128_2039_f128
	{
		#line 1430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Builtin::f128), FromBits)(__Float128_Protected::SignMask)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getBitIncrement(__extension_Float128_1425_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 1447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto bits = ADV_UPCS(Bits)(__this.__ref()); 
		#line 1448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (((bits & __Float128_Protected::BiasedExponentMask) <=> __Float128_Protected::BiasedExponentMask) >= 0) {
			#line 1452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return bits == (__Float128_Protected::BiasedExponentMask | __Float128_Protected::SignMask) ? ADV_USPCS(MinValue, Builtin::f128)() : __this;
		}
		#line 1456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (bits == __Float128_Protected::SignMask) {
			#line 1457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return ADV_USPCS(Epsilon, Builtin::f128)();
		}
		#line 1460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((ADV_UFCS(NarrowToInt128)(bits.__ref()) <=> Builtin::i32(0)) < 0) {
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
} namespace __extensions { using namespace System;
#line 1474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getBitDecrement(__extension_Float128_1425_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 1476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto bits = ADV_UPCS(Bits)(__this.__ref()); 
		#line 1477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (((bits & __Float128_Protected::BiasedExponentMask) <=> __Float128_Protected::BiasedExponentMask) >= 0) {
			#line 1481 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return bits == __Float128_Protected::BiasedExponentMask ? ADV_USPCS(MaxValue, Builtin::f128)() : __this;
		}
		#line 1485 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (bits == Builtin::u32(0U)) {
			#line 1486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return -ADV_USPCS(Epsilon, Builtin::f128)();
		}
		#line 1489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((ADV_UFCS(NarrowToInt128)(bits.__ref()) <=> Builtin::i32(0)) < 0) {
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
} namespace __extensions { using namespace System;
#line 1498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getILogB(__extension_Float128_1425_f128 const& __this ) -> const Builtin::i32
	{
		#line 1500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		constexpr auto intNan = Builtin::i32(-1) - Builtin::i32(0x7FFFFFFF);
		#line 1501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const auto exp = __Float128_Protected::BiasedExponent(__this); 
		#line 1502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (exp == Builtin::i32(0)) {
			#line 1503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if (__this == Builtin::i32(0)) {
				#line 1504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				return intNan;
			}
			#line 1507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			ADV_ASSERT((ADV_UPCS(IsSubnormal)(__this.__ref())), u"this.IsSubnormal");
			#line 1508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return Builtin::i32{__Float128_Protected::MinExponent} - (Builtin::i32{ADV_UPCS(LeadingZeroCount)(__Float128_Protected::TrailingSignificand(__this).__ref())} - Builtin::i32(15));
		}
		#line 1510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (exp == __Float128_Protected::MaxBiasedExponent) {
			#line 1511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return ADV_UPCS(IsNaN)(__this.__ref()) ? intNan : ADV_USPCS(MaxValue, Builtin::i32)();
		}
		#line 1514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return Builtin::i32{exp} - __Float128_Protected::ExpBias;
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getReciprocalEstimate(__extension_Float128_1425_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 1519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return ADV_USPCS(One, __extension_Float128_2039_f128)() / __this;
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getReciprocalSqrtEstimate(__extension_Float128_1425_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 1521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(ReciprocalEstimate)(ADV_UPCS(Sqrt)(__this.__ref()).__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto getCategory(__extension_Float128_1425_f128 const& __this ) -> const FloatingPointCategory
	{
		#line 1526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (ADV_UPCS(IsNaN)(__this.__ref())) {
			#line 1527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return ADV_USPCS(NaN, FloatingPointCategory)();
		} else {
			#line 1528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if (ADV_UPCS(IsInfinity)(__this.__ref())) {
				#line 1529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				return ADV_USPCS(Infinity, FloatingPointCategory)();
			} else {
				#line 1530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if (ADV_UPCS(IsZero)(__this.__ref())) {
					#line 1531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					return ADV_USPCS(Zero, FloatingPointCategory)();
				} else {
					#line 1532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					if (ADV_UPCS(IsSubnormal)(__this.__ref())) {
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
} namespace __extensions { using namespace System;
#line 2030 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getGamma(__extension_Float128_1425_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 2030 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::f64{std::tgammal(Builtin::Cast<true, Builtin::f64>(__this))}); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 2032 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getLnGamma(__extension_Float128_1425_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 2032 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::f64{std::lgammal(Builtin::Cast<true, Builtin::f64>(__this))}); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 2034 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getErf(__extension_Float128_1425_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 2034 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::f64{std::erfl(Builtin::Cast<true, Builtin::f64>(__this))}); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 2036 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto getErfc(__extension_Float128_1425_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 2036 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::f64{std::erfcl(Builtin::Cast<true, Builtin::f64>(__this))}); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	
} namespace __extensions { using namespace System;
#line 2040 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto __static_getNumberBufferLength<__extension_Float128_2039_f128>::get() -> const Builtin::i32
	{
		#line 2040 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(767) + Builtin::i32(1) + Builtin::i32(1)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 2041 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto __static_getZeroBits<__extension_Float128_2039_f128>::get() -> const Builtin::u128
	{
		#line 2041 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(0U)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 2042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto __static_getInfinityBits<__extension_Float128_2039_f128>::get() -> const Builtin::u128
	{
		#line 2042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::ParseUInt128("0x7FFF0000000000000000000000000000")); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 2043 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto __static_getNormalMantissaMask<__extension_Float128_2039_f128>::get() -> const Builtin::u128
	{
		#line 2043 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY((Builtin::u128(1ULL) << __Float128_Protected::SignificandLength) - Builtin::u32(1U)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 2044 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto __static_getDenormalMantissaMask<__extension_Float128_2039_f128>::get() -> const Builtin::u128
	{
		#line 2044 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(__Float128_Protected::TrailingSignificandMask); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 2045 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto __static_getMinBinaryExponent<__extension_Float128_2039_f128>::get() -> const Builtin::i32
	{
		#line 2045 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(1) - __Float128_Protected::MaxExponent); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 2046 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto __static_getMaxBinaryExponent<__extension_Float128_2039_f128>::get() -> const Builtin::i32
	{
		#line 2046 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(__Float128_Protected::MaxExponent); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 2047 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto __static_getMinDecimalExponent<__extension_Float128_2039_f128>::get() -> const Builtin::i32
	{
		#line 2047 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(-4966)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 2048 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto __static_getMaxDecimalExponent<__extension_Float128_2039_f128>::get() -> const Builtin::i32
	{
		#line 2048 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(4932)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 2049 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto __static_getExponentBias<__extension_Float128_2039_f128>::get() -> const Builtin::i32
	{
		#line 2049 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(__Float128_Protected::ExpBias); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 2050 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto __static_getExponentBits<__extension_Float128_2039_f128>::get() -> const Builtin::u128
	{
		#line 2050 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(15U)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 2051 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto __static_getOverflowDecimalExponent<__extension_Float128_2039_f128>::get() -> const Builtin::i32
	{
		#line 2051 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl)((__Float128_Protected::MaxExponent + Builtin::i32(2) * __Float128_Protected::SignificandLength), Builtin::i32(3))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 2052 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto __static_getInfinityExponent<__extension_Float128_2039_f128>::get() -> const Builtin::i32
	{
		#line 2052 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(0x7FFF)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 2053 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto __static_getNormalMantissaBits<__extension_Float128_2039_f128>::get() -> const Builtin::u16
	{
		#line 2053 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u16>(__Float128_Protected::SignificandLength)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 2054 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto __static_getDenormalMantissaBits<__extension_Float128_2039_f128>::get() -> const Builtin::u16
	{
		#line 2054 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u16>(__Float128_Protected::TrailingSignificandLength)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 2055 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto __static_getMinFastFloatDecimalExponent<__extension_Float128_2039_f128>::get() -> const Builtin::i32
	{
		#line 2055 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(-4966)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 2056 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto __static_getMaxFastFloatDecimalExponent<__extension_Float128_2039_f128>::get() -> const Builtin::i32
	{
		#line 2056 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(4932)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 2057 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto __static_getMinExponentRoundToEven<__extension_Float128_2039_f128>::get() -> const Builtin::i32
	{
		#line 2057 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(-4)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 2058 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto __static_getMaxExponentRoundToEven<__extension_Float128_2039_f128>::get() -> const Builtin::i32
	{
		#line 2058 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(23)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 2059 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto __static_getMaxExponentFastPath<__extension_Float128_2039_f128>::get() -> const Builtin::i32
	{
		#line 2059 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(22)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 2060 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline constexpr auto __static_getMaxMantissaFastPath<__extension_Float128_2039_f128>::get() -> const Builtin::u128
	{
		#line 2060 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_EXPRESSION_BODY(Builtin::u128(2ULL) << __Float128_Protected::TrailingSignificandLength); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	

}