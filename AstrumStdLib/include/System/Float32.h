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
#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
using Float32 = Builtin::f32;
#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
using Single = Builtin::f32;
//###############################################################################
//# Type definitions
//###############################################################################
	} namespace __extensions { using namespace System;
#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	using __extension_Float32_15_f32 = Builtin::f32;
	#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE(IMinMaxValue, IMinMaxValue);
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getMinValue; template<> struct __static_getMinValue<__extension_Float32_15_f32> { static inline constexpr auto get() -> const __extension_Float32_15_f32; };
	#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getMaxValue; template<> struct __static_getMaxValue<__extension_Float32_15_f32> { static inline constexpr auto get() -> const __extension_Float32_15_f32; };
	#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f32, IMinMaxValue, IMinMaxValue, f32);
	} namespace System{
using __extensions::__static_getMinValue;
using __extensions::__static_getMaxValue;

		} namespace __extensions { using namespace System;
#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	using __extension_Float32_20_f32 = Builtin::f32;
	#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ASTRUMSTD_API auto _operator_eq_eq_mul(__extension_Float32_20_f32 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool;
	#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto operator<=>(__extension_Float32_20_f32 const& __this LIFETIMEBOUND, Builtin::Nullable<__extension_Float32_20_f32> rhs) noexcept -> const Builtin::i32;
	#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_FromBits; template<> struct __static_FromBits<__extension_Float32_20_f32> { static inline constexpr auto get(Builtin::u32 bits)  -> const typename __extension_Float32_20_f32; };
	#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getBits(__extension_Float32_20_f32 const& __this ) -> const Builtin::u32;
	#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getBitWidth; template<> struct __static_getBitWidth<__extension_Float32_20_f32> { static inline constexpr auto get() -> const Builtin::u32; };
	#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getMinPositiveValue; template<> struct __static_getMinPositiveValue<__extension_Float32_20_f32> { static inline constexpr auto get() -> const __extension_Float32_20_f32; };
	#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getHashCode(__extension_Float32_20_f32 const& __this ) -> const Builtin::u64;
	} namespace System{
using __extensions::_operator_eq_eq_mul;
using __extensions::operator<=>;
using __extensions::__static_FromBits;
using __extensions::getBits;
using __extensions::__static_getBitWidth;
using __extensions::__static_getMinPositiveValue;
using __extensions::getHashCode;

		} namespace __extensions { using namespace System;
#line 62 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	using __extension_Float32_62_f32 = Builtin::f32;
	#line 62 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE(IAbstractComparable, IAbstractComparable);
	#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ASTRUMSTD_API auto _operator_lt_eq_gt_mul(__extension_Float32_62_f32 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32;
	#line 62 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f32, IAbstractComparable, IAbstractComparable, f32);
	} namespace System{
using __extensions::_operator_lt_eq_gt_mul;

		} namespace __extensions { using namespace System;
#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	using __extension_Float32_77_f32 = Builtin::f32;
	#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE(IConvertible, IConvertible);
	#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToBoolean(__extension_Float32_77_f32 const& __this LIFETIMEBOUND) noexcept -> const bool;
	#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToInt8(__extension_Float32_77_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i8;
	#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToUInt8(__extension_Float32_77_f32 const& __this LIFETIMEBOUND)  -> const Builtin::u8;
	#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToInt16(__extension_Float32_77_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i16;
	#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToUInt16(__extension_Float32_77_f32 const& __this LIFETIMEBOUND)  -> const Builtin::u16;
	#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToInt32(__extension_Float32_77_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 84 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToUInt32(__extension_Float32_77_f32 const& __this LIFETIMEBOUND)  -> const Builtin::u32;
	#line 85 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToInt64(__extension_Float32_77_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i64;
	#line 86 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToUInt64(__extension_Float32_77_f32 const& __this LIFETIMEBOUND)  -> const Builtin::u64;
	#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToInt128(__extension_Float32_77_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i128;
	#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToUInt128(__extension_Float32_77_f32 const& __this LIFETIMEBOUND)  -> const Builtin::u128;
	#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToIsize(__extension_Float32_77_f32 const& __this LIFETIMEBOUND)  -> const Builtin::isize;
	#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToUsize(__extension_Float32_77_f32 const& __this LIFETIMEBOUND)  -> const Builtin::usize;
	#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToFloat32(__extension_Float32_77_f32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::f32;
	#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToFloat64(__extension_Float32_77_f32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::f64;
	#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToByte(__extension_Float32_77_f32 const& __this LIFETIMEBOUND)  -> const Builtin::char8;
	#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToChar(__extension_Float32_77_f32 const& __this LIFETIMEBOUND)  -> const Builtin::char16;
	#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
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
#line 99 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	using __extension_Float32_99_f32 = Builtin::f32;
	#line 99 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE(IDivisibleArithmetic, IDivisibleArithmetic);
	#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class T> inline constexpr auto _operator_div_mod(__extension_Float32_99_f32 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_Float32_99_f32, __extension_Float32_99_f32>;
	#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class T> inline constexpr auto _operator_div_not(__extension_Float32_99_f32 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Float32_99_f32;
	#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto _operator_div_not_eq(__extension_Float32_99_f32 & __this , auto rhs)  -> typename __extension_Float32_99_f32&;
	#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class T> inline constexpr auto _operator_div_lt(__extension_Float32_99_f32 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Float32_99_f32;
	#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto _operator_div_lt_eq(__extension_Float32_99_f32 & __this , auto rhs)  -> typename __extension_Float32_99_f32&;
	#line 115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class T> inline constexpr auto _operator_div_gt(__extension_Float32_99_f32 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Float32_99_f32;
	#line 117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto _operator_div_gt_eq(__extension_Float32_99_f32 & __this , auto rhs)  -> typename __extension_Float32_99_f32&;
	#line 99 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
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
#line 121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	using __extension_Float32_121_f32 = Builtin::f32;
	#line 121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE(ISignedIntegerPowerArithmetic, ISignedIntegerPowerArithmetic);
	#line 123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto _operator_xor_xor(__extension_Float32_121_f32 const& __this LIFETIMEBOUND, Builtin::i32 exp)  -> const typename __extension_Float32_121_f32;
	#line 159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto _operator_xor_xor_eq(__extension_Float32_121_f32 & __this , Builtin::i32 exp)  -> typename __extension_Float32_121_f32&;
	#line 121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f32, ISignedIntegerPowerArithmetic, ISignedIntegerPowerArithmetic, f32);
	} namespace System{
using __extensions::_operator_xor_xor;
using __extensions::_operator_xor_xor_eq;

		} namespace __extensions { using namespace System;
#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	using __extension_Float32_162_f32 = Builtin::f32;
	#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE(INumberBase, INumberBase);
	#line 199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto MaxMagnitude(__extension_Float32_162_f32 const& __this LIFETIMEBOUND, __extension_Float32_162_f32 rhs) noexcept -> const typename __extension_Float32_162_f32;
	#line 217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto MaxMagnitudeNumber(__extension_Float32_162_f32 const& __this LIFETIMEBOUND, __extension_Float32_162_f32 rhs) noexcept -> const typename __extension_Float32_162_f32;
	#line 235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto MinMagnitude(__extension_Float32_162_f32 const& __this LIFETIMEBOUND, __extension_Float32_162_f32 rhs) noexcept -> const typename __extension_Float32_162_f32;
	#line 253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto MinMagnitudeNumber(__extension_Float32_162_f32 const& __this LIFETIMEBOUND, __extension_Float32_162_f32 rhs) noexcept -> const typename __extension_Float32_162_f32;
	#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ASTRUMSTD_API auto Parse(__extension_Float32_162_f32 const& __this LIFETIMEBOUND, Builtin::Str input)  -> const typename __extension_Float32_162_f32;
	#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ASTRUMSTD_API auto TryParse(__extension_Float32_162_f32 const& __this LIFETIMEBOUND, Builtin::Str input) noexcept -> const Builtin::Nullable<__extension_Float32_162_f32>;
	#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToInt8(__extension_Float32_162_f32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i8;
	#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToUInt8(__extension_Float32_162_f32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u8;
	#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToInt16(__extension_Float32_162_f32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i16;
	#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToUInt16(__extension_Float32_162_f32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u16;
	#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToInt32(__extension_Float32_162_f32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i32;
	#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToUInt32(__extension_Float32_162_f32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u32;
	#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToInt64(__extension_Float32_162_f32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i64;
	#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToUInt64(__extension_Float32_162_f32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u64;
	#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToInt128(__extension_Float32_162_f32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i128;
	#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToUInt128(__extension_Float32_162_f32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u128;
	#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToIsize(__extension_Float32_162_f32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::isize;
	#line 294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToUsize(__extension_Float32_162_f32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::usize;
	#line 163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getOne; template<> struct __static_getOne<__extension_Float32_162_f32> { static inline constexpr auto get() -> const __extension_Float32_162_f32; };
	#line 164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getZero; template<> struct __static_getZero<__extension_Float32_162_f32> { static inline constexpr auto get() -> const __extension_Float32_162_f32; };
	#line 165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getRadix; template<> struct __static_getRadix<__extension_Float32_162_f32> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getAbs(__extension_Float32_162_f32 const& __this ) -> const __extension_Float32_162_f32;
	#line 173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsCanonical(__extension_Float32_162_f32 const& __this ) -> const bool;
	#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsComplexNumber(__extension_Float32_162_f32 const& __this ) -> const bool;
	#line 175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsEvenInteger(__extension_Float32_162_f32 const& __this ) -> const bool;
	#line 176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsFinite(__extension_Float32_162_f32 const& __this ) -> const bool;
	#line 177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsImaginaryNumber(__extension_Float32_162_f32 const& __this ) -> const bool;
	#line 178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsInfinity(__extension_Float32_162_f32 const& __this ) -> const bool;
	#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsInteger(__extension_Float32_162_f32 const& __this ) -> const bool;
	#line 180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsNaN(__extension_Float32_162_f32 const& __this ) -> const bool;
	#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsNegative(__extension_Float32_162_f32 const& __this ) -> const bool;
	#line 182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsNegativeInfinity(__extension_Float32_162_f32 const& __this ) -> const bool;
	#line 183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsNormal(__extension_Float32_162_f32 const& __this ) -> const bool;
	#line 188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsOddInteger(__extension_Float32_162_f32 const& __this ) -> const bool;
	#line 189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsPositive(__extension_Float32_162_f32 const& __this ) -> const bool;
	#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsPositiveInfinity(__extension_Float32_162_f32 const& __this ) -> const bool;
	#line 191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsRealNumber(__extension_Float32_162_f32 const& __this ) -> const bool;
	#line 192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsSubnormal(__extension_Float32_162_f32 const& __this ) -> const bool;
	#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsZero(__extension_Float32_162_f32 const& __this ) -> const bool;
	#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
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
#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	using __extension_Float32_297_f32 = Builtin::f32;
	#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE(ISignedNumber, ISignedNumber);
	#line 298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getMinusOne; template<> struct __static_getMinusOne<__extension_Float32_297_f32> { static inline constexpr auto get() -> const __extension_Float32_297_f32; };
	#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f32, ISignedNumber, ISignedNumber, f32);
	} namespace System{
using __extensions::__static_getMinusOne;

		} namespace __extensions { using namespace System;
#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	using __extension_Float32_301_f32 = Builtin::f32;
	#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE(INumber, INumber);
	#line 309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto CopySign(__extension_Float32_301_f32 const& __this LIFETIMEBOUND, __extension_Float32_301_f32 sign) noexcept -> const typename __extension_Float32_301_f32;
	#line 321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto Max(__extension_Float32_301_f32 const& __this LIFETIMEBOUND, __extension_Float32_301_f32 rhs) noexcept -> const typename __extension_Float32_301_f32;
	#line 331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto MaxNumber(__extension_Float32_301_f32 const& __this LIFETIMEBOUND, __extension_Float32_301_f32 rhs) noexcept -> const typename __extension_Float32_301_f32;
	#line 341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto Min(__extension_Float32_301_f32 const& __this LIFETIMEBOUND, __extension_Float32_301_f32 rhs) noexcept -> const typename __extension_Float32_301_f32;
	#line 351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto MinNumber(__extension_Float32_301_f32 const& __this LIFETIMEBOUND, __extension_Float32_301_f32 rhs) noexcept -> const typename __extension_Float32_301_f32;
	#line 361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto Clamp(__extension_Float32_301_f32 const& __this LIFETIMEBOUND, __extension_Float32_301_f32 min, __extension_Float32_301_f32 max)  -> const typename __extension_Float32_301_f32;
	#line 302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getSign(__extension_Float32_301_f32 const& __this ) -> const Builtin::i32;
	#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
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
#line 404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	using __extension_Float32_404_f32 = Builtin::f32;
	#line 404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE(IBinaryNumber, IBinaryNumber);
	#line 444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto Log(__extension_Float32_404_f32 const& __this LIFETIMEBOUND, __extension_Float32_404_f32 base) noexcept -> const typename __extension_Float32_404_f32;
	#line 465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto Midpoint(__extension_Float32_404_f32 const& __this LIFETIMEBOUND, __extension_Float32_404_f32 rhs) noexcept -> const typename __extension_Float32_404_f32;
	#line 481 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto IsMultipleOf(__extension_Float32_404_f32 const& __this LIFETIMEBOUND, __extension_Float32_404_f32 rhs) noexcept -> const bool;
	#line 406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getAllBitsSet; template<> struct __static_getAllBitsSet<__extension_Float32_404_f32> { static inline constexpr auto get() -> const __extension_Float32_404_f32; };
	#line 409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsPow2(__extension_Float32_404_f32 const& __this ) -> const bool;
	#line 435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getLog2(__extension_Float32_404_f32 const& __this ) -> const __extension_Float32_404_f32;
	#line 439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getLog10(__extension_Float32_404_f32 const& __this ) -> const __extension_Float32_404_f32;
	#line 404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
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
#line 495 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	using __extension_Float32_495_f32 = Builtin::f32;
	#line 495 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE(IFloatingPointConstants, IFloatingPointConstants);
	#line 497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getPi; template<> struct __static_getPi<__extension_Float32_495_f32> { static inline constexpr auto get() -> const __extension_Float32_495_f32; };
	#line 498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getE; template<> struct __static_getE<__extension_Float32_495_f32> { static inline constexpr auto get() -> const __extension_Float32_495_f32; };
	#line 499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getTau; template<> struct __static_getTau<__extension_Float32_495_f32> { static inline constexpr auto get() -> const __extension_Float32_495_f32; };
	#line 495 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f32, IFloatingPointConstants, IFloatingPointConstants, f32);
	} namespace System{
using __extensions::__static_getPi;
using __extensions::__static_getE;
using __extensions::__static_getTau;

		} namespace __extensions { using namespace System;
#line 502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	using __extension_Float32_502_f32 = Builtin::f32;
	#line 502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE(IFloatingPoint, IFloatingPoint);
	#line 520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto CeilToInt32(__extension_Float32_502_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto CeilToInt64(__extension_Float32_502_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i64;
	#line 522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto CeilToInt128(__extension_Float32_502_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i128;
	#line 537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto FloorToInt32(__extension_Float32_502_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 538 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto FloorToInt64(__extension_Float32_502_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i64;
	#line 539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto FloorToInt128(__extension_Float32_502_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i128;
	#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto TruncateToInt32(__extension_Float32_502_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto TruncateToInt64(__extension_Float32_502_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i64;
	#line 555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto TruncateToInt128(__extension_Float32_502_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i128;
	#line 569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto RoundToInt32(__extension_Float32_502_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto RoundToInt64(__extension_Float32_502_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i64;
	#line 571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto RoundToInt128(__extension_Float32_502_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i128;
	#line 619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto RoundTiesEvenToInt32(__extension_Float32_502_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto RoundTiesEvenToInt64(__extension_Float32_502_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i64;
	#line 621 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto RoundTiesEvenToInt128(__extension_Float32_502_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i128;
	#line 623 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto Round(__extension_Float32_502_f32 const& __this LIFETIMEBOUND, Builtin::u32 digits)  -> const typename __extension_Float32_502_f32;
	#line 624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto Round(__extension_Float32_502_f32 const& __this LIFETIMEBOUND, MidpointRounding rounding)  -> const typename __extension_Float32_502_f32;
	#line 636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto Round(__extension_Float32_502_f32 const& __this LIFETIMEBOUND, Builtin::u32 digits, MidpointRounding rounding)  -> const typename __extension_Float32_502_f32;
	#line 505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getFractionalPart(__extension_Float32_502_f32 const& __this ) -> const __extension_Float32_502_f32;
	#line 510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getCeil(__extension_Float32_502_f32 const& __this ) -> const __extension_Float32_502_f32;
	#line 527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getFloor(__extension_Float32_502_f32 const& __this ) -> const __extension_Float32_502_f32;
	#line 544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getTruncate(__extension_Float32_502_f32 const& __this ) -> const __extension_Float32_502_f32;
	#line 560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getRound(__extension_Float32_502_f32 const& __this ) -> const __extension_Float32_502_f32;
	#line 576 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getRoundTiesEven(__extension_Float32_502_f32 const& __this ) -> const __extension_Float32_502_f32;
	#line 668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getExponentByteCount(__extension_Float32_502_f32 const& __this ) -> const Builtin::u32;
	#line 669 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getExponentShortestBitLength(__extension_Float32_502_f32 const& __this ) -> const Builtin::u32;
	#line 678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getSignificandBitLength(__extension_Float32_502_f32 const& __this ) -> const Builtin::u32;
	#line 679 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getSignificandByteCount(__extension_Float32_502_f32 const& __this ) -> const Builtin::u32;
	#line 502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
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
#line 683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	using __extension_Float32_683_f32 = Builtin::f32;
	#line 683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE(IPowerArithmetic, IPowerArithmetic);
	#line 684 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto _operator_mul_mul(__extension_Float32_683_f32 const& __this LIFETIMEBOUND, __extension_Float32_683_f32 exp) noexcept -> const typename __extension_Float32_683_f32;
	#line 685 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto _operator_mul_mul_eq(__extension_Float32_683_f32 & __this , __extension_Float32_683_f32 exp) noexcept -> typename __extension_Float32_683_f32&;
	#line 683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f32, IPowerArithmetic, IPowerArithmetic, f32);
	} namespace System{
using __extensions::_operator_mul_mul;
using __extensions::_operator_mul_mul_eq;

		} namespace __extensions { using namespace System;
#line 688 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	using __extension_Float32_688_f32 = Builtin::f32;
	#line 688 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE(IExponentialFunctions, IExponentialFunctions);
	#line 690 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getExp(__extension_Float32_688_f32 const& __this ) -> const __extension_Float32_688_f32;
	#line 692 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getExp2(__extension_Float32_688_f32 const& __this ) -> const __extension_Float32_688_f32;
	#line 694 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getExp10(__extension_Float32_688_f32 const& __this ) -> const __extension_Float32_688_f32;
	#line 696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getExpM1(__extension_Float32_688_f32 const& __this ) -> const __extension_Float32_688_f32;
	#line 698 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getExp2M1(__extension_Float32_688_f32 const& __this ) -> const __extension_Float32_688_f32;
	#line 700 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getExp10M1(__extension_Float32_688_f32 const& __this ) -> const __extension_Float32_688_f32;
	#line 688 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f32, IExponentialFunctions, IExponentialFunctions, f32);
	} namespace System{
using __extensions::getExp;
using __extensions::getExp2;
using __extensions::getExp10;
using __extensions::getExpM1;
using __extensions::getExp2M1;
using __extensions::getExp10M1;

		} namespace __extensions { using namespace System;
#line 703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	using __extension_Float32_703_f32 = Builtin::f32;
	#line 703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE(ILogarithmicFunctions, ILogarithmicFunctions);
	#line 705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getLn(__extension_Float32_703_f32 const& __this ) -> const __extension_Float32_703_f32;
	#line 707 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getLnP1(__extension_Float32_703_f32 const& __this ) -> const __extension_Float32_703_f32;
	#line 709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getLog2P1(__extension_Float32_703_f32 const& __this ) -> const __extension_Float32_703_f32;
	#line 711 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getLog10P1(__extension_Float32_703_f32 const& __this ) -> const __extension_Float32_703_f32;
	#line 703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f32, ILogarithmicFunctions, ILogarithmicFunctions, f32);
	} namespace System{
using __extensions::getLn;
using __extensions::getLnP1;
using __extensions::getLog2P1;
using __extensions::getLog10P1;

		} namespace __extensions { using namespace System;
#line 714 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	using __extension_Float32_714_f32 = Builtin::f32;
	#line 714 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE(IRootFunctions, IRootFunctions);
	#line 720 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ASTRUMSTD_API auto Root(__extension_Float32_714_f32 const& __this LIFETIMEBOUND, Builtin::i32 n)  -> const typename __extension_Float32_714_f32;
	#line 793 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ASTRUMSTD_API auto Hypot(__extension_Float32_714_f32 const& __this LIFETIMEBOUND, __extension_Float32_714_f32 y)  -> const typename __extension_Float32_714_f32;
	#line 716 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getSqrt(__extension_Float32_714_f32 const& __this ) -> const __extension_Float32_714_f32;
	#line 718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getCbrt(__extension_Float32_714_f32 const& __this ) -> const __extension_Float32_714_f32;
	#line 714 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f32, IRootFunctions, IRootFunctions, f32);
	} namespace System{
using __extensions::Root;
using __extensions::Hypot;
using __extensions::getSqrt;
using __extensions::getCbrt;

		} namespace __extensions { using namespace System;
#line 822 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	using __extension_Float32_822_f32 = Builtin::f32;
	#line 822 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE(ITrigonometricFunctions, ITrigonometricFunctions);
	#line 1063 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToRadians(__extension_Float32_822_f32 const& __this LIFETIMEBOUND) noexcept -> const typename __extension_Float32_822_f32;
	#line 1065 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToDegrees(__extension_Float32_822_f32 const& __this LIFETIMEBOUND) noexcept -> const typename __extension_Float32_822_f32;
	#line 824 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getSin(__extension_Float32_822_f32 const& __this ) -> const __extension_Float32_822_f32;
	#line 826 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getCos(__extension_Float32_822_f32 const& __this ) -> const __extension_Float32_822_f32;
	#line 828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getTan(__extension_Float32_822_f32 const& __this ) -> const __extension_Float32_822_f32;
	#line 830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getCot(__extension_Float32_822_f32 const& __this ) -> const __extension_Float32_822_f32;
	#line 832 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getSec(__extension_Float32_822_f32 const& __this ) -> const __extension_Float32_822_f32;
	#line 834 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getCsc(__extension_Float32_822_f32 const& __this ) -> const __extension_Float32_822_f32;
	#line 836 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAsin(__extension_Float32_822_f32 const& __this ) -> const __extension_Float32_822_f32;
	#line 838 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAcos(__extension_Float32_822_f32 const& __this ) -> const __extension_Float32_822_f32;
	#line 840 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAtan(__extension_Float32_822_f32 const& __this ) -> const __extension_Float32_822_f32;
	#line 842 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAcot(__extension_Float32_822_f32 const& __this ) -> const __extension_Float32_822_f32;
	#line 844 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAsec(__extension_Float32_822_f32 const& __this ) -> const __extension_Float32_822_f32;
	#line 846 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAcsc(__extension_Float32_822_f32 const& __this ) -> const __extension_Float32_822_f32;
	#line 848 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getSinCos(__extension_Float32_822_f32 const& __this ) -> const std::tuple<__extension_Float32_822_f32, __extension_Float32_822_f32>;
	#line 850 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ASTRUMSTD_API auto getSinPi(__extension_Float32_822_f32 const& __this ) -> const __extension_Float32_822_f32;
	#line 888 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ASTRUMSTD_API auto getCosPi(__extension_Float32_822_f32 const& __this ) -> const __extension_Float32_822_f32;
	#line 928 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ASTRUMSTD_API auto getSinCosPi(__extension_Float32_822_f32 const& __this ) -> const std::tuple<__extension_Float32_822_f32, __extension_Float32_822_f32>;
	#line 1001 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ASTRUMSTD_API auto getTanPi(__extension_Float32_822_f32 const& __this ) -> const __extension_Float32_822_f32;
	#line 1044 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getCotPi(__extension_Float32_822_f32 const& __this ) -> const __extension_Float32_822_f32;
	#line 1046 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getSecPi(__extension_Float32_822_f32 const& __this ) -> const __extension_Float32_822_f32;
	#line 1048 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getCscPi(__extension_Float32_822_f32 const& __this ) -> const __extension_Float32_822_f32;
	#line 1050 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAsinPi(__extension_Float32_822_f32 const& __this ) -> const __extension_Float32_822_f32;
	#line 1052 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAcosPi(__extension_Float32_822_f32 const& __this ) -> const __extension_Float32_822_f32;
	#line 1054 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAtanPi(__extension_Float32_822_f32 const& __this ) -> const __extension_Float32_822_f32;
	#line 1056 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAcotPi(__extension_Float32_822_f32 const& __this ) -> const __extension_Float32_822_f32;
	#line 1058 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAsecPi(__extension_Float32_822_f32 const& __this ) -> const __extension_Float32_822_f32;
	#line 1060 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAcscPi(__extension_Float32_822_f32 const& __this ) -> const __extension_Float32_822_f32;
	#line 822 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
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
#line 1068 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	using __extension_Float32_1068_f32 = Builtin::f32;
	#line 1068 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE(IHyperbolicFunctions, IHyperbolicFunctions);
	#line 1070 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAcosh(__extension_Float32_1068_f32 const& __this ) -> const __extension_Float32_1068_f32;
	#line 1072 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAcoth(__extension_Float32_1068_f32 const& __this ) -> const __extension_Float32_1068_f32;
	#line 1074 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAcsch(__extension_Float32_1068_f32 const& __this ) -> const __extension_Float32_1068_f32;
	#line 1076 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAsech(__extension_Float32_1068_f32 const& __this ) -> const __extension_Float32_1068_f32;
	#line 1078 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAsinh(__extension_Float32_1068_f32 const& __this ) -> const __extension_Float32_1068_f32;
	#line 1080 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAtanh(__extension_Float32_1068_f32 const& __this ) -> const __extension_Float32_1068_f32;
	#line 1082 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getCosh(__extension_Float32_1068_f32 const& __this ) -> const __extension_Float32_1068_f32;
	#line 1084 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getCoth(__extension_Float32_1068_f32 const& __this ) -> const __extension_Float32_1068_f32;
	#line 1086 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getCsch(__extension_Float32_1068_f32 const& __this ) -> const __extension_Float32_1068_f32;
	#line 1088 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getSech(__extension_Float32_1068_f32 const& __this ) -> const __extension_Float32_1068_f32;
	#line 1090 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getSinh(__extension_Float32_1068_f32 const& __this ) -> const __extension_Float32_1068_f32;
	#line 1092 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getTanh(__extension_Float32_1068_f32 const& __this ) -> const __extension_Float32_1068_f32;
	#line 1068 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
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
#line 1095 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	using __extension_Float32_1095_f32 = Builtin::f32;
	#line 1095 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE(IBinaryFloatingPointIeee754, IBinaryFloatingPointIeee754);
	#line 1103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto Atan2(__extension_Float32_1095_f32 const& __this LIFETIMEBOUND, __extension_Float32_1095_f32 y)  -> const typename __extension_Float32_1095_f32;
	#line 1104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto Atan2Pi(__extension_Float32_1095_f32 const& __this LIFETIMEBOUND, __extension_Float32_1095_f32 y)  -> const typename __extension_Float32_1095_f32;
	#line 1193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto FusedMultiplyAdd(__extension_Float32_1095_f32 const& __this LIFETIMEBOUND, __extension_Float32_1095_f32 rhs, __extension_Float32_1095_f32 addend)  -> const typename __extension_Float32_1095_f32;
	#line 1195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto Ieee754Remainder(__extension_Float32_1095_f32 const& __this LIFETIMEBOUND, __extension_Float32_1095_f32 rhs)  -> const typename __extension_Float32_1095_f32;
	#line 1198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto Lerp(__extension_Float32_1095_f32 const& __this LIFETIMEBOUND, __extension_Float32_1095_f32 end, __extension_Float32_1095_f32 amount) noexcept -> const typename __extension_Float32_1095_f32;
	#line 1200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto ScaleB(__extension_Float32_1095_f32 const& __this LIFETIMEBOUND, Builtin::i32 n)  -> const typename __extension_Float32_1095_f32;
	#line 1096 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getEpsilon; template<> struct __static_getEpsilon<__extension_Float32_1095_f32> { static inline constexpr auto get() -> const __extension_Float32_1095_f32; };
	#line 1097 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getNegativeInfinity; template<> struct __static_getNegativeInfinity<__extension_Float32_1095_f32> { static inline constexpr auto get() -> const __extension_Float32_1095_f32; };
	#line 1098 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getPositiveInfinity; template<> struct __static_getPositiveInfinity<__extension_Float32_1095_f32> { static inline constexpr auto get() -> const __extension_Float32_1095_f32; };
	#line 1099 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getNaN; template<> struct __static_getNaN<__extension_Float32_1095_f32> { static inline constexpr auto get() -> const __extension_Float32_1095_f32; };
	#line 1100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getNegativeZero; template<> struct __static_getNegativeZero<__extension_Float32_1095_f32> { static inline constexpr auto get() -> const __extension_Float32_1095_f32; };
	#line 1112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getBitIncrement(__extension_Float32_1095_f32 const& __this ) -> const __extension_Float32_1095_f32;
	#line 1136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getBitDecrement(__extension_Float32_1095_f32 const& __this ) -> const __extension_Float32_1095_f32;
	#line 1155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getILogB(__extension_Float32_1095_f32 const& __this ) -> const Builtin::i32;
	#line 1157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getReciprocalEstimate(__extension_Float32_1095_f32 const& __this ) -> const __extension_Float32_1095_f32;
	#line 1166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getReciprocalSqrtEstimate(__extension_Float32_1095_f32 const& __this ) -> const __extension_Float32_1095_f32;
	#line 1177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getCategory(__extension_Float32_1095_f32 const& __this ) -> const FloatingPointCategory;
	#line 1203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getGamma(__extension_Float32_1095_f32 const& __this ) -> const __extension_Float32_1095_f32;
	#line 1205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getLnGamma(__extension_Float32_1095_f32 const& __this ) -> const __extension_Float32_1095_f32;
	#line 1207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getErf(__extension_Float32_1095_f32 const& __this ) -> const __extension_Float32_1095_f32;
	#line 1209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getErfc(__extension_Float32_1095_f32 const& __this ) -> const __extension_Float32_1095_f32;
	#line 1095 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
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
#line 1212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	using __extension_Float32_1212_f32 = Builtin::f32;
	#line 1212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	ADV_CHECK_INTERFACE(IBinaryFloatFormatInfo, IBinaryFloatFormatInfo);
	#line 1213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getNumberBufferLength; template<> struct __static_getNumberBufferLength<__extension_Float32_1212_f32> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getZeroBits; template<> struct __static_getZeroBits<__extension_Float32_1212_f32> { static inline constexpr auto get() -> const Builtin::u128; };
	#line 1215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getInfinityBits; template<> struct __static_getInfinityBits<__extension_Float32_1212_f32> { static inline constexpr auto get() -> const Builtin::u128; };
	#line 1216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getNormalMantissaMask; template<> struct __static_getNormalMantissaMask<__extension_Float32_1212_f32> { static inline constexpr auto get() -> const Builtin::u128; };
	#line 1217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getDenormalMantissaMask; template<> struct __static_getDenormalMantissaMask<__extension_Float32_1212_f32> { static inline constexpr auto get() -> const Builtin::u128; };
	#line 1218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getMinBinaryExponent; template<> struct __static_getMinBinaryExponent<__extension_Float32_1212_f32> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getMaxBinaryExponent; template<> struct __static_getMaxBinaryExponent<__extension_Float32_1212_f32> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getMinDecimalExponent; template<> struct __static_getMinDecimalExponent<__extension_Float32_1212_f32> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getMaxDecimalExponent; template<> struct __static_getMaxDecimalExponent<__extension_Float32_1212_f32> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getExponentBias; template<> struct __static_getExponentBias<__extension_Float32_1212_f32> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getExponentBits; template<> struct __static_getExponentBits<__extension_Float32_1212_f32> { static inline constexpr auto get() -> const Builtin::u128; };
	#line 1224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getOverflowDecimalExponent; template<> struct __static_getOverflowDecimalExponent<__extension_Float32_1212_f32> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getInfinityExponent; template<> struct __static_getInfinityExponent<__extension_Float32_1212_f32> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getNormalMantissaBits; template<> struct __static_getNormalMantissaBits<__extension_Float32_1212_f32> { static inline constexpr auto get() -> const Builtin::u16; };
	#line 1227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getDenormalMantissaBits; template<> struct __static_getDenormalMantissaBits<__extension_Float32_1212_f32> { static inline constexpr auto get() -> const Builtin::u16; };
	#line 1228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getMinFastFloatDecimalExponent; template<> struct __static_getMinFastFloatDecimalExponent<__extension_Float32_1212_f32> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getMaxFastFloatDecimalExponent; template<> struct __static_getMaxFastFloatDecimalExponent<__extension_Float32_1212_f32> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getMinExponentRoundToEven; template<> struct __static_getMinExponentRoundToEven<__extension_Float32_1212_f32> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getMaxExponentRoundToEven; template<> struct __static_getMaxExponentRoundToEven<__extension_Float32_1212_f32> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getMaxExponentFastPath; template<> struct __static_getMaxExponentFastPath<__extension_Float32_1212_f32> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class __TT> struct __static_getMaxMantissaFastPath; template<> struct __static_getMaxMantissaFastPath<__extension_Float32_1212_f32> { static inline constexpr auto get() -> const Builtin::u128; };
	#line 1212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
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
#line 395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	namespace __Float32_Protected { inline constexpr auto BiasedExponent(Builtin::f32 value) noexcept -> const Builtin::u8; }
#line 396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	namespace __Float32_Protected { inline constexpr auto Exponent(Builtin::f32 value) noexcept -> const Builtin::i8; }
#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	namespace __Float32_Protected { inline constexpr auto Significand(Builtin::f32 value) noexcept -> const Builtin::u32; }
#line 398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	namespace __Float32_Protected { inline constexpr auto TrailingSignificand(Builtin::f32 value) noexcept -> const Builtin::u32; }
#line 400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	namespace __Float32_Protected { inline constexpr auto ExtractBiasedExponentFromBits(Builtin::u32 bits) noexcept -> const Builtin::u8; }
#line 401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	namespace __Float32_Protected { inline constexpr auto ExtractTrailingSignificandFromBits(Builtin::u32 bits) noexcept -> const Builtin::u32; }
//###############################################################################
//# Global compile-time constants
//###############################################################################
#line 372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
namespace __Float32_Protected { inline constexpr auto SignMask = Builtin::u32(0x80000000U); }
#line 373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
namespace __Float32_Protected { inline constexpr auto SignShift = Builtin::u32(31U); }
#line 374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
namespace __Float32_Protected { inline constexpr Builtin::u8 ShiftedSignMask = Builtin::u8{__Float32_Protected::SignMask >> __Float32_Protected::SignShift}; }
#line 376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
namespace __Float32_Protected { inline constexpr auto BiasedExponentMask = Builtin::u32(0x7F800000U); }
#line 377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
namespace __Float32_Protected { inline constexpr auto BiasedExponentShift = Builtin::u8((unsigned char)23); }
#line 378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
namespace __Float32_Protected { inline constexpr Builtin::u8 ShiftedBiasedExponentMask = Builtin::u8{__Float32_Protected::BiasedExponentMask >> __Float32_Protected::BiasedExponentShift}; }
#line 380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
namespace __Float32_Protected { inline constexpr auto TrailingSignificandMask = Builtin::u32(0x007FFFFFU); }
#line 382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
namespace __Float32_Protected { inline constexpr auto MinSign = Builtin::u8(0U); }
#line 383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
namespace __Float32_Protected { inline constexpr auto MaxSign = Builtin::u8(1U); }
#line 384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
namespace __Float32_Protected { inline constexpr auto MinBiasedExponent = ADV_USPCS(MinValue, Builtin::u8)(); }
#line 385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
namespace __Float32_Protected { inline constexpr auto MaxBiasedExponent = ADV_USPCS(MaxValue, Builtin::u8)(); }
#line 386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
namespace __Float32_Protected { inline constexpr auto ExpBias = Builtin::u8(127U); }
#line 387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
namespace __Float32_Protected { inline constexpr auto MinExponent = Builtin::i8(-126); }
#line 388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
namespace __Float32_Protected { inline constexpr auto MaxExponent = Builtin::i8(127); }
#line 389 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
namespace __Float32_Protected { inline constexpr auto MinTrailingSignificand = ADV_USPCS(MinValue, Builtin::u32)(); }
#line 390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
namespace __Float32_Protected { inline constexpr auto MaxTrailingSignificand = Builtin::u32(0x007FFFFFU); }
#line 392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
namespace __Float32_Protected { inline constexpr auto TrailingSignificandLength = Builtin::u8((unsigned char)23); }
#line 393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
namespace __Float32_Protected { inline constexpr auto SignificandLength = __Float32_Protected::TrailingSignificandLength + Builtin::u8((unsigned char)1); }
//###############################################################################
//# Function definitions
//###############################################################################

namespace __Float32_Protected {
		#line 395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		inline constexpr auto BiasedExponent(Builtin::f32 value) noexcept -> const Builtin::u8
		{
			#line 395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			ADV_EXPRESSION_BODY(__Float32_Protected::ExtractBiasedExponentFromBits(ADV_UPCS(Bits)(value.__ref()))); 
		}
	}
namespace __Float32_Protected {
		#line 396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		inline constexpr auto Exponent(Builtin::f32 value) noexcept -> const Builtin::i8
		{
			#line 396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			ADV_EXPRESSION_BODY(Builtin::i8{__Float32_Protected::BiasedExponent(value) - __Float32_Protected::ExpBias}); 
		}
	}
namespace __Float32_Protected {
		#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		inline constexpr auto Significand(Builtin::f32 value) noexcept -> const Builtin::u32
		{
			#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			ADV_EXPRESSION_BODY(__Float32_Protected::TrailingSignificand(value) | (__Float32_Protected::BiasedExponent(value) != Builtin::i32(0) ? (Builtin::u32(1U) << __Float32_Protected::BiasedExponentShift) : Builtin::u32(0U))); 
		}
	}
namespace __Float32_Protected {
		#line 398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		inline constexpr auto TrailingSignificand(Builtin::f32 value) noexcept -> const Builtin::u32
		{
			#line 398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			ADV_EXPRESSION_BODY(__Float32_Protected::ExtractTrailingSignificandFromBits(ADV_UPCS(Bits)(value.__ref()))); 
		}
	}
namespace __Float32_Protected {
		#line 400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		inline constexpr auto ExtractBiasedExponentFromBits(Builtin::u32 bits) noexcept -> const Builtin::u8
		{
			#line 400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			ADV_EXPRESSION_BODY(Builtin::u8{(bits >> __Float32_Protected::BiasedExponentShift) & __Float32_Protected::ShiftedBiasedExponentMask}); 
		}
	}
namespace __Float32_Protected {
		#line 401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		inline constexpr auto ExtractTrailingSignificandFromBits(Builtin::u32 bits) noexcept -> const Builtin::u32
		{
			#line 401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			ADV_EXPRESSION_BODY(bits & __Float32_Protected::TrailingSignificandMask); 
		}
	}
} namespace __extensions { using namespace System;
#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getMinValue<__extension_Float32_15_f32>::get() -> const __extension_Float32_1212_f32
	{
		#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32(-3.402823466e+38f)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getMaxValue<__extension_Float32_15_f32>::get() -> const __extension_Float32_1212_f32
	{
		#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(+Builtin::f32(3.402823466e+38f)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	
} namespace __extensions { using namespace System;
#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto operator<=>(__extension_Float32_20_f32 const& __this LIFETIMEBOUND, Builtin::Nullable<__extension_Float32_1212_f32> rhs) noexcept -> const Builtin::i32
	{
		#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		{
			#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			if ((!Builtin::Is(rhs, nullptr))) {
				#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				auto __tmp0 = *rhs; const auto& rhs = __tmp0;
				
				#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				return __this <=> rhs;
			}
		}
		#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return Builtin::i32(1);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_FromBits<__extension_Float32_20_f32>::get(Builtin::u32 bits)  -> const typename __extension_Float32_20_f32
	{
		#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::BitCast<__extension_Float32_1212_f32>(bits)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getBits(__extension_Float32_20_f32 const& __this ) -> const Builtin::u32
	{
		#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::BitCast<Builtin::u32>(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getBitWidth<__extension_Float32_20_f32>::get() -> const Builtin::u32
	{
		#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(32U)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getMinPositiveValue<__extension_Float32_20_f32>::get() -> const __extension_Float32_1212_f32
	{
		#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32(1.17549435e-38f)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getHashCode(__extension_Float32_20_f32 const& __this ) -> const Builtin::u64
	{
		#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		auto bits = ADV_UPCS(Bits)(__this.__ref()); 
		#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if ((((bits - Builtin::u32(1U)) & Builtin::u32(0x7FFFFFFFU)) <=> Builtin::u32(0x7F800000U)) >= 0) {
			#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			bits &= Builtin::u32(0x7F800000U);
		}
		#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return bits;
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	
} namespace __extensions { using namespace System;
#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToBoolean(__extension_Float32_77_f32 const& __this LIFETIMEBOUND) noexcept -> const bool
	{
		#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(__this != Builtin::i32(0)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToInt8(__extension_Float32_77_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i8
	{
		#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i8>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToUInt8(__extension_Float32_77_f32 const& __this LIFETIMEBOUND)  -> const Builtin::u8
	{
		#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u8>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToInt16(__extension_Float32_77_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i16
	{
		#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i16>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToUInt16(__extension_Float32_77_f32 const& __this LIFETIMEBOUND)  -> const Builtin::u16
	{
		#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u16>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToInt32(__extension_Float32_77_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i32>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 84 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToUInt32(__extension_Float32_77_f32 const& __this LIFETIMEBOUND)  -> const Builtin::u32
	{
		#line 84 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u32>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 85 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToInt64(__extension_Float32_77_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i64
	{
		#line 85 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i64>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 86 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToUInt64(__extension_Float32_77_f32 const& __this LIFETIMEBOUND)  -> const Builtin::u64
	{
		#line 86 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u64>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToInt128(__extension_Float32_77_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i128
	{
		#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i128>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToUInt128(__extension_Float32_77_f32 const& __this LIFETIMEBOUND)  -> const Builtin::u128
	{
		#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u128>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToIsize(__extension_Float32_77_f32 const& __this LIFETIMEBOUND)  -> const Builtin::isize
	{
		#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::isize>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToUsize(__extension_Float32_77_f32 const& __this LIFETIMEBOUND)  -> const Builtin::usize
	{
		#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::usize>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToFloat32(__extension_Float32_77_f32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::f32
	{
		#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToFloat64(__extension_Float32_77_f32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::f64
	{
		#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToByte(__extension_Float32_77_f32 const& __this LIFETIMEBOUND)  -> const Builtin::char8
	{
		#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u8>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToChar(__extension_Float32_77_f32 const& __this LIFETIMEBOUND)  -> const Builtin::char16
	{
		#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u16>(__this)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	
} namespace __extensions { using namespace System;
#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class T> inline constexpr auto _operator_div_mod(__extension_Float32_99_f32 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_Float32_1212_f32, __extension_Float32_1212_f32>
	{
		#line 104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return std::make_tuple(__this / Builtin::f32{rhs}, __this % Builtin::f32{rhs});
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class T> inline constexpr auto _operator_div_not(__extension_Float32_99_f32 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Float32_99_f32
	{
		#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Round)((__this / rhs).__ref())); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto _operator_div_not_eq(__extension_Float32_99_f32 & __this , auto rhs)  -> typename __extension_Float32_99_f32&
	{
		#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_div_not)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class T> inline constexpr auto _operator_div_lt(__extension_Float32_99_f32 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Float32_99_f32
	{
		#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Floor)((__this / rhs).__ref())); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto _operator_div_lt_eq(__extension_Float32_99_f32 & __this , auto rhs)  -> typename __extension_Float32_99_f32&
	{
		#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_div_lt)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	template<class T> inline constexpr auto _operator_div_gt(__extension_Float32_99_f32 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Float32_99_f32
	{
		#line 115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Ceil)((__this / rhs).__ref())); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto _operator_div_gt_eq(__extension_Float32_99_f32 & __this , auto rhs)  -> typename __extension_Float32_99_f32&
	{
		#line 117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_div_gt)(__this, rhs)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	
} namespace __extensions { using namespace System;
#line 123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto _operator_xor_xor(__extension_Float32_121_f32 const& __this LIFETIMEBOUND, Builtin::i32 exp)  -> const typename __extension_Float32_121_f32
	{
		#line 125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return Builtin::f32(1.0f);
		}
		#line 130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if ((exp <=> Builtin::i32(0)) < 0) {
			#line 131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return Builtin::f32(1.0f) / ADV_UFCS(_operator_xor_xor)(__this, (-exp));
		}
		#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		auto base = __this; 
		#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		auto result = Builtin::f32(1.0f); 
		#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (std::is_constant_evaluated()) {
			#line 138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			while ((exp <=> Builtin::i32(1)) > 0) 
			{
				#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
					#line 140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					result *= base;
				}
				#line 142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				ADV_UFCS(_operator_bsl_eq)(exp, Builtin::i32(2));
				#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				base *= base;
			}
			#line 145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return result * base;
		} else {
			#line 146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			{
				#line 147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				for (;;) 
				{
					#line 148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
						#line 149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						result *= base;
						#line 150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						if (exp == Builtin::i32(1)) {
							#line 151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							return result;
						}
					}
					#line 153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					ADV_UFCS(_operator_bsl_eq)(exp, Builtin::i32(2));
					#line 154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					base *= base;
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto _operator_xor_xor_eq(__extension_Float32_121_f32 & __this , Builtin::i32 exp)  -> typename __extension_Float32_121_f32&
	{
		#line 159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_xor_xor)(__this, exp)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	
} namespace __extensions { using namespace System;
#line 199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto MaxMagnitude(__extension_Float32_162_f32 const& __this LIFETIMEBOUND, __extension_Float32_1212_f32 rhs) noexcept -> const typename __extension_Float32_162_f32
	{
		#line 201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		auto ax = ADV_UPCS(Abs)(__this.__ref()); 
		#line 202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		auto ay = ADV_UPCS(Abs)(rhs.__ref()); 
		#line 204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if ((ax <=> ay) > 0 || ADV_UPCS(IsNaN)(ax.__ref())) {
			#line 206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return __this;
		}
		#line 209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (ax == ay) {
			#line 211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return ADV_UPCS(IsNegative)(__this.__ref()) ? rhs : __this;
		}
		#line 214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return rhs;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto MaxMagnitudeNumber(__extension_Float32_162_f32 const& __this LIFETIMEBOUND, __extension_Float32_1212_f32 rhs) noexcept -> const typename __extension_Float32_162_f32
	{
		#line 219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		auto ax = ADV_UPCS(Abs)(__this.__ref()); 
		#line 220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		auto ay = ADV_UPCS(Abs)(rhs.__ref()); 
		#line 222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if ((ax <=> ay) > 0 || ADV_UPCS(IsNaN)(ay.__ref())) {
			#line 224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return __this;
		}
		#line 227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (ax == ay) {
			#line 229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return ADV_UPCS(IsNegative)(__this.__ref()) ? rhs : __this;
		}
		#line 232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return rhs;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto MinMagnitude(__extension_Float32_162_f32 const& __this LIFETIMEBOUND, __extension_Float32_1212_f32 rhs) noexcept -> const typename __extension_Float32_162_f32
	{
		#line 237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		auto ax = ADV_UPCS(Abs)(__this.__ref()); 
		#line 238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		auto ay = ADV_UPCS(Abs)(rhs.__ref()); 
		#line 240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if ((ax <=> ay) < 0 || ADV_UPCS(IsNaN)(ax.__ref())) {
			#line 242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return __this;
		}
		#line 245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (ax == ay) {
			#line 247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return ADV_UPCS(IsNegative)(__this.__ref()) ? __this : rhs;
		}
		#line 250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return rhs;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto MinMagnitudeNumber(__extension_Float32_162_f32 const& __this LIFETIMEBOUND, __extension_Float32_1212_f32 rhs) noexcept -> const typename __extension_Float32_162_f32
	{
		#line 255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		auto ax = ADV_UPCS(Abs)(__this.__ref()); 
		#line 256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		auto ay = ADV_UPCS(Abs)(rhs.__ref()); 
		#line 258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if ((ax <=> ay) < 0 || ADV_UPCS(IsNaN)(ay.__ref())) {
			#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return __this;
		}
		#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (ax == ay) {
			#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return ADV_UPCS(IsNegative)(__this.__ref()) ? __this : rhs;
		}
		#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return rhs;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToInt8(__extension_Float32_162_f32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i8
	{
		#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i8>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToUInt8(__extension_Float32_162_f32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u8
	{
		#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u8>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToInt16(__extension_Float32_162_f32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i16
	{
		#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i16>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToUInt16(__extension_Float32_162_f32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u16
	{
		#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u16>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToInt32(__extension_Float32_162_f32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i32
	{
		#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i32>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToUInt32(__extension_Float32_162_f32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u32
	{
		#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u32>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToInt64(__extension_Float32_162_f32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i64
	{
		#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i64>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToUInt64(__extension_Float32_162_f32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u64
	{
		#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u64>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToInt128(__extension_Float32_162_f32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i128
	{
		#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i128>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToUInt128(__extension_Float32_162_f32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u128
	{
		#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u128>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToIsize(__extension_Float32_162_f32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::isize
	{
		#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::isize>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto NarrowToUsize(__extension_Float32_162_f32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::usize
	{
		#line 294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::usize>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getOne<__extension_Float32_162_f32>::get() -> const __extension_Float32_1212_f32
	{
		#line 163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32(1.0f)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getZero<__extension_Float32_162_f32>::get() -> const __extension_Float32_1212_f32
	{
		#line 164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32(0.0f)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getRadix<__extension_Float32_162_f32>::get() -> const Builtin::i32
	{
		#line 165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(2)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getAbs(__extension_Float32_162_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		constexpr auto mask = Builtin::u32(0x7FFFFFFFU);
		#line 170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		Builtin::u32 raw = ADV_UPCS(Bits)(__this.__ref()); 
		#line 171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return ADV_USFCS((Builtin::f32), FromBits)(raw & mask);
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsCanonical(__extension_Float32_162_f32 const& __this ) -> const bool
	{
		#line 173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsComplexNumber(__extension_Float32_162_f32 const& __this ) -> const bool
	{
		#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsEvenInteger(__extension_Float32_162_f32 const& __this ) -> const bool
	{
		#line 175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsInteger)(__this.__ref()) && (ADV_UPCS(Abs)((__this % Builtin::i32(2)).__ref()) == Builtin::i32(0))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsFinite(__extension_Float32_162_f32 const& __this ) -> const bool
	{
		#line 176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(((ADV_UPCS(Bits)(__this.__ref()) & Builtin::u32(0x7FFFFFFFU)) <=> Builtin::u32(0x7F800000U)) < 0); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsImaginaryNumber(__extension_Float32_162_f32 const& __this ) -> const bool
	{
		#line 177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsInfinity(__extension_Float32_162_f32 const& __this ) -> const bool
	{
		#line 178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY((ADV_UPCS(Bits)(__this.__ref()) & Builtin::u32(0x7FFFFFFFU)) == Builtin::u32(0x7F800000U)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsInteger(__extension_Float32_162_f32 const& __this ) -> const bool
	{
		#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsFinite)(__this.__ref()) && (__this == ADV_UPCS(Truncate)(__this.__ref()))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsNaN(__extension_Float32_162_f32 const& __this ) -> const bool
	{
		#line 180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(__this != __this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsNegative(__extension_Float32_162_f32 const& __this ) -> const bool
	{
		#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY((Builtin::BitCast<Builtin::i32>(__this) <=> Builtin::i32(0)) < 0); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsNegativeInfinity(__extension_Float32_162_f32 const& __this ) -> const bool
	{
		#line 182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(__this == ADV_USPCS(NegativeInfinity, __extension_Float32_1212_f32)()); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsNormal(__extension_Float32_162_f32 const& __this ) -> const bool
	{
		#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		auto bits = Builtin::BitCast<Builtin::u32>(__this) & Builtin::u32(0x7FFFFFFFU); 
		#line 186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return ((bits <=> Builtin::u32(0x7F800000U)) < 0) && (bits != Builtin::i32(0)) && ((bits & Builtin::i32(0x7F800000)) != Builtin::i32(0));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsOddInteger(__extension_Float32_162_f32 const& __this ) -> const bool
	{
		#line 188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsInteger)(__this.__ref()) && (ADV_UPCS(Abs)((__this % Builtin::i32(2)).__ref()) == Builtin::i32(1))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsPositive(__extension_Float32_162_f32 const& __this ) -> const bool
	{
		#line 189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY((Builtin::BitCast<Builtin::i32>(__this) <=> Builtin::i32(0)) >= 0); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsPositiveInfinity(__extension_Float32_162_f32 const& __this ) -> const bool
	{
		#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(__this == ADV_USPCS(PositiveInfinity, __extension_Float32_1212_f32)()); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsRealNumber(__extension_Float32_162_f32 const& __this ) -> const bool
	{
		#line 191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(__this == __this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsSubnormal(__extension_Float32_162_f32 const& __this ) -> const bool
	{
		#line 194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		auto bits = ADV_UPCS(Bits)(__this.__ref()) & Builtin::u32(0x7FFFFFFFU); 
		#line 195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return ((bits <=> Builtin::u32(0x7F800000U)) < 0) && (bits != Builtin::i32(0)) && ((bits & Builtin::i32(0x7F800000)) == Builtin::i32(0));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsZero(__extension_Float32_162_f32 const& __this ) -> const bool
	{
		#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(__this == ADV_USPCS(Zero, __extension_Float32_1212_f32)()); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	
} namespace __extensions { using namespace System;
#line 298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getMinusOne<__extension_Float32_297_f32>::get() -> const __extension_Float32_1212_f32
	{
		#line 298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32(-1.0f)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	
} namespace __extensions { using namespace System;
#line 309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto CopySign(__extension_Float32_301_f32 const& __this LIFETIMEBOUND, __extension_Float32_1212_f32 sign) noexcept -> const typename __extension_Float32_301_f32
	{
		#line 311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (std::is_constant_evaluated()) {
			#line 312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			if ((sign <=> Builtin::i32(0)) < 0 || (sign == Builtin::i32(0) && (Builtin::f32(1.0f) / sign <=> Builtin::i32(0)) < 0)) {
				#line 313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				return (__this <=> Builtin::i32(0)) < 0 ? __this : -__this;
			}
			#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return (__this <=> Builtin::i32(0)) < 0 ? -__this : __this;
		} else {
			#line 316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			{
				#line 317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				return std::copysignf(__this, sign);
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto Max(__extension_Float32_301_f32 const& __this LIFETIMEBOUND, __extension_Float32_1212_f32 rhs) noexcept -> const typename __extension_Float32_301_f32
	{
		#line 323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (__this != rhs) {
			#line 324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			if (!ADV_UPCS(IsNaN)(__this.__ref())) {
				#line 325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				return (rhs <=> __this) < 0 ? __this : rhs;
			}
			#line 327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return __this;
		}
		#line 329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return ADV_UPCS(IsNegative)(rhs.__ref()) ? __this : rhs;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto MaxNumber(__extension_Float32_301_f32 const& __this LIFETIMEBOUND, __extension_Float32_1212_f32 rhs) noexcept -> const typename __extension_Float32_301_f32
	{
		#line 333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (__this != rhs) {
			#line 334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			if (!ADV_UPCS(IsNaN)(rhs.__ref())) {
				#line 335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				return (rhs <=> __this) < 0 ? __this : rhs;
			}
			#line 337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return __this;
		}
		#line 339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return ADV_UPCS(IsNegative)(rhs.__ref()) ? __this : rhs;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto Min(__extension_Float32_301_f32 const& __this LIFETIMEBOUND, __extension_Float32_1212_f32 rhs) noexcept -> const typename __extension_Float32_301_f32
	{
		#line 343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (__this != rhs) {
			#line 344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			if (!ADV_UPCS(IsNaN)(__this.__ref())) {
				#line 345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				return (__this <=> rhs) < 0 ? __this : rhs;
			}
			#line 347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return __this;
		}
		#line 349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return ADV_UPCS(IsNegative)(__this.__ref()) ? __this : rhs;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto MinNumber(__extension_Float32_301_f32 const& __this LIFETIMEBOUND, __extension_Float32_1212_f32 rhs) noexcept -> const typename __extension_Float32_301_f32
	{
		#line 353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (__this != rhs) {
			#line 354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			if (!ADV_UPCS(IsNaN)(rhs.__ref())) {
				#line 355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				return (__this <=> rhs) < 0 ? __this : rhs;
			}
			#line 357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return __this;
		}
		#line 359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return ADV_UPCS(IsNegative)(__this.__ref()) ? __this : rhs;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto Clamp(__extension_Float32_301_f32 const& __this LIFETIMEBOUND, __extension_Float32_1212_f32 min, __extension_Float32_1212_f32 max)  -> const typename __extension_Float32_301_f32
	{
		#line 363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if ((min <=> max) > 0) {
			#line 364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			Builtin::Throw(Builtin::InvalidOperationException{});
		}
		#line 367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return (__this <=> min) < 0 ? min : (__this <=> max) > 0 ? max : __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getSign(__extension_Float32_301_f32 const& __this ) -> const Builtin::i32
	{
		#line 302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return [&]() 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
		{
			#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			auto __tmp__valid_302 = Builtin::Cast<false, std::decay_t<decltype(__this)>::__self>(__this);
			#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			if(__tmp__valid_302.IsValid() && Builtin::Is(*__tmp__valid_302, Builtin::i32(0))) {
				#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				
				return Builtin::i32(0);
			}
			else {
				#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				if(__tmp__valid_302.IsValid() && Builtin::IsLess(*__tmp__valid_302, Builtin::i32(0))) {
					#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					
					return Builtin::i32(-1);
				}
				else {
					#line 305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					if(__tmp__valid_302.IsValid() && Builtin::IsGreater(*__tmp__valid_302, Builtin::i32(0))) {
						#line 305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						
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
#line 444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto Log(__extension_Float32_404_f32 const& __this LIFETIMEBOUND, __extension_Float32_1212_f32 base) noexcept -> const typename __extension_Float32_404_f32
	{
		#line 446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (ADV_UPCS(IsNaN)(__this.__ref())) {
			#line 447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return __this;
		}
		#line 449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (ADV_UPCS(IsNaN)(base.__ref())) {
			#line 450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return base;
		}
		#line 453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (base == Builtin::i32(1)) {
			#line 454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return ADV_USPCS(NaN, Builtin::f32)();
		}
		#line 456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (__this != Builtin::i32(1) && (base == Builtin::i32(0) || ADV_UPCS(IsPositiveInfinity)(base.__ref()))) {
			#line 457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return ADV_USPCS(NaN, Builtin::f32)();
		}
		#line 460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return ADV_UPCS(Ln)(__this.__ref()) / ADV_UPCS(Ln)(base.__ref());
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto Midpoint(__extension_Float32_404_f32 const& __this LIFETIMEBOUND, __extension_Float32_1212_f32 rhs) noexcept -> const typename __extension_Float32_404_f32
	{
		#line 467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if constexpr (Builtin::Is64BitTarget()) {
			#line 468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return Builtin::f32{(Builtin::f64{__this} + Builtin::f64{rhs}) / Builtin::f64(2.0)};
		} else {
			#line 469 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			{
				#line 470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				constexpr auto riskValue = ADV_USPCS(MaxValue, __extension_Float32_1212_f32)() / Builtin::f32(2.0f);
				#line 472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				if ((ADV_UPCS(Abs)(__this.__ref()) <=> riskValue) <= 0 && (ADV_UPCS(Abs)(rhs.__ref()) <=> riskValue) <= 0) {
					#line 473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					return (__this + rhs) / Builtin::f32(2.0f);
				} else {
					#line 474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					{
						#line 475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						return (__this / Builtin::f32(2.0f)) + (rhs / Builtin::f32(2.0f));
					}
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 481 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto IsMultipleOf(__extension_Float32_404_f32 const& __this LIFETIMEBOUND, __extension_Float32_1212_f32 rhs) noexcept -> const bool
	{
		#line 483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (rhs == Builtin::i32(0)) {
			#line 484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return __this == Builtin::i32(0);
		}
		#line 487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (rhs == Builtin::i32(-1)) {
			#line 488 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return Builtin::Boolean(true);
		}
		#line 491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return __this % rhs == Builtin::i32(0);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getAllBitsSet<__extension_Float32_404_f32>::get() -> const __extension_Float32_1212_f32
	{
		#line 406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Builtin::f32), FromBits)(Builtin::u32(0xFFFFFFFFU))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getIsPow2(__extension_Float32_404_f32 const& __this ) -> const bool
	{
		#line 411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		auto bits = ADV_UPCS(Bits)(__this.__ref()); 
		#line 413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if ((ADV_UFCS(NarrowToInt32)(bits.__ref()) <=> Builtin::i32(0)) <= 0) {
			#line 414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return Builtin::Boolean(false);
		}
		#line 417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		auto biasedExponent = __Float32_Protected::ExtractBiasedExponentFromBits(bits); 
		#line 418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		auto trailingSignificand = __Float32_Protected::ExtractTrailingSignificandFromBits(bits); 
		#line 421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (biasedExponent == __Float32_Protected::MinBiasedExponent) {
			#line 422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return ADV_UPCS(PopCount)(trailingSignificand.__ref()) == Builtin::i32(1);
		}
		#line 425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (biasedExponent == __Float32_Protected::MaxBiasedExponent) {
			#line 426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return Builtin::Boolean(false);
		}
		#line 430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return trailingSignificand == __Float32_Protected::MinTrailingSignificand;
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getLog2(__extension_Float32_404_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::log2f(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getLog10(__extension_Float32_404_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::log10f(__this)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	
} namespace __extensions { using namespace System;
#line 497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getPi<__extension_Float32_495_f32>::get() -> const __extension_Float32_1212_f32
	{
		#line 497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32(3.14159265f)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getE<__extension_Float32_495_f32>::get() -> const __extension_Float32_1212_f32
	{
		#line 498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32(2.71828183f)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getTau<__extension_Float32_495_f32>::get() -> const __extension_Float32_1212_f32
	{
		#line 499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32(6.283185307f)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	
} namespace __extensions { using namespace System;
#line 520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto CeilToInt32(__extension_Float32_502_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i32>(ADV_UPCS(Ceil)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto CeilToInt64(__extension_Float32_502_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i64
	{
		#line 521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i64>(ADV_UPCS(Ceil)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto CeilToInt128(__extension_Float32_502_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i128
	{
		#line 522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i128>(ADV_UPCS(Ceil)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto FloorToInt32(__extension_Float32_502_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i32>(ADV_UPCS(Floor)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 538 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto FloorToInt64(__extension_Float32_502_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i64
	{
		#line 538 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i64>(ADV_UPCS(Floor)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto FloorToInt128(__extension_Float32_502_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i128
	{
		#line 539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i128>(ADV_UPCS(Floor)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto TruncateToInt32(__extension_Float32_502_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i32>(ADV_UPCS(Truncate)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto TruncateToInt64(__extension_Float32_502_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i64
	{
		#line 554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i64>(ADV_UPCS(Truncate)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto TruncateToInt128(__extension_Float32_502_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i128
	{
		#line 555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i128>(ADV_UPCS(Truncate)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto RoundToInt32(__extension_Float32_502_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i32>(ADV_UPCS(Round)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto RoundToInt64(__extension_Float32_502_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i64
	{
		#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i64>(ADV_UPCS(Round)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto RoundToInt128(__extension_Float32_502_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i128
	{
		#line 571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i128>(ADV_UPCS(Round)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto RoundTiesEvenToInt32(__extension_Float32_502_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i32>(ADV_UPCS(RoundTiesEven)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto RoundTiesEvenToInt64(__extension_Float32_502_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i64
	{
		#line 620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i64>(ADV_UPCS(RoundTiesEven)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 621 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto RoundTiesEvenToInt128(__extension_Float32_502_f32 const& __this LIFETIMEBOUND)  -> const Builtin::i128
	{
		#line 621 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i128>(ADV_UPCS(RoundTiesEven)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 623 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto Round(__extension_Float32_502_f32 const& __this LIFETIMEBOUND, Builtin::u32 digits)  -> const typename __extension_Float32_502_f32
	{
		#line 623 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Round)(__this.__ref(), digits, ADV_USPCS(AwayFromZero, MidpointRounding)())); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto Round(__extension_Float32_502_f32 const& __this LIFETIMEBOUND, MidpointRounding rounding)  -> const typename __extension_Float32_502_f32
	{
		#line 626 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (std::is_constant_evaluated()) {
			#line 627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			if (rounding == ADV_USPCS(AwayFromZero, MidpointRounding)()) {
				#line 628 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				return ADV_UPCS(Round)(__this.__ref());
			}
			#line 630 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			if (rounding == ADV_USPCS(ToEven, MidpointRounding)()) {
				#line 631 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				return ADV_UPCS(RoundTiesEven)(__this.__ref());
			}
		}
		#line 634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return ADV_UFCS(Round)(__this.__ref(), Builtin::u32(0U), rounding);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto Round(__extension_Float32_502_f32 const& __this LIFETIMEBOUND, Builtin::u32 digits, MidpointRounding rounding)  -> const typename __extension_Float32_502_f32
	{
		#line 638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		constexpr auto maxRoundingDigits = Builtin::u32(6U);
		#line 639 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		constexpr auto singleRoundLimit = Builtin::f32(1e8f);
		#line 642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if ((digits <=> maxRoundingDigits) > 0) {
			#line 643 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		auto result = __this; 
		#line 647 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if ((ADV_UPCS(Abs)(__this.__ref()) <=> singleRoundLimit) < 0) {
			#line 649 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			const auto pow10 = ADV_UFCS(_operator_xor_xor)(Builtin::f32(10.0f), Builtin::i32{digits}); 
			#line 650 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			result *= pow10;
			#line 652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			result = [&]() 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
			{
				#line 654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				auto __tmp__valid_652 = Builtin::Cast<false, std::decay_t<decltype(rounding)>::__self>(rounding);
				#line 654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				if(__tmp__valid_652.IsValid() && Builtin::Is(*__tmp__valid_652, decltype(rounding)::ToEven)) {
					#line 654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					const auto& rounding = *__tmp__valid_652;
					return ADV_UPCS(RoundTiesEven)(result.__ref());
				}
				else {
					#line 655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					if(__tmp__valid_652.IsValid() && Builtin::Is(*__tmp__valid_652, decltype(rounding)::AwayFromZero)) {
						#line 655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						const auto& rounding = *__tmp__valid_652;
						return ADV_UPCS(Round)(result.__ref());
					}
					else {
						#line 656 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						if(__tmp__valid_652.IsValid() && Builtin::Is(*__tmp__valid_652, decltype(rounding)::ToZero)) {
							#line 656 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							const auto& rounding = *__tmp__valid_652;
							return ADV_UPCS(Truncate)(result.__ref());
						}
						else {
							#line 657 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							if(__tmp__valid_652.IsValid() && Builtin::Is(*__tmp__valid_652, decltype(rounding)::ToNegativeInfinity)) {
								#line 657 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
								const auto& rounding = *__tmp__valid_652;
								return ADV_UPCS(Floor)(result.__ref());
							}
							else {
								#line 658 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
								if(__tmp__valid_652.IsValid() && Builtin::Is(*__tmp__valid_652, decltype(rounding)::ToPositiveInfinity)) {
									#line 658 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
									const auto& rounding = *__tmp__valid_652;
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
			#line 662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			result /= pow10;
		}
		#line 665 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getFractionalPart(__extension_Float32_502_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(__this - ADV_UPCS(Truncate)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getCeil(__extension_Float32_502_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (std::is_constant_evaluated()) {
			#line 513 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			const auto i = Builtin::Cast<true, Builtin::i64>(__this); 
			#line 514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return ((__this <=> i) > 0) ? (i + Builtin::i32(1)) : i;
		} else {
			#line 515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			{
				#line 516 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				return std::ceilf(__this);
			}
		}
		return {};
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getFloor(__extension_Float32_502_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (std::is_constant_evaluated()) {
			#line 530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			const auto i = Builtin::Cast<true, Builtin::i64>(__this); 
			#line 531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return ((__this <=> i) < 0) ? (i - Builtin::i32(1)) : i;
		} else {
			#line 532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			{
				#line 533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				return std::floorf(__this);
			}
		}
		return {};
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getTruncate(__extension_Float32_502_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (std::is_constant_evaluated()) {
			#line 547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return Builtin::Cast<true, Builtin::i64>(__this);
		} else {
			#line 548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			{
				#line 549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				return std::truncf(__this);
			}
		}
		return {};
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getRound(__extension_Float32_502_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (std::is_constant_evaluated()) {
			#line 563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return Builtin::Cast<true, Builtin::i64>((__this + ADV_UFCS(CopySign)(Builtin::f32(0.49999997f).__ref(), __this)));
		} else {
			#line 564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			{
				#line 565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				return std::roundf(__this);
			}
		}
		return {};
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 576 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getRoundTiesEven(__extension_Float32_502_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		auto bits = ADV_UPCS(Bits)(__this.__ref()); 
		#line 579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		auto biasedExponent = __Float32_Protected::ExtractBiasedExponentFromBits(bits); 
		#line 580 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if ((biasedExponent <=> Builtin::u32(0x7EU)) <= 0) {
			#line 582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			if ((bits << Builtin::i32(1)) == Builtin::i32(0)) {
				#line 583 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				return __this;
			}
			#line 588 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			auto result = (biasedExponent == Builtin::u32(0x7EU) && __Float32_Protected::ExtractTrailingSignificandFromBits(bits) != Builtin::i32(0)) ? Builtin::f32(1.0f) : Builtin::f32(0.0f); 
			#line 590 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return ADV_UFCS(CopySign)(result.__ref(), __this);
		}
		#line 594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if ((biasedExponent <=> Builtin::u32(0x96U)) >= 0) {
			#line 595 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return __this;
		}
		#line 598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT(((biasedExponent <=> Builtin::u32(0x7FU)) >= 0 && (biasedExponent <=> Builtin::u32(0x95U)) <= 0), u"biasedExponent>=0x7FuandbiasedExponent<=0x95u");
		#line 601 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		auto lastBitMask = Builtin::u32(1U) << (Builtin::i32(0x96) - biasedExponent); 
		#line 603 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		auto roundBitsMask = lastBitMask - Builtin::u32(1U); 
		#line 606 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		bits += lastBitMask >> Builtin::i32(1);
		#line 608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if ((bits & roundBitsMask) == Builtin::i32(0)) {
			#line 610 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			bits &= ADV_UFCS(_operator_not)(lastBitMask);
		} else {
			#line 611 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			{
				#line 613 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				bits &= ADV_UFCS(_operator_not)(roundBitsMask);
			}
		}
		#line 616 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return ADV_USFCS((Builtin::f32), FromBits)(bits);
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getExponentByteCount(__extension_Float32_502_f32 const& __this ) -> const Builtin::u32
	{
		#line 668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u32>(Builtin::usize(sizeof(Builtin::i8)))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 669 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getExponentShortestBitLength(__extension_Float32_502_f32 const& __this ) -> const Builtin::u32
	{
		#line 671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		auto exponent = __Float32_Protected::Exponent(__this); 
		#line 672 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if ((exponent <=> Builtin::i32(0)) >= 0) {
			#line 673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return ADV_USPCS(BitWidth, Builtin::i8)() - ADV_UPCS(LeadingZeroCount)(exponent.__ref());
		} else {
			#line 674 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			{
				#line 675 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				return ADV_USPCS(BitWidth, Builtin::i8)() + Builtin::i32(1) - ADV_UPCS(LeadingZeroCount)(exponent.__ref());
			}
		}
		return {};
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getSignificandBitLength(__extension_Float32_502_f32 const& __this ) -> const Builtin::u32
	{
		#line 678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(24U)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 679 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getSignificandByteCount(__extension_Float32_502_f32 const& __this ) -> const Builtin::u32
	{
		#line 679 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u32>(Builtin::usize(sizeof(Builtin::u32)))); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	
} namespace __extensions { using namespace System;
#line 684 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto _operator_mul_mul(__extension_Float32_683_f32 const& __this LIFETIMEBOUND, __extension_Float32_1212_f32 exp) noexcept -> const typename __extension_Float32_683_f32
	{
		#line 684 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::powf(__this, exp)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 685 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto _operator_mul_mul_eq(__extension_Float32_683_f32 & __this , __extension_Float32_1212_f32 exp) noexcept -> typename __extension_Float32_683_f32&
	{
		#line 685 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(__this = std::powf(__this, exp)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	
} namespace __extensions { using namespace System;
#line 690 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getExp(__extension_Float32_688_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 690 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::expf(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 692 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getExp2(__extension_Float32_688_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 692 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::exp2f(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 694 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getExp10(__extension_Float32_688_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 694 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_mul)(Builtin::f32(10.0f), __this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getExpM1(__extension_Float32_688_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::expm1f(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 698 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getExp2M1(__extension_Float32_688_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 698 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::exp2f(__this) - Builtin::f32(1.0f)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 700 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getExp10M1(__extension_Float32_688_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 700 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Exp10)(__this.__ref()) - Builtin::f32(1.0f)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	
} namespace __extensions { using namespace System;
#line 705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getLn(__extension_Float32_703_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::logf(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 707 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getLnP1(__extension_Float32_703_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 707 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::log1pf(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getLog2P1(__extension_Float32_703_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::log2f(__this + Builtin::f32(1.0f))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 711 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getLog10P1(__extension_Float32_703_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 711 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::log10f(__this + Builtin::f32(1.0f))); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	
} namespace __extensions { using namespace System;
#line 716 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getSqrt(__extension_Float32_714_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 716 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::sqrtf(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getCbrt(__extension_Float32_714_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::cbrtf(__this)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	
} namespace __extensions { using namespace System;
#line 1063 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToRadians(__extension_Float32_822_f32 const& __this LIFETIMEBOUND) noexcept -> const typename __extension_Float32_822_f32
	{
		#line 1063 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY((__this * ADV_USPCS(Pi, Builtin::f32)()) / Builtin::f32(180.0f)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1065 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto ToDegrees(__extension_Float32_822_f32 const& __this LIFETIMEBOUND) noexcept -> const typename __extension_Float32_822_f32
	{
		#line 1065 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY((__this * Builtin::f32(180.0f)) / ADV_USPCS(Pi, Builtin::f32)()); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 824 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getSin(__extension_Float32_822_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 824 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::sinf(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 826 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getCos(__extension_Float32_822_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 826 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::cosf(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getTan(__extension_Float32_822_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::tanf(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getCot(__extension_Float32_822_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32(1.0f) / ADV_UPCS(Tan)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 832 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getSec(__extension_Float32_822_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 832 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32(1.0f) / ADV_UPCS(Cos)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 834 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getCsc(__extension_Float32_822_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 834 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32(1.0f) / ADV_UPCS(Sin)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 836 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAsin(__extension_Float32_822_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 836 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::asinf(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 838 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAcos(__extension_Float32_822_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 838 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::acosf(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 840 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAtan(__extension_Float32_822_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 840 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::atanf(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 842 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAcot(__extension_Float32_822_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 842 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::atanf(Builtin::f32(1.0f) / __this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 844 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAsec(__extension_Float32_822_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 844 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::acosf(Builtin::f32(1.0f) / __this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 846 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAcsc(__extension_Float32_822_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 846 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::asinf(Builtin::f32(1.0f) / __this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 848 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getSinCos(__extension_Float32_822_f32 const& __this ) -> const std::tuple<__extension_Float32_1212_f32, __extension_Float32_1212_f32>
	{
		#line 848 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::make_tuple(ADV_UPCS(Sin)(__this.__ref()), ADV_UPCS(Cos)(__this.__ref()))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1044 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getCotPi(__extension_Float32_822_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 1044 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32(1.0f) / ADV_UPCS(TanPi)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1046 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getSecPi(__extension_Float32_822_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 1046 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32(1.0f) / ADV_UPCS(CosPi)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1048 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getCscPi(__extension_Float32_822_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 1048 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32(1.0f) / ADV_UPCS(SinPi)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1050 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAsinPi(__extension_Float32_822_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 1050 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Asin)(__this.__ref()) / ADV_USPCS(Pi, Builtin::f32)()); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1052 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAcosPi(__extension_Float32_822_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 1052 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Acos)(__this.__ref()) / ADV_USPCS(Pi, Builtin::f32)()); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1054 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAtanPi(__extension_Float32_822_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 1054 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Atan)(__this.__ref()) / ADV_USPCS(Pi, Builtin::f32)()); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1056 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAcotPi(__extension_Float32_822_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 1056 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Acot)(__this.__ref()) / ADV_USPCS(Pi, Builtin::f32)()); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1058 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAsecPi(__extension_Float32_822_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 1058 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Asec)(__this.__ref()) / ADV_USPCS(Pi, Builtin::f32)()); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1060 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAcscPi(__extension_Float32_822_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 1060 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Acsc)(__this.__ref()) / ADV_USPCS(Pi, Builtin::f32)()); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	
} namespace __extensions { using namespace System;
#line 1070 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAcosh(__extension_Float32_1068_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 1070 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::acoshf(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1072 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAcoth(__extension_Float32_1068_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 1072 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::atanhf(Builtin::f32(1.0f) / __this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1074 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAcsch(__extension_Float32_1068_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 1074 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::asinhf(Builtin::f32(1.0f) / __this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1076 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAsech(__extension_Float32_1068_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 1076 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::acoshf(Builtin::f32(1.0f) / __this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1078 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAsinh(__extension_Float32_1068_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 1078 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::asinhf(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1080 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getAtanh(__extension_Float32_1068_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 1080 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::atanhf(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1082 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getCosh(__extension_Float32_1068_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 1082 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::coshf(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1084 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getCoth(__extension_Float32_1068_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 1084 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32(1.0f) / ADV_UPCS(Tanh)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1086 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getCsch(__extension_Float32_1068_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 1086 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32(1.0f) / ADV_UPCS(Sinh)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1088 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getSech(__extension_Float32_1068_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 1088 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32(1.0f) / ADV_UPCS(Cosh)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1090 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getSinh(__extension_Float32_1068_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 1090 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::sinhf(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1092 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getTanh(__extension_Float32_1068_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 1092 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::tanhf(__this)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	
} namespace __extensions { using namespace System;
#line 1103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto Atan2(__extension_Float32_1095_f32 const& __this LIFETIMEBOUND, __extension_Float32_1212_f32 y)  -> const typename __extension_Float32_1095_f32
	{
		#line 1103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::atan2f(__this, y)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto Atan2Pi(__extension_Float32_1095_f32 const& __this LIFETIMEBOUND, __extension_Float32_1212_f32 y)  -> const typename __extension_Float32_1095_f32
	{
		#line 1104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Atan2)(__this.__ref(), y) / ADV_USPCS(Pi, Builtin::f32)()); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto FusedMultiplyAdd(__extension_Float32_1095_f32 const& __this LIFETIMEBOUND, __extension_Float32_1212_f32 rhs, __extension_Float32_1212_f32 addend)  -> const typename __extension_Float32_1095_f32
	{
		#line 1193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::fmaf(__this, rhs, addend)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto Ieee754Remainder(__extension_Float32_1095_f32 const& __this LIFETIMEBOUND, __extension_Float32_1212_f32 rhs)  -> const typename __extension_Float32_1095_f32
	{
		#line 1195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::remainderf(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto Lerp(__extension_Float32_1095_f32 const& __this LIFETIMEBOUND, __extension_Float32_1212_f32 end, __extension_Float32_1212_f32 amount) noexcept -> const typename __extension_Float32_1095_f32
	{
		#line 1198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(__this * (Builtin::f32(1.0f) - amount) + (end * amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto ScaleB(__extension_Float32_1095_f32 const& __this LIFETIMEBOUND, Builtin::i32 n)  -> const typename __extension_Float32_1095_f32
	{
		#line 1200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::scalbnf(__this, n)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1096 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getEpsilon<__extension_Float32_1095_f32>::get() -> const __extension_Float32_1212_f32
	{
		#line 1096 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32{Builtin::f64(1.4e-45)}); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1097 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getNegativeInfinity<__extension_Float32_1095_f32>::get() -> const __extension_Float32_1212_f32
	{
		#line 1097 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32{Builtin::f64(-1e+300)}); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1098 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getPositiveInfinity<__extension_Float32_1095_f32>::get() -> const __extension_Float32_1212_f32
	{
		#line 1098 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32{+Builtin::f64(1e+300)}); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1099 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getNaN<__extension_Float32_1095_f32>::get() -> const __extension_Float32_1212_f32
	{
		#line 1099 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::NanValue()); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getNegativeZero<__extension_Float32_1095_f32>::get() -> const __extension_Float32_1212_f32
	{
		#line 1100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::f32(-0.0f)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getBitIncrement(__extension_Float32_1095_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 1114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		auto bits = ADV_UPCS(Bits)(__this.__ref()); 
		#line 1115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (((bits & Builtin::u32(0x7F800000U)) <=> Builtin::u32(0x7F800000U)) >= 0) {
			#line 1119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return bits == Builtin::u32(0xFF800000U) ? ADV_USPCS(MinValue, Builtin::f32)() : __this;
		}
		#line 1123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (bits == Builtin::u32(0x80000000U)) {
			#line 1124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return ADV_USPCS(Epsilon, Builtin::f32)();
		}
		#line 1127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		bits += (bits <=> ADV_USPCS(MaxValue, Builtin::i32)()) > 0 ? Builtin::i32(-1) : +Builtin::i32(1);
		#line 1128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return ADV_USFCS((Builtin::f32), FromBits)(bits);
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getBitDecrement(__extension_Float32_1095_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 1138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		auto bits = ADV_UPCS(Bits)(__this.__ref()); 
		#line 1139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (((bits & Builtin::u32(0x7F800000U)) <=> Builtin::u32(0x7F800000U)) >= 0) {
			#line 1143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return bits == Builtin::u32(0x7F800000U) ? ADV_USPCS(MaxValue, Builtin::f32)() : __this;
		}
		#line 1147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (bits == Builtin::u32(0U)) {
			#line 1148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return -ADV_USPCS(Epsilon, Builtin::f32)();
		}
		#line 1151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		bits += (bits <=> ADV_USPCS(MaxValue, Builtin::i32)()) > 0 ? +Builtin::i32(1) : Builtin::i32(-1);
		#line 1152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return ADV_USFCS((Builtin::f32), FromBits)(bits);
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getILogB(__extension_Float32_1095_f32 const& __this ) -> const Builtin::i32
	{
		#line 1155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::ilogbf(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getReciprocalEstimate(__extension_Float32_1095_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 1159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (std::is_constant_evaluated()) {
			#line 1160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return Builtin::f32(1.0f) / __this;
		} else {
			#line 1161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			{
				#line 1163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				return Builtin::f32(1.0f) / __this;
			}
		}
		return {};
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getReciprocalSqrtEstimate(__extension_Float32_1095_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 1168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (std::is_constant_evaluated()) {
			#line 1169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return Builtin::f32(1.0f) / ADV_UPCS(Sqrt)(__this.__ref());
		} else {
			#line 1170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			{
				#line 1172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				return Builtin::f32(1.0f) / ADV_UPCS(Sqrt)(__this.__ref());
			}
		}
		return {};
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto getCategory(__extension_Float32_1095_f32 const& __this ) -> const FloatingPointCategory
	{
		#line 1179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (ADV_UPCS(IsNaN)(__this.__ref())) {
			#line 1180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return ADV_USPCS(NaN, FloatingPointCategory)();
		} else {
			#line 1181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			if (ADV_UPCS(IsInfinity)(__this.__ref())) {
				#line 1182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				return ADV_USPCS(Infinity, FloatingPointCategory)();
			} else {
				#line 1183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				if (ADV_UPCS(IsZero)(__this.__ref())) {
					#line 1184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					return ADV_USPCS(Zero, FloatingPointCategory)();
				} else {
					#line 1185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					if (ADV_UPCS(IsSubnormal)(__this.__ref())) {
						#line 1186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						return ADV_USPCS(Subnormal, FloatingPointCategory)();
					} else {
						#line 1187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						{
							#line 1188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
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
#line 1203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getGamma(__extension_Float32_1095_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 1203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::tgammaf(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getLnGamma(__extension_Float32_1095_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 1205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::lgammaf(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getErf(__extension_Float32_1095_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 1207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::erff(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto getErfc(__extension_Float32_1095_f32 const& __this ) -> const __extension_Float32_1212_f32
	{
		#line 1209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(std::erfcf(__this)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	
} namespace __extensions { using namespace System;
#line 1213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getNumberBufferLength<__extension_Float32_1212_f32>::get() -> const Builtin::i32
	{
		#line 1213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(112) + Builtin::i32(1) + Builtin::i32(1)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getZeroBits<__extension_Float32_1212_f32>::get() -> const Builtin::u128
	{
		#line 1214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(0U)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getInfinityBits<__extension_Float32_1212_f32>::get() -> const Builtin::u128
	{
		#line 1215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(0x7F800000U)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getNormalMantissaMask<__extension_Float32_1212_f32>::get() -> const Builtin::u128
	{
		#line 1216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY((Builtin::u128(1ULL) << __Float32_Protected::SignificandLength) - Builtin::u32(1U)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getDenormalMantissaMask<__extension_Float32_1212_f32>::get() -> const Builtin::u128
	{
		#line 1217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(__Float32_Protected::TrailingSignificandMask); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getMinBinaryExponent<__extension_Float32_1212_f32>::get() -> const Builtin::i32
	{
		#line 1218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(1) - __Float32_Protected::MaxExponent); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getMaxBinaryExponent<__extension_Float32_1212_f32>::get() -> const Builtin::i32
	{
		#line 1219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(__Float32_Protected::MaxExponent); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getMinDecimalExponent<__extension_Float32_1212_f32>::get() -> const Builtin::i32
	{
		#line 1220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(-45)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getMaxDecimalExponent<__extension_Float32_1212_f32>::get() -> const Builtin::i32
	{
		#line 1221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(39)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getExponentBias<__extension_Float32_1212_f32>::get() -> const Builtin::i32
	{
		#line 1222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(__Float32_Protected::ExpBias); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getExponentBits<__extension_Float32_1212_f32>::get() -> const Builtin::u128
	{
		#line 1223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(8U)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getOverflowDecimalExponent<__extension_Float32_1212_f32>::get() -> const Builtin::i32
	{
		#line 1224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl)((__Float32_Protected::MaxExponent + Builtin::i32(2) * __Float32_Protected::SignificandLength), Builtin::i32(3))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getInfinityExponent<__extension_Float32_1212_f32>::get() -> const Builtin::i32
	{
		#line 1225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(0xFF)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getNormalMantissaBits<__extension_Float32_1212_f32>::get() -> const Builtin::u16
	{
		#line 1226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(__Float32_Protected::SignificandLength); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getDenormalMantissaBits<__extension_Float32_1212_f32>::get() -> const Builtin::u16
	{
		#line 1227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(__Float32_Protected::TrailingSignificandLength); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getMinFastFloatDecimalExponent<__extension_Float32_1212_f32>::get() -> const Builtin::i32
	{
		#line 1228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(-65)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getMaxFastFloatDecimalExponent<__extension_Float32_1212_f32>::get() -> const Builtin::i32
	{
		#line 1229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(38)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getMinExponentRoundToEven<__extension_Float32_1212_f32>::get() -> const Builtin::i32
	{
		#line 1230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(-17)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getMaxExponentRoundToEven<__extension_Float32_1212_f32>::get() -> const Builtin::i32
	{
		#line 1231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(10)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getMaxExponentFastPath<__extension_Float32_1212_f32>::get() -> const Builtin::i32
	{
		#line 1232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(10)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline constexpr auto __static_getMaxMantissaFastPath<__extension_Float32_1212_f32>::get() -> const Builtin::u128
	{
		#line 1233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_EXPRESSION_BODY(Builtin::u128(2ULL) << __Float32_Protected::TrailingSignificandLength); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	

}