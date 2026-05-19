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
namespace __Unsafe {} namespace __UInt8_Protected__Unsafe {}
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
	} namespace __extensions { using namespace System;
#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	using __extension_UInt8_15_u8 = Builtin::u8;
	#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ADV_CHECK_INTERFACE(IMinMaxValue, IMinMaxValue);
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class __TT> struct __static_getMinValue; template<> struct __static_getMinValue<__extension_UInt8_15_u8> { static inline constexpr auto get() -> const __extension_UInt8_15_u8; };
	#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class __TT> struct __static_getMaxValue; template<> struct __static_getMaxValue<__extension_UInt8_15_u8> { static inline constexpr auto get() -> const __extension_UInt8_15_u8; };
	#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(u8, IMinMaxValue, IMinMaxValue, u8);
	} namespace System{
using __extensions::__static_getMinValue;
using __extensions::__static_getMaxValue;

		} namespace __extensions { using namespace System;
#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	using __extension_UInt8_20_u8 = Builtin::u8;
	#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ASTRUMSTD_API auto _operator_eq_eq_mul(__extension_UInt8_20_u8 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool;
	#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto operator<=>(__extension_UInt8_20_u8 const& __this LIFETIMEBOUND, Builtin::Nullable<__extension_UInt8_20_u8> rhs) noexcept -> const Builtin::i32;
	#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_gt_gt_gt(__extension_UInt8_20_u8 const& __this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename __extension_UInt8_20_u8;
	#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_gt_gt_gt_eq(__extension_UInt8_20_u8 & __this , Builtin::i32 amount)  -> typename __extension_UInt8_20_u8&;
	#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_lt_lt_bsl(__extension_UInt8_20_u8 const& __this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename __extension_UInt8_20_u8;
	#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_lt_lt_bsl_eq(__extension_UInt8_20_u8 & __this , Builtin::u32 amount) noexcept -> typename __extension_UInt8_20_u8&;
	#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_gt_gt_bsl(__extension_UInt8_20_u8 const& __this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename __extension_UInt8_20_u8;
	#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_gt_gt_bsl_eq(__extension_UInt8_20_u8 & __this , Builtin::u32 amount) noexcept -> typename __extension_UInt8_20_u8&;
	#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getHashCode(__extension_UInt8_20_u8 const& __this ) -> const Builtin::u64;
	} namespace System{
using __extensions::_operator_eq_eq_mul;
using __extensions::operator<=>;
using __extensions::_operator_gt_gt_gt;
using __extensions::_operator_gt_gt_gt_eq;
using __extensions::_operator_lt_lt_bsl;
using __extensions::_operator_lt_lt_bsl_eq;
using __extensions::_operator_gt_gt_bsl;
using __extensions::_operator_gt_gt_bsl_eq;
using __extensions::getHashCode;

		} namespace __extensions { using namespace System;
#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	using __extension_UInt8_73_u8 = Builtin::u8;
	#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ADV_CHECK_INTERFACE(IAbstractComparable, IAbstractComparable);
	#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ASTRUMSTD_API auto _operator_lt_eq_gt_mul(__extension_UInt8_73_u8 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32;
	#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(u8, IAbstractComparable, IAbstractComparable, u8);
	} namespace System{
using __extensions::_operator_lt_eq_gt_mul;

		} namespace __extensions { using namespace System;
#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	using __extension_UInt8_88_u8 = Builtin::u8;
	#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ADV_CHECK_INTERFACE(IConvertible, IConvertible);
	#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToBoolean(__extension_UInt8_88_u8 const& __this LIFETIMEBOUND) noexcept -> const bool;
	#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToInt8(__extension_UInt8_88_u8 const& __this LIFETIMEBOUND)  -> const Builtin::i8;
	#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToUInt8(__extension_UInt8_88_u8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u8;
	#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToInt16(__extension_UInt8_88_u8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i16;
	#line 98 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToUInt16(__extension_UInt8_88_u8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u16;
	#line 99 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToInt32(__extension_UInt8_88_u8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i32;
	#line 100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToUInt32(__extension_UInt8_88_u8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u32;
	#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToInt64(__extension_UInt8_88_u8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i64;
	#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToUInt64(__extension_UInt8_88_u8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u64;
	#line 103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToInt128(__extension_UInt8_88_u8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i128;
	#line 104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToUInt128(__extension_UInt8_88_u8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u128;
	#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToIsize(__extension_UInt8_88_u8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::isize;
	#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToUsize(__extension_UInt8_88_u8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::usize;
	#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToFloat32(__extension_UInt8_88_u8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::f32;
	#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToFloat64(__extension_UInt8_88_u8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::f64;
	#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToByte(__extension_UInt8_88_u8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::char8;
	#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToChar(__extension_UInt8_88_u8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::char16;
	#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(u8, IConvertible, IConvertible, u8);
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
#line 115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	using __extension_UInt8_115_u8 = Builtin::u8;
	#line 115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ADV_CHECK_INTERFACE(IDivisibleArithmetic, IDivisibleArithmetic);
	#line 117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_div_mod(__extension_UInt8_115_u8 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_UInt8_115_u8, __extension_UInt8_115_u8>;
	#line 123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_div_not(__extension_UInt8_115_u8 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt8_115_u8;
	#line 130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_div_not_eq(__extension_UInt8_115_u8 & __this , auto rhs)  -> typename __extension_UInt8_115_u8&;
	#line 132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_div_lt(__extension_UInt8_115_u8 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt8_115_u8;
	#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_div_lt_eq(__extension_UInt8_115_u8 & __this , auto rhs)  -> typename __extension_UInt8_115_u8&;
	#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_div_gt(__extension_UInt8_115_u8 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt8_115_u8;
	#line 153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_div_gt_eq(__extension_UInt8_115_u8 & __this , auto rhs)  -> typename __extension_UInt8_115_u8&;
	#line 115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(u8, IDivisibleArithmetic, IDivisibleArithmetic, u8);
	} namespace System{
using __extensions::_operator_div_mod;
using __extensions::_operator_div_not;
using __extensions::_operator_div_not_eq;
using __extensions::_operator_div_lt;
using __extensions::_operator_div_lt_eq;
using __extensions::_operator_div_gt;
using __extensions::_operator_div_gt_eq;

		} namespace __extensions { using namespace System;
#line 156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	using __extension_UInt8_156_u8 = Builtin::u8;
	#line 156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ADV_CHECK_INTERFACE(IIntegerDivisibleArithmetic, IIntegerDivisibleArithmetic);
	#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_bsl(__extension_UInt8_156_u8 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt8_156_u8;
	#line 160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_bsl_eq(__extension_UInt8_156_u8 & __this , T rhs)  -> typename __extension_UInt8_156_u8&;
	#line 165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl(__extension_UInt8_156_u8 const& __this LIFETIMEBOUND, T rhs)  -> const Builtin::Nullable<__extension_UInt8_156_u8>;
	#line 156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(u8, IIntegerDivisibleArithmetic, IIntegerDivisibleArithmetic, u8);
	} namespace System{
using __extensions::_operator_bsl;
using __extensions::_operator_bsl_eq;
using __extensions::_operator_bsl_bsl;

		} namespace __extensions { using namespace System;
#line 176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	using __extension_UInt8_176_u8 = Builtin::u8;
	#line 176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ADV_CHECK_INTERFACE(IIntegerPowerArithmetic, IIntegerPowerArithmetic);
	#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_xor_xor(__extension_UInt8_176_u8 const& __this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename __extension_UInt8_176_u8;
	#line 211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_xor_xor_eq(__extension_UInt8_176_u8 & __this , Builtin::u32 exp)  -> typename __extension_UInt8_176_u8&;
	#line 176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(u8, IIntegerPowerArithmetic, IIntegerPowerArithmetic, u8);
	} namespace System{
using __extensions::_operator_xor_xor;
using __extensions::_operator_xor_xor_eq;

		} namespace __extensions { using namespace System;
#line 214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	using __extension_UInt8_214_u8 = Builtin::u8;
	#line 214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ADV_CHECK_INTERFACE(INumberBase, INumberBase);
	#line 238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto MaxMagnitude(__extension_UInt8_214_u8 const& __this LIFETIMEBOUND, __extension_UInt8_214_u8 rhs) noexcept -> const typename __extension_UInt8_214_u8;
	#line 239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto MaxMagnitudeNumber(__extension_UInt8_214_u8 const& __this LIFETIMEBOUND, __extension_UInt8_214_u8 rhs) noexcept -> const typename __extension_UInt8_214_u8;
	#line 241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto MinMagnitude(__extension_UInt8_214_u8 const& __this LIFETIMEBOUND, __extension_UInt8_214_u8 rhs) noexcept -> const typename __extension_UInt8_214_u8;
	#line 242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto MinMagnitudeNumber(__extension_UInt8_214_u8 const& __this LIFETIMEBOUND, __extension_UInt8_214_u8 rhs) noexcept -> const typename __extension_UInt8_214_u8;
	#line 244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ASTRUMSTD_API auto Parse(__extension_UInt8_214_u8 const& __this LIFETIMEBOUND, Builtin::Str input)  -> const typename __extension_UInt8_214_u8;
	#line 249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ASTRUMSTD_API auto TryParse(__extension_UInt8_214_u8 const& __this LIFETIMEBOUND, Builtin::Str input) noexcept -> const Builtin::Nullable<__extension_UInt8_214_u8>;
	#line 255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto NarrowToInt8(__extension_UInt8_214_u8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i8;
	#line 256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto NarrowToUInt8(__extension_UInt8_214_u8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u8;
	#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto NarrowToInt16(__extension_UInt8_214_u8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i16;
	#line 258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto NarrowToUInt16(__extension_UInt8_214_u8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u16;
	#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto NarrowToInt32(__extension_UInt8_214_u8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i32;
	#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto NarrowToUInt32(__extension_UInt8_214_u8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u32;
	#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto NarrowToInt64(__extension_UInt8_214_u8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i64;
	#line 262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto NarrowToUInt64(__extension_UInt8_214_u8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u64;
	#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto NarrowToInt128(__extension_UInt8_214_u8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i128;
	#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto NarrowToUInt128(__extension_UInt8_214_u8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u128;
	#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto NarrowToIsize(__extension_UInt8_214_u8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::isize;
	#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto NarrowToUsize(__extension_UInt8_214_u8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::usize;
	#line 215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class __TT> struct __static_getOne; template<> struct __static_getOne<__extension_UInt8_214_u8> { static inline constexpr auto get() -> const __extension_UInt8_214_u8; };
	#line 216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class __TT> struct __static_getZero; template<> struct __static_getZero<__extension_UInt8_214_u8> { static inline constexpr auto get() -> const __extension_UInt8_214_u8; };
	#line 217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class __TT> struct __static_getRadix; template<> struct __static_getRadix<__extension_UInt8_214_u8> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getAbs(__extension_UInt8_214_u8 const& __this ) -> const __extension_UInt8_214_u8;
	#line 220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsCanonical(__extension_UInt8_214_u8 const& __this ) -> const bool;
	#line 221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsComplexNumber(__extension_UInt8_214_u8 const& __this ) -> const bool;
	#line 222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsEvenInteger(__extension_UInt8_214_u8 const& __this ) -> const bool;
	#line 223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsFinite(__extension_UInt8_214_u8 const& __this ) -> const bool;
	#line 224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsImaginaryNumber(__extension_UInt8_214_u8 const& __this ) -> const bool;
	#line 225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsInfinity(__extension_UInt8_214_u8 const& __this ) -> const bool;
	#line 226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsInteger(__extension_UInt8_214_u8 const& __this ) -> const bool;
	#line 227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsNaN(__extension_UInt8_214_u8 const& __this ) -> const bool;
	#line 228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsNegative(__extension_UInt8_214_u8 const& __this ) -> const bool;
	#line 229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsNegativeInfinity(__extension_UInt8_214_u8 const& __this ) -> const bool;
	#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsNormal(__extension_UInt8_214_u8 const& __this ) -> const bool;
	#line 231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsOddInteger(__extension_UInt8_214_u8 const& __this ) -> const bool;
	#line 232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsPositive(__extension_UInt8_214_u8 const& __this ) -> const bool;
	#line 233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsPositiveInfinity(__extension_UInt8_214_u8 const& __this ) -> const bool;
	#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsRealNumber(__extension_UInt8_214_u8 const& __this ) -> const bool;
	#line 235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsSubnormal(__extension_UInt8_214_u8 const& __this ) -> const bool;
	#line 236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsZero(__extension_UInt8_214_u8 const& __this ) -> const bool;
	#line 214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(u8, INumberBase, INumberBase, u8);
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
#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	using __extension_UInt8_269_u8 = Builtin::u8;
	#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ADV_CHECK_INTERFACE(IUnsignedNumber, IUnsignedNumber);
	#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(u8, IUnsignedNumber, IUnsignedNumber, u8);
	} namespace System{

		} namespace __extensions { using namespace System;
#line 273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	using __extension_UInt8_273_u8 = Builtin::u8;
	#line 273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ADV_CHECK_INTERFACE(INumber, INumber);
	#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto CopySign(__extension_UInt8_273_u8 const& __this LIFETIMEBOUND, __extension_UInt8_273_u8 sign) noexcept -> const typename __extension_UInt8_273_u8;
	#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto Max(__extension_UInt8_273_u8 const& __this LIFETIMEBOUND, __extension_UInt8_273_u8 rhs) noexcept -> const typename __extension_UInt8_273_u8;
	#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto MaxNumber(__extension_UInt8_273_u8 const& __this LIFETIMEBOUND, __extension_UInt8_273_u8 rhs) noexcept -> const typename __extension_UInt8_273_u8;
	#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto Min(__extension_UInt8_273_u8 const& __this LIFETIMEBOUND, __extension_UInt8_273_u8 rhs) noexcept -> const typename __extension_UInt8_273_u8;
	#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto MinNumber(__extension_UInt8_273_u8 const& __this LIFETIMEBOUND, __extension_UInt8_273_u8 rhs) noexcept -> const typename __extension_UInt8_273_u8;
	#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto Clamp(__extension_UInt8_273_u8 const& __this LIFETIMEBOUND, __extension_UInt8_273_u8 min, __extension_UInt8_273_u8 max)  -> const typename __extension_UInt8_273_u8;
	#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getSign(__extension_UInt8_273_u8 const& __this ) -> const Builtin::i32;
	#line 273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(u8, INumber, INumber, u8);
	} namespace System{
using __extensions::CopySign;
using __extensions::Max;
using __extensions::MaxNumber;
using __extensions::Min;
using __extensions::MinNumber;
using __extensions::Clamp;
using __extensions::getSign;

		} namespace __extensions { using namespace System;
#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	using __extension_UInt8_285_u8 = Builtin::u8;
	#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ADV_CHECK_INTERFACE(IBinaryNumber, IBinaryNumber);
	#line 337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto CheckedLog(__extension_UInt8_285_u8 const& __this LIFETIMEBOUND, __extension_UInt8_285_u8 base) noexcept -> const Builtin::Nullable<__extension_UInt8_285_u8>;
	#line 370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ASTRUMSTD_API auto Log(__extension_UInt8_285_u8 const& __this LIFETIMEBOUND, __extension_UInt8_285_u8 base)  -> const typename __extension_UInt8_285_u8;
	#line 380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto Midpoint(__extension_UInt8_285_u8 const& __this LIFETIMEBOUND, __extension_UInt8_285_u8 rhs) noexcept -> const typename __extension_UInt8_285_u8;
	#line 383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto IsMultipleOf(__extension_UInt8_285_u8 const& __this LIFETIMEBOUND, __extension_UInt8_285_u8 rhs) noexcept -> const bool;
	#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class __TT> struct __static_getAllBitsSet; template<> struct __static_getAllBitsSet<__extension_UInt8_285_u8> { static inline constexpr auto get() -> const __extension_UInt8_285_u8; };
	#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsPow2(__extension_UInt8_285_u8 const& __this ) -> const bool;
	#line 294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getCheckedLog2(__extension_UInt8_285_u8 const& __this ) -> const Builtin::Nullable<__extension_UInt8_285_u8>;
	#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getLog2(__extension_UInt8_285_u8 const& __this ) -> const __extension_UInt8_285_u8;
	#line 314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getCheckedLog10(__extension_UInt8_285_u8 const& __this ) -> const Builtin::Nullable<__extension_UInt8_285_u8>;
	#line 327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getLog10(__extension_UInt8_285_u8 const& __this ) -> const __extension_UInt8_285_u8;
	#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(u8, IBinaryNumber, IBinaryNumber, u8);
	} namespace System{
using __extensions::CheckedLog;
using __extensions::Log;
using __extensions::Midpoint;
using __extensions::IsMultipleOf;
using __extensions::__static_getAllBitsSet;
using __extensions::getIsPow2;
using __extensions::getCheckedLog2;
using __extensions::getLog2;
using __extensions::getCheckedLog10;
using __extensions::getLog10;

		} namespace __extensions { using namespace System;
#line 393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	using __extension_UInt8_393_u8 = Builtin::u8;
	#line 393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ADV_CHECK_INTERFACE(ICheckedArithmetic, ICheckedArithmetic);
	#line 396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_add_qst(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_UInt8_393_u8>;
	#line 405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_add_qst_eq(__extension_UInt8_393_u8 & __this , T rhs) noexcept -> typename __extension_UInt8_393_u8&;
	#line 416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_add_ne(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt8_393_u8;
	#line 423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_add_ne_eq(__extension_UInt8_393_u8 & __this , T rhs)  -> typename __extension_UInt8_393_u8&;
	#line 427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_add_mod(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_UInt8_393_u8;
	#line 434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_add_mod_eq(__extension_UInt8_393_u8 & __this , T rhs) noexcept -> typename __extension_UInt8_393_u8&;
	#line 438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_add_or(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_UInt8_393_u8;
	#line 445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_add_or_eq(__extension_UInt8_393_u8 & __this , T rhs) noexcept -> typename __extension_UInt8_393_u8&;
	#line 449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> auto _operator_add_mod_qst(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<__extension_UInt8_393_u8, bool>;
	#line 457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_qst(__extension_UInt8_393_u8 & __this )  -> typename __extension_UInt8_393_u8&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_qst_postfix(__extension_UInt8_393_u8 & __this)  -> decltype(auto);
	#line 460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_ne(__extension_UInt8_393_u8 & __this )  -> typename __extension_UInt8_393_u8&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_ne_postfix(__extension_UInt8_393_u8 & __this)  -> decltype(auto);
	#line 463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_mod(__extension_UInt8_393_u8 & __this )  -> typename __extension_UInt8_393_u8&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_mod_postfix(__extension_UInt8_393_u8 & __this)  -> decltype(auto);
	#line 466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_or(__extension_UInt8_393_u8 & __this )  -> typename __extension_UInt8_393_u8&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_or_postfix(__extension_UInt8_393_u8 & __this)  -> decltype(auto);
	#line 470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto CarryingAdd(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, __extension_UInt8_393_u8 rhs, bool carry) noexcept -> const std::tuple<__extension_UInt8_393_u8, bool>;
	#line 479 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto BorrowingSub(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, __extension_UInt8_393_u8 rhs, bool carry) noexcept -> const std::tuple<__extension_UInt8_393_u8, bool>;
	#line 488 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_sub_qst(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_UInt8_393_u8>;
	#line 497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_sub_qst_eq(__extension_UInt8_393_u8 & __this , T rhs) noexcept -> typename __extension_UInt8_393_u8&;
	#line 508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_sub_ne(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt8_393_u8;
	#line 515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_sub_ne_eq(__extension_UInt8_393_u8 & __this , T rhs)  -> typename __extension_UInt8_393_u8&;
	#line 519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_sub_mod(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_UInt8_393_u8;
	#line 526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_sub_mod_eq(__extension_UInt8_393_u8 & __this , T rhs) noexcept -> typename __extension_UInt8_393_u8&;
	#line 530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_sub_or(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_UInt8_393_u8;
	#line 537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_sub_or_eq(__extension_UInt8_393_u8 & __this , T rhs) noexcept -> typename __extension_UInt8_393_u8&;
	#line 541 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> auto _operator_sub_mod_qst(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<__extension_UInt8_393_u8, bool>;
	#line 549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_qst(__extension_UInt8_393_u8 & __this )  -> typename __extension_UInt8_393_u8&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_qst_postfix(__extension_UInt8_393_u8 & __this)  -> decltype(auto);
	#line 552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_ne(__extension_UInt8_393_u8 & __this )  -> typename __extension_UInt8_393_u8&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_ne_postfix(__extension_UInt8_393_u8 & __this)  -> decltype(auto);
	#line 555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_mod(__extension_UInt8_393_u8 & __this )  -> typename __extension_UInt8_393_u8&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_mod_postfix(__extension_UInt8_393_u8 & __this)  -> decltype(auto);
	#line 558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_or(__extension_UInt8_393_u8 & __this )  -> typename __extension_UInt8_393_u8&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_or_postfix(__extension_UInt8_393_u8 & __this)  -> decltype(auto);
	#line 562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mul_qst(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_UInt8_393_u8>;
	#line 571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mul_qst_eq(__extension_UInt8_393_u8 & __this , T rhs) noexcept -> typename __extension_UInt8_393_u8&;
	#line 582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mul_ne(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt8_393_u8;
	#line 589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mul_ne_eq(__extension_UInt8_393_u8 & __this , T rhs)  -> typename __extension_UInt8_393_u8&;
	#line 593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mul_mod(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_UInt8_393_u8;
	#line 600 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mul_mod_eq(__extension_UInt8_393_u8 & __this , T rhs) noexcept -> typename __extension_UInt8_393_u8&;
	#line 604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mul_or(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_UInt8_393_u8;
	#line 611 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mul_or_eq(__extension_UInt8_393_u8 & __this , T rhs) noexcept -> typename __extension_UInt8_393_u8&;
	#line 615 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> auto _operator_mul_mod_qst(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<__extension_UInt8_393_u8, bool>;
	#line 624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_mul_gt(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, __extension_UInt8_393_u8 rhs) noexcept -> const std::tuple<Builtin::u8, Builtin::u8>;
	#line 633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto CarryingMul(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, __extension_UInt8_393_u8 rhs, __extension_UInt8_393_u8 carry) noexcept -> const std::tuple<Builtin::u8, Builtin::u8>;
	#line 641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_bsl_qst(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_UInt8_393_u8>;
	#line 650 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_bsl_qst_eq(__extension_UInt8_393_u8 & __this , T rhs) noexcept -> typename __extension_UInt8_393_u8&;
	#line 661 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_bsl_ne(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt8_393_u8;
	#line 662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_bsl_ne_eq(__extension_UInt8_393_u8 & __this , T rhs)  -> typename __extension_UInt8_393_u8&;
	#line 666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_bsl_mod(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt8_393_u8;
	#line 667 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_eq(__extension_UInt8_393_u8 & __this , T rhs)  -> typename __extension_UInt8_393_u8&;
	#line 671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_bsl_or(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt8_393_u8;
	#line 672 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_bsl_or_eq(__extension_UInt8_393_u8 & __this , T rhs)  -> typename __extension_UInt8_393_u8&;
	#line 677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> auto _operator_bsl_mod_qst(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_UInt8_393_u8, bool>;
	#line 686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_UInt8_393_u8>;
	#line 696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst_eq(__extension_UInt8_393_u8 & __this , T rhs) noexcept -> typename __extension_UInt8_393_u8&;
	#line 707 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mod_qst(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_UInt8_393_u8>;
	#line 716 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mod_qst_eq(__extension_UInt8_393_u8 & __this , T rhs) noexcept -> typename __extension_UInt8_393_u8&;
	#line 727 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mod_ne(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt8_393_u8;
	#line 728 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mod_ne_eq(__extension_UInt8_393_u8 & __this , T rhs)  -> typename __extension_UInt8_393_u8&;
	#line 732 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mod_mod(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt8_393_u8;
	#line 733 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mod_mod_eq(__extension_UInt8_393_u8 & __this , T rhs)  -> typename __extension_UInt8_393_u8&;
	#line 738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> auto _operator_mod_mod_qst(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_UInt8_393_u8, bool>;
	#line 747 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_sub_qst(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::Nullable<__extension_UInt8_393_u8>;
	#line 750 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline auto _operator_sub_ne(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND)  -> const typename __extension_UInt8_393_u8;
	#line 755 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_sub_mod(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND)  -> const typename __extension_UInt8_393_u8;
	#line 763 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_sub_or(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND)  -> const typename __extension_UInt8_393_u8;
	#line 766 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_sub_mod_qst(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND)  -> const std::tuple<__extension_UInt8_393_u8, bool>;
	#line 774 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_lt_lt_qst(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<__extension_UInt8_393_u8>;
	#line 782 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_lt_lt_qst_eq(__extension_UInt8_393_u8 & __this , Builtin::i32 amount) noexcept -> typename __extension_UInt8_393_u8&;
	#line 790 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_lt_lt_ne(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename __extension_UInt8_393_u8;
	#line 798 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_lt_lt_ne_eq(__extension_UInt8_393_u8 & __this , Builtin::i32 amount)  -> typename __extension_UInt8_393_u8&;
	#line 800 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_lt_lt_mod(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename __extension_UInt8_393_u8;
	#line 803 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_lt_lt_mod_eq(__extension_UInt8_393_u8 & __this , Builtin::i32 amount) noexcept -> typename __extension_UInt8_393_u8&;
	#line 805 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_lt_lt_mod_qst(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<__extension_UInt8_393_u8, bool>;
	#line 808 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_gt_gt_qst(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<__extension_UInt8_393_u8>;
	#line 816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_gt_gt_qst_eq(__extension_UInt8_393_u8 & __this , Builtin::i32 amount) noexcept -> typename __extension_UInt8_393_u8&;
	#line 824 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_gt_gt_ne(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename __extension_UInt8_393_u8;
	#line 832 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_gt_gt_ne_eq(__extension_UInt8_393_u8 & __this , Builtin::i32 amount)  -> typename __extension_UInt8_393_u8&;
	#line 834 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_gt_gt_mod(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename __extension_UInt8_393_u8;
	#line 837 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_gt_gt_mod_eq(__extension_UInt8_393_u8 & __this , Builtin::i32 amount) noexcept -> typename __extension_UInt8_393_u8&;
	#line 839 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_gt_gt_mod_qst(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<__extension_UInt8_393_u8, bool>;
	#line 844 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_xor_xor_qst(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const Builtin::Nullable<__extension_UInt8_393_u8>;
	#line 873 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_xor_xor_qst_eq(__extension_UInt8_393_u8 & __this , Builtin::u32 exp) noexcept -> typename __extension_UInt8_393_u8&;
	#line 881 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_xor_xor_ne(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename __extension_UInt8_393_u8;
	#line 902 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_xor_xor_ne_eq(__extension_UInt8_393_u8 & __this , Builtin::u32 exp)  -> typename __extension_UInt8_393_u8&;
	#line 904 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_xor_xor_mod(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename __extension_UInt8_393_u8;
	#line 936 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_xor_xor_mod_eq(__extension_UInt8_393_u8 & __this , Builtin::u32 exp) noexcept -> typename __extension_UInt8_393_u8&;
	#line 938 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_xor_xor_or(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename __extension_UInt8_393_u8;
	#line 947 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_xor_xor_or_eq(__extension_UInt8_393_u8 & __this , Builtin::u32 exp) noexcept -> typename __extension_UInt8_393_u8&;
	#line 949 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_xor_xor_mod_qst(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const std::tuple<__extension_UInt8_393_u8, bool>;
	#line 979 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getCheckedAbs(__extension_UInt8_393_u8 const& __this ) -> const Builtin::Nullable<__extension_UInt8_393_u8>;
	#line 981 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getStrictAbs(__extension_UInt8_393_u8 const& __this ) -> const __extension_UInt8_393_u8;
	#line 983 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getWrappingAbs(__extension_UInt8_393_u8 const& __this ) -> const __extension_UInt8_393_u8;
	#line 985 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getSaturatingAbs(__extension_UInt8_393_u8 const& __this ) -> const __extension_UInt8_393_u8;
	#line 987 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getOverflowingAbs(__extension_UInt8_393_u8 const& __this ) -> const std::tuple<__extension_UInt8_393_u8, bool>;
	#line 393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(u8, ICheckedArithmetic, ICheckedArithmetic, u8);
	} namespace System{
using __extensions::_operator_add_qst;
using __extensions::_operator_add_qst_eq;
using __extensions::_operator_add_ne;
using __extensions::_operator_add_ne_eq;
using __extensions::_operator_add_mod;
using __extensions::_operator_add_mod_eq;
using __extensions::_operator_add_or;
using __extensions::_operator_add_or_eq;
using __extensions::_operator_add_mod_qst;
using __extensions::_operator_add_add_qst;
using __extensions::_operator_add_add_ne;
using __extensions::_operator_add_add_mod;
using __extensions::_operator_add_add_or;
using __extensions::CarryingAdd;
using __extensions::BorrowingSub;
using __extensions::_operator_sub_qst;
using __extensions::_operator_sub_qst_eq;
using __extensions::_operator_sub_ne;
using __extensions::_operator_sub_ne_eq;
using __extensions::_operator_sub_mod;
using __extensions::_operator_sub_mod_eq;
using __extensions::_operator_sub_or;
using __extensions::_operator_sub_or_eq;
using __extensions::_operator_sub_mod_qst;
using __extensions::_operator_sub_sub_qst;
using __extensions::_operator_sub_sub_ne;
using __extensions::_operator_sub_sub_mod;
using __extensions::_operator_sub_sub_or;
using __extensions::_operator_mul_qst;
using __extensions::_operator_mul_qst_eq;
using __extensions::_operator_mul_ne;
using __extensions::_operator_mul_ne_eq;
using __extensions::_operator_mul_mod;
using __extensions::_operator_mul_mod_eq;
using __extensions::_operator_mul_or;
using __extensions::_operator_mul_or_eq;
using __extensions::_operator_mul_mod_qst;
using __extensions::_operator_mul_gt;
using __extensions::CarryingMul;
using __extensions::_operator_bsl_qst;
using __extensions::_operator_bsl_qst_eq;
using __extensions::_operator_bsl_ne;
using __extensions::_operator_bsl_ne_eq;
using __extensions::_operator_bsl_mod;
using __extensions::_operator_bsl_mod_eq;
using __extensions::_operator_bsl_or;
using __extensions::_operator_bsl_or_eq;
using __extensions::_operator_bsl_mod_qst;
using __extensions::_operator_bsl_bsl_qst;
using __extensions::_operator_bsl_bsl_qst_eq;
using __extensions::_operator_mod_qst;
using __extensions::_operator_mod_qst_eq;
using __extensions::_operator_mod_ne;
using __extensions::_operator_mod_ne_eq;
using __extensions::_operator_mod_mod;
using __extensions::_operator_mod_mod_eq;
using __extensions::_operator_mod_mod_qst;
using __extensions::_operator_sub_qst;
using __extensions::_operator_sub_ne;
using __extensions::_operator_sub_mod;
using __extensions::_operator_sub_or;
using __extensions::_operator_sub_mod_qst;
using __extensions::_operator_lt_lt_qst;
using __extensions::_operator_lt_lt_qst_eq;
using __extensions::_operator_lt_lt_ne;
using __extensions::_operator_lt_lt_ne_eq;
using __extensions::_operator_lt_lt_mod;
using __extensions::_operator_lt_lt_mod_eq;
using __extensions::_operator_lt_lt_mod_qst;
using __extensions::_operator_gt_gt_qst;
using __extensions::_operator_gt_gt_qst_eq;
using __extensions::_operator_gt_gt_ne;
using __extensions::_operator_gt_gt_ne_eq;
using __extensions::_operator_gt_gt_mod;
using __extensions::_operator_gt_gt_mod_eq;
using __extensions::_operator_gt_gt_mod_qst;
using __extensions::_operator_xor_xor_qst;
using __extensions::_operator_xor_xor_qst_eq;
using __extensions::_operator_xor_xor_ne;
using __extensions::_operator_xor_xor_ne_eq;
using __extensions::_operator_xor_xor_mod;
using __extensions::_operator_xor_xor_mod_eq;
using __extensions::_operator_xor_xor_or;
using __extensions::_operator_xor_xor_or_eq;
using __extensions::_operator_xor_xor_mod_qst;
using __extensions::getCheckedAbs;
using __extensions::getStrictAbs;
using __extensions::getWrappingAbs;
using __extensions::getSaturatingAbs;
using __extensions::getOverflowingAbs;

		} namespace __extensions { using namespace System;
#line 990 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	using __extension_UInt8_990_u8 = Builtin::u8;
	#line 990 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ADV_CHECK_INTERFACE(IBinaryInteger, IBinaryInteger);
	#line 1029 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto NextMultipleOf(__extension_UInt8_990_u8 const& __this LIFETIMEBOUND, __extension_UInt8_990_u8 rhs)  -> const typename __extension_UInt8_990_u8;
	#line 1037 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto CheckedNextMultipleOf(__extension_UInt8_990_u8 const& __this LIFETIMEBOUND, __extension_UInt8_990_u8 rhs) noexcept -> const Builtin::Nullable<__extension_UInt8_990_u8>;
	#line 991 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class __TT> struct __static_getIsSigned; template<> struct __static_getIsSigned<__extension_UInt8_990_u8> { static inline constexpr auto get() -> const bool; };
	#line 993 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getTrailingZeroCount(__extension_UInt8_990_u8 const& __this ) -> const Builtin::u32;
	#line 994 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getTrailingOneCount(__extension_UInt8_990_u8 const& __this ) -> const Builtin::u32;
	#line 995 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getByteCount(__extension_UInt8_990_u8 const& __this ) -> const Builtin::u32;
	#line 996 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getMinimalBitWidth(__extension_UInt8_990_u8 const& __this ) -> const Builtin::u32;
	#line 999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ASTRUMSTD_API auto getCheckedIsqrt(__extension_UInt8_990_u8 const& __this ) -> const Builtin::Nullable<__extension_UInt8_990_u8>;
	#line 1006 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline auto getIsqrt(__extension_UInt8_990_u8 const& __this ) -> const __extension_UInt8_990_u8;
	#line 1015 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getLog2Ceiling(__extension_UInt8_990_u8 const& __this ) -> const __extension_UInt8_990_u8;
	#line 1049 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getPrevPow2(__extension_UInt8_990_u8 const& __this ) -> const __extension_UInt8_990_u8;
	#line 1060 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getNextPow2(__extension_UInt8_990_u8 const& __this ) -> const __extension_UInt8_990_u8;
	#line 1072 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getCheckedNextPow2(__extension_UInt8_990_u8 const& __this ) -> const Builtin::Nullable<__extension_UInt8_990_u8>;
	#line 1084 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getWrappingNextPow2(__extension_UInt8_990_u8 const& __this ) -> const __extension_UInt8_990_u8;
	#line 990 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(u8, IBinaryInteger, IBinaryInteger, u8);
	} namespace System{
using __extensions::NextMultipleOf;
using __extensions::CheckedNextMultipleOf;
using __extensions::__static_getIsSigned;
using __extensions::getTrailingZeroCount;
using __extensions::getTrailingOneCount;
using __extensions::getByteCount;
using __extensions::getMinimalBitWidth;
using __extensions::getCheckedIsqrt;
using __extensions::getIsqrt;
using __extensions::getLog2Ceiling;
using __extensions::getPrevPow2;
using __extensions::getNextPow2;
using __extensions::getCheckedNextPow2;
using __extensions::getWrappingNextPow2;

		} namespace __extensions { using namespace System;
#line 1095 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	using __extension_UInt8_1095_u8 = Builtin::u8;
	#line 1095 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ADV_CHECK_INTERFACE(IFixedWidthInteger, IFixedWidthInteger);
	#line 1109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto RotateLeft(__extension_UInt8_1095_u8 const& __this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename __extension_UInt8_1095_u8;
	#line 1110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto RotateRight(__extension_UInt8_1095_u8 const& __this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename __extension_UInt8_1095_u8;
	#line 1096 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class __TT> struct __static_getBitWidth; template<> struct __static_getBitWidth<__extension_UInt8_1095_u8> { static inline constexpr auto get() -> const Builtin::u32; };
	#line 1098 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getLeadingZeroCount(__extension_UInt8_1095_u8 const& __this ) -> const Builtin::u32;
	#line 1099 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getLeadingOneCount(__extension_UInt8_1095_u8 const& __this ) -> const Builtin::u32;
	#line 1100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getPopCount(__extension_UInt8_1095_u8 const& __this ) -> const Builtin::u32;
	#line 1101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getZeroCount(__extension_UInt8_1095_u8 const& __this ) -> const Builtin::u32;
	#line 1102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getByteSwapped(__extension_UInt8_1095_u8 const& __this ) -> const __extension_UInt8_1095_u8;
	#line 1103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getBigEndian(__extension_UInt8_1095_u8 const& __this ) -> const __extension_UInt8_1095_u8;
	#line 1104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getLittleEndian(__extension_UInt8_1095_u8 const& __this ) -> const __extension_UInt8_1095_u8;
	#line 1105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getReverseBits(__extension_UInt8_1095_u8 const& __this ) -> const __extension_UInt8_1095_u8;
	#line 1107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getShortestBitLength(__extension_UInt8_1095_u8 const& __this ) -> const Builtin::u32;
	#line 1095 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(u8, IFixedWidthInteger, IFixedWidthInteger, u8);
	} namespace System{
using __extensions::RotateLeft;
using __extensions::RotateRight;
using __extensions::__static_getBitWidth;
using __extensions::getLeadingZeroCount;
using __extensions::getLeadingOneCount;
using __extensions::getPopCount;
using __extensions::getZeroCount;
using __extensions::getByteSwapped;
using __extensions::getBigEndian;
using __extensions::getLittleEndian;
using __extensions::getReverseBits;
using __extensions::getShortestBitLength;

		} namespace __extensions { using namespace System;
#line 1114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	using __extension_UInt8_1114_u8 = Builtin::u8;
	#line 1114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ADV_CHECK_INTERFACE(IBinaryIntegerFormatInfo, IBinaryIntegerFormatInfo);
	#line 1122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto IsGreaterThanAsUnsigned(__extension_UInt8_1114_u8 const& __this LIFETIMEBOUND, __extension_UInt8_1114_u8 rhs) noexcept -> const bool;
	#line 1115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class __TT> struct __static_getMaxDigitCount; template<> struct __static_getMaxDigitCount<__extension_UInt8_1114_u8> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class __TT> struct __static_getMaxHexDigitCount; template<> struct __static_getMaxHexDigitCount<__extension_UInt8_1114_u8> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class __TT> struct __static_getMaxValueDiv10; template<> struct __static_getMaxValueDiv10<__extension_UInt8_1114_u8> { static inline constexpr auto get() -> const __extension_UInt8_1114_u8; };
	#line 1119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getMultiplyBy10(__extension_UInt8_1114_u8 const& __this ) -> const __extension_UInt8_1114_u8;
	#line 1120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getMultiplyBy16(__extension_UInt8_1114_u8 const& __this ) -> const __extension_UInt8_1114_u8;
	#line 1114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(u8, IBinaryIntegerFormatInfo, IBinaryIntegerFormatInfo, u8);
	} namespace System{
using __extensions::IsGreaterThanAsUnsigned;
using __extensions::__static_getMaxDigitCount;
using __extensions::__static_getMaxHexDigitCount;
using __extensions::__static_getMaxValueDiv10;
using __extensions::getMultiplyBy10;
using __extensions::getMultiplyBy16;

	//###############################################################################
//# Function definitions
//###############################################################################

} namespace __extensions { using namespace System;
#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto __static_getMinValue<__extension_UInt8_15_u8>::get() -> const __extension_UInt8_1114_u8
	{
		#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(Builtin::u8(0U)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto __static_getMaxValue<__extension_UInt8_15_u8>::get() -> const __extension_UInt8_1114_u8
	{
		#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(Builtin::u8(255U)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	
} namespace __extensions { using namespace System;
#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto operator<=>(__extension_UInt8_20_u8 const& __this LIFETIMEBOUND, Builtin::Nullable<__extension_UInt8_1114_u8> rhs) noexcept -> const Builtin::i32
	{
		#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		{
			#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			if ((!Builtin::Is(rhs, nullptr))) {
				#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				auto __tmp0 = *rhs; const auto& rhs = __tmp0;
				
				#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				return __this <=> rhs;
			}
		}
		#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return Builtin::i32(1);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_gt_gt_gt(__extension_UInt8_20_u8 const& __this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename __extension_UInt8_20_u8
	{
		#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this >> amount); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_gt_gt_gt_eq(__extension_UInt8_20_u8 & __this , Builtin::i32 amount)  -> typename __extension_UInt8_20_u8&
	{
		#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this >>= amount); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_lt_lt_bsl(__extension_UInt8_20_u8 const& __this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename __extension_UInt8_20_u8
	{
		#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if ((amount <=> ADV_USPCS(BitWidth, __extension_UInt8_1114_u8)()) >= 0) {
			#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return Builtin::u8(0U);
		}
		#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return Builtin::UncheckedShiftLeft(__this, Builtin::Cast<true, Builtin::i32>(amount));
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_lt_lt_bsl_eq(__extension_UInt8_20_u8 & __this , Builtin::u32 amount) noexcept -> typename __extension_UInt8_20_u8&
	{
		#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_lt_lt_bsl)(__this, amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_gt_gt_bsl(__extension_UInt8_20_u8 const& __this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename __extension_UInt8_20_u8
	{
		#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if ((amount <=> ADV_USPCS(BitWidth, __extension_UInt8_1114_u8)()) >= 0) {
			#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return Builtin::u8(0U);
		}
		#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return Builtin::UncheckedShiftRight(__this, Builtin::Cast<true, Builtin::i32>(amount));
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_gt_gt_bsl_eq(__extension_UInt8_20_u8 & __this , Builtin::u32 amount) noexcept -> typename __extension_UInt8_20_u8&
	{
		#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_gt_gt_bsl)(__this, amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getHashCode(__extension_UInt8_20_u8 const& __this ) -> const Builtin::u64
	{
		#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	
} namespace __extensions { using namespace System;
#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToBoolean(__extension_UInt8_88_u8 const& __this LIFETIMEBOUND) noexcept -> const bool
	{
		#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this != Builtin::i32(0)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToInt8(__extension_UInt8_88_u8 const& __this LIFETIMEBOUND)  -> const Builtin::i8
	{
		#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if ((__this <=> Builtin::i8((signed char)0x7F)) > 0) {
			#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return Builtin::Cast<true, Builtin::i8>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToUInt8(__extension_UInt8_88_u8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u8
	{
		#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToInt16(__extension_UInt8_88_u8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i16
	{
		#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 98 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToUInt16(__extension_UInt8_88_u8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u16
	{
		#line 98 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 99 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToInt32(__extension_UInt8_88_u8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i32
	{
		#line 99 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToUInt32(__extension_UInt8_88_u8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u32
	{
		#line 100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToInt64(__extension_UInt8_88_u8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i64
	{
		#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToUInt64(__extension_UInt8_88_u8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u64
	{
		#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToInt128(__extension_UInt8_88_u8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i128
	{
		#line 103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToUInt128(__extension_UInt8_88_u8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u128
	{
		#line 104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToIsize(__extension_UInt8_88_u8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::isize
	{
		#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToUsize(__extension_UInt8_88_u8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::usize
	{
		#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToFloat32(__extension_UInt8_88_u8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::f32
	{
		#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToFloat64(__extension_UInt8_88_u8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::f64
	{
		#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToByte(__extension_UInt8_88_u8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::char8
	{
		#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto ToChar(__extension_UInt8_88_u8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::char16
	{
		#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	
} namespace __extensions { using namespace System;
#line 117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_div_mod(__extension_UInt8_115_u8 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_UInt8_1114_u8, __extension_UInt8_1114_u8>
	{
		#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator /% implemented only for integer types");
		#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return std::make_tuple(ADV_UFCS(_operator_bsl)(__this, rhs), __this % rhs);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_div_not(__extension_UInt8_115_u8 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt8_115_u8
	{
		#line 125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		auto result = __this; 
		#line 126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		result /= rhs;
		#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_div_not_eq(__extension_UInt8_115_u8 & __this , auto rhs)  -> typename __extension_UInt8_115_u8&
	{
		#line 130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this /= rhs); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_div_lt(__extension_UInt8_115_u8 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt8_115_u8
	{
		#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if constexpr (Builtin::TypeIs<T, IBinaryInteger>()) {
			#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return ADV_UFCS(_operator_bsl)(__this, rhs);
		} else {
			#line 136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			{
				#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				return Builtin::Cast<true, __extension_UInt8_1114_u8>((ADV_UFCS(_operator_div_lt)(Builtin::f64{__this}, rhs)));
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_div_lt_eq(__extension_UInt8_115_u8 & __this , auto rhs)  -> typename __extension_UInt8_115_u8&
	{
		#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this = __extension_UInt8_1114_u8{ADV_UFCS(_operator_div_lt)(__this, rhs)}); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_div_gt(__extension_UInt8_115_u8 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt8_115_u8
	{
		#line 145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if constexpr (Builtin::TypeIs<T, IBinaryInteger>()) {
			#line 146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			const auto& [div, rem] = ADV_UFCS(_operator_div_mod)(__this, rhs);
			#line 147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return (rem <=> Builtin::i32(0)) > 0 ? div + Builtin::i32(1) : div;
		} else {
			#line 148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			{
				#line 149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				return Builtin::Cast<true, __extension_UInt8_1114_u8>((ADV_UFCS(_operator_div_gt)(Builtin::f64{__this}, rhs)));
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_div_gt_eq(__extension_UInt8_115_u8 & __this , auto rhs)  -> typename __extension_UInt8_115_u8&
	{
		#line 153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this = __extension_UInt8_1114_u8{ADV_UFCS(_operator_div_gt)(__this, rhs)}); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	
} namespace __extensions { using namespace System;
#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_bsl(__extension_UInt8_156_u8 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt8_156_u8
	{
		#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Div)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_bsl_eq(__extension_UInt8_156_u8 & __this , T rhs)  -> typename __extension_UInt8_156_u8&
	{
		#line 160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(DivAssign)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl(__extension_UInt8_156_u8 const& __this LIFETIMEBOUND, T rhs)  -> const Builtin::Nullable<__extension_UInt8_1114_u8>
	{
		#line 167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\? implemented only for integer types");
		#line 168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		__extension_UInt8_1114_u8 result{}; 
		#line 169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (Builtin::DivExact(__this, rhs, result)) {
			#line 170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return result;
		}
		#line 172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return nullptr;
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	
} namespace __extensions { using namespace System;
#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_xor_xor(__extension_UInt8_176_u8 const& __this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename __extension_UInt8_176_u8
	{
		#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return Builtin::u8(1U);
		}
		#line 186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		auto base = __this; 
		#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		auto result = Builtin::u8(1U); 
		#line 189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (std::is_constant_evaluated()) {
			#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			while ((exp <=> Builtin::i32(1)) > 0) 
			{
				#line 191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
					#line 192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
					result *= base;
				}
				#line 194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
				#line 195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				base *= base;
			}
			#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return result * base;
		} else {
			#line 198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			{
				#line 199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				for (;;) 
				{
					#line 200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
					if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
						#line 201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
						result *= base;
						#line 202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
						if (exp == Builtin::i32(1)) {
							#line 203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
							return result;
						}
					}
					#line 205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
					ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
					#line 206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
					base *= base;
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_xor_xor_eq(__extension_UInt8_176_u8 & __this , Builtin::u32 exp)  -> typename __extension_UInt8_176_u8&
	{
		#line 211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_xor_xor)(__this, exp)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	
} namespace __extensions { using namespace System;
#line 238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto MaxMagnitude(__extension_UInt8_214_u8 const& __this LIFETIMEBOUND, __extension_UInt8_1114_u8 rhs) noexcept -> const typename __extension_UInt8_214_u8
	{
		#line 238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Max)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto MaxMagnitudeNumber(__extension_UInt8_214_u8 const& __this LIFETIMEBOUND, __extension_UInt8_1114_u8 rhs) noexcept -> const typename __extension_UInt8_214_u8
	{
		#line 239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Max)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto MinMagnitude(__extension_UInt8_214_u8 const& __this LIFETIMEBOUND, __extension_UInt8_1114_u8 rhs) noexcept -> const typename __extension_UInt8_214_u8
	{
		#line 241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Min)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto MinMagnitudeNumber(__extension_UInt8_214_u8 const& __this LIFETIMEBOUND, __extension_UInt8_1114_u8 rhs) noexcept -> const typename __extension_UInt8_214_u8
	{
		#line 242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Min)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto NarrowToInt8(__extension_UInt8_214_u8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i8
	{
		#line 255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i8>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto NarrowToUInt8(__extension_UInt8_214_u8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u8
	{
		#line 256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto NarrowToInt16(__extension_UInt8_214_u8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i16
	{
		#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto NarrowToUInt16(__extension_UInt8_214_u8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u16
	{
		#line 258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto NarrowToInt32(__extension_UInt8_214_u8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i32
	{
		#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto NarrowToUInt32(__extension_UInt8_214_u8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u32
	{
		#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto NarrowToInt64(__extension_UInt8_214_u8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i64
	{
		#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto NarrowToUInt64(__extension_UInt8_214_u8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u64
	{
		#line 262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto NarrowToInt128(__extension_UInt8_214_u8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i128
	{
		#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto NarrowToUInt128(__extension_UInt8_214_u8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u128
	{
		#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto NarrowToIsize(__extension_UInt8_214_u8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::isize
	{
		#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto NarrowToUsize(__extension_UInt8_214_u8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::usize
	{
		#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto __static_getOne<__extension_UInt8_214_u8>::get() -> const __extension_UInt8_1114_u8
	{
		#line 215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(Builtin::u8(1U)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto __static_getZero<__extension_UInt8_214_u8>::get() -> const __extension_UInt8_1114_u8
	{
		#line 216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(Builtin::u8(0U)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto __static_getRadix<__extension_UInt8_214_u8>::get() -> const Builtin::i32
	{
		#line 217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(2)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getAbs(__extension_UInt8_214_u8 const& __this ) -> const __extension_UInt8_1114_u8
	{
		#line 219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsCanonical(__extension_UInt8_214_u8 const& __this ) -> const bool
	{
		#line 220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(true); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsComplexNumber(__extension_UInt8_214_u8 const& __this ) -> const bool
	{
		#line 221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(false); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsEvenInteger(__extension_UInt8_214_u8 const& __this ) -> const bool
	{
		#line 222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY((__this & Builtin::u8(1U)) == Builtin::i32(0)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsFinite(__extension_UInt8_214_u8 const& __this ) -> const bool
	{
		#line 223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(true); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsImaginaryNumber(__extension_UInt8_214_u8 const& __this ) -> const bool
	{
		#line 224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(false); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsInfinity(__extension_UInt8_214_u8 const& __this ) -> const bool
	{
		#line 225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(false); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsInteger(__extension_UInt8_214_u8 const& __this ) -> const bool
	{
		#line 226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(true); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsNaN(__extension_UInt8_214_u8 const& __this ) -> const bool
	{
		#line 227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(false); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsNegative(__extension_UInt8_214_u8 const& __this ) -> const bool
	{
		#line 228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(false); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsNegativeInfinity(__extension_UInt8_214_u8 const& __this ) -> const bool
	{
		#line 229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(false); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsNormal(__extension_UInt8_214_u8 const& __this ) -> const bool
	{
		#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this != Builtin::i32(0)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsOddInteger(__extension_UInt8_214_u8 const& __this ) -> const bool
	{
		#line 231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY((__this & Builtin::u8(1U)) != Builtin::i32(0)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsPositive(__extension_UInt8_214_u8 const& __this ) -> const bool
	{
		#line 232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(true); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsPositiveInfinity(__extension_UInt8_214_u8 const& __this ) -> const bool
	{
		#line 233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(false); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsRealNumber(__extension_UInt8_214_u8 const& __this ) -> const bool
	{
		#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(true); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsSubnormal(__extension_UInt8_214_u8 const& __this ) -> const bool
	{
		#line 235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(false); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsZero(__extension_UInt8_214_u8 const& __this ) -> const bool
	{
		#line 236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this == Builtin::i32(0)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	
} namespace __extensions { using namespace System;
#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto CopySign(__extension_UInt8_273_u8 const& __this LIFETIMEBOUND, __extension_UInt8_1114_u8 sign) noexcept -> const typename __extension_UInt8_273_u8
	{
		#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto Max(__extension_UInt8_273_u8 const& __this LIFETIMEBOUND, __extension_UInt8_1114_u8 rhs) noexcept -> const typename __extension_UInt8_273_u8
	{
		#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultMax)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto MaxNumber(__extension_UInt8_273_u8 const& __this LIFETIMEBOUND, __extension_UInt8_1114_u8 rhs) noexcept -> const typename __extension_UInt8_273_u8
	{
		#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Max)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto Min(__extension_UInt8_273_u8 const& __this LIFETIMEBOUND, __extension_UInt8_1114_u8 rhs) noexcept -> const typename __extension_UInt8_273_u8
	{
		#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultMin)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto MinNumber(__extension_UInt8_273_u8 const& __this LIFETIMEBOUND, __extension_UInt8_1114_u8 rhs) noexcept -> const typename __extension_UInt8_273_u8
	{
		#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Min)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto Clamp(__extension_UInt8_273_u8 const& __this LIFETIMEBOUND, __extension_UInt8_1114_u8 min, __extension_UInt8_1114_u8 max)  -> const typename __extension_UInt8_273_u8
	{
		#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultClamp)(__this, min, max)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getSign(__extension_UInt8_273_u8 const& __this ) -> const Builtin::i32
	{
		#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this == Builtin::i32(0) ? Builtin::i32(0) : +Builtin::i32(1)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	
} namespace __extensions { using namespace System;
#line 337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto CheckedLog(__extension_UInt8_285_u8 const& __this LIFETIMEBOUND, __extension_UInt8_1114_u8 base) noexcept -> const Builtin::Nullable<__extension_UInt8_1114_u8>
	{
		#line 339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (__this == Builtin::i32(0) || (base <=> Builtin::i32(1)) <= 0) {
			#line 340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return nullptr;
		}
		#line 343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (std::is_constant_evaluated()) {
			#line 344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			if (base == Builtin::i32(2)) {
				#line 345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				return ADV_UPCS(CheckedLog2)(__this.__ref());
			}
			#line 347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			if (base == Builtin::i32(10)) {
				#line 348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				return ADV_UPCS(CheckedLog10)(__this.__ref());
			}
		}
		#line 352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if ((__this <=> base) < 0) {
			#line 353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return Builtin::u8(0U);
		}
		#line 356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		__extension_UInt8_1114_u8 n = Builtin::u8(1U); 
		#line 357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		auto r = base; 
		#line 358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		const auto baseRatio = ADV_UFCS(_operator_bsl)(__this, base); 
		#line 359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		while ((r <=> baseRatio) <= 0) 
		{
			#line 360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			++n;
			#line 361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			r *= base;
		}
		#line 364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return n;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto Midpoint(__extension_UInt8_285_u8 const& __this LIFETIMEBOUND, __extension_UInt8_1114_u8 rhs) noexcept -> const typename __extension_UInt8_285_u8
	{
		#line 380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(((__this ^ rhs) >> Builtin::i32(1)) + (__this & rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto IsMultipleOf(__extension_UInt8_285_u8 const& __this LIFETIMEBOUND, __extension_UInt8_1114_u8 rhs) noexcept -> const bool
	{
		#line 385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (rhs == Builtin::i32(0)) {
			#line 386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return __this == Builtin::i32(0);
		}
		#line 389 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return __this % rhs == Builtin::i32(0);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto __static_getAllBitsSet<__extension_UInt8_285_u8>::get() -> const __extension_UInt8_1114_u8
	{
		#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(MaxValue, Builtin::u8)()); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getIsPow2(__extension_UInt8_285_u8 const& __this ) -> const bool
	{
		#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(PopCount)(__this.__ref()) == Builtin::i32(1)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getCheckedLog2(__extension_UInt8_285_u8 const& __this ) -> const Builtin::Nullable<__extension_UInt8_1114_u8>
	{
		#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (__this == Builtin::i32(0)) {
			#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return nullptr;
		}
		#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return Builtin::Cast<true, __extension_UInt8_1114_u8>((ADV_USPCS(BitWidth, __extension_UInt8_1114_u8)() - Builtin::i32(1) - ADV_UPCS(LeadingZeroCount)(__this.__ref())));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getLog2(__extension_UInt8_285_u8 const& __this ) -> const __extension_UInt8_1114_u8
	{
		#line 306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (const auto result = ADV_UPCS(CheckedLog2)(__this.__ref())) {
			{
				#line 306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				return result;
			}
		}
		#line 309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getCheckedLog10(__extension_UInt8_285_u8 const& __this ) -> const Builtin::Nullable<__extension_UInt8_1114_u8>
	{
		#line 316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (__this == Builtin::i32(0)) {
			#line 317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return nullptr;
		}
		#line 320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		const auto val = Builtin::Cast<true, Builtin::u32>(__this); 
		#line 321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		constexpr Builtin::u32 C1 = Builtin::u32(0b1100000000U) - Builtin::u32(10U);
		#line 322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		constexpr Builtin::u32 C2 = Builtin::u32(0b1000000000U) - Builtin::u32(100U);
		#line 323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return Builtin::Cast<true, __extension_UInt8_1114_u8>((((val + C1) & (val + C2)) >> Builtin::i32(8)));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getLog10(__extension_UInt8_285_u8 const& __this ) -> const __extension_UInt8_1114_u8
	{
		#line 329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (const auto result = ADV_UPCS(CheckedLog10)(__this.__ref())) {
			{
				#line 329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				return result;
			}
		}
		#line 332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	
} namespace __extensions { using namespace System;
#line 396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_add_qst(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_UInt8_1114_u8>
	{
		#line 398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +? implemented only for integer types");
		#line 399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		__extension_UInt8_1114_u8 result{}; 
		#line 400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (Builtin::SafeAdd(__this, rhs, result)) {
			#line 401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return result;
		}
		#line 403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_add_qst_eq(__extension_UInt8_393_u8 & __this , T rhs) noexcept -> typename __extension_UInt8_393_u8&
	{
		#line 407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +?= implemented only for integer types");
		#line 408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (const auto result = ADV_UFCS(_operator_add_qst)(__this, rhs)) {
			{
				#line 408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				__this = result;
			}
		}
		#line 411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_add_ne(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt8_393_u8
	{
		#line 418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +! implemented only for integer types");
		#line 419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		__extension_UInt8_1114_u8 result{}; 
		#line 420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::StrictAdd(__this, rhs, result);
		#line 421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_add_ne_eq(__extension_UInt8_393_u8 & __this , T rhs)  -> typename __extension_UInt8_393_u8&
	{
		#line 423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_add_ne)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_add_mod(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_UInt8_393_u8
	{
		#line 429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +% implemented only for integer types");
		#line 430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		__extension_UInt8_1114_u8 result{}; 
		#line 431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::WrappingAdd(__this, rhs, result);
		#line 432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_add_mod_eq(__extension_UInt8_393_u8 & __this , T rhs) noexcept -> typename __extension_UInt8_393_u8&
	{
		#line 434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_add_mod)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_add_or(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_UInt8_393_u8
	{
		#line 440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +| implemented only for integer types");
		#line 441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		__extension_UInt8_1114_u8 result{}; 
		#line 442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::SaturatingAdd(__this, rhs, result);
		#line 443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_add_or_eq(__extension_UInt8_393_u8 & __this , T rhs) noexcept -> typename __extension_UInt8_393_u8&
	{
		#line 445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_add_or)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_add_add_qst(__extension_UInt8_393_u8 & __this )  -> typename __extension_UInt8_393_u8&
	{
		#line 457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_qst_eq)(__this, Builtin::u8(1U))); 
	}
	inline constexpr auto _operator_add_add_qst_postfix(__extension_UInt8_393_u8 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_add_add_qst)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_add_add_ne(__extension_UInt8_393_u8 & __this )  -> typename __extension_UInt8_393_u8&
	{
		#line 460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_ne_eq)(__this, Builtin::u8(1U))); 
	}
	inline constexpr auto _operator_add_add_ne_postfix(__extension_UInt8_393_u8 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_add_add_ne)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_add_add_mod(__extension_UInt8_393_u8 & __this )  -> typename __extension_UInt8_393_u8&
	{
		#line 463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_mod_eq)(__this, Builtin::u8(1U))); 
	}
	inline constexpr auto _operator_add_add_mod_postfix(__extension_UInt8_393_u8 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_add_add_mod)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_add_add_or(__extension_UInt8_393_u8 & __this )  -> typename __extension_UInt8_393_u8&
	{
		#line 466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_or_eq)(__this, Builtin::u8(1U))); 
	}
	inline constexpr auto _operator_add_add_or_postfix(__extension_UInt8_393_u8 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_add_add_or)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto CarryingAdd(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, __extension_UInt8_1114_u8 rhs, bool carry) noexcept -> const std::tuple<__extension_UInt8_1114_u8, bool>
	{
		#line 472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		__extension_UInt8_1114_u8 result{}; 
		#line 473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		auto overflowed = Builtin::CarryingAdd(__this, rhs, carry, result); 
		#line 474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 479 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto BorrowingSub(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, __extension_UInt8_1114_u8 rhs, bool carry) noexcept -> const std::tuple<__extension_UInt8_1114_u8, bool>
	{
		#line 481 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		__extension_UInt8_1114_u8 result{}; 
		#line 482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		auto overflowed = Builtin::BorrowingSub(__this, rhs, carry, result); 
		#line 483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 488 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_sub_qst(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_UInt8_1114_u8>
	{
		#line 490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -? implemented only for integer types");
		#line 491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		__extension_UInt8_1114_u8 result{}; 
		#line 492 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (Builtin::SafeSubtract(__this, rhs, result)) {
			#line 493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return result;
		}
		#line 495 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_sub_qst_eq(__extension_UInt8_393_u8 & __this , T rhs) noexcept -> typename __extension_UInt8_393_u8&
	{
		#line 499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -?= implemented only for integer types");
		#line 500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (const auto result = ADV_UFCS(_operator_sub_qst)(__this, rhs)) {
			{
				#line 500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				__this = result;
			}
		}
		#line 503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_sub_ne(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt8_393_u8
	{
		#line 510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -! implemented only for integer types");
		#line 511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		__extension_UInt8_1114_u8 result{}; 
		#line 512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::StrictSubtract(__this, rhs, result);
		#line 513 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_sub_ne_eq(__extension_UInt8_393_u8 & __this , T rhs)  -> typename __extension_UInt8_393_u8&
	{
		#line 515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_sub_ne)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_sub_mod(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_UInt8_393_u8
	{
		#line 521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -% implemented only for integer types");
		#line 522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		__extension_UInt8_1114_u8 result{}; 
		#line 523 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::WrappingSubtract(__this, rhs, result);
		#line 524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_sub_mod_eq(__extension_UInt8_393_u8 & __this , T rhs) noexcept -> typename __extension_UInt8_393_u8&
	{
		#line 526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_sub_mod)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_sub_or(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_UInt8_393_u8
	{
		#line 532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -| implemented only for integer types");
		#line 533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		__extension_UInt8_1114_u8 result{}; 
		#line 534 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::SaturatingSubtract(__this, rhs, result);
		#line 535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_sub_or_eq(__extension_UInt8_393_u8 & __this , T rhs) noexcept -> typename __extension_UInt8_393_u8&
	{
		#line 537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_sub_or)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_sub_sub_qst(__extension_UInt8_393_u8 & __this )  -> typename __extension_UInt8_393_u8&
	{
		#line 549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_qst_eq)(__this, Builtin::u8(1U))); 
	}
	inline constexpr auto _operator_sub_sub_qst_postfix(__extension_UInt8_393_u8 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_sub_sub_qst)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_sub_sub_ne(__extension_UInt8_393_u8 & __this )  -> typename __extension_UInt8_393_u8&
	{
		#line 552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_ne_eq)(__this, Builtin::u8(1U))); 
	}
	inline constexpr auto _operator_sub_sub_ne_postfix(__extension_UInt8_393_u8 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_sub_sub_ne)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_sub_sub_mod(__extension_UInt8_393_u8 & __this )  -> typename __extension_UInt8_393_u8&
	{
		#line 555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_mod_eq)(__this, Builtin::u8(1U))); 
	}
	inline constexpr auto _operator_sub_sub_mod_postfix(__extension_UInt8_393_u8 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_sub_sub_mod)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_sub_sub_or(__extension_UInt8_393_u8 & __this )  -> typename __extension_UInt8_393_u8&
	{
		#line 558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_or_eq)(__this, Builtin::u8(1U))); 
	}
	inline constexpr auto _operator_sub_sub_or_postfix(__extension_UInt8_393_u8 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_sub_sub_or)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mul_qst(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_UInt8_1114_u8>
	{
		#line 564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *? implemented only for integer types");
		#line 565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		__extension_UInt8_1114_u8 result{}; 
		#line 566 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (Builtin::SafeMultiply(__this, rhs, result)) {
			#line 567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return result;
		}
		#line 569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mul_qst_eq(__extension_UInt8_393_u8 & __this , T rhs) noexcept -> typename __extension_UInt8_393_u8&
	{
		#line 573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *?= implemented only for integer types");
		#line 574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (const auto result = ADV_UFCS(_operator_mul_qst)(__this, rhs)) {
			{
				#line 574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				__this = result;
			}
		}
		#line 577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mul_ne(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt8_393_u8
	{
		#line 584 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *! implemented only for integer types");
		#line 585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		__extension_UInt8_1114_u8 result{}; 
		#line 586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::StrictMultiply(__this, rhs, result);
		#line 587 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mul_ne_eq(__extension_UInt8_393_u8 & __this , T rhs)  -> typename __extension_UInt8_393_u8&
	{
		#line 589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_mul_ne)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mul_mod(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_UInt8_393_u8
	{
		#line 595 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *% implemented only for integer types");
		#line 596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		__extension_UInt8_1114_u8 result{}; 
		#line 597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::WrappingMultiply(__this, rhs, result);
		#line 598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 600 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mul_mod_eq(__extension_UInt8_393_u8 & __this , T rhs) noexcept -> typename __extension_UInt8_393_u8&
	{
		#line 600 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_mul_mod)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mul_or(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_UInt8_393_u8
	{
		#line 606 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *| implemented only for integer types");
		#line 607 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		__extension_UInt8_1114_u8 result{}; 
		#line 608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::SaturatingMultiply(__this, rhs, result);
		#line 609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 611 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mul_or_eq(__extension_UInt8_393_u8 & __this , T rhs) noexcept -> typename __extension_UInt8_393_u8&
	{
		#line 611 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_mul_or)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_mul_gt(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, __extension_UInt8_1114_u8 rhs) noexcept -> const std::tuple<Builtin::u8, Builtin::u8>
	{
		#line 626 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		const auto& [low, high] = Builtin::WideningMul8u(__this, rhs);
		#line 627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return std::make_tuple(low, high);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto CarryingMul(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, __extension_UInt8_1114_u8 rhs, __extension_UInt8_1114_u8 carry) noexcept -> const std::tuple<Builtin::u8, Builtin::u8>
	{
		#line 635 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		const auto& [low, high] = Builtin::CarryingMul8u(__this, rhs, carry);
		#line 636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return std::make_tuple(low, high);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_bsl_qst(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_UInt8_1114_u8>
	{
		#line 643 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\? implemented only for integer types");
		#line 644 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		__extension_UInt8_1114_u8 result{}; 
		#line 645 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (Builtin::SafeDivide(__this, rhs, result)) {
			#line 646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return result;
		}
		#line 648 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 650 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_bsl_qst_eq(__extension_UInt8_393_u8 & __this , T rhs) noexcept -> typename __extension_UInt8_393_u8&
	{
		#line 652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\?= implemented only for integer types");
		#line 653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (const auto result = ADV_UFCS(_operator_bsl_qst)(__this, rhs)) {
			{
				#line 653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				__this = result;
			}
		}
		#line 656 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 661 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_bsl_ne(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt8_393_u8
	{
		#line 661 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_bsl_ne_eq(__extension_UInt8_393_u8 & __this , T rhs)  -> typename __extension_UInt8_393_u8&
	{
		#line 662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl_eq)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_bsl_mod(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt8_393_u8
	{
		#line 666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 667 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_eq(__extension_UInt8_393_u8 & __this , T rhs)  -> typename __extension_UInt8_393_u8&
	{
		#line 667 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl_eq)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_bsl_or(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt8_393_u8
	{
		#line 671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 672 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_bsl_or_eq(__extension_UInt8_393_u8 & __this , T rhs)  -> typename __extension_UInt8_393_u8&
	{
		#line 672 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl_eq)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_UInt8_1114_u8>
	{
		#line 688 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\? implemented only for integer types");
		#line 689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		__extension_UInt8_1114_u8 result{}; 
		#line 690 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (Builtin::SafeDivExact(__this, rhs, result)) {
			#line 691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return result;
		}
		#line 693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst_eq(__extension_UInt8_393_u8 & __this , T rhs) noexcept -> typename __extension_UInt8_393_u8&
	{
		#line 698 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\?= implemented only for integer types");
		#line 699 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (const auto result = ADV_UFCS(_operator_bsl_bsl_qst)(__this, rhs)) {
			{
				#line 699 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 700 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				__this = result;
			}
		}
		#line 702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 707 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mod_qst(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_UInt8_1114_u8>
	{
		#line 709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %? implemented only for integer types");
		#line 710 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		__extension_UInt8_1114_u8 result{}; 
		#line 711 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (Builtin::SafeModulus(__this, rhs, result)) {
			#line 712 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return result;
		}
		#line 714 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 716 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mod_qst_eq(__extension_UInt8_393_u8 & __this , T rhs) noexcept -> typename __extension_UInt8_393_u8&
	{
		#line 718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %?= implemented only for integer types");
		#line 719 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (const auto result = ADV_UFCS(_operator_mod_qst)(__this, rhs)) {
			{
				#line 719 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 720 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				__this = result;
			}
		}
		#line 722 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 727 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mod_ne(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt8_393_u8
	{
		#line 727 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this % rhs); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 728 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mod_ne_eq(__extension_UInt8_393_u8 & __this , T rhs)  -> typename __extension_UInt8_393_u8&
	{
		#line 728 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this %= rhs); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 732 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mod_mod(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt8_393_u8
	{
		#line 732 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this % rhs); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 733 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> inline constexpr auto _operator_mod_mod_eq(__extension_UInt8_393_u8 & __this , T rhs)  -> typename __extension_UInt8_393_u8&
	{
		#line 733 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this %= rhs); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 747 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_sub_qst(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND) noexcept -> const Builtin::Nullable<__extension_UInt8_1114_u8>
	{
		#line 747 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(nullptr); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 750 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline auto _operator_sub_ne(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND)  -> const typename __extension_UInt8_393_u8
	{
		#line 752 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::Throw(Builtin::IntegerOverflowException{});
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 755 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_sub_mod(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND)  -> const typename __extension_UInt8_393_u8
	{
		#line 757 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		__extension_UInt8_1114_u8 result{}; 
		#line 758 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::WrappingNegate(__this, result);
		#line 759 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 763 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_sub_or(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND)  -> const typename __extension_UInt8_393_u8
	{
		#line 763 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(Builtin::u8(0U)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 766 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_sub_mod_qst(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND)  -> const std::tuple<__extension_UInt8_1114_u8, bool>
	{
		#line 768 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		__extension_UInt8_1114_u8 result{}; 
		#line 769 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		auto __var_769_8 = Builtin::SafeNegate(__this, result); 
		#line 770 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return std::make_tuple(result, true);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 774 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_lt_lt_qst(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<__extension_UInt8_1114_u8>
	{
		#line 776 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, __extension_UInt8_1114_u8)()) < 0) {
			#line 777 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return Builtin::UncheckedShiftLeft(__this, amount);
		}
		#line 779 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 782 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_lt_lt_qst_eq(__extension_UInt8_393_u8 & __this , Builtin::i32 amount) noexcept -> typename __extension_UInt8_393_u8&
	{
		#line 784 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, __extension_UInt8_1114_u8)()) < 0) {
			#line 785 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return __this <<= amount;
		}
		#line 787 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 790 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_lt_lt_ne(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename __extension_UInt8_393_u8
	{
		#line 792 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, __extension_UInt8_1114_u8)()) < 0) {
			#line 793 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return Builtin::UncheckedShiftLeft(__this, amount);
		}
		#line 795 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::Throw(Builtin::IntegerOverflowException{});
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 798 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_lt_lt_ne_eq(__extension_UInt8_393_u8 & __this , Builtin::i32 amount)  -> typename __extension_UInt8_393_u8&
	{
		#line 798 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_lt_lt_ne)(__this, amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 800 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_lt_lt_mod(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename __extension_UInt8_393_u8
	{
		#line 800 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(Builtin::UncheckedShiftLeft(__this, amount & (ADV_USPCS(BitWidth, __extension_UInt8_1114_u8)() - Builtin::i32(1)))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 803 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_lt_lt_mod_eq(__extension_UInt8_393_u8 & __this , Builtin::i32 amount) noexcept -> typename __extension_UInt8_393_u8&
	{
		#line 803 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_lt_lt_mod)(__this, amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 805 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_lt_lt_mod_qst(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<__extension_UInt8_1114_u8, bool>
	{
		#line 805 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(std::make_tuple(ADV_UFCS(_operator_lt_lt_mod)(__this, amount), (amount <=> Builtin::i32(0)) < 0 || (amount <=> ADV_USPCS(BitWidth, __extension_UInt8_1114_u8)()) >= 0)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 808 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_gt_gt_qst(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<__extension_UInt8_1114_u8>
	{
		#line 810 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, __extension_UInt8_1114_u8)()) < 0) {
			#line 811 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return __this >> amount;
		}
		#line 813 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_gt_gt_qst_eq(__extension_UInt8_393_u8 & __this , Builtin::i32 amount) noexcept -> typename __extension_UInt8_393_u8&
	{
		#line 818 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, __extension_UInt8_1114_u8)()) < 0) {
			#line 819 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return __this >>= amount;
		}
		#line 821 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 824 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_gt_gt_ne(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename __extension_UInt8_393_u8
	{
		#line 826 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, __extension_UInt8_1114_u8)()) < 0) {
			#line 827 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return __this >> amount;
		}
		#line 829 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::Throw(Builtin::IntegerOverflowException{});
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 832 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_gt_gt_ne_eq(__extension_UInt8_393_u8 & __this , Builtin::i32 amount)  -> typename __extension_UInt8_393_u8&
	{
		#line 832 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_gt_gt_ne)(__this, amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 834 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_gt_gt_mod(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename __extension_UInt8_393_u8
	{
		#line 834 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(Builtin::UncheckedShiftRight(__this, amount & (ADV_USPCS(BitWidth, __extension_UInt8_1114_u8)() - Builtin::i32(1)))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 837 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_gt_gt_mod_eq(__extension_UInt8_393_u8 & __this , Builtin::i32 amount) noexcept -> typename __extension_UInt8_393_u8&
	{
		#line 837 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_gt_gt_mod)(__this, amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 839 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_gt_gt_mod_qst(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<__extension_UInt8_1114_u8, bool>
	{
		#line 839 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(std::make_tuple(ADV_UFCS(_operator_gt_gt_mod)(__this, amount), (amount <=> Builtin::i32(0)) < 0 || (amount <=> ADV_USPCS(BitWidth, __extension_UInt8_1114_u8)()) >= 0)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 844 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_xor_xor_qst(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const Builtin::Nullable<__extension_UInt8_1114_u8>
	{
		#line 846 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 848 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return Builtin::u8(1U);
		}
		#line 851 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		auto base = __this; 
		#line 852 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		auto result = Builtin::u8(1U); 
		#line 854 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		for (;;) 
		{
			#line 855 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 856 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				if (const auto mul = ADV_UFCS(_operator_mul_qst)(result, base)) {
					{
						#line 856 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
						auto __tmp0 = *mul; const auto& mul = __tmp0;
						
						#line 857 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
						result = mul;
					}
				} else {
					#line 858 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
					{
						#line 859 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
						return nullptr;
					}
				}
				#line 861 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				if (exp == Builtin::i32(1)) {
					#line 862 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
					return result;
				}
			}
			#line 864 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
			#line 865 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			if (const auto mul = ADV_UFCS(_operator_mul_qst)(base, base)) {
				{
					#line 865 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
					auto __tmp0 = *mul; const auto& mul = __tmp0;
					
					#line 866 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
					base = mul;
				}
			} else {
				#line 867 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				{
					#line 868 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
					return nullptr;
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 873 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_xor_xor_qst_eq(__extension_UInt8_393_u8 & __this , Builtin::u32 exp) noexcept -> typename __extension_UInt8_393_u8&
	{
		#line 875 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (auto result = ADV_UFCS(_operator_xor_xor_qst)(__this, exp)) {
			{
				#line 875 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 876 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				return __this = result;
			}
		}
		#line 878 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 881 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_xor_xor_ne(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename __extension_UInt8_393_u8
	{
		#line 883 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 885 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return Builtin::u8(1U);
		}
		#line 888 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		auto base = __this; 
		#line 889 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		auto result = Builtin::u8(1U); 
		#line 891 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		for (;;) 
		{
			#line 892 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 893 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				ADV_UFCS(_operator_mul_ne_eq)(result, base);
				#line 894 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				if (exp == Builtin::i32(1)) {
					#line 895 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
					return result;
				}
			}
			#line 897 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
			#line 898 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			ADV_UFCS(_operator_mul_ne_eq)(base, base);
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 902 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_xor_xor_ne_eq(__extension_UInt8_393_u8 & __this , Builtin::u32 exp)  -> typename __extension_UInt8_393_u8&
	{
		#line 902 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_xor_xor_ne)(__this, exp)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 904 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_xor_xor_mod(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename __extension_UInt8_393_u8
	{
		#line 906 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 908 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return Builtin::u8(1U);
		}
		#line 911 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		auto base = __this; 
		#line 912 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		auto result = Builtin::u8(1U); 
		#line 914 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (std::is_constant_evaluated()) {
			#line 915 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			while ((exp <=> Builtin::i32(1)) > 0) 
			{
				#line 916 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
					#line 917 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
					ADV_UFCS(_operator_mul_mod_eq)(result, base);
				}
				#line 919 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
				#line 920 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				ADV_UFCS(_operator_mul_mod_eq)(base, base);
			}
			#line 922 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return ADV_UFCS(_operator_mul_mod)(result, base);
		} else {
			#line 923 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			{
				#line 924 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				for (;;) 
				{
					#line 925 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
					if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
						#line 926 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
						ADV_UFCS(_operator_mul_mod_eq)(result, base);
						#line 927 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
						if (exp == Builtin::i32(1)) {
							#line 928 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
							return result;
						}
					}
					#line 930 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
					ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
					#line 931 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
					ADV_UFCS(_operator_mul_mod_eq)(base, base);
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 936 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_xor_xor_mod_eq(__extension_UInt8_393_u8 & __this , Builtin::u32 exp) noexcept -> typename __extension_UInt8_393_u8&
	{
		#line 936 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_xor_xor_mod)(__this, exp)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 938 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_xor_xor_or(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename __extension_UInt8_393_u8
	{
		#line 940 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (const auto result = ADV_UFCS(_operator_xor_xor_qst)(__this, exp)) {
			{
				#line 940 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 941 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				return result;
			}
		}
		#line 944 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return ADV_USPCS(MaxValue, __extension_UInt8_1114_u8)();
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 947 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_xor_xor_or_eq(__extension_UInt8_393_u8 & __this , Builtin::u32 exp) noexcept -> typename __extension_UInt8_393_u8&
	{
		#line 947 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_xor_xor_or)(__this, exp)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 949 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto _operator_xor_xor_mod_qst(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const std::tuple<__extension_UInt8_1114_u8, bool>
	{
		#line 951 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 953 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return std::make_tuple(Builtin::u8(1U), false);
		}
		#line 956 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		auto base = __this; 
		#line 957 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		auto result = Builtin::u8(1U); 
		#line 958 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		auto overflowed = false; 
		#line 959 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		auto tmp = std::make_tuple(Builtin::u8(0U), false); 
		#line 961 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		for (;;) 
		{
			#line 962 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 963 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				tmp = ADV_UFCS(_operator_mul_mod_qst)(result, base);
				#line 964 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				if (exp == Builtin::i32(1)) {
					#line 965 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
					std::get<1>(tmp) |= overflowed;
					#line 966 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
					return tmp;
				}
				#line 968 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				result = std::get<0>(tmp);
				#line 969 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				overflowed |= std::get<1>(tmp);
			}
			#line 971 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
			#line 972 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			tmp = ADV_UFCS(_operator_mul_mod_qst)(base, base);
			#line 973 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			base = std::get<0>(tmp);
			#line 974 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			overflowed |= std::get<1>(tmp);
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 979 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getCheckedAbs(__extension_UInt8_393_u8 const& __this ) -> const Builtin::Nullable<__extension_UInt8_1114_u8>
	{
		#line 979 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 981 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getStrictAbs(__extension_UInt8_393_u8 const& __this ) -> const __extension_UInt8_1114_u8
	{
		#line 981 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 983 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getWrappingAbs(__extension_UInt8_393_u8 const& __this ) -> const __extension_UInt8_1114_u8
	{
		#line 983 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 985 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getSaturatingAbs(__extension_UInt8_393_u8 const& __this ) -> const __extension_UInt8_1114_u8
	{
		#line 985 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 987 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getOverflowingAbs(__extension_UInt8_393_u8 const& __this ) -> const std::tuple<__extension_UInt8_1114_u8, bool>
	{
		#line 987 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(std::make_tuple(__this, false)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	
} namespace __extensions { using namespace System;
#line 1029 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto NextMultipleOf(__extension_UInt8_990_u8 const& __this LIFETIMEBOUND, __extension_UInt8_1114_u8 rhs)  -> const typename __extension_UInt8_990_u8
	{
		#line 1031 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		const auto rem = __this % rhs; 
		#line 1032 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return rem == Builtin::i32(0) ? __this : __this + (rhs - rem);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1037 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto CheckedNextMultipleOf(__extension_UInt8_990_u8 const& __this LIFETIMEBOUND, __extension_UInt8_1114_u8 rhs) noexcept -> const Builtin::Nullable<__extension_UInt8_1114_u8>
	{
		#line 1039 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (const auto rem = ADV_UFCS(_operator_mod_qst)(__this, rhs)) {
			{
				#line 1039 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				auto __tmp0 = *rem; const auto& rem = __tmp0;
				
				#line 1040 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				if (rem == Builtin::i32(0)) {
					#line 1041 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
					return __this;
				}
				#line 1043 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				return ADV_UFCS(_operator_add_qst)(__this, (rhs - rem));
			}
		}
		#line 1045 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 991 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto __static_getIsSigned<__extension_UInt8_990_u8>::get() -> const bool
	{
		#line 991 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(false); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 993 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getTrailingZeroCount(__extension_UInt8_990_u8 const& __this ) -> const Builtin::u32
	{
		#line 993 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(Builtin::TrailingZeroCount(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 994 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getTrailingOneCount(__extension_UInt8_990_u8 const& __this ) -> const Builtin::u32
	{
		#line 994 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(Builtin::TrailingZeroCount(ADV_UFCS(_operator_not)(__this))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 995 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getByteCount(__extension_UInt8_990_u8 const& __this ) -> const Builtin::u32
	{
		#line 995 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u32>(Builtin::usize(sizeof(__extension_UInt8_1114_u8)))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 996 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getMinimalBitWidth(__extension_UInt8_990_u8 const& __this ) -> const Builtin::u32
	{
		#line 996 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(BitWidth, __extension_UInt8_1114_u8)() - ADV_UPCS(LeadingZeroCount)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1006 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline auto getIsqrt(__extension_UInt8_990_u8 const& __this ) -> const __extension_UInt8_1114_u8
	{
		#line 1007 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (const auto result = ADV_UPCS(CheckedIsqrt)(__this.__ref())) {
			{
				#line 1007 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 1008 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				return result;
			}
		}
		#line 1010 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1015 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getLog2Ceiling(__extension_UInt8_990_u8 const& __this ) -> const __extension_UInt8_1114_u8
	{
		#line 1017 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		auto result = ADV_UPCS(Log2)(__this.__ref()); 
		#line 1018 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (ADV_UPCS(PopCount)(__this.__ref()) != Builtin::i32(1)) {
			#line 1019 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			++result;
		}
		#line 1022 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return result;
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1049 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getPrevPow2(__extension_UInt8_990_u8 const& __this ) -> const __extension_UInt8_1114_u8
	{
		#line 1051 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if ((__this <=> Builtin::i32(1)) <= 0) {
			#line 1052 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return Builtin::u8(0U);
		}
		#line 1055 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return ADV_USPCS(One, __extension_UInt8_1114_u8)() << (ADV_UPCS(MinimalBitWidth)(__this.__ref()) - Builtin::u8(1U));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1060 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getNextPow2(__extension_UInt8_990_u8 const& __this ) -> const __extension_UInt8_1114_u8
	{
		#line 1062 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if ((__this <=> Builtin::i32(1)) <= 0) {
			#line 1063 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return Builtin::u8(0U);
		}
		#line 1066 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		const auto p = __this - Builtin::u8(1U); 
		#line 1067 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return (ADV_USPCS(AllBitsSet, __extension_UInt8_1114_u8)() >> ADV_UPCS(LeadingZeroCount)(p.__ref())) + Builtin::u8(1U);
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1072 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getCheckedNextPow2(__extension_UInt8_990_u8 const& __this ) -> const Builtin::Nullable<__extension_UInt8_1114_u8>
	{
		#line 1074 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if ((__this <=> Builtin::i32(1)) <= 0) {
			#line 1075 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return Builtin::u8(0U);
		}
		#line 1078 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		const auto p = __this - Builtin::u8(1U); 
		#line 1079 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return ADV_UFCS(_operator_add_qst)((ADV_USPCS(AllBitsSet, __extension_UInt8_1114_u8)() >> ADV_UPCS(LeadingZeroCount)(p.__ref())), Builtin::u8(1U));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1084 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getWrappingNextPow2(__extension_UInt8_990_u8 const& __this ) -> const __extension_UInt8_1114_u8
	{
		#line 1086 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if ((__this <=> Builtin::i32(1)) <= 0) {
			#line 1087 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			return Builtin::u8(0U);
		}
		#line 1090 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		const auto p = __this - Builtin::u8(1U); 
		#line 1091 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return ADV_UFCS(_operator_add_mod)((ADV_USPCS(AllBitsSet, __extension_UInt8_1114_u8)() >> ADV_UPCS(LeadingZeroCount)(p.__ref())), Builtin::u8(1U));
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	
} namespace __extensions { using namespace System;
#line 1109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto RotateLeft(__extension_UInt8_1095_u8 const& __this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename __extension_UInt8_1095_u8
	{
		#line 1109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(Builtin::BitsRotateLeft(__this, shiftAmount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto RotateRight(__extension_UInt8_1095_u8 const& __this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename __extension_UInt8_1095_u8
	{
		#line 1110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(Builtin::BitsRotateRight(__this, shiftAmount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1096 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto __static_getBitWidth<__extension_UInt8_1095_u8>::get() -> const Builtin::u32
	{
		#line 1096 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(8U)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1098 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getLeadingZeroCount(__extension_UInt8_1095_u8 const& __this ) -> const Builtin::u32
	{
		#line 1098 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(Builtin::LeadingZeroCount(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1099 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getLeadingOneCount(__extension_UInt8_1095_u8 const& __this ) -> const Builtin::u32
	{
		#line 1099 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(Builtin::LeadingZeroCount(ADV_UFCS(_operator_not)(__this))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getPopCount(__extension_UInt8_1095_u8 const& __this ) -> const Builtin::u32
	{
		#line 1100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(Builtin::PopCount(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getZeroCount(__extension_UInt8_1095_u8 const& __this ) -> const Builtin::u32
	{
		#line 1101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(Builtin::PopCount(ADV_UFCS(_operator_not)(__this))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getByteSwapped(__extension_UInt8_1095_u8 const& __this ) -> const __extension_UInt8_1114_u8
	{
		#line 1102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getBigEndian(__extension_UInt8_1095_u8 const& __this ) -> const __extension_UInt8_1114_u8
	{
		#line 1103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getLittleEndian(__extension_UInt8_1095_u8 const& __this ) -> const __extension_UInt8_1114_u8
	{
		#line 1104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getReverseBits(__extension_UInt8_1095_u8 const& __this ) -> const __extension_UInt8_1114_u8
	{
		#line 1105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(Builtin::ReverseBits8u(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getShortestBitLength(__extension_UInt8_1095_u8 const& __this ) -> const Builtin::u32
	{
		#line 1107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(BitWidth, __extension_UInt8_1114_u8)() - ADV_UPCS(LeadingZeroCount)(__this.__ref())); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	
} namespace __extensions { using namespace System;
#line 1122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto IsGreaterThanAsUnsigned(__extension_UInt8_1114_u8 const& __this LIFETIMEBOUND, __extension_UInt8_1114_u8 rhs) noexcept -> const bool
	{
		#line 1122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY((__this <=> rhs) > 0); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto __static_getMaxDigitCount<__extension_UInt8_1114_u8>::get() -> const Builtin::i32
	{
		#line 1115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(3)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto __static_getMaxHexDigitCount<__extension_UInt8_1114_u8>::get() -> const Builtin::i32
	{
		#line 1116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(2)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto __static_getMaxValueDiv10<__extension_UInt8_1114_u8>::get() -> const __extension_UInt8_1114_u8
	{
		#line 1117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl)(ADV_USPCS(MaxValue, Builtin::u8)(), Builtin::i32(10))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getMultiplyBy10(__extension_UInt8_1114_u8 const& __this ) -> const __extension_UInt8_1114_u8
	{
		#line 1119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_mod)(__this, Builtin::u8(10U))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	inline constexpr auto getMultiplyBy16(__extension_UInt8_1114_u8 const& __this ) -> const __extension_UInt8_1114_u8
	{
		#line 1120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_mod)(__this, Builtin::u8(16U))); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	

}