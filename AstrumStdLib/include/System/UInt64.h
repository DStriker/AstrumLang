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
namespace __Unsafe {} namespace __UInt64_Protected__Unsafe {}
//###############################################################################
//# Global type aliases
//###############################################################################
#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
using UInt64 = Builtin::u64;
#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
using ULong = Builtin::u64;
//###############################################################################
//# Type definitions
//###############################################################################
	} namespace __extensions { using namespace System;
#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	using __extension_UInt64_15_u64 = Builtin::u64;
	#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ADV_CHECK_INTERFACE(IMinMaxValue, IMinMaxValue);
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class __TT> struct __static_getMinValue; template<> struct __static_getMinValue<__extension_UInt64_15_u64> { static inline constexpr auto get() -> const __extension_UInt64_15_u64; };
	#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class __TT> struct __static_getMaxValue; template<> struct __static_getMaxValue<__extension_UInt64_15_u64> { static inline constexpr auto get() -> const __extension_UInt64_15_u64; };
	#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(u64, IMinMaxValue, IMinMaxValue, u64);
	} namespace System{
using __extensions::__static_getMinValue;
using __extensions::__static_getMaxValue;

		} namespace __extensions { using namespace System;
#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	using __extension_UInt64_20_u64 = Builtin::u64;
	#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ASTRUMSTD_API auto _operator_eq_eq_mul(__extension_UInt64_20_u64 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool;
	#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto operator<=>(__extension_UInt64_20_u64 const& __this LIFETIMEBOUND, Builtin::Nullable<__extension_UInt64_20_u64> rhs) noexcept -> const Builtin::i32;
	#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_gt_gt_gt(__extension_UInt64_20_u64 const& __this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename __extension_UInt64_20_u64;
	#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_gt_gt_gt_eq(__extension_UInt64_20_u64 & __this , Builtin::i32 amount)  -> typename __extension_UInt64_20_u64&;
	#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_lt_lt_bsl(__extension_UInt64_20_u64 const& __this LIFETIMEBOUND, Builtin::u64 amount) noexcept -> const typename __extension_UInt64_20_u64;
	#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_lt_lt_bsl_eq(__extension_UInt64_20_u64 & __this , Builtin::u64 amount) noexcept -> typename __extension_UInt64_20_u64&;
	#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_gt_gt_bsl(__extension_UInt64_20_u64 const& __this LIFETIMEBOUND, Builtin::u64 amount) noexcept -> const typename __extension_UInt64_20_u64;
	#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_gt_gt_bsl_eq(__extension_UInt64_20_u64 & __this , Builtin::u64 amount) noexcept -> typename __extension_UInt64_20_u64&;
	#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getHashCode(__extension_UInt64_20_u64 const& __this ) -> const Builtin::u64;
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
#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	using __extension_UInt64_73_u64 = Builtin::u64;
	#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ADV_CHECK_INTERFACE(IAbstractComparable, IAbstractComparable);
	#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ASTRUMSTD_API auto _operator_lt_eq_gt_mul(__extension_UInt64_73_u64 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32;
	#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(u64, IAbstractComparable, IAbstractComparable, u64);
	} namespace System{
using __extensions::_operator_lt_eq_gt_mul;

		} namespace __extensions { using namespace System;
#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	using __extension_UInt64_88_u64 = Builtin::u64;
	#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ADV_CHECK_INTERFACE(IConvertible, IConvertible);
	#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToBoolean(__extension_UInt64_88_u64 const& __this LIFETIMEBOUND) noexcept -> const bool;
	#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToInt8(__extension_UInt64_88_u64 const& __this LIFETIMEBOUND)  -> const Builtin::i8;
	#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToUInt8(__extension_UInt64_88_u64 const& __this LIFETIMEBOUND)  -> const Builtin::u8;
	#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToInt16(__extension_UInt64_88_u64 const& __this LIFETIMEBOUND)  -> const Builtin::i16;
	#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToUInt16(__extension_UInt64_88_u64 const& __this LIFETIMEBOUND)  -> const Builtin::u16;
	#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToInt32(__extension_UInt64_88_u64 const& __this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToUInt32(__extension_UInt64_88_u64 const& __this LIFETIMEBOUND)  -> const Builtin::u32;
	#line 126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToInt64(__extension_UInt64_88_u64 const& __this LIFETIMEBOUND)  -> const Builtin::i64;
	#line 132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToUInt64(__extension_UInt64_88_u64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u64;
	#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToInt128(__extension_UInt64_88_u64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i128;
	#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToUInt128(__extension_UInt64_88_u64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u128;
	#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToIsize(__extension_UInt64_88_u64 const& __this LIFETIMEBOUND)  -> const Builtin::isize;
	#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToUsize(__extension_UInt64_88_u64 const& __this LIFETIMEBOUND)  -> const Builtin::usize;
	#line 151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToFloat32(__extension_UInt64_88_u64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::f32;
	#line 152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToFloat64(__extension_UInt64_88_u64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::f64;
	#line 153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToByte(__extension_UInt64_88_u64 const& __this LIFETIMEBOUND)  -> const Builtin::char8;
	#line 159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToChar(__extension_UInt64_88_u64 const& __this LIFETIMEBOUND)  -> const Builtin::char16;
	#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(u64, IConvertible, IConvertible, u64);
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
#line 170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	using __extension_UInt64_170_u64 = Builtin::u64;
	#line 170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ADV_CHECK_INTERFACE(IDivisibleArithmetic, IDivisibleArithmetic);
	#line 172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_div_mod(__extension_UInt64_170_u64 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_UInt64_170_u64, __extension_UInt64_170_u64>;
	#line 178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_div_not(__extension_UInt64_170_u64 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt64_170_u64;
	#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_div_not_eq(__extension_UInt64_170_u64 & __this , auto rhs)  -> typename __extension_UInt64_170_u64&;
	#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_div_lt(__extension_UInt64_170_u64 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt64_170_u64;
	#line 196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_div_lt_eq(__extension_UInt64_170_u64 & __this , auto rhs)  -> typename __extension_UInt64_170_u64&;
	#line 198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_div_gt(__extension_UInt64_170_u64 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt64_170_u64;
	#line 208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_div_gt_eq(__extension_UInt64_170_u64 & __this , auto rhs)  -> typename __extension_UInt64_170_u64&;
	#line 170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(u64, IDivisibleArithmetic, IDivisibleArithmetic, u64);
	} namespace System{
using __extensions::_operator_div_mod;
using __extensions::_operator_div_not;
using __extensions::_operator_div_not_eq;
using __extensions::_operator_div_lt;
using __extensions::_operator_div_lt_eq;
using __extensions::_operator_div_gt;
using __extensions::_operator_div_gt_eq;

		} namespace __extensions { using namespace System;
#line 211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	using __extension_UInt64_211_u64 = Builtin::u64;
	#line 211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ADV_CHECK_INTERFACE(IIntegerDivisibleArithmetic, IIntegerDivisibleArithmetic);
	#line 213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_bsl(__extension_UInt64_211_u64 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt64_211_u64;
	#line 215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_bsl_eq(__extension_UInt64_211_u64 & __this , T rhs)  -> typename __extension_UInt64_211_u64&;
	#line 220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl(__extension_UInt64_211_u64 const& __this LIFETIMEBOUND, T rhs)  -> const Builtin::Nullable<__extension_UInt64_211_u64>;
	#line 211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(u64, IIntegerDivisibleArithmetic, IIntegerDivisibleArithmetic, u64);
	} namespace System{
using __extensions::_operator_bsl;
using __extensions::_operator_bsl_eq;
using __extensions::_operator_bsl_bsl;

		} namespace __extensions { using namespace System;
#line 231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	using __extension_UInt64_231_u64 = Builtin::u64;
	#line 231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ADV_CHECK_INTERFACE(IIntegerPowerArithmetic, IIntegerPowerArithmetic);
	#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_xor_xor(__extension_UInt64_231_u64 const& __this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename __extension_UInt64_231_u64;
	#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_xor_xor_eq(__extension_UInt64_231_u64 & __this , Builtin::u32 exp)  -> typename __extension_UInt64_231_u64&;
	#line 231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(u64, IIntegerPowerArithmetic, IIntegerPowerArithmetic, u64);
	} namespace System{
using __extensions::_operator_xor_xor;
using __extensions::_operator_xor_xor_eq;

		} namespace __extensions { using namespace System;
#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	using __extension_UInt64_269_u64 = Builtin::u64;
	#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ADV_CHECK_INTERFACE(INumberBase, INumberBase);
	#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto MaxMagnitude(__extension_UInt64_269_u64 const& __this LIFETIMEBOUND, __extension_UInt64_269_u64 rhs) noexcept -> const typename __extension_UInt64_269_u64;
	#line 294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto MaxMagnitudeNumber(__extension_UInt64_269_u64 const& __this LIFETIMEBOUND, __extension_UInt64_269_u64 rhs) noexcept -> const typename __extension_UInt64_269_u64;
	#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto MinMagnitude(__extension_UInt64_269_u64 const& __this LIFETIMEBOUND, __extension_UInt64_269_u64 rhs) noexcept -> const typename __extension_UInt64_269_u64;
	#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto MinMagnitudeNumber(__extension_UInt64_269_u64 const& __this LIFETIMEBOUND, __extension_UInt64_269_u64 rhs) noexcept -> const typename __extension_UInt64_269_u64;
	#line 299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ASTRUMSTD_API auto Parse(__extension_UInt64_269_u64 const& __this LIFETIMEBOUND, Builtin::Str input)  -> const typename __extension_UInt64_269_u64;
	#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ASTRUMSTD_API auto TryParse(__extension_UInt64_269_u64 const& __this LIFETIMEBOUND, Builtin::Str input) noexcept -> const Builtin::Nullable<__extension_UInt64_269_u64>;
	#line 310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto NarrowToInt8(__extension_UInt64_269_u64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i8;
	#line 311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto NarrowToUInt8(__extension_UInt64_269_u64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u8;
	#line 312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto NarrowToInt16(__extension_UInt64_269_u64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i16;
	#line 313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto NarrowToUInt16(__extension_UInt64_269_u64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u16;
	#line 314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto NarrowToInt32(__extension_UInt64_269_u64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i32;
	#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto NarrowToUInt32(__extension_UInt64_269_u64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u32;
	#line 316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto NarrowToInt64(__extension_UInt64_269_u64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i64;
	#line 317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto NarrowToUInt64(__extension_UInt64_269_u64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u64;
	#line 318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto NarrowToInt128(__extension_UInt64_269_u64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i128;
	#line 319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto NarrowToUInt128(__extension_UInt64_269_u64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u128;
	#line 320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto NarrowToIsize(__extension_UInt64_269_u64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::isize;
	#line 321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto NarrowToUsize(__extension_UInt64_269_u64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::usize;
	#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class __TT> struct __static_getOne; template<> struct __static_getOne<__extension_UInt64_269_u64> { static inline constexpr auto get() -> const __extension_UInt64_269_u64; };
	#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class __TT> struct __static_getZero; template<> struct __static_getZero<__extension_UInt64_269_u64> { static inline constexpr auto get() -> const __extension_UInt64_269_u64; };
	#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class __TT> struct __static_getRadix; template<> struct __static_getRadix<__extension_UInt64_269_u64> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getAbs(__extension_UInt64_269_u64 const& __this ) -> const __extension_UInt64_269_u64;
	#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsCanonical(__extension_UInt64_269_u64 const& __this ) -> const bool;
	#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsComplexNumber(__extension_UInt64_269_u64 const& __this ) -> const bool;
	#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsEvenInteger(__extension_UInt64_269_u64 const& __this ) -> const bool;
	#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsFinite(__extension_UInt64_269_u64 const& __this ) -> const bool;
	#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsImaginaryNumber(__extension_UInt64_269_u64 const& __this ) -> const bool;
	#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsInfinity(__extension_UInt64_269_u64 const& __this ) -> const bool;
	#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsInteger(__extension_UInt64_269_u64 const& __this ) -> const bool;
	#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsNaN(__extension_UInt64_269_u64 const& __this ) -> const bool;
	#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsNegative(__extension_UInt64_269_u64 const& __this ) -> const bool;
	#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsNegativeInfinity(__extension_UInt64_269_u64 const& __this ) -> const bool;
	#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsNormal(__extension_UInt64_269_u64 const& __this ) -> const bool;
	#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsOddInteger(__extension_UInt64_269_u64 const& __this ) -> const bool;
	#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsPositive(__extension_UInt64_269_u64 const& __this ) -> const bool;
	#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsPositiveInfinity(__extension_UInt64_269_u64 const& __this ) -> const bool;
	#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsRealNumber(__extension_UInt64_269_u64 const& __this ) -> const bool;
	#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsSubnormal(__extension_UInt64_269_u64 const& __this ) -> const bool;
	#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsZero(__extension_UInt64_269_u64 const& __this ) -> const bool;
	#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(u64, INumberBase, INumberBase, u64);
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
#line 324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	using __extension_UInt64_324_u64 = Builtin::u64;
	#line 324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ADV_CHECK_INTERFACE(IUnsignedNumber, IUnsignedNumber);
	#line 324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(u64, IUnsignedNumber, IUnsignedNumber, u64);
	} namespace System{

		} namespace __extensions { using namespace System;
#line 328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	using __extension_UInt64_328_u64 = Builtin::u64;
	#line 328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ADV_CHECK_INTERFACE(INumber, INumber);
	#line 331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto CopySign(__extension_UInt64_328_u64 const& __this LIFETIMEBOUND, __extension_UInt64_328_u64 sign) noexcept -> const typename __extension_UInt64_328_u64;
	#line 333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto Max(__extension_UInt64_328_u64 const& __this LIFETIMEBOUND, __extension_UInt64_328_u64 rhs) noexcept -> const typename __extension_UInt64_328_u64;
	#line 334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto MaxNumber(__extension_UInt64_328_u64 const& __this LIFETIMEBOUND, __extension_UInt64_328_u64 rhs) noexcept -> const typename __extension_UInt64_328_u64;
	#line 335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto Min(__extension_UInt64_328_u64 const& __this LIFETIMEBOUND, __extension_UInt64_328_u64 rhs) noexcept -> const typename __extension_UInt64_328_u64;
	#line 336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto MinNumber(__extension_UInt64_328_u64 const& __this LIFETIMEBOUND, __extension_UInt64_328_u64 rhs) noexcept -> const typename __extension_UInt64_328_u64;
	#line 337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline auto Clamp(__extension_UInt64_328_u64 const& __this LIFETIMEBOUND, __extension_UInt64_328_u64 min, __extension_UInt64_328_u64 max)  -> const typename __extension_UInt64_328_u64;
	#line 329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getSign(__extension_UInt64_328_u64 const& __this ) -> const Builtin::i32;
	#line 328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(u64, INumber, INumber, u64);
	} namespace System{
using __extensions::CopySign;
using __extensions::Max;
using __extensions::MaxNumber;
using __extensions::Min;
using __extensions::MinNumber;
using __extensions::Clamp;
using __extensions::getSign;

		} namespace __extensions { using namespace System;
#line 340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	using __extension_UInt64_340_u64 = Builtin::u64;
	#line 340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ADV_CHECK_INTERFACE(IBinaryNumber, IBinaryNumber);
	#line 404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto CheckedLog(__extension_UInt64_340_u64 const& __this LIFETIMEBOUND, __extension_UInt64_340_u64 base) noexcept -> const Builtin::Nullable<__extension_UInt64_340_u64>;
	#line 437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ASTRUMSTD_API auto Log(__extension_UInt64_340_u64 const& __this LIFETIMEBOUND, __extension_UInt64_340_u64 base)  -> const typename __extension_UInt64_340_u64;
	#line 447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto Midpoint(__extension_UInt64_340_u64 const& __this LIFETIMEBOUND, __extension_UInt64_340_u64 rhs) noexcept -> const typename __extension_UInt64_340_u64;
	#line 450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto IsMultipleOf(__extension_UInt64_340_u64 const& __this LIFETIMEBOUND, __extension_UInt64_340_u64 rhs) noexcept -> const bool;
	#line 342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class __TT> struct __static_getAllBitsSet; template<> struct __static_getAllBitsSet<__extension_UInt64_340_u64> { static inline constexpr auto get() -> const __extension_UInt64_340_u64; };
	#line 345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsPow2(__extension_UInt64_340_u64 const& __this ) -> const bool;
	#line 349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getCheckedLog2(__extension_UInt64_340_u64 const& __this ) -> const Builtin::Nullable<__extension_UInt64_340_u64>;
	#line 359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getLog2(__extension_UInt64_340_u64 const& __this ) -> const __extension_UInt64_340_u64;
	#line 369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getCheckedLog10(__extension_UInt64_340_u64 const& __this ) -> const Builtin::Nullable<__extension_UInt64_340_u64>;
	#line 394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getLog10(__extension_UInt64_340_u64 const& __this ) -> const __extension_UInt64_340_u64;
	#line 340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(u64, IBinaryNumber, IBinaryNumber, u64);
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
#line 460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	using __extension_UInt64_460_u64 = Builtin::u64;
	#line 460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ADV_CHECK_INTERFACE(ICheckedArithmetic, ICheckedArithmetic);
	#line 463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_add_qst(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_UInt64_460_u64>;
	#line 472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_add_qst_eq(__extension_UInt64_460_u64 & __this , T rhs) noexcept -> typename __extension_UInt64_460_u64&;
	#line 483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_add_ne(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt64_460_u64;
	#line 490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_add_ne_eq(__extension_UInt64_460_u64 & __this , T rhs)  -> typename __extension_UInt64_460_u64&;
	#line 494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_add_mod(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_UInt64_460_u64;
	#line 501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_add_mod_eq(__extension_UInt64_460_u64 & __this , T rhs) noexcept -> typename __extension_UInt64_460_u64&;
	#line 505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_add_or(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_UInt64_460_u64;
	#line 512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_add_or_eq(__extension_UInt64_460_u64 & __this , T rhs) noexcept -> typename __extension_UInt64_460_u64&;
	#line 516 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> auto _operator_add_mod_qst(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<__extension_UInt64_460_u64, bool>;
	#line 524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_qst(__extension_UInt64_460_u64 & __this )  -> typename __extension_UInt64_460_u64&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_qst_postfix(__extension_UInt64_460_u64 & __this)  -> decltype(auto);
	#line 527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_ne(__extension_UInt64_460_u64 & __this )  -> typename __extension_UInt64_460_u64&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_ne_postfix(__extension_UInt64_460_u64 & __this)  -> decltype(auto);
	#line 530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_mod(__extension_UInt64_460_u64 & __this )  -> typename __extension_UInt64_460_u64&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_mod_postfix(__extension_UInt64_460_u64 & __this)  -> decltype(auto);
	#line 533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_or(__extension_UInt64_460_u64 & __this )  -> typename __extension_UInt64_460_u64&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_or_postfix(__extension_UInt64_460_u64 & __this)  -> decltype(auto);
	#line 537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto CarryingAdd(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, __extension_UInt64_460_u64 rhs, bool carry) noexcept -> const std::tuple<__extension_UInt64_460_u64, bool>;
	#line 546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto BorrowingSub(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, __extension_UInt64_460_u64 rhs, bool carry) noexcept -> const std::tuple<__extension_UInt64_460_u64, bool>;
	#line 555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_sub_qst(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_UInt64_460_u64>;
	#line 564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_sub_qst_eq(__extension_UInt64_460_u64 & __this , T rhs) noexcept -> typename __extension_UInt64_460_u64&;
	#line 575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_sub_ne(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt64_460_u64;
	#line 582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_sub_ne_eq(__extension_UInt64_460_u64 & __this , T rhs)  -> typename __extension_UInt64_460_u64&;
	#line 586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_sub_mod(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_UInt64_460_u64;
	#line 593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_sub_mod_eq(__extension_UInt64_460_u64 & __this , T rhs) noexcept -> typename __extension_UInt64_460_u64&;
	#line 597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_sub_or(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_UInt64_460_u64;
	#line 604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_sub_or_eq(__extension_UInt64_460_u64 & __this , T rhs) noexcept -> typename __extension_UInt64_460_u64&;
	#line 608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> auto _operator_sub_mod_qst(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<__extension_UInt64_460_u64, bool>;
	#line 616 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_qst(__extension_UInt64_460_u64 & __this )  -> typename __extension_UInt64_460_u64&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_qst_postfix(__extension_UInt64_460_u64 & __this)  -> decltype(auto);
	#line 619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_ne(__extension_UInt64_460_u64 & __this )  -> typename __extension_UInt64_460_u64&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_ne_postfix(__extension_UInt64_460_u64 & __this)  -> decltype(auto);
	#line 622 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_mod(__extension_UInt64_460_u64 & __this )  -> typename __extension_UInt64_460_u64&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_mod_postfix(__extension_UInt64_460_u64 & __this)  -> decltype(auto);
	#line 625 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_or(__extension_UInt64_460_u64 & __this )  -> typename __extension_UInt64_460_u64&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_or_postfix(__extension_UInt64_460_u64 & __this)  -> decltype(auto);
	#line 629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mul_qst(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_UInt64_460_u64>;
	#line 638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mul_qst_eq(__extension_UInt64_460_u64 & __this , T rhs) noexcept -> typename __extension_UInt64_460_u64&;
	#line 649 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mul_ne(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt64_460_u64;
	#line 656 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mul_ne_eq(__extension_UInt64_460_u64 & __this , T rhs)  -> typename __extension_UInt64_460_u64&;
	#line 660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mul_mod(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_UInt64_460_u64;
	#line 667 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mul_mod_eq(__extension_UInt64_460_u64 & __this , T rhs) noexcept -> typename __extension_UInt64_460_u64&;
	#line 671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mul_or(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_UInt64_460_u64;
	#line 678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mul_or_eq(__extension_UInt64_460_u64 & __this , T rhs) noexcept -> typename __extension_UInt64_460_u64&;
	#line 682 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> auto _operator_mul_mod_qst(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<__extension_UInt64_460_u64, bool>;
	#line 691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_mul_gt(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, __extension_UInt64_460_u64 rhs) noexcept -> const std::tuple<Builtin::u64, Builtin::u64>;
	#line 700 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto CarryingMul(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, __extension_UInt64_460_u64 rhs, __extension_UInt64_460_u64 carry) noexcept -> const std::tuple<Builtin::u64, Builtin::u64>;
	#line 708 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_bsl_qst(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_UInt64_460_u64>;
	#line 717 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_bsl_qst_eq(__extension_UInt64_460_u64 & __this , T rhs) noexcept -> typename __extension_UInt64_460_u64&;
	#line 728 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_bsl_ne(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt64_460_u64;
	#line 729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_bsl_ne_eq(__extension_UInt64_460_u64 & __this , T rhs)  -> typename __extension_UInt64_460_u64&;
	#line 733 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_bsl_mod(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt64_460_u64;
	#line 734 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_eq(__extension_UInt64_460_u64 & __this , T rhs)  -> typename __extension_UInt64_460_u64&;
	#line 738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_bsl_or(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt64_460_u64;
	#line 739 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_bsl_or_eq(__extension_UInt64_460_u64 & __this , T rhs)  -> typename __extension_UInt64_460_u64&;
	#line 744 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> auto _operator_bsl_mod_qst(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_UInt64_460_u64, bool>;
	#line 753 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_UInt64_460_u64>;
	#line 763 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst_eq(__extension_UInt64_460_u64 & __this , T rhs) noexcept -> typename __extension_UInt64_460_u64&;
	#line 774 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mod_qst(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_UInt64_460_u64>;
	#line 783 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mod_qst_eq(__extension_UInt64_460_u64 & __this , T rhs) noexcept -> typename __extension_UInt64_460_u64&;
	#line 794 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mod_ne(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt64_460_u64;
	#line 795 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mod_ne_eq(__extension_UInt64_460_u64 & __this , T rhs)  -> typename __extension_UInt64_460_u64&;
	#line 799 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mod_mod(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt64_460_u64;
	#line 800 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mod_mod_eq(__extension_UInt64_460_u64 & __this , T rhs)  -> typename __extension_UInt64_460_u64&;
	#line 805 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> auto _operator_mod_mod_qst(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_UInt64_460_u64, bool>;
	#line 814 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_sub_qst(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::Nullable<__extension_UInt64_460_u64>;
	#line 817 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline auto _operator_sub_ne(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND)  -> const typename __extension_UInt64_460_u64;
	#line 822 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_sub_mod(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND)  -> const typename __extension_UInt64_460_u64;
	#line 830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_sub_or(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND)  -> const typename __extension_UInt64_460_u64;
	#line 833 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_sub_mod_qst(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND)  -> const std::tuple<__extension_UInt64_460_u64, bool>;
	#line 841 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_lt_lt_qst(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<__extension_UInt64_460_u64>;
	#line 849 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_lt_lt_qst_eq(__extension_UInt64_460_u64 & __this , Builtin::i32 amount) noexcept -> typename __extension_UInt64_460_u64&;
	#line 857 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_lt_lt_ne(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename __extension_UInt64_460_u64;
	#line 865 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_lt_lt_ne_eq(__extension_UInt64_460_u64 & __this , Builtin::i32 amount)  -> typename __extension_UInt64_460_u64&;
	#line 867 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_lt_lt_mod(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename __extension_UInt64_460_u64;
	#line 870 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_lt_lt_mod_eq(__extension_UInt64_460_u64 & __this , Builtin::i32 amount) noexcept -> typename __extension_UInt64_460_u64&;
	#line 872 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_lt_lt_mod_qst(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<__extension_UInt64_460_u64, bool>;
	#line 875 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_gt_gt_qst(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<__extension_UInt64_460_u64>;
	#line 883 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_gt_gt_qst_eq(__extension_UInt64_460_u64 & __this , Builtin::i32 amount) noexcept -> typename __extension_UInt64_460_u64&;
	#line 891 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_gt_gt_ne(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename __extension_UInt64_460_u64;
	#line 899 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_gt_gt_ne_eq(__extension_UInt64_460_u64 & __this , Builtin::i32 amount)  -> typename __extension_UInt64_460_u64&;
	#line 901 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_gt_gt_mod(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename __extension_UInt64_460_u64;
	#line 904 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_gt_gt_mod_eq(__extension_UInt64_460_u64 & __this , Builtin::i32 amount) noexcept -> typename __extension_UInt64_460_u64&;
	#line 906 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_gt_gt_mod_qst(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<__extension_UInt64_460_u64, bool>;
	#line 911 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_xor_xor_qst(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const Builtin::Nullable<__extension_UInt64_460_u64>;
	#line 940 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_xor_xor_qst_eq(__extension_UInt64_460_u64 & __this , Builtin::u32 exp) noexcept -> typename __extension_UInt64_460_u64&;
	#line 948 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_xor_xor_ne(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename __extension_UInt64_460_u64;
	#line 969 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_xor_xor_ne_eq(__extension_UInt64_460_u64 & __this , Builtin::u32 exp)  -> typename __extension_UInt64_460_u64&;
	#line 971 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_xor_xor_mod(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename __extension_UInt64_460_u64;
	#line 1003 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_xor_xor_mod_eq(__extension_UInt64_460_u64 & __this , Builtin::u32 exp) noexcept -> typename __extension_UInt64_460_u64&;
	#line 1005 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_xor_xor_or(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename __extension_UInt64_460_u64;
	#line 1014 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_xor_xor_or_eq(__extension_UInt64_460_u64 & __this , Builtin::u32 exp) noexcept -> typename __extension_UInt64_460_u64&;
	#line 1016 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_xor_xor_mod_qst(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const std::tuple<__extension_UInt64_460_u64, bool>;
	#line 1046 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getCheckedAbs(__extension_UInt64_460_u64 const& __this ) -> const Builtin::Nullable<__extension_UInt64_460_u64>;
	#line 1048 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getStrictAbs(__extension_UInt64_460_u64 const& __this ) -> const __extension_UInt64_460_u64;
	#line 1050 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getWrappingAbs(__extension_UInt64_460_u64 const& __this ) -> const __extension_UInt64_460_u64;
	#line 1052 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getSaturatingAbs(__extension_UInt64_460_u64 const& __this ) -> const __extension_UInt64_460_u64;
	#line 1054 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getOverflowingAbs(__extension_UInt64_460_u64 const& __this ) -> const std::tuple<__extension_UInt64_460_u64, bool>;
	#line 460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(u64, ICheckedArithmetic, ICheckedArithmetic, u64);
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
#line 1057 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	using __extension_UInt64_1057_u64 = Builtin::u64;
	#line 1057 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ADV_CHECK_INTERFACE(IBinaryInteger, IBinaryInteger);
	#line 1096 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto NextMultipleOf(__extension_UInt64_1057_u64 const& __this LIFETIMEBOUND, __extension_UInt64_1057_u64 rhs)  -> const typename __extension_UInt64_1057_u64;
	#line 1104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto CheckedNextMultipleOf(__extension_UInt64_1057_u64 const& __this LIFETIMEBOUND, __extension_UInt64_1057_u64 rhs) noexcept -> const Builtin::Nullable<__extension_UInt64_1057_u64>;
	#line 1058 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class __TT> struct __static_getIsSigned; template<> struct __static_getIsSigned<__extension_UInt64_1057_u64> { static inline constexpr auto get() -> const bool; };
	#line 1060 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getTrailingZeroCount(__extension_UInt64_1057_u64 const& __this ) -> const Builtin::u32;
	#line 1061 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getTrailingOneCount(__extension_UInt64_1057_u64 const& __this ) -> const Builtin::u32;
	#line 1062 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getByteCount(__extension_UInt64_1057_u64 const& __this ) -> const Builtin::u32;
	#line 1063 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getMinimalBitWidth(__extension_UInt64_1057_u64 const& __this ) -> const Builtin::u32;
	#line 1066 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ASTRUMSTD_API auto getCheckedIsqrt(__extension_UInt64_1057_u64 const& __this ) -> const Builtin::Nullable<__extension_UInt64_1057_u64>;
	#line 1073 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline auto getIsqrt(__extension_UInt64_1057_u64 const& __this ) -> const __extension_UInt64_1057_u64;
	#line 1082 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getLog2Ceiling(__extension_UInt64_1057_u64 const& __this ) -> const __extension_UInt64_1057_u64;
	#line 1116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getPrevPow2(__extension_UInt64_1057_u64 const& __this ) -> const __extension_UInt64_1057_u64;
	#line 1127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getNextPow2(__extension_UInt64_1057_u64 const& __this ) -> const __extension_UInt64_1057_u64;
	#line 1139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getCheckedNextPow2(__extension_UInt64_1057_u64 const& __this ) -> const Builtin::Nullable<__extension_UInt64_1057_u64>;
	#line 1151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getWrappingNextPow2(__extension_UInt64_1057_u64 const& __this ) -> const __extension_UInt64_1057_u64;
	#line 1057 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(u64, IBinaryInteger, IBinaryInteger, u64);
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
#line 1162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	using __extension_UInt64_1162_u64 = Builtin::u64;
	#line 1162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ADV_CHECK_INTERFACE(IFixedWidthInteger, IFixedWidthInteger);
	#line 1188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto RotateLeft(__extension_UInt64_1162_u64 const& __this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename __extension_UInt64_1162_u64;
	#line 1189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto RotateRight(__extension_UInt64_1162_u64 const& __this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename __extension_UInt64_1162_u64;
	#line 1163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class __TT> struct __static_getBitWidth; template<> struct __static_getBitWidth<__extension_UInt64_1162_u64> { static inline constexpr auto get() -> const Builtin::u32; };
	#line 1165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getLeadingZeroCount(__extension_UInt64_1162_u64 const& __this ) -> const Builtin::u32;
	#line 1166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getLeadingOneCount(__extension_UInt64_1162_u64 const& __this ) -> const Builtin::u32;
	#line 1167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getPopCount(__extension_UInt64_1162_u64 const& __this ) -> const Builtin::u32;
	#line 1168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getZeroCount(__extension_UInt64_1162_u64 const& __this ) -> const Builtin::u32;
	#line 1169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getByteSwapped(__extension_UInt64_1162_u64 const& __this ) -> const __extension_UInt64_1162_u64;
	#line 1170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getBigEndian(__extension_UInt64_1162_u64 const& __this ) -> const __extension_UInt64_1162_u64;
	#line 1177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getLittleEndian(__extension_UInt64_1162_u64 const& __this ) -> const __extension_UInt64_1162_u64;
	#line 1184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getReverseBits(__extension_UInt64_1162_u64 const& __this ) -> const __extension_UInt64_1162_u64;
	#line 1186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getShortestBitLength(__extension_UInt64_1162_u64 const& __this ) -> const Builtin::u32;
	#line 1162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(u64, IFixedWidthInteger, IFixedWidthInteger, u64);
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
#line 1193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	using __extension_UInt64_1193_u64 = Builtin::u64;
	#line 1193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ADV_CHECK_INTERFACE(IBinaryIntegerFormatInfo, IBinaryIntegerFormatInfo);
	#line 1201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto IsGreaterThanAsUnsigned(__extension_UInt64_1193_u64 const& __this LIFETIMEBOUND, __extension_UInt64_1193_u64 rhs) noexcept -> const bool;
	#line 1194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class __TT> struct __static_getMaxDigitCount; template<> struct __static_getMaxDigitCount<__extension_UInt64_1193_u64> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class __TT> struct __static_getMaxHexDigitCount; template<> struct __static_getMaxHexDigitCount<__extension_UInt64_1193_u64> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class __TT> struct __static_getMaxValueDiv10; template<> struct __static_getMaxValueDiv10<__extension_UInt64_1193_u64> { static inline constexpr auto get() -> const __extension_UInt64_1193_u64; };
	#line 1198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getMultiplyBy10(__extension_UInt64_1193_u64 const& __this ) -> const __extension_UInt64_1193_u64;
	#line 1199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getMultiplyBy16(__extension_UInt64_1193_u64 const& __this ) -> const __extension_UInt64_1193_u64;
	#line 1193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(u64, IBinaryIntegerFormatInfo, IBinaryIntegerFormatInfo, u64);
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
#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto __static_getMinValue<__extension_UInt64_15_u64>::get() -> const __extension_UInt64_1193_u64
	{
		#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(Builtin::u64(0ULL)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto __static_getMaxValue<__extension_UInt64_15_u64>::get() -> const __extension_UInt64_1193_u64
	{
		#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(Builtin::u64(18446744073709551615ULL)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	
} namespace __extensions { using namespace System;
#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto operator<=>(__extension_UInt64_20_u64 const& __this LIFETIMEBOUND, Builtin::Nullable<__extension_UInt64_1193_u64> rhs) noexcept -> const Builtin::i32
	{
		#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		{
			#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			if ((!Builtin::Is(rhs, nullptr))) {
				#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				auto __tmp0 = *rhs; const auto& rhs = __tmp0;
				
				#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				return __this <=> rhs;
			}
		}
		#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return Builtin::i32(1);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_gt_gt_gt(__extension_UInt64_20_u64 const& __this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename __extension_UInt64_20_u64
	{
		#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(__this >> amount); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_gt_gt_gt_eq(__extension_UInt64_20_u64 & __this , Builtin::i32 amount)  -> typename __extension_UInt64_20_u64&
	{
		#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(__this >>= amount); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_lt_lt_bsl(__extension_UInt64_20_u64 const& __this LIFETIMEBOUND, Builtin::u64 amount) noexcept -> const typename __extension_UInt64_20_u64
	{
		#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if ((amount <=> ADV_USPCS(BitWidth, __extension_UInt64_1193_u64)()) >= 0) {
			#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return Builtin::u64(0ULL);
		}
		#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return Builtin::UncheckedShiftLeft(__this, Builtin::Cast<true, Builtin::i32>(amount));
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_lt_lt_bsl_eq(__extension_UInt64_20_u64 & __this , Builtin::u64 amount) noexcept -> typename __extension_UInt64_20_u64&
	{
		#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_lt_lt_bsl)(__this, amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_gt_gt_bsl(__extension_UInt64_20_u64 const& __this LIFETIMEBOUND, Builtin::u64 amount) noexcept -> const typename __extension_UInt64_20_u64
	{
		#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if ((amount <=> ADV_USPCS(BitWidth, __extension_UInt64_1193_u64)()) >= 0) {
			#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return Builtin::u64(0ULL);
		}
		#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return Builtin::UncheckedShiftRight(__this, Builtin::Cast<true, Builtin::i32>(amount));
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_gt_gt_bsl_eq(__extension_UInt64_20_u64 & __this , Builtin::u64 amount) noexcept -> typename __extension_UInt64_20_u64&
	{
		#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_gt_gt_bsl)(__this, amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getHashCode(__extension_UInt64_20_u64 const& __this ) -> const Builtin::u64
	{
		#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	
} namespace __extensions { using namespace System;
#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToBoolean(__extension_UInt64_88_u64 const& __this LIFETIMEBOUND) noexcept -> const bool
	{
		#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(__this != Builtin::i32(0)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToInt8(__extension_UInt64_88_u64 const& __this LIFETIMEBOUND)  -> const Builtin::i8
	{
		#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if ((__this <=> Builtin::i8((signed char)0x7F)) > 0) {
			#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return Builtin::Cast<true, Builtin::i8>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToUInt8(__extension_UInt64_88_u64 const& __this LIFETIMEBOUND)  -> const Builtin::u8
	{
		#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if ((__this <=> Builtin::u8((unsigned char)0xFF)) > 0) {
			#line 98 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return Builtin::Cast<true, Builtin::u8>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToInt16(__extension_UInt64_88_u64 const& __this LIFETIMEBOUND)  -> const Builtin::i16
	{
		#line 103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if ((__this <=> Builtin::i16((short)0x7FFF)) > 0) {
			#line 104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return Builtin::Cast<true, Builtin::i16>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToUInt16(__extension_UInt64_88_u64 const& __this LIFETIMEBOUND)  -> const Builtin::u16
	{
		#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if ((__this <=> Builtin::u16((unsigned short)0xFFFF)) > 0) {
			#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return Builtin::Cast<true, Builtin::u16>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToInt32(__extension_UInt64_88_u64 const& __this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if ((__this <=> Builtin::i32(0x7FFFFFFF)) > 0) {
			#line 116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return Builtin::Cast<true, Builtin::i32>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToUInt32(__extension_UInt64_88_u64 const& __this LIFETIMEBOUND)  -> const Builtin::u32
	{
		#line 121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if ((__this <=> Builtin::i64(0xFFFFFFFFLL)) > 0) {
			#line 122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return Builtin::Cast<true, Builtin::u32>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToInt64(__extension_UInt64_88_u64 const& __this LIFETIMEBOUND)  -> const Builtin::i64
	{
		#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if ((__this <=> Builtin::i64(0x7FFFFFFFFFFFFFFFLL)) > 0) {
			#line 128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return Builtin::Cast<true, Builtin::i64>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToUInt64(__extension_UInt64_88_u64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u64
	{
		#line 132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToInt128(__extension_UInt64_88_u64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i128
	{
		#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToUInt128(__extension_UInt64_88_u64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u128
	{
		#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToIsize(__extension_UInt64_88_u64 const& __this LIFETIMEBOUND)  -> const Builtin::isize
	{
		#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if constexpr (Builtin::usize(sizeof(Builtin::isize)) == Builtin::i32(32)) {
			#line 138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return ADV_UFCS(ToInt32)(__this.__ref());
		} else {
			#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			{
				#line 140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				return ADV_UFCS(ToInt64)(__this.__ref());
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToUsize(__extension_UInt64_88_u64 const& __this LIFETIMEBOUND)  -> const Builtin::usize
	{
		#line 145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if constexpr (Builtin::usize(sizeof(Builtin::isize)) == Builtin::usize(32U)) {
			#line 146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return ADV_UFCS(ToUInt32)(__this.__ref());
		} else {
			#line 147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			{
				#line 148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				return __this;
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToFloat32(__extension_UInt64_88_u64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::f32
	{
		#line 151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToFloat64(__extension_UInt64_88_u64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::f64
	{
		#line 152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToByte(__extension_UInt64_88_u64 const& __this LIFETIMEBOUND)  -> const Builtin::char8
	{
		#line 154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if ((__this <=> Builtin::i32(0xFF)) > 0) {
			#line 155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return Builtin::Cast<true, Builtin::u8>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto ToChar(__extension_UInt64_88_u64 const& __this LIFETIMEBOUND)  -> const Builtin::char16
	{
		#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if ((__this <=> Builtin::i64(0xFFFFFFFFLL)) > 0) {
			#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return Builtin::Cast<true, Builtin::u16>(__this);
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	
} namespace __extensions { using namespace System;
#line 172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_div_mod(__extension_UInt64_170_u64 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_UInt64_1193_u64, __extension_UInt64_1193_u64>
	{
		#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator /% implemented only for integer types");
		#line 175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return std::make_tuple(ADV_UFCS(_operator_bsl)(__this, rhs), __this % rhs);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_div_not(__extension_UInt64_170_u64 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt64_170_u64
	{
		#line 180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		auto result = __this; 
		#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		result /= rhs;
		#line 182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_div_not_eq(__extension_UInt64_170_u64 & __this , auto rhs)  -> typename __extension_UInt64_170_u64&
	{
		#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(__this /= rhs); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_div_lt(__extension_UInt64_170_u64 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt64_170_u64
	{
		#line 189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if constexpr (Builtin::TypeIs<T, IBinaryInteger>()) {
			#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return ADV_UFCS(_operator_bsl)(__this, rhs);
		} else {
			#line 191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			{
				#line 192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				return Builtin::Cast<true, __extension_UInt64_1193_u64>((ADV_UFCS(_operator_div_lt)(Builtin::f64{__this}, rhs)));
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_div_lt_eq(__extension_UInt64_170_u64 & __this , auto rhs)  -> typename __extension_UInt64_170_u64&
	{
		#line 196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(__this = __extension_UInt64_1193_u64{ADV_UFCS(_operator_div_lt)(__this, rhs)}); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_div_gt(__extension_UInt64_170_u64 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt64_170_u64
	{
		#line 200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if constexpr (Builtin::TypeIs<T, IBinaryInteger>()) {
			#line 201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			const auto& [div, rem] = ADV_UFCS(_operator_div_mod)(__this, rhs);
			#line 202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return (rem <=> Builtin::i32(0)) > 0 ? div + Builtin::i32(1) : div;
		} else {
			#line 203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			{
				#line 204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				return Builtin::Cast<true, __extension_UInt64_1193_u64>((ADV_UFCS(_operator_div_gt)(Builtin::f64{__this}, rhs)));
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_div_gt_eq(__extension_UInt64_170_u64 & __this , auto rhs)  -> typename __extension_UInt64_170_u64&
	{
		#line 208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(__this = __extension_UInt64_1193_u64{ADV_UFCS(_operator_div_gt)(__this, rhs)}); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	
} namespace __extensions { using namespace System;
#line 213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_bsl(__extension_UInt64_211_u64 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt64_211_u64
	{
		#line 213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Div)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_bsl_eq(__extension_UInt64_211_u64 & __this , T rhs)  -> typename __extension_UInt64_211_u64&
	{
		#line 215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(DivAssign)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl(__extension_UInt64_211_u64 const& __this LIFETIMEBOUND, T rhs)  -> const Builtin::Nullable<__extension_UInt64_1193_u64>
	{
		#line 222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\? implemented only for integer types");
		#line 223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		__extension_UInt64_1193_u64 result{}; 
		#line 224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (Builtin::DivExact(__this, rhs, result)) {
			#line 225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return result;
		}
		#line 227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return nullptr;
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	
} namespace __extensions { using namespace System;
#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_xor_xor(__extension_UInt64_231_u64 const& __this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename __extension_UInt64_231_u64
	{
		#line 236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return Builtin::u64(1ULL);
		}
		#line 241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		auto base = __this; 
		#line 242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		auto result = Builtin::u64(1ULL); 
		#line 244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (std::is_constant_evaluated()) {
			#line 245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			while ((exp <=> Builtin::i32(1)) > 0) 
			{
				#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
					#line 247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
					result *= base;
				}
				#line 249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
				#line 250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				base *= base;
			}
			#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return result * base;
		} else {
			#line 253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			{
				#line 254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				for (;;) 
				{
					#line 255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
					if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
						#line 256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
						result *= base;
						#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
						if (exp == Builtin::i32(1)) {
							#line 258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
							return result;
						}
					}
					#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
					ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
					#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
					base *= base;
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_xor_xor_eq(__extension_UInt64_231_u64 & __this , Builtin::u32 exp)  -> typename __extension_UInt64_231_u64&
	{
		#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_xor_xor)(__this, exp)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	
} namespace __extensions { using namespace System;
#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto MaxMagnitude(__extension_UInt64_269_u64 const& __this LIFETIMEBOUND, __extension_UInt64_1193_u64 rhs) noexcept -> const typename __extension_UInt64_269_u64
	{
		#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Max)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto MaxMagnitudeNumber(__extension_UInt64_269_u64 const& __this LIFETIMEBOUND, __extension_UInt64_1193_u64 rhs) noexcept -> const typename __extension_UInt64_269_u64
	{
		#line 294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Max)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto MinMagnitude(__extension_UInt64_269_u64 const& __this LIFETIMEBOUND, __extension_UInt64_1193_u64 rhs) noexcept -> const typename __extension_UInt64_269_u64
	{
		#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Min)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto MinMagnitudeNumber(__extension_UInt64_269_u64 const& __this LIFETIMEBOUND, __extension_UInt64_1193_u64 rhs) noexcept -> const typename __extension_UInt64_269_u64
	{
		#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Min)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto NarrowToInt8(__extension_UInt64_269_u64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i8
	{
		#line 310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i8>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto NarrowToUInt8(__extension_UInt64_269_u64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u8
	{
		#line 311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u8>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto NarrowToInt16(__extension_UInt64_269_u64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i16
	{
		#line 312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i16>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto NarrowToUInt16(__extension_UInt64_269_u64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u16
	{
		#line 313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u16>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto NarrowToInt32(__extension_UInt64_269_u64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i32
	{
		#line 314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i32>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto NarrowToUInt32(__extension_UInt64_269_u64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u32
	{
		#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u32>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto NarrowToInt64(__extension_UInt64_269_u64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i64
	{
		#line 316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i64>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto NarrowToUInt64(__extension_UInt64_269_u64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u64
	{
		#line 317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto NarrowToInt128(__extension_UInt64_269_u64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i128
	{
		#line 318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto NarrowToUInt128(__extension_UInt64_269_u64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u128
	{
		#line 319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto NarrowToIsize(__extension_UInt64_269_u64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::isize
	{
		#line 320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::isize>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto NarrowToUsize(__extension_UInt64_269_u64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::usize
	{
		#line 321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::usize>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto __static_getOne<__extension_UInt64_269_u64>::get() -> const __extension_UInt64_1193_u64
	{
		#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(Builtin::u64(1ULL)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto __static_getZero<__extension_UInt64_269_u64>::get() -> const __extension_UInt64_1193_u64
	{
		#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(Builtin::u64(0ULL)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto __static_getRadix<__extension_UInt64_269_u64>::get() -> const Builtin::i32
	{
		#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(2)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getAbs(__extension_UInt64_269_u64 const& __this ) -> const __extension_UInt64_1193_u64
	{
		#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsCanonical(__extension_UInt64_269_u64 const& __this ) -> const bool
	{
		#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(true); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsComplexNumber(__extension_UInt64_269_u64 const& __this ) -> const bool
	{
		#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(false); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsEvenInteger(__extension_UInt64_269_u64 const& __this ) -> const bool
	{
		#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY((__this & Builtin::u64(1ULL)) == Builtin::i32(0)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsFinite(__extension_UInt64_269_u64 const& __this ) -> const bool
	{
		#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(true); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsImaginaryNumber(__extension_UInt64_269_u64 const& __this ) -> const bool
	{
		#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(false); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsInfinity(__extension_UInt64_269_u64 const& __this ) -> const bool
	{
		#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(false); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsInteger(__extension_UInt64_269_u64 const& __this ) -> const bool
	{
		#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(true); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsNaN(__extension_UInt64_269_u64 const& __this ) -> const bool
	{
		#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(false); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsNegative(__extension_UInt64_269_u64 const& __this ) -> const bool
	{
		#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(false); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsNegativeInfinity(__extension_UInt64_269_u64 const& __this ) -> const bool
	{
		#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(false); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsNormal(__extension_UInt64_269_u64 const& __this ) -> const bool
	{
		#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(__this != Builtin::i32(0)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsOddInteger(__extension_UInt64_269_u64 const& __this ) -> const bool
	{
		#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY((__this & Builtin::u64(1ULL)) != Builtin::i32(0)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsPositive(__extension_UInt64_269_u64 const& __this ) -> const bool
	{
		#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(true); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsPositiveInfinity(__extension_UInt64_269_u64 const& __this ) -> const bool
	{
		#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(false); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsRealNumber(__extension_UInt64_269_u64 const& __this ) -> const bool
	{
		#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(true); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsSubnormal(__extension_UInt64_269_u64 const& __this ) -> const bool
	{
		#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(false); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsZero(__extension_UInt64_269_u64 const& __this ) -> const bool
	{
		#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(__this == Builtin::i32(0)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	
} namespace __extensions { using namespace System;
#line 331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto CopySign(__extension_UInt64_328_u64 const& __this LIFETIMEBOUND, __extension_UInt64_1193_u64 sign) noexcept -> const typename __extension_UInt64_328_u64
	{
		#line 331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto Max(__extension_UInt64_328_u64 const& __this LIFETIMEBOUND, __extension_UInt64_1193_u64 rhs) noexcept -> const typename __extension_UInt64_328_u64
	{
		#line 333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultMax)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto MaxNumber(__extension_UInt64_328_u64 const& __this LIFETIMEBOUND, __extension_UInt64_1193_u64 rhs) noexcept -> const typename __extension_UInt64_328_u64
	{
		#line 334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Max)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto Min(__extension_UInt64_328_u64 const& __this LIFETIMEBOUND, __extension_UInt64_1193_u64 rhs) noexcept -> const typename __extension_UInt64_328_u64
	{
		#line 335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultMin)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto MinNumber(__extension_UInt64_328_u64 const& __this LIFETIMEBOUND, __extension_UInt64_1193_u64 rhs) noexcept -> const typename __extension_UInt64_328_u64
	{
		#line 336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Min)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline auto Clamp(__extension_UInt64_328_u64 const& __this LIFETIMEBOUND, __extension_UInt64_1193_u64 min, __extension_UInt64_1193_u64 max)  -> const typename __extension_UInt64_328_u64
	{
		#line 337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultClamp)(__this, min, max)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getSign(__extension_UInt64_328_u64 const& __this ) -> const Builtin::i32
	{
		#line 329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(__this == Builtin::i32(0) ? Builtin::i32(0) : +Builtin::i32(1)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	
} namespace __extensions { using namespace System;
#line 404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto CheckedLog(__extension_UInt64_340_u64 const& __this LIFETIMEBOUND, __extension_UInt64_1193_u64 base) noexcept -> const Builtin::Nullable<__extension_UInt64_1193_u64>
	{
		#line 406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (__this == Builtin::i32(0) || (base <=> Builtin::i32(1)) <= 0) {
			#line 407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return nullptr;
		}
		#line 410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (std::is_constant_evaluated()) {
			#line 411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			if (base == Builtin::i32(2)) {
				#line 412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				return ADV_UPCS(CheckedLog2)(__this.__ref());
			}
			#line 414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			if (base == Builtin::i32(10)) {
				#line 415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				return ADV_UPCS(CheckedLog10)(__this.__ref());
			}
		}
		#line 419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if ((__this <=> base) < 0) {
			#line 420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return Builtin::u64(0ULL);
		}
		#line 423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		__extension_UInt64_1193_u64 n = Builtin::u64(1ULL); 
		#line 424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		auto r = base; 
		#line 425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		const auto baseRatio = ADV_UFCS(_operator_bsl)(__this, base); 
		#line 426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		while ((r <=> baseRatio) <= 0) 
		{
			#line 427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			++n;
			#line 428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			r *= base;
		}
		#line 431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return n;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto Midpoint(__extension_UInt64_340_u64 const& __this LIFETIMEBOUND, __extension_UInt64_1193_u64 rhs) noexcept -> const typename __extension_UInt64_340_u64
	{
		#line 447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(((__this ^ rhs) >> Builtin::i32(1)) + (__this & rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto IsMultipleOf(__extension_UInt64_340_u64 const& __this LIFETIMEBOUND, __extension_UInt64_1193_u64 rhs) noexcept -> const bool
	{
		#line 452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (rhs == Builtin::i32(0)) {
			#line 453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return __this == Builtin::i32(0);
		}
		#line 456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return __this % rhs == Builtin::i32(0);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto __static_getAllBitsSet<__extension_UInt64_340_u64>::get() -> const __extension_UInt64_1193_u64
	{
		#line 342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(MaxValue, Builtin::u64)()); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getIsPow2(__extension_UInt64_340_u64 const& __this ) -> const bool
	{
		#line 345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(PopCount)(__this.__ref()) == Builtin::i32(1)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getCheckedLog2(__extension_UInt64_340_u64 const& __this ) -> const Builtin::Nullable<__extension_UInt64_1193_u64>
	{
		#line 351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (__this == Builtin::i32(0)) {
			#line 352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return nullptr;
		}
		#line 355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return Builtin::Cast<true, __extension_UInt64_1193_u64>((ADV_USPCS(BitWidth, __extension_UInt64_1193_u64)() - Builtin::i32(1) - ADV_UPCS(LeadingZeroCount)(__this.__ref())));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getLog2(__extension_UInt64_340_u64 const& __this ) -> const __extension_UInt64_1193_u64
	{
		#line 361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (const auto result = ADV_UPCS(CheckedLog2)(__this.__ref())) {
			{
				#line 361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				return result;
			}
		}
		#line 364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getCheckedLog10(__extension_UInt64_340_u64 const& __this ) -> const Builtin::Nullable<__extension_UInt64_1193_u64>
	{
		#line 371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (__this == Builtin::i32(0)) {
			#line 372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return nullptr;
		}
		#line 375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		constexpr Builtin::u32 C1 = Builtin::u32(0b01100000000000000000U) - Builtin::u32(10U);
		#line 376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		constexpr Builtin::u32 C2 = Builtin::u32(0b10000000000000000000U) - Builtin::u32(100U);
		#line 377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		constexpr Builtin::u32 C3 = Builtin::u32(0b11100000000000000000U) - Builtin::u32(1000U);
		#line 378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		constexpr Builtin::u32 C4 = Builtin::u32(0b10000000000000000000U) - Builtin::u32(10000U);
		#line 379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		auto log = Builtin::u32(0U); 
		#line 380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		auto val1 = __this; 
		#line 381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if ((val1 <=> Builtin::i64(10000000000LL)) >= 0) {
			#line 382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			ADV_UFCS(DivAssign)(val1.__ref(), Builtin::u64(10000000000ULL));
			#line 383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			log += Builtin::i32(10);
		}
		#line 385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if ((val1 <=> Builtin::i32(100000)) >= 0) {
			#line 386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			ADV_UFCS(DivAssign)(val1.__ref(), Builtin::u32(100000U));
			#line 387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			log += Builtin::i32(5);
		}
		#line 389 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		const auto val = Builtin::Cast<true, Builtin::u32>(val1); 
		#line 390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return log + ((((val + C1) & (val + C2)) ^ ((val + C3) & (val + C4))) >> Builtin::i32(17));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getLog10(__extension_UInt64_340_u64 const& __this ) -> const __extension_UInt64_1193_u64
	{
		#line 396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (const auto result = ADV_UPCS(CheckedLog10)(__this.__ref())) {
			{
				#line 396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				return result;
			}
		}
		#line 399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	
} namespace __extensions { using namespace System;
#line 463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_add_qst(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_UInt64_1193_u64>
	{
		#line 465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +? implemented only for integer types");
		#line 466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		__extension_UInt64_1193_u64 result{}; 
		#line 467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (Builtin::SafeAdd(__this, rhs, result)) {
			#line 468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return result;
		}
		#line 470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_add_qst_eq(__extension_UInt64_460_u64 & __this , T rhs) noexcept -> typename __extension_UInt64_460_u64&
	{
		#line 474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +?= implemented only for integer types");
		#line 475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (const auto result = ADV_UFCS(_operator_add_qst)(__this, rhs)) {
			{
				#line 475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				__this = result;
			}
		}
		#line 478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_add_ne(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt64_460_u64
	{
		#line 485 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +! implemented only for integer types");
		#line 486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		__extension_UInt64_1193_u64 result{}; 
		#line 487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::StrictAdd(__this, rhs, result);
		#line 488 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_add_ne_eq(__extension_UInt64_460_u64 & __this , T rhs)  -> typename __extension_UInt64_460_u64&
	{
		#line 490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_add_ne)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_add_mod(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_UInt64_460_u64
	{
		#line 496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +% implemented only for integer types");
		#line 497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		__extension_UInt64_1193_u64 result{}; 
		#line 498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::WrappingAdd(__this, rhs, result);
		#line 499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_add_mod_eq(__extension_UInt64_460_u64 & __this , T rhs) noexcept -> typename __extension_UInt64_460_u64&
	{
		#line 501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_add_mod)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_add_or(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_UInt64_460_u64
	{
		#line 507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +| implemented only for integer types");
		#line 508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		__extension_UInt64_1193_u64 result{}; 
		#line 509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::SaturatingAdd(__this, rhs, result);
		#line 510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_add_or_eq(__extension_UInt64_460_u64 & __this , T rhs) noexcept -> typename __extension_UInt64_460_u64&
	{
		#line 512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_add_or)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_add_add_qst(__extension_UInt64_460_u64 & __this )  -> typename __extension_UInt64_460_u64&
	{
		#line 524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_qst_eq)(__this, Builtin::u64(1ULL))); 
	}
	inline constexpr auto _operator_add_add_qst_postfix(__extension_UInt64_460_u64 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_add_add_qst)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_add_add_ne(__extension_UInt64_460_u64 & __this )  -> typename __extension_UInt64_460_u64&
	{
		#line 527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_ne_eq)(__this, Builtin::u64(1ULL))); 
	}
	inline constexpr auto _operator_add_add_ne_postfix(__extension_UInt64_460_u64 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_add_add_ne)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_add_add_mod(__extension_UInt64_460_u64 & __this )  -> typename __extension_UInt64_460_u64&
	{
		#line 530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_mod_eq)(__this, Builtin::u64(1ULL))); 
	}
	inline constexpr auto _operator_add_add_mod_postfix(__extension_UInt64_460_u64 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_add_add_mod)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_add_add_or(__extension_UInt64_460_u64 & __this )  -> typename __extension_UInt64_460_u64&
	{
		#line 533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_or_eq)(__this, Builtin::u64(1ULL))); 
	}
	inline constexpr auto _operator_add_add_or_postfix(__extension_UInt64_460_u64 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_add_add_or)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto CarryingAdd(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, __extension_UInt64_1193_u64 rhs, bool carry) noexcept -> const std::tuple<__extension_UInt64_1193_u64, bool>
	{
		#line 539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		__extension_UInt64_1193_u64 result{}; 
		#line 540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		auto overflowed = Builtin::CarryingAdd(__this, rhs, carry, result); 
		#line 541 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto BorrowingSub(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, __extension_UInt64_1193_u64 rhs, bool carry) noexcept -> const std::tuple<__extension_UInt64_1193_u64, bool>
	{
		#line 548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		__extension_UInt64_1193_u64 result{}; 
		#line 549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		auto overflowed = Builtin::BorrowingSub(__this, rhs, carry, result); 
		#line 550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_sub_qst(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_UInt64_1193_u64>
	{
		#line 557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -? implemented only for integer types");
		#line 558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		__extension_UInt64_1193_u64 result{}; 
		#line 559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (Builtin::SafeSubtract(__this, rhs, result)) {
			#line 560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return result;
		}
		#line 562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_sub_qst_eq(__extension_UInt64_460_u64 & __this , T rhs) noexcept -> typename __extension_UInt64_460_u64&
	{
		#line 566 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -?= implemented only for integer types");
		#line 567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (const auto result = ADV_UFCS(_operator_sub_qst)(__this, rhs)) {
			{
				#line 567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				__this = result;
			}
		}
		#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_sub_ne(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt64_460_u64
	{
		#line 577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -! implemented only for integer types");
		#line 578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		__extension_UInt64_1193_u64 result{}; 
		#line 579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::StrictSubtract(__this, rhs, result);
		#line 580 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_sub_ne_eq(__extension_UInt64_460_u64 & __this , T rhs)  -> typename __extension_UInt64_460_u64&
	{
		#line 582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_sub_ne)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_sub_mod(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_UInt64_460_u64
	{
		#line 588 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -% implemented only for integer types");
		#line 589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		__extension_UInt64_1193_u64 result{}; 
		#line 590 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::WrappingSubtract(__this, rhs, result);
		#line 591 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_sub_mod_eq(__extension_UInt64_460_u64 & __this , T rhs) noexcept -> typename __extension_UInt64_460_u64&
	{
		#line 593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_sub_mod)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_sub_or(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_UInt64_460_u64
	{
		#line 599 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -| implemented only for integer types");
		#line 600 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		__extension_UInt64_1193_u64 result{}; 
		#line 601 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::SaturatingSubtract(__this, rhs, result);
		#line 602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_sub_or_eq(__extension_UInt64_460_u64 & __this , T rhs) noexcept -> typename __extension_UInt64_460_u64&
	{
		#line 604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_sub_or)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 616 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_sub_sub_qst(__extension_UInt64_460_u64 & __this )  -> typename __extension_UInt64_460_u64&
	{
		#line 616 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_qst_eq)(__this, Builtin::u64(1ULL))); 
	}
	inline constexpr auto _operator_sub_sub_qst_postfix(__extension_UInt64_460_u64 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_sub_sub_qst)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_sub_sub_ne(__extension_UInt64_460_u64 & __this )  -> typename __extension_UInt64_460_u64&
	{
		#line 619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_ne_eq)(__this, Builtin::u64(1ULL))); 
	}
	inline constexpr auto _operator_sub_sub_ne_postfix(__extension_UInt64_460_u64 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_sub_sub_ne)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 622 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_sub_sub_mod(__extension_UInt64_460_u64 & __this )  -> typename __extension_UInt64_460_u64&
	{
		#line 622 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_mod_eq)(__this, Builtin::u64(1ULL))); 
	}
	inline constexpr auto _operator_sub_sub_mod_postfix(__extension_UInt64_460_u64 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_sub_sub_mod)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 625 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_sub_sub_or(__extension_UInt64_460_u64 & __this )  -> typename __extension_UInt64_460_u64&
	{
		#line 625 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_or_eq)(__this, Builtin::u64(1ULL))); 
	}
	inline constexpr auto _operator_sub_sub_or_postfix(__extension_UInt64_460_u64 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_sub_sub_or)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mul_qst(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_UInt64_1193_u64>
	{
		#line 631 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *? implemented only for integer types");
		#line 632 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		__extension_UInt64_1193_u64 result{}; 
		#line 633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (Builtin::SafeMultiply(__this, rhs, result)) {
			#line 634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return result;
		}
		#line 636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mul_qst_eq(__extension_UInt64_460_u64 & __this , T rhs) noexcept -> typename __extension_UInt64_460_u64&
	{
		#line 640 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *?= implemented only for integer types");
		#line 641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (const auto result = ADV_UFCS(_operator_mul_qst)(__this, rhs)) {
			{
				#line 641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				__this = result;
			}
		}
		#line 644 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 649 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mul_ne(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt64_460_u64
	{
		#line 651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *! implemented only for integer types");
		#line 652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		__extension_UInt64_1193_u64 result{}; 
		#line 653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::StrictMultiply(__this, rhs, result);
		#line 654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 656 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mul_ne_eq(__extension_UInt64_460_u64 & __this , T rhs)  -> typename __extension_UInt64_460_u64&
	{
		#line 656 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_mul_ne)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mul_mod(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_UInt64_460_u64
	{
		#line 662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *% implemented only for integer types");
		#line 663 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		__extension_UInt64_1193_u64 result{}; 
		#line 664 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::WrappingMultiply(__this, rhs, result);
		#line 665 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 667 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mul_mod_eq(__extension_UInt64_460_u64 & __this , T rhs) noexcept -> typename __extension_UInt64_460_u64&
	{
		#line 667 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_mul_mod)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mul_or(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_UInt64_460_u64
	{
		#line 673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *| implemented only for integer types");
		#line 674 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		__extension_UInt64_1193_u64 result{}; 
		#line 675 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::SaturatingMultiply(__this, rhs, result);
		#line 676 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mul_or_eq(__extension_UInt64_460_u64 & __this , T rhs) noexcept -> typename __extension_UInt64_460_u64&
	{
		#line 678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_mul_or)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_mul_gt(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, __extension_UInt64_1193_u64 rhs) noexcept -> const std::tuple<Builtin::u64, Builtin::u64>
	{
		#line 693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		const auto& [low, high] = Builtin::WideningMul64u(__this, rhs);
		#line 694 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return std::make_tuple(low, high);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 700 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto CarryingMul(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, __extension_UInt64_1193_u64 rhs, __extension_UInt64_1193_u64 carry) noexcept -> const std::tuple<Builtin::u64, Builtin::u64>
	{
		#line 702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		const auto& [low, high] = Builtin::CarryingMul64u(__this, rhs, carry);
		#line 703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return std::make_tuple(low, high);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 708 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_bsl_qst(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_UInt64_1193_u64>
	{
		#line 710 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\? implemented only for integer types");
		#line 711 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		__extension_UInt64_1193_u64 result{}; 
		#line 712 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (Builtin::SafeDivide(__this, rhs, result)) {
			#line 713 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return result;
		}
		#line 715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 717 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_bsl_qst_eq(__extension_UInt64_460_u64 & __this , T rhs) noexcept -> typename __extension_UInt64_460_u64&
	{
		#line 719 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\?= implemented only for integer types");
		#line 720 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (const auto result = ADV_UFCS(_operator_bsl_qst)(__this, rhs)) {
			{
				#line 720 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 721 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				__this = result;
			}
		}
		#line 723 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 728 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_bsl_ne(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt64_460_u64
	{
		#line 728 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_bsl_ne_eq(__extension_UInt64_460_u64 & __this , T rhs)  -> typename __extension_UInt64_460_u64&
	{
		#line 729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl_eq)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 733 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_bsl_mod(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt64_460_u64
	{
		#line 733 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 734 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_eq(__extension_UInt64_460_u64 & __this , T rhs)  -> typename __extension_UInt64_460_u64&
	{
		#line 734 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl_eq)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_bsl_or(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt64_460_u64
	{
		#line 738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 739 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_bsl_or_eq(__extension_UInt64_460_u64 & __this , T rhs)  -> typename __extension_UInt64_460_u64&
	{
		#line 739 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl_eq)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 753 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_UInt64_1193_u64>
	{
		#line 755 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\? implemented only for integer types");
		#line 756 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		__extension_UInt64_1193_u64 result{}; 
		#line 757 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (Builtin::SafeDivExact(__this, rhs, result)) {
			#line 758 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return result;
		}
		#line 760 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 763 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst_eq(__extension_UInt64_460_u64 & __this , T rhs) noexcept -> typename __extension_UInt64_460_u64&
	{
		#line 765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\?= implemented only for integer types");
		#line 766 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (const auto result = ADV_UFCS(_operator_bsl_bsl_qst)(__this, rhs)) {
			{
				#line 766 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 767 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				__this = result;
			}
		}
		#line 769 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 774 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mod_qst(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_UInt64_1193_u64>
	{
		#line 776 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %? implemented only for integer types");
		#line 777 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		__extension_UInt64_1193_u64 result{}; 
		#line 778 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (Builtin::SafeModulus(__this, rhs, result)) {
			#line 779 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return result;
		}
		#line 781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 783 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mod_qst_eq(__extension_UInt64_460_u64 & __this , T rhs) noexcept -> typename __extension_UInt64_460_u64&
	{
		#line 785 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %?= implemented only for integer types");
		#line 786 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (const auto result = ADV_UFCS(_operator_mod_qst)(__this, rhs)) {
			{
				#line 786 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 787 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				__this = result;
			}
		}
		#line 789 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 794 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mod_ne(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt64_460_u64
	{
		#line 794 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(__this % rhs); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 795 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mod_ne_eq(__extension_UInt64_460_u64 & __this , T rhs)  -> typename __extension_UInt64_460_u64&
	{
		#line 795 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(__this %= rhs); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 799 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mod_mod(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt64_460_u64
	{
		#line 799 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(__this % rhs); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 800 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	template<class T> inline constexpr auto _operator_mod_mod_eq(__extension_UInt64_460_u64 & __this , T rhs)  -> typename __extension_UInt64_460_u64&
	{
		#line 800 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(__this %= rhs); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 814 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_sub_qst(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND) noexcept -> const Builtin::Nullable<__extension_UInt64_1193_u64>
	{
		#line 814 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(nullptr); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 817 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline auto _operator_sub_ne(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND)  -> const typename __extension_UInt64_460_u64
	{
		#line 819 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::Throw(Builtin::IntegerOverflowException{});
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 822 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_sub_mod(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND)  -> const typename __extension_UInt64_460_u64
	{
		#line 824 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		__extension_UInt64_1193_u64 result{}; 
		#line 825 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::WrappingNegate(__this, result);
		#line 826 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_sub_or(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND)  -> const typename __extension_UInt64_460_u64
	{
		#line 830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(Builtin::u64(0ULL)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 833 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_sub_mod_qst(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND)  -> const std::tuple<__extension_UInt64_1193_u64, bool>
	{
		#line 835 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		__extension_UInt64_1193_u64 result{}; 
		#line 836 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		auto __var_836_8 = Builtin::SafeNegate(__this, result); 
		#line 837 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return std::make_tuple(result, true);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 841 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_lt_lt_qst(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<__extension_UInt64_1193_u64>
	{
		#line 843 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, __extension_UInt64_1193_u64)()) < 0) {
			#line 844 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return Builtin::UncheckedShiftLeft(__this, amount);
		}
		#line 846 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 849 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_lt_lt_qst_eq(__extension_UInt64_460_u64 & __this , Builtin::i32 amount) noexcept -> typename __extension_UInt64_460_u64&
	{
		#line 851 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, __extension_UInt64_1193_u64)()) < 0) {
			#line 852 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return __this <<= amount;
		}
		#line 854 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 857 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_lt_lt_ne(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename __extension_UInt64_460_u64
	{
		#line 859 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, __extension_UInt64_1193_u64)()) < 0) {
			#line 860 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return Builtin::UncheckedShiftLeft(__this, amount);
		}
		#line 862 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::Throw(Builtin::IntegerOverflowException{});
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 865 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_lt_lt_ne_eq(__extension_UInt64_460_u64 & __this , Builtin::i32 amount)  -> typename __extension_UInt64_460_u64&
	{
		#line 865 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_lt_lt_ne)(__this, amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 867 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_lt_lt_mod(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename __extension_UInt64_460_u64
	{
		#line 867 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(Builtin::UncheckedShiftLeft(__this, amount & (ADV_USPCS(BitWidth, __extension_UInt64_1193_u64)() - Builtin::i32(1)))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 870 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_lt_lt_mod_eq(__extension_UInt64_460_u64 & __this , Builtin::i32 amount) noexcept -> typename __extension_UInt64_460_u64&
	{
		#line 870 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_lt_lt_mod)(__this, amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 872 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_lt_lt_mod_qst(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<__extension_UInt64_1193_u64, bool>
	{
		#line 872 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(std::make_tuple(ADV_UFCS(_operator_lt_lt_mod)(__this, amount), (amount <=> Builtin::i32(0)) < 0 || (amount <=> ADV_USPCS(BitWidth, __extension_UInt64_1193_u64)()) >= 0)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 875 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_gt_gt_qst(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<__extension_UInt64_1193_u64>
	{
		#line 877 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, __extension_UInt64_1193_u64)()) < 0) {
			#line 878 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return __this >> amount;
		}
		#line 880 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 883 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_gt_gt_qst_eq(__extension_UInt64_460_u64 & __this , Builtin::i32 amount) noexcept -> typename __extension_UInt64_460_u64&
	{
		#line 885 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, __extension_UInt64_1193_u64)()) < 0) {
			#line 886 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return __this >>= amount;
		}
		#line 888 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 891 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_gt_gt_ne(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename __extension_UInt64_460_u64
	{
		#line 893 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, __extension_UInt64_1193_u64)()) < 0) {
			#line 894 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return __this >> amount;
		}
		#line 896 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::Throw(Builtin::IntegerOverflowException{});
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 899 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_gt_gt_ne_eq(__extension_UInt64_460_u64 & __this , Builtin::i32 amount)  -> typename __extension_UInt64_460_u64&
	{
		#line 899 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_gt_gt_ne)(__this, amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 901 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_gt_gt_mod(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename __extension_UInt64_460_u64
	{
		#line 901 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(Builtin::UncheckedShiftRight(__this, amount & (ADV_USPCS(BitWidth, __extension_UInt64_1193_u64)() - Builtin::i32(1)))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 904 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_gt_gt_mod_eq(__extension_UInt64_460_u64 & __this , Builtin::i32 amount) noexcept -> typename __extension_UInt64_460_u64&
	{
		#line 904 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_gt_gt_mod)(__this, amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 906 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_gt_gt_mod_qst(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<__extension_UInt64_1193_u64, bool>
	{
		#line 906 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(std::make_tuple(ADV_UFCS(_operator_gt_gt_mod)(__this, amount), (amount <=> Builtin::i32(0)) < 0 || (amount <=> ADV_USPCS(BitWidth, __extension_UInt64_1193_u64)()) >= 0)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 911 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_xor_xor_qst(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const Builtin::Nullable<__extension_UInt64_1193_u64>
	{
		#line 913 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 915 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return Builtin::u64(1ULL);
		}
		#line 918 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		auto base = __this; 
		#line 919 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		auto result = Builtin::u64(1ULL); 
		#line 921 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		for (;;) 
		{
			#line 922 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 923 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				if (const auto mul = ADV_UFCS(_operator_mul_qst)(result, base)) {
					{
						#line 923 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
						auto __tmp0 = *mul; const auto& mul = __tmp0;
						
						#line 924 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
						result = mul;
					}
				} else {
					#line 925 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
					{
						#line 926 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
						return nullptr;
					}
				}
				#line 928 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				if (exp == Builtin::i32(1)) {
					#line 929 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
					return result;
				}
			}
			#line 931 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
			#line 932 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			if (const auto mul = ADV_UFCS(_operator_mul_qst)(base, base)) {
				{
					#line 932 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
					auto __tmp0 = *mul; const auto& mul = __tmp0;
					
					#line 933 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
					base = mul;
				}
			} else {
				#line 934 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				{
					#line 935 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
					return nullptr;
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 940 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_xor_xor_qst_eq(__extension_UInt64_460_u64 & __this , Builtin::u32 exp) noexcept -> typename __extension_UInt64_460_u64&
	{
		#line 942 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (auto result = ADV_UFCS(_operator_xor_xor_qst)(__this, exp)) {
			{
				#line 942 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 943 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				return __this = result;
			}
		}
		#line 945 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 948 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_xor_xor_ne(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename __extension_UInt64_460_u64
	{
		#line 950 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 952 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return Builtin::u64(1ULL);
		}
		#line 955 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		auto base = __this; 
		#line 956 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		auto result = Builtin::u64(1ULL); 
		#line 958 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		for (;;) 
		{
			#line 959 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 960 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				ADV_UFCS(_operator_mul_ne_eq)(result, base);
				#line 961 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				if (exp == Builtin::i32(1)) {
					#line 962 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
					return result;
				}
			}
			#line 964 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
			#line 965 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			ADV_UFCS(_operator_mul_ne_eq)(base, base);
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 969 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_xor_xor_ne_eq(__extension_UInt64_460_u64 & __this , Builtin::u32 exp)  -> typename __extension_UInt64_460_u64&
	{
		#line 969 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_xor_xor_ne)(__this, exp)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 971 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_xor_xor_mod(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename __extension_UInt64_460_u64
	{
		#line 973 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 975 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return Builtin::u64(1ULL);
		}
		#line 978 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		auto base = __this; 
		#line 979 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		auto result = Builtin::u64(1ULL); 
		#line 981 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (std::is_constant_evaluated()) {
			#line 982 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			while ((exp <=> Builtin::i32(1)) > 0) 
			{
				#line 983 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
					#line 984 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
					ADV_UFCS(_operator_mul_mod_eq)(result, base);
				}
				#line 986 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
				#line 987 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				ADV_UFCS(_operator_mul_mod_eq)(base, base);
			}
			#line 989 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return ADV_UFCS(_operator_mul_mod)(result, base);
		} else {
			#line 990 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			{
				#line 991 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				for (;;) 
				{
					#line 992 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
					if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
						#line 993 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
						ADV_UFCS(_operator_mul_mod_eq)(result, base);
						#line 994 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
						if (exp == Builtin::i32(1)) {
							#line 995 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
							return result;
						}
					}
					#line 997 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
					ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
					#line 998 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
					ADV_UFCS(_operator_mul_mod_eq)(base, base);
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1003 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_xor_xor_mod_eq(__extension_UInt64_460_u64 & __this , Builtin::u32 exp) noexcept -> typename __extension_UInt64_460_u64&
	{
		#line 1003 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_xor_xor_mod)(__this, exp)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1005 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_xor_xor_or(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename __extension_UInt64_460_u64
	{
		#line 1007 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (const auto result = ADV_UFCS(_operator_xor_xor_qst)(__this, exp)) {
			{
				#line 1007 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 1008 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				return result;
			}
		}
		#line 1011 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return ADV_USPCS(MaxValue, __extension_UInt64_1193_u64)();
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1014 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_xor_xor_or_eq(__extension_UInt64_460_u64 & __this , Builtin::u32 exp) noexcept -> typename __extension_UInt64_460_u64&
	{
		#line 1014 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_xor_xor_or)(__this, exp)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1016 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto _operator_xor_xor_mod_qst(__extension_UInt64_460_u64 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const std::tuple<__extension_UInt64_1193_u64, bool>
	{
		#line 1018 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1020 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return std::make_tuple(Builtin::u64(1ULL), false);
		}
		#line 1023 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		auto base = __this; 
		#line 1024 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		auto result = Builtin::u64(1ULL); 
		#line 1025 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		auto overflowed = false; 
		#line 1026 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		auto tmp = std::make_tuple(Builtin::u64(0ULL), false); 
		#line 1028 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		for (;;) 
		{
			#line 1029 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 1030 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				tmp = ADV_UFCS(_operator_mul_mod_qst)(result, base);
				#line 1031 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				if (exp == Builtin::i32(1)) {
					#line 1032 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
					std::get<1>(tmp) |= overflowed;
					#line 1033 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
					return tmp;
				}
				#line 1035 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				result = std::get<0>(tmp);
				#line 1036 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				overflowed |= std::get<1>(tmp);
			}
			#line 1038 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
			#line 1039 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			tmp = ADV_UFCS(_operator_mul_mod_qst)(base, base);
			#line 1040 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			base = std::get<0>(tmp);
			#line 1041 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			overflowed |= std::get<1>(tmp);
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1046 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getCheckedAbs(__extension_UInt64_460_u64 const& __this ) -> const Builtin::Nullable<__extension_UInt64_1193_u64>
	{
		#line 1046 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1048 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getStrictAbs(__extension_UInt64_460_u64 const& __this ) -> const __extension_UInt64_1193_u64
	{
		#line 1048 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1050 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getWrappingAbs(__extension_UInt64_460_u64 const& __this ) -> const __extension_UInt64_1193_u64
	{
		#line 1050 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1052 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getSaturatingAbs(__extension_UInt64_460_u64 const& __this ) -> const __extension_UInt64_1193_u64
	{
		#line 1052 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1054 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getOverflowingAbs(__extension_UInt64_460_u64 const& __this ) -> const std::tuple<__extension_UInt64_1193_u64, bool>
	{
		#line 1054 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(std::make_tuple(__this, false)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	
} namespace __extensions { using namespace System;
#line 1096 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto NextMultipleOf(__extension_UInt64_1057_u64 const& __this LIFETIMEBOUND, __extension_UInt64_1193_u64 rhs)  -> const typename __extension_UInt64_1057_u64
	{
		#line 1098 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		const auto rem = __this % rhs; 
		#line 1099 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return rem == Builtin::u32(0U) ? __this : __this + (rhs - rem);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto CheckedNextMultipleOf(__extension_UInt64_1057_u64 const& __this LIFETIMEBOUND, __extension_UInt64_1193_u64 rhs) noexcept -> const Builtin::Nullable<__extension_UInt64_1193_u64>
	{
		#line 1106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (const auto rem = ADV_UFCS(_operator_mod_qst)(__this, rhs)) {
			{
				#line 1106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				auto __tmp0 = *rem; const auto& rem = __tmp0;
				
				#line 1107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				if (rem == Builtin::u32(0U)) {
					#line 1108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
					return __this;
				}
				#line 1110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				return ADV_UFCS(_operator_add_qst)(__this, (rhs - rem));
			}
		}
		#line 1112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1058 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto __static_getIsSigned<__extension_UInt64_1057_u64>::get() -> const bool
	{
		#line 1058 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(false); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1060 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getTrailingZeroCount(__extension_UInt64_1057_u64 const& __this ) -> const Builtin::u32
	{
		#line 1060 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(Builtin::TrailingZeroCount(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1061 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getTrailingOneCount(__extension_UInt64_1057_u64 const& __this ) -> const Builtin::u32
	{
		#line 1061 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(Builtin::TrailingZeroCount(ADV_UFCS(_operator_not)(__this))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1062 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getByteCount(__extension_UInt64_1057_u64 const& __this ) -> const Builtin::u32
	{
		#line 1062 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u32>(Builtin::usize(sizeof(__extension_UInt64_1193_u64)))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1063 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getMinimalBitWidth(__extension_UInt64_1057_u64 const& __this ) -> const Builtin::u32
	{
		#line 1063 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(BitWidth, __extension_UInt64_1193_u64)() - ADV_UPCS(LeadingZeroCount)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1073 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline auto getIsqrt(__extension_UInt64_1057_u64 const& __this ) -> const __extension_UInt64_1193_u64
	{
		#line 1074 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (const auto result = ADV_UPCS(CheckedIsqrt)(__this.__ref())) {
			{
				#line 1074 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 1075 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				return result;
			}
		}
		#line 1077 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1082 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getLog2Ceiling(__extension_UInt64_1057_u64 const& __this ) -> const __extension_UInt64_1193_u64
	{
		#line 1084 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		auto result = ADV_UPCS(Log2)(__this.__ref()); 
		#line 1085 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (ADV_UPCS(PopCount)(__this.__ref()) != Builtin::u32(1U)) {
			#line 1086 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			++result;
		}
		#line 1089 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return result;
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getPrevPow2(__extension_UInt64_1057_u64 const& __this ) -> const __extension_UInt64_1193_u64
	{
		#line 1118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if ((__this <=> Builtin::u32(1U)) <= 0) {
			#line 1119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return Builtin::u64(0ULL);
		}
		#line 1122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return ADV_USPCS(One, __extension_UInt64_1193_u64)() << (ADV_UPCS(MinimalBitWidth)(__this.__ref()) - Builtin::u64(1ULL));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getNextPow2(__extension_UInt64_1057_u64 const& __this ) -> const __extension_UInt64_1193_u64
	{
		#line 1129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if ((__this <=> Builtin::u32(1U)) <= 0) {
			#line 1130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return Builtin::u64(0ULL);
		}
		#line 1133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		const auto p = __this - Builtin::u64(1ULL); 
		#line 1134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return (ADV_USPCS(AllBitsSet, __extension_UInt64_1193_u64)() >> ADV_UPCS(LeadingZeroCount)(p.__ref())) + Builtin::u64(1ULL);
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getCheckedNextPow2(__extension_UInt64_1057_u64 const& __this ) -> const Builtin::Nullable<__extension_UInt64_1193_u64>
	{
		#line 1141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if ((__this <=> Builtin::u32(1U)) <= 0) {
			#line 1142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return Builtin::u64(0ULL);
		}
		#line 1145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		const auto p = __this - Builtin::u64(1ULL); 
		#line 1146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return ADV_UFCS(_operator_add_qst)((ADV_USPCS(AllBitsSet, __extension_UInt64_1193_u64)() >> ADV_UPCS(LeadingZeroCount)(p.__ref())), Builtin::u64(1ULL));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getWrappingNextPow2(__extension_UInt64_1057_u64 const& __this ) -> const __extension_UInt64_1193_u64
	{
		#line 1153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if ((__this <=> Builtin::u32(1U)) <= 0) {
			#line 1154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return Builtin::u64(0ULL);
		}
		#line 1157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		const auto p = __this - Builtin::u64(1ULL); 
		#line 1158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return ADV_UFCS(_operator_add_mod)((ADV_USPCS(AllBitsSet, __extension_UInt64_1193_u64)() >> ADV_UPCS(LeadingZeroCount)(p.__ref())), Builtin::u64(1ULL));
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	
} namespace __extensions { using namespace System;
#line 1188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto RotateLeft(__extension_UInt64_1162_u64 const& __this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename __extension_UInt64_1162_u64
	{
		#line 1188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(Builtin::RotateLeft(__this, shiftAmount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto RotateRight(__extension_UInt64_1162_u64 const& __this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename __extension_UInt64_1162_u64
	{
		#line 1189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(Builtin::RotateRight(__this, shiftAmount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto __static_getBitWidth<__extension_UInt64_1162_u64>::get() -> const Builtin::u32
	{
		#line 1163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(64U)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getLeadingZeroCount(__extension_UInt64_1162_u64 const& __this ) -> const Builtin::u32
	{
		#line 1165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(Builtin::LeadingZeroCount(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getLeadingOneCount(__extension_UInt64_1162_u64 const& __this ) -> const Builtin::u32
	{
		#line 1166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(Builtin::LeadingZeroCount(ADV_UFCS(_operator_not)(__this))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getPopCount(__extension_UInt64_1162_u64 const& __this ) -> const Builtin::u32
	{
		#line 1167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(Builtin::PopCount(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getZeroCount(__extension_UInt64_1162_u64 const& __this ) -> const Builtin::u32
	{
		#line 1168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(Builtin::PopCount(ADV_UFCS(_operator_not)(__this))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getByteSwapped(__extension_UInt64_1162_u64 const& __this ) -> const __extension_UInt64_1193_u64
	{
		#line 1169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(Builtin::ByteSwap64(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getBigEndian(__extension_UInt64_1162_u64 const& __this ) -> const __extension_UInt64_1193_u64
	{
		#line 1172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if constexpr (Builtin::IsLittleEndian()) {
			#line 1173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return ADV_UPCS(ByteSwapped)(__this.__ref());
		}
		#line 1175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return __this;
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getLittleEndian(__extension_UInt64_1162_u64 const& __this ) -> const __extension_UInt64_1193_u64
	{
		#line 1179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if constexpr (Builtin::IsBigEndian()) {
			#line 1180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			return ADV_UPCS(ByteSwapped)(__this.__ref());
		}
		#line 1182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return __this;
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getReverseBits(__extension_UInt64_1162_u64 const& __this ) -> const __extension_UInt64_1193_u64
	{
		#line 1184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(Builtin::ReverseBits64u(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getShortestBitLength(__extension_UInt64_1162_u64 const& __this ) -> const Builtin::u32
	{
		#line 1186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(BitWidth, __extension_UInt64_1193_u64)() - ADV_UPCS(LeadingZeroCount)(__this.__ref())); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	
} namespace __extensions { using namespace System;
#line 1201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto IsGreaterThanAsUnsigned(__extension_UInt64_1193_u64 const& __this LIFETIMEBOUND, __extension_UInt64_1193_u64 rhs) noexcept -> const bool
	{
		#line 1201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY((__this <=> rhs) > 0); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto __static_getMaxDigitCount<__extension_UInt64_1193_u64>::get() -> const Builtin::i32
	{
		#line 1194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(20)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto __static_getMaxHexDigitCount<__extension_UInt64_1193_u64>::get() -> const Builtin::i32
	{
		#line 1195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(16)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto __static_getMaxValueDiv10<__extension_UInt64_1193_u64>::get() -> const __extension_UInt64_1193_u64
	{
		#line 1196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl)(ADV_USPCS(MaxValue, Builtin::u64)(), Builtin::i32(10))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getMultiplyBy10(__extension_UInt64_1193_u64 const& __this ) -> const __extension_UInt64_1193_u64
	{
		#line 1198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_mod)(__this, Builtin::u64(10ULL))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	inline constexpr auto getMultiplyBy16(__extension_UInt64_1193_u64 const& __this ) -> const __extension_UInt64_1193_u64
	{
		#line 1199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_mod)(__this, Builtin::u64(16ULL))); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	

}