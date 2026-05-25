#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "Float32.h"

namespace System {
namespace __Unsafe {} namespace __Float16_Protected__Unsafe {}
//###############################################################################
//# Global type aliases
//###############################################################################
#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
using Float16 = Builtin::f16;
#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
using Half = Builtin::f16;
//###############################################################################
//# Type definitions
//###############################################################################
	} namespace __extensions { using namespace System;
#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	using __extension_Float16_8_f16 = Builtin::f16;
	#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	ADV_CHECK_INTERFACE(IMinMaxValue, IMinMaxValue);
	#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	template<class __TT> struct __static_getMinValue; template<> struct __static_getMinValue<__extension_Float16_8_f16> { static inline constexpr auto get() -> const __extension_Float16_8_f16; };
	#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	template<class __TT> struct __static_getMaxValue; template<> struct __static_getMaxValue<__extension_Float16_8_f16> { static inline constexpr auto get() -> const __extension_Float16_8_f16; };
	#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f16, IMinMaxValue, IMinMaxValue, f16);
	} namespace System{
using __extensions::__static_getMinValue;
using __extensions::__static_getMaxValue;

		} namespace __extensions { using namespace System;
#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	using __extension_Float16_13_f16 = Builtin::f16;
	#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	ASTRUMSTD_API auto _operator_eq_eq_mul(__extension_Float16_13_f16 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool;
	#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto operator<=>(__extension_Float16_13_f16 const& __this LIFETIMEBOUND, Builtin::Nullable<__extension_Float16_13_f16> rhs) noexcept -> const Builtin::i32;
	#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	template<class __TT> struct __static_FromBits; template<> struct __static_FromBits<__extension_Float16_13_f16> { static inline constexpr auto get(Builtin::u16 bits)  -> const typename __extension_Float16_13_f16; };
	#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getBits(__extension_Float16_13_f16 const& __this ) -> const Builtin::u16;
	#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	template<class __TT> struct __static_getBitWidth; template<> struct __static_getBitWidth<__extension_Float16_13_f16> { static inline constexpr auto get() -> const Builtin::u32; };
	#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	template<class __TT> struct __static_getMinPositiveValue; template<> struct __static_getMinPositiveValue<__extension_Float16_13_f16> { static inline constexpr auto get() -> const __extension_Float16_13_f16; };
	#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getHashCode(__extension_Float16_13_f16 const& __this ) -> const Builtin::u64;
	} namespace System{
using __extensions::_operator_eq_eq_mul;
using __extensions::operator<=>;
using __extensions::__static_FromBits;
using __extensions::getBits;
using __extensions::__static_getBitWidth;
using __extensions::__static_getMinPositiveValue;
using __extensions::getHashCode;

		} namespace __extensions { using namespace System;
#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	using __extension_Float16_55_f16 = Builtin::f16;
	#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	ADV_CHECK_INTERFACE(IAbstractComparable, IAbstractComparable);
	#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	ASTRUMSTD_API auto _operator_lt_eq_gt_mul(__extension_Float16_55_f16 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32;
	#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f16, IAbstractComparable, IAbstractComparable, f16);
	} namespace System{
using __extensions::_operator_lt_eq_gt_mul;

		} namespace __extensions { using namespace System;
#line 70 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	using __extension_Float16_70_f16 = Builtin::f16;
	#line 70 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	ADV_CHECK_INTERFACE(IConvertible, IConvertible);
	#line 71 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto ToBoolean(__extension_Float16_70_f16 const& __this LIFETIMEBOUND) noexcept -> const bool;
	#line 72 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto ToInt8(__extension_Float16_70_f16 const& __this LIFETIMEBOUND)  -> const Builtin::i8;
	#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto ToUInt8(__extension_Float16_70_f16 const& __this LIFETIMEBOUND)  -> const Builtin::u8;
	#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto ToInt16(__extension_Float16_70_f16 const& __this LIFETIMEBOUND)  -> const Builtin::i16;
	#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto ToUInt16(__extension_Float16_70_f16 const& __this LIFETIMEBOUND)  -> const Builtin::u16;
	#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto ToInt32(__extension_Float16_70_f16 const& __this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto ToUInt32(__extension_Float16_70_f16 const& __this LIFETIMEBOUND)  -> const Builtin::u32;
	#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto ToInt64(__extension_Float16_70_f16 const& __this LIFETIMEBOUND)  -> const Builtin::i64;
	#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto ToUInt64(__extension_Float16_70_f16 const& __this LIFETIMEBOUND)  -> const Builtin::u64;
	#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto ToInt128(__extension_Float16_70_f16 const& __this LIFETIMEBOUND)  -> const Builtin::i128;
	#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto ToUInt128(__extension_Float16_70_f16 const& __this LIFETIMEBOUND)  -> const Builtin::u128;
	#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto ToIsize(__extension_Float16_70_f16 const& __this LIFETIMEBOUND)  -> const Builtin::isize;
	#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto ToUsize(__extension_Float16_70_f16 const& __this LIFETIMEBOUND)  -> const Builtin::usize;
	#line 84 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto ToFloat32(__extension_Float16_70_f16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::f32;
	#line 85 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto ToFloat64(__extension_Float16_70_f16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::f64;
	#line 86 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto ToByte(__extension_Float16_70_f16 const& __this LIFETIMEBOUND)  -> const Builtin::char8;
	#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto ToChar(__extension_Float16_70_f16 const& __this LIFETIMEBOUND)  -> const Builtin::char16;
	#line 70 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f16, IConvertible, IConvertible, f16);
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
#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	using __extension_Float16_92_f16 = Builtin::f16;
	#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	ADV_CHECK_INTERFACE(IDivisibleArithmetic, IDivisibleArithmetic);
	#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	template<class T> inline constexpr auto _operator_div_mod(__extension_Float16_92_f16 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_Float16_92_f16, __extension_Float16_92_f16>;
	#line 100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	template<class T> inline constexpr auto _operator_div_not(__extension_Float16_92_f16 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Float16_92_f16;
	#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto _operator_div_not_eq(__extension_Float16_92_f16 & __this , auto rhs)  -> typename __extension_Float16_92_f16&;
	#line 104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	template<class T> inline constexpr auto _operator_div_lt(__extension_Float16_92_f16 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Float16_92_f16;
	#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto _operator_div_lt_eq(__extension_Float16_92_f16 & __this , auto rhs)  -> typename __extension_Float16_92_f16&;
	#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	template<class T> inline constexpr auto _operator_div_gt(__extension_Float16_92_f16 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Float16_92_f16;
	#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto _operator_div_gt_eq(__extension_Float16_92_f16 & __this , auto rhs)  -> typename __extension_Float16_92_f16&;
	#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f16, IDivisibleArithmetic, IDivisibleArithmetic, f16);
	} namespace System{
using __extensions::_operator_div_mod;
using __extensions::_operator_div_not;
using __extensions::_operator_div_not_eq;
using __extensions::_operator_div_lt;
using __extensions::_operator_div_lt_eq;
using __extensions::_operator_div_gt;
using __extensions::_operator_div_gt_eq;

		} namespace __extensions { using namespace System;
#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	using __extension_Float16_114_f16 = Builtin::f16;
	#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	ADV_CHECK_INTERFACE(ISignedIntegerPowerArithmetic, ISignedIntegerPowerArithmetic);
	#line 116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto _operator_xor_xor(__extension_Float16_114_f16 const& __this LIFETIMEBOUND, Builtin::i32 exp)  -> const typename __extension_Float16_114_f16;
	#line 152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto _operator_xor_xor_eq(__extension_Float16_114_f16 & __this , Builtin::i32 exp)  -> typename __extension_Float16_114_f16&;
	#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f16, ISignedIntegerPowerArithmetic, ISignedIntegerPowerArithmetic, f16);
	} namespace System{
using __extensions::_operator_xor_xor;
using __extensions::_operator_xor_xor_eq;

		} namespace __extensions { using namespace System;
#line 155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	using __extension_Float16_155_f16 = Builtin::f16;
	#line 155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	ADV_CHECK_INTERFACE(INumberBase, INumberBase);
	#line 192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto MaxMagnitude(__extension_Float16_155_f16 const& __this LIFETIMEBOUND, __extension_Float16_155_f16 rhs) noexcept -> const typename __extension_Float16_155_f16;
	#line 210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto MaxMagnitudeNumber(__extension_Float16_155_f16 const& __this LIFETIMEBOUND, __extension_Float16_155_f16 rhs) noexcept -> const typename __extension_Float16_155_f16;
	#line 228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto MinMagnitude(__extension_Float16_155_f16 const& __this LIFETIMEBOUND, __extension_Float16_155_f16 rhs) noexcept -> const typename __extension_Float16_155_f16;
	#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto MinMagnitudeNumber(__extension_Float16_155_f16 const& __this LIFETIMEBOUND, __extension_Float16_155_f16 rhs) noexcept -> const typename __extension_Float16_155_f16;
	#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	ASTRUMSTD_API auto Parse(__extension_Float16_155_f16 const& __this LIFETIMEBOUND, Builtin::Str input)  -> const typename __extension_Float16_155_f16;
	#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	ASTRUMSTD_API auto TryParse(__extension_Float16_155_f16 const& __this LIFETIMEBOUND, Builtin::Str input) noexcept -> const Builtin::Nullable<__extension_Float16_155_f16>;
	#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto NarrowToInt8(__extension_Float16_155_f16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i8;
	#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto NarrowToUInt8(__extension_Float16_155_f16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u8;
	#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto NarrowToInt16(__extension_Float16_155_f16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i16;
	#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto NarrowToUInt16(__extension_Float16_155_f16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u16;
	#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto NarrowToInt32(__extension_Float16_155_f16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i32;
	#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto NarrowToUInt32(__extension_Float16_155_f16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u32;
	#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto NarrowToInt64(__extension_Float16_155_f16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i64;
	#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto NarrowToUInt64(__extension_Float16_155_f16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u64;
	#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto NarrowToInt128(__extension_Float16_155_f16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i128;
	#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto NarrowToUInt128(__extension_Float16_155_f16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u128;
	#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto NarrowToIsize(__extension_Float16_155_f16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::isize;
	#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto NarrowToUsize(__extension_Float16_155_f16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::usize;
	#line 156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	template<class __TT> struct __static_getOne; template<> struct __static_getOne<__extension_Float16_155_f16> { static inline constexpr auto get() -> const __extension_Float16_155_f16; };
	#line 157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	template<class __TT> struct __static_getZero; template<> struct __static_getZero<__extension_Float16_155_f16> { static inline constexpr auto get() -> const __extension_Float16_155_f16; };
	#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	template<class __TT> struct __static_getRadix; template<> struct __static_getRadix<__extension_Float16_155_f16> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getAbs(__extension_Float16_155_f16 const& __this ) -> const __extension_Float16_155_f16;
	#line 166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getIsCanonical(__extension_Float16_155_f16 const& __this ) -> const bool;
	#line 167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getIsComplexNumber(__extension_Float16_155_f16 const& __this ) -> const bool;
	#line 168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getIsEvenInteger(__extension_Float16_155_f16 const& __this ) -> const bool;
	#line 169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getIsFinite(__extension_Float16_155_f16 const& __this ) -> const bool;
	#line 170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getIsImaginaryNumber(__extension_Float16_155_f16 const& __this ) -> const bool;
	#line 171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getIsInfinity(__extension_Float16_155_f16 const& __this ) -> const bool;
	#line 172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getIsInteger(__extension_Float16_155_f16 const& __this ) -> const bool;
	#line 173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getIsNaN(__extension_Float16_155_f16 const& __this ) -> const bool;
	#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getIsNegative(__extension_Float16_155_f16 const& __this ) -> const bool;
	#line 175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getIsNegativeInfinity(__extension_Float16_155_f16 const& __this ) -> const bool;
	#line 176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getIsNormal(__extension_Float16_155_f16 const& __this ) -> const bool;
	#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getIsOddInteger(__extension_Float16_155_f16 const& __this ) -> const bool;
	#line 182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getIsPositive(__extension_Float16_155_f16 const& __this ) -> const bool;
	#line 183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getIsPositiveInfinity(__extension_Float16_155_f16 const& __this ) -> const bool;
	#line 184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getIsRealNumber(__extension_Float16_155_f16 const& __this ) -> const bool;
	#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getIsSubnormal(__extension_Float16_155_f16 const& __this ) -> const bool;
	#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getIsZero(__extension_Float16_155_f16 const& __this ) -> const bool;
	#line 155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f16, INumberBase, INumberBase, f16);
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
#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	using __extension_Float16_290_f16 = Builtin::f16;
	#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	ADV_CHECK_INTERFACE(ISignedNumber, ISignedNumber);
	#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	template<class __TT> struct __static_getMinusOne; template<> struct __static_getMinusOne<__extension_Float16_290_f16> { static inline constexpr auto get() -> const __extension_Float16_290_f16; };
	#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f16, ISignedNumber, ISignedNumber, f16);
	} namespace System{
using __extensions::__static_getMinusOne;

		} namespace __extensions { using namespace System;
#line 294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	using __extension_Float16_294_f16 = Builtin::f16;
	#line 294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	ADV_CHECK_INTERFACE(INumber, INumber);
	#line 302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto CopySign(__extension_Float16_294_f16 const& __this LIFETIMEBOUND, __extension_Float16_294_f16 sign) noexcept -> const typename __extension_Float16_294_f16;
	#line 314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto Max(__extension_Float16_294_f16 const& __this LIFETIMEBOUND, __extension_Float16_294_f16 rhs) noexcept -> const typename __extension_Float16_294_f16;
	#line 324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto MaxNumber(__extension_Float16_294_f16 const& __this LIFETIMEBOUND, __extension_Float16_294_f16 rhs) noexcept -> const typename __extension_Float16_294_f16;
	#line 334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto Min(__extension_Float16_294_f16 const& __this LIFETIMEBOUND, __extension_Float16_294_f16 rhs) noexcept -> const typename __extension_Float16_294_f16;
	#line 344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto MinNumber(__extension_Float16_294_f16 const& __this LIFETIMEBOUND, __extension_Float16_294_f16 rhs) noexcept -> const typename __extension_Float16_294_f16;
	#line 354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto Clamp(__extension_Float16_294_f16 const& __this LIFETIMEBOUND, __extension_Float16_294_f16 min, __extension_Float16_294_f16 max)  -> const typename __extension_Float16_294_f16;
	#line 295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getSign(__extension_Float16_294_f16 const& __this ) -> const Builtin::i32;
	#line 294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f16, INumber, INumber, f16);
	} namespace System{
using __extensions::CopySign;
using __extensions::Max;
using __extensions::MaxNumber;
using __extensions::Min;
using __extensions::MinNumber;
using __extensions::Clamp;
using __extensions::getSign;

		} namespace __extensions { using namespace System;
#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	using __extension_Float16_397_f16 = Builtin::f16;
	#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	ADV_CHECK_INTERFACE(IBinaryNumber, IBinaryNumber);
	#line 437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto Log(__extension_Float16_397_f16 const& __this LIFETIMEBOUND, __extension_Float16_397_f16 base) noexcept -> const typename __extension_Float16_397_f16;
	#line 458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto Midpoint(__extension_Float16_397_f16 const& __this LIFETIMEBOUND, __extension_Float16_397_f16 rhs) noexcept -> const typename __extension_Float16_397_f16;
	#line 470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto IsMultipleOf(__extension_Float16_397_f16 const& __this LIFETIMEBOUND, __extension_Float16_397_f16 rhs) noexcept -> const bool;
	#line 399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	template<class __TT> struct __static_getAllBitsSet; template<> struct __static_getAllBitsSet<__extension_Float16_397_f16> { static inline constexpr auto get() -> const __extension_Float16_397_f16; };
	#line 402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getIsPow2(__extension_Float16_397_f16 const& __this ) -> const bool;
	#line 428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getLog2(__extension_Float16_397_f16 const& __this ) -> const __extension_Float16_397_f16;
	#line 432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getLog10(__extension_Float16_397_f16 const& __this ) -> const __extension_Float16_397_f16;
	#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f16, IBinaryNumber, IBinaryNumber, f16);
	} namespace System{
using __extensions::Log;
using __extensions::Midpoint;
using __extensions::IsMultipleOf;
using __extensions::__static_getAllBitsSet;
using __extensions::getIsPow2;
using __extensions::getLog2;
using __extensions::getLog10;

		} namespace __extensions { using namespace System;
#line 484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	using __extension_Float16_484_f16 = Builtin::f16;
	#line 484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	ADV_CHECK_INTERFACE(IFloatingPointConstants, IFloatingPointConstants);
	#line 486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	template<class __TT> struct __static_getPi; template<> struct __static_getPi<__extension_Float16_484_f16> { static inline constexpr auto get() -> const __extension_Float16_484_f16; };
	#line 487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	template<class __TT> struct __static_getE; template<> struct __static_getE<__extension_Float16_484_f16> { static inline constexpr auto get() -> const __extension_Float16_484_f16; };
	#line 488 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	template<class __TT> struct __static_getTau; template<> struct __static_getTau<__extension_Float16_484_f16> { static inline constexpr auto get() -> const __extension_Float16_484_f16; };
	#line 484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f16, IFloatingPointConstants, IFloatingPointConstants, f16);
	} namespace System{
using __extensions::__static_getPi;
using __extensions::__static_getE;
using __extensions::__static_getTau;

		} namespace __extensions { using namespace System;
#line 491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	using __extension_Float16_491_f16 = Builtin::f16;
	#line 491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	ADV_CHECK_INTERFACE(IFloatingPoint, IFloatingPoint);
	#line 509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto CeilToInt32(__extension_Float16_491_f16 const& __this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto CeilToInt64(__extension_Float16_491_f16 const& __this LIFETIMEBOUND)  -> const Builtin::i64;
	#line 511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto CeilToInt128(__extension_Float16_491_f16 const& __this LIFETIMEBOUND)  -> const Builtin::i128;
	#line 526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto FloorToInt32(__extension_Float16_491_f16 const& __this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto FloorToInt64(__extension_Float16_491_f16 const& __this LIFETIMEBOUND)  -> const Builtin::i64;
	#line 528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto FloorToInt128(__extension_Float16_491_f16 const& __this LIFETIMEBOUND)  -> const Builtin::i128;
	#line 542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto TruncateToInt32(__extension_Float16_491_f16 const& __this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto TruncateToInt64(__extension_Float16_491_f16 const& __this LIFETIMEBOUND)  -> const Builtin::i64;
	#line 544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto TruncateToInt128(__extension_Float16_491_f16 const& __this LIFETIMEBOUND)  -> const Builtin::i128;
	#line 558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto RoundToInt32(__extension_Float16_491_f16 const& __this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto RoundToInt64(__extension_Float16_491_f16 const& __this LIFETIMEBOUND)  -> const Builtin::i64;
	#line 560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto RoundToInt128(__extension_Float16_491_f16 const& __this LIFETIMEBOUND)  -> const Builtin::i128;
	#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto RoundTiesEvenToInt32(__extension_Float16_491_f16 const& __this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto RoundTiesEvenToInt64(__extension_Float16_491_f16 const& __this LIFETIMEBOUND)  -> const Builtin::i64;
	#line 572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto RoundTiesEvenToInt128(__extension_Float16_491_f16 const& __this LIFETIMEBOUND)  -> const Builtin::i128;
	#line 574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto Round(__extension_Float16_491_f16 const& __this LIFETIMEBOUND, Builtin::u32 digits)  -> const typename __extension_Float16_491_f16;
	#line 575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto Round(__extension_Float16_491_f16 const& __this LIFETIMEBOUND, MidpointRounding rounding)  -> const typename __extension_Float16_491_f16;
	#line 587 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto Round(__extension_Float16_491_f16 const& __this LIFETIMEBOUND, Builtin::u32 digits, MidpointRounding rounding)  -> const typename __extension_Float16_491_f16;
	#line 494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getFractionalPart(__extension_Float16_491_f16 const& __this ) -> const __extension_Float16_491_f16;
	#line 499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getCeil(__extension_Float16_491_f16 const& __this ) -> const __extension_Float16_491_f16;
	#line 516 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getFloor(__extension_Float16_491_f16 const& __this ) -> const __extension_Float16_491_f16;
	#line 533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getTruncate(__extension_Float16_491_f16 const& __this ) -> const __extension_Float16_491_f16;
	#line 549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getRound(__extension_Float16_491_f16 const& __this ) -> const __extension_Float16_491_f16;
	#line 565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getRoundTiesEven(__extension_Float16_491_f16 const& __this ) -> const __extension_Float16_491_f16;
	#line 592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getExponentByteCount(__extension_Float16_491_f16 const& __this ) -> const Builtin::u32;
	#line 593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getExponentShortestBitLength(__extension_Float16_491_f16 const& __this ) -> const Builtin::u32;
	#line 602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getSignificandBitLength(__extension_Float16_491_f16 const& __this ) -> const Builtin::u32;
	#line 603 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getSignificandByteCount(__extension_Float16_491_f16 const& __this ) -> const Builtin::u32;
	#line 491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f16, IFloatingPoint, IFloatingPoint, f16);
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
#line 607 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	using __extension_Float16_607_f16 = Builtin::f16;
	#line 607 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	ADV_CHECK_INTERFACE(IPowerArithmetic, IPowerArithmetic);
	#line 608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto _operator_mul_mul(__extension_Float16_607_f16 const& __this LIFETIMEBOUND, __extension_Float16_607_f16 exp) noexcept -> const typename __extension_Float16_607_f16;
	#line 609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto _operator_mul_mul_eq(__extension_Float16_607_f16 & __this , __extension_Float16_607_f16 exp) noexcept -> typename __extension_Float16_607_f16&;
	#line 607 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f16, IPowerArithmetic, IPowerArithmetic, f16);
	} namespace System{
using __extensions::_operator_mul_mul;
using __extensions::_operator_mul_mul_eq;

		} namespace __extensions { using namespace System;
#line 612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	using __extension_Float16_612_f16 = Builtin::f16;
	#line 612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	ADV_CHECK_INTERFACE(IExponentialFunctions, IExponentialFunctions);
	#line 614 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getExp(__extension_Float16_612_f16 const& __this ) -> const __extension_Float16_612_f16;
	#line 616 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getExp2(__extension_Float16_612_f16 const& __this ) -> const __extension_Float16_612_f16;
	#line 618 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getExp10(__extension_Float16_612_f16 const& __this ) -> const __extension_Float16_612_f16;
	#line 620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getExpM1(__extension_Float16_612_f16 const& __this ) -> const __extension_Float16_612_f16;
	#line 622 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getExp2M1(__extension_Float16_612_f16 const& __this ) -> const __extension_Float16_612_f16;
	#line 624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getExp10M1(__extension_Float16_612_f16 const& __this ) -> const __extension_Float16_612_f16;
	#line 612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f16, IExponentialFunctions, IExponentialFunctions, f16);
	} namespace System{
using __extensions::getExp;
using __extensions::getExp2;
using __extensions::getExp10;
using __extensions::getExpM1;
using __extensions::getExp2M1;
using __extensions::getExp10M1;

		} namespace __extensions { using namespace System;
#line 627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	using __extension_Float16_627_f16 = Builtin::f16;
	#line 627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	ADV_CHECK_INTERFACE(ILogarithmicFunctions, ILogarithmicFunctions);
	#line 629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getLn(__extension_Float16_627_f16 const& __this ) -> const __extension_Float16_627_f16;
	#line 631 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getLnP1(__extension_Float16_627_f16 const& __this ) -> const __extension_Float16_627_f16;
	#line 633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getLog2P1(__extension_Float16_627_f16 const& __this ) -> const __extension_Float16_627_f16;
	#line 635 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getLog10P1(__extension_Float16_627_f16 const& __this ) -> const __extension_Float16_627_f16;
	#line 627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f16, ILogarithmicFunctions, ILogarithmicFunctions, f16);
	} namespace System{
using __extensions::getLn;
using __extensions::getLnP1;
using __extensions::getLog2P1;
using __extensions::getLog10P1;

		} namespace __extensions { using namespace System;
#line 638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	using __extension_Float16_638_f16 = Builtin::f16;
	#line 638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	ADV_CHECK_INTERFACE(IRootFunctions, IRootFunctions);
	#line 644 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	ASTRUMSTD_API auto Root(__extension_Float16_638_f16 const& __this LIFETIMEBOUND, Builtin::i32 n)  -> const typename __extension_Float16_638_f16;
	#line 650 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	ASTRUMSTD_API auto Hypot(__extension_Float16_638_f16 const& __this LIFETIMEBOUND, __extension_Float16_638_f16 y)  -> const typename __extension_Float16_638_f16;
	#line 640 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getSqrt(__extension_Float16_638_f16 const& __this ) -> const __extension_Float16_638_f16;
	#line 642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getCbrt(__extension_Float16_638_f16 const& __this ) -> const __extension_Float16_638_f16;
	#line 638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f16, IRootFunctions, IRootFunctions, f16);
	} namespace System{
using __extensions::Root;
using __extensions::Hypot;
using __extensions::getSqrt;
using __extensions::getCbrt;

		} namespace __extensions { using namespace System;
#line 656 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	using __extension_Float16_656_f16 = Builtin::f16;
	#line 656 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	ADV_CHECK_INTERFACE(ITrigonometricFunctions, ITrigonometricFunctions);
	#line 724 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto ToRadians(__extension_Float16_656_f16 const& __this LIFETIMEBOUND) noexcept -> const typename __extension_Float16_656_f16;
	#line 726 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto ToDegrees(__extension_Float16_656_f16 const& __this LIFETIMEBOUND) noexcept -> const typename __extension_Float16_656_f16;
	#line 658 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getSin(__extension_Float16_656_f16 const& __this ) -> const __extension_Float16_656_f16;
	#line 660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getCos(__extension_Float16_656_f16 const& __this ) -> const __extension_Float16_656_f16;
	#line 662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getTan(__extension_Float16_656_f16 const& __this ) -> const __extension_Float16_656_f16;
	#line 664 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getCot(__extension_Float16_656_f16 const& __this ) -> const __extension_Float16_656_f16;
	#line 666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getSec(__extension_Float16_656_f16 const& __this ) -> const __extension_Float16_656_f16;
	#line 668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getCsc(__extension_Float16_656_f16 const& __this ) -> const __extension_Float16_656_f16;
	#line 670 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getAsin(__extension_Float16_656_f16 const& __this ) -> const __extension_Float16_656_f16;
	#line 672 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getAcos(__extension_Float16_656_f16 const& __this ) -> const __extension_Float16_656_f16;
	#line 674 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getAtan(__extension_Float16_656_f16 const& __this ) -> const __extension_Float16_656_f16;
	#line 676 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getAcot(__extension_Float16_656_f16 const& __this ) -> const __extension_Float16_656_f16;
	#line 678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getAsec(__extension_Float16_656_f16 const& __this ) -> const __extension_Float16_656_f16;
	#line 680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getAcsc(__extension_Float16_656_f16 const& __this ) -> const __extension_Float16_656_f16;
	#line 682 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getSinCos(__extension_Float16_656_f16 const& __this ) -> const std::tuple<__extension_Float16_656_f16, __extension_Float16_656_f16>;
	#line 684 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	ASTRUMSTD_API auto getSinPi(__extension_Float16_656_f16 const& __this ) -> const __extension_Float16_656_f16;
	#line 689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	ASTRUMSTD_API auto getCosPi(__extension_Float16_656_f16 const& __this ) -> const __extension_Float16_656_f16;
	#line 694 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	ASTRUMSTD_API auto getSinCosPi(__extension_Float16_656_f16 const& __this ) -> const std::tuple<__extension_Float16_656_f16, __extension_Float16_656_f16>;
	#line 700 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	ASTRUMSTD_API auto getTanPi(__extension_Float16_656_f16 const& __this ) -> const __extension_Float16_656_f16;
	#line 705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getCotPi(__extension_Float16_656_f16 const& __this ) -> const __extension_Float16_656_f16;
	#line 707 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getSecPi(__extension_Float16_656_f16 const& __this ) -> const __extension_Float16_656_f16;
	#line 709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getCscPi(__extension_Float16_656_f16 const& __this ) -> const __extension_Float16_656_f16;
	#line 711 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getAsinPi(__extension_Float16_656_f16 const& __this ) -> const __extension_Float16_656_f16;
	#line 713 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getAcosPi(__extension_Float16_656_f16 const& __this ) -> const __extension_Float16_656_f16;
	#line 715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getAtanPi(__extension_Float16_656_f16 const& __this ) -> const __extension_Float16_656_f16;
	#line 717 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getAcotPi(__extension_Float16_656_f16 const& __this ) -> const __extension_Float16_656_f16;
	#line 719 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getAsecPi(__extension_Float16_656_f16 const& __this ) -> const __extension_Float16_656_f16;
	#line 721 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getAcscPi(__extension_Float16_656_f16 const& __this ) -> const __extension_Float16_656_f16;
	#line 656 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f16, ITrigonometricFunctions, ITrigonometricFunctions, f16);
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
#line 729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	using __extension_Float16_729_f16 = Builtin::f16;
	#line 729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	ADV_CHECK_INTERFACE(IHyperbolicFunctions, IHyperbolicFunctions);
	#line 731 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getAcosh(__extension_Float16_729_f16 const& __this ) -> const __extension_Float16_729_f16;
	#line 733 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getAcoth(__extension_Float16_729_f16 const& __this ) -> const __extension_Float16_729_f16;
	#line 735 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getAcsch(__extension_Float16_729_f16 const& __this ) -> const __extension_Float16_729_f16;
	#line 737 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getAsech(__extension_Float16_729_f16 const& __this ) -> const __extension_Float16_729_f16;
	#line 739 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getAsinh(__extension_Float16_729_f16 const& __this ) -> const __extension_Float16_729_f16;
	#line 741 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getAtanh(__extension_Float16_729_f16 const& __this ) -> const __extension_Float16_729_f16;
	#line 743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getCosh(__extension_Float16_729_f16 const& __this ) -> const __extension_Float16_729_f16;
	#line 745 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getCoth(__extension_Float16_729_f16 const& __this ) -> const __extension_Float16_729_f16;
	#line 747 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getCsch(__extension_Float16_729_f16 const& __this ) -> const __extension_Float16_729_f16;
	#line 749 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getSech(__extension_Float16_729_f16 const& __this ) -> const __extension_Float16_729_f16;
	#line 751 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getSinh(__extension_Float16_729_f16 const& __this ) -> const __extension_Float16_729_f16;
	#line 753 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getTanh(__extension_Float16_729_f16 const& __this ) -> const __extension_Float16_729_f16;
	#line 729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f16, IHyperbolicFunctions, IHyperbolicFunctions, f16);
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
#line 756 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	using __extension_Float16_756_f16 = Builtin::f16;
	#line 756 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	ADV_CHECK_INTERFACE(IBinaryFloatingPointIeee754, IBinaryFloatingPointIeee754);
	#line 764 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto Atan2(__extension_Float16_756_f16 const& __this LIFETIMEBOUND, __extension_Float16_756_f16 y)  -> const typename __extension_Float16_756_f16;
	#line 765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto Atan2Pi(__extension_Float16_756_f16 const& __this LIFETIMEBOUND, __extension_Float16_756_f16 y)  -> const typename __extension_Float16_756_f16;
	#line 854 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto FusedMultiplyAdd(__extension_Float16_756_f16 const& __this LIFETIMEBOUND, __extension_Float16_756_f16 rhs, __extension_Float16_756_f16 addend)  -> const typename __extension_Float16_756_f16;
	#line 856 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto Ieee754Remainder(__extension_Float16_756_f16 const& __this LIFETIMEBOUND, __extension_Float16_756_f16 rhs)  -> const typename __extension_Float16_756_f16;
	#line 859 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto Lerp(__extension_Float16_756_f16 const& __this LIFETIMEBOUND, __extension_Float16_756_f16 end, __extension_Float16_756_f16 amount) noexcept -> const typename __extension_Float16_756_f16;
	#line 861 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto ScaleB(__extension_Float16_756_f16 const& __this LIFETIMEBOUND, Builtin::i32 n)  -> const typename __extension_Float16_756_f16;
	#line 757 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	template<class __TT> struct __static_getEpsilon; template<> struct __static_getEpsilon<__extension_Float16_756_f16> { static inline constexpr auto get() -> const __extension_Float16_756_f16; };
	#line 758 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	template<class __TT> struct __static_getNegativeInfinity; template<> struct __static_getNegativeInfinity<__extension_Float16_756_f16> { static inline constexpr auto get() -> const __extension_Float16_756_f16; };
	#line 759 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	template<class __TT> struct __static_getPositiveInfinity; template<> struct __static_getPositiveInfinity<__extension_Float16_756_f16> { static inline constexpr auto get() -> const __extension_Float16_756_f16; };
	#line 760 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	template<class __TT> struct __static_getNaN; template<> struct __static_getNaN<__extension_Float16_756_f16> { static inline constexpr auto get() -> const __extension_Float16_756_f16; };
	#line 761 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	template<class __TT> struct __static_getNegativeZero; template<> struct __static_getNegativeZero<__extension_Float16_756_f16> { static inline constexpr auto get() -> const __extension_Float16_756_f16; };
	#line 773 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getBitIncrement(__extension_Float16_756_f16 const& __this ) -> const __extension_Float16_756_f16;
	#line 797 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getBitDecrement(__extension_Float16_756_f16 const& __this ) -> const __extension_Float16_756_f16;
	#line 816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getILogB(__extension_Float16_756_f16 const& __this ) -> const Builtin::i32;
	#line 818 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getReciprocalEstimate(__extension_Float16_756_f16 const& __this ) -> const __extension_Float16_756_f16;
	#line 827 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getReciprocalSqrtEstimate(__extension_Float16_756_f16 const& __this ) -> const __extension_Float16_756_f16;
	#line 838 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getCategory(__extension_Float16_756_f16 const& __this ) -> const FloatingPointCategory;
	#line 864 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getGamma(__extension_Float16_756_f16 const& __this ) -> const __extension_Float16_756_f16;
	#line 866 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getLnGamma(__extension_Float16_756_f16 const& __this ) -> const __extension_Float16_756_f16;
	#line 868 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getErf(__extension_Float16_756_f16 const& __this ) -> const __extension_Float16_756_f16;
	#line 870 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getErfc(__extension_Float16_756_f16 const& __this ) -> const __extension_Float16_756_f16;
	#line 756 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f16, IBinaryFloatingPointIeee754, IBinaryFloatingPointIeee754, f16);
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
#line 873 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	using __extension_Float16_873_f16 = Builtin::f16;
	#line 873 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	ADV_CHECK_INTERFACE(IBinaryFloatFormatInfo, IBinaryFloatFormatInfo);
	#line 874 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	template<class __TT> struct __static_getNumberBufferLength; template<> struct __static_getNumberBufferLength<__extension_Float16_873_f16> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 875 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	template<class __TT> struct __static_getZeroBits; template<> struct __static_getZeroBits<__extension_Float16_873_f16> { static inline constexpr auto get() -> const Builtin::u128; };
	#line 876 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	template<class __TT> struct __static_getInfinityBits; template<> struct __static_getInfinityBits<__extension_Float16_873_f16> { static inline constexpr auto get() -> const Builtin::u128; };
	#line 877 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	template<class __TT> struct __static_getNormalMantissaMask; template<> struct __static_getNormalMantissaMask<__extension_Float16_873_f16> { static inline constexpr auto get() -> const Builtin::u128; };
	#line 878 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	template<class __TT> struct __static_getDenormalMantissaMask; template<> struct __static_getDenormalMantissaMask<__extension_Float16_873_f16> { static inline constexpr auto get() -> const Builtin::u128; };
	#line 879 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	template<class __TT> struct __static_getMinBinaryExponent; template<> struct __static_getMinBinaryExponent<__extension_Float16_873_f16> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 880 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	template<class __TT> struct __static_getMaxBinaryExponent; template<> struct __static_getMaxBinaryExponent<__extension_Float16_873_f16> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 881 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	template<class __TT> struct __static_getMinDecimalExponent; template<> struct __static_getMinDecimalExponent<__extension_Float16_873_f16> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 882 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	template<class __TT> struct __static_getMaxDecimalExponent; template<> struct __static_getMaxDecimalExponent<__extension_Float16_873_f16> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 883 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	template<class __TT> struct __static_getExponentBias; template<> struct __static_getExponentBias<__extension_Float16_873_f16> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 884 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	template<class __TT> struct __static_getExponentBits; template<> struct __static_getExponentBits<__extension_Float16_873_f16> { static inline constexpr auto get() -> const Builtin::u128; };
	#line 885 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	template<class __TT> struct __static_getOverflowDecimalExponent; template<> struct __static_getOverflowDecimalExponent<__extension_Float16_873_f16> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 886 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	template<class __TT> struct __static_getInfinityExponent; template<> struct __static_getInfinityExponent<__extension_Float16_873_f16> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 887 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	template<class __TT> struct __static_getNormalMantissaBits; template<> struct __static_getNormalMantissaBits<__extension_Float16_873_f16> { static inline constexpr auto get() -> const Builtin::u16; };
	#line 888 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	template<class __TT> struct __static_getDenormalMantissaBits; template<> struct __static_getDenormalMantissaBits<__extension_Float16_873_f16> { static inline constexpr auto get() -> const Builtin::u16; };
	#line 889 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	template<class __TT> struct __static_getMinFastFloatDecimalExponent; template<> struct __static_getMinFastFloatDecimalExponent<__extension_Float16_873_f16> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 890 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	template<class __TT> struct __static_getMaxFastFloatDecimalExponent; template<> struct __static_getMaxFastFloatDecimalExponent<__extension_Float16_873_f16> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 891 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	template<class __TT> struct __static_getMinExponentRoundToEven; template<> struct __static_getMinExponentRoundToEven<__extension_Float16_873_f16> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 892 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	template<class __TT> struct __static_getMaxExponentRoundToEven; template<> struct __static_getMaxExponentRoundToEven<__extension_Float16_873_f16> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 893 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	template<class __TT> struct __static_getMaxExponentFastPath; template<> struct __static_getMaxExponentFastPath<__extension_Float16_873_f16> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 894 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	template<class __TT> struct __static_getMaxMantissaFastPath; template<> struct __static_getMaxMantissaFastPath<__extension_Float16_873_f16> { static inline constexpr auto get() -> const Builtin::u128; };
	#line 873 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(f16, IBinaryFloatFormatInfo, IBinaryFloatFormatInfo, f16);
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
#line 388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	namespace __Float16_Protected { inline constexpr auto BiasedExponent(Builtin::f16 value) noexcept -> const Builtin::u8; }
#line 389 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	namespace __Float16_Protected { inline constexpr auto Exponent(Builtin::f16 value) noexcept -> const Builtin::i8; }
#line 390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	namespace __Float16_Protected { inline constexpr auto Significand(Builtin::f16 value) noexcept -> const Builtin::u16; }
#line 391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	namespace __Float16_Protected { inline constexpr auto TrailingSignificand(Builtin::f16 value) noexcept -> const Builtin::u16; }
#line 393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	namespace __Float16_Protected { inline constexpr auto ExtractBiasedExponentFromBits(Builtin::u16 bits) noexcept -> const Builtin::u8; }
#line 394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	namespace __Float16_Protected { inline constexpr auto ExtractTrailingSignificandFromBits(Builtin::u16 bits) noexcept -> const Builtin::u16; }
//###############################################################################
//# Global compile-time constants
//###############################################################################
#line 365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
namespace __Float16_Protected { inline constexpr auto SignMask = Builtin::u16(0x8000U); }
#line 366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
namespace __Float16_Protected { inline constexpr auto SignShift = Builtin::u16((unsigned short)15); }
#line 367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
namespace __Float16_Protected { inline constexpr Builtin::u8 ShiftedSignMask = Builtin::u8{__Float16_Protected::SignMask >> __Float16_Protected::SignShift}; }
#line 369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
namespace __Float16_Protected { inline constexpr auto BiasedExponentMask = Builtin::u16(0x7C00U); }
#line 370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
namespace __Float16_Protected { inline constexpr auto BiasedExponentShift = Builtin::i32(10); }
#line 371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
namespace __Float16_Protected { inline constexpr Builtin::u8 ShiftedBiasedExponentMask = Builtin::u8{__Float16_Protected::BiasedExponentMask >> __Float16_Protected::BiasedExponentShift}; }
#line 373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
namespace __Float16_Protected { inline constexpr auto TrailingSignificandMask = Builtin::u16(0x03FFU); }
#line 375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
namespace __Float16_Protected { inline constexpr auto MinSign = Builtin::u8(0U); }
#line 376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
namespace __Float16_Protected { inline constexpr auto MaxSign = Builtin::u8(1U); }
#line 377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
namespace __Float16_Protected { inline constexpr auto MinBiasedExponent = ADV_USPCS(MinValue, Builtin::u8)(); }
#line 378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
namespace __Float16_Protected { inline constexpr auto MaxBiasedExponent = Builtin::u8(0x1FU); }
#line 379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
namespace __Float16_Protected { inline constexpr auto ExpBias = Builtin::u8(15U); }
#line 380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
namespace __Float16_Protected { inline constexpr auto MinExponent = Builtin::i8(-14); }
#line 381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
namespace __Float16_Protected { inline constexpr auto MaxExponent = Builtin::i8(15); }
#line 382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
namespace __Float16_Protected { inline constexpr auto MinTrailingSignificand = ADV_USPCS(MinValue, Builtin::u16)(); }
#line 383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
namespace __Float16_Protected { inline constexpr auto MaxTrailingSignificand = Builtin::u16(0x03FFU); }
#line 385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
namespace __Float16_Protected { inline constexpr auto TrailingSignificandLength = Builtin::u8((unsigned char)10); }
#line 386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
namespace __Float16_Protected { inline constexpr auto SignificandLength = __Float16_Protected::TrailingSignificandLength + Builtin::u8((unsigned char)1); }
//###############################################################################
//# Function definitions
//###############################################################################

namespace __Float16_Protected {
		#line 388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		inline constexpr auto BiasedExponent(Builtin::f16 value) noexcept -> const Builtin::u8
		{
			#line 388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			ADV_EXPRESSION_BODY(__Float16_Protected::ExtractBiasedExponentFromBits(ADV_UPCS(Bits)(value.__ref()))); 
		}
	}
namespace __Float16_Protected {
		#line 389 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		inline constexpr auto Exponent(Builtin::f16 value) noexcept -> const Builtin::i8
		{
			#line 389 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			ADV_EXPRESSION_BODY(Builtin::i8{__Float16_Protected::BiasedExponent(value) - __Float16_Protected::ExpBias}); 
		}
	}
namespace __Float16_Protected {
		#line 390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		inline constexpr auto Significand(Builtin::f16 value) noexcept -> const Builtin::u16
		{
			#line 390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			ADV_EXPRESSION_BODY(__Float16_Protected::TrailingSignificand(value) | (__Float16_Protected::BiasedExponent(value) != Builtin::u8((unsigned char)0) ? (Builtin::u32(1U) << __Float16_Protected::BiasedExponentShift) : Builtin::u32(0U))); 
		}
	}
namespace __Float16_Protected {
		#line 391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		inline constexpr auto TrailingSignificand(Builtin::f16 value) noexcept -> const Builtin::u16
		{
			#line 391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			ADV_EXPRESSION_BODY(__Float16_Protected::ExtractTrailingSignificandFromBits(ADV_UPCS(Bits)(value.__ref()))); 
		}
	}
namespace __Float16_Protected {
		#line 393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		inline constexpr auto ExtractBiasedExponentFromBits(Builtin::u16 bits) noexcept -> const Builtin::u8
		{
			#line 393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			ADV_EXPRESSION_BODY(Builtin::u8{(bits >> __Float16_Protected::BiasedExponentShift) & __Float16_Protected::ShiftedBiasedExponentMask}); 
		}
	}
namespace __Float16_Protected {
		#line 394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		inline constexpr auto ExtractTrailingSignificandFromBits(Builtin::u16 bits) noexcept -> const Builtin::u16
		{
			#line 394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			ADV_EXPRESSION_BODY(bits & __Float16_Protected::TrailingSignificandMask); 
		}
	}
} namespace __extensions { using namespace System;
#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto __static_getMinValue<__extension_Float16_8_f16>::get() -> const __extension_Float16_873_f16
	{
		#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::f16(-65504.0f)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto __static_getMaxValue<__extension_Float16_8_f16>::get() -> const __extension_Float16_873_f16
	{
		#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(+Builtin::f16(65504.0f)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	
} namespace __extensions { using namespace System;
#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto operator<=>(__extension_Float16_13_f16 const& __this LIFETIMEBOUND, Builtin::Nullable<__extension_Float16_873_f16> rhs) noexcept -> const Builtin::i32
	{
		#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		{
			#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			if ((!Builtin::Is(rhs, nullptr))) {
				#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
				auto __tmp0 = *rhs; const auto& rhs = __tmp0;
				
				#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
				return __this <=> rhs;
			}
		}
		#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		return Builtin::i32(1);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto __static_FromBits<__extension_Float16_13_f16>::get(Builtin::u16 bits)  -> const typename __extension_Float16_13_f16
	{
		#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::BitCast<__extension_Float16_873_f16>(bits)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getBits(__extension_Float16_13_f16 const& __this ) -> const Builtin::u16
	{
		#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::BitCast<Builtin::u16>(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto __static_getBitWidth<__extension_Float16_13_f16>::get() -> const Builtin::u32
	{
		#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(16U)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto __static_getMinPositiveValue<__extension_Float16_13_f16>::get() -> const __extension_Float16_873_f16
	{
		#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::f16(6.1035e-5f)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getHashCode(__extension_Float16_13_f16 const& __this ) -> const Builtin::u64
	{
		#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		auto bits = ADV_UPCS(Bits)(__this.__ref()); 
		#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		if ((((bits - Builtin::i32(1)) & (ADV_UFCS(_operator_not)(Builtin::u32(0x8000U)))) <=> Builtin::u32(0x7C00U)) >= 0) {
			#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			return bits & Builtin::u32(0x7C00U);
		}
		#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		return bits;
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	
} namespace __extensions { using namespace System;
#line 71 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto ToBoolean(__extension_Float16_70_f16 const& __this LIFETIMEBOUND) noexcept -> const bool
	{
		#line 71 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(__this != Builtin::i32(0)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 72 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto ToInt8(__extension_Float16_70_f16 const& __this LIFETIMEBOUND)  -> const Builtin::i8
	{
		#line 72 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i8>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto ToUInt8(__extension_Float16_70_f16 const& __this LIFETIMEBOUND)  -> const Builtin::u8
	{
		#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u8>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto ToInt16(__extension_Float16_70_f16 const& __this LIFETIMEBOUND)  -> const Builtin::i16
	{
		#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i16>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto ToUInt16(__extension_Float16_70_f16 const& __this LIFETIMEBOUND)  -> const Builtin::u16
	{
		#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u16>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto ToInt32(__extension_Float16_70_f16 const& __this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i32>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto ToUInt32(__extension_Float16_70_f16 const& __this LIFETIMEBOUND)  -> const Builtin::u32
	{
		#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u32>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto ToInt64(__extension_Float16_70_f16 const& __this LIFETIMEBOUND)  -> const Builtin::i64
	{
		#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i64>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto ToUInt64(__extension_Float16_70_f16 const& __this LIFETIMEBOUND)  -> const Builtin::u64
	{
		#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u64>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto ToInt128(__extension_Float16_70_f16 const& __this LIFETIMEBOUND)  -> const Builtin::i128
	{
		#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i128>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto ToUInt128(__extension_Float16_70_f16 const& __this LIFETIMEBOUND)  -> const Builtin::u128
	{
		#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u128>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto ToIsize(__extension_Float16_70_f16 const& __this LIFETIMEBOUND)  -> const Builtin::isize
	{
		#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::isize>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto ToUsize(__extension_Float16_70_f16 const& __this LIFETIMEBOUND)  -> const Builtin::usize
	{
		#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::usize>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 84 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto ToFloat32(__extension_Float16_70_f16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::f32
	{
		#line 84 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 85 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto ToFloat64(__extension_Float16_70_f16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::f64
	{
		#line 85 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 86 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto ToByte(__extension_Float16_70_f16 const& __this LIFETIMEBOUND)  -> const Builtin::char8
	{
		#line 86 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u8>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto ToChar(__extension_Float16_70_f16 const& __this LIFETIMEBOUND)  -> const Builtin::char16
	{
		#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u16>(__this)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	
} namespace __extensions { using namespace System;
#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	template<class T> inline constexpr auto _operator_div_mod(__extension_Float16_92_f16 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_Float16_873_f16, __extension_Float16_873_f16>
	{
		#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		return std::make_tuple(__this / Builtin::f32{rhs}, __this % Builtin::f32{rhs});
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	template<class T> inline constexpr auto _operator_div_not(__extension_Float16_92_f16 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Float16_92_f16
	{
		#line 100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Round)((__this / rhs).__ref())); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto _operator_div_not_eq(__extension_Float16_92_f16 & __this , auto rhs)  -> typename __extension_Float16_92_f16&
	{
		#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_div_not)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	template<class T> inline constexpr auto _operator_div_lt(__extension_Float16_92_f16 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Float16_92_f16
	{
		#line 104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Floor)((__this / rhs).__ref())); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto _operator_div_lt_eq(__extension_Float16_92_f16 & __this , auto rhs)  -> typename __extension_Float16_92_f16&
	{
		#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_div_lt)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	template<class T> inline constexpr auto _operator_div_gt(__extension_Float16_92_f16 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Float16_92_f16
	{
		#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Ceil)((__this / rhs).__ref())); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto _operator_div_gt_eq(__extension_Float16_92_f16 & __this , auto rhs)  -> typename __extension_Float16_92_f16&
	{
		#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_div_gt)(__this, rhs)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	
} namespace __extensions { using namespace System;
#line 116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto _operator_xor_xor(__extension_Float16_114_f16 const& __this LIFETIMEBOUND, Builtin::i32 exp)  -> const typename __extension_Float16_114_f16
	{
		#line 118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			return Builtin::f16(1.0f);
		}
		#line 123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		if ((exp <=> Builtin::i32(0)) < 0) {
			#line 124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			return Builtin::f16(1.0f) / ADV_UFCS(_operator_xor_xor)(__this, (-exp));
		}
		#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		auto base = __this; 
		#line 128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		auto result = Builtin::f16(1.0f); 
		#line 130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		if (std::is_constant_evaluated()) {
			#line 131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			while ((exp <=> Builtin::i32(1)) > 0) 
			{
				#line 132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
				if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
					#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
					result *= base;
				}
				#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
				ADV_UFCS(_operator_bsl_eq)(exp, Builtin::i32(2));
				#line 136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
				base *= base;
			}
			#line 138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			return result * base;
		} else {
			#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			{
				#line 140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
				for (;;) 
				{
					#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
					if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
						#line 142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
						result *= base;
						#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
						if (exp == Builtin::i32(1)) {
							#line 144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
							return result;
						}
					}
					#line 146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
					ADV_UFCS(_operator_bsl_eq)(exp, Builtin::i32(2));
					#line 147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
					base *= base;
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto _operator_xor_xor_eq(__extension_Float16_114_f16 & __this , Builtin::i32 exp)  -> typename __extension_Float16_114_f16&
	{
		#line 152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_xor_xor)(__this, exp)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	
} namespace __extensions { using namespace System;
#line 192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto MaxMagnitude(__extension_Float16_155_f16 const& __this LIFETIMEBOUND, __extension_Float16_873_f16 rhs) noexcept -> const typename __extension_Float16_155_f16
	{
		#line 194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		auto ax = ADV_UPCS(Abs)(__this.__ref()); 
		#line 195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		auto ay = ADV_UPCS(Abs)(rhs.__ref()); 
		#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		if ((ax <=> ay) > 0 || ADV_UPCS(IsNaN)(ax.__ref())) {
			#line 199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			return __this;
		}
		#line 202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		if (ax == ay) {
			#line 204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			return ADV_UPCS(IsNegative)(__this.__ref()) ? rhs : __this;
		}
		#line 207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		return rhs;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto MaxMagnitudeNumber(__extension_Float16_155_f16 const& __this LIFETIMEBOUND, __extension_Float16_873_f16 rhs) noexcept -> const typename __extension_Float16_155_f16
	{
		#line 212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		auto ax = ADV_UPCS(Abs)(__this.__ref()); 
		#line 213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		auto ay = ADV_UPCS(Abs)(rhs.__ref()); 
		#line 215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		if ((ax <=> ay) > 0 || ADV_UPCS(IsNaN)(ay.__ref())) {
			#line 217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			return __this;
		}
		#line 220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		if (ax == ay) {
			#line 222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			return ADV_UPCS(IsNegative)(__this.__ref()) ? rhs : __this;
		}
		#line 225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		return rhs;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto MinMagnitude(__extension_Float16_155_f16 const& __this LIFETIMEBOUND, __extension_Float16_873_f16 rhs) noexcept -> const typename __extension_Float16_155_f16
	{
		#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		auto ax = ADV_UPCS(Abs)(__this.__ref()); 
		#line 231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		auto ay = ADV_UPCS(Abs)(rhs.__ref()); 
		#line 233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		if ((ax <=> ay) < 0 || ADV_UPCS(IsNaN)(ax.__ref())) {
			#line 235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			return __this;
		}
		#line 238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		if (ax == ay) {
			#line 240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			return ADV_UPCS(IsNegative)(__this.__ref()) ? __this : rhs;
		}
		#line 243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		return rhs;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto MinMagnitudeNumber(__extension_Float16_155_f16 const& __this LIFETIMEBOUND, __extension_Float16_873_f16 rhs) noexcept -> const typename __extension_Float16_155_f16
	{
		#line 248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		auto ax = ADV_UPCS(Abs)(__this.__ref()); 
		#line 249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		auto ay = ADV_UPCS(Abs)(rhs.__ref()); 
		#line 251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		if ((ax <=> ay) < 0 || ADV_UPCS(IsNaN)(ay.__ref())) {
			#line 253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			return __this;
		}
		#line 256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		if (ax == ay) {
			#line 258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			return ADV_UPCS(IsNegative)(__this.__ref()) ? __this : rhs;
		}
		#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		return rhs;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto NarrowToInt8(__extension_Float16_155_f16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i8
	{
		#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i8>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto NarrowToUInt8(__extension_Float16_155_f16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u8
	{
		#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u8>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto NarrowToInt16(__extension_Float16_155_f16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i16
	{
		#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i16>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto NarrowToUInt16(__extension_Float16_155_f16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u16
	{
		#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u16>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto NarrowToInt32(__extension_Float16_155_f16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i32
	{
		#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i32>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto NarrowToUInt32(__extension_Float16_155_f16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u32
	{
		#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u32>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto NarrowToInt64(__extension_Float16_155_f16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i64
	{
		#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i64>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto NarrowToUInt64(__extension_Float16_155_f16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u64
	{
		#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u64>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto NarrowToInt128(__extension_Float16_155_f16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i128
	{
		#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i128>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto NarrowToUInt128(__extension_Float16_155_f16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u128
	{
		#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u128>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto NarrowToIsize(__extension_Float16_155_f16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::isize
	{
		#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::isize>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto NarrowToUsize(__extension_Float16_155_f16 const& __this LIFETIMEBOUND) noexcept -> const Builtin::usize
	{
		#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::usize>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto __static_getOne<__extension_Float16_155_f16>::get() -> const __extension_Float16_873_f16
	{
		#line 156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::f16(1.0f)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto __static_getZero<__extension_Float16_155_f16>::get() -> const __extension_Float16_873_f16
	{
		#line 157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::f16(0.0f)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto __static_getRadix<__extension_Float16_155_f16>::get() -> const Builtin::i32
	{
		#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(2)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getAbs(__extension_Float16_155_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		constexpr auto mask = Builtin::u16(0x7FFFU);
		#line 163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		Builtin::u16 raw = ADV_UPCS(Bits)(__this.__ref()); 
		#line 164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		return ADV_USFCS((Builtin::f16), FromBits)(raw & mask);
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getIsCanonical(__extension_Float16_155_f16 const& __this ) -> const bool
	{
		#line 166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getIsComplexNumber(__extension_Float16_155_f16 const& __this ) -> const bool
	{
		#line 167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getIsEvenInteger(__extension_Float16_155_f16 const& __this ) -> const bool
	{
		#line 168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsInteger)(__this.__ref()) && (ADV_UPCS(Abs)((__this % Builtin::i32(2)).__ref()) == Builtin::i32(0))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getIsFinite(__extension_Float16_155_f16 const& __this ) -> const bool
	{
		#line 169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(((ADV_UPCS(Bits)(__this.__ref()) & Builtin::u32(0x7FFFU)) <=> Builtin::u32(0x7C00U)) < 0); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getIsImaginaryNumber(__extension_Float16_155_f16 const& __this ) -> const bool
	{
		#line 170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getIsInfinity(__extension_Float16_155_f16 const& __this ) -> const bool
	{
		#line 171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY((ADV_UPCS(Bits)(__this.__ref()) & Builtin::u32(0x7FFFU)) == Builtin::u32(0x7C00U)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getIsInteger(__extension_Float16_155_f16 const& __this ) -> const bool
	{
		#line 172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsFinite)(__this.__ref()) && (__this == ADV_UPCS(Truncate)(__this.__ref()))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getIsNaN(__extension_Float16_155_f16 const& __this ) -> const bool
	{
		#line 173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(__this != __this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getIsNegative(__extension_Float16_155_f16 const& __this ) -> const bool
	{
		#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY((Builtin::BitCast<Builtin::i16>(__this) <=> Builtin::i32(0)) < 0); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getIsNegativeInfinity(__extension_Float16_155_f16 const& __this ) -> const bool
	{
		#line 175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(__this == ADV_USPCS(NegativeInfinity, __extension_Float16_873_f16)()); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getIsNormal(__extension_Float16_155_f16 const& __this ) -> const bool
	{
		#line 178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		auto bits = Builtin::BitCast<Builtin::u16>(__this) & Builtin::u32(0x7FFFU); 
		#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		return ((bits <=> Builtin::u32(0x7C00U)) < 0) && (bits != Builtin::i32(0)) && ((bits & Builtin::i32(0x7C00)) != Builtin::i32(0));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getIsOddInteger(__extension_Float16_155_f16 const& __this ) -> const bool
	{
		#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsInteger)(__this.__ref()) && (ADV_UPCS(Abs)((__this % Builtin::i32(2)).__ref()) == Builtin::i32(1))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getIsPositive(__extension_Float16_155_f16 const& __this ) -> const bool
	{
		#line 182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY((Builtin::BitCast<Builtin::i16>(__this) <=> Builtin::i32(0)) >= 0); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getIsPositiveInfinity(__extension_Float16_155_f16 const& __this ) -> const bool
	{
		#line 183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(__this == ADV_USPCS(PositiveInfinity, __extension_Float16_873_f16)()); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getIsRealNumber(__extension_Float16_155_f16 const& __this ) -> const bool
	{
		#line 184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(__this == __this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getIsSubnormal(__extension_Float16_155_f16 const& __this ) -> const bool
	{
		#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		auto bits = ADV_UPCS(Bits)(__this.__ref()) & Builtin::u32(0x7FFFU); 
		#line 188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		return ((bits <=> Builtin::u32(0x7C00U)) < 0) && (bits != Builtin::i32(0)) && ((bits & Builtin::u32(0x7C00U)) == Builtin::i32(0));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getIsZero(__extension_Float16_155_f16 const& __this ) -> const bool
	{
		#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(__this == ADV_USPCS(Zero, __extension_Float16_873_f16)()); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	
} namespace __extensions { using namespace System;
#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto __static_getMinusOne<__extension_Float16_290_f16>::get() -> const __extension_Float16_873_f16
	{
		#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::f16(-1.0f)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	
} namespace __extensions { using namespace System;
#line 302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto CopySign(__extension_Float16_294_f16 const& __this LIFETIMEBOUND, __extension_Float16_873_f16 sign) noexcept -> const typename __extension_Float16_294_f16
	{
		#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		if (std::is_constant_evaluated()) {
			#line 305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			if ((sign <=> Builtin::i32(0)) < 0 || (sign == Builtin::i32(0) && (Builtin::f32(1.0f) / sign <=> Builtin::i32(0)) < 0)) {
				#line 306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
				return (__this <=> Builtin::i32(0)) < 0 ? __this : -__this;
			}
			#line 308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			return (__this <=> Builtin::i32(0)) < 0 ? -__this : __this;
		} else {
			#line 309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			{
				#line 310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
				return Builtin::Cast<true, Builtin::f16>(std::copysignf(Builtin::Cast<true, Builtin::f32>(__this), Builtin::Cast<true, Builtin::f32>(sign)));
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto Max(__extension_Float16_294_f16 const& __this LIFETIMEBOUND, __extension_Float16_873_f16 rhs) noexcept -> const typename __extension_Float16_294_f16
	{
		#line 316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		if (__this != rhs) {
			#line 317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			if (!ADV_UPCS(IsNaN)(__this.__ref())) {
				#line 318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
				return (rhs <=> __this) < 0 ? __this : rhs;
			}
			#line 320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			return __this;
		}
		#line 322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		return ADV_UPCS(IsNegative)(rhs.__ref()) ? __this : rhs;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto MaxNumber(__extension_Float16_294_f16 const& __this LIFETIMEBOUND, __extension_Float16_873_f16 rhs) noexcept -> const typename __extension_Float16_294_f16
	{
		#line 326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		if (__this != rhs) {
			#line 327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			if (!ADV_UPCS(IsNaN)(rhs.__ref())) {
				#line 328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
				return (rhs <=> __this) < 0 ? __this : rhs;
			}
			#line 330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			return __this;
		}
		#line 332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		return ADV_UPCS(IsNegative)(rhs.__ref()) ? __this : rhs;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto Min(__extension_Float16_294_f16 const& __this LIFETIMEBOUND, __extension_Float16_873_f16 rhs) noexcept -> const typename __extension_Float16_294_f16
	{
		#line 336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		if (__this != rhs) {
			#line 337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			if (!ADV_UPCS(IsNaN)(__this.__ref())) {
				#line 338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
				return (__this <=> rhs) < 0 ? __this : rhs;
			}
			#line 340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			return __this;
		}
		#line 342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		return ADV_UPCS(IsNegative)(__this.__ref()) ? __this : rhs;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto MinNumber(__extension_Float16_294_f16 const& __this LIFETIMEBOUND, __extension_Float16_873_f16 rhs) noexcept -> const typename __extension_Float16_294_f16
	{
		#line 346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		if (__this != rhs) {
			#line 347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			if (!ADV_UPCS(IsNaN)(rhs.__ref())) {
				#line 348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
				return (__this <=> rhs) < 0 ? __this : rhs;
			}
			#line 350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			return __this;
		}
		#line 352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		return ADV_UPCS(IsNegative)(__this.__ref()) ? __this : rhs;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto Clamp(__extension_Float16_294_f16 const& __this LIFETIMEBOUND, __extension_Float16_873_f16 min, __extension_Float16_873_f16 max)  -> const typename __extension_Float16_294_f16
	{
		#line 356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		if ((min <=> max) > 0) {
			#line 357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			Builtin::Throw(Builtin::InvalidOperationException{});
		}
		#line 360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		return (__this <=> min) < 0 ? min : (__this <=> max) > 0 ? max : __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getSign(__extension_Float16_294_f16 const& __this ) -> const Builtin::i32
	{
		#line 295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		return [&]() 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
		{
			#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			auto __tmp__valid_295 = Builtin::Cast<false, std::decay_t<decltype(__this)>::__self>(__this);
			#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			if(__tmp__valid_295.IsValid() && Builtin::Is(*__tmp__valid_295, Builtin::i32(0))) {
				#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
				
				return Builtin::i32(0);
			}
			else {
				#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
				if(__tmp__valid_295.IsValid() && Builtin::IsLess(*__tmp__valid_295, Builtin::i32(0))) {
					#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
					
					return Builtin::i32(-1);
				}
				else {
					#line 298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
					if(__tmp__valid_295.IsValid() && Builtin::IsGreater(*__tmp__valid_295, Builtin::i32(0))) {
						#line 298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
						
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
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	
} namespace __extensions { using namespace System;
#line 437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto Log(__extension_Float16_397_f16 const& __this LIFETIMEBOUND, __extension_Float16_873_f16 base) noexcept -> const typename __extension_Float16_397_f16
	{
		#line 439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		if (ADV_UPCS(IsNaN)(__this.__ref())) {
			#line 440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			return __this;
		}
		#line 442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		if (ADV_UPCS(IsNaN)(base.__ref())) {
			#line 443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			return base;
		}
		#line 446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		if (base == Builtin::i32(1)) {
			#line 447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			return ADV_USPCS(NaN, Builtin::f16)();
		}
		#line 449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		if (__this != Builtin::i32(1) && (base == Builtin::i32(0) || ADV_UPCS(IsPositiveInfinity)(base.__ref()))) {
			#line 450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			return ADV_USPCS(NaN, Builtin::f16)();
		}
		#line 453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		return ADV_UPCS(Ln)(__this.__ref()) / ADV_UPCS(Ln)(base.__ref());
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto Midpoint(__extension_Float16_397_f16 const& __this LIFETIMEBOUND, __extension_Float16_873_f16 rhs) noexcept -> const typename __extension_Float16_397_f16
	{
		#line 460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		constexpr auto riskValue = ADV_USPCS(MaxValue, __extension_Float16_873_f16)() / Builtin::f32(2.0f);
		#line 462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		if ((ADV_UPCS(Abs)(__this.__ref()) <=> riskValue) <= 0 && (ADV_UPCS(Abs)(rhs.__ref()) <=> riskValue) <= 0) {
			#line 463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			return (__this + rhs) / Builtin::f32(2.0f);
		} else {
			#line 464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			{
				#line 465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
				return (__this / Builtin::f32(2.0f)) + (rhs / Builtin::f32(2.0f));
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto IsMultipleOf(__extension_Float16_397_f16 const& __this LIFETIMEBOUND, __extension_Float16_873_f16 rhs) noexcept -> const bool
	{
		#line 472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		if (rhs == Builtin::i32(0)) {
			#line 473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			return __this == Builtin::i32(0);
		}
		#line 476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		if (rhs == Builtin::i32(-1)) {
			#line 477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			return Builtin::Boolean(true);
		}
		#line 480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		return __this % rhs == Builtin::i32(0);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto __static_getAllBitsSet<__extension_Float16_397_f16>::get() -> const __extension_Float16_873_f16
	{
		#line 399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Builtin::f16), FromBits)(ADV_USPCS(MaxValue, Builtin::u16)())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getIsPow2(__extension_Float16_397_f16 const& __this ) -> const bool
	{
		#line 404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		auto bits = ADV_UPCS(Bits)(__this.__ref()); 
		#line 406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		if ((ADV_UFCS(NarrowToInt16)(bits.__ref()) <=> Builtin::i32(0)) <= 0) {
			#line 407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			return Builtin::Boolean(false);
		}
		#line 410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		auto biasedExponent = __Float16_Protected::ExtractBiasedExponentFromBits(bits); 
		#line 411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		auto trailingSignificand = __Float16_Protected::ExtractTrailingSignificandFromBits(bits); 
		#line 414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		if (biasedExponent == __Float16_Protected::MinBiasedExponent) {
			#line 415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			return ADV_UPCS(PopCount)(trailingSignificand.__ref()) == Builtin::i32(1);
		}
		#line 418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		if (biasedExponent == __Float16_Protected::MaxBiasedExponent) {
			#line 419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			return Builtin::Boolean(false);
		}
		#line 423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		return trailingSignificand == __Float16_Protected::MinTrailingSignificand;
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getLog2(__extension_Float16_397_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::f16>(std::log2f(Builtin::Cast<true, Builtin::f32>(__this)))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getLog10(__extension_Float16_397_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::f16>(std::log10f(Builtin::Cast<true, Builtin::f32>(__this)))); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	
} namespace __extensions { using namespace System;
#line 486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto __static_getPi<__extension_Float16_484_f16>::get() -> const __extension_Float16_873_f16
	{
		#line 486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::f16(3.14f)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto __static_getE<__extension_Float16_484_f16>::get() -> const __extension_Float16_873_f16
	{
		#line 487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::f16(2.718f)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 488 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto __static_getTau<__extension_Float16_484_f16>::get() -> const __extension_Float16_873_f16
	{
		#line 488 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::f16(6.28f)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	
} namespace __extensions { using namespace System;
#line 509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto CeilToInt32(__extension_Float16_491_f16 const& __this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i32>(ADV_UPCS(Ceil)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto CeilToInt64(__extension_Float16_491_f16 const& __this LIFETIMEBOUND)  -> const Builtin::i64
	{
		#line 510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i64>(ADV_UPCS(Ceil)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto CeilToInt128(__extension_Float16_491_f16 const& __this LIFETIMEBOUND)  -> const Builtin::i128
	{
		#line 511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i128>(ADV_UPCS(Ceil)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto FloorToInt32(__extension_Float16_491_f16 const& __this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i32>(ADV_UPCS(Floor)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto FloorToInt64(__extension_Float16_491_f16 const& __this LIFETIMEBOUND)  -> const Builtin::i64
	{
		#line 527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i64>(ADV_UPCS(Floor)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto FloorToInt128(__extension_Float16_491_f16 const& __this LIFETIMEBOUND)  -> const Builtin::i128
	{
		#line 528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i128>(ADV_UPCS(Floor)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto TruncateToInt32(__extension_Float16_491_f16 const& __this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i32>(ADV_UPCS(Truncate)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto TruncateToInt64(__extension_Float16_491_f16 const& __this LIFETIMEBOUND)  -> const Builtin::i64
	{
		#line 543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i64>(ADV_UPCS(Truncate)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto TruncateToInt128(__extension_Float16_491_f16 const& __this LIFETIMEBOUND)  -> const Builtin::i128
	{
		#line 544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i128>(ADV_UPCS(Truncate)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto RoundToInt32(__extension_Float16_491_f16 const& __this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i32>(ADV_UPCS(Round)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto RoundToInt64(__extension_Float16_491_f16 const& __this LIFETIMEBOUND)  -> const Builtin::i64
	{
		#line 559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i64>(ADV_UPCS(Round)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto RoundToInt128(__extension_Float16_491_f16 const& __this LIFETIMEBOUND)  -> const Builtin::i128
	{
		#line 560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i128>(ADV_UPCS(Round)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto RoundTiesEvenToInt32(__extension_Float16_491_f16 const& __this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i32>(ADV_UPCS(RoundTiesEven)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto RoundTiesEvenToInt64(__extension_Float16_491_f16 const& __this LIFETIMEBOUND)  -> const Builtin::i64
	{
		#line 571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i64>(ADV_UPCS(RoundTiesEven)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto RoundTiesEvenToInt128(__extension_Float16_491_f16 const& __this LIFETIMEBOUND)  -> const Builtin::i128
	{
		#line 572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i128>(ADV_UPCS(RoundTiesEven)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto Round(__extension_Float16_491_f16 const& __this LIFETIMEBOUND, Builtin::u32 digits)  -> const typename __extension_Float16_491_f16
	{
		#line 574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Round)(__this.__ref(), digits, ADV_USPCS(AwayFromZero, MidpointRounding)())); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto Round(__extension_Float16_491_f16 const& __this LIFETIMEBOUND, MidpointRounding rounding)  -> const typename __extension_Float16_491_f16
	{
		#line 577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		if (std::is_constant_evaluated()) {
			#line 578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			if (rounding == ADV_USPCS(AwayFromZero, MidpointRounding)()) {
				#line 579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
				return ADV_UPCS(Round)(__this.__ref());
			}
			#line 581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			if (rounding == ADV_USPCS(ToEven, MidpointRounding)()) {
				#line 582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
				return ADV_UPCS(RoundTiesEven)(__this.__ref());
			}
		}
		#line 585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		return ADV_UFCS(Round)(__this.__ref(), Builtin::u32(0U), rounding);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 587 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto Round(__extension_Float16_491_f16 const& __this LIFETIMEBOUND, Builtin::u32 digits, MidpointRounding rounding)  -> const typename __extension_Float16_491_f16
	{
		#line 589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		return Builtin::Cast<true, Builtin::f16>(ADV_UFCS(Round)((Builtin::Cast<true, Builtin::f32>(__this)).__ref(), digits, rounding));
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getFractionalPart(__extension_Float16_491_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(__this - ADV_UPCS(Truncate)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getCeil(__extension_Float16_491_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		if (std::is_constant_evaluated()) {
			#line 502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			const auto i = Builtin::f16{Builtin::Cast<true, Builtin::i32>(__this)}; 
			#line 503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			return ((__this <=> i) > 0) ? (i + Builtin::i32(1)) : i;
		} else {
			#line 504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			{
				#line 505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
				return Builtin::Cast<true, Builtin::f16>(std::ceilf(Builtin::Cast<true, Builtin::f32>(__this)));
			}
		}
		return {};
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 516 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getFloor(__extension_Float16_491_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		if (std::is_constant_evaluated()) {
			#line 519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			const auto i = Builtin::f16{Builtin::Cast<true, Builtin::i32>(__this)}; 
			#line 520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			return ((__this <=> i) < 0) ? (i - Builtin::i32(1)) : i;
		} else {
			#line 521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			{
				#line 522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
				return Builtin::Cast<true, Builtin::f16>(std::floorf(Builtin::Cast<true, Builtin::f32>(__this)));
			}
		}
		return {};
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getTruncate(__extension_Float16_491_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		if (std::is_constant_evaluated()) {
			#line 536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			return Builtin::f16{Builtin::Cast<true, Builtin::i32>(__this)};
		} else {
			#line 537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			{
				#line 538 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
				return Builtin::Cast<true, Builtin::f16>(std::truncf(Builtin::Cast<true, Builtin::f32>(__this)));
			}
		}
		return {};
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getRound(__extension_Float16_491_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		if (std::is_constant_evaluated()) {
			#line 552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			return Builtin::f16{Builtin::Cast<true, Builtin::i32>((__this + ADV_UFCS(CopySign)(Builtin::f32(0.5f).__ref(), __this)))};
		} else {
			#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			{
				#line 554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
				return Builtin::Cast<true, Builtin::f16>(std::roundf(Builtin::Cast<true, Builtin::f32>(__this)));
			}
		}
		return {};
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getRoundTiesEven(__extension_Float16_491_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		return Builtin::Cast<true, Builtin::f16>(ADV_UPCS(RoundTiesEven)((Builtin::Cast<true, Builtin::f32>(__this)).__ref()));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getExponentByteCount(__extension_Float16_491_f16 const& __this ) -> const Builtin::u32
	{
		#line 592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u32>(Builtin::usize(sizeof(Builtin::i8)))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getExponentShortestBitLength(__extension_Float16_491_f16 const& __this ) -> const Builtin::u32
	{
		#line 595 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		auto exponent = __Float16_Protected::Exponent(__this); 
		#line 596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		if ((exponent <=> Builtin::i32(0)) >= 0) {
			#line 597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			return ADV_USPCS(BitWidth, Builtin::i8)() - ADV_UPCS(LeadingZeroCount)(exponent.__ref());
		} else {
			#line 598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			{
				#line 599 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
				return ADV_USPCS(BitWidth, Builtin::i8)() + Builtin::i32(1) - ADV_UPCS(LeadingZeroCount)(exponent.__ref());
			}
		}
		return {};
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getSignificandBitLength(__extension_Float16_491_f16 const& __this ) -> const Builtin::u32
	{
		#line 602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(11U)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 603 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getSignificandByteCount(__extension_Float16_491_f16 const& __this ) -> const Builtin::u32
	{
		#line 603 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u32>(Builtin::usize(sizeof(Builtin::u16)))); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	
} namespace __extensions { using namespace System;
#line 608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto _operator_mul_mul(__extension_Float16_607_f16 const& __this LIFETIMEBOUND, __extension_Float16_873_f16 exp) noexcept -> const typename __extension_Float16_607_f16
	{
		#line 608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::f16>(std::powf(Builtin::Cast<true, Builtin::f32>(__this), Builtin::Cast<true, Builtin::f32>(exp)))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto _operator_mul_mul_eq(__extension_Float16_607_f16 & __this , __extension_Float16_873_f16 exp) noexcept -> typename __extension_Float16_607_f16&
	{
		#line 609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(__this = Builtin::Cast<true, Builtin::f16>(std::powf(Builtin::Cast<true, Builtin::f32>(__this), Builtin::Cast<true, Builtin::f32>(exp)))); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	
} namespace __extensions { using namespace System;
#line 614 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getExp(__extension_Float16_612_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 614 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::f16>(std::expf(Builtin::Cast<true, Builtin::f32>(__this)))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 616 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getExp2(__extension_Float16_612_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 616 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::f16>(std::exp2f(Builtin::Cast<true, Builtin::f32>(__this)))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 618 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getExp10(__extension_Float16_612_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 618 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_mul)(Builtin::f16(10.0f), __this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getExpM1(__extension_Float16_612_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::f16>(std::expm1f(Builtin::Cast<true, Builtin::f32>(__this)))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 622 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getExp2M1(__extension_Float16_612_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 622 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Exp2)(__this.__ref()) - Builtin::f16(1.0f)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getExp10M1(__extension_Float16_612_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Exp10)(__this.__ref()) - Builtin::f16(1.0f)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	
} namespace __extensions { using namespace System;
#line 629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getLn(__extension_Float16_627_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::f16>(std::logf(Builtin::Cast<true, Builtin::f32>(__this)))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 631 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getLnP1(__extension_Float16_627_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 631 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::f16>(std::log1pf(Builtin::Cast<true, Builtin::f32>(__this)))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getLog2P1(__extension_Float16_627_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::f16>(std::log2f(Builtin::f32{__this} + Builtin::f32(1.0f)))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 635 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getLog10P1(__extension_Float16_627_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 635 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::f16>(std::log10f(Builtin::f32{__this} + Builtin::f32(1.0f)))); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	
} namespace __extensions { using namespace System;
#line 640 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getSqrt(__extension_Float16_638_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 640 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::f16>(std::sqrtf(Builtin::Cast<true, Builtin::f32>(__this)))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getCbrt(__extension_Float16_638_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::f16>(std::cbrtf(Builtin::Cast<true, Builtin::f32>(__this)))); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	
} namespace __extensions { using namespace System;
#line 724 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto ToRadians(__extension_Float16_656_f16 const& __this LIFETIMEBOUND) noexcept -> const typename __extension_Float16_656_f16
	{
		#line 724 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY((__this * ADV_USPCS(Pi, Builtin::f16)()) / Builtin::f32(180.0f)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 726 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto ToDegrees(__extension_Float16_656_f16 const& __this LIFETIMEBOUND) noexcept -> const typename __extension_Float16_656_f16
	{
		#line 726 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY((__this * Builtin::f32(180.0f)) / ADV_USPCS(Pi, Builtin::f16)()); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 658 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getSin(__extension_Float16_656_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 658 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::f16>(std::sinf(Builtin::Cast<true, Builtin::f32>(__this)))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getCos(__extension_Float16_656_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::f16>(std::cosf(Builtin::Cast<true, Builtin::f32>(__this)))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getTan(__extension_Float16_656_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::f16>(std::tanf(Builtin::Cast<true, Builtin::f32>(__this)))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 664 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getCot(__extension_Float16_656_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 664 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::f16(1.0f) / ADV_UPCS(Tan)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getSec(__extension_Float16_656_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::f16(1.0f) / ADV_UPCS(Cos)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getCsc(__extension_Float16_656_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::f16(1.0f) / ADV_UPCS(Sin)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 670 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getAsin(__extension_Float16_656_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 670 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::f16>(std::asinf(Builtin::Cast<true, Builtin::f32>(__this)))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 672 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getAcos(__extension_Float16_656_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 672 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::f16>(std::acosf(Builtin::Cast<true, Builtin::f32>(__this)))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 674 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getAtan(__extension_Float16_656_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 674 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::f16>(std::atanf(Builtin::Cast<true, Builtin::f32>(__this)))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 676 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getAcot(__extension_Float16_656_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 676 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::f16>(std::atanf(Builtin::f32(1.0f) / __this))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getAsec(__extension_Float16_656_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::f16>(std::acosf(Builtin::f32(1.0f) / __this))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getAcsc(__extension_Float16_656_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::f16>(std::asinf(Builtin::f32(1.0f) / __this))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 682 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getSinCos(__extension_Float16_656_f16 const& __this ) -> const std::tuple<__extension_Float16_873_f16, __extension_Float16_873_f16>
	{
		#line 682 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(std::make_tuple(ADV_UPCS(Sin)(__this.__ref()), ADV_UPCS(Cos)(__this.__ref()))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getCotPi(__extension_Float16_656_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::f16(1.0f) / ADV_UPCS(TanPi)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 707 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getSecPi(__extension_Float16_656_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 707 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::f16(1.0f) / ADV_UPCS(CosPi)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getCscPi(__extension_Float16_656_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::f16(1.0f) / ADV_UPCS(SinPi)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 711 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getAsinPi(__extension_Float16_656_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 711 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Asin)(__this.__ref()) / ADV_USPCS(Pi, Builtin::f16)()); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 713 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getAcosPi(__extension_Float16_656_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 713 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Acos)(__this.__ref()) / ADV_USPCS(Pi, Builtin::f16)()); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getAtanPi(__extension_Float16_656_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Atan)(__this.__ref()) / ADV_USPCS(Pi, Builtin::f16)()); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 717 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getAcotPi(__extension_Float16_656_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 717 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Acot)(__this.__ref()) / ADV_USPCS(Pi, Builtin::f16)()); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 719 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getAsecPi(__extension_Float16_656_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 719 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Asec)(__this.__ref()) / ADV_USPCS(Pi, Builtin::f16)()); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 721 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getAcscPi(__extension_Float16_656_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 721 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Acsc)(__this.__ref()) / ADV_USPCS(Pi, Builtin::f16)()); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	
} namespace __extensions { using namespace System;
#line 731 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getAcosh(__extension_Float16_729_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 731 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::f16>(std::acoshf(Builtin::Cast<true, Builtin::f32>(__this)))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 733 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getAcoth(__extension_Float16_729_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 733 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::f16>(std::atanhf(Builtin::f32(1.0f) / __this))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 735 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getAcsch(__extension_Float16_729_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 735 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::f16>(std::asinhf(Builtin::f32(1.0f) / __this))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 737 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getAsech(__extension_Float16_729_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 737 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::f16>(std::acoshf(Builtin::f32(1.0f) / __this))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 739 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getAsinh(__extension_Float16_729_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 739 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::f16>(std::asinhf(Builtin::Cast<true, Builtin::f32>(__this)))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 741 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getAtanh(__extension_Float16_729_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 741 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::f16>(std::atanhf(Builtin::Cast<true, Builtin::f32>(__this)))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getCosh(__extension_Float16_729_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::f16>(std::coshf(Builtin::Cast<true, Builtin::f32>(__this)))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 745 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getCoth(__extension_Float16_729_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 745 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::f16(1.0f) / ADV_UPCS(Tanh)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 747 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getCsch(__extension_Float16_729_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 747 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::f16(1.0f) / ADV_UPCS(Sinh)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 749 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getSech(__extension_Float16_729_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 749 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::f16(1.0f) / ADV_UPCS(Cosh)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 751 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getSinh(__extension_Float16_729_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 751 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::f16>(std::sinhf(Builtin::Cast<true, Builtin::f32>(__this)))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 753 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getTanh(__extension_Float16_729_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 753 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::f16>(std::tanhf(Builtin::Cast<true, Builtin::f32>(__this)))); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	
} namespace __extensions { using namespace System;
#line 764 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto Atan2(__extension_Float16_756_f16 const& __this LIFETIMEBOUND, __extension_Float16_873_f16 y)  -> const typename __extension_Float16_756_f16
	{
		#line 764 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::f16>(std::atan2f(Builtin::Cast<true, Builtin::f32>(__this), Builtin::Cast<true, Builtin::f32>(y)))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto Atan2Pi(__extension_Float16_756_f16 const& __this LIFETIMEBOUND, __extension_Float16_873_f16 y)  -> const typename __extension_Float16_756_f16
	{
		#line 765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Atan2)(__this.__ref(), y) / ADV_USPCS(Pi, Builtin::f16)()); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 854 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto FusedMultiplyAdd(__extension_Float16_756_f16 const& __this LIFETIMEBOUND, __extension_Float16_873_f16 rhs, __extension_Float16_873_f16 addend)  -> const typename __extension_Float16_756_f16
	{
		#line 854 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::f16>(std::fmaf(Builtin::Cast<true, Builtin::f32>(__this), Builtin::Cast<true, Builtin::f32>(rhs), Builtin::Cast<true, Builtin::f32>(addend)))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 856 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto Ieee754Remainder(__extension_Float16_756_f16 const& __this LIFETIMEBOUND, __extension_Float16_873_f16 rhs)  -> const typename __extension_Float16_756_f16
	{
		#line 856 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::f16>(std::remainderf(Builtin::Cast<true, Builtin::f32>(__this), Builtin::Cast<true, Builtin::f32>(rhs)))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 859 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto Lerp(__extension_Float16_756_f16 const& __this LIFETIMEBOUND, __extension_Float16_873_f16 end, __extension_Float16_873_f16 amount) noexcept -> const typename __extension_Float16_756_f16
	{
		#line 859 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(__this * (Builtin::f32(1.0f) - amount) + (end * amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 861 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto ScaleB(__extension_Float16_756_f16 const& __this LIFETIMEBOUND, Builtin::i32 n)  -> const typename __extension_Float16_756_f16
	{
		#line 861 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::f16>(std::scalbnf(Builtin::Cast<true, Builtin::f32>(__this), n))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 757 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto __static_getEpsilon<__extension_Float16_756_f16>::get() -> const __extension_Float16_873_f16
	{
		#line 757 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Builtin::f16), FromBits)(Builtin::u16(1U))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 758 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto __static_getNegativeInfinity<__extension_Float16_756_f16>::get() -> const __extension_Float16_873_f16
	{
		#line 758 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Builtin::f16), FromBits)(Builtin::u16(0xFC00U))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 759 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto __static_getPositiveInfinity<__extension_Float16_756_f16>::get() -> const __extension_Float16_873_f16
	{
		#line 759 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Builtin::f16), FromBits)(Builtin::u16(0x7C00U))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 760 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto __static_getNaN<__extension_Float16_756_f16>::get() -> const __extension_Float16_873_f16
	{
		#line 760 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Builtin::f16), FromBits)(Builtin::u16(0xFE00U))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 761 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto __static_getNegativeZero<__extension_Float16_756_f16>::get() -> const __extension_Float16_873_f16
	{
		#line 761 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Builtin::f16), FromBits)(Builtin::u16(0x8000U))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 773 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getBitIncrement(__extension_Float16_756_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 775 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		auto bits = ADV_UPCS(Bits)(__this.__ref()); 
		#line 776 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		if (((bits & Builtin::u16(0x7C00U)) <=> Builtin::u16(0x7C00U)) >= 0) {
			#line 780 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			return bits == Builtin::u16(0xFC00U) ? ADV_USPCS(MinValue, Builtin::f16)() : __this;
		}
		#line 784 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		if (bits == Builtin::u16(0x8000U)) {
			#line 785 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			return ADV_USPCS(Epsilon, Builtin::f16)();
		}
		#line 788 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		bits += (bits <=> ADV_USPCS(MaxValue, Builtin::i16)()) > 0 ? Builtin::i32(-1) : +Builtin::i32(1);
		#line 789 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		return ADV_USFCS((Builtin::f16), FromBits)(bits);
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 797 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getBitDecrement(__extension_Float16_756_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 799 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		auto bits = ADV_UPCS(Bits)(__this.__ref()); 
		#line 800 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		if (((bits & Builtin::u16(0x7C00U)) <=> Builtin::u16(0x7C00U)) >= 0) {
			#line 804 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			return bits == Builtin::u16(0x7C00U) ? ADV_USPCS(MaxValue, Builtin::f16)() : __this;
		}
		#line 808 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		if (bits == Builtin::u32(0U)) {
			#line 809 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			return -ADV_USPCS(Epsilon, Builtin::f16)();
		}
		#line 812 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		bits += (bits <=> ADV_USPCS(MaxValue, Builtin::i16)()) > 0 ? +Builtin::i32(1) : Builtin::i32(-1);
		#line 813 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		return ADV_USFCS((Builtin::f16), FromBits)(bits);
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getILogB(__extension_Float16_756_f16 const& __this ) -> const Builtin::i32
	{
		#line 816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(std::ilogbf(Builtin::Cast<true, Builtin::f32>(__this))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 818 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getReciprocalEstimate(__extension_Float16_756_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 820 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		if (std::is_constant_evaluated()) {
			#line 821 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			return Builtin::f16(1.0f) / __this;
		} else {
			#line 822 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			{
				#line 824 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
				return Builtin::f16(1.0f) / __this;
			}
		}
		return {};
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 827 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getReciprocalSqrtEstimate(__extension_Float16_756_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 829 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		if (std::is_constant_evaluated()) {
			#line 830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			return Builtin::f16(1.0f) / ADV_UPCS(Sqrt)(__this.__ref());
		} else {
			#line 831 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			{
				#line 833 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
				return Builtin::f16(1.0f) / ADV_UPCS(Sqrt)(__this.__ref());
			}
		}
		return {};
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 838 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto getCategory(__extension_Float16_756_f16 const& __this ) -> const FloatingPointCategory
	{
		#line 840 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		if (ADV_UPCS(IsNaN)(__this.__ref())) {
			#line 841 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			return ADV_USPCS(NaN, FloatingPointCategory)();
		} else {
			#line 842 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			if (ADV_UPCS(IsInfinity)(__this.__ref())) {
				#line 843 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
				return ADV_USPCS(Infinity, FloatingPointCategory)();
			} else {
				#line 844 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
				if (ADV_UPCS(IsZero)(__this.__ref())) {
					#line 845 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
					return ADV_USPCS(Zero, FloatingPointCategory)();
				} else {
					#line 846 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
					if (ADV_UPCS(IsSubnormal)(__this.__ref())) {
						#line 847 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
						return ADV_USPCS(Subnormal, FloatingPointCategory)();
					} else {
						#line 848 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
						{
							#line 849 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
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
#line 864 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getGamma(__extension_Float16_756_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 864 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::f16>(std::tgammaf(Builtin::Cast<true, Builtin::f32>(__this)))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 866 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getLnGamma(__extension_Float16_756_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 866 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::f16>(std::lgammaf(Builtin::Cast<true, Builtin::f32>(__this)))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 868 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getErf(__extension_Float16_756_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 868 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::f16>(std::erff(Builtin::Cast<true, Builtin::f32>(__this)))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 870 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline auto getErfc(__extension_Float16_756_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 870 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::f16>(std::erfcf(Builtin::Cast<true, Builtin::f32>(__this)))); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	
} namespace __extensions { using namespace System;
#line 874 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto __static_getNumberBufferLength<__extension_Float16_873_f16>::get() -> const Builtin::i32
	{
		#line 874 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(21) + Builtin::i32(1) + Builtin::i32(1)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 875 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto __static_getZeroBits<__extension_Float16_873_f16>::get() -> const Builtin::u128
	{
		#line 875 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(0U)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 876 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto __static_getInfinityBits<__extension_Float16_873_f16>::get() -> const Builtin::u128
	{
		#line 876 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(0x7C00U)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 877 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto __static_getNormalMantissaMask<__extension_Float16_873_f16>::get() -> const Builtin::u128
	{
		#line 877 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY((Builtin::u128(1ULL) << __Float16_Protected::SignificandLength) - Builtin::u32(1U)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 878 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto __static_getDenormalMantissaMask<__extension_Float16_873_f16>::get() -> const Builtin::u128
	{
		#line 878 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(__Float16_Protected::TrailingSignificandMask); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 879 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto __static_getMinBinaryExponent<__extension_Float16_873_f16>::get() -> const Builtin::i32
	{
		#line 879 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(1) - __Float16_Protected::MaxExponent); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 880 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto __static_getMaxBinaryExponent<__extension_Float16_873_f16>::get() -> const Builtin::i32
	{
		#line 880 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(__Float16_Protected::MaxExponent); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 881 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto __static_getMinDecimalExponent<__extension_Float16_873_f16>::get() -> const Builtin::i32
	{
		#line 881 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(-8)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 882 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto __static_getMaxDecimalExponent<__extension_Float16_873_f16>::get() -> const Builtin::i32
	{
		#line 882 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(5)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 883 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto __static_getExponentBias<__extension_Float16_873_f16>::get() -> const Builtin::i32
	{
		#line 883 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(__Float16_Protected::ExpBias); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 884 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto __static_getExponentBits<__extension_Float16_873_f16>::get() -> const Builtin::u128
	{
		#line 884 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(5U)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 885 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto __static_getOverflowDecimalExponent<__extension_Float16_873_f16>::get() -> const Builtin::i32
	{
		#line 885 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl)((__Float16_Protected::MaxExponent + Builtin::i32(2) * __Float16_Protected::SignificandLength), Builtin::i32(3))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 886 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto __static_getInfinityExponent<__extension_Float16_873_f16>::get() -> const Builtin::i32
	{
		#line 886 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(0x1F)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 887 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto __static_getNormalMantissaBits<__extension_Float16_873_f16>::get() -> const Builtin::u16
	{
		#line 887 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(__Float16_Protected::SignificandLength); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 888 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto __static_getDenormalMantissaBits<__extension_Float16_873_f16>::get() -> const Builtin::u16
	{
		#line 888 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(__Float16_Protected::TrailingSignificandLength); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 889 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto __static_getMinFastFloatDecimalExponent<__extension_Float16_873_f16>::get() -> const Builtin::i32
	{
		#line 889 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(-8)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 890 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto __static_getMaxFastFloatDecimalExponent<__extension_Float16_873_f16>::get() -> const Builtin::i32
	{
		#line 890 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(4)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 891 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto __static_getMinExponentRoundToEven<__extension_Float16_873_f16>::get() -> const Builtin::i32
	{
		#line 891 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(-21)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 892 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto __static_getMaxExponentRoundToEven<__extension_Float16_873_f16>::get() -> const Builtin::i32
	{
		#line 892 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(5)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 893 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto __static_getMaxExponentFastPath<__extension_Float16_873_f16>::get() -> const Builtin::i32
	{
		#line 893 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(4)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 894 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	inline constexpr auto __static_getMaxMantissaFastPath<__extension_Float16_873_f16>::get() -> const Builtin::u128
	{
		#line 894 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_EXPRESSION_BODY(Builtin::u128(2ULL) << __Float16_Protected::TrailingSignificandLength); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	

}