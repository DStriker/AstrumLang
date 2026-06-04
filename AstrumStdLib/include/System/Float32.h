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
#include "System/Numerics/IBinaryFloatFormatInfo.h"
using namespace System::Numerics;

namespace System {
namespace __Unsafe {} namespace __Float32_Protected__Unsafe {}
//###############################################################################
//# Global type aliases
//###############################################################################
#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
using Float32 = Builtin::f32;
#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
using Single = Builtin::f32;
//###############################################################################
//# Type definitions
//###############################################################################
	} namespace __extensions { using namespace System;
#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	using __extension_Float32_13_f32 = Builtin::f32;
	#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE(IMinMaxValue, IMinMaxValue);
	#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getMinValue; template<> struct __static_getMinValue<__extension_Float32_13_f32> { static inline constexpr auto get() -> const __extension_Float32_13_f32; };
	#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getMaxValue; template<> struct __static_getMaxValue<__extension_Float32_13_f32> { static inline constexpr auto get() -> const __extension_Float32_13_f32; };
	#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f32, IMinMaxValue, IMinMaxValue, f32);
	} namespace System{
using __extensions::__static_getMinValue;
using __extensions::__static_getMaxValue;

		} namespace __extensions { using namespace System;
#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	using __extension_Float32_18_f32 = Builtin::f32;
	#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ASTRUMSTD_API auto _operator_eq_eq_mul(__extension_Float32_18_f32 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool;
	#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto operator<=>(__extension_Float32_18_f32 const& __this LIFETIMEBOUND, Builtin::Nullable<__extension_Float32_18_f32> rhs) noexcept -> const Builtin::i32;
	#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_FromBits; template<> struct __static_FromBits<__extension_Float32_18_f32> { static inline constexpr auto get(Builtin::u32 bits)  -> const typename __extension_Float32_18_f32; };
	#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getBits(__extension_Float32_18_f32 const& __this ) -> const Builtin::u32;
	#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getBitWidth; template<> struct __static_getBitWidth<__extension_Float32_18_f32> { static inline constexpr auto get() -> const Builtin::u32; };
	#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getMinPositiveValue; template<> struct __static_getMinPositiveValue<__extension_Float32_18_f32> { static inline constexpr auto get() -> const __extension_Float32_18_f32; };
	#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getHashCode(__extension_Float32_18_f32 const& __this ) -> const Builtin::u64;
	} namespace System{
using __extensions::_operator_eq_eq_mul;
using __extensions::operator<=>;
using __extensions::__static_FromBits;
using __extensions::getBits;
using __extensions::__static_getBitWidth;
using __extensions::__static_getMinPositiveValue;
using __extensions::getHashCode;

		} namespace __extensions { using namespace System;
#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	using __extension_Float32_60_f32 = Builtin::f32;
	#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE(IAbstractComparable, IAbstractComparable);
	#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ASTRUMSTD_API auto _operator_lt_eq_gt_mul(__extension_Float32_60_f32 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32;
	#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f32, IAbstractComparable, IAbstractComparable, f32);
	} namespace System{
using __extensions::_operator_lt_eq_gt_mul;

		} namespace __extensions { using namespace System;
#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	using __extension_Float32_75_f32 = Builtin::f32;
	#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE(IConvertible, IConvertible);
	#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToBoolean(__extension_Float32_75_f32 const& __this LIFETIMEBOUND) noexcept -> const bool;
	#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToInt8(__extension_Float32_75_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i8;
	#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToUInt8(__extension_Float32_75_f32 const& __this LIFETIMEBOUND)  -> const Builtin::u8;
	#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToInt16(__extension_Float32_75_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i16;
	#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToUInt16(__extension_Float32_75_f32 const& __this LIFETIMEBOUND)  -> const Builtin::u16;
	#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToInt32(__extension_Float32_75_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToUInt32(__extension_Float32_75_f32 const& __this LIFETIMEBOUND)  -> const Builtin::u32;
	#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToInt64(__extension_Float32_75_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i64;
	#line 84 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToUInt64(__extension_Float32_75_f32 const& __this LIFETIMEBOUND)  -> const Builtin::u64;
	#line 85 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToInt128(__extension_Float32_75_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i128;
	#line 86 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToUInt128(__extension_Float32_75_f32 const& __this LIFETIMEBOUND)  -> const Builtin::u128;
	#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToIsize(__extension_Float32_75_f32 const& __this LIFETIMEBOUND)  -> const Builtin::isize;
	#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToUsize(__extension_Float32_75_f32 const& __this LIFETIMEBOUND)  -> const Builtin::usize;
	#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToFloat32(__extension_Float32_75_f32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::f32;
	#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToFloat64(__extension_Float32_75_f32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::f64;
	#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToByte(__extension_Float32_75_f32 const& __this LIFETIMEBOUND)  -> const Builtin::char8;
	#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToChar(__extension_Float32_75_f32 const& __this LIFETIMEBOUND)  -> const Builtin::char16;
	#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f32, IConvertible, IConvertible, f32);
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
#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	using __extension_Float32_97_f32 = Builtin::f32;
	#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE(IDivisibleArithmetic, IDivisibleArithmetic);
	#line 99 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class T> inline constexpr auto _operator_div_mod(__extension_Float32_97_f32 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_Float32_97_f32, __extension_Float32_97_f32>;
	#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class T> inline constexpr auto _operator_div_not(__extension_Float32_97_f32 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Float32_97_f32;
	#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto _operator_div_not_eq(__extension_Float32_97_f32 & __this , auto rhs)  -> typename __extension_Float32_97_f32&;
	#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class T> inline constexpr auto _operator_div_lt(__extension_Float32_97_f32 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Float32_97_f32;
	#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto _operator_div_lt_eq(__extension_Float32_97_f32 & __this , auto rhs)  -> typename __extension_Float32_97_f32&;
	#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class T> inline constexpr auto _operator_div_gt(__extension_Float32_97_f32 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Float32_97_f32;
	#line 115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto _operator_div_gt_eq(__extension_Float32_97_f32 & __this , auto rhs)  -> typename __extension_Float32_97_f32&;
	#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f32, IDivisibleArithmetic, IDivisibleArithmetic, f32);
	} namespace System{
using __extensions::_operator_div_mod;
using __extensions::_operator_div_not;
using __extensions::_operator_div_not_eq;
using __extensions::_operator_div_lt;
using __extensions::_operator_div_lt_eq;
using __extensions::_operator_div_gt;
using __extensions::_operator_div_gt_eq;

		} namespace __extensions { using namespace System;
#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	using __extension_Float32_119_f32 = Builtin::f32;
	#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE(ISignedIntegerPowerArithmetic, ISignedIntegerPowerArithmetic);
	#line 121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto _operator_xor_xor(__extension_Float32_119_f32 const& __this LIFETIMEBOUND, Builtin::i32 exp)  -> const typename __extension_Float32_119_f32;
	#line 157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto _operator_xor_xor_eq(__extension_Float32_119_f32 & __this , Builtin::i32 exp)  -> typename __extension_Float32_119_f32&;
	#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f32, ISignedIntegerPowerArithmetic, ISignedIntegerPowerArithmetic, f32);
	} namespace System{
using __extensions::_operator_xor_xor;
using __extensions::_operator_xor_xor_eq;

		} namespace __extensions { using namespace System;
#line 160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	using __extension_Float32_160_f32 = Builtin::f32;
	#line 160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE(INumberBase, INumberBase);
	#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto MaxMagnitude(__extension_Float32_160_f32 const& __this LIFETIMEBOUND, __extension_Float32_160_f32 rhs) noexcept -> const typename __extension_Float32_160_f32;
	#line 215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto MaxMagnitudeNumber(__extension_Float32_160_f32 const& __this LIFETIMEBOUND, __extension_Float32_160_f32 rhs) noexcept -> const typename __extension_Float32_160_f32;
	#line 233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto MinMagnitude(__extension_Float32_160_f32 const& __this LIFETIMEBOUND, __extension_Float32_160_f32 rhs) noexcept -> const typename __extension_Float32_160_f32;
	#line 251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto MinMagnitudeNumber(__extension_Float32_160_f32 const& __this LIFETIMEBOUND, __extension_Float32_160_f32 rhs) noexcept -> const typename __extension_Float32_160_f32;
	#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ASTRUMSTD_API auto Parse(__extension_Float32_160_f32 const& __this LIFETIMEBOUND, Builtin::Str input)  -> const typename __extension_Float32_160_f32;
	#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ASTRUMSTD_API auto TryParse(__extension_Float32_160_f32 const& __this LIFETIMEBOUND, Builtin::Str input) noexcept -> const Builtin::Nullable<__extension_Float32_160_f32>;
	#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToInt8(__extension_Float32_160_f32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i8;
	#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToUInt8(__extension_Float32_160_f32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u8;
	#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToInt16(__extension_Float32_160_f32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i16;
	#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToUInt16(__extension_Float32_160_f32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u16;
	#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToInt32(__extension_Float32_160_f32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i32;
	#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToUInt32(__extension_Float32_160_f32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u32;
	#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToInt64(__extension_Float32_160_f32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i64;
	#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToUInt64(__extension_Float32_160_f32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u64;
	#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToInt128(__extension_Float32_160_f32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i128;
	#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToUInt128(__extension_Float32_160_f32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u128;
	#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToIsize(__extension_Float32_160_f32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::isize;
	#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToUsize(__extension_Float32_160_f32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::usize;
	#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getOne; template<> struct __static_getOne<__extension_Float32_160_f32> { static inline constexpr auto get() -> const __extension_Float32_160_f32; };
	#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getZero; template<> struct __static_getZero<__extension_Float32_160_f32> { static inline constexpr auto get() -> const __extension_Float32_160_f32; };
	#line 163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getRadix; template<> struct __static_getRadix<__extension_Float32_160_f32> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getAbs(__extension_Float32_160_f32 const& __this ) -> const __extension_Float32_160_f32;
	#line 171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsCanonical(__extension_Float32_160_f32 const& __this ) -> const bool;
	#line 172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsComplexNumber(__extension_Float32_160_f32 const& __this ) -> const bool;
	#line 173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsEvenInteger(__extension_Float32_160_f32 const& __this ) -> const bool;
	#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsFinite(__extension_Float32_160_f32 const& __this ) -> const bool;
	#line 175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsImaginaryNumber(__extension_Float32_160_f32 const& __this ) -> const bool;
	#line 176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsInfinity(__extension_Float32_160_f32 const& __this ) -> const bool;
	#line 177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsInteger(__extension_Float32_160_f32 const& __this ) -> const bool;
	#line 178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsNaN(__extension_Float32_160_f32 const& __this ) -> const bool;
	#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsNegative(__extension_Float32_160_f32 const& __this ) -> const bool;
	#line 180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsNegativeInfinity(__extension_Float32_160_f32 const& __this ) -> const bool;
	#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsNormal(__extension_Float32_160_f32 const& __this ) -> const bool;
	#line 186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsOddInteger(__extension_Float32_160_f32 const& __this ) -> const bool;
	#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsPositive(__extension_Float32_160_f32 const& __this ) -> const bool;
	#line 188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsPositiveInfinity(__extension_Float32_160_f32 const& __this ) -> const bool;
	#line 189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsRealNumber(__extension_Float32_160_f32 const& __this ) -> const bool;
	#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsSubnormal(__extension_Float32_160_f32 const& __this ) -> const bool;
	#line 195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsZero(__extension_Float32_160_f32 const& __this ) -> const bool;
	#line 160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f32, INumberBase, INumberBase, f32);
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
#line 295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	using __extension_Float32_295_f32 = Builtin::f32;
	#line 295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE(ISignedNumber, ISignedNumber);
	#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getMinusOne; template<> struct __static_getMinusOne<__extension_Float32_295_f32> { static inline constexpr auto get() -> const __extension_Float32_295_f32; };
	#line 295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f32, ISignedNumber, ISignedNumber, f32);
	} namespace System{
using __extensions::__static_getMinusOne;

		} namespace __extensions { using namespace System;
#line 299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	using __extension_Float32_299_f32 = Builtin::f32;
	#line 299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE(INumber, INumber);
	#line 307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto CopySign(__extension_Float32_299_f32 const& __this LIFETIMEBOUND, __extension_Float32_299_f32 sign) noexcept -> const typename __extension_Float32_299_f32;
	#line 319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto Max(__extension_Float32_299_f32 const& __this LIFETIMEBOUND, __extension_Float32_299_f32 rhs) noexcept -> const typename __extension_Float32_299_f32;
	#line 329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto MaxNumber(__extension_Float32_299_f32 const& __this LIFETIMEBOUND, __extension_Float32_299_f32 rhs) noexcept -> const typename __extension_Float32_299_f32;
	#line 339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto Min(__extension_Float32_299_f32 const& __this LIFETIMEBOUND, __extension_Float32_299_f32 rhs) noexcept -> const typename __extension_Float32_299_f32;
	#line 349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto MinNumber(__extension_Float32_299_f32 const& __this LIFETIMEBOUND, __extension_Float32_299_f32 rhs) noexcept -> const typename __extension_Float32_299_f32;
	#line 359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto Clamp(__extension_Float32_299_f32 const& __this LIFETIMEBOUND, __extension_Float32_299_f32 min, __extension_Float32_299_f32 max)  -> const typename __extension_Float32_299_f32;
	#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getSign(__extension_Float32_299_f32 const& __this ) -> const Builtin::i32;
	#line 299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f32, INumber, INumber, f32);
	} namespace System{
using __extensions::CopySign;
using __extensions::Max;
using __extensions::MaxNumber;
using __extensions::Min;
using __extensions::MinNumber;
using __extensions::Clamp;
using __extensions::getSign;

		} namespace __extensions { using namespace System;
#line 402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	using __extension_Float32_402_f32 = Builtin::f32;
	#line 402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE(IBinaryNumber, IBinaryNumber);
	#line 442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto Log(__extension_Float32_402_f32 const& __this LIFETIMEBOUND, __extension_Float32_402_f32 base) noexcept -> const typename __extension_Float32_402_f32;
	#line 463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto Midpoint(__extension_Float32_402_f32 const& __this LIFETIMEBOUND, __extension_Float32_402_f32 rhs) noexcept -> const typename __extension_Float32_402_f32;
	#line 479 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto IsMultipleOf(__extension_Float32_402_f32 const& __this LIFETIMEBOUND, __extension_Float32_402_f32 rhs) noexcept -> const bool;
	#line 404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getAllBitsSet; template<> struct __static_getAllBitsSet<__extension_Float32_402_f32> { static inline constexpr auto get() -> const __extension_Float32_402_f32; };
	#line 407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsPow2(__extension_Float32_402_f32 const& __this ) -> const bool;
	#line 433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getLog2(__extension_Float32_402_f32 const& __this ) -> const __extension_Float32_402_f32;
	#line 437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getLog10(__extension_Float32_402_f32 const& __this ) -> const __extension_Float32_402_f32;
	#line 402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f32, IBinaryNumber, IBinaryNumber, f32);
	} namespace System{
using __extensions::Log;
using __extensions::Midpoint;
using __extensions::IsMultipleOf;
using __extensions::__static_getAllBitsSet;
using __extensions::getIsPow2;
using __extensions::getLog2;
using __extensions::getLog10;

		} namespace __extensions { using namespace System;
#line 493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	using __extension_Float32_493_f32 = Builtin::f32;
	#line 493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE(IFloatingPointConstants, IFloatingPointConstants);
	#line 495 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getPi; template<> struct __static_getPi<__extension_Float32_493_f32> { static inline constexpr auto get() -> const __extension_Float32_493_f32; };
	#line 496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getE; template<> struct __static_getE<__extension_Float32_493_f32> { static inline constexpr auto get() -> const __extension_Float32_493_f32; };
	#line 497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getTau; template<> struct __static_getTau<__extension_Float32_493_f32> { static inline constexpr auto get() -> const __extension_Float32_493_f32; };
	#line 493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f32, IFloatingPointConstants, IFloatingPointConstants, f32);
	} namespace System{
using __extensions::__static_getPi;
using __extensions::__static_getE;
using __extensions::__static_getTau;

		} namespace __extensions { using namespace System;
#line 500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	using __extension_Float32_500_f32 = Builtin::f32;
	#line 500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE(IFloatingPoint, IFloatingPoint);
	#line 518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto CeilToInt32(__extension_Float32_500_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto CeilToInt64(__extension_Float32_500_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i64;
	#line 520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto CeilToInt128(__extension_Float32_500_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i128;
	#line 535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto FloorToInt32(__extension_Float32_500_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto FloorToInt64(__extension_Float32_500_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i64;
	#line 537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto FloorToInt128(__extension_Float32_500_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i128;
	#line 551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto TruncateToInt32(__extension_Float32_500_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto TruncateToInt64(__extension_Float32_500_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i64;
	#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto TruncateToInt128(__extension_Float32_500_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i128;
	#line 567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto RoundToInt32(__extension_Float32_500_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto RoundToInt64(__extension_Float32_500_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i64;
	#line 569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto RoundToInt128(__extension_Float32_500_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i128;
	#line 617 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto RoundTiesEvenToInt32(__extension_Float32_500_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 618 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto RoundTiesEvenToInt64(__extension_Float32_500_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i64;
	#line 619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto RoundTiesEvenToInt128(__extension_Float32_500_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i128;
	#line 621 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto Round(__extension_Float32_500_f32 const& __this LIFETIMEBOUND, Builtin::u32 digits)  -> const typename __extension_Float32_500_f32;
	#line 622 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto Round(__extension_Float32_500_f32 const& __this LIFETIMEBOUND, MidpointRounding rounding)  -> const typename __extension_Float32_500_f32;
	#line 634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto Round(__extension_Float32_500_f32 const& __this LIFETIMEBOUND, Builtin::u32 digits, MidpointRounding rounding)  -> const typename __extension_Float32_500_f32;
	#line 503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getFractionalPart(__extension_Float32_500_f32 const& __this ) -> const __extension_Float32_500_f32;
	#line 508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getCeil(__extension_Float32_500_f32 const& __this ) -> const __extension_Float32_500_f32;
	#line 525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getFloor(__extension_Float32_500_f32 const& __this ) -> const __extension_Float32_500_f32;
	#line 542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getTruncate(__extension_Float32_500_f32 const& __this ) -> const __extension_Float32_500_f32;
	#line 558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getRound(__extension_Float32_500_f32 const& __this ) -> const __extension_Float32_500_f32;
	#line 574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getRoundTiesEven(__extension_Float32_500_f32 const& __this ) -> const __extension_Float32_500_f32;
	#line 665 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getExponentByteCount(__extension_Float32_500_f32 const& __this ) -> const Builtin::u32;
	#line 666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getExponentShortestBitLength(__extension_Float32_500_f32 const& __this ) -> const Builtin::u32;
	#line 675 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getSignificandBitLength(__extension_Float32_500_f32 const& __this ) -> const Builtin::u32;
	#line 676 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getSignificandByteCount(__extension_Float32_500_f32 const& __this ) -> const Builtin::u32;
	#line 500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f32, IFloatingPoint, IFloatingPoint, f32);
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
#line 680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	using __extension_Float32_680_f32 = Builtin::f32;
	#line 680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE(IPowerArithmetic, IPowerArithmetic);
	#line 681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto _operator_mul_mul(__extension_Float32_680_f32 const& __this LIFETIMEBOUND, __extension_Float32_680_f32 exp) noexcept -> const typename __extension_Float32_680_f32;
	#line 682 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto _operator_mul_mul_eq(__extension_Float32_680_f32 & __this , __extension_Float32_680_f32 exp) noexcept -> typename __extension_Float32_680_f32&;
	#line 680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f32, IPowerArithmetic, IPowerArithmetic, f32);
	} namespace System{
using __extensions::_operator_mul_mul;
using __extensions::_operator_mul_mul_eq;

		} namespace __extensions { using namespace System;
#line 685 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	using __extension_Float32_685_f32 = Builtin::f32;
	#line 685 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE(IExponentialFunctions, IExponentialFunctions);
	#line 687 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getExp(__extension_Float32_685_f32 const& __this ) -> const __extension_Float32_685_f32;
	#line 689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getExp2(__extension_Float32_685_f32 const& __this ) -> const __extension_Float32_685_f32;
	#line 691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getExp10(__extension_Float32_685_f32 const& __this ) -> const __extension_Float32_685_f32;
	#line 693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getExpM1(__extension_Float32_685_f32 const& __this ) -> const __extension_Float32_685_f32;
	#line 695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getExp2M1(__extension_Float32_685_f32 const& __this ) -> const __extension_Float32_685_f32;
	#line 697 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getExp10M1(__extension_Float32_685_f32 const& __this ) -> const __extension_Float32_685_f32;
	#line 685 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f32, IExponentialFunctions, IExponentialFunctions, f32);
	} namespace System{
using __extensions::getExp;
using __extensions::getExp2;
using __extensions::getExp10;
using __extensions::getExpM1;
using __extensions::getExp2M1;
using __extensions::getExp10M1;

		} namespace __extensions { using namespace System;
#line 700 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	using __extension_Float32_700_f32 = Builtin::f32;
	#line 700 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE(ILogarithmicFunctions, ILogarithmicFunctions);
	#line 702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getLn(__extension_Float32_700_f32 const& __this ) -> const __extension_Float32_700_f32;
	#line 704 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getLnP1(__extension_Float32_700_f32 const& __this ) -> const __extension_Float32_700_f32;
	#line 706 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getLog2P1(__extension_Float32_700_f32 const& __this ) -> const __extension_Float32_700_f32;
	#line 708 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getLog10P1(__extension_Float32_700_f32 const& __this ) -> const __extension_Float32_700_f32;
	#line 700 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f32, ILogarithmicFunctions, ILogarithmicFunctions, f32);
	} namespace System{
using __extensions::getLn;
using __extensions::getLnP1;
using __extensions::getLog2P1;
using __extensions::getLog10P1;

		} namespace __extensions { using namespace System;
#line 711 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	using __extension_Float32_711_f32 = Builtin::f32;
	#line 711 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE(IRootFunctions, IRootFunctions);
	#line 717 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ASTRUMSTD_API auto Root(__extension_Float32_711_f32 const& __this LIFETIMEBOUND, Builtin::i32 n)  -> const typename __extension_Float32_711_f32;
	#line 790 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ASTRUMSTD_API auto Hypot(__extension_Float32_711_f32 const& __this LIFETIMEBOUND, __extension_Float32_711_f32 y)  -> const typename __extension_Float32_711_f32;
	#line 713 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getSqrt(__extension_Float32_711_f32 const& __this ) -> const __extension_Float32_711_f32;
	#line 715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getCbrt(__extension_Float32_711_f32 const& __this ) -> const __extension_Float32_711_f32;
	#line 711 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f32, IRootFunctions, IRootFunctions, f32);
	} namespace System{
using __extensions::Root;
using __extensions::Hypot;
using __extensions::getSqrt;
using __extensions::getCbrt;

		} namespace __extensions { using namespace System;
#line 819 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	using __extension_Float32_819_f32 = Builtin::f32;
	#line 819 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE(ITrigonometricFunctions, ITrigonometricFunctions);
	#line 1060 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToRadians(__extension_Float32_819_f32 const& __this LIFETIMEBOUND) noexcept -> const typename __extension_Float32_819_f32;
	#line 1062 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToDegrees(__extension_Float32_819_f32 const& __this LIFETIMEBOUND) noexcept -> const typename __extension_Float32_819_f32;
	#line 821 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getSin(__extension_Float32_819_f32 const& __this ) -> const __extension_Float32_819_f32;
	#line 823 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getCos(__extension_Float32_819_f32 const& __this ) -> const __extension_Float32_819_f32;
	#line 825 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getTan(__extension_Float32_819_f32 const& __this ) -> const __extension_Float32_819_f32;
	#line 827 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getCot(__extension_Float32_819_f32 const& __this ) -> const __extension_Float32_819_f32;
	#line 829 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getSec(__extension_Float32_819_f32 const& __this ) -> const __extension_Float32_819_f32;
	#line 831 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getCsc(__extension_Float32_819_f32 const& __this ) -> const __extension_Float32_819_f32;
	#line 833 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAsin(__extension_Float32_819_f32 const& __this ) -> const __extension_Float32_819_f32;
	#line 835 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAcos(__extension_Float32_819_f32 const& __this ) -> const __extension_Float32_819_f32;
	#line 837 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAtan(__extension_Float32_819_f32 const& __this ) -> const __extension_Float32_819_f32;
	#line 839 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAcot(__extension_Float32_819_f32 const& __this ) -> const __extension_Float32_819_f32;
	#line 841 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAsec(__extension_Float32_819_f32 const& __this ) -> const __extension_Float32_819_f32;
	#line 843 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAcsc(__extension_Float32_819_f32 const& __this ) -> const __extension_Float32_819_f32;
	#line 845 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getSinCos(__extension_Float32_819_f32 const& __this ) -> const std::tuple<__extension_Float32_819_f32, __extension_Float32_819_f32>;
	#line 847 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ASTRUMSTD_API auto getSinPi(__extension_Float32_819_f32 const& __this ) -> const __extension_Float32_819_f32;
	#line 885 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ASTRUMSTD_API auto getCosPi(__extension_Float32_819_f32 const& __this ) -> const __extension_Float32_819_f32;
	#line 925 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ASTRUMSTD_API auto getSinCosPi(__extension_Float32_819_f32 const& __this ) -> const std::tuple<__extension_Float32_819_f32, __extension_Float32_819_f32>;
	#line 998 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ASTRUMSTD_API auto getTanPi(__extension_Float32_819_f32 const& __this ) -> const __extension_Float32_819_f32;
	#line 1041 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getCotPi(__extension_Float32_819_f32 const& __this ) -> const __extension_Float32_819_f32;
	#line 1043 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getSecPi(__extension_Float32_819_f32 const& __this ) -> const __extension_Float32_819_f32;
	#line 1045 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getCscPi(__extension_Float32_819_f32 const& __this ) -> const __extension_Float32_819_f32;
	#line 1047 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAsinPi(__extension_Float32_819_f32 const& __this ) -> const __extension_Float32_819_f32;
	#line 1049 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAcosPi(__extension_Float32_819_f32 const& __this ) -> const __extension_Float32_819_f32;
	#line 1051 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAtanPi(__extension_Float32_819_f32 const& __this ) -> const __extension_Float32_819_f32;
	#line 1053 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAcotPi(__extension_Float32_819_f32 const& __this ) -> const __extension_Float32_819_f32;
	#line 1055 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAsecPi(__extension_Float32_819_f32 const& __this ) -> const __extension_Float32_819_f32;
	#line 1057 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAcscPi(__extension_Float32_819_f32 const& __this ) -> const __extension_Float32_819_f32;
	#line 819 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f32, ITrigonometricFunctions, ITrigonometricFunctions, f32);
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
#line 1065 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	using __extension_Float32_1065_f32 = Builtin::f32;
	#line 1065 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE(IHyperbolicFunctions, IHyperbolicFunctions);
	#line 1067 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAcosh(__extension_Float32_1065_f32 const& __this ) -> const __extension_Float32_1065_f32;
	#line 1069 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAcoth(__extension_Float32_1065_f32 const& __this ) -> const __extension_Float32_1065_f32;
	#line 1071 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAcsch(__extension_Float32_1065_f32 const& __this ) -> const __extension_Float32_1065_f32;
	#line 1073 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAsech(__extension_Float32_1065_f32 const& __this ) -> const __extension_Float32_1065_f32;
	#line 1075 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAsinh(__extension_Float32_1065_f32 const& __this ) -> const __extension_Float32_1065_f32;
	#line 1077 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAtanh(__extension_Float32_1065_f32 const& __this ) -> const __extension_Float32_1065_f32;
	#line 1079 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getCosh(__extension_Float32_1065_f32 const& __this ) -> const __extension_Float32_1065_f32;
	#line 1081 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getCoth(__extension_Float32_1065_f32 const& __this ) -> const __extension_Float32_1065_f32;
	#line 1083 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getCsch(__extension_Float32_1065_f32 const& __this ) -> const __extension_Float32_1065_f32;
	#line 1085 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getSech(__extension_Float32_1065_f32 const& __this ) -> const __extension_Float32_1065_f32;
	#line 1087 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getSinh(__extension_Float32_1065_f32 const& __this ) -> const __extension_Float32_1065_f32;
	#line 1089 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getTanh(__extension_Float32_1065_f32 const& __this ) -> const __extension_Float32_1065_f32;
	#line 1065 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f32, IHyperbolicFunctions, IHyperbolicFunctions, f32);
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
#line 1092 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	using __extension_Float32_1092_f32 = Builtin::f32;
	#line 1092 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE(IBinaryFloatingPointIeee754, IBinaryFloatingPointIeee754);
	#line 1100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto Atan2(__extension_Float32_1092_f32 const& __this LIFETIMEBOUND, __extension_Float32_1092_f32 y)  -> const typename __extension_Float32_1092_f32;
	#line 1101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto Atan2Pi(__extension_Float32_1092_f32 const& __this LIFETIMEBOUND, __extension_Float32_1092_f32 y)  -> const typename __extension_Float32_1092_f32;
	#line 1190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto FusedMultiplyAdd(__extension_Float32_1092_f32 const& __this LIFETIMEBOUND, __extension_Float32_1092_f32 rhs, __extension_Float32_1092_f32 addend)  -> const typename __extension_Float32_1092_f32;
	#line 1192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto Ieee754Remainder(__extension_Float32_1092_f32 const& __this LIFETIMEBOUND, __extension_Float32_1092_f32 rhs)  -> const typename __extension_Float32_1092_f32;
	#line 1195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto Lerp(__extension_Float32_1092_f32 const& __this LIFETIMEBOUND, __extension_Float32_1092_f32 end, __extension_Float32_1092_f32 amount) noexcept -> const typename __extension_Float32_1092_f32;
	#line 1197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto ScaleB(__extension_Float32_1092_f32 const& __this LIFETIMEBOUND, Builtin::i32 n)  -> const typename __extension_Float32_1092_f32;
	#line 1093 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getEpsilon; template<> struct __static_getEpsilon<__extension_Float32_1092_f32> { static inline constexpr auto get() -> const __extension_Float32_1092_f32; };
	#line 1094 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getNegativeInfinity; template<> struct __static_getNegativeInfinity<__extension_Float32_1092_f32> { static inline constexpr auto get() -> const __extension_Float32_1092_f32; };
	#line 1095 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getPositiveInfinity; template<> struct __static_getPositiveInfinity<__extension_Float32_1092_f32> { static inline constexpr auto get() -> const __extension_Float32_1092_f32; };
	#line 1096 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getNaN; template<> struct __static_getNaN<__extension_Float32_1092_f32> { static inline constexpr auto get() -> const __extension_Float32_1092_f32; };
	#line 1097 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getNegativeZero; template<> struct __static_getNegativeZero<__extension_Float32_1092_f32> { static inline constexpr auto get() -> const __extension_Float32_1092_f32; };
	#line 1109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getBitIncrement(__extension_Float32_1092_f32 const& __this ) -> const __extension_Float32_1092_f32;
	#line 1133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getBitDecrement(__extension_Float32_1092_f32 const& __this ) -> const __extension_Float32_1092_f32;
	#line 1152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getILogB(__extension_Float32_1092_f32 const& __this ) -> const Builtin::i32;
	#line 1154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getReciprocalEstimate(__extension_Float32_1092_f32 const& __this ) -> const __extension_Float32_1092_f32;
	#line 1163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getReciprocalSqrtEstimate(__extension_Float32_1092_f32 const& __this ) -> const __extension_Float32_1092_f32;
	#line 1174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getCategory(__extension_Float32_1092_f32 const& __this ) -> const FloatingPointCategory;
	#line 1200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getGamma(__extension_Float32_1092_f32 const& __this ) -> const __extension_Float32_1092_f32;
	#line 1202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getLnGamma(__extension_Float32_1092_f32 const& __this ) -> const __extension_Float32_1092_f32;
	#line 1204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getErf(__extension_Float32_1092_f32 const& __this ) -> const __extension_Float32_1092_f32;
	#line 1206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getErfc(__extension_Float32_1092_f32 const& __this ) -> const __extension_Float32_1092_f32;
	#line 1092 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f32, IBinaryFloatingPointIeee754, IBinaryFloatingPointIeee754, f32);
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
#line 1209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	using __extension_Float32_1209_f32 = Builtin::f32;
	#line 1209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE(IBinaryFloatFormatInfo, IBinaryFloatFormatInfo);
	#line 1210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getNumberBufferLength; template<> struct __static_getNumberBufferLength<__extension_Float32_1209_f32> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getZeroBits; template<> struct __static_getZeroBits<__extension_Float32_1209_f32> { static inline constexpr auto get() -> const Builtin::u128; };
	#line 1212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getInfinityBits; template<> struct __static_getInfinityBits<__extension_Float32_1209_f32> { static inline constexpr auto get() -> const Builtin::u128; };
	#line 1213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getNormalMantissaMask; template<> struct __static_getNormalMantissaMask<__extension_Float32_1209_f32> { static inline constexpr auto get() -> const Builtin::u128; };
	#line 1214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getDenormalMantissaMask; template<> struct __static_getDenormalMantissaMask<__extension_Float32_1209_f32> { static inline constexpr auto get() -> const Builtin::u128; };
	#line 1215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getMinBinaryExponent; template<> struct __static_getMinBinaryExponent<__extension_Float32_1209_f32> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getMaxBinaryExponent; template<> struct __static_getMaxBinaryExponent<__extension_Float32_1209_f32> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getMinDecimalExponent; template<> struct __static_getMinDecimalExponent<__extension_Float32_1209_f32> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getMaxDecimalExponent; template<> struct __static_getMaxDecimalExponent<__extension_Float32_1209_f32> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getExponentBias; template<> struct __static_getExponentBias<__extension_Float32_1209_f32> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getExponentBits; template<> struct __static_getExponentBits<__extension_Float32_1209_f32> { static inline constexpr auto get() -> const Builtin::u128; };
	#line 1221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getOverflowDecimalExponent; template<> struct __static_getOverflowDecimalExponent<__extension_Float32_1209_f32> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getInfinityExponent; template<> struct __static_getInfinityExponent<__extension_Float32_1209_f32> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getNormalMantissaBits; template<> struct __static_getNormalMantissaBits<__extension_Float32_1209_f32> { static inline constexpr auto get() -> const Builtin::u16; };
	#line 1224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getDenormalMantissaBits; template<> struct __static_getDenormalMantissaBits<__extension_Float32_1209_f32> { static inline constexpr auto get() -> const Builtin::u16; };
	#line 1225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getMinFastFloatDecimalExponent; template<> struct __static_getMinFastFloatDecimalExponent<__extension_Float32_1209_f32> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getMaxFastFloatDecimalExponent; template<> struct __static_getMaxFastFloatDecimalExponent<__extension_Float32_1209_f32> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getMinExponentRoundToEven; template<> struct __static_getMinExponentRoundToEven<__extension_Float32_1209_f32> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getMaxExponentRoundToEven; template<> struct __static_getMaxExponentRoundToEven<__extension_Float32_1209_f32> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getMaxExponentFastPath; template<> struct __static_getMaxExponentFastPath<__extension_Float32_1209_f32> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getMaxMantissaFastPath; template<> struct __static_getMaxMantissaFastPath<__extension_Float32_1209_f32> { static inline constexpr auto get() -> const Builtin::u128; };
	#line 1209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f32, IBinaryFloatFormatInfo, IBinaryFloatFormatInfo, f32);
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
#line 393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	namespace __Float32_Protected { inline constexpr auto BiasedExponent(Builtin::f32 value) noexcept -> const Builtin::u8; }
#line 394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	namespace __Float32_Protected { inline constexpr auto Exponent(Builtin::f32 value) noexcept -> const Builtin::i8; }
#line 395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	namespace __Float32_Protected { inline constexpr auto Significand(Builtin::f32 value) noexcept -> const Builtin::u32; }
#line 396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	namespace __Float32_Protected { inline constexpr auto TrailingSignificand(Builtin::f32 value) noexcept -> const Builtin::u32; }
#line 398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	namespace __Float32_Protected { inline constexpr auto ExtractBiasedExponentFromBits(Builtin::u32 bits) noexcept -> const Builtin::u8; }
#line 399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	namespace __Float32_Protected { inline constexpr auto ExtractTrailingSignificandFromBits(Builtin::u32 bits) noexcept -> const Builtin::u32; }
//###############################################################################
//# Global compile-time constants
//###############################################################################
#line 370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
namespace __Float32_Protected { inline constexpr auto SignMask = Builtin::u32(0x80000000U); }
#line 371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
namespace __Float32_Protected { inline constexpr auto SignShift = Builtin::u32(31U); }
#line 372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
namespace __Float32_Protected { inline constexpr Builtin::u8 ShiftedSignMask = Builtin::u8{__Float32_Protected::SignMask >> __Float32_Protected::SignShift}; }
#line 374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
namespace __Float32_Protected { inline constexpr auto BiasedExponentMask = Builtin::u32(0x7F800000U); }
#line 375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
namespace __Float32_Protected { inline constexpr auto BiasedExponentShift = Builtin::i32(23); }
#line 376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
namespace __Float32_Protected { inline constexpr Builtin::u8 ShiftedBiasedExponentMask = Builtin::u8{__Float32_Protected::BiasedExponentMask >> __Float32_Protected::BiasedExponentShift}; }
#line 378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
namespace __Float32_Protected { inline constexpr auto TrailingSignificandMask = Builtin::u32(0x007FFFFFU); }
#line 380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
namespace __Float32_Protected { inline constexpr auto MinSign = Builtin::u8(0U); }
#line 381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
namespace __Float32_Protected { inline constexpr auto MaxSign = Builtin::u8(1U); }
#line 382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
namespace __Float32_Protected { inline constexpr auto MinBiasedExponent = ADV_USPCS(MinValue, Builtin::u8)(); }
#line 383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
namespace __Float32_Protected { inline constexpr auto MaxBiasedExponent = ADV_USPCS(MaxValue, Builtin::u8)(); }
#line 384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
namespace __Float32_Protected { inline constexpr auto ExpBias = Builtin::u8(127U); }
#line 385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
namespace __Float32_Protected { inline constexpr auto MinExponent = Builtin::i8(-126); }
#line 386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
namespace __Float32_Protected { inline constexpr auto MaxExponent = Builtin::i8(127); }
#line 387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
namespace __Float32_Protected { inline constexpr auto MinTrailingSignificand = ADV_USPCS(MinValue, Builtin::u32)(); }
#line 388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
namespace __Float32_Protected { inline constexpr auto MaxTrailingSignificand = Builtin::u32(0x007FFFFFU); }
#line 390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
namespace __Float32_Protected { inline constexpr auto TrailingSignificandLength = Builtin::u8((unsigned char)23); }
#line 391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
namespace __Float32_Protected { inline constexpr auto SignificandLength = __Float32_Protected::TrailingSignificandLength + Builtin::u8((unsigned char)1); }
//###############################################################################
//# Function definitions
//###############################################################################

namespace __Float32_Protected {
		#line 393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		inline constexpr auto BiasedExponent(Builtin::f32 value) noexcept -> const Builtin::u8
		{
			#line 393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			ADV_EXPRESSION_BODY(__Float32_Protected::ExtractBiasedExponentFromBits(ADV_UPCS(Bits)(value.__ref()))); 
		}
	}
namespace __Float32_Protected {
		#line 394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		inline constexpr auto Exponent(Builtin::f32 value) noexcept -> const Builtin::i8
		{
			#line 394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			ADV_EXPRESSION_BODY(Builtin::i8{__Float32_Protected::BiasedExponent(value) - __Float32_Protected::ExpBias}); 
		}
	}
namespace __Float32_Protected {
		#line 395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		inline constexpr auto Significand(Builtin::f32 value) noexcept -> const Builtin::u32
		{
			#line 395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			ADV_EXPRESSION_BODY(__Float32_Protected::TrailingSignificand(value) | (__Float32_Protected::BiasedExponent(value) != Builtin::i32(0) ? (Builtin::u32(1U) << __Float32_Protected::BiasedExponentShift) : Builtin::u32(0U))); 
		}
	}
namespace __Float32_Protected {
		#line 396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		inline constexpr auto TrailingSignificand(Builtin::f32 value) noexcept -> const Builtin::u32
		{
			#line 396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			ADV_EXPRESSION_BODY(__Float32_Protected::ExtractTrailingSignificandFromBits(ADV_UPCS(Bits)(value.__ref()))); 
		}
	}
namespace __Float32_Protected {
		#line 398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		inline constexpr auto ExtractBiasedExponentFromBits(Builtin::u32 bits) noexcept -> const Builtin::u8
		{
			#line 398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			ADV_EXPRESSION_BODY(Builtin::u8{(bits >> __Float32_Protected::BiasedExponentShift) & __Float32_Protected::ShiftedBiasedExponentMask}); 
		}
	}
namespace __Float32_Protected {
		#line 399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		inline constexpr auto ExtractTrailingSignificandFromBits(Builtin::u32 bits) noexcept -> const Builtin::u32
		{
			#line 399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			ADV_EXPRESSION_BODY(bits & __Float32_Protected::TrailingSignificandMask); 
		}
	}
} namespace __extensions { using namespace System;
#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getMinValue<__extension_Float32_13_f32>::get() -> const __extension_Float32_1209_f32
	{
		#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32(-3.402823466e+38f)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getMaxValue<__extension_Float32_13_f32>::get() -> const __extension_Float32_1209_f32
	{
		#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(+Builtin::f32(3.402823466e+38f)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	
} namespace __extensions { using namespace System;
#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto operator<=>(__extension_Float32_18_f32 const& __this LIFETIMEBOUND, Builtin::Nullable<__extension_Float32_1209_f32> rhs) noexcept -> const Builtin::i32
	{
		#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		{
			#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			if ((!Builtin::Is(rhs, nullptr))) {
				#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				auto __tmp0 = *rhs; const auto& rhs = __tmp0;
				
				#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				return __this <=> rhs;
			}
		}
		#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return Builtin::i32(1);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_FromBits<__extension_Float32_18_f32>::get(Builtin::u32 bits)  -> const typename __extension_Float32_18_f32
	{
		#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::BitCast<__extension_Float32_1209_f32>(bits)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getBits(__extension_Float32_18_f32 const& __this ) -> const Builtin::u32
	{
		#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::BitCast<Builtin::u32>(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getBitWidth<__extension_Float32_18_f32>::get() -> const Builtin::u32
	{
		#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(32U)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getMinPositiveValue<__extension_Float32_18_f32>::get() -> const __extension_Float32_1209_f32
	{
		#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32(1.17549435e-38f)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getHashCode(__extension_Float32_18_f32 const& __this ) -> const Builtin::u64
	{
		#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		auto bits = ADV_UPCS(Bits)(__this.__ref()); 
		#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if ((((bits - Builtin::u32(1U)) & Builtin::u32(0x7FFFFFFFU)) <=> Builtin::u32(0x7F800000U)) >= 0) {
			#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			bits &= Builtin::u32(0x7F800000U);
		}
		#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return bits;
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	
} namespace __extensions { using namespace System;
#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToBoolean(__extension_Float32_75_f32 const& __this LIFETIMEBOUND) noexcept -> const bool
	{
		#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(__this != Builtin::i32(0)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToInt8(__extension_Float32_75_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i8
	{
		#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i8>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToUInt8(__extension_Float32_75_f32 const& __this LIFETIMEBOUND)  -> const Builtin::u8
	{
		#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u8>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToInt16(__extension_Float32_75_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i16
	{
		#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i16>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToUInt16(__extension_Float32_75_f32 const& __this LIFETIMEBOUND)  -> const Builtin::u16
	{
		#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u16>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToInt32(__extension_Float32_75_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i32>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToUInt32(__extension_Float32_75_f32 const& __this LIFETIMEBOUND)  -> const Builtin::u32
	{
		#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u32>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToInt64(__extension_Float32_75_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i64
	{
		#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i64>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 84 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToUInt64(__extension_Float32_75_f32 const& __this LIFETIMEBOUND)  -> const Builtin::u64
	{
		#line 84 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u64>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 85 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToInt128(__extension_Float32_75_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i128
	{
		#line 85 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i128>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 86 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToUInt128(__extension_Float32_75_f32 const& __this LIFETIMEBOUND)  -> const Builtin::u128
	{
		#line 86 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u128>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToIsize(__extension_Float32_75_f32 const& __this LIFETIMEBOUND)  -> const Builtin::isize
	{
		#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::isize>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToUsize(__extension_Float32_75_f32 const& __this LIFETIMEBOUND)  -> const Builtin::usize
	{
		#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::usize>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToFloat32(__extension_Float32_75_f32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::f32
	{
		#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToFloat64(__extension_Float32_75_f32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::f64
	{
		#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToByte(__extension_Float32_75_f32 const& __this LIFETIMEBOUND)  -> const Builtin::char8
	{
		#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u8>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToChar(__extension_Float32_75_f32 const& __this LIFETIMEBOUND)  -> const Builtin::char16
	{
		#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u16>(__this)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	
} namespace __extensions { using namespace System;
#line 99 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class T> inline constexpr auto _operator_div_mod(__extension_Float32_97_f32 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_Float32_1209_f32, __extension_Float32_1209_f32>
	{
		#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return std::make_tuple(__this / Builtin::f32{rhs}, __this % Builtin::f32{rhs});
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class T> inline constexpr auto _operator_div_not(__extension_Float32_97_f32 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Float32_97_f32
	{
		#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Round)((__this / rhs).__ref())); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto _operator_div_not_eq(__extension_Float32_97_f32 & __this , auto rhs)  -> typename __extension_Float32_97_f32&
	{
		#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_div_not)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class T> inline constexpr auto _operator_div_lt(__extension_Float32_97_f32 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Float32_97_f32
	{
		#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Floor)((__this / rhs).__ref())); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto _operator_div_lt_eq(__extension_Float32_97_f32 & __this , auto rhs)  -> typename __extension_Float32_97_f32&
	{
		#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_div_lt)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class T> inline constexpr auto _operator_div_gt(__extension_Float32_97_f32 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Float32_97_f32
	{
		#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Ceil)((__this / rhs).__ref())); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto _operator_div_gt_eq(__extension_Float32_97_f32 & __this , auto rhs)  -> typename __extension_Float32_97_f32&
	{
		#line 115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_div_gt)(__this, rhs)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	
} namespace __extensions { using namespace System;
#line 121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto _operator_xor_xor(__extension_Float32_119_f32 const& __this LIFETIMEBOUND, Builtin::i32 exp)  -> const typename __extension_Float32_119_f32
	{
		#line 123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return Builtin::f32(1.0f);
		}
		#line 128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if ((exp <=> Builtin::i32(0)) < 0) {
			#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return Builtin::f32(1.0f) / ADV_UFCS(_operator_xor_xor)(__this, (-exp));
		}
		#line 132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		auto base = __this; 
		#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		auto result = Builtin::f32(1.0f); 
		#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (std::is_constant_evaluated()) {
			#line 136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			while ((exp <=> Builtin::i32(1)) > 0) 
			{
				#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
					#line 138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					result *= base;
				}
				#line 140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				ADV_UFCS(_operator_bsl_eq)(exp, Builtin::i32(2));
				#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				base *= base;
			}
			#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return result * base;
		} else {
			#line 144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			{
				#line 145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				for (;;) 
				{
					#line 146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
						#line 147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						result *= base;
						#line 148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						if (exp == Builtin::i32(1)) {
							#line 149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							return result;
						}
					}
					#line 151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					ADV_UFCS(_operator_bsl_eq)(exp, Builtin::i32(2));
					#line 152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					base *= base;
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto _operator_xor_xor_eq(__extension_Float32_119_f32 & __this , Builtin::i32 exp)  -> typename __extension_Float32_119_f32&
	{
		#line 157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_xor_xor)(__this, exp)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	
} namespace __extensions { using namespace System;
#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto MaxMagnitude(__extension_Float32_160_f32 const& __this LIFETIMEBOUND, __extension_Float32_1209_f32 rhs) noexcept -> const typename __extension_Float32_160_f32
	{
		#line 199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		auto ax = ADV_UPCS(Abs)(__this.__ref()); 
		#line 200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		auto ay = ADV_UPCS(Abs)(rhs.__ref()); 
		#line 202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if ((ax <=> ay) > 0 || ADV_UPCS(IsNaN)(ax.__ref())) {
			#line 204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return __this;
		}
		#line 207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (ax == ay) {
			#line 209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return ADV_UPCS(IsNegative)(__this.__ref()) ? rhs : __this;
		}
		#line 212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return rhs;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto MaxMagnitudeNumber(__extension_Float32_160_f32 const& __this LIFETIMEBOUND, __extension_Float32_1209_f32 rhs) noexcept -> const typename __extension_Float32_160_f32
	{
		#line 217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		auto ax = ADV_UPCS(Abs)(__this.__ref()); 
		#line 218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		auto ay = ADV_UPCS(Abs)(rhs.__ref()); 
		#line 220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if ((ax <=> ay) > 0 || ADV_UPCS(IsNaN)(ay.__ref())) {
			#line 222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return __this;
		}
		#line 225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (ax == ay) {
			#line 227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return ADV_UPCS(IsNegative)(__this.__ref()) ? rhs : __this;
		}
		#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return rhs;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto MinMagnitude(__extension_Float32_160_f32 const& __this LIFETIMEBOUND, __extension_Float32_1209_f32 rhs) noexcept -> const typename __extension_Float32_160_f32
	{
		#line 235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		auto ax = ADV_UPCS(Abs)(__this.__ref()); 
		#line 236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		auto ay = ADV_UPCS(Abs)(rhs.__ref()); 
		#line 238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if ((ax <=> ay) < 0 || ADV_UPCS(IsNaN)(ax.__ref())) {
			#line 240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return __this;
		}
		#line 243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (ax == ay) {
			#line 245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return ADV_UPCS(IsNegative)(__this.__ref()) ? __this : rhs;
		}
		#line 248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return rhs;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto MinMagnitudeNumber(__extension_Float32_160_f32 const& __this LIFETIMEBOUND, __extension_Float32_1209_f32 rhs) noexcept -> const typename __extension_Float32_160_f32
	{
		#line 253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		auto ax = ADV_UPCS(Abs)(__this.__ref()); 
		#line 254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		auto ay = ADV_UPCS(Abs)(rhs.__ref()); 
		#line 256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if ((ax <=> ay) < 0 || ADV_UPCS(IsNaN)(ay.__ref())) {
			#line 258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return __this;
		}
		#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (ax == ay) {
			#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return ADV_UPCS(IsNegative)(__this.__ref()) ? __this : rhs;
		}
		#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return rhs;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToInt8(__extension_Float32_160_f32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i8
	{
		#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i8>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToUInt8(__extension_Float32_160_f32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u8
	{
		#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u8>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToInt16(__extension_Float32_160_f32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i16
	{
		#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i16>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToUInt16(__extension_Float32_160_f32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u16
	{
		#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u16>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToInt32(__extension_Float32_160_f32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i32
	{
		#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i32>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToUInt32(__extension_Float32_160_f32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u32
	{
		#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u32>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToInt64(__extension_Float32_160_f32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i64
	{
		#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i64>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToUInt64(__extension_Float32_160_f32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u64
	{
		#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u64>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToInt128(__extension_Float32_160_f32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i128
	{
		#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i128>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToUInt128(__extension_Float32_160_f32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u128
	{
		#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u128>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToIsize(__extension_Float32_160_f32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::isize
	{
		#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::isize>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToUsize(__extension_Float32_160_f32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::usize
	{
		#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::usize>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getOne<__extension_Float32_160_f32>::get() -> const __extension_Float32_1209_f32
	{
		#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32(1.0f)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getZero<__extension_Float32_160_f32>::get() -> const __extension_Float32_1209_f32
	{
		#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32(0.0f)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getRadix<__extension_Float32_160_f32>::get() -> const Builtin::i32
	{
		#line 163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(2)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getAbs(__extension_Float32_160_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		constexpr auto mask = Builtin::u32(0x7FFFFFFFU);
		#line 168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		Builtin::u32 raw = ADV_UPCS(Bits)(__this.__ref()); 
		#line 169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return ADV_USFCS((Builtin::f32), FromBits)(raw & mask);
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsCanonical(__extension_Float32_160_f32 const& __this ) -> const bool
	{
		#line 171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsComplexNumber(__extension_Float32_160_f32 const& __this ) -> const bool
	{
		#line 172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsEvenInteger(__extension_Float32_160_f32 const& __this ) -> const bool
	{
		#line 173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsInteger)(__this.__ref()) && (ADV_UPCS(Abs)((__this % Builtin::i32(2)).__ref()) == Builtin::i32(0))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsFinite(__extension_Float32_160_f32 const& __this ) -> const bool
	{
		#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(((ADV_UPCS(Bits)(__this.__ref()) & Builtin::u32(0x7FFFFFFFU)) <=> Builtin::u32(0x7F800000U)) < 0); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsImaginaryNumber(__extension_Float32_160_f32 const& __this ) -> const bool
	{
		#line 175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsInfinity(__extension_Float32_160_f32 const& __this ) -> const bool
	{
		#line 176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY((ADV_UPCS(Bits)(__this.__ref()) & Builtin::u32(0x7FFFFFFFU)) == Builtin::u32(0x7F800000U)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsInteger(__extension_Float32_160_f32 const& __this ) -> const bool
	{
		#line 177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsFinite)(__this.__ref()) && (__this == ADV_UPCS(Truncate)(__this.__ref()))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsNaN(__extension_Float32_160_f32 const& __this ) -> const bool
	{
		#line 178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(__this != __this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsNegative(__extension_Float32_160_f32 const& __this ) -> const bool
	{
		#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY((Builtin::BitCast<Builtin::i32>(__this) <=> Builtin::i32(0)) < 0); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsNegativeInfinity(__extension_Float32_160_f32 const& __this ) -> const bool
	{
		#line 180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(__this == ADV_USPCS(NegativeInfinity, __extension_Float32_1209_f32)()); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsNormal(__extension_Float32_160_f32 const& __this ) -> const bool
	{
		#line 183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		auto bits = Builtin::BitCast<Builtin::u32>(__this) & Builtin::u32(0x7FFFFFFFU); 
		#line 184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return ((bits <=> Builtin::u32(0x7F800000U)) < 0) && (bits != Builtin::i32(0)) && ((bits & Builtin::i32(0x7F800000)) != Builtin::i32(0));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsOddInteger(__extension_Float32_160_f32 const& __this ) -> const bool
	{
		#line 186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsInteger)(__this.__ref()) && (ADV_UPCS(Abs)((__this % Builtin::i32(2)).__ref()) == Builtin::i32(1))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsPositive(__extension_Float32_160_f32 const& __this ) -> const bool
	{
		#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY((Builtin::BitCast<Builtin::i32>(__this) <=> Builtin::i32(0)) >= 0); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsPositiveInfinity(__extension_Float32_160_f32 const& __this ) -> const bool
	{
		#line 188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(__this == ADV_USPCS(PositiveInfinity, __extension_Float32_1209_f32)()); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsRealNumber(__extension_Float32_160_f32 const& __this ) -> const bool
	{
		#line 189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(__this == __this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsSubnormal(__extension_Float32_160_f32 const& __this ) -> const bool
	{
		#line 192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		auto bits = ADV_UPCS(Bits)(__this.__ref()) & Builtin::u32(0x7FFFFFFFU); 
		#line 193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return ((bits <=> Builtin::u32(0x7F800000U)) < 0) && (bits != Builtin::i32(0)) && ((bits & Builtin::i32(0x7F800000)) == Builtin::i32(0));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsZero(__extension_Float32_160_f32 const& __this ) -> const bool
	{
		#line 195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(__this == ADV_USPCS(Zero, __extension_Float32_1209_f32)()); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	
} namespace __extensions { using namespace System;
#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getMinusOne<__extension_Float32_295_f32>::get() -> const __extension_Float32_1209_f32
	{
		#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32(-1.0f)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	
} namespace __extensions { using namespace System;
#line 307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto CopySign(__extension_Float32_299_f32 const& __this LIFETIMEBOUND, __extension_Float32_1209_f32 sign) noexcept -> const typename __extension_Float32_299_f32
	{
		#line 309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (std::is_constant_evaluated()) {
			#line 310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			if ((sign <=> Builtin::i32(0)) < 0 || (sign == Builtin::i32(0) && (Builtin::f32(1.0f) / sign <=> Builtin::i32(0)) < 0)) {
				#line 311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				return (__this <=> Builtin::i32(0)) < 0 ? __this : -__this;
			}
			#line 313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return (__this <=> Builtin::i32(0)) < 0 ? -__this : __this;
		} else {
			#line 314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			{
				#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				return std::copysignf(__this, sign);
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto Max(__extension_Float32_299_f32 const& __this LIFETIMEBOUND, __extension_Float32_1209_f32 rhs) noexcept -> const typename __extension_Float32_299_f32
	{
		#line 321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (__this != rhs) {
			#line 322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			if (!ADV_UPCS(IsNaN)(__this.__ref())) {
				#line 323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				return (rhs <=> __this) < 0 ? __this : rhs;
			}
			#line 325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return __this;
		}
		#line 327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return ADV_UPCS(IsNegative)(rhs.__ref()) ? __this : rhs;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto MaxNumber(__extension_Float32_299_f32 const& __this LIFETIMEBOUND, __extension_Float32_1209_f32 rhs) noexcept -> const typename __extension_Float32_299_f32
	{
		#line 331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (__this != rhs) {
			#line 332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			if (!ADV_UPCS(IsNaN)(rhs.__ref())) {
				#line 333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				return (rhs <=> __this) < 0 ? __this : rhs;
			}
			#line 335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return __this;
		}
		#line 337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return ADV_UPCS(IsNegative)(rhs.__ref()) ? __this : rhs;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto Min(__extension_Float32_299_f32 const& __this LIFETIMEBOUND, __extension_Float32_1209_f32 rhs) noexcept -> const typename __extension_Float32_299_f32
	{
		#line 341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (__this != rhs) {
			#line 342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			if (!ADV_UPCS(IsNaN)(__this.__ref())) {
				#line 343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				return (__this <=> rhs) < 0 ? __this : rhs;
			}
			#line 345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return __this;
		}
		#line 347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return ADV_UPCS(IsNegative)(__this.__ref()) ? __this : rhs;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto MinNumber(__extension_Float32_299_f32 const& __this LIFETIMEBOUND, __extension_Float32_1209_f32 rhs) noexcept -> const typename __extension_Float32_299_f32
	{
		#line 351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (__this != rhs) {
			#line 352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			if (!ADV_UPCS(IsNaN)(rhs.__ref())) {
				#line 353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				return (__this <=> rhs) < 0 ? __this : rhs;
			}
			#line 355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return __this;
		}
		#line 357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return ADV_UPCS(IsNegative)(__this.__ref()) ? __this : rhs;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto Clamp(__extension_Float32_299_f32 const& __this LIFETIMEBOUND, __extension_Float32_1209_f32 min, __extension_Float32_1209_f32 max)  -> const typename __extension_Float32_299_f32
	{
		#line 361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if ((min <=> max) > 0) {
			#line 362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			Builtin::Throw(Builtin::InvalidOperationException{});
		}
		#line 365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return (__this <=> min) < 0 ? min : (__this <=> max) > 0 ? max : __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getSign(__extension_Float32_299_f32 const& __this ) -> const Builtin::i32
	{
		#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return [&]() 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
		{
			#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			auto __tmp__valid_300 = Builtin::Cast<false, std::decay_t<decltype(__this)>::__self>(__this);
			#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			if(__tmp__valid_300.IsValid() && Builtin::Is(*__tmp__valid_300, Builtin::i32(0))) {
				#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				
				return Builtin::i32(0);
			}
			else {
				#line 302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				if(__tmp__valid_300.IsValid() && Builtin::IsLess(*__tmp__valid_300, Builtin::i32(0))) {
					#line 302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					
					return Builtin::i32(-1);
				}
				else {
					#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					if(__tmp__valid_300.IsValid() && Builtin::IsGreater(*__tmp__valid_300, Builtin::i32(0))) {
						#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						
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
	
} namespace __extensions { using namespace System;
#line 442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto Log(__extension_Float32_402_f32 const& __this LIFETIMEBOUND, __extension_Float32_1209_f32 base) noexcept -> const typename __extension_Float32_402_f32
	{
		#line 444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (ADV_UPCS(IsNaN)(__this.__ref())) {
			#line 445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return __this;
		}
		#line 447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (ADV_UPCS(IsNaN)(base.__ref())) {
			#line 448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return base;
		}
		#line 451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (base == Builtin::i32(1)) {
			#line 452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return ADV_USPCS(NaN, Builtin::f32)();
		}
		#line 454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (__this != Builtin::i32(1) && (base == Builtin::i32(0) || ADV_UPCS(IsPositiveInfinity)(base.__ref()))) {
			#line 455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return ADV_USPCS(NaN, Builtin::f32)();
		}
		#line 458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return ADV_UPCS(Ln)(__this.__ref()) / ADV_UPCS(Ln)(base.__ref());
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto Midpoint(__extension_Float32_402_f32 const& __this LIFETIMEBOUND, __extension_Float32_1209_f32 rhs) noexcept -> const typename __extension_Float32_402_f32
	{
		#line 465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if constexpr (Builtin::Is64BitTarget()) {
			#line 466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return Builtin::f32{(Builtin::f64{__this} + Builtin::f64{rhs}) / Builtin::f64(2.0)};
		} else {
			#line 467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			{
				#line 468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				constexpr auto riskValue = ADV_USPCS(MaxValue, __extension_Float32_1209_f32)() / Builtin::f32(2.0f);
				#line 470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				if ((ADV_UPCS(Abs)(__this.__ref()) <=> riskValue) <= 0 && (ADV_UPCS(Abs)(rhs.__ref()) <=> riskValue) <= 0) {
					#line 471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					return (__this + rhs) / Builtin::f32(2.0f);
				} else {
					#line 472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					{
						#line 473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						return (__this / Builtin::f32(2.0f)) + (rhs / Builtin::f32(2.0f));
					}
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 479 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto IsMultipleOf(__extension_Float32_402_f32 const& __this LIFETIMEBOUND, __extension_Float32_1209_f32 rhs) noexcept -> const bool
	{
		#line 481 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (rhs == Builtin::i32(0)) {
			#line 482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return __this == Builtin::i32(0);
		}
		#line 485 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (rhs == Builtin::i32(-1)) {
			#line 486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return Builtin::Boolean(true);
		}
		#line 489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return __this % rhs == Builtin::i32(0);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getAllBitsSet<__extension_Float32_402_f32>::get() -> const __extension_Float32_1209_f32
	{
		#line 404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Builtin::f32), FromBits)(Builtin::u32(0xFFFFFFFFU))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsPow2(__extension_Float32_402_f32 const& __this ) -> const bool
	{
		#line 409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		auto bits = ADV_UPCS(Bits)(__this.__ref()); 
		#line 411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if ((ADV_UFCS(NarrowToInt32)(bits.__ref()) <=> Builtin::i32(0)) <= 0) {
			#line 412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return Builtin::Boolean(false);
		}
		#line 415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		auto biasedExponent = __Float32_Protected::ExtractBiasedExponentFromBits(bits); 
		#line 416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		auto trailingSignificand = __Float32_Protected::ExtractTrailingSignificandFromBits(bits); 
		#line 419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (biasedExponent == __Float32_Protected::MinBiasedExponent) {
			#line 420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return ADV_UPCS(PopCount)(trailingSignificand.__ref()) == Builtin::i32(1);
		}
		#line 423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (biasedExponent == __Float32_Protected::MaxBiasedExponent) {
			#line 424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return Builtin::Boolean(false);
		}
		#line 428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return trailingSignificand == __Float32_Protected::MinTrailingSignificand;
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getLog2(__extension_Float32_402_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::log2f(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getLog10(__extension_Float32_402_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::log10f(__this)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	
} namespace __extensions { using namespace System;
#line 495 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getPi<__extension_Float32_493_f32>::get() -> const __extension_Float32_1209_f32
	{
		#line 495 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32(3.14159265f)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getE<__extension_Float32_493_f32>::get() -> const __extension_Float32_1209_f32
	{
		#line 496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32(2.71828183f)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getTau<__extension_Float32_493_f32>::get() -> const __extension_Float32_1209_f32
	{
		#line 497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32(6.283185307f)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	
} namespace __extensions { using namespace System;
#line 518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto CeilToInt32(__extension_Float32_500_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i32>(ADV_UPCS(Ceil)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto CeilToInt64(__extension_Float32_500_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i64
	{
		#line 519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i64>(ADV_UPCS(Ceil)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto CeilToInt128(__extension_Float32_500_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i128
	{
		#line 520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i128>(ADV_UPCS(Ceil)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto FloorToInt32(__extension_Float32_500_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i32>(ADV_UPCS(Floor)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto FloorToInt64(__extension_Float32_500_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i64
	{
		#line 536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i64>(ADV_UPCS(Floor)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto FloorToInt128(__extension_Float32_500_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i128
	{
		#line 537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i128>(ADV_UPCS(Floor)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto TruncateToInt32(__extension_Float32_500_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i32>(ADV_UPCS(Truncate)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto TruncateToInt64(__extension_Float32_500_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i64
	{
		#line 552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i64>(ADV_UPCS(Truncate)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto TruncateToInt128(__extension_Float32_500_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i128
	{
		#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i128>(ADV_UPCS(Truncate)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto RoundToInt32(__extension_Float32_500_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i32>(ADV_UPCS(Round)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto RoundToInt64(__extension_Float32_500_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i64
	{
		#line 568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i64>(ADV_UPCS(Round)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto RoundToInt128(__extension_Float32_500_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i128
	{
		#line 569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i128>(ADV_UPCS(Round)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 617 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto RoundTiesEvenToInt32(__extension_Float32_500_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 617 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i32>(ADV_UPCS(RoundTiesEven)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 618 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto RoundTiesEvenToInt64(__extension_Float32_500_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i64
	{
		#line 618 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i64>(ADV_UPCS(RoundTiesEven)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto RoundTiesEvenToInt128(__extension_Float32_500_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i128
	{
		#line 619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i128>(ADV_UPCS(RoundTiesEven)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 621 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto Round(__extension_Float32_500_f32 const& __this LIFETIMEBOUND, Builtin::u32 digits)  -> const typename __extension_Float32_500_f32
	{
		#line 621 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Round)(__this.__ref(), digits, ADV_USPCS(AwayFromZero, MidpointRounding)())); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 622 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto Round(__extension_Float32_500_f32 const& __this LIFETIMEBOUND, MidpointRounding rounding)  -> const typename __extension_Float32_500_f32
	{
		#line 624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (std::is_constant_evaluated()) {
			#line 625 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			if (rounding == ADV_USPCS(AwayFromZero, MidpointRounding)()) {
				#line 626 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				return ADV_UPCS(Round)(__this.__ref());
			}
			#line 628 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			if (rounding == ADV_USPCS(ToEven, MidpointRounding)()) {
				#line 629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				return ADV_UPCS(RoundTiesEven)(__this.__ref());
			}
		}
		#line 632 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return ADV_UFCS(Round)(__this.__ref(), Builtin::u32(0U), rounding);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto Round(__extension_Float32_500_f32 const& __this LIFETIMEBOUND, Builtin::u32 digits, MidpointRounding rounding)  -> const typename __extension_Float32_500_f32
	{
		#line 636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		constexpr auto maxRoundingDigits = Builtin::u32(6U);
		#line 637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		constexpr auto singleRoundLimit = Builtin::f32(1e8f);
		#line 638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		constexpr auto pow10table = Builtin::ToInlineArray<Builtin::f32>({Builtin::f32(1e0f), Builtin::f32(1e1f), Builtin::f32(1e2f), Builtin::f32(1e3f), Builtin::f32(1e4f), Builtin::f32(1e5f), Builtin::f32(1e6f)});
		#line 640 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if ((digits <=> maxRoundingDigits) > 0) {
			#line 641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 644 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		auto result = __this; 
		#line 645 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if ((ADV_UPCS(Abs)(__this.__ref()) <=> singleRoundLimit) < 0) {
			#line 646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			const auto pow10 = ADV_UFCS(_operator_subscript)(pow10table.__ref(), digits); 
			#line 647 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			result *= pow10;
			#line 649 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			result = [&]() 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
			{
				#line 651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				auto __tmp__valid_649 = Builtin::Cast<false, std::decay_t<decltype(rounding)>::__self>(rounding);
				#line 651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				if(__tmp__valid_649.IsValid() && Builtin::Is(*__tmp__valid_649, decltype(rounding)::ToEven)) {
					#line 651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					const auto& rounding = *__tmp__valid_649;
					return ADV_UPCS(RoundTiesEven)(result.__ref());
				}
				else {
					#line 652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					if(__tmp__valid_649.IsValid() && Builtin::Is(*__tmp__valid_649, decltype(rounding)::AwayFromZero)) {
						#line 652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						const auto& rounding = *__tmp__valid_649;
						return ADV_UPCS(Round)(result.__ref());
					}
					else {
						#line 653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						if(__tmp__valid_649.IsValid() && Builtin::Is(*__tmp__valid_649, decltype(rounding)::ToZero)) {
							#line 653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							const auto& rounding = *__tmp__valid_649;
							return ADV_UPCS(Truncate)(result.__ref());
						}
						else {
							#line 654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							if(__tmp__valid_649.IsValid() && Builtin::Is(*__tmp__valid_649, decltype(rounding)::ToNegativeInfinity)) {
								#line 654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
								const auto& rounding = *__tmp__valid_649;
								return ADV_UPCS(Floor)(result.__ref());
							}
							else {
								#line 655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
								if(__tmp__valid_649.IsValid() && Builtin::Is(*__tmp__valid_649, decltype(rounding)::ToPositiveInfinity)) {
									#line 655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
									const auto& rounding = *__tmp__valid_649;
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
			#line 659 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			result /= pow10;
		}
		#line 662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getFractionalPart(__extension_Float32_500_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(__this - ADV_UPCS(Truncate)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getCeil(__extension_Float32_500_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (std::is_constant_evaluated()) {
			#line 511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			const auto i = Builtin::Cast<true, Builtin::i64>(__this); 
			#line 512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return ((__this <=> i) > 0) ? (i + Builtin::i32(1)) : i;
		} else {
			#line 513 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			{
				#line 514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				return std::ceilf(__this);
			}
		}
		return {};
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getFloor(__extension_Float32_500_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (std::is_constant_evaluated()) {
			#line 528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			const auto i = Builtin::Cast<true, Builtin::i64>(__this); 
			#line 529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return ((__this <=> i) < 0) ? (i - Builtin::i32(1)) : i;
		} else {
			#line 530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			{
				#line 531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				return std::floorf(__this);
			}
		}
		return {};
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getTruncate(__extension_Float32_500_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (std::is_constant_evaluated()) {
			#line 545 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return Builtin::Cast<true, Builtin::i64>(__this);
		} else {
			#line 546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			{
				#line 547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				return std::truncf(__this);
			}
		}
		return {};
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getRound(__extension_Float32_500_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (std::is_constant_evaluated()) {
			#line 561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return Builtin::Cast<true, Builtin::i64>((__this + ADV_UFCS(CopySign)(Builtin::f32(0.49999997f).__ref(), __this)));
		} else {
			#line 562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			{
				#line 563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				return std::roundf(__this);
			}
		}
		return {};
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getRoundTiesEven(__extension_Float32_500_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 576 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		auto bits = ADV_UPCS(Bits)(__this.__ref()); 
		#line 577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		auto biasedExponent = __Float32_Protected::ExtractBiasedExponentFromBits(bits); 
		#line 578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if ((biasedExponent <=> Builtin::u32(0x7EU)) <= 0) {
			#line 580 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			if ((bits << Builtin::i32(1)) == Builtin::i32(0)) {
				#line 581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				return __this;
			}
			#line 586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			auto result = (biasedExponent == Builtin::u32(0x7EU) && __Float32_Protected::ExtractTrailingSignificandFromBits(bits) != Builtin::i32(0)) ? Builtin::f32(1.0f) : Builtin::f32(0.0f); 
			#line 588 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return ADV_UFCS(CopySign)(result.__ref(), __this);
		}
		#line 592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if ((biasedExponent <=> Builtin::u32(0x96U)) >= 0) {
			#line 593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return __this;
		}
		#line 596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT(((biasedExponent <=> Builtin::u32(0x7FU)) >= 0 && (biasedExponent <=> Builtin::u32(0x95U)) <= 0), u"biasedExponent>=0x7FuandbiasedExponent<=0x95u");
		#line 599 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		auto lastBitMask = Builtin::u32(1U) << (Builtin::i32(0x96) - biasedExponent); 
		#line 601 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		auto roundBitsMask = lastBitMask - Builtin::u32(1U); 
		#line 604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		bits += lastBitMask >> Builtin::i32(1);
		#line 606 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if ((bits & roundBitsMask) == Builtin::i32(0)) {
			#line 608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			bits &= ADV_UFCS(_operator_not)(lastBitMask);
		} else {
			#line 609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			{
				#line 611 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				bits &= ADV_UFCS(_operator_not)(roundBitsMask);
			}
		}
		#line 614 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return ADV_USFCS((Builtin::f32), FromBits)(bits);
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 665 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getExponentByteCount(__extension_Float32_500_f32 const& __this ) -> const Builtin::u32
	{
		#line 665 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u32>(Builtin::usize(sizeof(Builtin::i8)))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getExponentShortestBitLength(__extension_Float32_500_f32 const& __this ) -> const Builtin::u32
	{
		#line 668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		auto exponent = __Float32_Protected::Exponent(__this); 
		#line 669 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if ((exponent <=> Builtin::i32(0)) >= 0) {
			#line 670 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return ADV_USPCS(BitWidth, Builtin::i8)() - ADV_UPCS(LeadingZeroCount)(exponent.__ref());
		} else {
			#line 671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			{
				#line 672 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				return ADV_USPCS(BitWidth, Builtin::i8)() + Builtin::i32(1) - ADV_UPCS(LeadingZeroCount)(exponent.__ref());
			}
		}
		return {};
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 675 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getSignificandBitLength(__extension_Float32_500_f32 const& __this ) -> const Builtin::u32
	{
		#line 675 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(24U)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 676 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getSignificandByteCount(__extension_Float32_500_f32 const& __this ) -> const Builtin::u32
	{
		#line 676 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u32>(Builtin::usize(sizeof(Builtin::u32)))); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	
} namespace __extensions { using namespace System;
#line 681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto _operator_mul_mul(__extension_Float32_680_f32 const& __this LIFETIMEBOUND, __extension_Float32_1209_f32 exp) noexcept -> const typename __extension_Float32_680_f32
	{
		#line 681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::powf(__this, exp)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 682 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto _operator_mul_mul_eq(__extension_Float32_680_f32 & __this , __extension_Float32_1209_f32 exp) noexcept -> typename __extension_Float32_680_f32&
	{
		#line 682 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(__this = std::powf(__this, exp)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	
} namespace __extensions { using namespace System;
#line 687 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getExp(__extension_Float32_685_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 687 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::expf(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getExp2(__extension_Float32_685_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::exp2f(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getExp10(__extension_Float32_685_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_mul)(Builtin::f32(10.0f), __this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getExpM1(__extension_Float32_685_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::expm1f(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getExp2M1(__extension_Float32_685_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::exp2f(__this) - Builtin::f32(1.0f)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 697 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getExp10M1(__extension_Float32_685_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 697 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Exp10)(__this.__ref()) - Builtin::f32(1.0f)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	
} namespace __extensions { using namespace System;
#line 702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getLn(__extension_Float32_700_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::logf(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 704 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getLnP1(__extension_Float32_700_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 704 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::log1pf(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 706 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getLog2P1(__extension_Float32_700_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 706 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::log2f(__this + Builtin::f32(1.0f))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 708 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getLog10P1(__extension_Float32_700_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 708 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::log10f(__this + Builtin::f32(1.0f))); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	
} namespace __extensions { using namespace System;
#line 713 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getSqrt(__extension_Float32_711_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 713 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::sqrtf(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getCbrt(__extension_Float32_711_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::cbrtf(__this)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	
} namespace __extensions { using namespace System;
#line 1060 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToRadians(__extension_Float32_819_f32 const& __this LIFETIMEBOUND) noexcept -> const typename __extension_Float32_819_f32
	{
		#line 1060 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY((__this * ADV_USPCS(Pi, Builtin::f32)()) / Builtin::f32(180.0f)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1062 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToDegrees(__extension_Float32_819_f32 const& __this LIFETIMEBOUND) noexcept -> const typename __extension_Float32_819_f32
	{
		#line 1062 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY((__this * Builtin::f32(180.0f)) / ADV_USPCS(Pi, Builtin::f32)()); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 821 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getSin(__extension_Float32_819_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 821 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::sinf(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 823 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getCos(__extension_Float32_819_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 823 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::cosf(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 825 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getTan(__extension_Float32_819_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 825 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::tanf(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 827 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getCot(__extension_Float32_819_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 827 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32(1.0f) / ADV_UPCS(Tan)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 829 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getSec(__extension_Float32_819_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 829 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32(1.0f) / ADV_UPCS(Cos)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 831 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getCsc(__extension_Float32_819_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 831 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32(1.0f) / ADV_UPCS(Sin)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 833 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAsin(__extension_Float32_819_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 833 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::asinf(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 835 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAcos(__extension_Float32_819_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 835 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::acosf(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 837 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAtan(__extension_Float32_819_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 837 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::atanf(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 839 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAcot(__extension_Float32_819_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 839 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::atanf(Builtin::f32(1.0f) / __this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 841 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAsec(__extension_Float32_819_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 841 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::acosf(Builtin::f32(1.0f) / __this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 843 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAcsc(__extension_Float32_819_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 843 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::asinf(Builtin::f32(1.0f) / __this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 845 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getSinCos(__extension_Float32_819_f32 const& __this ) -> const std::tuple<__extension_Float32_1209_f32, __extension_Float32_1209_f32>
	{
		#line 845 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::make_tuple(ADV_UPCS(Sin)(__this.__ref()), ADV_UPCS(Cos)(__this.__ref()))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1041 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getCotPi(__extension_Float32_819_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 1041 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32(1.0f) / ADV_UPCS(TanPi)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1043 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getSecPi(__extension_Float32_819_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 1043 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32(1.0f) / ADV_UPCS(CosPi)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1045 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getCscPi(__extension_Float32_819_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 1045 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32(1.0f) / ADV_UPCS(SinPi)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1047 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAsinPi(__extension_Float32_819_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 1047 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Asin)(__this.__ref()) / ADV_USPCS(Pi, Builtin::f32)()); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1049 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAcosPi(__extension_Float32_819_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 1049 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Acos)(__this.__ref()) / ADV_USPCS(Pi, Builtin::f32)()); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1051 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAtanPi(__extension_Float32_819_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 1051 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Atan)(__this.__ref()) / ADV_USPCS(Pi, Builtin::f32)()); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1053 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAcotPi(__extension_Float32_819_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 1053 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Acot)(__this.__ref()) / ADV_USPCS(Pi, Builtin::f32)()); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1055 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAsecPi(__extension_Float32_819_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 1055 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Asec)(__this.__ref()) / ADV_USPCS(Pi, Builtin::f32)()); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1057 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAcscPi(__extension_Float32_819_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 1057 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Acsc)(__this.__ref()) / ADV_USPCS(Pi, Builtin::f32)()); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	
} namespace __extensions { using namespace System;
#line 1067 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAcosh(__extension_Float32_1065_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 1067 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::acoshf(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1069 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAcoth(__extension_Float32_1065_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 1069 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::atanhf(Builtin::f32(1.0f) / __this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1071 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAcsch(__extension_Float32_1065_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 1071 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::asinhf(Builtin::f32(1.0f) / __this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1073 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAsech(__extension_Float32_1065_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 1073 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::acoshf(Builtin::f32(1.0f) / __this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1075 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAsinh(__extension_Float32_1065_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 1075 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::asinhf(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1077 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAtanh(__extension_Float32_1065_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 1077 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::atanhf(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1079 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getCosh(__extension_Float32_1065_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 1079 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::coshf(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1081 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getCoth(__extension_Float32_1065_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 1081 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32(1.0f) / ADV_UPCS(Tanh)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1083 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getCsch(__extension_Float32_1065_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 1083 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32(1.0f) / ADV_UPCS(Sinh)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1085 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getSech(__extension_Float32_1065_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 1085 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32(1.0f) / ADV_UPCS(Cosh)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1087 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getSinh(__extension_Float32_1065_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 1087 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::sinhf(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1089 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getTanh(__extension_Float32_1065_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 1089 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::tanhf(__this)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	
} namespace __extensions { using namespace System;
#line 1100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto Atan2(__extension_Float32_1092_f32 const& __this LIFETIMEBOUND, __extension_Float32_1209_f32 y)  -> const typename __extension_Float32_1092_f32
	{
		#line 1100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::atan2f(__this, y)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto Atan2Pi(__extension_Float32_1092_f32 const& __this LIFETIMEBOUND, __extension_Float32_1209_f32 y)  -> const typename __extension_Float32_1092_f32
	{
		#line 1101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Atan2)(__this.__ref(), y) / ADV_USPCS(Pi, Builtin::f32)()); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto FusedMultiplyAdd(__extension_Float32_1092_f32 const& __this LIFETIMEBOUND, __extension_Float32_1209_f32 rhs, __extension_Float32_1209_f32 addend)  -> const typename __extension_Float32_1092_f32
	{
		#line 1190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::fmaf(__this, rhs, addend)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto Ieee754Remainder(__extension_Float32_1092_f32 const& __this LIFETIMEBOUND, __extension_Float32_1209_f32 rhs)  -> const typename __extension_Float32_1092_f32
	{
		#line 1192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::remainderf(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto Lerp(__extension_Float32_1092_f32 const& __this LIFETIMEBOUND, __extension_Float32_1209_f32 end, __extension_Float32_1209_f32 amount) noexcept -> const typename __extension_Float32_1092_f32
	{
		#line 1195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(__this * (Builtin::f32(1.0f) - amount) + (end * amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto ScaleB(__extension_Float32_1092_f32 const& __this LIFETIMEBOUND, Builtin::i32 n)  -> const typename __extension_Float32_1092_f32
	{
		#line 1197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::scalbnf(__this, n)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1093 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getEpsilon<__extension_Float32_1092_f32>::get() -> const __extension_Float32_1209_f32
	{
		#line 1093 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32{Builtin::f64(1.4e-45)}); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1094 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getNegativeInfinity<__extension_Float32_1092_f32>::get() -> const __extension_Float32_1209_f32
	{
		#line 1094 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32{Builtin::f64(-1e+300)}); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1095 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getPositiveInfinity<__extension_Float32_1092_f32>::get() -> const __extension_Float32_1209_f32
	{
		#line 1095 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32{+Builtin::f64(1e+300)}); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1096 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getNaN<__extension_Float32_1092_f32>::get() -> const __extension_Float32_1209_f32
	{
		#line 1096 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::NanValue()); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1097 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getNegativeZero<__extension_Float32_1092_f32>::get() -> const __extension_Float32_1209_f32
	{
		#line 1097 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32(-0.0f)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getBitIncrement(__extension_Float32_1092_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 1111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		auto bits = ADV_UPCS(Bits)(__this.__ref()); 
		#line 1112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (((bits & Builtin::u32(0x7F800000U)) <=> Builtin::u32(0x7F800000U)) >= 0) {
			#line 1116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return bits == Builtin::u32(0xFF800000U) ? ADV_USPCS(MinValue, Builtin::f32)() : __this;
		}
		#line 1120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (bits == Builtin::u32(0x80000000U)) {
			#line 1121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return ADV_USPCS(Epsilon, Builtin::f32)();
		}
		#line 1124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		bits += (bits <=> ADV_USPCS(MaxValue, Builtin::i32)()) > 0 ? Builtin::i32(-1) : +Builtin::i32(1);
		#line 1125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return ADV_USFCS((Builtin::f32), FromBits)(bits);
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getBitDecrement(__extension_Float32_1092_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 1135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		auto bits = ADV_UPCS(Bits)(__this.__ref()); 
		#line 1136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (((bits & Builtin::u32(0x7F800000U)) <=> Builtin::u32(0x7F800000U)) >= 0) {
			#line 1140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return bits == Builtin::u32(0x7F800000U) ? ADV_USPCS(MaxValue, Builtin::f32)() : __this;
		}
		#line 1144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (bits == Builtin::u32(0U)) {
			#line 1145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return -ADV_USPCS(Epsilon, Builtin::f32)();
		}
		#line 1148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		bits += (bits <=> ADV_USPCS(MaxValue, Builtin::i32)()) > 0 ? +Builtin::i32(1) : Builtin::i32(-1);
		#line 1149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return ADV_USFCS((Builtin::f32), FromBits)(bits);
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getILogB(__extension_Float32_1092_f32 const& __this ) -> const Builtin::i32
	{
		#line 1152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::ilogbf(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getReciprocalEstimate(__extension_Float32_1092_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 1156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (std::is_constant_evaluated()) {
			#line 1157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return Builtin::f32(1.0f) / __this;
		} else {
			#line 1158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			{
				#line 1160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				return Builtin::f32(1.0f) / __this;
			}
		}
		return {};
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getReciprocalSqrtEstimate(__extension_Float32_1092_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 1165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (std::is_constant_evaluated()) {
			#line 1166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return Builtin::f32(1.0f) / ADV_UPCS(Sqrt)(__this.__ref());
		} else {
			#line 1167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			{
				#line 1169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				return Builtin::f32(1.0f) / ADV_UPCS(Sqrt)(__this.__ref());
			}
		}
		return {};
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getCategory(__extension_Float32_1092_f32 const& __this ) -> const FloatingPointCategory
	{
		#line 1176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (ADV_UPCS(IsNaN)(__this.__ref())) {
			#line 1177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return ADV_USPCS(NaN, FloatingPointCategory)();
		} else {
			#line 1178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			if (ADV_UPCS(IsInfinity)(__this.__ref())) {
				#line 1179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				return ADV_USPCS(Infinity, FloatingPointCategory)();
			} else {
				#line 1180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				if (ADV_UPCS(IsZero)(__this.__ref())) {
					#line 1181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					return ADV_USPCS(Zero, FloatingPointCategory)();
				} else {
					#line 1182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					if (ADV_UPCS(IsSubnormal)(__this.__ref())) {
						#line 1183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						return ADV_USPCS(Subnormal, FloatingPointCategory)();
					} else {
						#line 1184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						{
							#line 1185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
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
#line 1200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getGamma(__extension_Float32_1092_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 1200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::tgammaf(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getLnGamma(__extension_Float32_1092_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 1202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::lgammaf(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getErf(__extension_Float32_1092_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 1204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::erff(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getErfc(__extension_Float32_1092_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 1206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::erfcf(__this)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	
} namespace __extensions { using namespace System;
#line 1210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getNumberBufferLength<__extension_Float32_1209_f32>::get() -> const Builtin::i32
	{
		#line 1210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(112) + Builtin::i32(1) + Builtin::i32(1)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getZeroBits<__extension_Float32_1209_f32>::get() -> const Builtin::u128
	{
		#line 1211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(0U)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getInfinityBits<__extension_Float32_1209_f32>::get() -> const Builtin::u128
	{
		#line 1212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(0x7F800000U)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getNormalMantissaMask<__extension_Float32_1209_f32>::get() -> const Builtin::u128
	{
		#line 1213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY((Builtin::u128(1ULL) << __Float32_Protected::SignificandLength) - Builtin::u32(1U)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getDenormalMantissaMask<__extension_Float32_1209_f32>::get() -> const Builtin::u128
	{
		#line 1214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(__Float32_Protected::TrailingSignificandMask); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getMinBinaryExponent<__extension_Float32_1209_f32>::get() -> const Builtin::i32
	{
		#line 1215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(1) - __Float32_Protected::MaxExponent); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getMaxBinaryExponent<__extension_Float32_1209_f32>::get() -> const Builtin::i32
	{
		#line 1216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(__Float32_Protected::MaxExponent); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getMinDecimalExponent<__extension_Float32_1209_f32>::get() -> const Builtin::i32
	{
		#line 1217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(-45)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getMaxDecimalExponent<__extension_Float32_1209_f32>::get() -> const Builtin::i32
	{
		#line 1218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(39)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getExponentBias<__extension_Float32_1209_f32>::get() -> const Builtin::i32
	{
		#line 1219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(__Float32_Protected::ExpBias); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getExponentBits<__extension_Float32_1209_f32>::get() -> const Builtin::u128
	{
		#line 1220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(8U)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getOverflowDecimalExponent<__extension_Float32_1209_f32>::get() -> const Builtin::i32
	{
		#line 1221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl)((__Float32_Protected::MaxExponent + Builtin::i32(2) * __Float32_Protected::SignificandLength), Builtin::i32(3))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getInfinityExponent<__extension_Float32_1209_f32>::get() -> const Builtin::i32
	{
		#line 1222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(0xFF)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getNormalMantissaBits<__extension_Float32_1209_f32>::get() -> const Builtin::u16
	{
		#line 1223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(__Float32_Protected::SignificandLength); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getDenormalMantissaBits<__extension_Float32_1209_f32>::get() -> const Builtin::u16
	{
		#line 1224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(__Float32_Protected::TrailingSignificandLength); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getMinFastFloatDecimalExponent<__extension_Float32_1209_f32>::get() -> const Builtin::i32
	{
		#line 1225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(-65)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getMaxFastFloatDecimalExponent<__extension_Float32_1209_f32>::get() -> const Builtin::i32
	{
		#line 1226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(38)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getMinExponentRoundToEven<__extension_Float32_1209_f32>::get() -> const Builtin::i32
	{
		#line 1227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(-17)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getMaxExponentRoundToEven<__extension_Float32_1209_f32>::get() -> const Builtin::i32
	{
		#line 1228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(10)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getMaxExponentFastPath<__extension_Float32_1209_f32>::get() -> const Builtin::i32
	{
		#line 1229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(10)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getMaxMantissaFastPath<__extension_Float32_1209_f32>::get() -> const Builtin::u128
	{
		#line 1230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::u128(2ULL) << __Float32_Protected::TrailingSignificandLength); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	

}